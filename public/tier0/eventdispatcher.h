
//
// public/tier0/eventdispatcher.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 76
//	classes: 44
//

// <0009BB79> ../public/tier0/eventdispatcher.h:49
// member functions: 19
// member variables: 2
// class size: 32
class CEventDispatcher_Base {
	/* ../public/tier0/eventdispatcher.h:57 */
	struct EventListenerInfo_t {
		CUtlAbstractDelegate m_Delegate; /* 0 24 */
		const char * m_pszName; /* 24 8 */
		int32 m_nPriority; /* 32 4 */
		uint8 m_nDelegateParamCount; /* 36 1 */
		bool m_bDelegateReturnsVoid; /* 37 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:79 */
	struct DelegateIterator_Base_t {
		const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> pListeners; /* 0 8 */
		CUtlVectorFixedGrowable<int, 4> skipListeners __attribute__((__aligned__(8))); /* 8 48 */
		int nCurrent; /* 56 4 */
		DelegateIterator_Base_t * pNext; /* 64 8 */
		bool bIteratingForward; /* 72 1 */
		void ~DelegateIterator_Base_t(DelegateIterator_Base_t* );
		void DelegateIterator_Base_t(DelegateIterator_Base_t* );
	} __attribute__((__aligned__(8)));
protected:
	/* ../public/tier0/eventdispatcher.h:55 */
	void CEventDispatcher_Base(CEventDispatcher_Base* );
	/* ../public/tier0/eventdispatcher.h:73 */
	void RegisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , unsigned int, bool, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& , int, const char* );
	/* ../public/tier0/eventdispatcher.h:74 */
	bool UnregisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& );
	/* ../public/tier0/eventdispatcher.h:77 */
	void GetListenerNames_Base(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:88 */
	bool IterateListeners_Start(CEventDispatcher_Base* , DelegateIterator_Base_t& , bool);
	/* ../public/tier0/eventdispatcher.h:89 */
	const EventListenerInfo_t* IterateListener(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:90 */
	void IterateListeners_End(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:93 */
	int FindInsertionPoint(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int);
	CThreadFastMutex m_Lock; /* 0 24 */
	DelegateIterator_Base_t * m_pActiveIterators; /* 24 8 */
	void CEventDispatcher_Base(class CEventDispatcher_Base *); /* linkage=_ZN21CEventDispatcher_BaseC4Ev */
	void RegisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, unsigned int, bool, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &, int, const char  *); /* linkage=_ZN21CEventDispatcher_Base26RegisterEventListener_BaseERK20CUtlAbstractDelegatejbR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEEiPKc */
	bool UnregisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &); /* linkage=_ZN21CEventDispatcher_Base28UnregisterEventListener_BaseERK20CUtlAbstractDelegateR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEE */
	void GetListenerNames_Base(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN21CEventDispatcher_Base21GetListenerNames_BaseERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEPS0_I10CUtlStringS2_IS7_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Base *, class DelegateIterator_Base_t &, bool); /* linkage=_ZN21CEventDispatcher_Base22IterateListeners_StartERNS_23DelegateIterator_Base_tEb */
	const class EventListenerInfo_t  * IterateListener(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base15IterateListenerERNS_23DelegateIterator_Base_tE */
	void IterateListeners_End(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base20IterateListeners_EndERNS_23DelegateIterator_Base_tE */
	int FindInsertionPoint(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int); /* linkage=_ZN21CEventDispatcher_Base18FindInsertionPointERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEi */
};

// <0019D13D> ../public/tier0/eventdispatcher.h:49
// member functions: 17
// member variables: 2
// class size: 32
class CEventDispatcher_Base {
	/* ../public/tier0/eventdispatcher.h:57 */
	struct EventListenerInfo_t {
		CUtlAbstractDelegate m_Delegate; /* 0 24 */
		const char * m_pszName; /* 24 8 */
		int32 m_nPriority; /* 32 4 */
		uint8 m_nDelegateParamCount; /* 36 1 */
		bool m_bDelegateReturnsVoid; /* 37 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:79 */
	struct DelegateIterator_Base_t {
		const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> pListeners; /* 0 8 */
		CUtlVectorFixedGrowable<int, 4> skipListeners __attribute__((__aligned__(8))); /* 8 48 */
		int nCurrent; /* 56 4 */
		DelegateIterator_Base_t * pNext; /* 64 8 */
		bool bIteratingForward; /* 72 1 */
	} __attribute__((__aligned__(8)));
protected:
	/* ../public/tier0/eventdispatcher.h:55 */
	void CEventDispatcher_Base(CEventDispatcher_Base* );
	/* ../public/tier0/eventdispatcher.h:73 */
	void RegisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , unsigned int, bool, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& , int, const char* );
	/* ../public/tier0/eventdispatcher.h:74 */
	bool UnregisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& );
	/* ../public/tier0/eventdispatcher.h:77 */
	void GetListenerNames_Base(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:88 */
	bool IterateListeners_Start(CEventDispatcher_Base* , DelegateIterator_Base_t& , bool);
	/* ../public/tier0/eventdispatcher.h:89 */
	const EventListenerInfo_t* IterateListener(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:90 */
	void IterateListeners_End(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:93 */
	int FindInsertionPoint(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int);
	CThreadFastMutex m_Lock; /* 0 24 */
	DelegateIterator_Base_t * m_pActiveIterators; /* 24 8 */
	void CEventDispatcher_Base(class CEventDispatcher_Base *); /* linkage=_ZN21CEventDispatcher_BaseC4Ev */
	void RegisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, unsigned int, bool, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &, int, const char  *); /* linkage=_ZN21CEventDispatcher_Base26RegisterEventListener_BaseERK20CUtlAbstractDelegatejbR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEEiPKc */
	bool UnregisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &); /* linkage=_ZN21CEventDispatcher_Base28UnregisterEventListener_BaseERK20CUtlAbstractDelegateR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEE */
	void GetListenerNames_Base(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN21CEventDispatcher_Base21GetListenerNames_BaseERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEPS0_I10CUtlStringS2_IS7_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Base *, class DelegateIterator_Base_t &, bool); /* linkage=_ZN21CEventDispatcher_Base22IterateListeners_StartERNS_23DelegateIterator_Base_tEb */
	const class EventListenerInfo_t  * IterateListener(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base15IterateListenerERNS_23DelegateIterator_Base_tE */
	void IterateListeners_End(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base20IterateListeners_EndERNS_23DelegateIterator_Base_tE */
	int FindInsertionPoint(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int); /* linkage=_ZN21CEventDispatcher_Base18FindInsertionPointERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEi */
};

// <0042188A> ../public/tier0/eventdispatcher.h:49
// member functions: 19
// member variables: 2
// class size: 32
class CEventDispatcher_Base {
	/* ../public/tier0/eventdispatcher.h:57 */
	struct EventListenerInfo_t {
		CUtlAbstractDelegate m_Delegate; /* 0 24 */
		const char * m_pszName; /* 24 8 */
		int32 m_nPriority; /* 32 4 */
		uint8 m_nDelegateParamCount; /* 36 1 */
		bool m_bDelegateReturnsVoid; /* 37 1 */
		void EventListenerInfo_t(EventListenerInfo_t* );
		EventListenerInfo_t& operator=(EventListenerInfo_t* , const EventListenerInfo_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:79 */
	struct DelegateIterator_Base_t {
		const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> pListeners; /* 0 8 */
		CUtlVectorFixedGrowable<int, 4> skipListeners __attribute__((__aligned__(8))); /* 8 48 */
		int nCurrent; /* 56 4 */
		DelegateIterator_Base_t * pNext; /* 64 8 */
		bool bIteratingForward; /* 72 1 */
	} __attribute__((__aligned__(8)));
protected:
	/* ../public/tier0/eventdispatcher.h:55 */
	void CEventDispatcher_Base(CEventDispatcher_Base* );
	/* ../public/tier0/eventdispatcher.h:73 */
	void RegisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , unsigned int, bool, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& , int, const char* );
	/* ../public/tier0/eventdispatcher.h:74 */
	bool UnregisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& );
	/* ../public/tier0/eventdispatcher.h:77 */
	void GetListenerNames_Base(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:88 */
	bool IterateListeners_Start(CEventDispatcher_Base* , DelegateIterator_Base_t& , bool);
	/* ../public/tier0/eventdispatcher.h:89 */
	const EventListenerInfo_t* IterateListener(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:90 */
	void IterateListeners_End(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:93 */
	int FindInsertionPoint(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int);
	CThreadFastMutex m_Lock; /* 0 24 */
	DelegateIterator_Base_t * m_pActiveIterators; /* 24 8 */
	void CEventDispatcher_Base(class CEventDispatcher_Base *); /* linkage=_ZN21CEventDispatcher_BaseC4Ev */
	void RegisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, unsigned int, bool, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &, int, const char  *); /* linkage=_ZN21CEventDispatcher_Base26RegisterEventListener_BaseERK20CUtlAbstractDelegatejbR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEEiPKc */
	bool UnregisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &); /* linkage=_ZN21CEventDispatcher_Base28UnregisterEventListener_BaseERK20CUtlAbstractDelegateR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEE */
	void GetListenerNames_Base(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN21CEventDispatcher_Base21GetListenerNames_BaseERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEPS0_I10CUtlStringS2_IS7_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Base *, class DelegateIterator_Base_t &, bool); /* linkage=_ZN21CEventDispatcher_Base22IterateListeners_StartERNS_23DelegateIterator_Base_tEb */
	const class EventListenerInfo_t  * IterateListener(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base15IterateListenerERNS_23DelegateIterator_Base_tE */
	void IterateListeners_End(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base20IterateListeners_EndERNS_23DelegateIterator_Base_tE */
	int FindInsertionPoint(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int); /* linkage=_ZN21CEventDispatcher_Base18FindInsertionPointERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEi */
};

// <0010B065> ../public/tier0/eventdispatcher.h:49
// member functions: 18
// member variables: 2
// class size: 32
class CEventDispatcher_Base {
	/* ../public/tier0/eventdispatcher.h:57 */
	struct EventListenerInfo_t {
		/* ../public/tier0/eventdispatcher.h:60 */
		enum {
			PARAMETER_COUNT_BITS = 8,
		};
		CUtlAbstractDelegate m_Delegate; /* 0 24 */
		const char * m_pszName; /* 24 8 */
		int32 m_nPriority; /* 32 4 */
		uint8 m_nDelegateParamCount; /* 36 1 */
		bool m_bDelegateReturnsVoid; /* 37 1 */
		void EventListenerInfo_t(EventListenerInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:79 */
	struct DelegateIterator_Base_t {
		const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> pListeners; /* 0 8 */
		CUtlVectorFixedGrowable<int, 4> skipListeners __attribute__((__aligned__(8))); /* 8 48 */
		int nCurrent; /* 56 4 */
		DelegateIterator_Base_t * pNext; /* 64 8 */
		bool bIteratingForward; /* 72 1 */
	} __attribute__((__aligned__(8)));
protected:
	/* ../public/tier0/eventdispatcher.h:55 */
	void CEventDispatcher_Base(CEventDispatcher_Base* );
	/* ../public/tier0/eventdispatcher.h:73 */
	void RegisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , unsigned int, bool, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& , int, const char* );
	/* ../public/tier0/eventdispatcher.h:74 */
	bool UnregisterEventListener_Base(CEventDispatcher_Base* , const CUtlAbstractDelegate& , CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& );
	/* ../public/tier0/eventdispatcher.h:77 */
	void GetListenerNames_Base(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:88 */
	bool IterateListeners_Start(CEventDispatcher_Base* , DelegateIterator_Base_t& , bool);
	/* ../public/tier0/eventdispatcher.h:89 */
	const EventListenerInfo_t* IterateListener(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:90 */
	void IterateListeners_End(CEventDispatcher_Base* , DelegateIterator_Base_t& );
	/* ../public/tier0/eventdispatcher.h:93 */
	int FindInsertionPoint(CEventDispatcher_Base* , const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int);
	CThreadFastMutex m_Lock; /* 0 24 */
	DelegateIterator_Base_t * m_pActiveIterators; /* 24 8 */
	void CEventDispatcher_Base(class CEventDispatcher_Base *); /* linkage=_ZN21CEventDispatcher_BaseC4Ev */
	void RegisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, unsigned int, bool, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &, int, const char  *); /* linkage=_ZN21CEventDispatcher_Base26RegisterEventListener_BaseERK20CUtlAbstractDelegatejbR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEEiPKc */
	bool UnregisterEventListener_Base(class CEventDispatcher_Base *, const class CUtlAbstractDelegate  &, class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &); /* linkage=_ZN21CEventDispatcher_Base28UnregisterEventListener_BaseERK20CUtlAbstractDelegateR10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS4_iEE */
	void GetListenerNames_Base(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN21CEventDispatcher_Base21GetListenerNames_BaseERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEPS0_I10CUtlStringS2_IS7_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Base *, class DelegateIterator_Base_t &, bool); /* linkage=_ZN21CEventDispatcher_Base22IterateListeners_StartERNS_23DelegateIterator_Base_tEb */
	const class EventListenerInfo_t  * IterateListener(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base15IterateListenerERNS_23DelegateIterator_Base_tE */
	void IterateListeners_End(class CEventDispatcher_Base *, class DelegateIterator_Base_t &); /* linkage=_ZN21CEventDispatcher_Base20IterateListeners_EndERNS_23DelegateIterator_Base_tE */
	int FindInsertionPoint(class CEventDispatcher_Base *, const class CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int); /* linkage=_ZN21CEventDispatcher_Base18FindInsertionPointERK10CUtlVectorINS_19EventListenerInfo_tE10CUtlMemoryIS1_iEEi */
};

// <00228FCD> ../public/tier0/eventdispatcher.h:55
void CEventDispatcher_Base::CEventDispatcher_Base()
{
} /* size: 0 */

// <0066DCF7> ../public/tier0/eventdispatcher.h:57
inline void EventListenerInfo_t::operator=(const EventListenerInfo_t &)
{
} /* size: 0 */

// <0066DB63> ../public/tier0/eventdispatcher.h:57
void EventListenerInfo_t::EventListenerInfo_t()
{
} /* size: 0 */

// <0066DB47> ../public/tier0/eventdispatcher.h:57
inline void EventListenerInfo_t::EventListenerInfo_t()
{
} /* size: 0 */

// <0035FBF0> ../public/tier0/eventdispatcher.h:79
void DelegateIterator_Base_t::DelegateIterator_Base_t()
{
} /* size: 0 */

// <0035FBD4> ../public/tier0/eventdispatcher.h:79
inline void DelegateIterator_Base_t::DelegateIterator_Base_t()
{
} /* size: 0 */

// <0035FBBD> ../public/tier0/eventdispatcher.h:79
void DelegateIterator_Base_t::~DelegateIterator_Base_t()
{
} /* size: 0 */

// <0035FBA1> ../public/tier0/eventdispatcher.h:79
inline void DelegateIterator_Base_t::~DelegateIterator_Base_t()
{
} /* size: 0 */

// <0023BFE3> ../public/tier0/eventdispatcher.h:100
void CEventDispatcher_Identified<CEventIDManager_Default>::~CEventDispatcher_Identified()
{
} /* size: 0 */

// <0023BFC7> ../public/tier0/eventdispatcher.h:100
inline void CEventDispatcher_Identified<CEventIDManager_Default>::~CEventDispatcher_Identified()
{
} /* size: 0 */

// <0009F7D8> ../public/tier0/eventdispatcher.h:100
// member functions: 27
// member variables: 2
// class size: 80
class CEventDispatcher_Identified<CEventIDManager_Default> : public CEventDispatcher_Base {
public:
	/* class CEventDispatcher_Base <ancestor>; */ /* 0 32 */
	/* ../public/tier0/eventdispatcher.h:1127 */
	void CEventDispatcher_Identified(CEventDispatcher_Identified<CEventIDManager_Default>* , int);
	/* ../public/tier0/eventdispatcher.h:1140 */
	const char* GetEventName(EventID_t, char* , size_t);
	/* ../public/tier0/eventdispatcher.h:104 */
	typedef EventID_t EventID_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:1196 */
	bool HasListeners(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:1220 */
	void GetListenerNames(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:1235 */
	bool IterateListeners_Start(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& , EventID_t, bool);
	/* ../public/tier0/eventdispatcher.h:106 */
	struct DelegateIterator_t : public DelegateIterator_Base_t {
	public:
		/* struct DelegateIterator_Base_t <ancestor>; */ /* 0 80 */
		EventID_t EventID; /* 80 8 */
		void ~DelegateIterator_t(DelegateIterator_t* );
		void DelegateIterator_t(DelegateIterator_t* );
	} __attribute__((__aligned__(8)));
	/* ../public/tier0/eventdispatcher.h:1260 */
	void IterateListeners_End(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& );
	/* ../public/tier0/eventdispatcher.h:1267 */
	bool IDLessFunc(const EventID_t& , const EventID_t& );
	/* ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , EventID_t);
protected:
	/* ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , unsigned int, bool, EventID_t, int, const char* );
	/* ../public/tier0/eventdispatcher.h:134 */
	void RegisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
	/* ../public/tier0/eventdispatcher.h:135 */
	void UnregisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
private:
	CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)> m_EventListenerMap; /* 32 48* /
	void CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *, int); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultEC4Ei */
	const char  * GetEventName(EventID_t, char *, size_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12GetEventNameEPK16CSchemaClassInfoPcm */
	bool HasListeners(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12HasListenersEPK16CSchemaClassInfo */
	void GetListenerNames(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE16GetListenerNamesEPK16CSchemaClassInfoP10CUtlVectorI10CUtlString10CUtlMemoryIS6_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &, EventID_t, bool); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE22IterateListeners_StartERNS1_18DelegateIterator_tEPK16CSchemaClassInfob */
	void IterateListeners_End(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE20IterateListeners_EndERNS1_18DelegateIterator_tE */
	bool IDLessFunc(const EventID_t  &, const EventID_t  &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE10IDLessFuncERKPK16CSchemaClassInfoS6_ */
	/* <5b2152> ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE32UnregisterEventListener_AbstractERK20CUtlAbstractDelegatePK16CSchemaClassInfo */
	/* <6918bb> ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, unsigned int, bool, EventID_t, int, const char  *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE30RegisterEventListener_AbstractERK20CUtlAbstractDelegatejbPK16CSchemaClassInfoiPKc */
	void RegisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE21RegisterEventListenerEv */
	void UnregisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE23UnregisterEventListenerEv */
	void ~CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultED4Ev */
};

// <001A0795> ../public/tier0/eventdispatcher.h:100
// member functions: 25
// member variables: 2
// class size: 80
class CEventDispatcher_Identified<CEventIDManager_Default> : public CEventDispatcher_Base {
public:
	/* class CEventDispatcher_Base <ancestor>; */ /* 0 32 */
	/* ../public/tier0/eventdispatcher.h:1127 */
	void CEventDispatcher_Identified(CEventDispatcher_Identified<CEventIDManager_Default>* , int);
	/* ../public/tier0/eventdispatcher.h:1140 */
	const char* GetEventName(EventID_t, char* , size_t);
	/* ../public/tier0/eventdispatcher.h:104 */
	typedef EventID_t EventID_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:1196 */
	bool HasListeners(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:1220 */
	void GetListenerNames(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:1235 */
	bool IterateListeners_Start(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& , EventID_t, bool);
	struct DelegateIterator_t {
	};
	/* ../public/tier0/eventdispatcher.h:1260 */
	void IterateListeners_End(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& );
	/* ../public/tier0/eventdispatcher.h:1267 */
	bool IDLessFunc(const EventID_t& , const EventID_t& );
	/* ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , EventID_t);
protected:
	/* ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , unsigned int, bool, EventID_t, int, const char* );
	/* ../public/tier0/eventdispatcher.h:134 */
	void RegisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
	/* ../public/tier0/eventdispatcher.h:135 */
	void UnregisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
private:
	CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)> m_EventListenerMap; /* 32 48* /
	void ~CEventDispatcher_Identified(CEventDispatcher_Identified<CEventIDManager_Default>* );
	void CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *, int); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultEC4Ei */
	const char  * GetEventName(EventID_t, char *, size_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12GetEventNameEPK16CSchemaClassInfoPcm */
	bool HasListeners(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12HasListenersEPK16CSchemaClassInfo */
	void GetListenerNames(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE16GetListenerNamesEPK16CSchemaClassInfoP10CUtlVectorI10CUtlString10CUtlMemoryIS6_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &, EventID_t, bool); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE22IterateListeners_StartERNS1_18DelegateIterator_tEPK16CSchemaClassInfob */
	void IterateListeners_End(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE20IterateListeners_EndERNS1_18DelegateIterator_tE */
	bool IDLessFunc(const EventID_t  &, const EventID_t  &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE10IDLessFuncERKPK16CSchemaClassInfoS6_ */
	/* <5b2152> ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE32UnregisterEventListener_AbstractERK20CUtlAbstractDelegatePK16CSchemaClassInfo */
	/* <6918bb> ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, unsigned int, bool, EventID_t, int, const char  *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE30RegisterEventListener_AbstractERK20CUtlAbstractDelegatejbPK16CSchemaClassInfoiPKc */
	void RegisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE21RegisterEventListenerEv */
	void UnregisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE23UnregisterEventListenerEv */
	void ~CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultED4Ev */
};

// <0027B404> ../public/tier0/eventdispatcher.h:100
// member functions: 24
// member variables: 2
// class size: 80
class CEventDispatcher_Identified<CEventIDManager_Default> : public CEventDispatcher_Base {
public:
	/* class CEventDispatcher_Base <ancestor>; */ /* 0 32 */
	/* ../public/tier0/eventdispatcher.h:1127 */
	void CEventDispatcher_Identified(CEventDispatcher_Identified<CEventIDManager_Default>* , int);
	/* ../public/tier0/eventdispatcher.h:1140 */
	const char* GetEventName(EventID_t, char* , size_t);
	/* ../public/tier0/eventdispatcher.h:104 */
	typedef EventID_t EventID_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:1196 */
	bool HasListeners(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:1220 */
	void GetListenerNames(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:1235 */
	bool IterateListeners_Start(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& , EventID_t, bool);
	struct DelegateIterator_t {
	};
	/* ../public/tier0/eventdispatcher.h:1260 */
	void IterateListeners_End(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& );
	/* ../public/tier0/eventdispatcher.h:1267 */
	bool IDLessFunc(const EventID_t& , const EventID_t& );
	/* ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , EventID_t);
protected:
	/* ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , unsigned int, bool, EventID_t, int, const char* );
	/* ../public/tier0/eventdispatcher.h:134 */
	void RegisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
	/* ../public/tier0/eventdispatcher.h:135 */
	void UnregisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
private:
	CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)> m_EventListenerMap; /* 32 48* /
	void CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *, int); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultEC4Ei */
	const char  * GetEventName(EventID_t, char *, size_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12GetEventNameEPK16CSchemaClassInfoPcm */
	bool HasListeners(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12HasListenersEPK16CSchemaClassInfo */
	void GetListenerNames(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE16GetListenerNamesEPK16CSchemaClassInfoP10CUtlVectorI10CUtlString10CUtlMemoryIS6_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &, EventID_t, bool); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE22IterateListeners_StartERNS1_18DelegateIterator_tEPK16CSchemaClassInfob */
	void IterateListeners_End(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE20IterateListeners_EndERNS1_18DelegateIterator_tE */
	bool IDLessFunc(const EventID_t  &, const EventID_t  &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE10IDLessFuncERKPK16CSchemaClassInfoS6_ */
	/* <5b2152> ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE32UnregisterEventListener_AbstractERK20CUtlAbstractDelegatePK16CSchemaClassInfo */
	/* <6918bb> ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, unsigned int, bool, EventID_t, int, const char  *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE30RegisterEventListener_AbstractERK20CUtlAbstractDelegatejbPK16CSchemaClassInfoiPKc */
	void RegisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE21RegisterEventListenerEv */
	void UnregisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE23UnregisterEventListenerEv */
	void ~CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultED4Ev */
};

// <00425495> ../public/tier0/eventdispatcher.h:100
// member functions: 25
// member variables: 2
// class size: 80
class CEventDispatcher_Identified<CEventIDManager_Default> : public CEventDispatcher_Base {
public:
	/* class CEventDispatcher_Base <ancestor>; */ /* 0 32 */
	/* ../public/tier0/eventdispatcher.h:1127 */
	void CEventDispatcher_Identified(CEventDispatcher_Identified<CEventIDManager_Default>* , int);
	/* ../public/tier0/eventdispatcher.h:1140 */
	const char* GetEventName(EventID_t, char* , size_t);
	/* ../public/tier0/eventdispatcher.h:104 */
	typedef EventID_t EventID_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/eventdispatcher.h:1196 */
	bool HasListeners(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:1220 */
	void GetListenerNames(CEventDispatcher_Identified<CEventIDManager_Default>* , EventID_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/tier0/eventdispatcher.h:1235 */
	bool IterateListeners_Start(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& , EventID_t, bool);
	/* ../public/tier0/eventdispatcher.h:106 */
	struct DelegateIterator_t : public DelegateIterator_Base_t {
	public:
		/* struct DelegateIterator_Base_t <ancestor>; */ /* 0 80 */
		EventID_t EventID; /* 80 8 */
	} __attribute__((__aligned__(8)));
	/* ../public/tier0/eventdispatcher.h:1260 */
	void IterateListeners_End(CEventDispatcher_Identified<CEventIDManager_Default>* , DelegateIterator_t& );
	/* ../public/tier0/eventdispatcher.h:1267 */
	bool IDLessFunc(const EventID_t& , const EventID_t& );
	/* ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , EventID_t);
protected:
	/* ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_Default>* , const CUtlAbstractDelegate& , unsigned int, bool, EventID_t, int, const char* );
	/* ../public/tier0/eventdispatcher.h:134 */
	void RegisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
	/* ../public/tier0/eventdispatcher.h:135 */
	void UnregisterEventListener(CEventDispatcher_Identified<CEventIDManager_Default>* );
private:
	CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)> m_EventListenerMap; /* 32 48* /
	void CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *, int); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultEC4Ei */
	const char  * GetEventName(EventID_t, char *, size_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12GetEventNameEPK16CSchemaClassInfoPcm */
	bool HasListeners(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE12HasListenersEPK16CSchemaClassInfo */
	void GetListenerNames(class CEventDispatcher_Identified<CEventIDManager_Default> *, EventID_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE16GetListenerNamesEPK16CSchemaClassInfoP10CUtlVectorI10CUtlString10CUtlMemoryIS6_iEE */
	bool IterateListeners_Start(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &, EventID_t, bool); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE22IterateListeners_StartERNS1_18DelegateIterator_tEPK16CSchemaClassInfob */
	void IterateListeners_End(class CEventDispatcher_Identified<CEventIDManager_Default> *, class DelegateIterator_t &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE20IterateListeners_EndERNS1_18DelegateIterator_tE */
	bool IDLessFunc(const EventID_t  &, const EventID_t  &); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE10IDLessFuncERKPK16CSchemaClassInfoS6_ */
	/* <5b2152> ../public/tier0/eventdispatcher.h:1171 */
	void UnregisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, EventID_t); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE32UnregisterEventListener_AbstractERK20CUtlAbstractDelegatePK16CSchemaClassInfo */
	/* <6918bb> ../public/tier0/eventdispatcher.h:1146 */
	void RegisterEventListener_Abstract(class CEventDispatcher_Identified<CEventIDManager_Default> *, const class CUtlAbstractDelegate  &, unsigned int, bool, EventID_t, int, const char  *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE30RegisterEventListener_AbstractERK20CUtlAbstractDelegatejbPK16CSchemaClassInfoiPKc */
	void RegisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE21RegisterEventListenerEv */
	void UnregisterEventListener(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultE23UnregisterEventListenerEv */
	void ~CEventDispatcher_Identified(class CEventDispatcher_Identified<CEventIDManager_Default> *); /* linkage=_ZN27CEventDispatcher_IdentifiedI23CEventIDManager_DefaultED4Ev */
};

// <0035FB8A> ../public/tier0/eventdispatcher.h:106
void DelegateIterator_t::DelegateIterator_t()
{
} /* size: 0 */

// <0035FB6E> ../public/tier0/eventdispatcher.h:106
inline void DelegateIterator_t::DelegateIterator_t()
{
} /* size: 0 */

// <0035FB57> ../public/tier0/eventdispatcher.h:106
void DelegateIterator_t::~DelegateIterator_t()
{
} /* size: 0 */

// <0035FB3B> ../public/tier0/eventdispatcher.h:106
inline void DelegateIterator_t::~DelegateIterator_t()
{
} /* size: 0 */

// <0035E877> ../public/tier0/eventdispatcher.h:155
void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientOutput_t>, bool>::CEventDispatcher_WrappedReturnType()
{
} /* size: 0 */

// <0035E85E> ../public/tier0/eventdispatcher.h:155
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientOutput_t>, bool>::CEventDispatcher_WrappedReturnType()
{
} /* size: 0 */

// <0035DD9C> ../public/tier0/eventdispatcher.h:155
void CEventDispatcher_WrappedReturnType(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientPostOutput_t>, bool> this)
{
} /* size: 0 */

// <0035DD83> ../public/tier0/eventdispatcher.h:155
inline void CEventDispatcher_WrappedReturnType(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientPostOutput_t>, bool> this)
{
} /* size: 0 */

// <0035DCE4> ../public/tier0/eventdispatcher.h:155
void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventFrameBoundary_t>, bool>::CEventDispatcher_WrappedReturnType()
{
} /* size: 0 */

// <0035DCCB> ../public/tier0/eventdispatcher.h:155
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventFrameBoundary_t>, bool>::CEventDispatcher_WrappedReturnType()
{
} /* size: 0 */

// <0013190B> ../public/tier0/eventdispatcher.h:155
void CEventDispatcher_WrappedReturnType(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventProfileStorageAvailable_t>, this)
{
} /* size: 0 */

// <001318F2> ../public/tier0/eventdispatcher.h:155
inline void CEventDispatcher_WrappedReturnType(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventProfileStorageAvailable_t>, this)
{
} /* size: 0 */

// <00130DDA> ../public/tier0/eventdispatcher.h:155
void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventAppShutdown_t>, bool>::CEventDispatcher_WrappedReturnType()
{
} /* size: 0 */

// <00130DC1> ../public/tier0/eventdispatcher.h:155
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventAppShutdown_t>, bool>::CEventDispatcher_WrappedReturnType()
{
} /* size: 0 */

// <0035DE17> ../public/tier0/eventdispatcher.h:162
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientOutput_t>, bool>::MergeReturnValueAndContinueIterating(const ReturnType_t& other)
{
} /* size: 0 */

// <0035DD39> ../public/tier0/eventdispatcher.h:162
inline void MergeReturnValueAndContinueIterating(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientPostOutput_t>, bool> this, const ReturnType_t& other)
{
} /* size: 0 */

// <0035DC81> ../public/tier0/eventdispatcher.h:162
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventFrameBoundary_t>, bool>::MergeReturnValueAndContinueIterating(const ReturnType_t& other)
{
} /* size: 0 */

// <00130EAB> ../public/tier0/eventdispatcher.h:162
inline void MergeReturnValueAndContinueIterating(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventProfileStorageAvailable_t>, this, const ReturnType_t& other)
{
} /* size: 0 */

// <00130D77> ../public/tier0/eventdispatcher.h:162
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventAppShutdown_t>, bool>::MergeReturnValueAndContinueIterating(const ReturnType_t& other)
{
} /* size: 0 */

// <0035DDB3> ../public/tier0/eventdispatcher.h:167
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientOutput_t>, bool>::Get()
{
} /* size: 0 */

// <0035DCFB> ../public/tier0/eventdispatcher.h:167
inline void Get(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientPostOutput_t>, bool> this)
{
} /* size: 0 */

// <0035DC43> ../public/tier0/eventdispatcher.h:167
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventFrameBoundary_t>, bool>::Get()
{
} /* size: 0 */

// <00130E47> ../public/tier0/eventdispatcher.h:167
inline void Get(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventProfileStorageAvailable_t>, this)
{
} /* size: 0 */

// <00130D39> ../public/tier0/eventdispatcher.h:167
inline void CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventAppShutdown_t>, bool>::Get()
{
} /* size: 0 */

// <004A6E87> ../public/tier0/eventdispatcher.h:214
const char* SchemaClassInfoName(const CSchemaClassInfo *)
{
} /* size: 0 */

// <0009D07C> ../public/tier0/eventdispatcher.h:216
// member functions: 4
// class size: 1
class CEventID_SchemaBinding {
	/* ../public/tier0/eventdispatcher.h:221 */
	bool IsValidEventID(EventID_t);
	/* ../public/tier0/eventdispatcher.h:219 */
	typedef const class CSchemaClassInfo * EventID_t;
	/* ../public/tier0/eventdispatcher.h:226 */
	const char* GetEventName(EventID_t, char* , size_t);
	/* ../public/tier0/eventdispatcher.h:232 */
	class EventIDGenerator<EventProfileStorageAvailable_t> {
		/* ../public/tier0/eventdispatcher.h:235 */
		EventID_t GetEventID(void);
	};
	/* ../public/tier0/eventdispatcher.h:232 */
	class EventIDGenerator<EventAppShutdown_t> {
		/* ../public/tier0/eventdispatcher.h:235 */
		EventID_t GetEventID(void);
	};
};

// <0068C6E1> ../public/tier0/eventdispatcher.h:221
inline void IsValidEventID(EventID_t EventID)
{
} /* size: 0 */

// <0068C6B1> ../public/tier0/eventdispatcher.h:226
inline void GetEventName(EventID_t EventID, char* pScratchBuffer, size_t nScratchBufferSize)
{
} /* size: 0 */

// <00676884> ../public/tier0/eventdispatcher.h:235
inline void GetEventID(void)
{
} /* size: 0 */

// <0009D127> ../public/tier0/eventdispatcher.h:355
// member functions: 2
// class size: 1
class CEventSignature_Bool_ConstStructRef {
	/* ../public/tier0/eventdispatcher.h:358 */
	class EventSignature_Base {
		/* ../public/tier0/eventdispatcher.h:363 */
		enum {
			PARAMETER_COUNT = 1,
		};
		/* ../public/tier0/eventdispatcher.h:361 */
		typedef bool ReturnType_t;
		/* tag__fprintf: const_type tag not supported! */;
		/* ../public/tier0/eventdispatcher.h:365 */
		ReturnType_t GetDefaultReturnValue(void);
		/* ../public/tier0/eventdispatcher.h:370 */
		bool MergeReturnValueAndContinueIterating(ReturnType_t& , const ReturnType_t& );
	};
	/* ../public/tier0/eventdispatcher.h:383 */
	class EventSignature<EventProfileStorageAvailable_t> : public EventSignature_Base {
	public:
		/* class EventSignature_Base <ancestor>; */ /* 0 0 */
		/* ../public/tier0/eventdispatcher.h:386 */
		typedef const class EventProfileStorageAvailable_t & Param1Type_t;
	};
	/* ../public/tier0/eventdispatcher.h:383 */
	class EventSignature<EventAppShutdown_t> : public EventSignature_Base {
	public:
		/* class EventSignature_Base <ancestor>; */ /* 0 0 */
		/* ../public/tier0/eventdispatcher.h:386 */
		typedef const class EventAppShutdown_t & Param1Type_t;
	};
};

// <00376D6C> ../public/tier0/eventdispatcher.h:365
inline void GetDefaultReturnValue(void)
{
} /* size: 0 */

// <00376D46> ../public/tier0/eventdispatcher.h:370
inline void MergeReturnValueAndContinueIterating(ReturnType_t& dest, const ReturnType_t& other)
{
} /* size: 0 */

// <0009D204> ../public/tier0/eventdispatcher.h:392
// member variable: 1
// class size: 1
class CEventIDManager_SchemaBinding : public CEventID_SchemaBinding {
public:
	/* class CEventID_SchemaBinding <ancestor>; */ /* 0 0 */
	/* ../public/tier0/eventdispatcher.h:396 */
	class EventDescription<EventProfileStorageAvailable_t> : public EventIDGenerator<EventProfileStorageAvailable_t>, public EventSignature<EventProfileStorageAvailable_t> {
	public:
		/* class EventIDGenerator<EventProfileStorageAvailable_t> <ancestor>; */ /* 0 0 */
		/* class EventSignature<EventProfileStorageAvailable_t> <ancestor>; */ /* 0 1 */
	};
	/* ../public/tier0/eventdispatcher.h:396 */
	class EventDescription<EventAppShutdown_t> : public EventIDGenerator<EventAppShutdown_t>, public EventSignature<EventAppShutdown_t> {
	public:
		/* class EventIDGenerator<EventAppShutdown_t> <ancestor>; */ /* 0 0 */
		/* class EventSignature<EventAppShutdown_t> <ancestor>; */ /* 0 1 */
	};
};

// <0011CA8F> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 0> : public CEventDispatcher_Identified<CEventIDManager_Default> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEventDispatcher_Identified<CEventIDManager_Default> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 0>* , const CUtlDelegate<void()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 0>* , const CUtlDelegate<void()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0011CC08> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 0> : public CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 0>* , const CUtlDelegate<bool()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 0>* , const CUtlDelegate<bool()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0011DA93> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 0> : public CEventDispatcher_Identified<CEventIDManager_Default> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEventDispatcher_Identified<CEventIDManager_Default> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 0>* , const CUtlDelegate<void()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 0>* , const CUtlDelegate<void()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0011DC06> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 0> : public CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 0>* , const CUtlDelegate<bool()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 0>* , const CUtlDelegate<bool()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034F287> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 0> : public CEventDispatcher_Identified<CEventIDManager_Default> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEventDispatcher_Identified<CEventIDManager_Default> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 0>* , const CUtlDelegate<void()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 0>* , const CUtlDelegate<void()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034F400> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 0> : public CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 0>* , const CUtlDelegate<bool()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 0>* , const CUtlDelegate<bool()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034F9B0> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 0> : public CEventDispatcher_Identified<CEventIDManager_Default> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEventDispatcher_Identified<CEventIDManager_Default> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 0>* , const CUtlDelegate<void()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 0>* , const CUtlDelegate<void()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034FB23> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 0> : public CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 0>* , const CUtlDelegate<bool()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 0>* , const CUtlDelegate<bool()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <00350031> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 0> : public CEventDispatcher_Identified<CEventIDManager_Default> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEventDispatcher_Identified<CEventIDManager_Default> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 0>* , const CUtlDelegate<void()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 0>* , const CUtlDelegate<void()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <003501A4> ../public/tier0/eventdispatcher.h:561
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 0> : public CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1> {
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:561 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:569 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 0>* , const CUtlDelegate<bool()>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:574 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 0>* , const CUtlDelegate<bool()>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:580 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 0>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0011C9B8> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> : public CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1>* , const CUtlDelegate<void(const EventProfileStorageAvailable_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1>* , const CUtlDelegate<void(const EventProfileStorageAvailable_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0011CD9C> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 1> : public CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 1>* , const CUtlDelegate<bool(const EventProfileStorageAvailable_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 1>* , const CUtlDelegate<bool(const EventProfileStorageAvailable_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 1>* );
	/* ../public/tier0/eventdispatcher.h:589 */
	typedef Param1Type_t Param1Type_t;
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0011D9BC> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> : public CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>* , const CUtlDelegate<void(const EventAppShutdown_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>* , const CUtlDelegate<void(const EventAppShutdown_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0011DCF8> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 1> : public CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 1>* , const CUtlDelegate<bool(const EventAppShutdown_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 1>* , const CUtlDelegate<bool(const EventAppShutdown_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 1>* );
	/* ../public/tier0/eventdispatcher.h:589 */
	typedef Param1Type_t Param1Type_t;
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034F1B0> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1> : public CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>* , const CUtlDelegate<void(const EventClientOutput_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>* , const CUtlDelegate<void(const EventClientOutput_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034F594> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 1> : public CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 1>* , const CUtlDelegate<bool(const EventClientOutput_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 1>* , const CUtlDelegate<bool(const EventClientOutput_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 1>* );
	/* ../public/tier0/eventdispatcher.h:589 */
	typedef Param1Type_t Param1Type_t;
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034F8D9> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1> : public CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1>* , const CUtlDelegate<void(const EventClientPostOutput_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1>* , const CUtlDelegate<void(const EventClientPostOutput_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034FC15> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 1> : public CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 1>* , const CUtlDelegate<bool(const EventClientPostOutput_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 1>* , const CUtlDelegate<bool(const EventClientPostOutput_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 1>* );
	/* ../public/tier0/eventdispatcher.h:589 */
	typedef Param1Type_t Param1Type_t;
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <0034FF5A> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1> : public CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>* , const CUtlDelegate<void(const EventFrameBoundary_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>* , const CUtlDelegate<void(const EventFrameBoundary_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>* );
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <00350296> ../public/tier0/eventdispatcher.h:584
// member functions: 9
// member variable: 1
// class size: 80
class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1> : public CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 0> {
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::RegisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
	/* ../public/tier0/eventdispatcher.h:584 */
	using ::UnregisterEventListener;
public:
	/* class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 0> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:593 */
	void RegisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1>* , const CUtlDelegate<bool(const EventFrameBoundary_t&)>& , int, const char* , EventID_t);
	/* ../public/tier0/eventdispatcher.h:598 */
	void UnregisterEventListener(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1>* , const CUtlDelegate<bool(const EventFrameBoundary_t&)>& , EventID_t);
private:
	/* ../public/tier0/eventdispatcher.h:604 */
	void CEvent_Register(CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1>* );
	/* ../public/tier0/eventdispatcher.h:589 */
	typedef Param1Type_t Param1Type_t;
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *, const class CUtlDelegate<void(const EventProfileStorageAvailable_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default30EventProfileStorageAvailable_tvLi1EEC4Ev */
	void RegisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, int, const char  *, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE21RegisterEventListenerERK12CUtlDelegateIFvRKS1_EEiPKcPK16CSchemaClassInfo */
	void UnregisterEventListener(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *, const class CUtlDelegate<void(const EventAppShutdown_t&)>  &, EventID_t); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EE23UnregisterEventListenerERK12CUtlDelegateIFvRKS1_EEPK16CSchemaClassInfo */
	void CEvent_Register(class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1> *); /* linkage=_ZN15CEvent_RegisterI23CEventIDManager_Default18EventAppShutdown_tvLi1EEC4Ev */
};

// <00676837> ../public/tier0/eventdispatcher.h:593
inline void CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1>::RegisterEventListener(const CUtlDelegate<void(const EventClientPostOutput_t&)>& listener, int nPriority, const char* pszName, EventID_t EventID)
{
} /* size: 0 */

// <00675E1C> ../public/tier0/eventdispatcher.h:593
inline void CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>::RegisterEventListener(const CUtlDelegate<void(const EventAppShutdown_t&)>& listener, int nPriority, const char* pszName, EventID_t EventID)
{
} /* size: 0 */

// <00675D52> ../public/tier0/eventdispatcher.h:593
inline void CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>::RegisterEventListener(const CUtlDelegate<void(const EventClientOutput_t&)>& listener, int nPriority, const char* pszName, EventID_t EventID)
{
} /* size: 0 */

// <005980DF> ../public/tier0/eventdispatcher.h:593
inline void CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>::RegisterEventListener(const CUtlDelegate<void(const EventFrameBoundary_t&)>& listener, int nPriority, const char* pszName, EventID_t EventID)
{
} /* size: 0 */

// <004B564D> ../public/tier0/eventdispatcher.h:593
inline void CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1>::RegisterEventListener(const CUtlDelegate<void(const EventProfileStorageAvailable_t&)>& listener, int nPriority, const char* pszName, EventID_t EventID)
{
} /* size: 0 */

// <00676804> ../public/tier0/eventdispatcher.h:598
inline void CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, void, 1>::UnregisterEventListener(const CUtlDelegate<void(const EventClientPostOutput_t&)>& listener, EventID_t EventID)
{
} /* size: 0 */

// <005980AC> ../public/tier0/eventdispatcher.h:598
inline void CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>::UnregisterEventListener(const CUtlDelegate<void(const EventFrameBoundary_t&)>& listener, EventID_t EventID)
{
} /* size: 0 */

// <00597FAF> ../public/tier0/eventdispatcher.h:598
inline void CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>::UnregisterEventListener(const CUtlDelegate<void(const EventClientOutput_t&)>& listener, EventID_t EventID)
{
} /* size: 0 */

// <004B546C> ../public/tier0/eventdispatcher.h:598
inline void CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, void, 1>::UnregisterEventListener(const CUtlDelegate<void(const EventAppShutdown_t&)>& listener, EventID_t EventID)
{
} /* size: 0 */

// <004B5439> ../public/tier0/eventdispatcher.h:598
inline void CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, void, 1>::UnregisterEventListener(const CUtlDelegate<void(const EventProfileStorageAvailable_t&)>& listener, EventID_t EventID)
{
} /* size: 0 */

// <0011CF4F> ../public/tier0/eventdispatcher.h:758
// member functions: 8
// member variable: 1
// class size: 80
class CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1> : public CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 1> {
public:
	/* class CEvent_Register<CEventIDManager_Default, EventProfileStorageAvailable_t, bool, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:764 */
	typedef ReturnType_t ReturnType_t;
	/* ../public/tier0/eventdispatcher.h:768 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1>* , Param1Type_t, bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:762 */
	typedef EventID_t EventID_t;
	/* ../public/tier0/eventdispatcher.h:811 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1>* , CEventParams_Copy& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:766 */
	typedef struct CBundledParams_Copy<const EventProfileStorageAvailable_t&, EventProfileStorageAvailable_t, void, void, void, void, void, void> CEventParams_Copy;
	/* ../public/tier0/eventdispatcher.h:816 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1>* , CEventParams_Reference& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:765 */
	typedef struct CBundledParams_Reference<const EventProfileStorageAvailable_t&, void, void, void> CEventParams_Reference;
private:
	/* ../public/tier0/eventdispatcher.h:822 */
	void CEvent_Dispatch(CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1>* );
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, Param1Type_t, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventERKS1_bPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Copy &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER19CBundledParams_CopyIRKS1_S1_vvvvvvEbPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Reference &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER24CBundledParams_ReferenceIRKS1_vvvEbPK16CSchemaClassInfo */
	void CEvent_Dispatch(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EEC4Ev */
};

// <0011DEAB> ../public/tier0/eventdispatcher.h:758
// member functions: 8
// member variable: 1
// class size: 80
class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> : public CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 1> {
public:
	/* class CEvent_Register<CEventIDManager_Default, EventAppShutdown_t, bool, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:764 */
	typedef ReturnType_t ReturnType_t;
	/* ../public/tier0/eventdispatcher.h:768 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1>* , Param1Type_t, bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:762 */
	typedef EventID_t EventID_t;
	/* ../public/tier0/eventdispatcher.h:811 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1>* , CEventParams_Copy& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:766 */
	typedef struct CBundledParams_Copy<const EventAppShutdown_t&, EventAppShutdown_t, void, void, void, void, void, void> CEventParams_Copy;
	/* ../public/tier0/eventdispatcher.h:816 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1>* , CEventParams_Reference& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:765 */
	typedef struct CBundledParams_Reference<const EventAppShutdown_t&, void, void, void> CEventParams_Reference;
private:
	/* ../public/tier0/eventdispatcher.h:822 */
	void CEvent_Dispatch(CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1>* );
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, Param1Type_t, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventERKS1_bPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Copy &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER19CBundledParams_CopyIRKS1_S1_vvvvvvEbPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Reference &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER24CBundledParams_ReferenceIRKS1_vvvEbPK16CSchemaClassInfo */
	void CEvent_Dispatch(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EEC4Ev */
};

// <0034F747> ../public/tier0/eventdispatcher.h:758
// member functions: 8
// member variable: 1
// class size: 80
class CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1> : public CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 1> {
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientOutput_t, bool, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:764 */
	typedef ReturnType_t ReturnType_t;
	/* ../public/tier0/eventdispatcher.h:768 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1>* , Param1Type_t, bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:762 */
	typedef EventID_t EventID_t;
	/* ../public/tier0/eventdispatcher.h:811 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1>* , CEventParams_Copy& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:766 */
	typedef struct CBundledParams_Copy<const EventClientOutput_t&, EventClientOutput_t, void, void, void, void, void, void> CEventParams_Copy;
	/* ../public/tier0/eventdispatcher.h:816 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1>* , CEventParams_Reference& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:765 */
	typedef struct CBundledParams_Reference<const EventClientOutput_t&, void, void, void> CEventParams_Reference;
private:
	/* ../public/tier0/eventdispatcher.h:822 */
	void CEvent_Dispatch(CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1>* );
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, Param1Type_t, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventERKS1_bPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Copy &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER19CBundledParams_CopyIRKS1_S1_vvvvvvEbPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Reference &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER24CBundledParams_ReferenceIRKS1_vvvEbPK16CSchemaClassInfo */
	void CEvent_Dispatch(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EEC4Ev */
};

// <0034FDC8> ../public/tier0/eventdispatcher.h:758
// member functions: 8
// member variable: 1
// class size: 80
class CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1> : public CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 1> {
public:
	/* class CEvent_Register<CEventIDManager_Default, EventClientPostOutput_t, bool, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:764 */
	typedef ReturnType_t ReturnType_t;
	/* ../public/tier0/eventdispatcher.h:768 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1>* , Param1Type_t, bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:762 */
	typedef EventID_t EventID_t;
	/* ../public/tier0/eventdispatcher.h:811 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1>* , CEventParams_Copy& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:766 */
	typedef struct CBundledParams_Copy<const EventClientPostOutput_t&, EventClientPostOutput_t, void, void, void, void, void, void> CEventParams_Copy;
	/* ../public/tier0/eventdispatcher.h:816 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1>* , CEventParams_Reference& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:765 */
	typedef struct CBundledParams_Reference<const EventClientPostOutput_t&, void, void, void> CEventParams_Reference;
private:
	/* ../public/tier0/eventdispatcher.h:822 */
	void CEvent_Dispatch(CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1>* );
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, Param1Type_t, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventERKS1_bPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Copy &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER19CBundledParams_CopyIRKS1_S1_vvvvvvEbPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Reference &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER24CBundledParams_ReferenceIRKS1_vvvEbPK16CSchemaClassInfo */
	void CEvent_Dispatch(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EEC4Ev */
};

// <00350449> ../public/tier0/eventdispatcher.h:758
// member functions: 8
// member variable: 1
// class size: 80
class CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1> : public CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1> {
public:
	/* class CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:764 */
	typedef ReturnType_t ReturnType_t;
	/* ../public/tier0/eventdispatcher.h:768 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1>* , Param1Type_t, bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:762 */
	typedef EventID_t EventID_t;
	/* ../public/tier0/eventdispatcher.h:811 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1>* , CEventParams_Copy& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:766 */
	typedef struct CBundledParams_Copy<const EventFrameBoundary_t&, EventFrameBoundary_t, void, void, void, void, void, void> CEventParams_Copy;
	/* ../public/tier0/eventdispatcher.h:816 */
	ReturnType_t DispatchEvent(CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1>* , CEventParams_Reference& , bool, EventID_t);
	/* ../public/tier0/eventdispatcher.h:765 */
	typedef struct CBundledParams_Reference<const EventFrameBoundary_t&, void, void, void> CEventParams_Reference;
private:
	/* ../public/tier0/eventdispatcher.h:822 */
	void CEvent_Dispatch(CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1>* );
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, Param1Type_t, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventERKS1_bPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Copy &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER19CBundledParams_CopyIRKS1_S1_vvvvvvEbPK16CSchemaClassInfo */
	ReturnType_t DispatchEvent(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *, CEventParams_Reference &, bool, EventID_t); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EE13DispatchEventER24CBundledParams_ReferenceIRKS1_vvvEbPK16CSchemaClassInfo */
	void CEvent_Dispatch(class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> *); /* linkage=_ZN15CEvent_DispatchI23CEventIDManager_Default18EventAppShutdown_tLi1EEC4Ev */
};

// <0035FA4D> ../public/tier0/eventdispatcher.h:768
// variables: 7
// function call: 1
inline void CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1>::DispatchEvent(Param1Type_t param1, bool bIterateForward, EventID_t EventID)
{
	const char   __FUNCTION__; // 63531
	WrappedReturnType_t retVal; // 772
	DelegateIterator_t iterationStruct; // 773
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 786
			}
			{
				bool bContinue; // 791
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 796
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <0035F93B> ../public/tier0/eventdispatcher.h:768
// variables: 7
// function call: 1
inline void CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1>::DispatchEvent(Param1Type_t param1, bool bIterateForward, EventID_t EventID)
{
	const char   __FUNCTION__; // 63531
	WrappedReturnType_t retVal; // 772
	DelegateIterator_t iterationStruct; // 773
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 786
			}
			{
				bool bContinue; // 791
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 796
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <0035F829> ../public/tier0/eventdispatcher.h:768
// variables: 7
// function call: 1
inline void CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1>::DispatchEvent(Param1Type_t param1, bool bIterateForward, EventID_t EventID)
{
	const char   __FUNCTION__; // 63531
	WrappedReturnType_t retVal; // 772
	DelegateIterator_t iterationStruct; // 773
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 786
			}
			{
				bool bContinue; // 791
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 796
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <001338C3> ../public/tier0/eventdispatcher.h:768
// variables: 7
// function call: 1
inline void CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1>::DispatchEvent(Param1Type_t param1, bool bIterateForward, EventID_t EventID)
{
	const char   __FUNCTION__; // 13396
	WrappedReturnType_t retVal; // 772
	DelegateIterator_t iterationStruct; // 773
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 786
			}
			{
				bool bContinue; // 791
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 796
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <001331DF> ../public/tier0/eventdispatcher.h:768
// variables: 7
// function call: 1
inline void CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1>::DispatchEvent(Param1Type_t param1, bool bIterateForward, EventID_t EventID)
{
	const char   __FUNCTION__; // 13396
	WrappedReturnType_t retVal; // 772
	DelegateIterator_t iterationStruct; // 773
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 786
			}
			{
				bool bContinue; // 791
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 796
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <0011D08C> ../public/tier0/eventdispatcher.h:1053
// member function: 1
// member variable: 1
// class size: 80
class CEvent_Manager<CEventIDManager_Default, EventProfileStorageAvailable_t> : public CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1> {
public:
	/* class CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1> <ancestor>; */ /* 0 80 */
private:
	/* ../public/tier0/eventdispatcher.h:1056 */
	void CEvent_Manager(CEvent_Manager<CEventIDManager_Default, EventProfileStorageAvailable_t>* );
};

// <0011DFE8> ../public/tier0/eventdispatcher.h:1053
// member function: 1
// member variable: 1
// class size: 80
class CEvent_Manager<CEventIDManager_Default, EventAppShutdown_t> : public CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> {
public:
	/* class CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1> <ancestor>; */ /* 0 80 */
private:
	/* ../public/tier0/eventdispatcher.h:1056 */
	void CEvent_Manager(CEvent_Manager<CEventIDManager_Default, EventAppShutdown_t>* );
};

// <0034F884> ../public/tier0/eventdispatcher.h:1053
// member function: 1
// member variable: 1
// class size: 80
class CEvent_Manager<CEventIDManager_Default, EventClientOutput_t> : public CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1> {
public:
	/* class CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1> <ancestor>; */ /* 0 80 */
private:
	/* ../public/tier0/eventdispatcher.h:1056 */
	void CEvent_Manager(CEvent_Manager<CEventIDManager_Default, EventClientOutput_t>* );
};

// <0034FF05> ../public/tier0/eventdispatcher.h:1053
// member function: 1
// member variable: 1
// class size: 80
class CEvent_Manager<CEventIDManager_Default, EventClientPostOutput_t> : public CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1> {
public:
	/* class CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1> <ancestor>; */ /* 0 80 */
private:
	/* ../public/tier0/eventdispatcher.h:1056 */
	void CEvent_Manager(CEvent_Manager<CEventIDManager_Default, EventClientPostOutput_t>* );
};

// <00350586> ../public/tier0/eventdispatcher.h:1053
// member function: 1
// member variable: 1
// class size: 80
class CEvent_Manager<CEventIDManager_Default, EventFrameBoundary_t> : public CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1> {
public:
	/* class CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1> <ancestor>; */ /* 0 80 */
private:
	/* ../public/tier0/eventdispatcher.h:1056 */
	void CEvent_Manager(CEvent_Manager<CEventIDManager_Default, EventFrameBoundary_t>* );
};

// <0009D67C> ../public/tier0/eventdispatcher.h:1060
// member variable: 1
// class size: 1
class CEventIDManager_Default : public CEventIDManager_SchemaBinding {
public:
	/* class CEventIDManager_SchemaBinding <ancestor>; */ /* 0 1 */
};

// <0023BFB0> ../public/tier0/eventdispatcher.h:1105
void CEventDispatcher<CEventIDManager_Default>::~CEventDispatcher()
{
} /* size: 0 */

// <0023BF93> ../public/tier0/eventdispatcher.h:1105
inline void CEventDispatcher<CEventIDManager_Default>::~CEventDispatcher()
{
} /* size: 0 */

// <0009FA3B> ../public/tier0/eventdispatcher.h:1105
// member functions: 10
// member variable: 1
// class size: 80
class CEventDispatcher<CEventIDManager_Default> : public CEventDispatcher_Identified<CEventIDManager_Default> {
public:
	/* class CEventDispatcher_Identified<CEventIDManager_Default> <ancestor>; */ /* 0 80 */
	/* ../public/tier0/eventdispatcher.h:1108 */
	void CEventDispatcher(CEventDispatcher<CEventIDManager_Default>* , int);
	/* ../public/tier0/eventdispatcher.h:1115 */
	CEvent_Manager<CEventIDManager_Default, EventAppShutdown_t>& Event<EventAppShutdown_t>(CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/tier0/eventdispatcher.h:1115 */
	CEvent_Manager<CEventIDManager_Default, EventProfileStorageAvailable_t>& Event<EventProfileStorageAvailable_t>(CEventDispatcher<CEventIDManager_Default>* );
	void CEventDispatcher(class CEventDispatcher<CEventIDManager_Default> *, int); /* linkage=_ZN16CEventDispatcherI23CEventIDManager_DefaultEC4Ei */
	class CEvent_Manager<CEventIDManager_Default, EventAppShutdown_t> & Event<EventAppShutdown_t>(class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CEventDispatcherI23CEventIDManager_DefaultE5EventI18EventAppShutdown_tEER14CEvent_ManagerIS0_T_Ev */
	class CEvent_Manager<CEventIDManager_Default, EventProfileStorageAvailable_t> & Event<EventProfileStorageAvailable_t>(class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CEventDispatcherI23CEventIDManager_DefaultE5EventI30EventProfileStorageAvailable_tEER14CEvent_ManagerIS0_T_Ev */
	void ~CEventDispatcher(class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CEventDispatcherI23CEventIDManager_DefaultED4Ev */
	class CEvent_Manager<CEventIDManager_Default, EventFrameBoundary_t> & Event<EventFrameBoundary_t>(class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CEventDispatcherI23CEventIDManager_DefaultE5EventI20EventFrameBoundary_tEER14CEvent_ManagerIS0_T_Ev */
	class CEvent_Manager<CEventIDManager_Default, EventClientPostOutput_t> & Event<EventClientPostOutput_t>(class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CEventDispatcherI23CEventIDManager_DefaultE5EventI23EventClientPostOutput_tEER14CEvent_ManagerIS0_T_Ev */
	class CEvent_Manager<CEventIDManager_Default, EventClientOutput_t> & Event<EventClientOutput_t>(class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN16CEventDispatcherI23CEventIDManager_DefaultE5EventI19EventClientOutput_tEER14CEvent_ManagerIS0_T_Ev */
};

// <002327AD> ../public/tier0/eventdispatcher.h:1108
void CEventDispatcher<CEventIDManager_Default>::CEventDispatcher(int nInitialEventCount)
{
} /* size: 0 */

// <00232787> ../public/tier0/eventdispatcher.h:1108
inline void CEventDispatcher<CEventIDManager_Default>::CEventDispatcher(int nInitialEventCount)
{
} /* size: 0 */

// <006768DF> ../public/tier0/eventdispatcher.h:1115
inline void CEventDispatcher<CEventIDManager_Default>::Event<EventClientPostOutput_t>()
{
} /* size: 0 */

// <00675EC4> ../public/tier0/eventdispatcher.h:1115
inline void CEventDispatcher<CEventIDManager_Default>::Event<EventAppShutdown_t>()
{
} /* size: 0 */

// <00675DFA> ../public/tier0/eventdispatcher.h:1115
inline void CEventDispatcher<CEventIDManager_Default>::Event<EventClientOutput_t>()
{
} /* size: 0 */

// <00598187> ../public/tier0/eventdispatcher.h:1115
inline void CEventDispatcher<CEventIDManager_Default>::Event<EventFrameBoundary_t>()
{
} /* size: 0 */

// <004B56F5> ../public/tier0/eventdispatcher.h:1115
inline void CEventDispatcher<CEventIDManager_Default>::Event<EventProfileStorageAvailable_t>()
{
} /* size: 0 */

// <002306CF> ../public/tier0/eventdispatcher.h:1127
void CEventDispatcher_Identified<CEventIDManager_Default>::CEventDispatcher_Identified(int nInitialEventCount)
{
} /* size: 0 */

// <002306A9> ../public/tier0/eventdispatcher.h:1127
inline void CEventDispatcher_Identified<CEventIDManager_Default>::CEventDispatcher_Identified(int nInitialEventCount)
{
} /* size: 0 */

// <006918BB> ../public/tier0/eventdispatcher.h:1146
// variables: 4
// function calls: 53
void CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract(const CUtlAbstractDelegate& delegate, unsigned int nDelegateParamCount, bool bDelegateReturnsVoid, EventID_t EventID, int nPriority, const char* pszName)
{
	uint32 nIndex; // 1152
	{
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 1151
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::FindAltKeyType<const CSchemaClassInfo*>(
						const CSchemaClassInfo* const& search);  // 243
	CUtlMap<const CSchemaClassInfo::Find(
		const KeyType_t& key);  // 1152
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::IsIdxValid(
			unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::LeftChild(
			unsigned int i);  // 667
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::IsValidIndex(
			unsigned int i);  // 659
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::IsValidIndex(
			unsigned int i);  // 190
	CUtlMap<const CSchemaClassInfo::IsValidIndex(
			IndexType_t i);  // 1153
	ResetDbgInfo(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this); // 530
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> this); // 405
	Node_t::Node_t(
		const KeyType_t& k);  // 213
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::LeftChild(
			unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::Element(
		unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 617
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::RightChild(
			unsigned int i);  // 1677
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		unsigned int newNode; // 1709
		{
		}
	}
	{
		unsigned int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 213
	RemoveAll(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this); // 1798
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Purge(); // 903
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this); // 560
	ValidateAlignment<CEventDispatcher_Base::EventListenerInfo_t>(void); // 508
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Purge(); // 510
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this); // 410
	~CUtlVector(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> this); // 402
	Node_t::~Node_t(); // 213
	CUtlMap<const CSchemaClassInfo::Insert(
		const KeyType_t& key,
		ERBTreeInsertBehavior eInsertBehavior);  // 1155
	{
		DelegateIterator_t* pActiveIterator; // 1158
		CUtlRBTree<CUtlMap<const CSchemaClassInfo::FindAltKeyType<const CSchemaClassInfo*>(
							const CSchemaClassInfo* const& search);  // 243
		CUtlMap<const CSchemaClassInfo::Find(
			const KeyType_t& key);  // 1162
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
				unsigned int i);  // 539
		CUtlRBTree<CUtlMap<const CSchemaClassInfo::Element(
			unsigned int i);  // 92
		CUtlMap<const CSchemaClassInfo::operator[](
				IndexType_t i);  // 1162
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::Element(
		unsigned int i);  // 92
	CUtlMap<const CSchemaClassInfo::operator[](
			IndexType_t i);  // 1166
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1167
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1148
	}
	CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract(
					const CUtlAbstractDelegate& delegate,
					unsigned int nDelegateParamCount,
					bool bDelegateReturnsVoid,
					EventID_t EventID,
					int nPriority,
					const char* pszName);  // 1146
} /* size: 685, variables: 1, inline expansions: 47 (1326 bytes) */

// <0067482D> ../public/tier0/eventdispatcher.h:1146
// variables: 2
inline void CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract(const CUtlAbstractDelegate& delegate, unsigned int nDelegateParamCount, bool bDelegateReturnsVoid, EventID_t EventID, int nPriority, const char* pszName)
{
	uint32 nIndex; // 1152
	{
	}
	{
		DelegateIterator_t* pActiveIterator; // 1158
	}
} /* size: 0, variables: 1 */

// <00674729> ../public/tier0/eventdispatcher.h:1171
// variables: 4
inline void CEventDispatcher_Identified<CEventIDManager_Default>::UnregisterEventListener_Abstract(const CUtlAbstractDelegate& delegate, EventID_t EventID)
{
	const char   __FUNCTION__; // 63906
	uint32 nIndex; // 1177
	{
	}
	{
		char szNameBuffer; // 1181
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
		}
	}
} /* size: 0, variables: 2 */

// <005B2152> ../public/tier0/eventdispatcher.h:1171
// variables: 2
// function calls: 19
void CEventDispatcher_Identified<CEventIDManager_Default>::UnregisterEventListener_Abstract(const CUtlAbstractDelegate& delegate, EventID_t EventID)
{
	uint32 nIndex; // 1177
	{
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 1176
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::FindAltKeyType<const CSchemaClassInfo*>(
						const CSchemaClassInfo* const& search);  // 243
	CUtlMap<const CSchemaClassInfo::Find(
		const KeyType_t& key);  // 1177
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::IsIdxValid(
			unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::LeftChild(
			unsigned int i);  // 667
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::IsValidIndex(
			unsigned int i);  // 659
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::IsValidIndex(
			unsigned int i);  // 190
	CUtlMap<const CSchemaClassInfo::IsValidIndex(
			IndexType_t i);  // 1178
	CUtlMap<const CSchemaClassInfo::operator[](
			IndexType_t i);  // 1178
	{
		char szNameBuffer; // 1181
		{
			GetEventName(EventID_t EventID,
					char* pScratchBuffer,
					size_t nScratchBufferSize);  // 1182
		}
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1185
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1173
	}
	CEventDispatcher_Identified<CEventIDManager_Default>::UnregisterEventListener_Abstract(
					const CUtlAbstractDelegate& delegate,
					EventID_t EventID);  // 1171
} /* size: 252, variables: 1, inline expansions: 17 (262 bytes) */

// <00596760> ../public/tier0/eventdispatcher.h:1171
// variables: 4
inline void CEventDispatcher_Identified<CEventIDManager_Default>::UnregisterEventListener_Abstract(const CUtlAbstractDelegate& delegate, EventID_t EventID)
{
	const char   __FUNCTION__; // 21963
	uint32 nIndex; // 1177
	{
	}
	{
		char szNameBuffer; // 1181
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
		}
	}
} /* size: 0, variables: 2 */

// <004B3382> ../public/tier0/eventdispatcher.h:1171
// variables: 4
inline void CEventDispatcher_Identified<CEventIDManager_Default>::UnregisterEventListener_Abstract(const CUtlAbstractDelegate& delegate, EventID_t EventID)
{
	const char   __FUNCTION__; // 37859
	uint32 nIndex; // 1177
	{
	}
	{
		char szNameBuffer; // 1181
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
		}
	}
} /* size: 0, variables: 2 */

// <0035DEE9> ../public/tier0/eventdispatcher.h:1235
// variable: 1
// function calls: 27
void CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_Start(DelegateIterator_t& iterationStruct, EventID_t EventID, bool bForward)
{
	uint32 nIndex; // 1244
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1237
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 1242
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::LeftChild(
			unsigned int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::Element(
		unsigned int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 617
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::FindAltKeyType<const CSchemaClassInfo*, CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (
																const CSchemaClassInfo* const& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::FindAltKeyType<const CSchemaClassInfo*>(
						const CSchemaClassInfo* const& search);  // 243
	CUtlMap<const CSchemaClassInfo::Find(
		const KeyType_t& key);  // 1244
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::IsIdxValid(
			unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::operator[](
			unsigned int i);  // 611
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::LeftChild(
			unsigned int i);  // 667
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::IsValidIndex(
			unsigned int i);  // 659
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::IsValidIndex(
			unsigned int i);  // 190
	CUtlMap<const CSchemaClassInfo::IsValidIndex(
			IndexType_t i);  // 1245
	CUtlMap<const CSchemaClassInfo::operator[](
			IndexType_t i);  // 1245
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1263
	CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_End(
				DelegateIterator_t& iterationStruct);  // 1254
} /* size: 360, variables: 1, inline expansions: 26 (591 bytes) */

// <0035DDCC> ../public/tier0/eventdispatcher.h:1260
void CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_End(DelegateIterator_t& iterationStruct)
{
} /* size: 0 */

// <0022E748> ../public/tier0/eventdispatcher.h:1267
void IDLessFunc(const EventID_t& l, const EventID_t& r)
{
} /* size: 14 */

// <0055A6B3> ../public/tier0/eventdispatcher.h:1310
// member functions: 2
// class size: 1
class CEventMapEmptyRegistrar<CEventIDManager_Default> {
	/* ../public/tier0/eventdispatcher.h:1313 */
	void OnEventMapRegistration(CEventMapEmptyRegistrar<CEventIDManager_Default>* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
	void OnEventMapRegistration(class CEventMapEmptyRegistrar<CEventIDManager_Default> *, class CEventDispatcher<CEventIDManager_Default> *, enum EventMapRegistrationType_t); /* linkage=_ZN23CEventMapEmptyRegistrarI23CEventIDManager_DefaultE22OnEventMapRegistrationEP16CEventDispatcherIS0_E26EventMapRegistrationType_t */
};

// <006767D1> ../public/tier0/eventdispatcher.h:1313
inline void CEventMapEmptyRegistrar<CEventIDManager_Default>::OnEventMapRegistration(CEventDispatcher<CEventIDManager_Default>* pDispatcher, EventMapRegistrationType_t nType)
{
} /* size: 0 */


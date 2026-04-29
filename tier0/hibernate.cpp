
//
// tier0/hibernate.cpp
//
//	referenced by: libtier0.so
//
//	functions: 16
//	class: 1
//

// <001A8B34> tier0/hibernate.cpp:16
// function calls: 5
void CTier0MasterMobileEventListener::~CTier0MasterMobileEventListener()
{
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 16
	IMobileEventListener::~IMobileEventListener(); // 16
} /* size: 116, inline expansions: 5 (120 bytes) */

// <001A89B4> tier0/hibernate.cpp:16
// function calls: 6
void CTier0MasterMobileEventListener::~CTier0MasterMobileEventListener()
{
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 16
	IMobileEventListener::~IMobileEventListener(); // 16
	CTier0MasterMobileEventListener::~CTier0MasterMobileEventListener(); // 16
} /* size: 122, inline expansions: 6 (210 bytes) */

// <001A8997> tier0/hibernate.cpp:16
inline void CTier0MasterMobileEventListener::~CTier0MasterMobileEventListener()
{
} /* size: 0 */

// <001A81EF> tier0/hibernate.cpp:16
// member functions: 18
// member variables: 5
// vtable entries: 3
// class size: 384
class CTier0MasterMobileEventListener : public IMobileEventListener {
public:
	/* class IMobileEventListener <ancestor>; */ /* 0 24 */
	void CTier0MasterMobileEventListener(CTier0MasterMobileEventListener* , CTier0MasterMobileEventListener& );
	void CTier0MasterMobileEventListener(CTier0MasterMobileEventListener* , const CTier0MasterMobileEventListener& );
	/* tier0/hibernate.cpp:19 */
	void CTier0MasterMobileEventListener(CTier0MasterMobileEventListener* );
	/* tier0/hibernate.cpp:46 */
	virtual void OnEnterHibernationState(CTier0MasterMobileEventListener* );
	/* tier0/hibernate.cpp:83 */
	virtual void OnExitHibernationState(CTier0MasterMobileEventListener* );
	/* tier0/hibernate.cpp:113 */
	virtual void OnLowMemoryNotification(CTier0MasterMobileEventListener* );
	/* tier0/hibernate.cpp:132 */
	void RegisterMobileEventListener(CTier0MasterMobileEventListener* , IMobileEventListener* );
	/* tier0/hibernate.cpp:183 */
	void UnregisterMobileEventListener(CTier0MasterMobileEventListener* , IMobileEventListener* );
	CThreadRWLock m_MobileEventListenerMutex; /* 24 344 */
	IMobileEventListener * m_MobileEventListeners; /* 368 8 */
	int m_nMobileEventListenerCount; /* 376 4 */
	bool m_bIsHibernating; /* 380 1 */
	virtual void ~CTier0MasterMobileEventListener(CTier0MasterMobileEventListener* );
	void CTier0MasterMobileEventListener(class CTier0MasterMobileEventListener *, class CTier0MasterMobileEventListener &); /* linkage=_ZN31CTier0MasterMobileEventListenerC4EOS_ */
	void CTier0MasterMobileEventListener(class CTier0MasterMobileEventListener *, const class CTier0MasterMobileEventListener  &); /* linkage=_ZN31CTier0MasterMobileEventListenerC4ERKS_ */
	void CTier0MasterMobileEventListener(class CTier0MasterMobileEventListener *); /* linkage=_ZN31CTier0MasterMobileEventListenerC4Ev */
	/* <1a9951> tier0/hibernate.cpp:46 */
	virtual void OnEnterHibernationState(class CTier0MasterMobileEventListener *); /* linkage=_ZN31CTier0MasterMobileEventListener23OnEnterHibernationStateEv */
	/* <1a9aae> tier0/hibernate.cpp:83 */
	virtual void OnExitHibernationState(class CTier0MasterMobileEventListener *); /* linkage=_ZN31CTier0MasterMobileEventListener22OnExitHibernationStateEv */
	virtual void OnLowMemoryNotification(class CTier0MasterMobileEventListener *); /* linkage=_ZN31CTier0MasterMobileEventListener23OnLowMemoryNotificationEv */
	void RegisterMobileEventListener(class CTier0MasterMobileEventListener *, class IMobileEventListener *); /* linkage=_ZN31CTier0MasterMobileEventListener27RegisterMobileEventListenerEP20IMobileEventListener */
	void UnregisterMobileEventListener(class CTier0MasterMobileEventListener *, class IMobileEventListener *); /* linkage=_ZN31CTier0MasterMobileEventListener29UnregisterMobileEventListenerEP20IMobileEventListener */
	virtual void ~CTier0MasterMobileEventListener(class CTier0MasterMobileEventListener *); /* linkage=_ZN31CTier0MasterMobileEventListenerD4Ev */
};

// <001A94C8> tier0/hibernate.cpp:19
void CTier0MasterMobileEventListener::CTier0MasterMobileEventListener()
{
} /* size: 0 */

// <001A94AF> tier0/hibernate.cpp:19
inline void CTier0MasterMobileEventListener::CTier0MasterMobileEventListener()
{
} /* size: 0 */

// <001A948E> tier0/hibernate.cpp:41
IMobileEventListener* Plat_GetMasterMobileEventHandler(void)
{
} /* size: 12 */

// <001A9951> tier0/hibernate.cpp:46
// variable: 1
// function call: 1
void CTier0MasterMobileEventListener::OnEnterHibernationState()
{
	IMobileEventListener* pIter; // 69
	{
	}
	CTier0MasterMobileEventListener::OnEnterHibernationState(); // 46
} /* size: 0, variables: 1, inline expansions: 1 (180 bytes) */

// <001A9431> tier0/hibernate.cpp:46
// variables: 3
void CTier0MasterMobileEventListener::OnEnterHibernationState()
{
	const char   __FUNCTION__; // 54013
	IMobileEventListener* pIter; // 69
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
} /* size: 0, variables: 2 */

// <001A9410> tier0/hibernate.cpp:78
uint32 Plat_GetCurrentHibernationState(void)
{
} /* size: 12 */

// <001A9AAE> tier0/hibernate.cpp:83
// variable: 1
// function call: 1
void CTier0MasterMobileEventListener::OnExitHibernationState()
{
	{
	}
	{
		IMobileEventListener* pIter; // 103
	}
	CTier0MasterMobileEventListener::OnExitHibernationState(); // 83
} /* size: 0, inline expansions: 1 (225 bytes) */

// <001A9396> tier0/hibernate.cpp:83
// variables: 4
void CTier0MasterMobileEventListener::OnExitHibernationState()
{
	bool s_bHasExitedBefore; // 89
	const char   __FUNCTION__; // 53887
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 92
	}
	{
		IMobileEventListener* pIter; // 103
	}
} /* size: 0, variables: 2 */

// <001A92A7> tier0/hibernate.cpp:113
// variable: 1
void CTier0MasterMobileEventListener::OnLowMemoryNotification()
{
	IMobileEventListener* pIter; // 118
} /* size: 153, variables: 1 */

// <001A924E> tier0/hibernate.cpp:127
void RegisterMobileEventListener(IMobileEventListener* pListener)
{
} /* size: 19 */

// <001A8DED> tier0/hibernate.cpp:132
// variables: 4
// function calls: 9
void CTier0MasterMobileEventListener::RegisterMobileEventListener(IMobileEventListener* pListener)
{
	IMobileEventListener* pIter; // 136
	const char   __FUNCTION__; // 53437
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 134
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 143
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 152
} /* size: 0, variables: 2, inline expansions: 9 (789 bytes) */

// <001A8D94> tier0/hibernate.cpp:178
void UnregisterMobileEventListener(IMobileEventListener* pListener)
{
} /* size: 19 */

// <001A8C72> tier0/hibernate.cpp:183
// variables: 4
void CTier0MasterMobileEventListener::UnregisterMobileEventListener(IMobileEventListener* pListener)
{
	IMobileEventListener* pIter; // 194
	IMobileEventListener** pWrite; // 195
	const char   __FUNCTION__; // 52227
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
} /* size: 0, variables: 3 */


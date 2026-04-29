
//
// public/tier0/hibernate.h
//
//	referenced by: libengine2.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 14
//	classes: 2
//

// <009A65A8> ../public/tier0/hibernate.h:17
void RegisterMobileEventListener(IMobileEventListener *)
{
} /* size: 0 */

// <009A6BE6> ../public/tier0/hibernate.h:18
void UnregisterMobileEventListener(IMobileEventListener *)
{
} /* size: 0 */

// <00127F53> ../public/tier0/hibernate.h:19
uint32 Plat_GetCurrentHibernationState(void)
{
} /* size: 0 */

// <00127F44> ../public/tier0/hibernate.h:22
IMobileEventListener* Plat_GetMasterMobileEventHandler(void)
{
} /* size: 0 */

// <001247F1> ../public/tier0/hibernate.h:24
// member functions: 11
// member variables: 3
// vtable entries: 3
// class size: 24
class IMobileEventListener {
	int ()(void) * * _vptr.IMobileEventListener; /* 0 8 */
	/* ../public/tier0/hibernate.h:27 */
	void IMobileEventListener(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:32 */
	virtual void ~IMobileEventListener(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:41 */
	virtual void OnEnterHibernationState(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:42 */
	virtual void OnExitHibernationState(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:43 */
	virtual void OnLowMemoryNotification(IMobileEventListener* );
private:
	IMobileEventListener * m_pNext; /* 8 8 */
	bool m_bRegistered; /* 16 1 */
	void IMobileEventListener(class IMobileEventListener *, const class IMobileEventListener  &); /* linkage=_ZN20IMobileEventListenerC4ERKS_ */
	void IMobileEventListener(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListenerC4Ev */
	virtual void ~IMobileEventListener(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListenerD4Ev */
	/* <15ebc1> ../public/tier0/hibernate.h:41 */
	virtual void OnEnterHibernationState(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListener23OnEnterHibernationStateEv */
	/* <15ebec> ../public/tier0/hibernate.h:42 */
	virtual void OnExitHibernationState(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListener22OnExitHibernationStateEv */
	virtual void OnLowMemoryNotification(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListener23OnLowMemoryNotificationEv */
};

// <009A1EF1> ../public/tier0/hibernate.h:24
// member functions: 12
// member variables: 3
// vtable entries: 3
// class size: 24
class IMobileEventListener {
	void IMobileEventListener(IMobileEventListener* , const IMobileEventListener& );
	int ()(void) * * _vptr.IMobileEventListener; /* 0 8 */
	/* ../public/tier0/hibernate.h:27 */
	void IMobileEventListener(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:32 */
	virtual void ~IMobileEventListener(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:41 */
	virtual void OnEnterHibernationState(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:42 */
	virtual void OnExitHibernationState(IMobileEventListener* );
	/* ../public/tier0/hibernate.h:43 */
	virtual void OnLowMemoryNotification(IMobileEventListener* );
private:
	IMobileEventListener * m_pNext; /* 8 8 */
	bool m_bRegistered; /* 16 1 */
	void IMobileEventListener(class IMobileEventListener *, const class IMobileEventListener  &); /* linkage=_ZN20IMobileEventListenerC4ERKS_ */
	void IMobileEventListener(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListenerC4Ev */
	virtual void ~IMobileEventListener(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListenerD4Ev */
	/* <15ebc1> ../public/tier0/hibernate.h:41 */
	virtual void OnEnterHibernationState(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListener23OnEnterHibernationStateEv */
	/* <15ebec> ../public/tier0/hibernate.h:42 */
	virtual void OnExitHibernationState(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListener22OnExitHibernationStateEv */
	virtual void OnLowMemoryNotification(class IMobileEventListener *); /* linkage=_ZN20IMobileEventListener23OnLowMemoryNotificationEv */
};

// <00A5571A> ../public/tier0/hibernate.h:27
void IMobileEventListener::IMobileEventListener()
{
} /* size: 0 */

// <00A55701> ../public/tier0/hibernate.h:27
inline void IMobileEventListener::IMobileEventListener()
{
} /* size: 0 */

// <00A556BE> ../public/tier0/hibernate.h:32
void IMobileEventListener::~IMobileEventListener()
{
} /* size: 29 */

// <00A55611> ../public/tier0/hibernate.h:32
// function call: 1
void IMobileEventListener::~IMobileEventListener()
{
	IMobileEventListener::~IMobileEventListener(); // 38
} /* size: 64, inline expansions: 1 (29 bytes) */

// <00A555F8> ../public/tier0/hibernate.h:32
inline void IMobileEventListener::~IMobileEventListener()
{
} /* size: 0 */

// <0015EBC1> ../public/tier0/hibernate.h:41
void IMobileEventListener::OnEnterHibernationState()
{
} /* size: 5 */

// <001509FA> ../public/tier0/hibernate.h:41
inline void IMobileEventListener::OnEnterHibernationState()
{
} /* size: 0 */

// <0015EBEC> ../public/tier0/hibernate.h:42
void IMobileEventListener::OnExitHibernationState()
{
} /* size: 5 */

// <001509E1> ../public/tier0/hibernate.h:42
inline void IMobileEventListener::OnExitHibernationState()
{
} /* size: 0 */

// <00A5556B> ../public/tier0/hibernate.h:43
void IMobileEventListener::OnLowMemoryNotification()
{
} /* size: 5 */


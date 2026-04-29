
//
// public/tier0/ieventsystem.h
//
//	referenced by: libmaterialsystem2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 4
//	classes: 3
//	structs: 2
//

// <0013F52D> ../public/tier0/ieventsystem.h:21
// member variable: 1
// struct size: 4
struct EventQueue_t__ {
	int unused; /* 0 4 */
};

// <0011F70D> ../public/tier0/ieventsystem.h:24
// member variable: 1
// struct size: 4
struct EventId_t__ {
	int unused; /* 0 4 */
};

// <0012D174> ../public/tier0/ieventsystem.h:72
void IEventSystem::IEventSystem()
{
} /* size: 0 */

// <0012D158> ../public/tier0/ieventsystem.h:72
inline void IEventSystem::IEventSystem()
{
} /* size: 0 */

// <0011EA91> ../public/tier0/ieventsystem.h:72
// member functions: 30
// member variable: 1
// vtable entries: 7
// class size: 8
class IEventSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IEventSystem(IEventSystem* , IEventSystem& );
	void IEventSystem(IEventSystem* , const IEventSystem& );
	void IEventSystem(IEventSystem* );
	void ~IEventSystem(IEventSystem* );
	/* ../public/tier0/ieventsystem.h:79 */
	virtual EventQueue_t CreateEventQueue(IEventSystem* );
	/* ../public/tier0/ieventsystem.h:80 */
	virtual void DestroyEventQueue(IEventSystem* , EventQueue_t);
	/* ../public/tier0/ieventsystem.h:83 */
	virtual void ProcessEvents(IEventSystem* , EventQueue_t);
	/* ../public/tier0/ieventsystem.h:88 */
	void PostEvent(IEventSystem* , EventId_t);
	/* ../public/tier0/ieventsystem.h:94 */
	void PostEvent(IEventSystem* , EventId_t, EventQueue_t);
	/* ../public/tier0/ieventsystem.h:100 */
	void PostEventToListener(IEventSystem* , EventId_t, const void* );
	/* ../public/tier0/ieventsystem.h:106 */
	void PostEventToListener(IEventSystem* , EventId_t, EventQueue_t, const void* );
private:
	/* ../public/tier0/ieventsystem.h:115 */
	virtual EventId_t RegisterEvent(IEventSystem* , const char* );
	/* ../public/tier0/ieventsystem.h:116 */
	virtual void PostEventInternal(IEventSystem* , EventId_t, EventQueue_t, const void* , CFunctorData* );
	/* ../public/tier0/ieventsystem.h:117 */
	virtual void RegisterListener(IEventSystem* , EventId_t, EventQueue_t, CFunctorCallback* );
	/* ../public/tier0/ieventsystem.h:118 */
	virtual void UnregisterListener(IEventSystem* , EventId_t, EventQueue_t, CFunctorCallback* );
	void IEventSystem(class IEventSystem *, class IEventSystem &); /* linkage=_ZN12IEventSystemC4EOS_ */
	void IEventSystem(class IEventSystem *, const class IEventSystem  &); /* linkage=_ZN12IEventSystemC4ERKS_ */
	void IEventSystem(class IEventSystem *); /* linkage=_ZN12IEventSystemC4Ev */
	void ~IEventSystem(class IEventSystem *); /* linkage=_ZN12IEventSystemD4Ev */
	virtual EventQueue_t CreateEventQueue(class IEventSystem *); /* linkage=_ZN12IEventSystem16CreateEventQueueEv */
	virtual void DestroyEventQueue(class IEventSystem *, EventQueue_t); /* linkage=_ZN12IEventSystem17DestroyEventQueueEP14EventQueue_t__ */
	virtual void ProcessEvents(class IEventSystem *, EventQueue_t); /* linkage=_ZN12IEventSystem13ProcessEventsEP14EventQueue_t__ */
	void PostEvent(class IEventSystem *, EventId_t); /* linkage=_ZN12IEventSystem9PostEventEP11EventId_t__ */
	void PostEvent(class IEventSystem *, EventId_t, EventQueue_t); /* linkage=_ZN12IEventSystem9PostEventEP11EventId_t__P14EventQueue_t__ */
	void PostEventToListener(class IEventSystem *, EventId_t, const void  *); /* linkage=_ZN12IEventSystem19PostEventToListenerEP11EventId_t__PKv */
	void PostEventToListener(class IEventSystem *, EventId_t, EventQueue_t, const void  *); /* linkage=_ZN12IEventSystem19PostEventToListenerEP11EventId_t__P14EventQueue_t__PKv */
	virtual EventId_t RegisterEvent(class IEventSystem *, const char  *); /* linkage=_ZN12IEventSystem13RegisterEventEPKc */
	virtual void PostEventInternal(class IEventSystem *, EventId_t, EventQueue_t, const void  *, class CFunctorData *); /* linkage=_ZN12IEventSystem17PostEventInternalEP11EventId_t__P14EventQueue_t__PKvP12CFunctorData */
	virtual void RegisterListener(class IEventSystem *, EventId_t, EventQueue_t, class CFunctorCallback *); /* linkage=_ZN12IEventSystem16RegisterListenerEP11EventId_t__P14EventQueue_t__P16CFunctorCallback */
	virtual void UnregisterListener(class IEventSystem *, EventId_t, EventQueue_t, class CFunctorCallback *); /* linkage=_ZN12IEventSystem18UnregisterListenerEP11EventId_t__P14EventQueue_t__P16CFunctorCallback */
};

// <0008189D> ../public/tier0/ieventsystem.h:129
// member functions: 7
// class size: 1
class CEventSignature<EShadersUnloaded> {
	/* ../public/tier0/ieventsystem.h:132 */
	void Post(void);
	/* ../public/tier0/ieventsystem.h:137 */
	void Post(EventQueue_t);
	/* ../public/tier0/ieventsystem.h:142 */
	void PostToListener(const void* );
	/* ../public/tier0/ieventsystem.h:147 */
	void PostToListener(EventQueue_t, const void* );
	/* ../public/tier0/ieventsystem.h:152 */
	void RegisterFunc(EventQueue_t, void (*)(void));
	/* ../public/tier0/ieventsystem.h:157 */
	void UnregisterFunc(EventQueue_t, void (*)(void));
	/* ../public/tier0/ieventsystem.h:174 */
	EventId_t RegisterEvent(const char* );
};

// <00341081> ../public/tier0/ieventsystem.h:129
// member functions: 7
// class size: 1
class CEventSignature<EMaterialReloaded> {
	/* ../public/tier0/ieventsystem.h:132 */
	void Post(void);
	/* ../public/tier0/ieventsystem.h:137 */
	void Post(EventQueue_t);
	/* ../public/tier0/ieventsystem.h:142 */
	void PostToListener(const void* );
	/* ../public/tier0/ieventsystem.h:147 */
	void PostToListener(EventQueue_t, const void* );
	/* ../public/tier0/ieventsystem.h:152 */
	void RegisterFunc(EventQueue_t, void (*)(void));
	/* ../public/tier0/ieventsystem.h:157 */
	void UnregisterFunc(EventQueue_t, void (*)(void));
	/* ../public/tier0/ieventsystem.h:174 */
	EventId_t RegisterEvent(const char* );
};

// <00346EA7> ../public/tier0/ieventsystem.h:132
// variable: 1
inline void Post(void)
{
	CFunctorData* pData; // 134
} /* size: 0, variables: 1 */

// <003471BB> ../public/tier0/ieventsystem.h:174
inline void RegisterEvent(const char* pEventName)
{
} /* size: 0 */


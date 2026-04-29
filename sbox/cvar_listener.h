
//
// sbox/cvar_listener.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	class: 1
//

// <014CADBE> sbox/cvar_listener.h:4
// member functions: 14
// member variable: 1
// vtable entries: 2
// class size: 8
class CManagedCvarListener : public IConVarListener {
public:
	/* class IConVarListener <ancestor>; */ /* 0 8 */
	void CManagedCvarListener(CManagedCvarListener* , CManagedCvarListener& );
	void CManagedCvarListener(CManagedCvarListener* , const CManagedCvarListener& );
	/* sbox/cvar_listener.cpp:6 */
	void CManagedCvarListener(CManagedCvarListener* );
	/* sbox/cvar_listener.cpp:10 */
	void Register(CManagedCvarListener* );
	/* sbox/cvar_listener.cpp:23 */
	void Unregister(CManagedCvarListener* );
protected:
	/* sbox/cvar_listener.cpp:32 */
	virtual void OnConVarRegistered(CManagedCvarListener* , const ConCommandBase* );
	/* sbox/cvar_listener.cpp:50 */
	virtual void OnConVarChanged(CManagedCvarListener* , ConVar* , const char* , float);
	void CManagedCvarListener(class CManagedCvarListener *, class CManagedCvarListener &); /* linkage=_ZN20CManagedCvarListenerC4EOS_ */
	void CManagedCvarListener(class CManagedCvarListener *, const class CManagedCvarListener  &); /* linkage=_ZN20CManagedCvarListenerC4ERKS_ */
	void CManagedCvarListener(class CManagedCvarListener *); /* linkage=_ZN20CManagedCvarListenerC4Ev */
	void Register(class CManagedCvarListener *); /* linkage=_ZN20CManagedCvarListener8RegisterEv */
	void Unregister(class CManagedCvarListener *); /* linkage=_ZN20CManagedCvarListener10UnregisterEv */
	virtual void OnConVarRegistered(class CManagedCvarListener *, const class ConCommandBase  *); /* linkage=_ZN20CManagedCvarListener18OnConVarRegisteredEPK14ConCommandBase */
	virtual void OnConVarChanged(class CManagedCvarListener *, class ConVar *, const char  *, float); /* linkage=_ZN20CManagedCvarListener15OnConVarChangedEP6ConVarPKcf */
};

// <00128032> sbox/cvar_listener.h:7
void CManagedCvarListener::CManagedCvarListener()
{
} /* size: 0 */


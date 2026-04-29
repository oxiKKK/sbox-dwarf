
//
// tier2/tier2.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 5
//	class: 1
//

// <0681F65C> tier2/tier2.cpp:32
void RegisterTier2Manifests(void)
{
} /* size: 0 */

// <031C3E8B> tier2/tier2.cpp:57
// variable: 1
// function call: 1
bool AppIsDedicatedServer(void)
{
	bool s_bIsDedicatedServer; // 59
	IApplication::IsDedicatedServer(); // 59
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0681ECDD> tier2/tier2.cpp:63
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 24
class CSchemaInstallCallback : public CPostConnectCallback {
public:
	/* class CPostConnectCallback <ancestor>; */ /* 0 24 */
	void ~CSchemaInstallCallback(CSchemaInstallCallback* );
	void CSchemaInstallCallback(CSchemaInstallCallback* , CSchemaInstallCallback& );
	void CSchemaInstallCallback(CSchemaInstallCallback* , const CSchemaInstallCallback& );
	/* tier2/tier2.cpp:67 */
	void CSchemaInstallCallback(CSchemaInstallCallback* );
	/* tier2/tier2.cpp:69 */
	virtual PostConnectCallbackRetVal_t OnConnect(CSchemaInstallCallback* );
	void ~CSchemaInstallCallback(class CSchemaInstallCallback *); /* linkage=_ZN22CSchemaInstallCallbackD4Ev */
	void CSchemaInstallCallback(class CSchemaInstallCallback *, class CSchemaInstallCallback &); /* linkage=_ZN22CSchemaInstallCallbackC4EOS_ */
	void CSchemaInstallCallback(class CSchemaInstallCallback *, const class CSchemaInstallCallback  &); /* linkage=_ZN22CSchemaInstallCallbackC4ERKS_ */
	void CSchemaInstallCallback(class CSchemaInstallCallback *); /* linkage=_ZN22CSchemaInstallCallbackC4Ev */
	virtual enum PostConnectCallbackRetVal_t OnConnect(class CSchemaInstallCallback *); /* linkage=_ZN22CSchemaInstallCallback9OnConnectEv */
};

// <0681F595> tier2/tier2.cpp:67
void CSchemaInstallCallback::CSchemaInstallCallback()
{
} /* size: 0 */

// <0681F57C> tier2/tier2.cpp:67
inline void CSchemaInstallCallback::CSchemaInstallCallback()
{
} /* size: 0 */

// <0681F538> tier2/tier2.cpp:69
void CSchemaInstallCallback::OnConnect()
{
} /* size: 70 */


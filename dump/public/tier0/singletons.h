
//
// public/tier0/singletons.h
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
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 4
//	classes: 2
//

// <001282DD> ../public/tier0/singletons.h:359
void ConnectInterfaceSingletons(CreateInterfaceFn *, int)
{
} /* size: 0 */

// <001282FC> ../public/tier0/singletons.h:360
void DisconnectInterfaceSingletons(void)
{
} /* size: 0 */

// <00128345> ../public/tier0/singletons.h:366
void ReconnectInterfaceSingletons(CreateInterfaceFn, const char *)
{
} /* size: 0 */

// <03C863A6> ../public/tier0/singletons.h:380
// member functions: 9
// member variables: 4
// static member variables: 2
// vtable entry: 1
// class size: 24
class CPostConnectCallback {
	void ~CPostConnectCallback(CPostConnectCallback* );
	void CPostConnectCallback(CPostConnectCallback* , CPostConnectCallback& );
	void CPostConnectCallback(CPostConnectCallback* , const CPostConnectCallback& );
	int ()(void) * * _vptr.CPostConnectCallback; /* 0 8 */
	/* ../public/tier0/singletons.h:383 */
	void CPostConnectCallback(CPostConnectCallback* , int);
	/* ../public/tier0/singletons.h:385 */
	virtual PostConnectCallbackRetVal_t OnConnect(CPostConnectCallback* );
private:
	static class CPostConnectCallback * s_pFirstCallback; /* 0 0 */
	static int s_nInstallOrder; /* 0 0 */
	CPostConnectCallback * m_pNextCallback; /* 8 8 */
	int m_nPriority; /* 16 4 */
	int m_nInstallOrder; /* 20 4 */
	void CPostConnectCallback(class CPostConnectCallback *, class CPostConnectCallback &); /* linkage=_ZN20CPostConnectCallbackC4EOS_ */
	void CPostConnectCallback(class CPostConnectCallback *, const class CPostConnectCallback  &); /* linkage=_ZN20CPostConnectCallbackC4ERKS_ */
	void CPostConnectCallback(class CPostConnectCallback *, int); /* linkage=_ZN20CPostConnectCallbackC4Ei */
	virtual enum PostConnectCallbackRetVal_t OnConnect(class CPostConnectCallback *); /* linkage=_ZN20CPostConnectCallback9OnConnectEv */
};

// <0444AEDB> ../public/tier0/singletons.h:380
// member functions: 8
// member variables: 4
// static member variables: 2
// vtable entry: 1
// class size: 24
class CPostConnectCallback {
	void CPostConnectCallback(CPostConnectCallback* , CPostConnectCallback& );
	void CPostConnectCallback(CPostConnectCallback* , const CPostConnectCallback& );
	int ()(void) * * _vptr.CPostConnectCallback; /* 0 8 */
	/* tier0_perproject/singletons.cpp:31 */
	void CPostConnectCallback(CPostConnectCallback* , int);
	/* ../public/tier0/singletons.h:385 */
	virtual PostConnectCallbackRetVal_t OnConnect(CPostConnectCallback* );
private:
	static class CPostConnectCallback * s_pFirstCallback; /* 0 0 */
	static int s_nInstallOrder; /* 0 0 */
	CPostConnectCallback * m_pNextCallback; /* 8 8 */
	int m_nPriority; /* 16 4 */
	int m_nInstallOrder; /* 20 4 */
	void CPostConnectCallback(class CPostConnectCallback *, class CPostConnectCallback &); /* linkage=_ZN20CPostConnectCallbackC4EOS_ */
	void CPostConnectCallback(class CPostConnectCallback *, const class CPostConnectCallback  &); /* linkage=_ZN20CPostConnectCallbackC4ERKS_ */
	void CPostConnectCallback(class CPostConnectCallback *, int); /* linkage=_ZN20CPostConnectCallbackC4Ei */
	virtual enum PostConnectCallbackRetVal_t OnConnect(class CPostConnectCallback *); /* linkage=_ZN20CPostConnectCallback9OnConnectEv */
};

// <0681F14C> ../public/tier0/singletons.h:383
void CPostConnectCallback::CPostConnectCallback(int nPriority)
{
} /* size: 0 */


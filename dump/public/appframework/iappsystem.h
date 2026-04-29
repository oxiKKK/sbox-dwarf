
//
// public/appframework/iappsystem.h
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
//	functions: 795
//	classes: 105
//	structs: 2
//

// <00077BD4> ../public/appframework/iappsystem.h:21
// member functions: 2
// member variables: 2
// struct size: 16
struct AppSystemInfo_t {
	/* ../public/appframework/iappsystem.h:23 */
	void AppSystemInfo_t(AppSystemInfo_t* );
	/* ../public/appframework/iappsystem.h:29 */
	void AppSystemInfo_t(AppSystemInfo_t* , const char* , const char* );
	const char * m_pModuleName; /* 0 8 */
	const char * m_pInterfaceName; /* 8 8 */
};

// <06DA6A51> ../../public/appframework/iappsystem.h:21
// member functions: 2
// member variables: 2
// struct size: 16
struct AppSystemInfo_t {
	/* ../../public/appframework/iappsystem.h:23 */
	void AppSystemInfo_t(AppSystemInfo_t* );
	/* ../../public/appframework/iappsystem.h:29 */
	void AppSystemInfo_t(AppSystemInfo_t* , const char* , const char* );
	const char * m_pModuleName; /* 0 8 */
	const char * m_pInterfaceName; /* 8 8 */
};

// <0464B575> ../public/appframework/iappsystem.h:29
void AppSystemInfo_t::AppSystemInfo_t(const char* pModuleName, const char* pInterfaceName)
{
} /* size: 0 */

// <0464B544> ../public/appframework/iappsystem.h:29
inline void AppSystemInfo_t::AppSystemInfo_t(const char* pModuleName, const char* pInterfaceName)
{
} /* size: 0 */

// <0464B1DD> ../public/appframework/iappsystem.h:81
void IAppSystem::IAppSystem()
{
} /* size: 0 */

// <0464B1C1> ../public/appframework/iappsystem.h:81
inline void IAppSystem::IAppSystem()
{
} /* size: 0 */

// <000DF53E> ../public/appframework/iappsystem.h:81
// member functions: 34
// member variable: 1
// vtable entries: 11
// class size: 8
class IAppSystem {
	IAppSystem& operator=(IAppSystem* , IAppSystem& );
	IAppSystem& operator=(IAppSystem* , const IAppSystem& );
	void IAppSystem(IAppSystem* , IAppSystem& );
	void IAppSystem(IAppSystem* , const IAppSystem& );
	void IAppSystem(IAppSystem* );
	void ~IAppSystem(IAppSystem* );
	int ()(void) * * _vptr.IAppSystem; /* 0 8 */
	/* ../public/appframework/iappsystem.h:85 */
	virtual bool Connect(IAppSystem* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:86 */
	virtual void Disconnect(IAppSystem* );
	/* ../public/appframework/iappsystem.h:90 */
	virtual void* QueryInterface(IAppSystem* , const char* );
	/* ../public/appframework/iappsystem.h:93 */
	virtual InitReturnVal_t Init(IAppSystem* );
	/* ../public/appframework/iappsystem.h:94 */
	virtual void Shutdown(IAppSystem* );
	/* ../public/appframework/iappsystem.h:97 */
	virtual void PreShutdown(IAppSystem* );
	/* ../public/appframework/iappsystem.h:100 */
	virtual const AppSystemInfo_t* GetDependencies(IAppSystem* );
	/* ../public/appframework/iappsystem.h:103 */
	virtual AppSystemTier_t GetTier(IAppSystem* );
	/* ../public/appframework/iappsystem.h:106 */
	virtual void Reconnect(IAppSystem* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:109 */
	virtual bool IsSingleton(IAppSystem* );
	/* ../public/appframework/iappsystem.h:112 */
	virtual AppSystemBuildType_t GetBuildType(IAppSystem* );
	void ~IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemD4Ev */
	void IAppSystem(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemC4EOS_ */
	void IAppSystem(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemC4ERKS_ */
	void IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemC4Ev */
	virtual bool Connect(class IAppSystem *, CreateInterfaceFn); /* linkage=_ZN10IAppSystem7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class IAppSystem *); /* linkage=_ZN10IAppSystem10DisconnectEv */
	virtual void * QueryInterface(class IAppSystem *, const char  *); /* linkage=_ZN10IAppSystem14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class IAppSystem *); /* linkage=_ZN10IAppSystem4InitEv */
	virtual void Shutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem8ShutdownEv */
	virtual void PreShutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class IAppSystem *); /* linkage=_ZN10IAppSystem15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class IAppSystem *); /* linkage=_ZN10IAppSystem7GetTierEv */
	virtual void Reconnect(class IAppSystem *, CreateInterfaceFn, const char  *); /* linkage=_ZN10IAppSystem9ReconnectEPFPvPKcPiES2_ */
	virtual bool IsSingleton(class IAppSystem *); /* linkage=_ZN10IAppSystem11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class IAppSystem *); /* linkage=_ZN10IAppSystem12GetBuildTypeEv */
	class IAppSystem & operator=(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemaSEOS_ */
	class IAppSystem & operator=(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemaSERKS_ */
};

// <0076DC1A> ../public/appframework/iappsystem.h:81
// member functions: 32
// member variable: 1
// vtable entries: 11
// class size: 8
class IAppSystem {
	void IAppSystem(IAppSystem* , IAppSystem& );
	void IAppSystem(IAppSystem* , const IAppSystem& );
	void IAppSystem(IAppSystem* );
	void ~IAppSystem(IAppSystem* );
	int ()(void) * * _vptr.IAppSystem; /* 0 8 */
	/* ../public/appframework/iappsystem.h:85 */
	virtual bool Connect(IAppSystem* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:86 */
	virtual void Disconnect(IAppSystem* );
	/* ../public/appframework/iappsystem.h:90 */
	virtual void* QueryInterface(IAppSystem* , const char* );
	/* ../public/appframework/iappsystem.h:93 */
	virtual InitReturnVal_t Init(IAppSystem* );
	/* ../public/appframework/iappsystem.h:94 */
	virtual void Shutdown(IAppSystem* );
	/* ../public/appframework/iappsystem.h:97 */
	virtual void PreShutdown(IAppSystem* );
	/* ../public/appframework/iappsystem.h:100 */
	virtual const AppSystemInfo_t* GetDependencies(IAppSystem* );
	/* ../public/appframework/iappsystem.h:103 */
	virtual AppSystemTier_t GetTier(IAppSystem* );
	/* ../public/appframework/iappsystem.h:106 */
	virtual void Reconnect(IAppSystem* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:109 */
	virtual bool IsSingleton(IAppSystem* );
	/* ../public/appframework/iappsystem.h:112 */
	virtual AppSystemBuildType_t GetBuildType(IAppSystem* );
	void ~IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemD4Ev */
	void IAppSystem(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemC4EOS_ */
	void IAppSystem(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemC4ERKS_ */
	void IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemC4Ev */
	virtual bool Connect(class IAppSystem *, CreateInterfaceFn); /* linkage=_ZN10IAppSystem7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class IAppSystem *); /* linkage=_ZN10IAppSystem10DisconnectEv */
	virtual void * QueryInterface(class IAppSystem *, const char  *); /* linkage=_ZN10IAppSystem14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class IAppSystem *); /* linkage=_ZN10IAppSystem4InitEv */
	virtual void Shutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem8ShutdownEv */
	virtual void PreShutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class IAppSystem *); /* linkage=_ZN10IAppSystem15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class IAppSystem *); /* linkage=_ZN10IAppSystem7GetTierEv */
	virtual void Reconnect(class IAppSystem *, CreateInterfaceFn, const char  *); /* linkage=_ZN10IAppSystem9ReconnectEPFPvPKcPiES2_ */
	virtual bool IsSingleton(class IAppSystem *); /* linkage=_ZN10IAppSystem11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class IAppSystem *); /* linkage=_ZN10IAppSystem12GetBuildTypeEv */
	class IAppSystem & operator=(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemaSEOS_ */
	class IAppSystem & operator=(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemaSERKS_ */
};

// <0681EF07> ../public/appframework/iappsystem.h:81
// member functions: 29
// member variable: 1
// vtable entries: 11
// class size: 8
class IAppSystem {
	void ~IAppSystem(IAppSystem* );
	int ()(void) * * _vptr.IAppSystem; /* 0 8 */
	/* ../public/appframework/iappsystem.h:85 */
	virtual bool Connect(IAppSystem* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:86 */
	virtual void Disconnect(IAppSystem* );
	/* ../public/appframework/iappsystem.h:90 */
	virtual void* QueryInterface(IAppSystem* , const char* );
	/* ../public/appframework/iappsystem.h:93 */
	virtual InitReturnVal_t Init(IAppSystem* );
	/* ../public/appframework/iappsystem.h:94 */
	virtual void Shutdown(IAppSystem* );
	/* ../public/appframework/iappsystem.h:97 */
	virtual void PreShutdown(IAppSystem* );
	/* ../public/appframework/iappsystem.h:100 */
	virtual const AppSystemInfo_t* GetDependencies(IAppSystem* );
	/* ../public/appframework/iappsystem.h:103 */
	virtual AppSystemTier_t GetTier(IAppSystem* );
	/* ../public/appframework/iappsystem.h:106 */
	virtual void Reconnect(IAppSystem* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:109 */
	virtual bool IsSingleton(IAppSystem* );
	/* ../public/appframework/iappsystem.h:112 */
	virtual AppSystemBuildType_t GetBuildType(IAppSystem* );
	void ~IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemD4Ev */
	void IAppSystem(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemC4EOS_ */
	void IAppSystem(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemC4ERKS_ */
	void IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemC4Ev */
	virtual bool Connect(class IAppSystem *, CreateInterfaceFn); /* linkage=_ZN10IAppSystem7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class IAppSystem *); /* linkage=_ZN10IAppSystem10DisconnectEv */
	virtual void * QueryInterface(class IAppSystem *, const char  *); /* linkage=_ZN10IAppSystem14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class IAppSystem *); /* linkage=_ZN10IAppSystem4InitEv */
	virtual void Shutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem8ShutdownEv */
	virtual void PreShutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class IAppSystem *); /* linkage=_ZN10IAppSystem15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class IAppSystem *); /* linkage=_ZN10IAppSystem7GetTierEv */
	virtual void Reconnect(class IAppSystem *, CreateInterfaceFn, const char  *); /* linkage=_ZN10IAppSystem9ReconnectEPFPvPKcPiES2_ */
	virtual bool IsSingleton(class IAppSystem *); /* linkage=_ZN10IAppSystem11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class IAppSystem *); /* linkage=_ZN10IAppSystem12GetBuildTypeEv */
	class IAppSystem & operator=(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemaSEOS_ */
	class IAppSystem & operator=(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemaSERKS_ */
};

// <06DABEE3> ../../public/appframework/iappsystem.h:81
// member functions: 32
// member variable: 1
// vtable entries: 11
// class size: 8
class IAppSystem {
	void ~IAppSystem(IAppSystem* );
	void IAppSystem(IAppSystem* , IAppSystem& );
	void IAppSystem(IAppSystem* , const IAppSystem& );
	void IAppSystem(IAppSystem* );
	int ()(void) * * _vptr.IAppSystem; /* 0 8 */
	/* ../../public/appframework/iappsystem.h:85 */
	virtual bool Connect(IAppSystem* , CreateInterfaceFn);
	/* ../../public/appframework/iappsystem.h:86 */
	virtual void Disconnect(IAppSystem* );
	/* ../../public/appframework/iappsystem.h:90 */
	virtual void* QueryInterface(IAppSystem* , const char* );
	/* ../../public/appframework/iappsystem.h:93 */
	virtual InitReturnVal_t Init(IAppSystem* );
	/* ../../public/appframework/iappsystem.h:94 */
	virtual void Shutdown(IAppSystem* );
	/* ../../public/appframework/iappsystem.h:97 */
	virtual void PreShutdown(IAppSystem* );
	/* ../../public/appframework/iappsystem.h:100 */
	virtual const AppSystemInfo_t* GetDependencies(IAppSystem* );
	/* ../../public/appframework/iappsystem.h:103 */
	virtual AppSystemTier_t GetTier(IAppSystem* );
	/* ../../public/appframework/iappsystem.h:106 */
	virtual void Reconnect(IAppSystem* , CreateInterfaceFn, const char* );
	/* ../../public/appframework/iappsystem.h:109 */
	virtual bool IsSingleton(IAppSystem* );
	/* ../../public/appframework/iappsystem.h:112 */
	virtual AppSystemBuildType_t GetBuildType(IAppSystem* );
	void ~IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemD4Ev */
	void IAppSystem(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemC4EOS_ */
	void IAppSystem(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemC4ERKS_ */
	void IAppSystem(class IAppSystem *); /* linkage=_ZN10IAppSystemC4Ev */
	virtual bool Connect(class IAppSystem *, CreateInterfaceFn); /* linkage=_ZN10IAppSystem7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class IAppSystem *); /* linkage=_ZN10IAppSystem10DisconnectEv */
	virtual void * QueryInterface(class IAppSystem *, const char  *); /* linkage=_ZN10IAppSystem14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class IAppSystem *); /* linkage=_ZN10IAppSystem4InitEv */
	virtual void Shutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem8ShutdownEv */
	virtual void PreShutdown(class IAppSystem *); /* linkage=_ZN10IAppSystem11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class IAppSystem *); /* linkage=_ZN10IAppSystem15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class IAppSystem *); /* linkage=_ZN10IAppSystem7GetTierEv */
	virtual void Reconnect(class IAppSystem *, CreateInterfaceFn, const char  *); /* linkage=_ZN10IAppSystem9ReconnectEPFPvPKcPiES2_ */
	virtual bool IsSingleton(class IAppSystem *); /* linkage=_ZN10IAppSystem11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class IAppSystem *); /* linkage=_ZN10IAppSystem12GetBuildTypeEv */
	class IAppSystem & operator=(class IAppSystem *, class IAppSystem &); /* linkage=_ZN10IAppSystemaSEOS_ */
	class IAppSystem & operator=(class IAppSystem *, const class IAppSystem  &); /* linkage=_ZN10IAppSystemaSERKS_ */
};

// <0464B177> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IApplication>::CBaseAppSystem()
{
} /* size: 0 */

// <0464B15B> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IApplication>::CBaseAppSystem()
{
} /* size: 0 */

// <0464B144> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IApplication>::~CBaseAppSystem()
{
} /* size: 0 */

// <0464B111> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IApplication>::~CBaseAppSystem()
{
} /* size: 0 */

// <03AE86A0> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ISceneUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <03AE8684> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ISceneUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <02EAF819> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ISceneSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <02EAF7FD> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ISceneSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <02877536> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IAppSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <0287751A> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IAppSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <026137BB> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ISoundSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <0261379F> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ISoundSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <0235985C> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IResourceSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <02359840> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IResourceSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <01FE6AAC> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IVideoSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <01FE6A90> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IVideoSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <01E817BC> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IVRSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <01E817A0> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IVRSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <015953CA> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<INetRuntime>::CBaseAppSystem()
{
} /* size: 0 */

// <015953AE> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<INetRuntime>::CBaseAppSystem()
{
} /* size: 0 */

// <00F2B6E1> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IWorldRendererMgr>::CBaseAppSystem()
{
} /* size: 0 */

// <00F2B6C5> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IWorldRendererMgr>::CBaseAppSystem()
{
} /* size: 0 */

// <00A07F53> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IPhysicsSystem>::~CBaseAppSystem()
{
} /* size: 0 */

// <00A07F20> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IPhysicsSystem>::~CBaseAppSystem()
{
} /* size: 0 */

// <009F4CAB> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IPhysicsSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <009F4C8F> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IPhysicsSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <008ABE6F> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IInputSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <008ABE53> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IInputSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <00744C16> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IToolService>::~CBaseAppSystem()
{
} /* size: 0 */

// <00744BE3> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IToolService>::~CBaseAppSystem()
{
} /* size: 0 */

// <007432A3> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IToolService>::CBaseAppSystem()
{
} /* size: 0 */

// <00743287> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IToolService>::CBaseAppSystem()
{
} /* size: 0 */

// <00676770> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ISoundService>::~CBaseAppSystem()
{
} /* size: 0 */

// <0067673D> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ISoundService>::~CBaseAppSystem()
{
} /* size: 0 */

// <006746AC> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ISoundService>::CBaseAppSystem()
{
} /* size: 0 */

// <00674690> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ISoundService>::CBaseAppSystem()
{
} /* size: 0 */

// <00597F1B> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IRenderService>::~CBaseAppSystem()
{
} /* size: 0 */

// <00597EE8> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IRenderService>::~CBaseAppSystem()
{
} /* size: 0 */

// <0059665A> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IRenderService>::CBaseAppSystem()
{
} /* size: 0 */

// <0059663E> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IRenderService>::CBaseAppSystem()
{
} /* size: 0 */

// <004B6849> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IInputService>::~CBaseAppSystem()
{
} /* size: 0 */

// <004B6816> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IInputService>::~CBaseAppSystem()
{
} /* size: 0 */

// <004B3DD6> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IInputService>::CBaseAppSystem()
{
} /* size: 0 */

// <004B3DBA> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IInputService>::CBaseAppSystem()
{
} /* size: 0 */

// <003612E7> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IEngineService>::~CBaseAppSystem()
{
} /* size: 0 */

// <003612B4> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IEngineService>::~CBaseAppSystem()
{
} /* size: 0 */

// <0035FD4C> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IEngineService>::CBaseAppSystem()
{
} /* size: 0 */

// <0035FD30> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IEngineService>::CBaseAppSystem()
{
} /* size: 0 */

// <00232985> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IEngineServiceMgr>::CBaseAppSystem()
{
} /* size: 0 */

// <00C77FDD> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IAnimationSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <00C77FC1> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IAnimationSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <0026563D> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IRenderUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <00265621> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IRenderUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <001E5344> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IRenderDeviceMgr>::CBaseAppSystem()
{
} /* size: 0 */

// <001E5327> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IRenderDeviceMgr>::CBaseAppSystem()
{
} /* size: 0 */

// <005A74A9> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IUtlStringTokenSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <005A748D> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IUtlStringTokenSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <003DEC84> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IProcessUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <003DEC68> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IProcessUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <0012D141> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IEventSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <0012D125> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IEventSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <000D601A> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ICvar>::CBaseAppSystem()
{
} /* size: 0 */

// <000D5FFE> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ICvar>::CBaseAppSystem()
{
} /* size: 0 */

// <000D9BD5> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ISchemaSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <000D9BB9> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ISchemaSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <0021DCE4> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IMeshUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <0021DCC8> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IMeshUtils>::CBaseAppSystem()
{
} /* size: 0 */

// <0016DDE7> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IMeshSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <005ED550> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ITextLayout>::CBaseAppSystem()
{
} /* size: 0 */

// <005ED534> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ITextLayout>::CBaseAppSystem()
{
} /* size: 0 */

// <004F9F9F> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IFontManager>::CBaseAppSystem()
{
} /* size: 0 */

// <004F9F83> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IFontManager>::CBaseAppSystem()
{
} /* size: 0 */

// <00442795> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IMaterialSystem2Utils>::CBaseAppSystem()
{
} /* size: 0 */

// <00093522> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IMaterialSystem2>::CBaseAppSystem()
{
} /* size: 0 */

// <00093506> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IMaterialSystem2>::CBaseAppSystem()
{
} /* size: 0 */

// <0006D79A> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ILocalize>::~CBaseAppSystem()
{
} /* size: 0 */

// <0006D767> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ILocalize>::~CBaseAppSystem()
{
} /* size: 0 */

// <0004BCDC> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<ILocalize>::CBaseAppSystem()
{
} /* size: 0 */

// <0004BCC0> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<ILocalize>::CBaseAppSystem()
{
} /* size: 0 */

// <000CDC44> ../public/appframework/iappsystem.h:120
void CBaseAppSystem<IFileSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <000CDC28> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IFileSystem>::CBaseAppSystem()
{
} /* size: 0 */

// <0004C706> ../public/appframework/iappsystem.h:120
inline void CBaseAppSystem<IAsyncFileSystem2>::CBaseAppSystem()
{
} /* size: 0 */

// <00125596> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IApplication> : public IApplication {
public:
	/* class IApplication <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IApplication>* , CBaseAppSystem<IApplication>& );
	void CBaseAppSystem(CBaseAppSystem<IApplication>* , const CBaseAppSystem<IApplication>& );
	void CBaseAppSystem(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IApplication>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IApplication>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IApplication>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IApplication>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IApplication>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<IApplication>* );
	void CBaseAppSystem(class CBaseAppSystem<IApplication> *, class CBaseAppSystem<IApplication> &); /* linkage=_ZN14CBaseAppSystemI12IApplicationEC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IApplication> *, const class CBaseAppSystem<IApplication>  &); /* linkage=_ZN14CBaseAppSystemI12IApplicationEC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationEC4Ev */
	virtual bool Connect(class CBaseAppSystem<IApplication> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI12IApplicationE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<IApplication> *, const char  *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE4InitEv */
	virtual void Shutdown(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<IApplication> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationE12GetBuildTypeEv */
	virtual void ~CBaseAppSystem(class CBaseAppSystem<IApplication> *); /* linkage=_ZN14CBaseAppSystemI12IApplicationED4Ev */
};

// <002251AD> ../public/appframework/iappsystem.h:120
// member functions: 17
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IEngineServiceMgr> : public IEngineServiceMgr {
public:
	/* class IEngineServiceMgr <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IEngineServiceMgr>* );
	void CBaseAppSystem(CBaseAppSystem<IEngineServiceMgr>* , CBaseAppSystem<IEngineServiceMgr>& );
	void CBaseAppSystem(CBaseAppSystem<IEngineServiceMgr>* , const CBaseAppSystem<IEngineServiceMgr>& );
	void CBaseAppSystem(CBaseAppSystem<IEngineServiceMgr>* );
	CBaseAppSystem<IEngineServiceMgr>& operator=(CBaseAppSystem<IEngineServiceMgr>* , CBaseAppSystem<IEngineServiceMgr>& );
	CBaseAppSystem<IEngineServiceMgr>& operator=(CBaseAppSystem<IEngineServiceMgr>* , const CBaseAppSystem<IEngineServiceMgr>& );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IEngineServiceMgr>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IEngineServiceMgr>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IEngineServiceMgr>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IEngineServiceMgr>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IEngineServiceMgr>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IEngineServiceMgr>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IEngineServiceMgr>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IEngineServiceMgr>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IEngineServiceMgr>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IEngineServiceMgr>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IEngineServiceMgr>* );
};

// <00354275> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IEngineService> : public IEngineService {
public:
	/* class IEngineService <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IEngineService>* , CBaseAppSystem<IEngineService>& );
	void CBaseAppSystem(CBaseAppSystem<IEngineService>* , const CBaseAppSystem<IEngineService>& );
	void CBaseAppSystem(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IEngineService>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IEngineService>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IEngineService>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IEngineService>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IEngineService>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<IEngineService>* );
};

// <004A3EB6> ../public/appframework/iappsystem.h:120
// member functions: 17
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IInputService> : public IInputService {
public:
	/* class IInputService <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IInputService>* , CBaseAppSystem<IInputService>& );
	void CBaseAppSystem(CBaseAppSystem<IInputService>* , const CBaseAppSystem<IInputService>& );
	void CBaseAppSystem(CBaseAppSystem<IInputService>* );
	CBaseAppSystem<IInputService>& operator=(CBaseAppSystem<IInputService>* , CBaseAppSystem<IInputService>& );
	CBaseAppSystem<IInputService>& operator=(CBaseAppSystem<IInputService>* , const CBaseAppSystem<IInputService>& );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IInputService>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IInputService>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IInputService>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IInputService>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IInputService>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IInputService>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IInputService>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IInputService>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IInputService>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IInputService>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IInputService>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<IInputService>* );
};

// <0058AE4D> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IRenderService> : public IRenderService {
public:
	/* class IRenderService <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IRenderService>* , CBaseAppSystem<IRenderService>& );
	void CBaseAppSystem(CBaseAppSystem<IRenderService>* , const CBaseAppSystem<IRenderService>& );
	void CBaseAppSystem(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IRenderService>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IRenderService>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IRenderService>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IRenderService>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IRenderService>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<IRenderService>* );
};

// <00668418> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ISoundService> : public ISoundService {
public:
	/* class ISoundService <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<ISoundService>* , CBaseAppSystem<ISoundService>& );
	void CBaseAppSystem(CBaseAppSystem<ISoundService>* , const CBaseAppSystem<ISoundService>& );
	void CBaseAppSystem(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ISoundService>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ISoundService>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ISoundService>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ISoundService>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ISoundService>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<ISoundService>* );
};

// <0073C367> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IToolService> : public IToolService {
public:
	/* class IToolService <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IToolService>* , CBaseAppSystem<IToolService>& );
	void CBaseAppSystem(CBaseAppSystem<IToolService>* , const CBaseAppSystem<IToolService>& );
	void CBaseAppSystem(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IToolService>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IToolService>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IToolService>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IToolService>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IToolService>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<IToolService>* );
};

// <008A21D3> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IInputSystem> : public IInputSystem {
public:
	/* class IInputSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IInputSystem>* , CBaseAppSystem<IInputSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IInputSystem>* , const CBaseAppSystem<IInputSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IInputSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IInputSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IInputSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IInputSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IInputSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IInputSystem>* );
};

// <009D741A> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IPhysicsSystem> : public IPhysicsSystem {
public:
	/* class IPhysicsSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IPhysicsSystem>* , CBaseAppSystem<IPhysicsSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IPhysicsSystem>* , const CBaseAppSystem<IPhysicsSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IPhysicsSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IPhysicsSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IPhysicsSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IPhysicsSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IPhysicsSystem>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<IPhysicsSystem>* );
};

// <00F19BA5> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IWorldRendererMgr> : public IWorldRendererMgr {
public:
	/* class IWorldRendererMgr <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IWorldRendererMgr>* );
	void CBaseAppSystem(CBaseAppSystem<IWorldRendererMgr>* , CBaseAppSystem<IWorldRendererMgr>& );
	void CBaseAppSystem(CBaseAppSystem<IWorldRendererMgr>* , const CBaseAppSystem<IWorldRendererMgr>& );
	void CBaseAppSystem(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IWorldRendererMgr>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IWorldRendererMgr>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IWorldRendererMgr>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IWorldRendererMgr>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IWorldRendererMgr>* );
};

// <0158B33B> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<INetRuntime> : public INetRuntime {
public:
	/* class INetRuntime <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<INetRuntime>* , CBaseAppSystem<INetRuntime>& );
	void CBaseAppSystem(CBaseAppSystem<INetRuntime>* , const CBaseAppSystem<INetRuntime>& );
	void CBaseAppSystem(CBaseAppSystem<INetRuntime>* );
	void ~CBaseAppSystem(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<INetRuntime>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<INetRuntime>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<INetRuntime>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<INetRuntime>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<INetRuntime>* );
};

// <01E77598> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IVRSystem> : public IVRSystem {
public:
	/* class IVRSystem <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IVRSystem>* );
	void CBaseAppSystem(CBaseAppSystem<IVRSystem>* , CBaseAppSystem<IVRSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IVRSystem>* , const CBaseAppSystem<IVRSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IVRSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IVRSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IVRSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IVRSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IVRSystem>* );
};

// <01FE4FBB> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IVideoSystem> : public IVideoSystem {
public:
	/* class IVideoSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IVideoSystem>* , CBaseAppSystem<IVideoSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IVideoSystem>* , const CBaseAppSystem<IVideoSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IVideoSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IVideoSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IVideoSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IVideoSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IVideoSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IVideoSystem>* );
};

// <02343284> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IResourceSystem> : public IResourceSystem {
public:
	/* class IResourceSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IResourceSystem>* , CBaseAppSystem<IResourceSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IResourceSystem>* , const CBaseAppSystem<IResourceSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IResourceSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IResourceSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IResourceSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IResourceSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IResourceSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IResourceSystem>* );
};

// <0260B968> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ISoundSystem> : public ISoundSystem {
public:
	/* class ISoundSystem <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<ISoundSystem>* );
	void CBaseAppSystem(CBaseAppSystem<ISoundSystem>* , CBaseAppSystem<ISoundSystem>& );
	void CBaseAppSystem(CBaseAppSystem<ISoundSystem>* , const CBaseAppSystem<ISoundSystem>& );
	void CBaseAppSystem(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ISoundSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ISoundSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ISoundSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ISoundSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ISoundSystem>* );
};

// <028731E3> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IAppSystem> : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IAppSystem>* );
	void CBaseAppSystem(CBaseAppSystem<IAppSystem>* , CBaseAppSystem<IAppSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IAppSystem>* , const CBaseAppSystem<IAppSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IAppSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IAppSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IAppSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IAppSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IAppSystem>* );
};

// <02E0AF4C> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ISceneSystem> : public ISceneSystem {
public:
	/* class ISceneSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<ISceneSystem>* , CBaseAppSystem<ISceneSystem>& );
	void CBaseAppSystem(CBaseAppSystem<ISceneSystem>* , const CBaseAppSystem<ISceneSystem>& );
	void CBaseAppSystem(CBaseAppSystem<ISceneSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ISceneSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ISceneSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ISceneSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ISceneSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ISceneSystem>* );
};

// <03ADEC1D> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ISceneUtils> : public ISceneUtils {
public:
	/* class ISceneUtils <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<ISceneUtils>* );
	void CBaseAppSystem(CBaseAppSystem<ISceneUtils>* , CBaseAppSystem<ISceneUtils>& );
	void CBaseAppSystem(CBaseAppSystem<ISceneUtils>* , const CBaseAppSystem<ISceneUtils>& );
	void CBaseAppSystem(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ISceneUtils>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ISceneUtils>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ISceneUtils>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ISceneUtils>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ISceneUtils>* );
};

// <00C11562> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IAnimationSystem> : public IAnimationSystem {
public:
	/* class IAnimationSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IAnimationSystem>* , CBaseAppSystem<IAnimationSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IAnimationSystem>* , const CBaseAppSystem<IAnimationSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IAnimationSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IAnimationSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IAnimationSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IAnimationSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IAnimationSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IAnimationSystem>* );
	void CBaseAppSystem(class CBaseAppSystem<IAnimationSystem> *, class CBaseAppSystem<IAnimationSystem> &); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemEC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IAnimationSystem> *, const class CBaseAppSystem<IAnimationSystem>  &); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemEC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemEC4Ev */
	void ~CBaseAppSystem(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemED4Ev */
	virtual bool Connect(class CBaseAppSystem<IAnimationSystem> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<IAnimationSystem> *, const char  *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE4InitEv */
	virtual void Shutdown(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<IAnimationSystem> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<IAnimationSystem> *); /* linkage=_ZN14CBaseAppSystemI16IAnimationSystemE12GetBuildTypeEv */
};

// <001E24B5> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IRenderDeviceMgr> : public IRenderDeviceMgr {
public:
	/* class IRenderDeviceMgr <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IRenderDeviceMgr>* , CBaseAppSystem<IRenderDeviceMgr>& );
	void CBaseAppSystem(CBaseAppSystem<IRenderDeviceMgr>* , const CBaseAppSystem<IRenderDeviceMgr>& );
	void CBaseAppSystem(CBaseAppSystem<IRenderDeviceMgr>* );
	void ~CBaseAppSystem(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IRenderDeviceMgr>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IRenderDeviceMgr>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IRenderDeviceMgr>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IRenderDeviceMgr>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IRenderDeviceMgr>* );
	void CBaseAppSystem(class CBaseAppSystem<IRenderDeviceMgr> *, class CBaseAppSystem<IRenderDeviceMgr> &); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrEC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IRenderDeviceMgr> *, const class CBaseAppSystem<IRenderDeviceMgr>  &); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrEC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrEC4Ev */
	void ~CBaseAppSystem(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrED4Ev */
	virtual bool Connect(class CBaseAppSystem<IRenderDeviceMgr> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<IRenderDeviceMgr> *, const char  *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE4InitEv */
	virtual void Shutdown(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<IRenderDeviceMgr> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<IRenderDeviceMgr> *); /* linkage=_ZN14CBaseAppSystemI16IRenderDeviceMgrE12GetBuildTypeEv */
};

// <00263E71> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IRenderUtils> : public IRenderUtils {
public:
	/* class IRenderUtils <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IRenderUtils>* );
	void CBaseAppSystem(CBaseAppSystem<IRenderUtils>* , CBaseAppSystem<IRenderUtils>& );
	void CBaseAppSystem(CBaseAppSystem<IRenderUtils>* , const CBaseAppSystem<IRenderUtils>& );
	void CBaseAppSystem(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IRenderUtils>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IRenderUtils>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IRenderUtils>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IRenderUtils>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IRenderUtils>* );
};

// <000C8717> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ICvar> : public ICvar {
public:
	/* class ICvar <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<ICvar>* );
	void CBaseAppSystem(CBaseAppSystem<ICvar>* , CBaseAppSystem<ICvar>& );
	void CBaseAppSystem(CBaseAppSystem<ICvar>* , const CBaseAppSystem<ICvar>& );
	void CBaseAppSystem(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ICvar>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ICvar>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ICvar>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ICvar>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ICvar>* );
	void ~CBaseAppSystem(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarED4Ev */
	void CBaseAppSystem(class CBaseAppSystem<ICvar> *, class CBaseAppSystem<ICvar> &); /* linkage=_ZN14CBaseAppSystemI5ICvarEC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<ICvar> *, const class CBaseAppSystem<ICvar>  &); /* linkage=_ZN14CBaseAppSystemI5ICvarEC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarEC4Ev */
	virtual bool Connect(class CBaseAppSystem<ICvar> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI5ICvarE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<ICvar> *, const char  *); /* linkage=_ZN14CBaseAppSystemI5ICvarE14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE4InitEv */
	virtual void Shutdown(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<ICvar> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI5ICvarE9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<ICvar> *); /* linkage=_ZN14CBaseAppSystemI5ICvarE12GetBuildTypeEv */
};

// <0012599B> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IEventSystem> : public IEventSystem {
public:
	/* class IEventSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IEventSystem>* , CBaseAppSystem<IEventSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IEventSystem>* , const CBaseAppSystem<IEventSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IEventSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IEventSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IEventSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IEventSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IEventSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IEventSystem>* );
};

// <003D701D> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IProcessUtils> : public IProcessUtils {
public:
	/* class IProcessUtils <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IProcessUtils>* );
	void CBaseAppSystem(CBaseAppSystem<IProcessUtils>* , CBaseAppSystem<IProcessUtils>& );
	void CBaseAppSystem(CBaseAppSystem<IProcessUtils>* , const CBaseAppSystem<IProcessUtils>& );
	void CBaseAppSystem(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IProcessUtils>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IProcessUtils>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IProcessUtils>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IProcessUtils>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IProcessUtils>* );
};

// <005A0C37> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IUtlStringTokenSystem> : public IUtlStringTokenSystem {
public:
	/* class IUtlStringTokenSystem <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IUtlStringTokenSystem>* );
	void CBaseAppSystem(CBaseAppSystem<IUtlStringTokenSystem>* , CBaseAppSystem<IUtlStringTokenSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IUtlStringTokenSystem>* , const CBaseAppSystem<IUtlStringTokenSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IUtlStringTokenSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IUtlStringTokenSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IUtlStringTokenSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IUtlStringTokenSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IUtlStringTokenSystem>* );
};

// <00082ED9> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ISchemaSystem> : public ISchemaSystem {
public:
	/* class ISchemaSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<ISchemaSystem>* , CBaseAppSystem<ISchemaSystem>& );
	void CBaseAppSystem(CBaseAppSystem<ISchemaSystem>* , const CBaseAppSystem<ISchemaSystem>& );
	void CBaseAppSystem(CBaseAppSystem<ISchemaSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ISchemaSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ISchemaSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ISchemaSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ISchemaSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ISchemaSystem>* );
	void CBaseAppSystem(class CBaseAppSystem<ISchemaSystem> *, class CBaseAppSystem<ISchemaSystem> &); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemEC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<ISchemaSystem> *, const class CBaseAppSystem<ISchemaSystem>  &); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemEC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemEC4Ev */
	void ~CBaseAppSystem(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemED4Ev */
	virtual bool Connect(class CBaseAppSystem<ISchemaSystem> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<ISchemaSystem> *, const char  *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE4InitEv */
	virtual void Shutdown(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<ISchemaSystem> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<ISchemaSystem> *); /* linkage=_ZN14CBaseAppSystemI13ISchemaSystemE12GetBuildTypeEv */
};

// <0015A463> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IMeshSystem> : public IMeshSystem {
public:
	/* class IMeshSystem <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IMeshSystem>* , CBaseAppSystem<IMeshSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IMeshSystem>* , const CBaseAppSystem<IMeshSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IMeshSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IMeshSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IMeshSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IMeshSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IMeshSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IMeshSystem>* );
	void CBaseAppSystem(class CBaseAppSystem<IMeshSystem> *, class CBaseAppSystem<IMeshSystem> &); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemEC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IMeshSystem> *, const class CBaseAppSystem<IMeshSystem>  &); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemEC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemEC4Ev */
	void ~CBaseAppSystem(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemED4Ev */
	virtual bool Connect(class CBaseAppSystem<IMeshSystem> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<IMeshSystem> *, const char  *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE4InitEv */
	virtual void Shutdown(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<IMeshSystem> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<IMeshSystem> *); /* linkage=_ZN14CBaseAppSystemI11IMeshSystemE12GetBuildTypeEv */
};

// <00215601> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IMeshUtils> : public IMeshUtils {
public:
	/* class IMeshUtils <ancestor>; */ /* 0 8 */
	void ~CBaseAppSystem(CBaseAppSystem<IMeshUtils>* );
	void CBaseAppSystem(CBaseAppSystem<IMeshUtils>* , CBaseAppSystem<IMeshUtils>& );
	void CBaseAppSystem(CBaseAppSystem<IMeshUtils>* , const CBaseAppSystem<IMeshUtils>& );
	void CBaseAppSystem(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IMeshUtils>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IMeshUtils>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IMeshUtils>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IMeshUtils>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IMeshUtils>* );
};

// <00087D1C> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IMaterialSystem2> : public IMaterialSystem2 {
public:
	/* class IMaterialSystem2 <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IMaterialSystem2>* , CBaseAppSystem<IMaterialSystem2>& );
	void CBaseAppSystem(CBaseAppSystem<IMaterialSystem2>* , const CBaseAppSystem<IMaterialSystem2>& );
	void CBaseAppSystem(CBaseAppSystem<IMaterialSystem2>* );
	void ~CBaseAppSystem(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IMaterialSystem2>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IMaterialSystem2>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IMaterialSystem2>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IMaterialSystem2>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IMaterialSystem2>* );
	void CBaseAppSystem(class CBaseAppSystem<IMaterialSystem2> *, class CBaseAppSystem<IMaterialSystem2> &); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2EC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IMaterialSystem2> *, const class CBaseAppSystem<IMaterialSystem2>  &); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2EC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2EC4Ev */
	void ~CBaseAppSystem(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2ED4Ev */
	virtual bool Connect(class CBaseAppSystem<IMaterialSystem2> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<IMaterialSystem2> *, const char  *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E4InitEv */
	virtual void Shutdown(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<IMaterialSystem2> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<IMaterialSystem2> *); /* linkage=_ZN14CBaseAppSystemI16IMaterialSystem2E12GetBuildTypeEv */
};

// <0042B7D2> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IMaterialSystem2Utils> : public IMaterialSystem2Utils {
public:
	/* class IMaterialSystem2Utils <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IMaterialSystem2Utils>* , CBaseAppSystem<IMaterialSystem2Utils>& );
	void CBaseAppSystem(CBaseAppSystem<IMaterialSystem2Utils>* , const CBaseAppSystem<IMaterialSystem2Utils>& );
	void CBaseAppSystem(CBaseAppSystem<IMaterialSystem2Utils>* );
	void ~CBaseAppSystem(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IMaterialSystem2Utils>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IMaterialSystem2Utils>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IMaterialSystem2Utils>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IMaterialSystem2Utils>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IMaterialSystem2Utils>* );
};

// <004EBC6A> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IFontManager> : public IFontManager {
public:
	/* class IFontManager <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IFontManager>* , CBaseAppSystem<IFontManager>& );
	void CBaseAppSystem(CBaseAppSystem<IFontManager>* , const CBaseAppSystem<IFontManager>& );
	void CBaseAppSystem(CBaseAppSystem<IFontManager>* );
	void ~CBaseAppSystem(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IFontManager>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IFontManager>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IFontManager>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IFontManager>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IFontManager>* );
};

// <005EAD6E> ../public/appframework/iappsystem.h:120
// member functions: 15
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ITextLayout> : public ITextLayout {
public:
	/* class ITextLayout <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<ITextLayout>* , CBaseAppSystem<ITextLayout>& );
	void CBaseAppSystem(CBaseAppSystem<ITextLayout>* , const CBaseAppSystem<ITextLayout>& );
	void CBaseAppSystem(CBaseAppSystem<ITextLayout>* );
	void ~CBaseAppSystem(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ITextLayout>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ITextLayout>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ITextLayout>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ITextLayout>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ITextLayout>* );
};

// <00040E9A> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<ILocalize> : public ILocalize {
public:
	/* class ILocalize <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<ILocalize>* , CBaseAppSystem<ILocalize>& );
	void CBaseAppSystem(CBaseAppSystem<ILocalize>* , const CBaseAppSystem<ILocalize>& );
	void CBaseAppSystem(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<ILocalize>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<ILocalize>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<ILocalize>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<ILocalize>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<ILocalize>* );
	virtual void ~CBaseAppSystem(CBaseAppSystem<ILocalize>* );
	void CBaseAppSystem(class CBaseAppSystem<ILocalize> *, class CBaseAppSystem<ILocalize> &); /* linkage=_ZN14CBaseAppSystemI9ILocalizeEC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<ILocalize> *, const class CBaseAppSystem<ILocalize>  &); /* linkage=_ZN14CBaseAppSystemI9ILocalizeEC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeEC4Ev */
	virtual bool Connect(class CBaseAppSystem<ILocalize> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<ILocalize> *, const char  *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE4InitEv */
	virtual void Shutdown(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<ILocalize> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeE12GetBuildTypeEv */
	virtual void ~CBaseAppSystem(class CBaseAppSystem<ILocalize> *); /* linkage=_ZN14CBaseAppSystemI9ILocalizeED4Ev */
};

// <0003C4B1> ../public/appframework/iappsystem.h:120
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class CBaseAppSystem<IAsyncFileSystem2> : public IAsyncFileSystem2 {
public:
	/* class IAsyncFileSystem2 <ancestor>; */ /* 0 8 */
	void CBaseAppSystem(CBaseAppSystem<IAsyncFileSystem2>* , CBaseAppSystem<IAsyncFileSystem2>& );
	void CBaseAppSystem(CBaseAppSystem<IAsyncFileSystem2>* , const CBaseAppSystem<IAsyncFileSystem2>& );
	void CBaseAppSystem(CBaseAppSystem<IAsyncFileSystem2>* );
	void ~CBaseAppSystem(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IAsyncFileSystem2>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IAsyncFileSystem2>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IAsyncFileSystem2>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IAsyncFileSystem2>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IAsyncFileSystem2>* );
	void CBaseAppSystem(class CBaseAppSystem<IAsyncFileSystem2> *, class CBaseAppSystem<IAsyncFileSystem2> &); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2EC4EOS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IAsyncFileSystem2> *, const class CBaseAppSystem<IAsyncFileSystem2>  &); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2EC4ERKS1_ */
	void CBaseAppSystem(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2EC4Ev */
	void ~CBaseAppSystem(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2ED4Ev */
	virtual bool Connect(class CBaseAppSystem<IAsyncFileSystem2> *, CreateInterfaceFn); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E10DisconnectEv */
	virtual void * QueryInterface(class CBaseAppSystem<IAsyncFileSystem2> *, const char  *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E4InitEv */
	virtual void Shutdown(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E8ShutdownEv */
	virtual void PreShutdown(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E11PreShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E7GetTierEv */
	virtual void Reconnect(class CBaseAppSystem<IAsyncFileSystem2> *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E9ReconnectEPFPvPKcPiES4_ */
	virtual bool IsSingleton(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CBaseAppSystem<IAsyncFileSystem2> *); /* linkage=_ZN14CBaseAppSystemI17IAsyncFileSystem2E12GetBuildTypeEv */
};

// <000AEC7A> ../public/appframework/iappsystem.h:120
// member functions: 17
// member variable: 1
// vtable entries: 11
// class size: 16
class CBaseAppSystem<IFileSystem> : public IFileSystem {
public:
	/* class IFileSystem <ancestor>; */ /* 0 16 */
	void CBaseAppSystem(CBaseAppSystem<IFileSystem>* , CBaseAppSystem<IFileSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IFileSystem>* , const CBaseAppSystem<IFileSystem>& );
	void CBaseAppSystem(CBaseAppSystem<IFileSystem>* );
	void ~CBaseAppSystem(CBaseAppSystem<IFileSystem>* );
	CBaseAppSystem<IFileSystem>& operator=(CBaseAppSystem<IFileSystem>* , CBaseAppSystem<IFileSystem>& );
	CBaseAppSystem<IFileSystem>& operator=(CBaseAppSystem<IFileSystem>* , const CBaseAppSystem<IFileSystem>& );
	/* ../public/appframework/iappsystem.h:124 */
	virtual bool Connect(CBaseAppSystem<IFileSystem>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:125 */
	virtual void Disconnect(CBaseAppSystem<IFileSystem>* );
	/* ../public/appframework/iappsystem.h:129 */
	virtual void* QueryInterface(CBaseAppSystem<IFileSystem>* , const char* );
	/* ../public/appframework/iappsystem.h:132 */
	virtual InitReturnVal_t Init(CBaseAppSystem<IFileSystem>* );
	/* ../public/appframework/iappsystem.h:133 */
	virtual void Shutdown(CBaseAppSystem<IFileSystem>* );
	/* ../public/appframework/iappsystem.h:136 */
	virtual void PreShutdown(CBaseAppSystem<IFileSystem>* );
	/* ../public/appframework/iappsystem.h:138 */
	virtual const AppSystemInfo_t* GetDependencies(CBaseAppSystem<IFileSystem>* );
	/* ../public/appframework/iappsystem.h:139 */
	virtual AppSystemTier_t GetTier(CBaseAppSystem<IFileSystem>* );
	/* ../public/appframework/iappsystem.h:141 */
	virtual void Reconnect(CBaseAppSystem<IFileSystem>* , CreateInterfaceFn, const char* );
	/* ../public/appframework/iappsystem.h:147 */
	virtual bool IsSingleton(CBaseAppSystem<IFileSystem>* );
	/* ../public/appframework/iappsystem.h:149 */
	virtual AppSystemBuildType_t GetBuildType(CBaseAppSystem<IFileSystem>* );
};

// <046366AF> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IApplication>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <03AE145E> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ISceneUtils>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <02E12761> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ISceneSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <02874833> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IAppSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <02611060> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ISoundSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <02346FE9> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IResourceSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <01FE6227> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IVideoSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <01E7DA76> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IVRSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <015918BE> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<INetRuntime>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00F26B79> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IWorldRendererMgr>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <009DDFAD> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IPhysicsSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <008A8C62> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IInputSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00740315> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IToolService>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0066C406> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ISoundService>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0058EE3A> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IRenderService>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <004A832E> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IInputService>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0035A994> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IEngineService>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0022DCE2> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IEngineServiceMgr>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00C18ED7> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IAnimationSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00264C36> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IRenderUtils>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <001E4237> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IRenderDeviceMgr>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <005A4584> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IUtlStringTokenSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <003D7B21> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IProcessUtils>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00126A30> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IEventSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <000CBBEC> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ICvar>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <000CCADF> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ISchemaSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00216BC2> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IMeshUtils>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0015EFFA> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IMeshSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <005EBDE9> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ITextLayout>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <004EDE9F> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IFontManager>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00432652> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IMaterialSystem2Utils>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0008E663> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IMaterialSystem2>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00043DAF> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<ILocalize>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <001400C9> ../public/appframework/iappsystem.h:124
inline void CBaseAppSystem<IFileSystem>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <04636696> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IApplication>::Disconnect()
{
} /* size: 0 */

// <03AE1445> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<ISceneUtils>::Disconnect()
{
} /* size: 0 */

// <02E12748> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<ISceneSystem>::Disconnect()
{
} /* size: 0 */

// <0287481A> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IAppSystem>::Disconnect()
{
} /* size: 0 */

// <0261102E> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<ISoundSystem>::Disconnect()
{
} /* size: 0 */

// <02346FD0> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IResourceSystem>::Disconnect()
{
} /* size: 0 */

// <01FE620E> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IVideoSystem>::Disconnect()
{
} /* size: 0 */

// <01E7DA5D> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IVRSystem>::Disconnect()
{
} /* size: 0 */

// <015918A5> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<INetRuntime>::Disconnect()
{
} /* size: 0 */

// <00F26B47> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IWorldRendererMgr>::Disconnect()
{
} /* size: 0 */

// <009DDF94> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IPhysicsSystem>::Disconnect()
{
} /* size: 0 */

// <008A6720> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IInputSystem>::Disconnect()
{
} /* size: 0 */

// <007402FC> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IToolService>::Disconnect()
{
} /* size: 0 */

// <0066C3ED> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<ISoundService>::Disconnect()
{
} /* size: 0 */

// <0058EE21> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IRenderService>::Disconnect()
{
} /* size: 0 */

// <004A8315> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IInputService>::Disconnect()
{
} /* size: 0 */

// <0035A97B> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IEngineService>::Disconnect()
{
} /* size: 0 */

// <0022A316> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IEngineServiceMgr>::Disconnect()
{
} /* size: 0 */

// <00C18EBE> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IAnimationSystem>::Disconnect()
{
} /* size: 0 */

// <00264C1D> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IRenderUtils>::Disconnect()
{
} /* size: 0 */

// <005A3823> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IUtlStringTokenSystem>::Disconnect()
{
} /* size: 0 */

// <003D7B08> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IProcessUtils>::Disconnect()
{
} /* size: 0 */

// <00126A17> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IEventSystem>::Disconnect()
{
} /* size: 0 */

// <000CBBD3> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<ICvar>::Disconnect()
{
} /* size: 0 */

// <00083F9C> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<ISchemaSystem>::Disconnect()
{
} /* size: 0 */

// <00216BA9> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IMeshUtils>::Disconnect()
{
} /* size: 0 */

// <0015EFE1> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IMeshSystem>::Disconnect()
{
} /* size: 0 */

// <004EDE86> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IFontManager>::Disconnect()
{
} /* size: 0 */

// <0042CA0C> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IMaterialSystem2Utils>::Disconnect()
{
} /* size: 0 */

// <0008E631> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IMaterialSystem2>::Disconnect()
{
} /* size: 0 */

// <00043D96> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<ILocalize>::Disconnect()
{
} /* size: 0 */

// <00140097> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IFileSystem>::Disconnect()
{
} /* size: 0 */

// <0003E168> ../public/appframework/iappsystem.h:125
inline void CBaseAppSystem<IAsyncFileSystem2>::Disconnect()
{
} /* size: 0 */

// <046368D3> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IApplication>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <03AE170E> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ISceneUtils>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <02E12D1A> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ISceneSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <02874AE7> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IAppSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0260F7C6> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ISoundSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <023470DD> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IResourceSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <01FE64D7> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IVideoSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <01E7DE2E> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IVRSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <01591B40> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<INetRuntime>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <00F22E2E> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IWorldRendererMgr>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <009DE5DB> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IPhysicsSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <008A6D1F> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IInputSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <00740BB5> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IToolService>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0066CD77> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ISoundService>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0058F6A5> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IRenderService>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <004A8CF9> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IInputService>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0035AFBD> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IEngineService>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0022A944> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IEngineServiceMgr>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <00C18FF7> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IAnimationSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <008C03D8> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IRenderDeviceMgr>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <00264EBA> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IRenderUtils>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <005A3981> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IUtlStringTokenSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <003D7CA7> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IProcessUtils>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <00126C52> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IEventSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <000C921D> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ICvar>::QueryInterface(const char* pInterfaceName)
{
} /* size: 0 */

// <000842DD> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ISchemaSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <00216FAC> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IMeshUtils>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0015F251> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IMeshSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <005EC06D> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ITextLayout>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <004EE123> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IFontManager>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0042CC61> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IMaterialSystem2Utils>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0008BFE8> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IMaterialSystem2>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <00044035> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<ILocalize>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <000B32CA> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IFileSystem>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0003E2D0> ../public/appframework/iappsystem.h:129
void* CBaseAppSystem<IAsyncFileSystem2>::QueryInterface(const char* pInterfaceName)
{
} /* size: 7 */

// <0463667D> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IApplication>::Init()
{
} /* size: 0 */

// <03AE3788> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ISceneUtils>::Init()
{
} /* size: 0 */

// <02E8BF82> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ISceneSystem>::Init()
{
} /* size: 0 */

// <02875C8E> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IAppSystem>::Init()
{
} /* size: 0 */

// <0261109E> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ISoundSystem>::Init()
{
} /* size: 0 */

// <0235023F> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IResourceSystem>::Init()
{
} /* size: 0 */

// <01FE67F2> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IVideoSystem>::Init()
{
} /* size: 0 */

// <01E7DA44> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IVRSystem>::Init()
{
} /* size: 0 */

// <01593106> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<INetRuntime>::Init()
{
} /* size: 0 */

// <00F26BB7> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IWorldRendererMgr>::Init()
{
} /* size: 0 */

// <009ED94F> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IPhysicsSystem>::Init()
{
} /* size: 0 */

// <008A8C87> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IInputSystem>::Init()
{
} /* size: 0 */

// <00742242> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IToolService>::Init()
{
} /* size: 0 */

// <00672F9C> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ISoundService>::Init()
{
} /* size: 0 */

// <0059522C> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IRenderService>::Init()
{
} /* size: 0 */

// <0035A962> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IEngineService>::Init()
{
} /* size: 0 */

// <0022DCC9> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IEngineServiceMgr>::Init()
{
} /* size: 0 */

// <00C511AF> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IAnimationSystem>::Init()
{
} /* size: 0 */

// <00265381> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IRenderUtils>::Init()
{
} /* size: 0 */

// <005A380A> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IUtlStringTokenSystem>::Init()
{
} /* size: 0 */

// <001269FE> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IEventSystem>::Init()
{
} /* size: 0 */

// <000CBBBA> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ICvar>::Init()
{
} /* size: 0 */

// <000CCAC6> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ISchemaSystem>::Init()
{
} /* size: 0 */

// <00216B90> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IMeshUtils>::Init()
{
} /* size: 0 */

// <0015EFC8> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IMeshSystem>::Init()
{
} /* size: 0 */

// <005ECD45> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ITextLayout>::Init()
{
} /* size: 0 */

// <004F65C1> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IFontManager>::Init()
{
} /* size: 0 */

// <0008BCDE> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IMaterialSystem2>::Init()
{
} /* size: 0 */

// <00045FBD> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<ILocalize>::Init()
{
} /* size: 0 */

// <000C4412> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IFileSystem>::Init()
{
} /* size: 0 */

// <00046D9E> ../public/appframework/iappsystem.h:132
inline void CBaseAppSystem<IAsyncFileSystem2>::Init()
{
} /* size: 0 */

// <04636664> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IApplication>::Shutdown()
{
} /* size: 0 */

// <03AE36D3> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<ISceneUtils>::Shutdown()
{
} /* size: 0 */

// <02E8BCDD> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<ISceneSystem>::Shutdown()
{
} /* size: 0 */

// <02875C03> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IAppSystem>::Shutdown()
{
} /* size: 0 */

// <02611085> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<ISoundSystem>::Shutdown()
{
} /* size: 0 */

// <023500FB> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IResourceSystem>::Shutdown()
{
} /* size: 0 */

// <01FE67D9> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IVideoSystem>::Shutdown()
{
} /* size: 0 */

// <01E7DA2B> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IVRSystem>::Shutdown()
{
} /* size: 0 */

// <00F26B9E> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IWorldRendererMgr>::Shutdown()
{
} /* size: 0 */

// <009ED936> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IPhysicsSystem>::Shutdown()
{
} /* size: 0 */

// <008A8C49> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IInputSystem>::Shutdown()
{
} /* size: 0 */

// <00742229> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IToolService>::Shutdown()
{
} /* size: 0 */

// <00672DFB> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<ISoundService>::Shutdown()
{
} /* size: 0 */

// <00595213> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IRenderService>::Shutdown()
{
} /* size: 0 */

// <0035A949> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IEngineService>::Shutdown()
{
} /* size: 0 */

// <0022DC68> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IEngineServiceMgr>::Shutdown()
{
} /* size: 0 */

// <00C51196> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IAnimationSystem>::Shutdown()
{
} /* size: 0 */

// <00265368> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IRenderUtils>::Shutdown()
{
} /* size: 0 */

// <001E3847> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IRenderDeviceMgr>::Shutdown()
{
} /* size: 0 */

// <005A37F1> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IUtlStringTokenSystem>::Shutdown()
{
} /* size: 0 */

// <003D9B5B> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IProcessUtils>::Shutdown()
{
} /* size: 0 */

// <001269E5> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IEventSystem>::Shutdown()
{
} /* size: 0 */

// <000CBBA1> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<ICvar>::Shutdown()
{
} /* size: 0 */

// <000CCAAD> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<ISchemaSystem>::Shutdown()
{
} /* size: 0 */

// <00216B77> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IMeshUtils>::Shutdown()
{
} /* size: 0 */

// <0015EFAF> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IMeshSystem>::Shutdown()
{
} /* size: 0 */

// <005ECD2C> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<ITextLayout>::Shutdown()
{
} /* size: 0 */

// <004F63BB> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IFontManager>::Shutdown()
{
} /* size: 0 */

// <004321C1> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IMaterialSystem2Utils>::Shutdown()
{
} /* size: 0 */

// <0008E724> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IMaterialSystem2>::Shutdown()
{
} /* size: 0 */

// <0003E14F> ../public/appframework/iappsystem.h:133
inline void CBaseAppSystem<IAsyncFileSystem2>::Shutdown()
{
} /* size: 0 */

// <04636807> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IApplication>::PreShutdown()
{
} /* size: 5 */

// <03AE16E0> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ISceneUtils>::PreShutdown()
{
} /* size: 5 */

// <02E12883> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ISceneSystem>::PreShutdown()
{
} /* size: 5 */

// <02874AB9> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IAppSystem>::PreShutdown()
{
} /* size: 5 */

// <0260F798> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ISoundSystem>::PreShutdown()
{
} /* size: 5 */

// <023852ED> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IResourceSystem>::PreShutdown()
{
} /* size: 5 */

// <02356E63> ../public/appframework/iappsystem.h:136
inline void CBaseAppSystem<IResourceSystem>::PreShutdown()
{
} /* size: 0 */

// <01FE64A9> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IVideoSystem>::PreShutdown()
{
} /* size: 5 */

// <01E7DE00> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IVRSystem>::PreShutdown()
{
} /* size: 5 */

// <01591B12> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<INetRuntime>::PreShutdown()
{
} /* size: 5 */

// <009DE09F> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IPhysicsSystem>::PreShutdown()
{
} /* size: 5 */

// <008A6CF1> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IInputSystem>::PreShutdown()
{
} /* size: 5 */

// <00740B87> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IToolService>::PreShutdown()
{
} /* size: 5 */

// <0066CD49> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ISoundService>::PreShutdown()
{
} /* size: 5 */

// <0058F677> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IRenderService>::PreShutdown()
{
} /* size: 5 */

// <004A8CCB> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IInputService>::PreShutdown()
{
} /* size: 5 */

// <0035AE96> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IEngineService>::PreShutdown()
{
} /* size: 5 */

// <0022A916> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IEngineServiceMgr>::PreShutdown()
{
} /* size: 5 */

// <00C1D916> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IAnimationSystem>::PreShutdown()
{
} /* size: 5 */

// <008C1751> ../public/appframework/iappsystem.h:136
inline void CBaseAppSystem<IRenderDeviceMgr>::PreShutdown()
{
} /* size: 0 */

// <00264E8C> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IRenderUtils>::PreShutdown()
{
} /* size: 5 */

// <001E3A6E> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IRenderDeviceMgr>::PreShutdown()
{
} /* size: 5 */

// <005A526B> ../public/appframework/iappsystem.h:136
inline void CBaseAppSystem<IUtlStringTokenSystem>::PreShutdown()
{
} /* size: 0 */

// <003D7C79> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IProcessUtils>::PreShutdown()
{
} /* size: 5 */

// <00126B86> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IEventSystem>::PreShutdown()
{
} /* size: 5 */

// <000C9491> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ICvar>::PreShutdown()
{
} /* size: 5 */

// <000842AF> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ISchemaSystem>::PreShutdown()
{
} /* size: 5 */

// <00216F7E> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IMeshUtils>::PreShutdown()
{
} /* size: 5 */

// <0015FF63> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IMeshSystem>::PreShutdown()
{
} /* size: 5 */

// <005EC03F> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ITextLayout>::PreShutdown()
{
} /* size: 5 */

// <0042CC33> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IMaterialSystem2Utils>::PreShutdown()
{
} /* size: 5 */

// <0008BFB8> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IMaterialSystem2>::PreShutdown()
{
} /* size: 5 */

// <00044007> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<ILocalize>::PreShutdown()
{
} /* size: 5 */

// <00108038> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IFileSystem>::PreShutdown()
{
} /* size: 5 */

// <000CD77B> ../public/appframework/iappsystem.h:136
inline void CBaseAppSystem<IFileSystem>::PreShutdown()
{
} /* size: 0 */

// <0003E4A4> ../public/appframework/iappsystem.h:136
void CBaseAppSystem<IAsyncFileSystem2>::PreShutdown()
{
} /* size: 5 */

// <046366EC> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IApplication>::GetDependencies()
{
} /* size: 0 */

// <03AE1550> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ISceneUtils>::GetDependencies()
{
} /* size: 7 */

// <02E12855> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ISceneSystem>::GetDependencies()
{
} /* size: 7 */

// <02874925> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IAppSystem>::GetDependencies()
{
} /* size: 7 */

// <0260F1E4> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ISoundSystem>::GetDependencies()
{
} /* size: 7 */

// <023470AF> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IResourceSystem>::GetDependencies()
{
} /* size: 7 */

// <01FE647B> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IVideoSystem>::GetDependencies()
{
} /* size: 7 */

// <01E7DB78> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IVRSystem>::GetDependencies()
{
} /* size: 7 */

// <00F2103F> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IWorldRendererMgr>::GetDependencies()
{
} /* size: 7 */

// <009DE071> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IPhysicsSystem>::GetDependencies()
{
} /* size: 7 */

// <008A67B3> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IInputSystem>::GetDependencies()
{
} /* size: 7 */

// <0066CD1B> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ISoundService>::GetDependencies()
{
} /* size: 7 */

// <004A8C9D> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IInputService>::GetDependencies()
{
} /* size: 7 */

// <0035AE68> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IEngineService>::GetDependencies()
{
} /* size: 7 */

// <0022A8E8> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IEngineServiceMgr>::GetDependencies()
{
} /* size: 7 */

// <001E38DC> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IRenderDeviceMgr>::GetDependencies()
{
} /* size: 7 */

// <005A383C> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IUtlStringTokenSystem>::GetDependencies()
{
} /* size: 0 */

// <000C9463> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ICvar>::GetDependencies()
{
} /* size: 7 */

// <00084031> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ISchemaSystem>::GetDependencies()
{
} /* size: 7 */

// <00216F50> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IMeshUtils>::GetDependencies()
{
} /* size: 7 */

// <005EBEAF> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ITextLayout>::GetDependencies()
{
} /* size: 7 */

// <004EDF65> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IFontManager>::GetDependencies()
{
} /* size: 7 */

// <0008BD7F> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IMaterialSystem2>::GetDependencies()
{
} /* size: 7 */

// <00043FD9> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<ILocalize>::GetDependencies()
{
} /* size: 7 */

// <001402F3> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IFileSystem>::GetDependencies()
{
} /* size: 7 */

// <0003E476> ../public/appframework/iappsystem.h:138
void CBaseAppSystem<IAsyncFileSystem2>::GetDependencies()
{
} /* size: 7 */

// <0463664C> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IApplication>::GetTier()
{
} /* size: 0 */

// <03AE142D> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ISceneUtils>::GetTier()
{
} /* size: 0 */

// <02E1272F> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ISceneSystem>::GetTier()
{
} /* size: 0 */

// <02874802> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IAppSystem>::GetTier()
{
} /* size: 0 */

// <0260F16B> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ISoundSystem>::GetTier()
{
} /* size: 0 */

// <02346FB7> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IResourceSystem>::GetTier()
{
} /* size: 0 */

// <01FE61F6> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IVideoSystem>::GetTier()
{
} /* size: 0 */

// <01E7DA13> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IVRSystem>::GetTier()
{
} /* size: 0 */

// <0159188D> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<INetRuntime>::GetTier()
{
} /* size: 0 */

// <00F20F98> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IWorldRendererMgr>::GetTier()
{
} /* size: 0 */

// <009DDF7C> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IPhysicsSystem>::GetTier()
{
} /* size: 0 */

// <008A6708> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IInputSystem>::GetTier()
{
} /* size: 0 */

// <007402E4> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IToolService>::GetTier()
{
} /* size: 0 */

// <0066C3D5> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ISoundService>::GetTier()
{
} /* size: 0 */

// <0058EE09> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IRenderService>::GetTier()
{
} /* size: 0 */

// <004A82FD> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IInputService>::GetTier()
{
} /* size: 0 */

// <0035A931> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IEngineService>::GetTier()
{
} /* size: 0 */

// <0022A2FE> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IEngineServiceMgr>::GetTier()
{
} /* size: 0 */

// <00C18EA6> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IAnimationSystem>::GetTier()
{
} /* size: 0 */

// <00264C04> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IRenderUtils>::GetTier()
{
} /* size: 0 */

// <005A37D8> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IUtlStringTokenSystem>::GetTier()
{
} /* size: 0 */

// <003D7AEF> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IProcessUtils>::GetTier()
{
} /* size: 0 */

// <001269CC> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IEventSystem>::GetTier()
{
} /* size: 0 */

// <000C9204> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ICvar>::GetTier()
{
} /* size: 0 */

// <00083F83> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ISchemaSystem>::GetTier()
{
} /* size: 0 */

// <00216B5E> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IMeshUtils>::GetTier()
{
} /* size: 0 */

// <0015EF97> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IMeshSystem>::GetTier()
{
} /* size: 0 */

// <005EBDB7> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ITextLayout>::GetTier()
{
} /* size: 0 */

// <004EDE6D> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IFontManager>::GetTier()
{
} /* size: 0 */

// <0042C9F3> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IMaterialSystem2Utils>::GetTier()
{
} /* size: 0 */

// <0008BCC5> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IMaterialSystem2>::GetTier()
{
} /* size: 0 */

// <00043D7D> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<ILocalize>::GetTier()
{
} /* size: 0 */

// <000B31D2> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IFileSystem>::GetTier()
{
} /* size: 0 */

// <0003E137> ../public/appframework/iappsystem.h:139
void CBaseAppSystem<IAsyncFileSystem2>::GetTier()
{
} /* size: 0 */

// <04636760> ../public/appframework/iappsystem.h:141
void CBaseAppSystem<IApplication>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 15 */

// <03AE149B> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<ISceneUtils>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <032FE619> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IApplication>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <02E1279F> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<ISceneSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <02874870> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IAppSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0260F19B> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<ISoundSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <02347027> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IResourceSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <01FE6264> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IVideoSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <01E7DAB3> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IVRSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <015918FB> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<INetRuntime>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <00F20FC8> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IWorldRendererMgr>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <009DDFEA> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IPhysicsSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <008A6751> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IInputSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <00740352> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IToolService>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0066C443> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<ISoundService>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0058EE77> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IRenderService>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <004A836B> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IInputService>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0035A9D1> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IEngineService>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0022A347> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IEngineServiceMgr>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <00C18F14> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IAnimationSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <008C023F> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IRenderDeviceMgr>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <00264C74> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IRenderUtils>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <005A5284> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IUtlStringTokenSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <003D7BA2> ../public/appframework/iappsystem.h:141
void CBaseAppSystem<IProcessUtils>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 15 */

// <00126AB1> ../public/appframework/iappsystem.h:141
void CBaseAppSystem<IEventSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 15 */

// <000C93BA> ../public/appframework/iappsystem.h:141
void CBaseAppSystem<ICvar>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 15 */

// <00083FCE> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<ISchemaSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <00216C00> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IMeshUtils>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0015F037> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IMeshSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <005EBE27> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<ITextLayout>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <004EDEDD> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IFontManager>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0042CA3E> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IMaterialSystem2Utils>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0008BD10> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IMaterialSystem2>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <00043DED> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<ILocalize>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <001400EE> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IFileSystem>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <0003E1BE> ../public/appframework/iappsystem.h:141
inline void CBaseAppSystem<IAsyncFileSystem2>::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <04636732> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IApplication>::IsSingleton()
{
} /* size: 10 */

// <03AE15AC> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ISceneUtils>::IsSingleton()
{
} /* size: 10 */

// <02E12BE4> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ISceneSystem>::IsSingleton()
{
} /* size: 10 */

// <02874981> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IAppSystem>::IsSingleton()
{
} /* size: 10 */

// <0260F664> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ISoundSystem>::IsSingleton()
{
} /* size: 10 */

// <0234714D> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IResourceSystem>::IsSingleton()
{
} /* size: 10 */

// <01FE6347> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IVideoSystem>::IsSingleton()
{
} /* size: 10 */

// <01E7DCCC> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IVRSystem>::IsSingleton()
{
} /* size: 10 */

// <015919DE> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<INetRuntime>::IsSingleton()
{
} /* size: 10 */

// <00F22CCC> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IWorldRendererMgr>::IsSingleton()
{
} /* size: 10 */

// <009DE4A7> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IPhysicsSystem>::IsSingleton()
{
} /* size: 10 */

// <008A6BBB> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IInputSystem>::IsSingleton()
{
} /* size: 10 */

// <00740A25> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IToolService>::IsSingleton()
{
} /* size: 10 */

// <0066CBE7> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ISoundService>::IsSingleton()
{
} /* size: 10 */

// <0058F515> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IRenderService>::IsSingleton()
{
} /* size: 10 */

// <004A8B67> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IInputService>::IsSingleton()
{
} /* size: 10 */

// <0035AD34> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IEngineService>::IsSingleton()
{
} /* size: 10 */

// <00C1D7E2> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IAnimationSystem>::IsSingleton()
{
} /* size: 10 */

// <00264D2A> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IRenderUtils>::IsSingleton()
{
} /* size: 10 */

// <005A3884> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IUtlStringTokenSystem>::IsSingleton()
{
} /* size: 10 */

// <003D7B74> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IProcessUtils>::IsSingleton()
{
} /* size: 10 */

// <000C938C> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ICvar>::IsSingleton()
{
} /* size: 10 */

// <0008417B> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ISchemaSystem>::IsSingleton()
{
} /* size: 10 */

// <00216E1A> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IMeshUtils>::IsSingleton()
{
} /* size: 10 */

// <005EBF0B> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ITextLayout>::IsSingleton()
{
} /* size: 10 */

// <0042CAFD> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IMaterialSystem2Utils>::IsSingleton()
{
} /* size: 10 */

// <0008BE7E> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IMaterialSystem2>::IsSingleton()
{
} /* size: 10 */

// <00043EA3> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<ILocalize>::IsSingleton()
{
} /* size: 10 */

// <001401BD> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IFileSystem>::IsSingleton()
{
} /* size: 10 */

// <0003E340> ../public/appframework/iappsystem.h:147
void CBaseAppSystem<IAsyncFileSystem2>::IsSingleton()
{
} /* size: 10 */

// <04636704> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IApplication>::GetBuildType()
{
} /* size: 10 */

// <03AE157E> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<ISceneUtils>::GetBuildType()
{
} /* size: 10 */

// <02E12BB6> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<ISceneSystem>::GetBuildType()
{
} /* size: 10 */

// <02874953> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IAppSystem>::GetBuildType()
{
} /* size: 10 */

// <0260F636> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<ISoundSystem>::GetBuildType()
{
} /* size: 10 */

// <0234711F> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IResourceSystem>::GetBuildType()
{
} /* size: 10 */

// <01FE6319> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IVideoSystem>::GetBuildType()
{
} /* size: 10 */

// <01E7DC9E> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IVRSystem>::GetBuildType()
{
} /* size: 10 */

// <015919B0> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<INetRuntime>::GetBuildType()
{
} /* size: 10 */

// <00F22C9E> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IWorldRendererMgr>::GetBuildType()
{
} /* size: 10 */

// <009DE479> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IPhysicsSystem>::GetBuildType()
{
} /* size: 10 */

// <008A6B8D> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IInputSystem>::GetBuildType()
{
} /* size: 10 */

// <007409F7> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IToolService>::GetBuildType()
{
} /* size: 10 */

// <0066CBB9> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<ISoundService>::GetBuildType()
{
} /* size: 10 */

// <0058F4E7> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IRenderService>::GetBuildType()
{
} /* size: 10 */

// <004A8B39> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IInputService>::GetBuildType()
{
} /* size: 10 */

// <0035AD06> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IEngineService>::GetBuildType()
{
} /* size: 10 */

// <0022A784> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IEngineServiceMgr>::GetBuildType()
{
} /* size: 10 */

// <00C1D7B4> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IAnimationSystem>::GetBuildType()
{
} /* size: 10 */

// <008C0270> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IRenderDeviceMgr>::GetBuildType()
{
} /* size: 10 */

// <00264CFC> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IRenderUtils>::GetBuildType()
{
} /* size: 10 */

// <005A3855> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IUtlStringTokenSystem>::GetBuildType()
{
} /* size: 10 */

// <003D7B46> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IProcessUtils>::GetBuildType()
{
} /* size: 10 */

// <00126A55> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IEventSystem>::GetBuildType()
{
} /* size: 10 */

// <000C935E> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<ICvar>::GetBuildType()
{
} /* size: 10 */

// <00216DEC> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IMeshUtils>::GetBuildType()
{
} /* size: 10 */

// <0015FE01> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IMeshSystem>::GetBuildType()
{
} /* size: 10 */

// <005EBEDD> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<ITextLayout>::GetBuildType()
{
} /* size: 10 */

// <004EDF93> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IFontManager>::GetBuildType()
{
} /* size: 10 */

// <0042CACF> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IMaterialSystem2Utils>::GetBuildType()
{
} /* size: 10 */

// <0014018F> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IFileSystem>::GetBuildType()
{
} /* size: 10 */

// <0003E312> ../public/appframework/iappsystem.h:149
void CBaseAppSystem<IAsyncFileSystem2>::GetBuildType()
{
} /* size: 10 */

// <0464B0FA> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IApplication, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0464B0DE> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IApplication, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0464B0C7> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IApplication, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <0464B094> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IApplication, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <03AE866D> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ISceneUtils, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <03AE8651> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ISceneUtils, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <02EAF7E6> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ISceneSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <02EAF7CA> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ISceneSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <02877503> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IAppSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <028774E7> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IAppSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <02613788> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ISoundSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0261376C> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ISoundSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <02359829> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IResourceSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0235980D> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IResourceSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <01FE6A79> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IVideoSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <01FE6A5D> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IVideoSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <01E81789> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IVRSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <01E8176D> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IVRSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <01595397> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<INetRuntime, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0159537B> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<INetRuntime, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00F2B6AE> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IWorldRendererMgr, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00F2B692> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IWorldRendererMgr, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00A07F09> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IPhysicsSystem, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <00A07ED6> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IPhysicsSystem, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <009F4C78> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IPhysicsSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <009F4C5C> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IPhysicsSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <008ABE3C> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IInputSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <008ABE20> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IInputSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00744BCC> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IToolService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <00744B99> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IToolService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <00743270> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IToolService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00743254> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IToolService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00676726> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ISoundService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <006766F3> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ISoundService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <00674679> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ISoundService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0067465D> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ISoundService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00597ED1> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IRenderService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <00597E9E> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IRenderService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <00596627> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IRenderService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0059660B> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IRenderService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <004B67FF> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IInputService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <004B67CC> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IInputService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <004B3DA3> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IInputService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <004B3D87> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IInputService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0036129D> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IEngineService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <0036126A> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IEngineService, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <0035FD19> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IEngineService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0035FCFD> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IEngineService, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0023296E> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IEngineServiceMgr, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00232952> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IEngineServiceMgr, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00C77FAA> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IAnimationSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00C77F8E> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IAnimationSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <001E5310> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IRenderDeviceMgr, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <001E52F3> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IRenderDeviceMgr, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <005A7476> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IUtlStringTokenSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <005A745A> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IUtlStringTokenSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <003DEC51> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IProcessUtils, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <003DEC35> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IProcessUtils, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0012D0F2> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IEventSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000D5FE7> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ICvar, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000D5FCB> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ICvar, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000D9BA2> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ISchemaSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000D9B86> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ISchemaSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0021DCB1> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IMeshUtils, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0021DC95> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IMeshUtils, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0016DDB4> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IMeshSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0016DD98> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IMeshSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <005ED51D> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ITextLayout, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <005ED501> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ITextLayout, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <004F9F50> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IFontManager, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00442762> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IMaterialSystem2Utils, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000934EF> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IMaterialSystem2, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000934D3> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IMaterialSystem2, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0006D750> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ILocalize, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <0006D71D> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ILocalize, 0>::~CTier0AppSystem()
{
} /* size: 0 */

// <0004BCA9> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<ILocalize, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0004BC8D> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<ILocalize, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000CDC11> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IFileSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <000CDBF5> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IFileSystem, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0004C6EF> ../public/appframework/iappsystem.h:171
void CTier0AppSystem<IAsyncFileSystem2, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <0004C6D3> ../public/appframework/iappsystem.h:171
inline void CTier0AppSystem<IAsyncFileSystem2, 0>::CTier0AppSystem()
{
} /* size: 0 */

// <00125406> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IApplication, 0> : public CBaseAppSystem<IApplication> {
public:
	/* class CBaseAppSystem<IApplication> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IApplication, 0>* , CTier0AppSystem<IApplication, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IApplication, 0>* , const CTier0AppSystem<IApplication, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IApplication, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IApplication, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IApplication, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IApplication, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IApplication, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IApplication, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<IApplication, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<IApplication, 0> *, class CTier0AppSystem<IApplication, 0> &); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IApplication, 0> *, const class CTier0AppSystem<IApplication, 0>  &); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EEC4Ev */
	virtual bool Connect(class CTier0AppSystem<IApplication, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EE7GetTierEv */
	virtual void ~CTier0AppSystem(class CTier0AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier0AppSystemI12IApplicationLx0EED4Ev */
};

// <00224FD3> ../public/appframework/iappsystem.h:171
// member functions: 11
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IEngineServiceMgr, 0> : public CBaseAppSystem<IEngineServiceMgr> {
public:
	/* class CBaseAppSystem<IEngineServiceMgr> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IEngineServiceMgr, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IEngineServiceMgr, 0>* , CTier0AppSystem<IEngineServiceMgr, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IEngineServiceMgr, 0>* , const CTier0AppSystem<IEngineServiceMgr, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IEngineServiceMgr, 0>* );
	CTier0AppSystem<IEngineServiceMgr, 0>& operator=(CTier0AppSystem<IEngineServiceMgr, 0>* , CTier0AppSystem<IEngineServiceMgr, 0>& );
	CTier0AppSystem<IEngineServiceMgr, 0>& operator=(CTier0AppSystem<IEngineServiceMgr, 0>* , const CTier0AppSystem<IEngineServiceMgr, 0>& );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IEngineServiceMgr, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IEngineServiceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IEngineServiceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IEngineServiceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IEngineServiceMgr, 0>* );
};

// <003540E5> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IEngineService, 0> : public CBaseAppSystem<IEngineService> {
public:
	/* class CBaseAppSystem<IEngineService> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IEngineService, 0>* , CTier0AppSystem<IEngineService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IEngineService, 0>* , const CTier0AppSystem<IEngineService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IEngineService, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IEngineService, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IEngineService, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IEngineService, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IEngineService, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IEngineService, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<IEngineService, 0>* );
};

// <004A3CD6> ../public/appframework/iappsystem.h:171
// member functions: 11
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IInputService, 0> : public CBaseAppSystem<IInputService> {
public:
	/* class CBaseAppSystem<IInputService> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IInputService, 0>* , CTier0AppSystem<IInputService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IInputService, 0>* , const CTier0AppSystem<IInputService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IInputService, 0>* );
	CTier0AppSystem<IInputService, 0>& operator=(CTier0AppSystem<IInputService, 0>* , CTier0AppSystem<IInputService, 0>& );
	CTier0AppSystem<IInputService, 0>& operator=(CTier0AppSystem<IInputService, 0>* , const CTier0AppSystem<IInputService, 0>& );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IInputService, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IInputService, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IInputService, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IInputService, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IInputService, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<IInputService, 0>* );
};

// <0058ACBD> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IRenderService, 0> : public CBaseAppSystem<IRenderService> {
public:
	/* class CBaseAppSystem<IRenderService> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IRenderService, 0>* , CTier0AppSystem<IRenderService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IRenderService, 0>* , const CTier0AppSystem<IRenderService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IRenderService, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IRenderService, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IRenderService, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IRenderService, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IRenderService, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IRenderService, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<IRenderService, 0>* );
};

// <00668288> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ISoundService, 0> : public CBaseAppSystem<ISoundService> {
public:
	/* class CBaseAppSystem<ISoundService> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<ISoundService, 0>* , CTier0AppSystem<ISoundService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISoundService, 0>* , const CTier0AppSystem<ISoundService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISoundService, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ISoundService, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ISoundService, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ISoundService, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ISoundService, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ISoundService, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<ISoundService, 0>* );
};

// <0073C1D7> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IToolService, 0> : public CBaseAppSystem<IToolService> {
public:
	/* class CBaseAppSystem<IToolService> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IToolService, 0>* , CTier0AppSystem<IToolService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IToolService, 0>* , const CTier0AppSystem<IToolService, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IToolService, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IToolService, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IToolService, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IToolService, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IToolService, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IToolService, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<IToolService, 0>* );
};

// <008A2048> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IInputSystem, 0> : public CBaseAppSystem<IInputSystem> {
public:
	/* class CBaseAppSystem<IInputSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IInputSystem, 0>* , CTier0AppSystem<IInputSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IInputSystem, 0>* , const CTier0AppSystem<IInputSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IInputSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IInputSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IInputSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IInputSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IInputSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IInputSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IInputSystem, 0>* );
};

// <009D728A> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IPhysicsSystem, 0> : public CBaseAppSystem<IPhysicsSystem> {
public:
	/* class CBaseAppSystem<IPhysicsSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IPhysicsSystem, 0>* , CTier0AppSystem<IPhysicsSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IPhysicsSystem, 0>* , const CTier0AppSystem<IPhysicsSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IPhysicsSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IPhysicsSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IPhysicsSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IPhysicsSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IPhysicsSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IPhysicsSystem, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<IPhysicsSystem, 0>* );
};

// <00F19A1B> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IWorldRendererMgr, 0> : public CBaseAppSystem<IWorldRendererMgr> {
public:
	/* class CBaseAppSystem<IWorldRendererMgr> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IWorldRendererMgr, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IWorldRendererMgr, 0>* , CTier0AppSystem<IWorldRendererMgr, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IWorldRendererMgr, 0>* , const CTier0AppSystem<IWorldRendererMgr, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IWorldRendererMgr, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IWorldRendererMgr, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IWorldRendererMgr, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IWorldRendererMgr, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IWorldRendererMgr, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IWorldRendererMgr, 0>* );
};

// <0158B1B1> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<INetRuntime, 0> : public CBaseAppSystem<INetRuntime> {
public:
	/* class CBaseAppSystem<INetRuntime> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<INetRuntime, 0>* , CTier0AppSystem<INetRuntime, 0>& );
	void CTier0AppSystem(CTier0AppSystem<INetRuntime, 0>* , const CTier0AppSystem<INetRuntime, 0>& );
	void CTier0AppSystem(CTier0AppSystem<INetRuntime, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<INetRuntime, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<INetRuntime, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<INetRuntime, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<INetRuntime, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<INetRuntime, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<INetRuntime, 0>* );
};

// <01E7740E> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IVRSystem, 0> : public CBaseAppSystem<IVRSystem> {
public:
	/* class CBaseAppSystem<IVRSystem> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IVRSystem, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IVRSystem, 0>* , CTier0AppSystem<IVRSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IVRSystem, 0>* , const CTier0AppSystem<IVRSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IVRSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IVRSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IVRSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IVRSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IVRSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IVRSystem, 0>* );
};

// <01FE4E31> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IVideoSystem, 0> : public CBaseAppSystem<IVideoSystem> {
public:
	/* class CBaseAppSystem<IVideoSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IVideoSystem, 0>* , CTier0AppSystem<IVideoSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IVideoSystem, 0>* , const CTier0AppSystem<IVideoSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IVideoSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IVideoSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IVideoSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IVideoSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IVideoSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IVideoSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IVideoSystem, 0>* );
};

// <023430FA> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IResourceSystem, 0> : public CBaseAppSystem<IResourceSystem> {
public:
	/* class CBaseAppSystem<IResourceSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IResourceSystem, 0>* , CTier0AppSystem<IResourceSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IResourceSystem, 0>* , const CTier0AppSystem<IResourceSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IResourceSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IResourceSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IResourceSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IResourceSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IResourceSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IResourceSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IResourceSystem, 0>* );
};

// <0260B7DE> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ISoundSystem, 0> : public CBaseAppSystem<ISoundSystem> {
public:
	/* class CBaseAppSystem<ISoundSystem> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<ISoundSystem, 0>* );
	void CTier0AppSystem(CTier0AppSystem<ISoundSystem, 0>* , CTier0AppSystem<ISoundSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISoundSystem, 0>* , const CTier0AppSystem<ISoundSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISoundSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ISoundSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ISoundSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ISoundSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ISoundSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ISoundSystem, 0>* );
};

// <02873059> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IAppSystem, 0> : public CBaseAppSystem<IAppSystem> {
public:
	/* class CBaseAppSystem<IAppSystem> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IAppSystem, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IAppSystem, 0>* , CTier0AppSystem<IAppSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IAppSystem, 0>* , const CTier0AppSystem<IAppSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IAppSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IAppSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IAppSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IAppSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IAppSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IAppSystem, 0>* );
};

// <02E0ADC1> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ISceneSystem, 0> : public CBaseAppSystem<ISceneSystem> {
public:
	/* class CBaseAppSystem<ISceneSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<ISceneSystem, 0>* , CTier0AppSystem<ISceneSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISceneSystem, 0>* , const CTier0AppSystem<ISceneSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISceneSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<ISceneSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ISceneSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ISceneSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ISceneSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ISceneSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ISceneSystem, 0>* );
};

// <03ADEA93> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ISceneUtils, 0> : public CBaseAppSystem<ISceneUtils> {
public:
	/* class CBaseAppSystem<ISceneUtils> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<ISceneUtils, 0>* );
	void CTier0AppSystem(CTier0AppSystem<ISceneUtils, 0>* , CTier0AppSystem<ISceneUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISceneUtils, 0>* , const CTier0AppSystem<ISceneUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISceneUtils, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ISceneUtils, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ISceneUtils, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ISceneUtils, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ISceneUtils, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ISceneUtils, 0>* );
};

// <00C113D7> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IAnimationSystem, 0> : public CBaseAppSystem<IAnimationSystem> {
public:
	/* class CBaseAppSystem<IAnimationSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IAnimationSystem, 0>* , CTier0AppSystem<IAnimationSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IAnimationSystem, 0>* , const CTier0AppSystem<IAnimationSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IAnimationSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IAnimationSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IAnimationSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IAnimationSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IAnimationSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IAnimationSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IAnimationSystem, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<IAnimationSystem, 0> *, class CTier0AppSystem<IAnimationSystem, 0> &); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IAnimationSystem, 0> *, const class CTier0AppSystem<IAnimationSystem, 0>  &); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EEC4Ev */
	void ~CTier0AppSystem(class CTier0AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EED4Ev */
	virtual bool Connect(class CTier0AppSystem<IAnimationSystem, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI16IAnimationSystemLx0EE7GetTierEv */
};

// <001E232B> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IRenderDeviceMgr, 0> : public CBaseAppSystem<IRenderDeviceMgr> {
public:
	/* class CBaseAppSystem<IRenderDeviceMgr> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IRenderDeviceMgr, 0>* , CTier0AppSystem<IRenderDeviceMgr, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IRenderDeviceMgr, 0>* , const CTier0AppSystem<IRenderDeviceMgr, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IRenderDeviceMgr, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IRenderDeviceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IRenderDeviceMgr, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IRenderDeviceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IRenderDeviceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IRenderDeviceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IRenderDeviceMgr, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<IRenderDeviceMgr, 0> *, class CTier0AppSystem<IRenderDeviceMgr, 0> &); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IRenderDeviceMgr, 0> *, const class CTier0AppSystem<IRenderDeviceMgr, 0>  &); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EEC4Ev */
	void ~CTier0AppSystem(class CTier0AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EED4Ev */
	virtual bool Connect(class CTier0AppSystem<IRenderDeviceMgr, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier0AppSystemI16IRenderDeviceMgrLx0EE7GetTierEv */
};

// <00263CE7> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IRenderUtils, 0> : public CBaseAppSystem<IRenderUtils> {
public:
	/* class CBaseAppSystem<IRenderUtils> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IRenderUtils, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IRenderUtils, 0>* , CTier0AppSystem<IRenderUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IRenderUtils, 0>* , const CTier0AppSystem<IRenderUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IRenderUtils, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IRenderUtils, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IRenderUtils, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IRenderUtils, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IRenderUtils, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IRenderUtils, 0>* );
};

// <000C8272> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ICvar, 0> : public CBaseAppSystem<ICvar> {
public:
	/* class CBaseAppSystem<ICvar> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<ICvar, 0>* );
	void CTier0AppSystem(CTier0AppSystem<ICvar, 0>* , CTier0AppSystem<ICvar, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ICvar, 0>* , const CTier0AppSystem<ICvar, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ICvar, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ICvar, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ICvar, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ICvar, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ICvar, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ICvar, 0>* );
	void ~CTier0AppSystem(class CTier0AppSystem<ICvar, 0> *); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EED4Ev */
	void CTier0AppSystem(class CTier0AppSystem<ICvar, 0> *, class CTier0AppSystem<ICvar, 0> &); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<ICvar, 0> *, const class CTier0AppSystem<ICvar, 0>  &); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<ICvar, 0> *); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EEC4Ev */
	virtual bool Connect(class CTier0AppSystem<ICvar, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<ICvar, 0> *); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<ICvar, 0> *); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<ICvar, 0> *); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<ICvar, 0> *); /* linkage=_ZN15CTier0AppSystemI5ICvarLx0EE7GetTierEv */
};

// <001255B6> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IEventSystem, 0> : public CBaseAppSystem<IEventSystem> {
public:
	/* class CBaseAppSystem<IEventSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IEventSystem, 0>* , CTier0AppSystem<IEventSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IEventSystem, 0>* , const CTier0AppSystem<IEventSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IEventSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IEventSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IEventSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IEventSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IEventSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IEventSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IEventSystem, 0>* );
};

// <003D658E> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IProcessUtils, 0> : public CBaseAppSystem<IProcessUtils> {
public:
	/* class CBaseAppSystem<IProcessUtils> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IProcessUtils, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IProcessUtils, 0>* , CTier0AppSystem<IProcessUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IProcessUtils, 0>* , const CTier0AppSystem<IProcessUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IProcessUtils, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IProcessUtils, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IProcessUtils, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IProcessUtils, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IProcessUtils, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IProcessUtils, 0>* );
};

// <005A07F8> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IUtlStringTokenSystem, 0> : public CBaseAppSystem<IUtlStringTokenSystem> {
public:
	/* class CBaseAppSystem<IUtlStringTokenSystem> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IUtlStringTokenSystem, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IUtlStringTokenSystem, 0>* , CTier0AppSystem<IUtlStringTokenSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IUtlStringTokenSystem, 0>* , const CTier0AppSystem<IUtlStringTokenSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IUtlStringTokenSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IUtlStringTokenSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IUtlStringTokenSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IUtlStringTokenSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IUtlStringTokenSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IUtlStringTokenSystem, 0>* );
};

// <00082D4E> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ISchemaSystem, 0> : public CBaseAppSystem<ISchemaSystem> {
public:
	/* class CBaseAppSystem<ISchemaSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<ISchemaSystem, 0>* , CTier0AppSystem<ISchemaSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISchemaSystem, 0>* , const CTier0AppSystem<ISchemaSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ISchemaSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<ISchemaSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ISchemaSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ISchemaSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ISchemaSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ISchemaSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ISchemaSystem, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<ISchemaSystem, 0> *, class CTier0AppSystem<ISchemaSystem, 0> &); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<ISchemaSystem, 0> *, const class CTier0AppSystem<ISchemaSystem, 0>  &); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EEC4Ev */
	void ~CTier0AppSystem(class CTier0AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EED4Ev */
	virtual bool Connect(class CTier0AppSystem<ISchemaSystem, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI13ISchemaSystemLx0EE7GetTierEv */
};

// <0015A2D9> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IMeshSystem, 0> : public CBaseAppSystem<IMeshSystem> {
public:
	/* class CBaseAppSystem<IMeshSystem> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IMeshSystem, 0>* , CTier0AppSystem<IMeshSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMeshSystem, 0>* , const CTier0AppSystem<IMeshSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMeshSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IMeshSystem, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IMeshSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IMeshSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IMeshSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IMeshSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IMeshSystem, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<IMeshSystem, 0> *, class CTier0AppSystem<IMeshSystem, 0> &); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IMeshSystem, 0> *, const class CTier0AppSystem<IMeshSystem, 0>  &); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EEC4Ev */
	void ~CTier0AppSystem(class CTier0AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EED4Ev */
	virtual bool Connect(class CTier0AppSystem<IMeshSystem, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier0AppSystemI11IMeshSystemLx0EE7GetTierEv */
};

// <00215477> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IMeshUtils, 0> : public CBaseAppSystem<IMeshUtils> {
public:
	/* class CBaseAppSystem<IMeshUtils> <ancestor>; */ /* 0 8 */
	void ~CTier0AppSystem(CTier0AppSystem<IMeshUtils, 0>* );
	void CTier0AppSystem(CTier0AppSystem<IMeshUtils, 0>* , CTier0AppSystem<IMeshUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMeshUtils, 0>* , const CTier0AppSystem<IMeshUtils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMeshUtils, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IMeshUtils, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IMeshUtils, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IMeshUtils, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IMeshUtils, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IMeshUtils, 0>* );
};

// <00087B92> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IMaterialSystem2, 0> : public CBaseAppSystem<IMaterialSystem2> {
public:
	/* class CBaseAppSystem<IMaterialSystem2> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IMaterialSystem2, 0>* , CTier0AppSystem<IMaterialSystem2, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMaterialSystem2, 0>* , const CTier0AppSystem<IMaterialSystem2, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMaterialSystem2, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IMaterialSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IMaterialSystem2, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IMaterialSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IMaterialSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IMaterialSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IMaterialSystem2, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<IMaterialSystem2, 0> *, class CTier0AppSystem<IMaterialSystem2, 0> &); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IMaterialSystem2, 0> *, const class CTier0AppSystem<IMaterialSystem2, 0>  &); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EEC4Ev */
	void ~CTier0AppSystem(class CTier0AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EED4Ev */
	virtual bool Connect(class CTier0AppSystem<IMaterialSystem2, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI16IMaterialSystem2Lx0EE7GetTierEv */
};

// <0042B647> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IMaterialSystem2Utils, 0> : public CBaseAppSystem<IMaterialSystem2Utils> {
public:
	/* class CBaseAppSystem<IMaterialSystem2Utils> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IMaterialSystem2Utils, 0>* , CTier0AppSystem<IMaterialSystem2Utils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMaterialSystem2Utils, 0>* , const CTier0AppSystem<IMaterialSystem2Utils, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IMaterialSystem2Utils, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IMaterialSystem2Utils, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IMaterialSystem2Utils, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IMaterialSystem2Utils, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IMaterialSystem2Utils, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IMaterialSystem2Utils, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IMaterialSystem2Utils, 0>* );
};

// <004EBADF> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IFontManager, 0> : public CBaseAppSystem<IFontManager> {
public:
	/* class CBaseAppSystem<IFontManager> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IFontManager, 0>* , CTier0AppSystem<IFontManager, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IFontManager, 0>* , const CTier0AppSystem<IFontManager, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IFontManager, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IFontManager, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IFontManager, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IFontManager, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IFontManager, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IFontManager, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IFontManager, 0>* );
};

// <005EABE4> ../public/appframework/iappsystem.h:171
// member functions: 9
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ITextLayout, 0> : public CBaseAppSystem<ITextLayout> {
public:
	/* class CBaseAppSystem<ITextLayout> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<ITextLayout, 0>* , CTier0AppSystem<ITextLayout, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ITextLayout, 0>* , const CTier0AppSystem<ITextLayout, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ITextLayout, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<ITextLayout, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ITextLayout, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ITextLayout, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ITextLayout, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ITextLayout, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ITextLayout, 0>* );
};

// <00040D09> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<ILocalize, 0> : public CBaseAppSystem<ILocalize> {
public:
	/* class CBaseAppSystem<ILocalize> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<ILocalize, 0>* , CTier0AppSystem<ILocalize, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ILocalize, 0>* , const CTier0AppSystem<ILocalize, 0>& );
	void CTier0AppSystem(CTier0AppSystem<ILocalize, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<ILocalize, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<ILocalize, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<ILocalize, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<ILocalize, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<ILocalize, 0>* );
	virtual void ~CTier0AppSystem(CTier0AppSystem<ILocalize, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<ILocalize, 0> *, class CTier0AppSystem<ILocalize, 0> &); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<ILocalize, 0> *, const class CTier0AppSystem<ILocalize, 0>  &); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EEC4Ev */
	virtual bool Connect(class CTier0AppSystem<ILocalize, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EE7GetTierEv */
	virtual void ~CTier0AppSystem(class CTier0AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier0AppSystemI9ILocalizeLx0EED4Ev */
};

// <0003C326> ../public/appframework/iappsystem.h:171
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CTier0AppSystem<IAsyncFileSystem2, 0> : public CBaseAppSystem<IAsyncFileSystem2> {
public:
	/* class CBaseAppSystem<IAsyncFileSystem2> <ancestor>; */ /* 0 8 */
	void CTier0AppSystem(CTier0AppSystem<IAsyncFileSystem2, 0>* , CTier0AppSystem<IAsyncFileSystem2, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IAsyncFileSystem2, 0>* , const CTier0AppSystem<IAsyncFileSystem2, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IAsyncFileSystem2, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IAsyncFileSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IAsyncFileSystem2, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IAsyncFileSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IAsyncFileSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IAsyncFileSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IAsyncFileSystem2, 0>* );
	void CTier0AppSystem(class CTier0AppSystem<IAsyncFileSystem2, 0> *, class CTier0AppSystem<IAsyncFileSystem2, 0> &); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EEC4EOS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IAsyncFileSystem2, 0> *, const class CTier0AppSystem<IAsyncFileSystem2, 0>  &); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EEC4ERKS1_ */
	void CTier0AppSystem(class CTier0AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EEC4Ev */
	void ~CTier0AppSystem(class CTier0AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EED4Ev */
	virtual bool Connect(class CTier0AppSystem<IAsyncFileSystem2, 0> *, CreateInterfaceFn); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EE7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CTier0AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EE10DisconnectEv */
	virtual enum InitReturnVal_t Init(class CTier0AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EE4InitEv */
	virtual void Shutdown(class CTier0AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EE8ShutdownEv */
	virtual enum AppSystemTier_t GetTier(class CTier0AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier0AppSystemI17IAsyncFileSystem2Lx0EE7GetTierEv */
};

// <000AEA9F> ../public/appframework/iappsystem.h:171
// member functions: 11
// member variable: 1
// vtable entries: 5
// class size: 16
class CTier0AppSystem<IFileSystem, 0> : public CBaseAppSystem<IFileSystem> {
public:
	/* class CBaseAppSystem<IFileSystem> <ancestor>; */ /* 0 16 */
	void CTier0AppSystem(CTier0AppSystem<IFileSystem, 0>* , CTier0AppSystem<IFileSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IFileSystem, 0>* , const CTier0AppSystem<IFileSystem, 0>& );
	void CTier0AppSystem(CTier0AppSystem<IFileSystem, 0>* );
	void ~CTier0AppSystem(CTier0AppSystem<IFileSystem, 0>* );
	CTier0AppSystem<IFileSystem, 0>& operator=(CTier0AppSystem<IFileSystem, 0>* , CTier0AppSystem<IFileSystem, 0>& );
	CTier0AppSystem<IFileSystem, 0>& operator=(CTier0AppSystem<IFileSystem, 0>* , const CTier0AppSystem<IFileSystem, 0>& );
	/* ../public/appframework/iappsystem.h:176 */
	virtual bool Connect(CTier0AppSystem<IFileSystem, 0>* , CreateInterfaceFn);
	/* ../public/appframework/iappsystem.h:185 */
	virtual void Disconnect(CTier0AppSystem<IFileSystem, 0>* );
	/* ../public/appframework/iappsystem.h:191 */
	virtual InitReturnVal_t Init(CTier0AppSystem<IFileSystem, 0>* );
	/* ../public/appframework/iappsystem.h:204 */
	virtual void Shutdown(CTier0AppSystem<IFileSystem, 0>* );
	/* ../public/appframework/iappsystem.h:213 */
	virtual AppSystemTier_t GetTier(CTier0AppSystem<IFileSystem, 0>* );
};

// <04636958> ../public/appframework/iappsystem.h:176
void CTier0AppSystem<IApplication, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 37 */

// <03AE14FD> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ISceneUtils, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <032FE64A> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IApplication, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <02E12802> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ISceneSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <028748D2> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IAppSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <026121D0> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ISoundSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0234708A> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IResourceSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <01FE62C6> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IVideoSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <01E7DB53> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IVRSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0159195D> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<INetRuntime, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00F2891F> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IWorldRendererMgr, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <009DE04C> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IPhysicsSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <008AA3BB> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IInputSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <007403B4> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IToolService, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0066C4A5> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ISoundService, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0058EED9> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IRenderService, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <004A83CD> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IInputService, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0035AA71> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IEngineService, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0023059E> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IEngineServiceMgr, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00C18F76> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IAnimationSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00264CD7> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IRenderUtils, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <001E4928> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IRenderDeviceMgr, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <005A52B5> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IUtlStringTokenSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <003D7D2C> ../public/appframework/iappsystem.h:176
void CTier0AppSystem<IProcessUtils, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 37 */

// <000CDDE8> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ICvar, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <000CFD4C> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ISchemaSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00216CA1> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IMeshUtils, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0015F0D7> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IMeshSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <005EBE8A> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ITextLayout, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <004EDF40> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IFontManager, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0043AC16> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IMaterialSystem2Utils, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <000908C4> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IMaterialSystem2, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <00043E50> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<ILocalize, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0014016A> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IFileSystem, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <0003E239> ../public/appframework/iappsystem.h:176
inline void CTier0AppSystem<IAsyncFileSystem2, 0>::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <04636915> ../public/appframework/iappsystem.h:185
void CTier0AppSystem<IApplication, 0>::Disconnect()
{
} /* size: 9 */

// <03AE14E4> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<ISceneUtils, 0>::Disconnect()
{
} /* size: 0 */

// <032FE600> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IApplication, 0>::Disconnect()
{
} /* size: 0 */

// <02E127E9> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<ISceneSystem, 0>::Disconnect()
{
} /* size: 0 */

// <028748B9> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IAppSystem, 0>::Disconnect()
{
} /* size: 0 */

// <02612185> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<ISoundSystem, 0>::Disconnect()
{
} /* size: 0 */

// <02347071> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IResourceSystem, 0>::Disconnect()
{
} /* size: 0 */

// <01FE62AD> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IVideoSystem, 0>::Disconnect()
{
} /* size: 0 */

// <01E7DB3A> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IVRSystem, 0>::Disconnect()
{
} /* size: 0 */

// <01591944> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<INetRuntime, 0>::Disconnect()
{
} /* size: 0 */

// <00F288D4> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IWorldRendererMgr, 0>::Disconnect()
{
} /* size: 0 */

// <009DE033> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IPhysicsSystem, 0>::Disconnect()
{
} /* size: 0 */

// <008A679A> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IInputSystem, 0>::Disconnect()
{
} /* size: 0 */

// <0074039B> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IToolService, 0>::Disconnect()
{
} /* size: 0 */

// <0066C48C> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<ISoundService, 0>::Disconnect()
{
} /* size: 0 */

// <0058EEC0> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IRenderService, 0>::Disconnect()
{
} /* size: 0 */

// <004A83B4> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IInputService, 0>::Disconnect()
{
} /* size: 0 */

// <0035AA58> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IEngineService, 0>::Disconnect()
{
} /* size: 0 */

// <0022A390> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IEngineServiceMgr, 0>::Disconnect()
{
} /* size: 0 */

// <00264CBE> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IRenderUtils, 0>::Disconnect()
{
} /* size: 0 */

// <001E48DD> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IRenderDeviceMgr, 0>::Disconnect()
{
} /* size: 0 */

// <005A39C4> ../public/appframework/iappsystem.h:185
void CTier0AppSystem<IUtlStringTokenSystem, 0>::Disconnect()
{
} /* size: 9 */

// <00126C94> ../public/appframework/iappsystem.h:185
void CTier0AppSystem<IEventSystem, 0>::Disconnect()
{
} /* size: 9 */

// <00084018> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<ISchemaSystem, 0>::Disconnect()
{
} /* size: 0 */

// <00216C88> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IMeshUtils, 0>::Disconnect()
{
} /* size: 0 */

// <0015F0BE> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IMeshSystem, 0>::Disconnect()
{
} /* size: 0 */

// <004EDF27> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IFontManager, 0>::Disconnect()
{
} /* size: 0 */

// <0042CA88> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IMaterialSystem2Utils, 0>::Disconnect()
{
} /* size: 0 */

// <00090879> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IMaterialSystem2, 0>::Disconnect()
{
} /* size: 0 */

// <00043E37> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<ILocalize, 0>::Disconnect()
{
} /* size: 0 */

// <0014011F> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IFileSystem, 0>::Disconnect()
{
} /* size: 0 */

// <0003E220> ../public/appframework/iappsystem.h:185
inline void CTier0AppSystem<IAsyncFileSystem2, 0>::Disconnect()
{
} /* size: 0 */

// <04636878> ../public/appframework/iappsystem.h:191
// variable: 1
void CTier0AppSystem<IApplication, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 46, variables: 1 */

// <03AE6419> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ISceneUtils, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <02E99270> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ISceneSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <028768DC> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IAppSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0261220E> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ISoundSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <02353F34> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IResourceSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <01FE68EE> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IVideoSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <01E7DB15> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IVRSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <01594088> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<INetRuntime, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <00F2895D> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IWorldRendererMgr, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <009F07F7> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IPhysicsSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <008AA3E0> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IInputSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0074319C> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IToolService, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <006744F8> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ISoundService, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <00596553> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IRenderService, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <004B3C07> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IInputService, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0035AA33> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IEngineService, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <00230579> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IEngineServiceMgr, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <00C615E3> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IAnimationSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0026547F> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IRenderUtils, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <001E48B7> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IRenderDeviceMgr, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <005A3925> ../public/appframework/iappsystem.h:191
// variable: 1
void CTier0AppSystem<IUtlStringTokenSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 46, variables: 1 */

// <003DA804> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IProcessUtils, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <00126BF7> ../public/appframework/iappsystem.h:191
// variable: 1
void CTier0AppSystem<IEventSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 46, variables: 1 */

// <000CDDAA> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ICvar, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <000CFD27> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ISchemaSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <00216C63> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IMeshUtils, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0015F099> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IMeshSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <005ED19E> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ITextLayout, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <004F8871> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IFontManager, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0043ABF1> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IMaterialSystem2Utils, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0008BD5A> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IMaterialSystem2, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <0004991C> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<ILocalize, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <000C9428> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IFileSystem, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <00049EEE> ../public/appframework/iappsystem.h:191
// variable: 1
inline void CTier0AppSystem<IAsyncFileSystem2, 0>::Init()
{
	InitReturnVal_t nRetVal; // 193
} /* size: 0, variables: 1 */

// <04636835> ../public/appframework/iappsystem.h:204
void CTier0AppSystem<IApplication, 0>::Shutdown()
{
} /* size: 33 */

// <03AE62C5> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ISceneUtils, 0>::Shutdown()
{
} /* size: 0 */

// <02E98C66> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ISceneSystem, 0>::Shutdown()
{
} /* size: 0 */

// <028767AA> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IAppSystem, 0>::Shutdown()
{
} /* size: 0 */

// <026121F5> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ISoundSystem, 0>::Shutdown()
{
} /* size: 0 */

// <02353DC0> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IResourceSystem, 0>::Shutdown()
{
} /* size: 0 */

// <01FE68D5> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IVideoSystem, 0>::Shutdown()
{
} /* size: 0 */

// <01E7DAFC> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IVRSystem, 0>::Shutdown()
{
} /* size: 0 */

// <0159406F> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<INetRuntime, 0>::Shutdown()
{
} /* size: 0 */

// <00F28944> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IWorldRendererMgr, 0>::Shutdown()
{
} /* size: 0 */

// <009F07DE> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IPhysicsSystem, 0>::Shutdown()
{
} /* size: 0 */

// <008AA3A2> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IInputSystem, 0>::Shutdown()
{
} /* size: 0 */

// <00743183> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IToolService, 0>::Shutdown()
{
} /* size: 0 */

// <006743CD> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ISoundService, 0>::Shutdown()
{
} /* size: 0 */

// <0059653A> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IRenderService, 0>::Shutdown()
{
} /* size: 0 */

// <004B332A> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IInputService, 0>::Shutdown()
{
} /* size: 0 */

// <0035AA1A> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IEngineService, 0>::Shutdown()
{
} /* size: 0 */

// <002304D7> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IEngineServiceMgr, 0>::Shutdown()
{
} /* size: 0 */

// <00C615CA> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IAnimationSystem, 0>::Shutdown()
{
} /* size: 0 */

// <00265466> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IRenderUtils, 0>::Shutdown()
{
} /* size: 0 */

// <001E38C3> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IRenderDeviceMgr, 0>::Shutdown()
{
} /* size: 0 */

// <003DA6FF> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IProcessUtils, 0>::Shutdown()
{
} /* size: 0 */

// <00126BB4> ../public/appframework/iappsystem.h:204
void CTier0AppSystem<IEventSystem, 0>::Shutdown()
{
} /* size: 33 */

// <000CDD91> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ICvar, 0>::Shutdown()
{
} /* size: 0 */

// <000CFD0E> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ISchemaSystem, 0>::Shutdown()
{
} /* size: 0 */

// <00216C4A> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IMeshUtils, 0>::Shutdown()
{
} /* size: 0 */

// <0015F080> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IMeshSystem, 0>::Shutdown()
{
} /* size: 0 */

// <005ED185> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ITextLayout, 0>::Shutdown()
{
} /* size: 0 */

// <004F871F> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IFontManager, 0>::Shutdown()
{
} /* size: 0 */

// <0043A59B> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IMaterialSystem2Utils, 0>::Shutdown()
{
} /* size: 0 */

// <0009091C> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IMaterialSystem2, 0>::Shutdown()
{
} /* size: 0 */

// <00049903> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<ILocalize, 0>::Shutdown()
{
} /* size: 0 */

// <0003E207> ../public/appframework/iappsystem.h:204
inline void CTier0AppSystem<IAsyncFileSystem2, 0>::Shutdown()
{
} /* size: 0 */

// <046366D4> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IApplication, 0>::GetTier()
{
} /* size: 0 */

// <03AE1483> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ISceneUtils, 0>::GetTier()
{
} /* size: 0 */

// <02E12786> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ISceneSystem, 0>::GetTier()
{
} /* size: 0 */

// <02874858> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IAppSystem, 0>::GetTier()
{
} /* size: 0 */

// <0260F183> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ISoundSystem, 0>::GetTier()
{
} /* size: 0 */

// <0234700E> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IResourceSystem, 0>::GetTier()
{
} /* size: 0 */

// <01FE624C> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IVideoSystem, 0>::GetTier()
{
} /* size: 0 */

// <01E7DA9B> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IVRSystem, 0>::GetTier()
{
} /* size: 0 */

// <015918E3> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<INetRuntime, 0>::GetTier()
{
} /* size: 0 */

// <00F20FB0> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IWorldRendererMgr, 0>::GetTier()
{
} /* size: 0 */

// <009DDFD2> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IPhysicsSystem, 0>::GetTier()
{
} /* size: 0 */

// <008A6739> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IInputSystem, 0>::GetTier()
{
} /* size: 0 */

// <0074033A> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IToolService, 0>::GetTier()
{
} /* size: 0 */

// <0066C42B> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ISoundService, 0>::GetTier()
{
} /* size: 0 */

// <0058EE5F> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IRenderService, 0>::GetTier()
{
} /* size: 0 */

// <004A8353> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IInputService, 0>::GetTier()
{
} /* size: 0 */

// <0035A9B9> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IEngineService, 0>::GetTier()
{
} /* size: 0 */

// <0022A32F> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IEngineServiceMgr, 0>::GetTier()
{
} /* size: 0 */

// <00C18EFC> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IAnimationSystem, 0>::GetTier()
{
} /* size: 0 */

// <00264C5B> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IRenderUtils, 0>::GetTier()
{
} /* size: 0 */

// <005A38B3> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IUtlStringTokenSystem, 0>::GetTier()
{
} /* size: 7 */

// <003D7C1D> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IProcessUtils, 0>::GetTier()
{
} /* size: 7 */

// <00126B2A> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IEventSystem, 0>::GetTier()
{
} /* size: 7 */

// <000C9435> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ICvar, 0>::GetTier()
{
} /* size: 7 */

// <00083FB5> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ISchemaSystem, 0>::GetTier()
{
} /* size: 0 */

// <00216BE7> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IMeshUtils, 0>::GetTier()
{
} /* size: 0 */

// <0015F01F> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IMeshSystem, 0>::GetTier()
{
} /* size: 0 */

// <005EBE0E> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ITextLayout, 0>::GetTier()
{
} /* size: 0 */

// <004EDEC4> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IFontManager, 0>::GetTier()
{
} /* size: 0 */

// <0042CA25> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IMaterialSystem2Utils, 0>::GetTier()
{
} /* size: 0 */

// <0008BCF7> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IMaterialSystem2, 0>::GetTier()
{
} /* size: 0 */

// <00043DD4> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<ILocalize, 0>::GetTier()
{
} /* size: 0 */

// <000B3229> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IFileSystem, 0>::GetTier()
{
} /* size: 0 */

// <0003E1A6> ../public/appframework/iappsystem.h:213
void CTier0AppSystem<IAsyncFileSystem2, 0>::GetTier()
{
} /* size: 0 */

// <0464B07D> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IApplication, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0464B061> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IApplication, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0464B04A> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IApplication, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <0464B017> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IApplication, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <03AE863A> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ISceneUtils, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <03AE861E> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ISceneUtils, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <02EAF7B3> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ISceneSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <02EAF797> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ISceneSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <028774D0> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IAppSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <028774B4> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IAppSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <02613755> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ISoundSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <02613739> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ISoundSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <023597F6> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IResourceSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <023597DA> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IResourceSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <01FE6A46> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IVideoSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <01FE6A2A> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IVideoSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <01E81756> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IVRSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <01E8173A> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IVRSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <01595364> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<INetRuntime, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <01595348> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<INetRuntime, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00F2B67B> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IWorldRendererMgr, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00F2B65F> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IWorldRendererMgr, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00A07EBF> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IPhysicsSystem, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <00A07E8C> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IPhysicsSystem, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <009F4C45> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IPhysicsSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <009F4C29> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IPhysicsSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <008ABE09> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IInputSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <008ABDED> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IInputSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00744B82> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IToolService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <00744B4F> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IToolService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <0074323D> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IToolService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00743221> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IToolService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <006766DC> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ISoundService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <006766A9> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ISoundService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <00674646> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ISoundService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0067462A> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ISoundService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00597E87> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IRenderService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <00597E54> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IRenderService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <005965F4> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IRenderService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <005965D8> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IRenderService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <004B67B5> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IInputService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <004B6782> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IInputService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <004B3D70> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IInputService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <004B3D54> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IInputService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00361253> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IEngineService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <00361220> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IEngineService, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <0035FCE6> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IEngineService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0035FCCA> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IEngineService, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0023293B> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IEngineServiceMgr, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0023291F> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IEngineServiceMgr, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00C77F77> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IAnimationSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <00C77F5B> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IAnimationSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <001E52DC> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IRenderDeviceMgr, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <001E52BF> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IRenderDeviceMgr, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <000D9B6F> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ISchemaSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <000D9B53> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ISchemaSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0021DC7E> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IMeshUtils, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0021DC62> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IMeshUtils, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0016DD81> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IMeshSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0016DD65> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IMeshSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <005ED4EA> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ITextLayout, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <005ED4CE> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ITextLayout, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <004F9F39> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IFontManager, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <004F9F1D> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IFontManager, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0044272F> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IMaterialSystem2Utils, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <000934BC> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IMaterialSystem2, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <000934A0> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IMaterialSystem2, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0006D706> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ILocalize, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <0006D6D3> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ILocalize, 0>::~CTier1AppSystem()
{
} /* size: 0 */

// <0004BC76> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<ILocalize, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0004BC5A> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<ILocalize, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <000CDBDE> ../public/appframework/iappsystem.h:225
void CTier1AppSystem<IFileSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <000CDBC2> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IFileSystem, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0004C6A0> ../public/appframework/iappsystem.h:225
inline void CTier1AppSystem<IAsyncFileSystem2, 0>::CTier1AppSystem()
{
} /* size: 0 */

// <0012530A> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IApplication, 0> : public CTier0AppSystem<IApplication, 0> {
public:
	/* class CTier0AppSystem<IApplication, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IApplication, 0>* , CTier1AppSystem<IApplication, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IApplication, 0>* , const CTier1AppSystem<IApplication, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IApplication, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IApplication, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<IApplication, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<IApplication, 0> *, class CTier1AppSystem<IApplication, 0> &); /* linkage=_ZN15CTier1AppSystemI12IApplicationLx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IApplication, 0> *, const class CTier1AppSystem<IApplication, 0>  &); /* linkage=_ZN15CTier1AppSystemI12IApplicationLx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier1AppSystemI12IApplicationLx0EEC4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier1AppSystemI12IApplicationLx0EE7GetTierEv */
	virtual void ~CTier1AppSystem(class CTier1AppSystem<IApplication, 0> *); /* linkage=_ZN15CTier1AppSystemI12IApplicationLx0EED4Ev */
};

// <00224E9A> ../public/appframework/iappsystem.h:225
// member functions: 7
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IEngineServiceMgr, 0> : public CTier0AppSystem<IEngineServiceMgr, 0> {
public:
	/* class CTier0AppSystem<IEngineServiceMgr, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<IEngineServiceMgr, 0>* );
	void CTier1AppSystem(CTier1AppSystem<IEngineServiceMgr, 0>* , CTier1AppSystem<IEngineServiceMgr, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IEngineServiceMgr, 0>* , const CTier1AppSystem<IEngineServiceMgr, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IEngineServiceMgr, 0>* );
	CTier1AppSystem<IEngineServiceMgr, 0>& operator=(CTier1AppSystem<IEngineServiceMgr, 0>* , CTier1AppSystem<IEngineServiceMgr, 0>& );
	CTier1AppSystem<IEngineServiceMgr, 0>& operator=(CTier1AppSystem<IEngineServiceMgr, 0>* , const CTier1AppSystem<IEngineServiceMgr, 0>& );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IEngineServiceMgr, 0>* );
};

// <00353FF6> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IEngineService, 0> : public CTier0AppSystem<IEngineService, 0> {
public:
	/* class CTier0AppSystem<IEngineService, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IEngineService, 0>* , CTier1AppSystem<IEngineService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IEngineService, 0>* , const CTier1AppSystem<IEngineService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IEngineService, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IEngineService, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<IEngineService, 0>* );
};

// <004A3B97> ../public/appframework/iappsystem.h:225
// member functions: 7
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IInputService, 0> : public CTier0AppSystem<IInputService, 0> {
public:
	/* class CTier0AppSystem<IInputService, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IInputService, 0>* , CTier1AppSystem<IInputService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IInputService, 0>* , const CTier1AppSystem<IInputService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IInputService, 0>* );
	CTier1AppSystem<IInputService, 0>& operator=(CTier1AppSystem<IInputService, 0>* , CTier1AppSystem<IInputService, 0>& );
	CTier1AppSystem<IInputService, 0>& operator=(CTier1AppSystem<IInputService, 0>* , const CTier1AppSystem<IInputService, 0>& );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IInputService, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<IInputService, 0>* );
};

// <0058ABCE> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IRenderService, 0> : public CTier0AppSystem<IRenderService, 0> {
public:
	/* class CTier0AppSystem<IRenderService, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IRenderService, 0>* , CTier1AppSystem<IRenderService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IRenderService, 0>* , const CTier1AppSystem<IRenderService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IRenderService, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IRenderService, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<IRenderService, 0>* );
};

// <00668199> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<ISoundService, 0> : public CTier0AppSystem<ISoundService, 0> {
public:
	/* class CTier0AppSystem<ISoundService, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<ISoundService, 0>* , CTier1AppSystem<ISoundService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISoundService, 0>* , const CTier1AppSystem<ISoundService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISoundService, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<ISoundService, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<ISoundService, 0>* );
};

// <0073C0E8> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IToolService, 0> : public CTier0AppSystem<IToolService, 0> {
public:
	/* class CTier0AppSystem<IToolService, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IToolService, 0>* , CTier1AppSystem<IToolService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IToolService, 0>* , const CTier1AppSystem<IToolService, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IToolService, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IToolService, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<IToolService, 0>* );
};

// <008A1F5E> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IInputSystem, 0> : public CTier0AppSystem<IInputSystem, 0> {
public:
	/* class CTier0AppSystem<IInputSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IInputSystem, 0>* , CTier1AppSystem<IInputSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IInputSystem, 0>* , const CTier1AppSystem<IInputSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IInputSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IInputSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IInputSystem, 0>* );
};

// <009D719B> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IPhysicsSystem, 0> : public CTier0AppSystem<IPhysicsSystem, 0> {
public:
	/* class CTier0AppSystem<IPhysicsSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IPhysicsSystem, 0>* , CTier1AppSystem<IPhysicsSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IPhysicsSystem, 0>* , const CTier1AppSystem<IPhysicsSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IPhysicsSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IPhysicsSystem, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<IPhysicsSystem, 0>* );
};

// <00F19932> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IWorldRendererMgr, 0> : public CTier0AppSystem<IWorldRendererMgr, 0> {
public:
	/* class CTier0AppSystem<IWorldRendererMgr, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<IWorldRendererMgr, 0>* );
	void CTier1AppSystem(CTier1AppSystem<IWorldRendererMgr, 0>* , CTier1AppSystem<IWorldRendererMgr, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IWorldRendererMgr, 0>* , const CTier1AppSystem<IWorldRendererMgr, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IWorldRendererMgr, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IWorldRendererMgr, 0>* );
};

// <0158B0C8> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<INetRuntime, 0> : public CTier0AppSystem<INetRuntime, 0> {
public:
	/* class CTier0AppSystem<INetRuntime, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<INetRuntime, 0>* , CTier1AppSystem<INetRuntime, 0>& );
	void CTier1AppSystem(CTier1AppSystem<INetRuntime, 0>* , const CTier1AppSystem<INetRuntime, 0>& );
	void CTier1AppSystem(CTier1AppSystem<INetRuntime, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<INetRuntime, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<INetRuntime, 0>* );
};

// <01E77325> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IVRSystem, 0> : public CTier0AppSystem<IVRSystem, 0> {
public:
	/* class CTier0AppSystem<IVRSystem, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<IVRSystem, 0>* );
	void CTier1AppSystem(CTier1AppSystem<IVRSystem, 0>* , CTier1AppSystem<IVRSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IVRSystem, 0>* , const CTier1AppSystem<IVRSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IVRSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IVRSystem, 0>* );
};

// <01FE4D48> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IVideoSystem, 0> : public CTier0AppSystem<IVideoSystem, 0> {
public:
	/* class CTier0AppSystem<IVideoSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IVideoSystem, 0>* , CTier1AppSystem<IVideoSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IVideoSystem, 0>* , const CTier1AppSystem<IVideoSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IVideoSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IVideoSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IVideoSystem, 0>* );
};

// <02343011> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IResourceSystem, 0> : public CTier0AppSystem<IResourceSystem, 0> {
public:
	/* class CTier0AppSystem<IResourceSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IResourceSystem, 0>* , CTier1AppSystem<IResourceSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IResourceSystem, 0>* , const CTier1AppSystem<IResourceSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IResourceSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IResourceSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IResourceSystem, 0>* );
};

// <0260B6F5> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<ISoundSystem, 0> : public CTier0AppSystem<ISoundSystem, 0> {
public:
	/* class CTier0AppSystem<ISoundSystem, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<ISoundSystem, 0>* );
	void CTier1AppSystem(CTier1AppSystem<ISoundSystem, 0>* , CTier1AppSystem<ISoundSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISoundSystem, 0>* , const CTier1AppSystem<ISoundSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISoundSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<ISoundSystem, 0>* );
};

// <02872F70> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IAppSystem, 0> : public CTier0AppSystem<IAppSystem, 0> {
public:
	/* class CTier0AppSystem<IAppSystem, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<IAppSystem, 0>* );
	void CTier1AppSystem(CTier1AppSystem<IAppSystem, 0>* , CTier1AppSystem<IAppSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IAppSystem, 0>* , const CTier1AppSystem<IAppSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IAppSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IAppSystem, 0>* );
};

// <02E0ACD7> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<ISceneSystem, 0> : public CTier0AppSystem<ISceneSystem, 0> {
public:
	/* class CTier0AppSystem<ISceneSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<ISceneSystem, 0>* , CTier1AppSystem<ISceneSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISceneSystem, 0>* , const CTier1AppSystem<ISceneSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISceneSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<ISceneSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<ISceneSystem, 0>* );
};

// <03ADE9AA> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<ISceneUtils, 0> : public CTier0AppSystem<ISceneUtils, 0> {
public:
	/* class CTier0AppSystem<ISceneUtils, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<ISceneUtils, 0>* );
	void CTier1AppSystem(CTier1AppSystem<ISceneUtils, 0>* , CTier1AppSystem<ISceneUtils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISceneUtils, 0>* , const CTier1AppSystem<ISceneUtils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISceneUtils, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<ISceneUtils, 0>* );
};

// <00C112ED> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IAnimationSystem, 0> : public CTier0AppSystem<IAnimationSystem, 0> {
public:
	/* class CTier0AppSystem<IAnimationSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IAnimationSystem, 0>* , CTier1AppSystem<IAnimationSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IAnimationSystem, 0>* , const CTier1AppSystem<IAnimationSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IAnimationSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IAnimationSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IAnimationSystem, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<IAnimationSystem, 0> *, class CTier1AppSystem<IAnimationSystem, 0> &); /* linkage=_ZN15CTier1AppSystemI16IAnimationSystemLx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IAnimationSystem, 0> *, const class CTier1AppSystem<IAnimationSystem, 0>  &); /* linkage=_ZN15CTier1AppSystemI16IAnimationSystemLx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI16IAnimationSystemLx0EEC4Ev */
	void ~CTier1AppSystem(class CTier1AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI16IAnimationSystemLx0EED4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<IAnimationSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI16IAnimationSystemLx0EE7GetTierEv */
};

// <001E2242> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IRenderDeviceMgr, 0> : public CTier0AppSystem<IRenderDeviceMgr, 0> {
public:
	/* class CTier0AppSystem<IRenderDeviceMgr, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IRenderDeviceMgr, 0>* , CTier1AppSystem<IRenderDeviceMgr, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IRenderDeviceMgr, 0>* , const CTier1AppSystem<IRenderDeviceMgr, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IRenderDeviceMgr, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IRenderDeviceMgr, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IRenderDeviceMgr, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<IRenderDeviceMgr, 0> *, class CTier1AppSystem<IRenderDeviceMgr, 0> &); /* linkage=_ZN15CTier1AppSystemI16IRenderDeviceMgrLx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IRenderDeviceMgr, 0> *, const class CTier1AppSystem<IRenderDeviceMgr, 0>  &); /* linkage=_ZN15CTier1AppSystemI16IRenderDeviceMgrLx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier1AppSystemI16IRenderDeviceMgrLx0EEC4Ev */
	void ~CTier1AppSystem(class CTier1AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier1AppSystemI16IRenderDeviceMgrLx0EED4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<IRenderDeviceMgr, 0> *); /* linkage=_ZN15CTier1AppSystemI16IRenderDeviceMgrLx0EE7GetTierEv */
};

// <00263BFE> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IRenderUtils, 0> : public CTier0AppSystem<IRenderUtils, 0> {
public:
	/* class CTier0AppSystem<IRenderUtils, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<IRenderUtils, 0>* );
	void CTier1AppSystem(CTier1AppSystem<IRenderUtils, 0>* , CTier1AppSystem<IRenderUtils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IRenderUtils, 0>* , const CTier1AppSystem<IRenderUtils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IRenderUtils, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IRenderUtils, 0>* );
};

// <00082C64> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<ISchemaSystem, 0> : public CTier0AppSystem<ISchemaSystem, 0> {
public:
	/* class CTier0AppSystem<ISchemaSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<ISchemaSystem, 0>* , CTier1AppSystem<ISchemaSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISchemaSystem, 0>* , const CTier1AppSystem<ISchemaSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ISchemaSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<ISchemaSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<ISchemaSystem, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<ISchemaSystem, 0> *, class CTier1AppSystem<ISchemaSystem, 0> &); /* linkage=_ZN15CTier1AppSystemI13ISchemaSystemLx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<ISchemaSystem, 0> *, const class CTier1AppSystem<ISchemaSystem, 0>  &); /* linkage=_ZN15CTier1AppSystemI13ISchemaSystemLx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI13ISchemaSystemLx0EEC4Ev */
	void ~CTier1AppSystem(class CTier1AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI13ISchemaSystemLx0EED4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<ISchemaSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI13ISchemaSystemLx0EE7GetTierEv */
};

// <0015A1F0> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IMeshSystem, 0> : public CTier0AppSystem<IMeshSystem, 0> {
public:
	/* class CTier0AppSystem<IMeshSystem, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IMeshSystem, 0>* , CTier1AppSystem<IMeshSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMeshSystem, 0>* , const CTier1AppSystem<IMeshSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMeshSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IMeshSystem, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IMeshSystem, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<IMeshSystem, 0> *, class CTier1AppSystem<IMeshSystem, 0> &); /* linkage=_ZN15CTier1AppSystemI11IMeshSystemLx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IMeshSystem, 0> *, const class CTier1AppSystem<IMeshSystem, 0>  &); /* linkage=_ZN15CTier1AppSystemI11IMeshSystemLx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI11IMeshSystemLx0EEC4Ev */
	void ~CTier1AppSystem(class CTier1AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI11IMeshSystemLx0EED4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<IMeshSystem, 0> *); /* linkage=_ZN15CTier1AppSystemI11IMeshSystemLx0EE7GetTierEv */
};

// <0021538E> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IMeshUtils, 0> : public CTier0AppSystem<IMeshUtils, 0> {
public:
	/* class CTier0AppSystem<IMeshUtils, 0> <ancestor>; */ /* 0 8 */
	void ~CTier1AppSystem(CTier1AppSystem<IMeshUtils, 0>* );
	void CTier1AppSystem(CTier1AppSystem<IMeshUtils, 0>* , CTier1AppSystem<IMeshUtils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMeshUtils, 0>* , const CTier1AppSystem<IMeshUtils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMeshUtils, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IMeshUtils, 0>* );
};

// <00087AA9> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IMaterialSystem2, 0> : public CTier0AppSystem<IMaterialSystem2, 0> {
public:
	/* class CTier0AppSystem<IMaterialSystem2, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IMaterialSystem2, 0>* , CTier1AppSystem<IMaterialSystem2, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMaterialSystem2, 0>* , const CTier1AppSystem<IMaterialSystem2, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMaterialSystem2, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IMaterialSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IMaterialSystem2, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<IMaterialSystem2, 0> *, class CTier1AppSystem<IMaterialSystem2, 0> &); /* linkage=_ZN15CTier1AppSystemI16IMaterialSystem2Lx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IMaterialSystem2, 0> *, const class CTier1AppSystem<IMaterialSystem2, 0>  &); /* linkage=_ZN15CTier1AppSystemI16IMaterialSystem2Lx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier1AppSystemI16IMaterialSystem2Lx0EEC4Ev */
	void ~CTier1AppSystem(class CTier1AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier1AppSystemI16IMaterialSystem2Lx0EED4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<IMaterialSystem2, 0> *); /* linkage=_ZN15CTier1AppSystemI16IMaterialSystem2Lx0EE7GetTierEv */
};

// <0042B55D> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IMaterialSystem2Utils, 0> : public CTier0AppSystem<IMaterialSystem2Utils, 0> {
public:
	/* class CTier0AppSystem<IMaterialSystem2Utils, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IMaterialSystem2Utils, 0>* , CTier1AppSystem<IMaterialSystem2Utils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMaterialSystem2Utils, 0>* , const CTier1AppSystem<IMaterialSystem2Utils, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IMaterialSystem2Utils, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IMaterialSystem2Utils, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IMaterialSystem2Utils, 0>* );
};

// <004EB9F5> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IFontManager, 0> : public CTier0AppSystem<IFontManager, 0> {
public:
	/* class CTier0AppSystem<IFontManager, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IFontManager, 0>* , CTier1AppSystem<IFontManager, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IFontManager, 0>* , const CTier1AppSystem<IFontManager, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IFontManager, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IFontManager, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IFontManager, 0>* );
};

// <005EAAFB> ../public/appframework/iappsystem.h:225
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<ITextLayout, 0> : public CTier0AppSystem<ITextLayout, 0> {
public:
	/* class CTier0AppSystem<ITextLayout, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<ITextLayout, 0>* , CTier1AppSystem<ITextLayout, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ITextLayout, 0>* , const CTier1AppSystem<ITextLayout, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ITextLayout, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<ITextLayout, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<ITextLayout, 0>* );
};

// <00040C19> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<ILocalize, 0> : public CTier0AppSystem<ILocalize, 0> {
public:
	/* class CTier0AppSystem<ILocalize, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<ILocalize, 0>* , CTier1AppSystem<ILocalize, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ILocalize, 0>* , const CTier1AppSystem<ILocalize, 0>& );
	void CTier1AppSystem(CTier1AppSystem<ILocalize, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<ILocalize, 0>* );
	virtual void ~CTier1AppSystem(CTier1AppSystem<ILocalize, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<ILocalize, 0> *, class CTier1AppSystem<ILocalize, 0> &); /* linkage=_ZN15CTier1AppSystemI9ILocalizeLx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<ILocalize, 0> *, const class CTier1AppSystem<ILocalize, 0>  &); /* linkage=_ZN15CTier1AppSystemI9ILocalizeLx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier1AppSystemI9ILocalizeLx0EEC4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier1AppSystemI9ILocalizeLx0EE7GetTierEv */
	virtual void ~CTier1AppSystem(class CTier1AppSystem<ILocalize, 0> *); /* linkage=_ZN15CTier1AppSystemI9ILocalizeLx0EED4Ev */
};

// <0003C23C> ../public/appframework/iappsystem.h:225
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTier1AppSystem<IAsyncFileSystem2, 0> : public CTier0AppSystem<IAsyncFileSystem2, 0> {
public:
	/* class CTier0AppSystem<IAsyncFileSystem2, 0> <ancestor>; */ /* 0 8 */
	void CTier1AppSystem(CTier1AppSystem<IAsyncFileSystem2, 0>* , CTier1AppSystem<IAsyncFileSystem2, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IAsyncFileSystem2, 0>* , const CTier1AppSystem<IAsyncFileSystem2, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IAsyncFileSystem2, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IAsyncFileSystem2, 0>* );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IAsyncFileSystem2, 0>* );
	void CTier1AppSystem(class CTier1AppSystem<IAsyncFileSystem2, 0> *, class CTier1AppSystem<IAsyncFileSystem2, 0> &); /* linkage=_ZN15CTier1AppSystemI17IAsyncFileSystem2Lx0EEC4EOS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IAsyncFileSystem2, 0> *, const class CTier1AppSystem<IAsyncFileSystem2, 0>  &); /* linkage=_ZN15CTier1AppSystemI17IAsyncFileSystem2Lx0EEC4ERKS1_ */
	void CTier1AppSystem(class CTier1AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier1AppSystemI17IAsyncFileSystem2Lx0EEC4Ev */
	void ~CTier1AppSystem(class CTier1AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier1AppSystemI17IAsyncFileSystem2Lx0EED4Ev */
	virtual enum AppSystemTier_t GetTier(class CTier1AppSystem<IAsyncFileSystem2, 0> *); /* linkage=_ZN15CTier1AppSystemI17IAsyncFileSystem2Lx0EE7GetTierEv */
};

// <000AE965> ../public/appframework/iappsystem.h:225
// member functions: 7
// member variable: 1
// vtable entry: 1
// class size: 16
class CTier1AppSystem<IFileSystem, 0> : public CTier0AppSystem<IFileSystem, 0> {
public:
	/* class CTier0AppSystem<IFileSystem, 0> <ancestor>; */ /* 0 16 */
	void CTier1AppSystem(CTier1AppSystem<IFileSystem, 0>* , CTier1AppSystem<IFileSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IFileSystem, 0>* , const CTier1AppSystem<IFileSystem, 0>& );
	void CTier1AppSystem(CTier1AppSystem<IFileSystem, 0>* );
	void ~CTier1AppSystem(CTier1AppSystem<IFileSystem, 0>* );
	CTier1AppSystem<IFileSystem, 0>& operator=(CTier1AppSystem<IFileSystem, 0>* , CTier1AppSystem<IFileSystem, 0>& );
	CTier1AppSystem<IFileSystem, 0>& operator=(CTier1AppSystem<IFileSystem, 0>* , const CTier1AppSystem<IFileSystem, 0>& );
	/* ../public/appframework/iappsystem.h:230 */
	virtual AppSystemTier_t GetTier(CTier1AppSystem<IFileSystem, 0>* );
};

// <046367D9> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IApplication, 0>::GetTier()
{
} /* size: 10 */

// <03AE14CC> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<ISceneUtils, 0>::GetTier()
{
} /* size: 0 */

// <028748A1> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IAppSystem, 0>::GetTier()
{
} /* size: 0 */

// <0260F1CC> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<ISoundSystem, 0>::GetTier()
{
} /* size: 0 */

// <02347058> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IResourceSystem, 0>::GetTier()
{
} /* size: 0 */

// <01FE6295> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IVideoSystem, 0>::GetTier()
{
} /* size: 0 */

// <01E7DAE4> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IVRSystem, 0>::GetTier()
{
} /* size: 0 */

// <0159192C> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<INetRuntime, 0>::GetTier()
{
} /* size: 0 */

// <00F20FF9> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IWorldRendererMgr, 0>::GetTier()
{
} /* size: 0 */

// <009DE01B> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IPhysicsSystem, 0>::GetTier()
{
} /* size: 0 */

// <00740383> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IToolService, 0>::GetTier()
{
} /* size: 0 */

// <0066C474> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<ISoundService, 0>::GetTier()
{
} /* size: 0 */

// <0058EEA8> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IRenderService, 0>::GetTier()
{
} /* size: 0 */

// <004A839C> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IInputService, 0>::GetTier()
{
} /* size: 0 */

// <0035AA02> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IEngineService, 0>::GetTier()
{
} /* size: 0 */

// <0022A378> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IEngineServiceMgr, 0>::GetTier()
{
} /* size: 0 */

// <00C18F45> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IAnimationSystem, 0>::GetTier()
{
} /* size: 0 */

// <00264CA5> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IRenderUtils, 0>::GetTier()
{
} /* size: 0 */

// <001E38AA> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IRenderDeviceMgr, 0>::GetTier()
{
} /* size: 0 */

// <00083FFF> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<ISchemaSystem, 0>::GetTier()
{
} /* size: 0 */

// <00216C31> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IMeshUtils, 0>::GetTier()
{
} /* size: 0 */

// <0015F068> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IMeshSystem, 0>::GetTier()
{
} /* size: 0 */

// <005EBE58> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<ITextLayout, 0>::GetTier()
{
} /* size: 0 */

// <0008BD41> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IMaterialSystem2, 0>::GetTier()
{
} /* size: 0 */

// <00043E1E> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<ILocalize, 0>::GetTier()
{
} /* size: 0 */

// <000B3273> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IFileSystem, 0>::GetTier()
{
} /* size: 0 */

// <0003E1EF> ../public/appframework/iappsystem.h:230
void CTier1AppSystem<IAsyncFileSystem2, 0>::GetTier()
{
} /* size: 0 */


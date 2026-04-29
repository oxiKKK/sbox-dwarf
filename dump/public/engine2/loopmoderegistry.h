
//
// public/engine2/loopmoderegistry.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	classes: 2
//

// <007846B3> ../public/engine2/loopmoderegistry.h:23
// member functions: 18
// member variables: 2
// vtable entries: 5
// class size: 16
class CLoopModeFactory<CLoopModeConsole> : public ILoopModeFactory {
public:
	/* class ILoopModeFactory <ancestor>; */ /* 0 8 */
	void ~CLoopModeFactory(CLoopModeFactory<CLoopModeConsole>* );
	void CLoopModeFactory(CLoopModeFactory<CLoopModeConsole>* , CLoopModeFactory<CLoopModeConsole>& );
	void CLoopModeFactory(CLoopModeFactory<CLoopModeConsole>* , const CLoopModeFactory<CLoopModeConsole>& );
	/* ../public/engine2/loopmoderegistry.h:26 */
	void CLoopModeFactory(CLoopModeFactory<CLoopModeConsole>* , LoopModeType_t);
	/* ../public/engine2/loopmoderegistry.h:31 */
	virtual bool Init(CLoopModeFactory<CLoopModeConsole>* , ILoopType* );
	/* ../public/engine2/loopmoderegistry.h:32 */
	virtual void Shutdown(CLoopModeFactory<CLoopModeConsole>* );
	/* ../public/engine2/loopmoderegistry.h:34 */
	virtual ILoopMode* CreateLoopMode(CLoopModeFactory<CLoopModeConsole>* );
	/* ../public/engine2/loopmoderegistry.h:41 */
	virtual void DestroyLoopMode(CLoopModeFactory<CLoopModeConsole>* , ILoopMode* );
	/* ../public/engine2/loopmoderegistry.h:42 */
	virtual LoopModeType_t GetLoopModeType(const CLoopModeFactory<CLoopModeConsole>* );
private:
	LoopModeType_t m_nType; /* 8 4 */
	void ~CLoopModeFactory(class CLoopModeFactory<CLoopModeConsole> *); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleED4Ev */
	void CLoopModeFactory(class CLoopModeFactory<CLoopModeConsole> *, class CLoopModeFactory<CLoopModeConsole> &); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleEC4EOS1_ */
	void CLoopModeFactory(class CLoopModeFactory<CLoopModeConsole> *, const class CLoopModeFactory<CLoopModeConsole>  &); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleEC4ERKS1_ */
	void CLoopModeFactory(class CLoopModeFactory<CLoopModeConsole> *, enum LoopModeType_t); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleEC4E14LoopModeType_t */
	virtual bool Init(class CLoopModeFactory<CLoopModeConsole> *, class ILoopType *); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleE4InitEP9ILoopType */
	virtual void Shutdown(class CLoopModeFactory<CLoopModeConsole> *); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleE8ShutdownEv */
	virtual class ILoopMode * CreateLoopMode(class CLoopModeFactory<CLoopModeConsole> *); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleE14CreateLoopModeEv */
	virtual void DestroyLoopMode(class CLoopModeFactory<CLoopModeConsole> *, class ILoopMode *); /* linkage=_ZN16CLoopModeFactoryI16CLoopModeConsoleE15DestroyLoopModeEP9ILoopMode */
	virtual enum LoopModeType_t GetLoopModeType(const class CLoopModeFactory<CLoopModeConsole>  *); /* linkage=_ZNK16CLoopModeFactoryI16CLoopModeConsoleE15GetLoopModeTypeEv */
};

// <00785E32> ../public/engine2/loopmoderegistry.h:26
void CLoopModeFactory<CLoopModeConsole>::CLoopModeFactory(LoopModeType_t nType)
{
} /* size: 0 */

// <00785E0D> ../public/engine2/loopmoderegistry.h:26
inline void CLoopModeFactory<CLoopModeConsole>::CLoopModeFactory(LoopModeType_t nType)
{
} /* size: 0 */

// <00785DC9> ../public/engine2/loopmoderegistry.h:31
void CLoopModeFactory<CLoopModeConsole>::Init(ILoopType* pLoop)
{
} /* size: 10 */

// <00785D9B> ../public/engine2/loopmoderegistry.h:32
void CLoopModeFactory<CLoopModeConsole>::Shutdown()
{
} /* size: 5 */

// <00785C83> ../public/engine2/loopmoderegistry.h:34
// variables: 3
// function calls: 3
void CLoopModeFactory<CLoopModeConsole>::CreateLoopMode()
{
	const char   __FUNCTION__; // 33706
	CLoopModeConsole* pNewLoopMode; // 36
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
	ILoopMode::ILoopMode(); // 278
	CLoopModeBase::CLoopModeBase(); // 47
	CLoopModeConsole::CLoopModeConsole(); // 36
} /* size: 30, variables: 2, inline expansions: 3 (10 bytes) */

// <00785C1D> ../public/engine2/loopmoderegistry.h:41
void CLoopModeFactory<CLoopModeConsole>::DestroyLoopMode(ILoopMode* pLoopMode)
{
} /* size: 33 */

// <00785BEF> ../public/engine2/loopmoderegistry.h:42
void CLoopModeFactory<CLoopModeConsole>::GetLoopModeType()
{
} /* size: 8 */

// <001EAD80> ../public/engine2/loopmoderegistry.h:53
// member functions: 8
// member variables: 4
// static member variable: 1
// class size: 32
class CLoopModeRegistry {
	/* ../public/engine2/loopmoderegistry.h:57 */
	void RegisterLoopModes(void);
	/* ../public/engine2/loopmoderegistry.h:58 */
	void UnregisterLoopModes(void);
	/* ../public/engine2/loopmoderegistry.h:62 */
	void CLoopModeRegistry(CLoopModeRegistry* , const char* , ILoopModeFactory* , void** );
private:
	/* ../public/engine2/loopmoderegistry.h:66 */
	void CLoopModeRegistry(CLoopModeRegistry* );
	CLoopModeRegistry * m_pNext; /* 0 8 */
	static class CLoopModeRegistry * sm_pFirst; /* 0 0 */
	const char * m_pLoopModeName; /* 8 8 */
	ILoopModeFactory * m_pLoopModeFactory; /* 16 8 */
	void * * m_ppGlobalPointer; /* 24 8 */
	void RegisterLoopModes(void); /* linkage=_ZN17CLoopModeRegistry17RegisterLoopModesEv */
	void UnregisterLoopModes(void); /* linkage=_ZN17CLoopModeRegistry19UnregisterLoopModesEv */
	void CLoopModeRegistry(class CLoopModeRegistry *, const char  *, class ILoopModeFactory *, void * *); /* linkage=_ZN17CLoopModeRegistryC4EPKcP16ILoopModeFactoryPPv */
	void CLoopModeRegistry(class CLoopModeRegistry *); /* linkage=_ZN17CLoopModeRegistryC4Ev */
};

// <0078563D> ../public/engine2/loopmoderegistry.h:62
void CLoopModeRegistry::CLoopModeRegistry(const char* pLoopModeName, ILoopModeFactory* pLoopModeFactory, void** ppGlobalPointer)
{
} /* size: 0 */


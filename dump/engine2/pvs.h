
//
// engine2/pvs.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <003D317E> engine2/pvs.h:21
void IEnginePVSManager::IEnginePVSManager()
{
} /* size: 0 */

// <003D3162> engine2/pvs.h:21
inline void IEnginePVSManager::IEnginePVSManager()
{
} /* size: 0 */

// <003BA6EA> engine2/pvs.h:21
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IEnginePVSManager {
	void ~IEnginePVSManager(IEnginePVSManager* );
	void IEnginePVSManager(IEnginePVSManager* , IEnginePVSManager& );
	void IEnginePVSManager(IEnginePVSManager* , const IEnginePVSManager& );
	void IEnginePVSManager(IEnginePVSManager* );
	int ()(void) * * _vptr.IEnginePVSManager; /* 0 8 */
	/* engine2/pvs.h:24 */
	virtual void Shutdown(IEnginePVSManager* );
	/* engine2/pvs.h:25 */
	virtual void Enable(IEnginePVSManager* , bool);
	/* engine2/pvs.h:26 */
	virtual bool IsEnabled(const IEnginePVSManager* );
	/* engine2/pvs.h:31 */
	virtual IPVS* BuildPvs(IEnginePVSManager* , IWorldReference* );
	/* engine2/pvs.h:32 */
	virtual void DestroyPvs(IEnginePVSManager* , IPVS* );
	void ~IEnginePVSManager(class IEnginePVSManager *); /* linkage=_ZN17IEnginePVSManagerD4Ev */
	void IEnginePVSManager(class IEnginePVSManager *, class IEnginePVSManager &); /* linkage=_ZN17IEnginePVSManagerC4EOS_ */
	void IEnginePVSManager(class IEnginePVSManager *, const class IEnginePVSManager  &); /* linkage=_ZN17IEnginePVSManagerC4ERKS_ */
	void IEnginePVSManager(class IEnginePVSManager *); /* linkage=_ZN17IEnginePVSManagerC4Ev */
	virtual void Shutdown(class IEnginePVSManager *); /* linkage=_ZN17IEnginePVSManager8ShutdownEv */
	virtual void Enable(class IEnginePVSManager *, bool); /* linkage=_ZN17IEnginePVSManager6EnableEb */
	virtual bool IsEnabled(const class IEnginePVSManager  *); /* linkage=_ZNK17IEnginePVSManager9IsEnabledEv */
	virtual class IPVS * BuildPvs(class IEnginePVSManager *, class IWorldReference *); /* linkage=_ZN17IEnginePVSManager8BuildPvsEP15IWorldReference */
	virtual void DestroyPvs(class IEnginePVSManager *, class IPVS *); /* linkage=_ZN17IEnginePVSManager10DestroyPvsEP4IPVS */
};


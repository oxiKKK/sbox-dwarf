
//
// animationsystemutils.h
//
//	referenced by: libanimationsystem.so
//
//	class: 1
//

// <00BDA412> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.h:36
// member functions: 20
// member variables: 3
// vtable entries: 5
// class size: 448
class CAnimationSystemUtils : public IAnimationSystemUtils {
public:
	/* class IAnimationSystemUtils <ancestor>; */ /* 0 8 */
	void CAnimationSystemUtils(CAnimationSystemUtils* , const CAnimationSystemUtils& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1232 */
	virtual IAnimationHelper* CreateAnimationHelper(CAnimationSystemUtils* , HModel, void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1237 */
	virtual void DestroyAnimationHelper(CAnimationSystemUtils* , IAnimationHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1242 */
	virtual void MaintainDecodeCaches(CAnimationSystemUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1263 */
	virtual CThreadLocalAnimationDecodeCache* GetThreadLocalDecodeCache(CAnimationSystemUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1269 */
	virtual void ReturnThreadLocalDecodeCache(CAnimationSystemUtils* , CThreadLocalAnimationDecodeCache* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1195 */
	void CAnimationSystemUtils(CAnimationSystemUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1200 */
	virtual void ~CAnimationSystemUtils(CAnimationSystemUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1208 */
	bool Init(CAnimationSystemUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1222 */
	void Shutdown(CAnimationSystemUtils* );
private:
	CTSPool<CThreadLocalAnimationDecodeCache> m_threadLocalDecodeCachePool __attribute__((__aligned__(16))); /* 16 16 */
	CThreadRWLock_FastRead m_threadLocalDecodeCachePoolLock __attribute__((__aligned__(8))); /* 32 408 */
	void CAnimationSystemUtils(class CAnimationSystemUtils *, const class CAnimationSystemUtils  &); /* linkage=_ZN21CAnimationSystemUtilsC4ERKS_ */
	virtual class IAnimationHelper * CreateAnimationHelper(class CAnimationSystemUtils *, HModel, void *); /* linkage=_ZN21CAnimationSystemUtils21CreateAnimationHelperE11CWeakHandleI25InfoForResourceTypeCModelEPv */
	virtual void DestroyAnimationHelper(class CAnimationSystemUtils *, class IAnimationHelper *); /* linkage=_ZN21CAnimationSystemUtils22DestroyAnimationHelperEP16IAnimationHelper */
	virtual void MaintainDecodeCaches(class CAnimationSystemUtils *); /* linkage=_ZN21CAnimationSystemUtils20MaintainDecodeCachesEv */
	virtual class CThreadLocalAnimationDecodeCache * GetThreadLocalDecodeCache(class CAnimationSystemUtils *); /* linkage=_ZN21CAnimationSystemUtils25GetThreadLocalDecodeCacheEv */
	/* <d2a6a5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1269 */
	virtual void ReturnThreadLocalDecodeCache(class CAnimationSystemUtils *, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN21CAnimationSystemUtils28ReturnThreadLocalDecodeCacheEP32CThreadLocalAnimationDecodeCache */
	void CAnimationSystemUtils(class CAnimationSystemUtils *); /* linkage=_ZN21CAnimationSystemUtilsC4Ev */
	virtual void ~CAnimationSystemUtils(class CAnimationSystemUtils *); /* linkage=_ZN21CAnimationSystemUtilsD4Ev */
	bool Init(class CAnimationSystemUtils *); /* linkage=_ZN21CAnimationSystemUtils4InitEv */
	/* <d33197> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystemutils.cpp:1222 */
	void Shutdown(class CAnimationSystemUtils *); /* linkage=_ZN21CAnimationSystemUtils8ShutdownEv */
} __attribute__((__aligned__(16)));


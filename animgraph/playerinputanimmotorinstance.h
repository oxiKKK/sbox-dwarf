
//
// animgraph/playerinputanimmotorinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <0145FD65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.h:12
// function calls: 8
void CPlayerInputAnimMotorInstance::~CPlayerInputAnimMotorInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CAnimMotorInstance::~CAnimMotorInstance(); // 12
} /* size: 65, inline expansions: 8 (126 bytes) */

// <0145FADC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.h:12
// function calls: 13
void CPlayerInputAnimMotorInstance::~CPlayerInputAnimMotorInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 18
	Object::~Object(); // 28
	IAnimMotorInstance::~IAnimMotorInstance(); // 18
	CAnimMotorInstance::~CAnimMotorInstance(); // 12
	CPlayerInputAnimMotorInstance::~CPlayerInputAnimMotorInstance(); // 12
} /* size: 117, inline expansions: 13 (242 bytes) */

// <0145FAC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.h:12
inline void CPlayerInputAnimMotorInstance::~CPlayerInputAnimMotorInstance()
{
} /* size: 0 */

// <01455EAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.h:12
// member functions: 24
// member variables: 2
// static member variable: 1
// vtable entries: 6
// class size: 48
class CPlayerInputAnimMotorInstance : public CAnimMotorInstance, public IPlayerInputAnimMotorInstance {
public:
	/* class CAnimMotorInstance <ancestor>; */ /* 0 40 */
	/* class IPlayerInputAnimMotorInstance <ancestor>; */ /* 40 8 */
	void CPlayerInputAnimMotorInstance(CPlayerInputAnimMotorInstance* , CPlayerInputAnimMotorInstance& );
	void CPlayerInputAnimMotorInstance(CPlayerInputAnimMotorInstance* , const CPlayerInputAnimMotorInstance& );
private:
	static class CClassInfoT<CPlayerInputAnimMotorInstance> m_classInfoCPlayerInputAnimMotorInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CPlayerInputAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11 */
	virtual void* CastToBase(CPlayerInputAnimMotorInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11 */
	virtual const void* CastToBase(const CPlayerInputAnimMotorInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:20 */
	void CPlayerInputAnimMotorInstance(CPlayerInputAnimMotorInstance* , const CAnimMotorUpdaterBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:29 */
	virtual void SetInputVector(CPlayerInputAnimMotorInstance* , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:39 */
	virtual void SetUseCustomAcceleration(CPlayerInputAnimMotorInstance* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:49 */
	virtual void SetCustomAcceleration(CPlayerInputAnimMotorInstance* , const Vector& );
	virtual void ~CPlayerInputAnimMotorInstance(CPlayerInputAnimMotorInstance* );
	void CPlayerInputAnimMotorInstance(class CPlayerInputAnimMotorInstance *, class CPlayerInputAnimMotorInstance &); /* linkage=_ZN29CPlayerInputAnimMotorInstanceC4EOS_ */
	void CPlayerInputAnimMotorInstance(class CPlayerInputAnimMotorInstance *, const class CPlayerInputAnimMotorInstance  &); /* linkage=_ZN29CPlayerInputAnimMotorInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN29CPlayerInputAnimMotorInstance8MyTypeIDEv */
	/* <147272d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN29CPlayerInputAnimMotorInstance10MyTypeInfoEv */
	/* <1471e61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CPlayerInputAnimMotorInstance  *); /* linkage=_ZNK29CPlayerInputAnimMotorInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CPlayerInputAnimMotorInstance *, class ClassID); /* linkage=_ZN29CPlayerInputAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CPlayerInputAnimMotorInstance  *, class ClassID); /* linkage=_ZNK29CPlayerInputAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	void CPlayerInputAnimMotorInstance(class CPlayerInputAnimMotorInstance *, const class CAnimMotorUpdaterBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN29CPlayerInputAnimMotorInstanceC4EPK21CAnimMotorUpdaterBaseRK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE */
	/* <1471e8b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:29 */
	virtual void SetInputVector(class CPlayerInputAnimMotorInstance *, const class Vector  &); /* linkage=_ZN29CPlayerInputAnimMotorInstance14SetInputVectorERK6Vector */
	/* <1471f83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:39 */
	virtual void SetUseCustomAcceleration(class CPlayerInputAnimMotorInstance *, bool); /* linkage=_ZN29CPlayerInputAnimMotorInstance24SetUseCustomAccelerationEb */
	/* <147207e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:49 */
	virtual void SetCustomAcceleration(class CPlayerInputAnimMotorInstance *, const class Vector  &); /* linkage=_ZN29CPlayerInputAnimMotorInstance21SetCustomAccelerationERK6Vector */
	virtual void ~CPlayerInputAnimMotorInstance(class CPlayerInputAnimMotorInstance *); /* linkage=_ZN29CPlayerInputAnimMotorInstanceD4Ev */
};

// <0146A9AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 8979
} /* size: 0, variables: 2 */



//
// animgraph/animmotorinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <0146A0AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.h:18
// function calls: 7
void CAnimMotorInstance::~CAnimMotorInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 18
} /* size: 57, inline expansions: 7 (92 bytes) */

// <01469E48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.h:18
// function calls: 12
void CAnimMotorInstance::~CAnimMotorInstance()
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
	CAnimMotorInstance::~CAnimMotorInstance(); // 18
} /* size: 109, inline expansions: 12 (174 bytes) */

// <01469E2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.h:18
inline void CAnimMotorInstance::~CAnimMotorInstance()
{
} /* size: 0 */

// <01451399> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.h:18
// member functions: 28
// member variables: 4
// static member variable: 1
// vtable entries: 5
// class size: 40
class CAnimMotorInstance : public IAnimMotorInstance, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimMotorInstance <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CAnimMotorInstance(CAnimMotorInstance* , CAnimMotorInstance& );
	void CAnimMotorInstance(CAnimMotorInstance* , const CAnimMotorInstance& );
private:
	static class CClassInfoT<CAnimMotorInstance> m_classInfoCAnimMotorInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.h:20 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11 */
	virtual void* CastToBase(CAnimMotorInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11 */
	virtual const void* CastToBase(const CAnimMotorInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:15 */
	void CAnimMotorInstance(CAnimMotorInstance* , const CAnimMotorUpdaterBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:23 */
	virtual const CUtlString& GetName(const CAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:29 */
	virtual bool IsDefault(const CAnimMotorInstance* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:35 */
	const CAnimMotorUpdaterBase* GetMotorUpdater(const CAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:41 */
	CAnimGraphUpdateContext* GetContext(CAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:47 */
	const CAnimGraphUpdateContext* GetContext(const CAnimMotorInstance* );
private:
	const class CAnimMotorUpdaterBase * m_pMotor; /* 24 8 */
	CAnimGraphUpdateContextPtr m_pUpdateContext; /* 32 8 */
	virtual void ~CAnimMotorInstance(CAnimMotorInstance* );
	void CAnimMotorInstance(class CAnimMotorInstance *, const class CAnimMotorUpdaterBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN18CAnimMotorInstanceC4EPK21CAnimMotorUpdaterBaseRK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE */
	void CAnimMotorInstance(class CAnimMotorInstance *, class CAnimMotorInstance &); /* linkage=_ZN18CAnimMotorInstanceC4EOS_ */
	void CAnimMotorInstance(class CAnimMotorInstance *, const class CAnimMotorInstance  &); /* linkage=_ZN18CAnimMotorInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CAnimMotorInstance8MyTypeIDEv */
	/* <14725f5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CAnimMotorInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimMotorInstance  *); /* linkage=_ZNK18CAnimMotorInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CAnimMotorInstance *, class ClassID); /* linkage=_ZN18CAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CAnimMotorInstance  *, class ClassID); /* linkage=_ZNK18CAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlString  & GetName(const class CAnimMotorInstance  *); /* linkage=_ZNK18CAnimMotorInstance7GetNameEv */
	virtual bool IsDefault(const class CAnimMotorInstance  *); /* linkage=_ZNK18CAnimMotorInstance9IsDefaultEv */
	/* <1472613> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:35 */
	const class CAnimMotorUpdaterBase  * GetMotorUpdater(const class CAnimMotorInstance  *); /* linkage=_ZNK18CAnimMotorInstance15GetMotorUpdaterEv */
	/* <147263d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:41 */
	class CAnimGraphUpdateContext * GetContext(class CAnimMotorInstance *); /* linkage=_ZN18CAnimMotorInstance10GetContextEv */
	const class CAnimGraphUpdateContext  * GetContext(const class CAnimMotorInstance  *); /* linkage=_ZNK18CAnimMotorInstance10GetContextEv */
	virtual void ~CAnimMotorInstance(class CAnimMotorInstance *); /* linkage=_ZN18CAnimMotorInstanceD4Ev */
};

// <0146FE1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.h:20
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 20
	const char   __PRETTY_FUNCTION__; // 8717
} /* size: 0, variables: 2 */

// <00F34C1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.h:22
void CAnimMotorInstance::CAnimMotorInstance(const CAnimMotorUpdaterBase* pMotor, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
} /* size: 0 */



//
// animgraph/animparameterlistinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//	classes: 3
//

// <00F79233> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:16
// function calls: 14
void CAnimParameterInstance::~CAnimParameterInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 16
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 16
} /* size: 106, inline expansions: 14 (261 bytes) */

// <00F78E35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:16
// function calls: 19
void CAnimParameterInstance::~CAnimParameterInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 16
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 16
	Object::~Object(); // 14
	IAnimParameterInstance::~IAnimParameterInstance(); // 16
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 16
	CAnimParameterInstance::~CAnimParameterInstance(); // 16
} /* size: 103, inline expansions: 19 (240 bytes) */

// <00F78E19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:16
inline void CAnimParameterInstance::~CAnimParameterInstance()
{
} /* size: 0 */

// <00F28EDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:16
// member functions: 42
// member variables: 5
// static member variable: 1
// vtable entries: 15
// class size: 48
class CAnimParameterInstance : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IAnimParameterInstance {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IAnimParameterInstance <ancestor>; */ /* 16 8 */
	void CAnimParameterInstance(CAnimParameterInstance* , CAnimParameterInstance& );
	void CAnimParameterInstance(CAnimParameterInstance* , const CAnimParameterInstance& );
private:
	static class CClassInfoT<CAnimParameterInstance> m_classInfoCAnimParameterInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:18 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21 */
	virtual const CClassInfo& GetTypeInfo(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21 */
	virtual void* CastToBase(CAnimParameterInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21 */
	virtual const void* CastToBase(const CAnimParameterInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:25 */
	void CAnimParameterInstance(CAnimParameterInstance* , const CAnimParameterBaseConstPtr& , const CAnimGraphInstanceContextPtr& , const CAnimParamHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:37 */
	virtual CAnimVariant GetValue(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:43 */
	virtual void SetValue(CAnimParameterInstance* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:53 */
	virtual const CUtlString& GetName(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:59 */
	virtual AnimParamID GetParameterID(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:65 */
	virtual const CClassInfo* GetSourceTypeInfo(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:71 */
	virtual AnimParamType_t GetParameterType(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:77 */
	virtual CAnimVariant GetDefaultValue(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:83 */
	virtual CAnimVariant GetMinValue(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:89 */
	virtual CAnimVariant GetMaxValue(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:95 */
	virtual bool ShouldUseMostRecentValue(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:101 */
	virtual bool IsAutoReset(const CAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:107 */
	virtual AnimParamButton_t GetPreviewButton(const CAnimParameterInstance* );
protected:
	CAnimParameterBaseConstPtr m_pParamSettings; /* 24 8 */
	CAnimGraphInstanceContextPtr m_pGraphContext; /* 32 8 */
	CAnimParamHandle m_handle; /* 40 2 */
	virtual void ~CAnimParameterInstance(CAnimParameterInstance* );
	void CAnimParameterInstance(class CAnimParameterInstance *, class CAnimParameterInstance &); /* linkage=_ZN22CAnimParameterInstanceC4EOS_ */
	void CAnimParameterInstance(class CAnimParameterInstance *, const class CAnimParameterInstance  &); /* linkage=_ZN22CAnimParameterInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN22CAnimParameterInstance8MyTypeIDEv */
	/* <f9e3f7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN22CAnimParameterInstance10MyTypeInfoEv */
	/* <f99157> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21 */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CAnimParameterInstance *, class ClassID); /* linkage=_ZN22CAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CAnimParameterInstance  *, class ClassID); /* linkage=_ZNK22CAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	void CAnimParameterInstance(class CAnimParameterInstance *, const CAnimParameterBaseConstPtr  &, const CAnimGraphInstanceContextPtr  &, const class CAnimParamHandle  &); /* linkage=_ZN22CAnimParameterInstanceC4ERK9CSmartPtrIK18CAnimParameterBase17CRefCountAccessorERKS0_I25CAnimGraphInstanceContextS3_ERK16CAnimParamHandle */
	/* <f9a55d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:37 */
	virtual class CAnimVariant GetValue(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance8GetValueEv */
	virtual void SetValue(class CAnimParameterInstance *, const class CAnimVariant  &); /* linkage=_ZN22CAnimParameterInstance8SetValueERK12CAnimVariant */
	/* <f99181> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:53 */
	virtual const class CUtlString  & GetName(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance7GetNameEv */
	/* <f991e0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:59 */
	virtual class AnimParamID GetParameterID(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance14GetParameterIDEv */
	/* <f99251> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:65 */
	virtual const class CClassInfo  * GetSourceTypeInfo(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance17GetSourceTypeInfoEv */
	/* <f992b0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:71 */
	virtual enum AnimParamType_t GetParameterType(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance16GetParameterTypeEv */
	/* <f9930f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:77 */
	virtual class CAnimVariant GetDefaultValue(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance15GetDefaultValueEv */
	/* <f99380> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:83 */
	virtual class CAnimVariant GetMinValue(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance11GetMinValueEv */
	/* <f993f1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:89 */
	virtual class CAnimVariant GetMaxValue(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance11GetMaxValueEv */
	/* <f99462> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:95 */
	virtual bool ShouldUseMostRecentValue(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance24ShouldUseMostRecentValueEv */
	/* <f994c1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:101 */
	virtual bool IsAutoReset(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance11IsAutoResetEv */
	/* <f99520> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:107 */
	virtual enum AnimParamButton_t GetPreviewButton(const class CAnimParameterInstance  *); /* linkage=_ZNK22CAnimParameterInstance16GetPreviewButtonEv */
	virtual void ~CAnimParameterInstance(class CAnimParameterInstance *); /* linkage=_ZN22CAnimParameterInstanceD4Ev */
};

// <00F7BB34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:18
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 18
	const char   __PRETTY_FUNCTION__; // 38976
} /* size: 0, variables: 2 */

// <00F3E4BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:48
// function calls: 17
void CEnumAnimParameterInstance::~CEnumAnimParameterInstance()
{
	Object::~Object(); // 59
	IEnumAnimParameterInstance::~IEnumAnimParameterInstance(); // 48
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 16
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 16
	CAnimParameterInstance::~CAnimParameterInstance(); // 48
} /* size: 106, inline expansions: 17 (349 bytes) */

// <00F3E034> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:48
// function calls: 22
void CEnumAnimParameterInstance::~CEnumAnimParameterInstance()
{
	Object::~Object(); // 59
	IEnumAnimParameterInstance::~IEnumAnimParameterInstance(); // 48
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 16
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 16
	Object::~Object(); // 14
	IAnimParameterInstance::~IAnimParameterInstance(); // 16
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 16
	CAnimParameterInstance::~CAnimParameterInstance(); // 48
	CEnumAnimParameterInstance::~CEnumAnimParameterInstance(); // 48
} /* size: 103, inline expansions: 22 (309 bytes) */

// <00F3E018> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:48
inline void CEnumAnimParameterInstance::~CEnumAnimParameterInstance()
{
} /* size: 0 */

// <00F28D34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:48
// member functions: 20
// member variables: 2
// static member variable: 1
// vtable entries: 4
// class size: 56
class CEnumAnimParameterInstance : public CAnimParameterInstance, public IEnumAnimParameterInstance {
public:
	/* class CAnimParameterInstance <ancestor>; */ /* 0 48 */
	/* class IEnumAnimParameterInstance <ancestor>; */ /* 48 8 */
	void CEnumAnimParameterInstance(CEnumAnimParameterInstance* , CEnumAnimParameterInstance& );
	void CEnumAnimParameterInstance(CEnumAnimParameterInstance* , const CEnumAnimParameterInstance& );
private:
	static class CClassInfoT<CEnumAnimParameterInstance> m_classInfoCEnumAnimParameterInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:50 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17 */
	virtual const CClassInfo& GetTypeInfo(const CEnumAnimParameterInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17 */
	virtual void* CastToBase(CEnumAnimParameterInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17 */
	virtual const void* CastToBase(const CEnumAnimParameterInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:114 */
	void CEnumAnimParameterInstance(CEnumAnimParameterInstance* , const CAnimParameterBaseConstPtr& , const CAnimGraphInstanceContextPtr& , const CAnimParamHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:121 */
	virtual const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& GetOptionNames(const CEnumAnimParameterInstance* );
	virtual void ~CEnumAnimParameterInstance(CEnumAnimParameterInstance* );
	void CEnumAnimParameterInstance(class CEnumAnimParameterInstance *, class CEnumAnimParameterInstance &); /* linkage=_ZN26CEnumAnimParameterInstanceC4EOS_ */
	void CEnumAnimParameterInstance(class CEnumAnimParameterInstance *, const class CEnumAnimParameterInstance  &); /* linkage=_ZN26CEnumAnimParameterInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN26CEnumAnimParameterInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN26CEnumAnimParameterInstance10MyTypeInfoEv */
	/* <f9912d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17 */
	virtual const class CClassInfo  & GetTypeInfo(const class CEnumAnimParameterInstance  *); /* linkage=_ZNK26CEnumAnimParameterInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CEnumAnimParameterInstance *, class ClassID); /* linkage=_ZN26CEnumAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CEnumAnimParameterInstance  *, class ClassID); /* linkage=_ZNK26CEnumAnimParameterInstance10CastToBaseEN10Reflection7ClassIDE */
	void CEnumAnimParameterInstance(class CEnumAnimParameterInstance *, const CAnimParameterBaseConstPtr  &, const CAnimGraphInstanceContextPtr  &, const class CAnimParamHandle  &); /* linkage=_ZN26CEnumAnimParameterInstanceC4ERK9CSmartPtrIK18CAnimParameterBase17CRefCountAccessorERKS0_I25CAnimGraphInstanceContextS3_ERK16CAnimParamHandle */
	/* <f9fed5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:121 */
	virtual const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  & GetOptionNames(const class CEnumAnimParameterInstance  *); /* linkage=_ZNK26CEnumAnimParameterInstance14GetOptionNamesEv */
	virtual void ~CEnumAnimParameterInstance(class CEnumAnimParameterInstance *); /* linkage=_ZN26CEnumAnimParameterInstanceD4Ev */
};

// <00F7BB03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:50
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 50
	const char   __PRETTY_FUNCTION__; // 39084
} /* size: 0, variables: 2 */

// <00F3EE65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:62
// variable: 1
// function calls: 24
void CAnimParameterListInstance::~CAnimParameterListInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParamIdMap>(const CAnimParamIdMap* pObj); // 344
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::~CSmartPtr(); // 62
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 344
		CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterInstance> >(CSmartPtr<CAnimParameterInstance, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 1798
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefC this); // 62
} /* size: 195, inline expansions: 14 (555 bytes) */

// <00F3E81E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:62
// variable: 1
// function calls: 30
void CAnimParameterListInstance::~CAnimParameterListInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParamIdMap>(const CAnimParamIdMap* pObj); // 344
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::~CSmartPtr(); // 62
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 344
		CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterInstance> >(CSmartPtr<CAnimParameterInstance, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 1798
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 560
	ValidateAlignment<CSmartPtr<CAnimParameterInstance> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefC this); // 62
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 62
	CAnimParameterListInstance::~CAnimParameterListInstance(); // 62
} /* size: 190, inline expansions: 20 (667 bytes) */

// <00F3E802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:62
inline void CAnimParameterListInstance::~CAnimParameterListInstance()
{
} /* size: 0 */

// <00F30716> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:62
// member functions: 36
// member variables: 4
// vtable entries: 9
// class size: 64
class CAnimParameterListInstance : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IAnimParameterListInstance {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IAnimParameterListInstance <ancestor>; */ /* 16 8 */
	void CAnimParameterListInstance(CAnimParameterListInstance* , CAnimParameterListInstance& );
	void CAnimParameterListInstance(CAnimParameterListInstance* , const CAnimParameterListInstance& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:128 */
	void CAnimParameterListInstance(CAnimParameterListInstance* , const CAnimGraphInstanceContextPtr& , const CAnimParameterListConstPtr& , const CAnimParamIdMapConstPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:173 */
	virtual int Count(const CAnimParameterListInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:179 */
	virtual IAnimParameterInstance* GetParameter(CAnimParameterListInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:185 */
	virtual const IAnimParameterInstance* GetParameter(const CAnimParameterListInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:203 */
	virtual IAnimParameterInstance* GetParameter(CAnimParameterListInstance* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:209 */
	virtual const IAnimParameterInstance* GetParameter(const CAnimParameterListInstance* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:191 */
	virtual IAnimParameterInstance* GetParameter(CAnimParameterListInstance* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:197 */
	virtual const IAnimParameterInstance* GetParameter(const CAnimParameterListInstance* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:215 */
	void PerformAutoReset(CAnimParameterListInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:277 */
	void Save(const CAnimParameterListInstance* , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:304 */
	void Restore(CAnimParameterListInstance* , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:227 */
	virtual void Save(const CAnimParameterListInstance* , KeyValues3* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:248 */
	virtual void Restore(CAnimParameterListInstance* , const KeyValues3* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:335 */
	CAnimParameterInstancePtr FindParam(const CAnimParameterListInstance* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:350 */
	CAnimParameterInstancePtr FindParam(const CAnimParameterListInstance* , const CUtlString& );
	CUtlVector<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int> > m_ParamVector; /* 24 32 */
	CAnimParamIdMapConstPtr m_pParamIdMap; /* 56 8 */
	virtual void ~CAnimParameterListInstance(CAnimParameterListInstance* );
	void PerformAutoReset(class CAnimParameterListInstance *); /* linkage=_ZN26CAnimParameterListInstance16PerformAutoResetEv */
	void CAnimParameterListInstance(class CAnimParameterListInstance *, const CAnimGraphInstanceContextPtr  &, const CAnimParameterListConstPtr  &, const CAnimParamIdMapConstPtr  &); /* linkage=_ZN26CAnimParameterListInstanceC4ERK9CSmartPtrI25CAnimGraphInstanceContext17CRefCountAccessorERKS0_IK18CAnimParameterListS2_ERKS0_IK15CAnimParamIdMapS2_E */
	void CAnimParameterListInstance(class CAnimParameterListInstance *, class CAnimParameterListInstance &); /* linkage=_ZN26CAnimParameterListInstanceC4EOS_ */
	void CAnimParameterListInstance(class CAnimParameterListInstance *, const class CAnimParameterListInstance  &); /* linkage=_ZN26CAnimParameterListInstanceC4ERKS_ */
	/* <f9957f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:173 */
	virtual int Count(const class CAnimParameterListInstance  *); /* linkage=_ZNK26CAnimParameterListInstance5CountEv */
	/* <f995d9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:179 */
	virtual class IAnimParameterInstance * GetParameter(class CAnimParameterListInstance *, int); /* linkage=_ZN26CAnimParameterListInstance12GetParameterEi */
	virtual const class IAnimParameterInstance  * GetParameter(const class CAnimParameterListInstance  *, int); /* linkage=_ZNK26CAnimParameterListInstance12GetParameterEi */
	/* <f9e415> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:203 */
	virtual class IAnimParameterInstance * GetParameter(class CAnimParameterListInstance *, class AnimParamID); /* linkage=_ZN26CAnimParameterListInstance12GetParameterE11AnimParamID */
	virtual const class IAnimParameterInstance  * GetParameter(const class CAnimParameterListInstance  *, class AnimParamID); /* linkage=_ZNK26CAnimParameterListInstance12GetParameterE11AnimParamID */
	/* <f9f22d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:191 */
	virtual class IAnimParameterInstance * GetParameter(class CAnimParameterListInstance *, const class CUtlString  &); /* linkage=_ZN26CAnimParameterListInstance12GetParameterERK10CUtlString */
	virtual const class IAnimParameterInstance  * GetParameter(const class CAnimParameterListInstance  *, const class CUtlString  &); /* linkage=_ZNK26CAnimParameterListInstance12GetParameterERK10CUtlString */
	void Save(const class CAnimParameterListInstance  *, class ISave *); /* linkage=_ZNK26CAnimParameterListInstance4SaveEP5ISave */
	void Restore(class CAnimParameterListInstance *, class IRestore *); /* linkage=_ZN26CAnimParameterListInstance7RestoreEP8IRestore */
	/* <f9d1ea> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:227 */
	virtual void Save(const class CAnimParameterListInstance  *, class KeyValues3 *); /* linkage=_ZNK26CAnimParameterListInstance4SaveEP10KeyValues3 */
	/* <f9f1ce> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:248 */
	virtual void Restore(class CAnimParameterListInstance *, const class KeyValues3  *); /* linkage=_ZN26CAnimParameterListInstance7RestoreEPK10KeyValues3 */
	CAnimParameterInstancePtr FindParam(const class CAnimParameterListInstance  *, class AnimParamID); /* linkage=_ZNK26CAnimParameterListInstance9FindParamE11AnimParamID */
	CAnimParameterInstancePtr FindParam(const class CAnimParameterListInstance  *, const class CUtlString  &); /* linkage=_ZNK26CAnimParameterListInstance9FindParamERK10CUtlString */
	virtual void ~CAnimParameterListInstance(class CAnimParameterListInstance *); /* linkage=_ZN26CAnimParameterListInstanceD4Ev */
};

// <00DF503E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.h:66
void CAnimParameterListInstance::CAnimParameterListInstance(const CAnimGraphInstanceContextPtr& pGraphContext, const CAnimParameterListConstPtr& sourceList, const CAnimParamIdMapConstPtr& pParamIdMap)
{
} /* size: 0 */


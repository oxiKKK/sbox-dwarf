
//
// animgraph/motionclipgroup.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	class: 1
//

// <0134DF20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:14
// variable: 1
// function calls: 28
void CMotionClipGroup::~CMotionClipGroup()
{
	CUtlString::~CUtlString(); // 14
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CMotionClip>(CMotionClip* pObj); // 344
		CSmartPtr<CMotionClip, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CMotionClip> >(CSmartPtr<CMotionClip, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 1798
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 560
	ValidateAlignment<CSmartPtr<CMotionClip> >(void); // 508
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int> > this); // 14
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 14
} /* size: 235, inline expansions: 18 (628 bytes) */

// <0134D843> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:14
// variable: 1
// function calls: 33
void CMotionClipGroup::~CMotionClipGroup()
{
	CUtlString::~CUtlString(); // 14
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CMotionClip>(CMotionClip* pObj); // 344
		CSmartPtr<CMotionClip, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CMotionClip> >(CSmartPtr<CMotionClip, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 1798
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 560
	ValidateAlignment<CSmartPtr<CMotionClip> >(void); // 508
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int> > this); // 14
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 14
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 14
	Object::~Object(); // 17
	IMotionClipGroup::~IMotionClipGroup(); // 14
	CMotionClipGroup::~CMotionClipGroup(); // 14
} /* size: 226, inline expansions: 23 (756 bytes) */

// <0134D827> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:14
inline void CMotionClipGroup::~CMotionClipGroup()
{
} /* size: 0 */

// <01348C4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:14
// member functions: 77
// member variables: 6
// static member variables: 2
// vtable entries: 16
// class size: 80
class CMotionClipGroup : public IMotionClipGroup, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IMotionClipGroup <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CMotionClipGroup(CMotionClipGroup* , CMotionClipGroup& );
	void CMotionClipGroup(CMotionClipGroup* , const CMotionClipGroup& );
private:
	static class CClassInfoT<CMotionClipGroup> m_classInfoCMotionClipGroup; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13 */
	virtual void* CastToBase(CMotionClipGroup* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13 */
	virtual const void* CastToBase(const CMotionClipGroup* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	CMotionClipGroup* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	void Schema_CompileTimeVerificationFunction(CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:18 */
	void KV3TransferPolymorphicClassname(const CMotionClipGroup* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:18 */
	CMotionClipGroup* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:18 */
	virtual void KV3TransferSave(const CMotionClipGroup* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:18 */
	virtual void KV3TransferLoad(CMotionClipGroup* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:18 */
	void KV3TransferSave_CMotionClipGroup(const CMotionClipGroup* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:18 */
	void KV3TransferLoad_CMotionClipGroup(CMotionClipGroup* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:17 */
	void CMotionClipGroup(CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:23 */
	virtual const CUtlString& GetName(const CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:29 */
	virtual void SetName(CMotionClipGroup* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:35 */
	virtual IAnimTag* GetTag(CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:48 */
	virtual const IAnimTag* GetTag(const CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:61 */
	virtual int GetClipCount(const CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:67 */
	virtual IMotionClip* GetClip(CMotionClipGroup* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:73 */
	virtual const IMotionClip* GetClip(const CMotionClipGroup* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:79 */
	virtual IMotionClip* AddClip(CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:87 */
	virtual void RemoveClip(CMotionClipGroup* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:93 */
	virtual void RemoveClip(CMotionClipGroup* , IMotionClip* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:99 */
	void SetContext(CMotionClipGroup* , const CAnimGraphContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:110 */
	AnimTagID GetTagID(const CMotionClipGroup* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:116 */
	void SetTagID(CMotionClipGroup* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:122 */
	CMotionClip* GetClipInternal(CMotionClipGroup* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:128 */
	const CMotionClip* GetClipInternal(const CMotionClipGroup* , int);
	CAnimGraphContextPtr m_pContext; /* 24 8 */
	CUtlVector<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int> > m_clips; /* 32 32 */
	CUtlString m_name; /* 64 8 */
	AnimTagID m_tagID; /* 72 4 */
	virtual void ~CMotionClipGroup(CMotionClipGroup* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CMotionClipGroup22Schema_StaticClassnameEv */
	/* <6b7792> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/motionclipgroup_h_schema.gen_cpp:126 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CMotionClipGroup32Schema_VerifyBindingIsRegisteredEv */
	class CMotionClipGroup * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CMotionClipGroup32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CMotionClipGroup  *, char &); /* linkage=_ZN16CMotionClipGroup31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CMotionClipGroup20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CMotionClipGroup17GetPrimaryBindingEv */
	virtual void RemoveClip(class CMotionClipGroup *, class IMotionClip *); /* linkage=_ZN16CMotionClipGroup10RemoveClipEP11IMotionClip */
	virtual void RemoveClip(class CMotionClipGroup *, int); /* linkage=_ZN16CMotionClipGroup10RemoveClipEi */
	virtual class IMotionClip * AddClip(class CMotionClipGroup *); /* linkage=_ZN16CMotionClipGroup7AddClipEv */
	virtual const class IMotionClip  * GetClip(const class CMotionClipGroup  *, int); /* linkage=_ZNK16CMotionClipGroup7GetClipEi */
	/* <13567d5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:67 */
	virtual class IMotionClip * GetClip(class CMotionClipGroup *, int); /* linkage=_ZN16CMotionClipGroup7GetClipEi */
	virtual int GetClipCount(const class CMotionClipGroup  *); /* linkage=_ZNK16CMotionClipGroup12GetClipCountEv */
	virtual const class IAnimTag  * GetTag(const class CMotionClipGroup  *); /* linkage=_ZNK16CMotionClipGroup6GetTagEv */
	virtual class IAnimTag * GetTag(class CMotionClipGroup *); /* linkage=_ZN16CMotionClipGroup6GetTagEv */
	virtual void SetName(class CMotionClipGroup *, const class CUtlString  &); /* linkage=_ZN16CMotionClipGroup7SetNameERK10CUtlString */
	virtual const class CUtlString  & GetName(const class CMotionClipGroup  *); /* linkage=_ZNK16CMotionClipGroup7GetNameEv */
	virtual const void  * CastToBase(const class CMotionClipGroup  *, class ClassID); /* linkage=_ZNK16CMotionClipGroup10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CMotionClipGroup *, class ClassID); /* linkage=_ZN16CMotionClipGroup10CastToBaseEN10Reflection7ClassIDE */
	/* <13567ac> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13 */
	virtual const class CClassInfo  & GetTypeInfo(const class CMotionClipGroup  *); /* linkage=_ZNK16CMotionClipGroup11GetTypeInfoEv */
	void CMotionClipGroup(class CMotionClipGroup *); /* linkage=_ZN16CMotionClipGroupC4Ev */
	void KV3TransferLoad_CMotionClipGroup(class CMotionClipGroup *, class CKV3TransferLoadContext *); /* linkage=_ZN16CMotionClipGroup32KV3TransferLoad_CMotionClipGroupEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CMotionClipGroup *, class CKV3TransferLoadContext *); /* linkage=_ZN16CMotionClipGroup15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CMotionClipGroup(const class CMotionClipGroup  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CMotionClipGroup32KV3TransferSave_CMotionClipGroupEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CMotionClipGroup  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CMotionClipGroup15KV3TransferSaveEP23CKV3TransferSaveContext */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CMotionClipGroup15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CMotionClipGroup(class CMotionClipGroup *); /* linkage=_ZN16CMotionClipGroupD4Ev */
	class CMotionClipGroup & operator=(class CMotionClipGroup *, const class CMotionClipGroup  &); /* linkage=_ZN16CMotionClipGroupaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CMotionClipGroup *); /* linkage=_ZN16CMotionClipGroup38Schema_CompileTimeVerificationFunctionEv */
	/* <6b75b1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/motionclipgroup.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CMotionClipGroup  *); /* linkage=_ZNK16CMotionClipGroup21Schema_DynamicBindingEv */
	void SetContext(class CMotionClipGroup *, const CAnimGraphContextPtr  &); /* linkage=_ZN16CMotionClipGroup10SetContextERK9CSmartPtrI17CAnimGraphContext17CRefCountAccessorE */
	const class CMotionClip  * GetClipInternal(const class CMotionClipGroup  *, int); /* linkage=_ZNK16CMotionClipGroup15GetClipInternalEi */
	class AnimTagID GetTagID(const class CMotionClipGroup  *); /* linkage=_ZNK16CMotionClipGroup8GetTagIDEv */
	void CMotionClipGroup(class CMotionClipGroup *, class CMotionClipGroup &); /* linkage=_ZN16CMotionClipGroupC4EOS_ */
	void CMotionClipGroup(class CMotionClipGroup *, const class CMotionClipGroup  &); /* linkage=_ZN16CMotionClipGroupC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN16CMotionClipGroup8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN16CMotionClipGroup10MyTypeInfoEv */
	class CMotionClipGroup * Schema_MarkHelperFn(void); /* linkage=_ZN16CMotionClipGroup19Schema_MarkHelperFnEv */
	void SetTagID(class CMotionClipGroup *, class AnimTagID); /* linkage=_ZN16CMotionClipGroup8SetTagIDE9AnimTagID */
	class CMotionClip * GetClipInternal(class CMotionClipGroup *, int); /* linkage=_ZN16CMotionClipGroup15GetClipInternalEi */
};

// <01353790> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 48892
} /* size: 0, variables: 2 */

// <01353789> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0135371E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:17
// function call: 1
void CMotionClipGroup::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 17
} /* size: 0, inline expansions: 1 (0 bytes) */

// <011259D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.h:22
void CMotionClipGroup::CMotionClipGroup()
{
} /* size: 0 */


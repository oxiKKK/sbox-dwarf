
//
// animgraph/pathstatuscondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A64E8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:10
// function calls: 8
void CPathStatusCondition::~CPathStatusCondition()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 15
	CAnimStateConditionBase::~CAnimStateConditionBase(); // 10
} /* size: 57, inline expansions: 8 (144 bytes) */

// <01A64C06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:10
// function calls: 13
void CPathStatusCondition::~CPathStatusCondition()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 46
	IAnimStateCondition::~IAnimStateCondition(); // 15
	CAnimStateConditionBase::~CAnimStateConditionBase(); // 10
	CPathStatusCondition::~CPathStatusCondition(); // 10
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A64BEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:10
inline void CPathStatusCondition::~CPathStatusCondition()
{
} /* size: 0 */

// <01A54A2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:10
// member functions: 65
// member variables: 4
// static member variables: 2
// vtable entries: 15
// class size: 48
class CPathStatusCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CPathStatusCondition(CPathStatusCondition* , CPathStatusCondition& );
	void CPathStatusCondition(CPathStatusCondition* , const CPathStatusCondition& );
private:
	static class CClassInfoT<CPathStatusCondition> m_classInfoCPathStatusCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16 */
	virtual const CClassInfo& GetTypeInfo(const CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16 */
	virtual void* CastToBase(CPathStatusCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16 */
	virtual const void* CastToBase(const CPathStatusCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	CPathStatusCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	void Schema_CompileTimeVerificationFunction(CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:14 */
	void KV3TransferPolymorphicClassname(const CPathStatusCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:14 */
	CPathStatusCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:14 */
	virtual void KV3TransferSave(const CPathStatusCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:14 */
	virtual void KV3TransferLoad(CPathStatusCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:14 */
	void KV3TransferSave_CPathStatusCondition(const CPathStatusCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:14 */
	void KV3TransferLoad_CPathStatusCondition(CPathStatusCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:24 */
	void CPathStatusCondition(CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:31 */
	virtual void GetSourceOptions(const CPathStatusCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:40 */
	virtual int GetSourceIndex(const CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:46 */
	virtual void SetSourceIndex(CPathStatusCondition* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:52 */
	virtual uint8 GetComparisonOpMask(const CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:59 */
	virtual CAnimVariant GetComparisonValue(const CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:65 */
	virtual void SetComparisonValue(CPathStatusCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:71 */
	virtual CUtlString GetDescription(const CPathStatusCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:78 */
	virtual void InitUpdateData(CPathStatusCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:86 */
	virtual const IConditionUpdater* GetUpdateData(const CPathStatusCondition* , CPackedData& );
	PathStatusOptions m_optionToCheck; /* 36 4 */
	bool m_bComparisonValue; /* 40 1 */
	CPackedHandle<CPathStatusConditionUpdater> m_hUpdateData; /* 44 4 */
	virtual void ~CPathStatusCondition(CPathStatusCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CPathStatusCondition  *, CPackedData &); /* linkage=_ZNK20CPathStatusCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CPathStatusCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN20CPathStatusCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlString GetDescription(const class CPathStatusCondition  *); /* linkage=_ZNK20CPathStatusCondition14GetDescriptionEv */
	virtual void SetComparisonValue(class CPathStatusCondition *, const class CAnimVariant  &); /* linkage=_ZN20CPathStatusCondition18SetComparisonValueERK12CAnimVariant */
	virtual class CAnimVariant GetComparisonValue(const class CPathStatusCondition  *); /* linkage=_ZNK20CPathStatusCondition18GetComparisonValueEv */
	virtual uint8 GetComparisonOpMask(const class CPathStatusCondition  *); /* linkage=_ZNK20CPathStatusCondition19GetComparisonOpMaskEv */
	virtual void SetSourceIndex(class CPathStatusCondition *, int); /* linkage=_ZN20CPathStatusCondition14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CPathStatusCondition  *); /* linkage=_ZNK20CPathStatusCondition14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CPathStatusCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK20CPathStatusCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CPathStatusCondition  *, class ClassID); /* linkage=_ZNK20CPathStatusCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CPathStatusCondition *, class ClassID); /* linkage=_ZN20CPathStatusCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7e133> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16 */
	virtual const class CClassInfo  & GetTypeInfo(const class CPathStatusCondition  *); /* linkage=_ZNK20CPathStatusCondition11GetTypeInfoEv */
	void CPathStatusCondition(class CPathStatusCondition *); /* linkage=_ZN20CPathStatusConditionC4Ev */
	void KV3TransferLoad_CPathStatusCondition(class CPathStatusCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CPathStatusCondition36KV3TransferLoad_CPathStatusConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CPathStatusCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CPathStatusCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPathStatusCondition(const class CPathStatusCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CPathStatusCondition36KV3TransferSave_CPathStatusConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CPathStatusCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CPathStatusCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b7635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/pathstatuscondition_h_schema.gen_cpp:112 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CPathStatusCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CPathStatusCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CPathStatusCondition(class CPathStatusCondition *); /* linkage=_ZN20CPathStatusConditionD4Ev */
	class CPathStatusCondition & operator=(class CPathStatusCondition *, const class CPathStatusCondition  &); /* linkage=_ZN20CPathStatusConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CPathStatusCondition *); /* linkage=_ZN20CPathStatusCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b26ff> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/pathstatuscondition.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPathStatusCondition  *); /* linkage=_ZNK20CPathStatusCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CPathStatusCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CPathStatusCondition17GetPrimaryBindingEv */
	void CPathStatusCondition(class CPathStatusCondition *, class CPathStatusCondition &); /* linkage=_ZN20CPathStatusConditionC4EOS_ */
	void CPathStatusCondition(class CPathStatusCondition *, const class CPathStatusCondition  &); /* linkage=_ZN20CPathStatusConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20CPathStatusCondition8MyTypeIDEv */
	/* <1a7fbb4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.cpp:16 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20CPathStatusCondition10MyTypeInfoEv */
	class CPathStatusCondition * Schema_MarkHelperFn(void); /* linkage=_ZN20CPathStatusCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CPathStatusCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CPathStatusCondition  *, char &); /* linkage=_ZN20CPathStatusCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CPathStatusCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CPathStatusCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A7066E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 23116
} /* size: 0, variables: 2 */

// <01A70668> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A705FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathstatuscondition.h:13
// function call: 1
void CPathStatusCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */


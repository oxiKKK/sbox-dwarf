
//
// animgraph/tagcondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A652F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:11
// function calls: 8
void CTagCondition::~CTagCondition()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 15
	CAnimStateConditionBase::~CAnimStateConditionBase(); // 11
} /* size: 57, inline expansions: 8 (144 bytes) */

// <01A6506F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:11
// function calls: 13
void CTagCondition::~CTagCondition()
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
	CAnimStateConditionBase::~CAnimStateConditionBase(); // 11
	CTagCondition::~CTagCondition(); // 11
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A65053> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:11
inline void CTagCondition::~CTagCondition()
{
} /* size: 0 */

// <01A55004> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:11
// member functions: 65
// member variables: 4
// static member variables: 2
// vtable entries: 15
// class size: 48
class CTagCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CTagCondition(CTagCondition* , CTagCondition& );
	void CTagCondition(CTagCondition* , const CTagCondition& );
private:
	static class CClassInfoT<CTagCondition> m_classInfoCTagCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10 */
	virtual void* CastToBase(CTagCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10 */
	virtual const void* CastToBase(const CTagCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	CTagCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	void Schema_CompileTimeVerificationFunction(CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:15 */
	void KV3TransferPolymorphicClassname(const CTagCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:15 */
	CTagCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:15 */
	virtual void KV3TransferSave(const CTagCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:15 */
	virtual void KV3TransferLoad(CTagCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:15 */
	void KV3TransferSave_CTagCondition(const CTagCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:15 */
	void KV3TransferLoad_CTagCondition(CTagCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:18 */
	void CTagCondition(CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:25 */
	virtual void GetSourceOptions(const CTagCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:39 */
	virtual int GetSourceIndex(const CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:46 */
	virtual void SetSourceIndex(CTagCondition* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:69 */
	virtual CAnimVariant GetComparisonValue(const CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:75 */
	virtual void SetComparisonValue(CTagCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:81 */
	virtual uint8 GetComparisonOpMask(const CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:87 */
	virtual CUtlString GetDescription(const CTagCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:104 */
	virtual void InitUpdateData(CTagCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:113 */
	virtual const IConditionUpdater* GetUpdateData(const CTagCondition* , CPackedData& );
	AnimTagID m_tagID; /* 36 4 */
	bool m_comparisonValue; /* 40 1 */
	CPackedHandle<CTagConditionUpdater> m_hUpdateData; /* 44 4 */
	virtual void ~CTagCondition(CTagCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CTagCondition  *, CPackedData &); /* linkage=_ZNK13CTagCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CTagCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN13CTagCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlString GetDescription(const class CTagCondition  *); /* linkage=_ZNK13CTagCondition14GetDescriptionEv */
	virtual void SetComparisonValue(class CTagCondition *, const class CAnimVariant  &); /* linkage=_ZN13CTagCondition18SetComparisonValueERK12CAnimVariant */
	virtual class CAnimVariant GetComparisonValue(const class CTagCondition  *); /* linkage=_ZNK13CTagCondition18GetComparisonValueEv */
	virtual uint8 GetComparisonOpMask(const class CTagCondition  *); /* linkage=_ZNK13CTagCondition19GetComparisonOpMaskEv */
	/* <1a7e635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:46 */
	virtual void SetSourceIndex(class CTagCondition *, int); /* linkage=_ZN13CTagCondition14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CTagCondition  *); /* linkage=_ZNK13CTagCondition14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CTagCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK13CTagCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CTagCondition  *, class ClassID); /* linkage=_ZNK13CTagCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CTagCondition *, class ClassID); /* linkage=_ZN13CTagCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7e15d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CTagCondition  *); /* linkage=_ZNK13CTagCondition11GetTypeInfoEv */
	void CTagCondition(class CTagCondition *); /* linkage=_ZN13CTagConditionC4Ev */
	void KV3TransferLoad_CTagCondition(class CTagCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN13CTagCondition29KV3TransferLoad_CTagConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CTagCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN13CTagCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CTagCondition(const class CTagCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CTagCondition29KV3TransferSave_CTagConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CTagCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CTagCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b7683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/tagcondition_h_schema.gen_cpp:129 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN13CTagCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN13CTagCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CTagCondition(class CTagCondition *); /* linkage=_ZN13CTagConditionD4Ev */
	class CTagCondition & operator=(class CTagCondition *, const class CTagCondition  &); /* linkage=_ZN13CTagConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CTagCondition *); /* linkage=_ZN13CTagCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b27b2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/tagcondition.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CTagCondition  *); /* linkage=_ZNK13CTagCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN13CTagCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN13CTagCondition17GetPrimaryBindingEv */
	void CTagCondition(class CTagCondition *, class CTagCondition &); /* linkage=_ZN13CTagConditionC4EOS_ */
	void CTagCondition(class CTagCondition *, const class CTagCondition  &); /* linkage=_ZN13CTagConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN13CTagCondition8MyTypeIDEv */
	/* <1a7fbd2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN13CTagCondition10MyTypeInfoEv */
	class CTagCondition * Schema_MarkHelperFn(void); /* linkage=_ZN13CTagCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN13CTagCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CTagCondition  *, char &); /* linkage=_ZN13CTagCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CTagCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN13CTagCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A6F76C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 22927
} /* size: 0, variables: 2 */

// <01A6F766> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A6F6FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagcondition.h:14
// function call: 1
void CTagCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


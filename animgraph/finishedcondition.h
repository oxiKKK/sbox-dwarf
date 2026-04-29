
//
// animgraph/finishedcondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A64153> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:10
// function calls: 8
void CFinishedCondition::~CFinishedCondition()
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

// <01A63ECB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:10
// function calls: 13
void CFinishedCondition::~CFinishedCondition()
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
	CFinishedCondition::~CFinishedCondition(); // 10
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A63EAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:10
inline void CFinishedCondition::~CFinishedCondition()
{
} /* size: 0 */

// <01A51B81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:10
// member functions: 65
// member variables: 4
// static member variables: 2
// vtable entries: 15
// class size: 48
class CFinishedCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CFinishedCondition(CFinishedCondition* , CFinishedCondition& );
	void CFinishedCondition(CFinishedCondition* , const CFinishedCondition& );
private:
	static class CClassInfoT<CFinishedCondition> m_classInfoCFinishedCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13 */
	virtual void* CastToBase(CFinishedCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13 */
	virtual const void* CastToBase(const CFinishedCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	CFinishedCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	void Schema_CompileTimeVerificationFunction(CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:14 */
	void KV3TransferPolymorphicClassname(const CFinishedCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:14 */
	CFinishedCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:14 */
	virtual void KV3TransferSave(const CFinishedCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:14 */
	virtual void KV3TransferLoad(CFinishedCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:14 */
	void KV3TransferSave_CFinishedCondition(const CFinishedCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:14 */
	void KV3TransferLoad_CFinishedCondition(CFinishedCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:21 */
	void CFinishedCondition(CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:28 */
	virtual void GetSourceOptions(const CFinishedCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:57 */
	virtual int GetSourceIndex(const CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:63 */
	virtual void SetSourceIndex(CFinishedCondition* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:69 */
	virtual uint8 GetComparisonOpMask(const CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:76 */
	virtual CAnimVariant GetComparisonValue(const CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:82 */
	virtual void SetComparisonValue(CFinishedCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:88 */
	virtual CUtlString GetDescription(const CFinishedCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:95 */
	virtual void InitUpdateData(CFinishedCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:148 */
	virtual const IConditionUpdater* GetUpdateData(const CFinishedCondition* , CPackedData& );
	FinishedConditionOption m_option; /* 36 4 */
	bool m_bIsFinished; /* 40 1 */
	CPackedHandle<CFinishedConditionUpdater> m_hUpdateData; /* 44 4 */
	virtual void ~CFinishedCondition(CFinishedCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CFinishedCondition  *, CPackedData &); /* linkage=_ZNK18CFinishedCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CFinishedCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN18CFinishedCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlString GetDescription(const class CFinishedCondition  *); /* linkage=_ZNK18CFinishedCondition14GetDescriptionEv */
	virtual void SetComparisonValue(class CFinishedCondition *, const class CAnimVariant  &); /* linkage=_ZN18CFinishedCondition18SetComparisonValueERK12CAnimVariant */
	virtual class CAnimVariant GetComparisonValue(const class CFinishedCondition  *); /* linkage=_ZNK18CFinishedCondition18GetComparisonValueEv */
	virtual uint8 GetComparisonOpMask(const class CFinishedCondition  *); /* linkage=_ZNK18CFinishedCondition19GetComparisonOpMaskEv */
	virtual void SetSourceIndex(class CFinishedCondition *, int); /* linkage=_ZN18CFinishedCondition14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CFinishedCondition  *); /* linkage=_ZNK18CFinishedCondition14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CFinishedCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK18CFinishedCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CFinishedCondition  *, class ClassID); /* linkage=_ZNK18CFinishedCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFinishedCondition *, class ClassID); /* linkage=_ZN18CFinishedCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7dfcf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFinishedCondition  *); /* linkage=_ZNK18CFinishedCondition11GetTypeInfoEv */
	void CFinishedCondition(class CFinishedCondition *); /* linkage=_ZN18CFinishedConditionC4Ev */
	void KV3TransferLoad_CFinishedCondition(class CFinishedCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN18CFinishedCondition34KV3TransferLoad_CFinishedConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFinishedCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN18CFinishedCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFinishedCondition(const class CFinishedCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CFinishedCondition34KV3TransferSave_CFinishedConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFinishedCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CFinishedCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b6cba> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/finishedcondition_h_schema.gen_cpp:112 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CFinishedCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CFinishedCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFinishedCondition(class CFinishedCondition *); /* linkage=_ZN18CFinishedConditionD4Ev */
	class CFinishedCondition & operator=(class CFinishedCondition *, const class CFinishedCondition  &); /* linkage=_ZN18CFinishedConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFinishedCondition *); /* linkage=_ZN18CFinishedCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b24e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/finishedcondition.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFinishedCondition  *); /* linkage=_ZNK18CFinishedCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CFinishedCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CFinishedCondition17GetPrimaryBindingEv */
	void CFinishedCondition(class CFinishedCondition *, class CFinishedCondition &); /* linkage=_ZN18CFinishedConditionC4EOS_ */
	void CFinishedCondition(class CFinishedCondition *, const class CFinishedCondition  &); /* linkage=_ZN18CFinishedConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CFinishedCondition8MyTypeIDEv */
	/* <1a7fb5a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CFinishedCondition10MyTypeInfoEv */
	class CFinishedCondition * Schema_MarkHelperFn(void); /* linkage=_ZN18CFinishedCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CFinishedCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CFinishedCondition  *, char &); /* linkage=_ZN18CFinishedCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CFinishedCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CFinishedCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A75B17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 23062
} /* size: 0, variables: 2 */

// <01A75B11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A75AA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedcondition.h:13
// function call: 1
void CFinishedCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */


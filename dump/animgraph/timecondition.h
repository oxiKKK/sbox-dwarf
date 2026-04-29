
//
// animgraph/timecondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A65760> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:11
// function calls: 8
void CTimeCondition::~CTimeCondition()
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

// <01A654D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:11
// function calls: 13
void CTimeCondition::~CTimeCondition()
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
	CTimeCondition::~CTimeCondition(); // 11
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A654BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:11
inline void CTimeCondition::~CTimeCondition()
{
} /* size: 0 */

// <01A555F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:11
// member functions: 63
// member variables: 3
// static member variables: 2
// vtable entries: 14
// class size: 48
class CTimeCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CTimeCondition(CTimeCondition* , CTimeCondition& );
	void CTimeCondition(CTimeCondition* , const CTimeCondition& );
private:
	static class CClassInfoT<CTimeCondition> m_classInfoCTimeCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CTimeCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8 */
	virtual void* CastToBase(CTimeCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8 */
	virtual const void* CastToBase(const CTimeCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	CTimeCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	void Schema_CompileTimeVerificationFunction(CTimeCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CTimeCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:15 */
	void KV3TransferPolymorphicClassname(const CTimeCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:15 */
	CTimeCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:15 */
	virtual void KV3TransferSave(const CTimeCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:15 */
	virtual void KV3TransferLoad(CTimeCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:15 */
	void KV3TransferSave_CTimeCondition(const CTimeCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:15 */
	void KV3TransferLoad_CTimeCondition(CTimeCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:16 */
	void CTimeCondition(CTimeCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:24 */
	virtual void GetSourceOptions(const CTimeCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:30 */
	virtual int GetSourceIndex(const CTimeCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:37 */
	virtual void SetSourceIndex(CTimeCondition* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:44 */
	virtual CAnimVariant GetComparisonValue(const CTimeCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:50 */
	virtual void SetComparisonValue(CTimeCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:56 */
	virtual CUtlString GetDescription(const CTimeCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:64 */
	virtual void InitUpdateData(CTimeCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:70 */
	virtual const IConditionUpdater* GetUpdateData(const CTimeCondition* , CPackedData& );
	float m_comparisonValue; /* 36 4 */
	CPackedHandle<CTimeConditionUpdater> m_hUpdateData; /* 40 4 */
	virtual void ~CTimeCondition(CTimeCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CTimeCondition  *, CPackedData &); /* linkage=_ZNK14CTimeCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CTimeCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN14CTimeCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlString GetDescription(const class CTimeCondition  *); /* linkage=_ZNK14CTimeCondition14GetDescriptionEv */
	virtual void SetComparisonValue(class CTimeCondition *, const class CAnimVariant  &); /* linkage=_ZN14CTimeCondition18SetComparisonValueERK12CAnimVariant */
	/* <1a7e1b1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:44 */
	virtual class CAnimVariant GetComparisonValue(const class CTimeCondition  *); /* linkage=_ZNK14CTimeCondition18GetComparisonValueEv */
	/* <1a7e34b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:37 */
	virtual void SetSourceIndex(class CTimeCondition *, int); /* linkage=_ZN14CTimeCondition14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CTimeCondition  *); /* linkage=_ZNK14CTimeCondition14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CTimeCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK14CTimeCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CTimeCondition  *, class ClassID); /* linkage=_ZNK14CTimeCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CTimeCondition *, class ClassID); /* linkage=_ZN14CTimeCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7e187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CTimeCondition  *); /* linkage=_ZNK14CTimeCondition11GetTypeInfoEv */
	void CTimeCondition(class CTimeCondition *); /* linkage=_ZN14CTimeConditionC4Ev */
	void KV3TransferLoad_CTimeCondition(class CTimeCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN14CTimeCondition30KV3TransferLoad_CTimeConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CTimeCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN14CTimeCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CTimeCondition(const class CTimeCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CTimeCondition30KV3TransferSave_CTimeConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CTimeCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CTimeCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b76d1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/timecondition_h_schema.gen_cpp:117 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CTimeCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CTimeCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CTimeCondition(class CTimeCondition *); /* linkage=_ZN14CTimeConditionD4Ev */
	class CTimeCondition & operator=(class CTimeCondition *, const class CTimeCondition  &); /* linkage=_ZN14CTimeConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CTimeCondition *); /* linkage=_ZN14CTimeCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b2865> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/timecondition.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CTimeCondition  *); /* linkage=_ZNK14CTimeCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CTimeCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CTimeCondition17GetPrimaryBindingEv */
	void CTimeCondition(class CTimeCondition *, class CTimeCondition &); /* linkage=_ZN14CTimeConditionC4EOS_ */
	void CTimeCondition(class CTimeCondition *, const class CTimeCondition  &); /* linkage=_ZN14CTimeConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14CTimeCondition8MyTypeIDEv */
	/* <1a7fbf0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14CTimeCondition10MyTypeInfoEv */
	class CTimeCondition * Schema_MarkHelperFn(void); /* linkage=_ZN14CTimeCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CTimeCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CTimeCondition  *, char &); /* linkage=_ZN14CTimeCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CTimeCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CTimeCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A6E30A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 22954
} /* size: 0, variables: 2 */

// <01A6E304> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A6E298> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timecondition.h:14
// function call: 1
void CTimeCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


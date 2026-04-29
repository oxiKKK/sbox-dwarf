
//
// animgraph/cyclecondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A63CA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:10
// function calls: 8
void CCycleCondition::~CCycleCondition()
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

// <01A63A18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:10
// function calls: 13
void CCycleCondition::~CCycleCondition()
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
	CCycleCondition::~CCycleCondition(); // 10
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A639FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:10
inline void CCycleCondition::~CCycleCondition()
{
} /* size: 0 */

// <01A5157B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:10
// member functions: 63
// member variables: 6
// static member variables: 2
// vtable entries: 14
// class size: 56
class CCycleCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CCycleCondition(CCycleCondition* , CCycleCondition& );
	void CCycleCondition(CCycleCondition* , const CCycleCondition& );
private:
	static class CClassInfoT<CCycleCondition> m_classInfoCCycleCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9 */
	virtual void* CastToBase(CCycleCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9 */
	virtual const void* CastToBase(const CCycleCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	CCycleCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	void Schema_CompileTimeVerificationFunction(CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:14 */
	void KV3TransferPolymorphicClassname(const CCycleCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:14 */
	CCycleCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:14 */
	virtual void KV3TransferSave(const CCycleCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:14 */
	virtual void KV3TransferLoad(CCycleCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:14 */
	void KV3TransferSave_CCycleCondition(const CCycleCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:14 */
	void KV3TransferLoad_CCycleCondition(CCycleCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:17 */
	void CCycleCondition(CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:24 */
	virtual ComparisonValueType GetComparisonValueType(const CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:30 */
	virtual void SetComparisonValueType(CCycleCondition* , ComparisonValueType);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:36 */
	virtual uint8 GetComparisonValueTypeMask(const CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:42 */
	virtual CAnimVariant GetComparisonValue(const CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:70 */
	virtual void SetComparisonValue(CCycleCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:96 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const CCycleCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:118 */
	virtual void InitUpdateData(CCycleCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:141 */
	virtual const IConditionUpdater* GetUpdateData(const CCycleCondition* , CPackedData& );
	float m_comparisonValue; /* 36 4 */
	int m_comparisonValueType; /* 40 4 */
	ControlValue m_comparisonControlValue; /* 44 4 */
	AnimParamID m_comparisonParamID; /* 48 4 */
	CPackedHandle<CCycleConditionUpdater> m_hUpdateData; /* 52 4 */
	virtual void ~CCycleCondition(CCycleCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CCycleCondition  *, CPackedData &); /* linkage=_ZNK15CCycleCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CCycleCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN15CCycleCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const class CCycleCondition  *); /* linkage=_ZNK15CCycleCondition25GetComparisonValueOptionsEv */
	virtual void SetComparisonValue(class CCycleCondition *, const class CAnimVariant  &); /* linkage=_ZN15CCycleCondition18SetComparisonValueERK12CAnimVariant */
	virtual class CAnimVariant GetComparisonValue(const class CCycleCondition  *); /* linkage=_ZNK15CCycleCondition18GetComparisonValueEv */
	virtual uint8 GetComparisonValueTypeMask(const class CCycleCondition  *); /* linkage=_ZNK15CCycleCondition26GetComparisonValueTypeMaskEv */
	virtual void SetComparisonValueType(class CCycleCondition *, enum ComparisonValueType); /* linkage=_ZN15CCycleCondition22SetComparisonValueTypeE19ComparisonValueType */
	virtual enum ComparisonValueType GetComparisonValueType(const class CCycleCondition  *); /* linkage=_ZNK15CCycleCondition22GetComparisonValueTypeEv */
	virtual const void  * CastToBase(const class CCycleCondition  *, class ClassID); /* linkage=_ZNK15CCycleCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CCycleCondition *, class ClassID); /* linkage=_ZN15CCycleCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7dfa5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CCycleCondition  *); /* linkage=_ZNK15CCycleCondition11GetTypeInfoEv */
	void CCycleCondition(class CCycleCondition *); /* linkage=_ZN15CCycleConditionC4Ev */
	void KV3TransferLoad_CCycleCondition(class CCycleCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CCycleCondition31KV3TransferLoad_CCycleConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CCycleCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CCycleCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CCycleCondition(const class CCycleCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CCycleCondition31KV3TransferSave_CCycleConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CCycleCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CCycleCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b6c6c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/cyclecondition_h_schema.gen_cpp:118 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CCycleCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CCycleCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CCycleCondition(class CCycleCondition *); /* linkage=_ZN15CCycleConditionD4Ev */
	class CCycleCondition & operator=(class CCycleCondition *, const class CCycleCondition  &); /* linkage=_ZN15CCycleConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CCycleCondition *); /* linkage=_ZN15CCycleCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b2433> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/cyclecondition.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCycleCondition  *); /* linkage=_ZNK15CCycleCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CCycleCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CCycleCondition17GetPrimaryBindingEv */
	void CCycleCondition(class CCycleCondition *, class CCycleCondition &); /* linkage=_ZN15CCycleConditionC4EOS_ */
	void CCycleCondition(class CCycleCondition *, const class CCycleCondition  &); /* linkage=_ZN15CCycleConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN15CCycleCondition8MyTypeIDEv */
	/* <1a7fb3c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN15CCycleCondition10MyTypeInfoEv */
	class CCycleCondition * Schema_MarkHelperFn(void); /* linkage=_ZN15CCycleCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CCycleCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CCycleCondition  *, char &); /* linkage=_ZN15CCycleCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CCycleCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CCycleCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A776C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 22981
} /* size: 0, variables: 2 */

// <01A776C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A77654> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecondition.h:13
// function call: 1
void CCycleCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */


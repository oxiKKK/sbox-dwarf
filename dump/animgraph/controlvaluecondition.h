
//
// animgraph/controlvaluecondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A63837> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:10
// function calls: 8
void CControlValueCondition::~CControlValueCondition()
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

// <01A635AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:10
// function calls: 13
void CControlValueCondition::~CControlValueCondition()
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
	CControlValueCondition::~CControlValueCondition(); // 10
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A63593> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:10
inline void CControlValueCondition::~CControlValueCondition()
{
} /* size: 0 */

// <01A4EF47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:10
// member functions: 71
// member variables: 7
// static member variables: 2
// vtable entries: 18
// class size: 64
class CControlValueCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CControlValueCondition(CControlValueCondition* , CControlValueCondition& );
	void CControlValueCondition(CControlValueCondition* , const CControlValueCondition& );
private:
	static class CClassInfoT<CControlValueCondition> m_classInfoCControlValueCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12 */
	virtual void* CastToBase(CControlValueCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12 */
	virtual const void* CastToBase(const CControlValueCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	CControlValueCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	void Schema_CompileTimeVerificationFunction(CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:14 */
	void KV3TransferPolymorphicClassname(const CControlValueCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:14 */
	CControlValueCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:14 */
	virtual void KV3TransferSave(const CControlValueCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:14 */
	virtual void KV3TransferLoad(CControlValueCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:14 */
	void KV3TransferSave_CControlValueCondition(const CControlValueCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:14 */
	void KV3TransferLoad_CControlValueCondition(CControlValueCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:20 */
	void CControlValueCondition(CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:27 */
	virtual void GetSourceOptions(const CControlValueCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:38 */
	virtual int GetSourceIndex(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:44 */
	virtual void SetSourceIndex(CControlValueCondition* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:57 */
	virtual ComparisonValueType GetComparisonValueType(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:63 */
	virtual void SetComparisonValueType(CControlValueCondition* , ComparisonValueType);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:69 */
	virtual uint8 GetComparisonValueTypeMask(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:75 */
	virtual CAnimVariant GetComparisonValue(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:102 */
	virtual void SetComparisonValue(CControlValueCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:126 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:148 */
	virtual CUtlString GetDescription(const CControlValueCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:187 */
	virtual void InitUpdateData(CControlValueCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:213 */
	virtual const IConditionUpdater* GetUpdateData(const CControlValueCondition* , CPackedData& );
	ControlValue m_sourceControlValue; /* 36 4 */
	int m_comparisonValueType; /* 40 4 */
	float m_comparisonFixedValue; /* 44 4 */
	ControlValue m_comparisonControlValue; /* 48 4 */
	AnimParamID m_comparisonParamID; /* 52 4 */
	CPackedHandle<CControlValueConditionUpdater> m_hUpdateData; /* 56 4 */
	virtual void ~CControlValueCondition(CControlValueCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CControlValueCondition  *, CPackedData &); /* linkage=_ZNK22CControlValueCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CControlValueCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN22CControlValueCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlString GetDescription(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition14GetDescriptionEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition25GetComparisonValueOptionsEv */
	virtual void SetComparisonValue(class CControlValueCondition *, const class CAnimVariant  &); /* linkage=_ZN22CControlValueCondition18SetComparisonValueERK12CAnimVariant */
	virtual class CAnimVariant GetComparisonValue(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition18GetComparisonValueEv */
	virtual uint8 GetComparisonValueTypeMask(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition26GetComparisonValueTypeMaskEv */
	virtual void SetComparisonValueType(class CControlValueCondition *, enum ComparisonValueType); /* linkage=_ZN22CControlValueCondition22SetComparisonValueTypeE19ComparisonValueType */
	virtual enum ComparisonValueType GetComparisonValueType(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition22GetComparisonValueTypeEv */
	virtual void SetSourceIndex(class CControlValueCondition *, int); /* linkage=_ZN22CControlValueCondition14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CControlValueCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK22CControlValueCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CControlValueCondition  *, class ClassID); /* linkage=_ZNK22CControlValueCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CControlValueCondition *, class ClassID); /* linkage=_ZN22CControlValueCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7df7b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition11GetTypeInfoEv */
	void CControlValueCondition(class CControlValueCondition *); /* linkage=_ZN22CControlValueConditionC4Ev */
	void KV3TransferLoad_CControlValueCondition(class CControlValueCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN22CControlValueCondition38KV3TransferLoad_CControlValueConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CControlValueCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN22CControlValueCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CControlValueCondition(const class CControlValueCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CControlValueCondition38KV3TransferSave_CControlValueConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CControlValueCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CControlValueCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b6c1e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/controlvaluecondition_h_schema.gen_cpp:121 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN22CControlValueCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN22CControlValueCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CControlValueCondition(class CControlValueCondition *); /* linkage=_ZN22CControlValueConditionD4Ev */
	class CControlValueCondition & operator=(class CControlValueCondition *, const class CControlValueCondition  &); /* linkage=_ZN22CControlValueConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CControlValueCondition *); /* linkage=_ZN22CControlValueCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b2380> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/controlvaluecondition.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CControlValueCondition  *); /* linkage=_ZNK22CControlValueCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN22CControlValueCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN22CControlValueCondition17GetPrimaryBindingEv */
	void CControlValueCondition(class CControlValueCondition *, class CControlValueCondition &); /* linkage=_ZN22CControlValueConditionC4EOS_ */
	void CControlValueCondition(class CControlValueCondition *, const class CControlValueCondition  &); /* linkage=_ZN22CControlValueConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN22CControlValueCondition8MyTypeIDEv */
	/* <1a7fb1e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN22CControlValueCondition10MyTypeInfoEv */
	class CControlValueCondition * Schema_MarkHelperFn(void); /* linkage=_ZN22CControlValueCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN22CControlValueCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CControlValueCondition  *, char &); /* linkage=_ZN22CControlValueCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CControlValueCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22CControlValueCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A7A2AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 23165
} /* size: 0, variables: 2 */

// <01A7A2A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A7A23C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvaluecondition.h:13
// function call: 1
void CControlValueCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */


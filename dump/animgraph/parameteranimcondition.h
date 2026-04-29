
//
// animgraph/parameteranimcondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A64A25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:10
// function calls: 8
void CParameterAnimCondition::~CParameterAnimCondition()
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

// <01A6479D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:10
// function calls: 13
void CParameterAnimCondition::~CParameterAnimCondition()
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
	CParameterAnimCondition::~CParameterAnimCondition(); // 10
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A64781> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:10
inline void CParameterAnimCondition::~CParameterAnimCondition()
{
} /* size: 0 */

// <01A5442A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:10
// member functions: 67
// member variables: 4
// static member variables: 2
// vtable entries: 16
// class size: 64
class CParameterAnimCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CParameterAnimCondition(CParameterAnimCondition* , CParameterAnimCondition& );
	void CParameterAnimCondition(CParameterAnimCondition* , const CParameterAnimCondition& );
private:
	static class CClassInfoT<CParameterAnimCondition> m_classInfoCParameterAnimCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12 */
	virtual void* CastToBase(CParameterAnimCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12 */
	virtual const void* CastToBase(const CParameterAnimCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	CParameterAnimCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	void Schema_CompileTimeVerificationFunction(CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:14 */
	void KV3TransferPolymorphicClassname(const CParameterAnimCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:14 */
	CParameterAnimCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:14 */
	virtual void KV3TransferSave(const CParameterAnimCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:14 */
	virtual void KV3TransferLoad(CParameterAnimCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:14 */
	void KV3TransferSave_CParameterAnimCondition(const CParameterAnimCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:14 */
	void KV3TransferLoad_CParameterAnimCondition(CParameterAnimCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:20 */
	void CParameterAnimCondition(CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:28 */
	virtual void GetSourceOptions(const CParameterAnimCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:34 */
	virtual int GetSourceIndex(const CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:40 */
	virtual void SetSourceIndex(CParameterAnimCondition* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:71 */
	virtual CAnimVariant GetComparisonValue(const CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:77 */
	virtual void SetComparisonValue(CParameterAnimCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:83 */
	virtual uint8 GetComparisonOpMask(const CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:101 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:119 */
	virtual CUtlString GetDescription(const CParameterAnimCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:133 */
	virtual void InitUpdateData(CParameterAnimCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:142 */
	virtual const IConditionUpdater* GetUpdateData(const CParameterAnimCondition* , CPackedData& );
	AnimParamID m_paramID; /* 36 4 */
	CAnimVariant m_comparisonValue; /* 40 17 */
	CPackedHandle<CParamConditionUpdater> m_hUpdateData; /* 60 4 */
	virtual void ~CParameterAnimCondition(CParameterAnimCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CParameterAnimCondition  *, CPackedData &); /* linkage=_ZNK23CParameterAnimCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CParameterAnimCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN23CParameterAnimCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlString GetDescription(const class CParameterAnimCondition  *); /* linkage=_ZNK23CParameterAnimCondition14GetDescriptionEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const class CParameterAnimCondition  *); /* linkage=_ZNK23CParameterAnimCondition25GetComparisonValueOptionsEv */
	virtual void SetComparisonValue(class CParameterAnimCondition *, const class CAnimVariant  &); /* linkage=_ZN23CParameterAnimCondition18SetComparisonValueERK12CAnimVariant */
	virtual class CAnimVariant GetComparisonValue(const class CParameterAnimCondition  *); /* linkage=_ZNK23CParameterAnimCondition18GetComparisonValueEv */
	/* <1a7e0d9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:83 */
	virtual uint8 GetComparisonOpMask(const class CParameterAnimCondition  *); /* linkage=_ZNK23CParameterAnimCondition19GetComparisonOpMaskEv */
	/* <1a7eaa6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:40 */
	virtual void SetSourceIndex(class CParameterAnimCondition *, int); /* linkage=_ZN23CParameterAnimCondition14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CParameterAnimCondition  *); /* linkage=_ZNK23CParameterAnimCondition14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CParameterAnimCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK23CParameterAnimCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CParameterAnimCondition  *, class ClassID); /* linkage=_ZNK23CParameterAnimCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CParameterAnimCondition *, class ClassID); /* linkage=_ZN23CParameterAnimCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7e0af> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CParameterAnimCondition  *); /* linkage=_ZNK23CParameterAnimCondition11GetTypeInfoEv */
	void CParameterAnimCondition(class CParameterAnimCondition *); /* linkage=_ZN23CParameterAnimConditionC4Ev */
	void KV3TransferLoad_CParameterAnimCondition(class CParameterAnimCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN23CParameterAnimCondition39KV3TransferLoad_CParameterAnimConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CParameterAnimCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN23CParameterAnimCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CParameterAnimCondition(const class CParameterAnimCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CParameterAnimCondition39KV3TransferSave_CParameterAnimConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CParameterAnimCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CParameterAnimCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b75e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/parameteranimcondition_h_schema.gen_cpp:129 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN23CParameterAnimCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN23CParameterAnimCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CParameterAnimCondition(class CParameterAnimCondition *); /* linkage=_ZN23CParameterAnimConditionD4Ev */
	class CParameterAnimCondition & operator=(class CParameterAnimCondition *, const class CParameterAnimCondition  &); /* linkage=_ZN23CParameterAnimConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CParameterAnimCondition *); /* linkage=_ZN23CParameterAnimCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b264c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/parameteranimcondition.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CParameterAnimCondition  *); /* linkage=_ZNK23CParameterAnimCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN23CParameterAnimCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN23CParameterAnimCondition17GetPrimaryBindingEv */
	void CParameterAnimCondition(class CParameterAnimCondition *, class CParameterAnimCondition &); /* linkage=_ZN23CParameterAnimConditionC4EOS_ */
	void CParameterAnimCondition(class CParameterAnimCondition *, const class CParameterAnimCondition  &); /* linkage=_ZN23CParameterAnimConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23CParameterAnimCondition8MyTypeIDEv */
	/* <1a7fb96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23CParameterAnimCondition10MyTypeInfoEv */
	class CParameterAnimCondition * Schema_MarkHelperFn(void); /* linkage=_ZN23CParameterAnimCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN23CParameterAnimCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CParameterAnimCondition  *, char &); /* linkage=_ZN23CParameterAnimCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CParameterAnimCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN23CParameterAnimCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A72808> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 23192
} /* size: 0, variables: 2 */

// <01A72802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A72796> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/parameteranimcondition.h:13
// function call: 1
void CParameterAnimCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/groundcondition.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01A645BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:11
// function calls: 8
void CGroundCondition::~CGroundCondition()
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

// <01A64334> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:11
// function calls: 13
void CGroundCondition::~CGroundCondition()
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
	CGroundCondition::~CGroundCondition(); // 11
} /* size: 109, inline expansions: 13 (231 bytes) */

// <01A64318> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:11
inline void CGroundCondition::~CGroundCondition()
{
} /* size: 0 */

// <01A53E87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:11
// member functions: 65
// member variables: 3
// static member variables: 2
// vtable entries: 15
// class size: 40
class CGroundCondition : public CAnimStateConditionBase {
public:
	/* class CAnimStateConditionBase <ancestor>; */ /* 0 40 */
	void CGroundCondition(CGroundCondition* , CGroundCondition& );
	void CGroundCondition(CGroundCondition* , const CGroundCondition& );
private:
	static class CClassInfoT<CGroundCondition> m_classInfoCGroundCondition; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8 */
	virtual void* CastToBase(CGroundCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8 */
	virtual const void* CastToBase(const CGroundCondition* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	CGroundCondition* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	void Schema_CompileTimeVerificationFunction(CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:15 */
	void KV3TransferPolymorphicClassname(const CGroundCondition* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:15 */
	CGroundCondition* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:15 */
	virtual void KV3TransferSave(const CGroundCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:15 */
	virtual void KV3TransferLoad(CGroundCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:15 */
	void KV3TransferSave_CGroundCondition(const CGroundCondition* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:15 */
	void KV3TransferLoad_CGroundCondition(CGroundCondition* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:16 */
	void CGroundCondition(CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:24 */
	virtual void GetSourceOptions(const CGroundCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:31 */
	virtual int GetSourceIndex(const CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:45 */
	virtual void SetSourceIndex(CGroundCondition* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:38 */
	virtual uint8 GetComparisonOpMask(const CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:52 */
	virtual CAnimVariant GetComparisonValue(const CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:58 */
	virtual void SetComparisonValue(CGroundCondition* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:64 */
	virtual CUtlString GetDescription(const CGroundCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:72 */
	virtual void InitUpdateData(CGroundCondition* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:78 */
	virtual const IConditionUpdater* GetUpdateData(const CGroundCondition* , CPackedData& );
	bool m_comparisonValue; /* 33 1 */
	CPackedHandle<CGroundConditionUpdater> m_hUpdateData; /* 36 4 */
	virtual void ~CGroundCondition(CGroundCondition* );
	virtual const class IConditionUpdater  * GetUpdateData(const class CGroundCondition  *, CPackedData &); /* linkage=_ZNK16CGroundCondition13GetUpdateDataER12CPackedDataTILb0EE */
	virtual void InitUpdateData(class CGroundCondition *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN16CGroundCondition14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual class CUtlString GetDescription(const class CGroundCondition  *); /* linkage=_ZNK16CGroundCondition14GetDescriptionEv */
	virtual void SetComparisonValue(class CGroundCondition *, const class CAnimVariant  &); /* linkage=_ZN16CGroundCondition18SetComparisonValueERK12CAnimVariant */
	/* <1a7e023> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:52 */
	virtual class CAnimVariant GetComparisonValue(const class CGroundCondition  *); /* linkage=_ZNK16CGroundCondition18GetComparisonValueEv */
	virtual uint8 GetComparisonOpMask(const class CGroundCondition  *); /* linkage=_ZNK16CGroundCondition19GetComparisonOpMaskEv */
	/* <1a7e2c4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:45 */
	virtual void SetSourceIndex(class CGroundCondition *, int); /* linkage=_ZN16CGroundCondition14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CGroundCondition  *); /* linkage=_ZNK16CGroundCondition14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CGroundCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK16CGroundCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CGroundCondition  *, class ClassID); /* linkage=_ZNK16CGroundCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CGroundCondition *, class ClassID); /* linkage=_ZN16CGroundCondition10CastToBaseEN10Reflection7ClassIDE */
	/* <1a7dff9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CGroundCondition  *); /* linkage=_ZNK16CGroundCondition11GetTypeInfoEv */
	void CGroundCondition(class CGroundCondition *); /* linkage=_ZN16CGroundConditionC4Ev */
	void KV3TransferLoad_CGroundCondition(class CGroundCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN16CGroundCondition32KV3TransferLoad_CGroundConditionEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CGroundCondition *, class CKV3TransferLoadContext *); /* linkage=_ZN16CGroundCondition15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <8b6d56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/groundcondition_h_schema.gen_cpp:130 */
	void KV3TransferSave_CGroundCondition(const class CGroundCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CGroundCondition32KV3TransferSave_CGroundConditionEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CGroundCondition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CGroundCondition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b6d08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/groundcondition_h_schema.gen_cpp:117 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CGroundCondition32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CGroundCondition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CGroundCondition(class CGroundCondition *); /* linkage=_ZN16CGroundConditionD4Ev */
	class CGroundCondition & operator=(class CGroundCondition *, const class CGroundCondition  &); /* linkage=_ZN16CGroundConditionaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CGroundCondition *); /* linkage=_ZN16CGroundCondition38Schema_CompileTimeVerificationFunctionEv */
	/* <8b2599> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/groundcondition.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CGroundCondition  *); /* linkage=_ZNK16CGroundCondition21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CGroundCondition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CGroundCondition17GetPrimaryBindingEv */
	void CGroundCondition(class CGroundCondition *, class CGroundCondition &); /* linkage=_ZN16CGroundConditionC4EOS_ */
	void CGroundCondition(class CGroundCondition *, const class CGroundCondition  &); /* linkage=_ZN16CGroundConditionC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN16CGroundCondition8MyTypeIDEv */
	/* <1a7fb78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN16CGroundCondition10MyTypeInfoEv */
	class CGroundCondition * Schema_MarkHelperFn(void); /* linkage=_ZN16CGroundCondition19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CGroundCondition20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CGroundCondition  *, char &); /* linkage=_ZN16CGroundCondition31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CGroundCondition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CGroundCondition32KV3TransferAllocateClassInstanceEPKc */
};

// <01A73818> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 23008
} /* size: 0, variables: 2 */

// <01A73812> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A737A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundcondition.h:14
// function call: 1
void CGroundCondition::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


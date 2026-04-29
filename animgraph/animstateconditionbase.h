
//
// animgraph/animstateconditionbase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <01A79DE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:15
void CAnimStateConditionBase::~CAnimStateConditionBase()
{
} /* size: 0 */

// <01A79DB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:15
inline void CAnimStateConditionBase::~CAnimStateConditionBase()
{
} /* size: 0 */

// <01A490BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:15
// member functions: 79
// member variables: 4
// static member variables: 2
// vtable entries: 20
// class size: 40
class CAnimStateConditionBase : public IAnimStateCondition, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimStateCondition <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CAnimStateConditionBase(CAnimStateConditionBase* , CAnimStateConditionBase& );
	void CAnimStateConditionBase(CAnimStateConditionBase* , const CAnimStateConditionBase& );
private:
	static class CClassInfoT<CAnimStateConditionBase> m_classInfoCAnimStateConditionBase; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13 */
	virtual void* CastToBase(CAnimStateConditionBase* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13 */
	virtual const void* CastToBase(const CAnimStateConditionBase* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	CAnimStateConditionBase* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	void Schema_CompileTimeVerificationFunction(CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:19 */
	void KV3TransferPolymorphicClassname(const CAnimStateConditionBase* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:19 */
	CAnimStateConditionBase* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:19 */
	virtual void KV3TransferSave(const CAnimStateConditionBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:19 */
	virtual void KV3TransferLoad(CAnimStateConditionBase* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:19 */
	void KV3TransferSave_CAnimStateConditionBase(const CAnimStateConditionBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:19 */
	void KV3TransferLoad_CAnimStateConditionBase(CAnimStateConditionBase* , CKV3TransferLoadContext* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:16 */
	void CAnimStateConditionBase(CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:22 */
	CAnimStateMachineContextPtr GetContext(CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:28 */
	const CAnimStateMachineContextPtr& GetContext(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:34 */
	virtual void GetSourceOptions(const CAnimStateConditionBase* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:46 */
	virtual int GetSourceIndex(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:53 */
	virtual void SetSourceIndex(CAnimStateConditionBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:60 */
	virtual Comparison_t GetComparisonOp(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:66 */
	virtual void SetComparisonOp(CAnimStateConditionBase* , Comparison_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:72 */
	virtual uint8 GetComparisonOpMask(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:79 */
	virtual ComparisonValueType GetComparisonValueType(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:85 */
	virtual void SetComparisonValueType(CAnimStateConditionBase* , ComparisonValueType);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:91 */
	virtual uint8 GetComparisonValueTypeMask(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:98 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:105 */
	virtual CUtlString GetDescription(const CAnimStateConditionBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:117 */
	virtual void SetContext(CAnimStateConditionBase* , const CAnimStateMachineContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:69 */
	virtual void InitUpdateData(CAnimStateConditionBase* , CAnimGraphInitContext& , const CAnimState* , const CAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:72 */
	virtual const IConditionUpdater* GetUpdateData(const CAnimStateConditionBase* , CPackedData& );
private:
	CAnimStateMachineContextPtr m_context; /* 24 8 */
	uint8 m_comparisonOp; /* 32 1 */
	virtual void ~CAnimStateConditionBase(CAnimStateConditionBase* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN23CAnimStateConditionBase22Schema_StaticClassnameEv */
	/* <8b6b66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstateconditionbase_h_schema.gen_cpp:88 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN23CAnimStateConditionBase32Schema_VerifyBindingIsRegisteredEv */
	class CAnimStateConditionBase * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN23CAnimStateConditionBase32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CAnimStateConditionBase  *, char &); /* linkage=_ZN23CAnimStateConditionBase31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN23CAnimStateConditionBase20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN23CAnimStateConditionBase17GetPrimaryBindingEv */
	virtual class CUtlString GetDescription(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase14GetDescriptionEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase25GetComparisonValueOptionsEv */
	virtual uint8 GetComparisonValueTypeMask(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase26GetComparisonValueTypeMaskEv */
	virtual void SetComparisonValueType(class CAnimStateConditionBase *, enum ComparisonValueType); /* linkage=_ZN23CAnimStateConditionBase22SetComparisonValueTypeE19ComparisonValueType */
	virtual enum ComparisonValueType GetComparisonValueType(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase22GetComparisonValueTypeEv */
	/* <1a7e23d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:53 */
	virtual void SetSourceIndex(class CAnimStateConditionBase *, int); /* linkage=_ZN23CAnimStateConditionBase14SetSourceIndexEi */
	virtual int GetSourceIndex(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase14GetSourceIndexEv */
	virtual void GetSourceOptions(const class CAnimStateConditionBase  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK23CAnimStateConditionBase16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual const void  * CastToBase(const class CAnimStateConditionBase  *, class ClassID); /* linkage=_ZNK23CAnimStateConditionBase10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CAnimStateConditionBase *, class ClassID); /* linkage=_ZN23CAnimStateConditionBase10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase11GetTypeInfoEv */
	virtual void SetContext(class CAnimStateConditionBase *, const CAnimStateMachineContextPtr  &); /* linkage=_ZN23CAnimStateConditionBase10SetContextERK9CSmartPtrI24CAnimStateMachineContext17CRefCountAccessorE */
	virtual uint8 GetComparisonOpMask(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase19GetComparisonOpMaskEv */
	/* <1a7df4a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:66 */
	virtual void SetComparisonOp(class CAnimStateConditionBase *, enum Comparison_t); /* linkage=_ZN23CAnimStateConditionBase15SetComparisonOpE12Comparison_t */
	/* <1a7df20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:60 */
	virtual enum Comparison_t GetComparisonOp(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase15GetComparisonOpEv */
	virtual void ~CAnimStateConditionBase(class CAnimStateConditionBase *); /* linkage=_ZN23CAnimStateConditionBaseD4Ev */
	class CAnimStateConditionBase & operator=(class CAnimStateConditionBase *, const class CAnimStateConditionBase  &); /* linkage=_ZN23CAnimStateConditionBaseaSERKS_ */
	void KV3TransferLoad_CAnimStateConditionBase(class CAnimStateConditionBase *, class CKV3TransferLoadContext *); /* linkage=_ZN23CAnimStateConditionBase39KV3TransferLoad_CAnimStateConditionBaseEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CAnimStateConditionBase *, class CKV3TransferLoadContext *); /* linkage=_ZN23CAnimStateConditionBase15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimStateConditionBase(const class CAnimStateConditionBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CAnimStateConditionBase39KV3TransferSave_CAnimStateConditionBaseEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CAnimStateConditionBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CAnimStateConditionBase15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <8b1ec9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstateconditionbase_h_schema.gen_cpp:61 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN23CAnimStateConditionBase15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <8b6b3b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstateconditionbase_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(class CAnimStateConditionBase *); /* linkage=_ZN23CAnimStateConditionBase38Schema_CompileTimeVerificationFunctionEv */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase21Schema_DynamicBindingEv */
	void CAnimStateConditionBase(class CAnimStateConditionBase *, class CAnimStateConditionBase &); /* linkage=_ZN23CAnimStateConditionBaseC4EOS_ */
	void CAnimStateConditionBase(class CAnimStateConditionBase *, const class CAnimStateConditionBase  &); /* linkage=_ZN23CAnimStateConditionBaseC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23CAnimStateConditionBase8MyTypeIDEv */
	/* <1a7f80b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23CAnimStateConditionBase10MyTypeInfoEv */
	class CAnimStateConditionBase * Schema_MarkHelperFn(void); /* linkage=_ZN23CAnimStateConditionBase19Schema_MarkHelperFnEv */
	void CAnimStateConditionBase(class CAnimStateConditionBase *); /* linkage=_ZN23CAnimStateConditionBaseC4Ev */
	/* <1a7f829> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:22 */
	CAnimStateMachineContextPtr GetContext(class CAnimStateConditionBase *); /* linkage=_ZN23CAnimStateConditionBase10GetContextEv */
	/* <1a7faf4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:28 */
	const CAnimStateMachineContextPtr  & GetContext(const class CAnimStateConditionBase  *); /* linkage=_ZNK23CAnimStateConditionBase10GetContextEv */
	virtual void InitUpdateData(class CAnimStateConditionBase *, class CAnimGraphInitContext &, const class CAnimState  *, const class CAnimStateTransition  *); /* linkage=_ZN23CAnimStateConditionBase14InitUpdateDataER21CAnimGraphInitContextPK10CAnimStatePK20CAnimStateTransition */
	virtual const class IConditionUpdater  * GetUpdateData(const class CAnimStateConditionBase  *, CPackedData &); /* linkage=_ZNK23CAnimStateConditionBase13GetUpdateDataER12CPackedDataTILb0EE */
};

// <01A7BAE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 23192
} /* size: 0, variables: 2 */

// <01A7BAE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01A7BA77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.h:18
// function call: 1
void CAnimStateConditionBase::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 18
} /* size: 29, inline expansions: 1 (15 bytes) */


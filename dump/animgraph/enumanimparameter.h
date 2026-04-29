
//
// animgraph/enumanimparameter.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <014B5808> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:10
// variable: 1
// function calls: 16
void CEnumAnimParameter::~CEnumAnimParameter()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 10
	CUtlString::~CUtlString(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 10
} /* size: 235, inline expansions: 12 (494 bytes) */

// <014B53AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:10
// variable: 1
// function calls: 21
void CEnumAnimParameter::~CEnumAnimParameter()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 10
	CUtlString::~CUtlString(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 35
	IAnimParameter::~IAnimParameter(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 10
	CEnumAnimParameter::~CEnumAnimParameter(); // 10
} /* size: 234, inline expansions: 17 (635 bytes) */

// <014B5390> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:10
inline void CEnumAnimParameter::~CEnumAnimParameter()
{
} /* size: 0 */

// <014AAA9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:10
// member functions: 65
// member variables: 4
// static member variables: 2
// vtable entries: 14
// class size: 96
class CEnumAnimParameter : public CAnimParameterBase, public IEnumAnimParameter {
public:
	/* class CAnimParameterBase <ancestor>; */ /* 0 48 */
	/* class IEnumAnimParameter <ancestor>; */ /* 48 8 */
	void CEnumAnimParameter(CEnumAnimParameter* , CEnumAnimParameter& );
	void CEnumAnimParameter(CEnumAnimParameter* , const CEnumAnimParameter& );
private:
	static class CClassInfoT<CEnumAnimParameter> m_classInfoCEnumAnimParameter; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10 */
	virtual void* CastToBase(CEnumAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10 */
	virtual const void* CastToBase(const CEnumAnimParameter* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	CEnumAnimParameter* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	void Schema_CompileTimeVerificationFunction(CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:14 */
	void KV3TransferPolymorphicClassname(const CEnumAnimParameter* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:14 */
	CEnumAnimParameter* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:14 */
	virtual void KV3TransferSave(const CEnumAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:14 */
	virtual void KV3TransferLoad(CEnumAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:14 */
	void KV3TransferSave_CEnumAnimParameter(const CEnumAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:14 */
	void KV3TransferLoad_CEnumAnimParameter(CEnumAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:18 */
	void CEnumAnimParameter(CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:25 */
	void CEnumAnimParameter(CEnumAnimParameter* , const CUtlString& , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:32 */
	virtual AnimParamType_t GetParameterType(const CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:38 */
	virtual CAnimVariant GetDefaultValue(const CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:44 */
	virtual void SetDefaultValue(CEnumAnimParameter* , CAnimVariant);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:52 */
	virtual CAnimVariant GetMinValue(const CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:58 */
	virtual CAnimVariant GetMaxValue(const CEnumAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:64 */
	virtual CAnimVariant GetClampedValue(const CEnumAnimParameter* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:77 */
	virtual void CopyProperties(CEnumAnimParameter* , IAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:72 */
	virtual const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& GetOptionNames(const CEnumAnimParameter* );
	AnimEnumValue_t m_defaultValue; /* 56 1 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_enumOptions; /* 64 32 */
	virtual void ~CEnumAnimParameter(CEnumAnimParameter* );
	/* <14c491d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:72 */
	virtual const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  & GetOptionNames(const class CEnumAnimParameter  *); /* linkage=_ZNK18CEnumAnimParameter14GetOptionNamesEv */
	virtual class CAnimVariant GetClampedValue(const class CEnumAnimParameter  *, const class CAnimVariant  &); /* linkage=_ZNK18CEnumAnimParameter15GetClampedValueERK12CAnimVariant */
	virtual void CopyProperties(class CEnumAnimParameter *, class IAnimParameter *); /* linkage=_ZN18CEnumAnimParameter14CopyPropertiesEP14IAnimParameter */
	virtual class CAnimVariant GetMaxValue(const class CEnumAnimParameter  *); /* linkage=_ZNK18CEnumAnimParameter11GetMaxValueEv */
	virtual class CAnimVariant GetMinValue(const class CEnumAnimParameter  *); /* linkage=_ZNK18CEnumAnimParameter11GetMinValueEv */
	virtual void SetDefaultValue(class CEnumAnimParameter *, class CAnimVariant); /* linkage=_ZN18CEnumAnimParameter15SetDefaultValueE12CAnimVariant */
	virtual class CAnimVariant GetDefaultValue(const class CEnumAnimParameter  *); /* linkage=_ZNK18CEnumAnimParameter15GetDefaultValueEv */
	virtual enum AnimParamType_t GetParameterType(const class CEnumAnimParameter  *); /* linkage=_ZNK18CEnumAnimParameter16GetParameterTypeEv */
	virtual const void  * CastToBase(const class CEnumAnimParameter  *, class ClassID); /* linkage=_ZNK18CEnumAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CEnumAnimParameter *, class ClassID); /* linkage=_ZN18CEnumAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	/* <14c48f3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CEnumAnimParameter  *); /* linkage=_ZNK18CEnumAnimParameter11GetTypeInfoEv */
	void CEnumAnimParameter(class CEnumAnimParameter *); /* linkage=_ZN18CEnumAnimParameterC4Ev */
	void KV3TransferLoad_CEnumAnimParameter(class CEnumAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN18CEnumAnimParameter34KV3TransferLoad_CEnumAnimParameterEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CEnumAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN18CEnumAnimParameter15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CEnumAnimParameter(const class CEnumAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CEnumAnimParameter34KV3TransferSave_CEnumAnimParameterEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CEnumAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CEnumAnimParameter15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <794ed9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/enumanimparameter_h_schema.gen_cpp:126 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CEnumAnimParameter32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CEnumAnimParameter15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CEnumAnimParameter(class CEnumAnimParameter *); /* linkage=_ZN18CEnumAnimParameterD4Ev */
	class CEnumAnimParameter & operator=(class CEnumAnimParameter *, const class CEnumAnimParameter  &); /* linkage=_ZN18CEnumAnimParameteraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CEnumAnimParameter *); /* linkage=_ZN18CEnumAnimParameter38Schema_CompileTimeVerificationFunctionEv */
	/* <794a29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/enumanimparameter.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CEnumAnimParameter  *); /* linkage=_ZNK18CEnumAnimParameter21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CEnumAnimParameter22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CEnumAnimParameter17GetPrimaryBindingEv */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CEnumAnimParameter8MyTypeIDEv */
	void CEnumAnimParameter(class CEnumAnimParameter *, class CEnumAnimParameter &); /* linkage=_ZN18CEnumAnimParameterC4EOS_ */
	void CEnumAnimParameter(class CEnumAnimParameter *, const class CEnumAnimParameter  &); /* linkage=_ZN18CEnumAnimParameterC4ERKS_ */
	/* <14c546e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CEnumAnimParameter10MyTypeInfoEv */
	class CEnumAnimParameter * Schema_MarkHelperFn(void); /* linkage=_ZN18CEnumAnimParameter19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CEnumAnimParameter20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CEnumAnimParameter  *, char &); /* linkage=_ZN18CEnumAnimParameter31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CEnumAnimParameter * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CEnumAnimParameter32KV3TransferAllocateClassInstanceEPKc */
	void CEnumAnimParameter(class CEnumAnimParameter *, const class CUtlString  &, class AnimParamID); /* linkage=_ZN18CEnumAnimParameterC4ERK10CUtlString11AnimParamID */
};

// <014C163E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 18641
} /* size: 0, variables: 2 */

// <014C1638> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014C15CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/enumanimparameter.h:13
// function call: 1
void CEnumAnimParameter::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */


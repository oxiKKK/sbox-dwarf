
//
// animgraph/quaternionanimparameter.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <014B61B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:11
// function calls: 2
void CQuaternionAnimParameter::~CQuaternionAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 11
} /* size: 49, inline expansions: 2 (57 bytes) */

// <014B601B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:11
// function calls: 7
void CQuaternionAnimParameter::~CQuaternionAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 35
	IAnimParameter::~IAnimParameter(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 11
	CQuaternionAnimParameter::~CQuaternionAnimParameter(); // 11
} /* size: 77, inline expansions: 7 (98 bytes) */

// <014B5FFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:11
inline void CQuaternionAnimParameter::~CQuaternionAnimParameter()
{
} /* size: 0 */

// <014ABA23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:11
// member functions: 63
// member variables: 2
// static member variables: 2
// vtable entries: 13
// class size: 64
class CQuaternionAnimParameter : public CAnimParameterBase {
public:
	/* class CAnimParameterBase <ancestor>; */ /* 0 48 */
	void CQuaternionAnimParameter(CQuaternionAnimParameter* , CQuaternionAnimParameter& );
	void CQuaternionAnimParameter(CQuaternionAnimParameter* , const CQuaternionAnimParameter& );
private:
	static class CClassInfoT<CQuaternionAnimParameter> m_classInfoCQuaternionAnimParameter; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8 */
	virtual void* CastToBase(CQuaternionAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8 */
	virtual const void* CastToBase(const CQuaternionAnimParameter* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	CQuaternionAnimParameter* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	void Schema_CompileTimeVerificationFunction(CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:15 */
	void KV3TransferPolymorphicClassname(const CQuaternionAnimParameter* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:15 */
	CQuaternionAnimParameter* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:15 */
	virtual void KV3TransferSave(const CQuaternionAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:15 */
	virtual void KV3TransferLoad(CQuaternionAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:15 */
	void KV3TransferSave_CQuaternionAnimParameter(const CQuaternionAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:15 */
	void KV3TransferLoad_CQuaternionAnimParameter(CQuaternionAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:16 */
	void CQuaternionAnimParameter(CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:23 */
	void CQuaternionAnimParameter(CQuaternionAnimParameter* , const CUtlString& , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:30 */
	virtual AnimParamType_t GetParameterType(const CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:36 */
	virtual CAnimVariant GetDefaultValue(const CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:42 */
	virtual void SetDefaultValue(CQuaternionAnimParameter* , CAnimVariant);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:48 */
	virtual CAnimVariant GetMinValue(const CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:54 */
	virtual CAnimVariant GetMaxValue(const CQuaternionAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:60 */
	virtual CAnimVariant GetClampedValue(const CQuaternionAnimParameter* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:67 */
	virtual void CopyProperties(CQuaternionAnimParameter* , IAnimParameter* );
	Quaternion m_defaultValue; /* 44 16 */
	virtual void ~CQuaternionAnimParameter(CQuaternionAnimParameter* );
	virtual class CAnimVariant GetClampedValue(const class CQuaternionAnimParameter  *, const class CAnimVariant  &); /* linkage=_ZNK24CQuaternionAnimParameter15GetClampedValueERK12CAnimVariant */
	virtual void CopyProperties(class CQuaternionAnimParameter *, class IAnimParameter *); /* linkage=_ZN24CQuaternionAnimParameter14CopyPropertiesEP14IAnimParameter */
	virtual class CAnimVariant GetMaxValue(const class CQuaternionAnimParameter  *); /* linkage=_ZNK24CQuaternionAnimParameter11GetMaxValueEv */
	virtual class CAnimVariant GetMinValue(const class CQuaternionAnimParameter  *); /* linkage=_ZNK24CQuaternionAnimParameter11GetMinValueEv */
	/* <14c4bd9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:42 */
	virtual void SetDefaultValue(class CQuaternionAnimParameter *, class CAnimVariant); /* linkage=_ZN24CQuaternionAnimParameter15SetDefaultValueE12CAnimVariant */
	virtual class CAnimVariant GetDefaultValue(const class CQuaternionAnimParameter  *); /* linkage=_ZNK24CQuaternionAnimParameter15GetDefaultValueEv */
	virtual enum AnimParamType_t GetParameterType(const class CQuaternionAnimParameter  *); /* linkage=_ZNK24CQuaternionAnimParameter16GetParameterTypeEv */
	virtual const void  * CastToBase(const class CQuaternionAnimParameter  *, class ClassID); /* linkage=_ZNK24CQuaternionAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CQuaternionAnimParameter *, class ClassID); /* linkage=_ZN24CQuaternionAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	/* <14c499b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CQuaternionAnimParameter  *); /* linkage=_ZNK24CQuaternionAnimParameter11GetTypeInfoEv */
	void CQuaternionAnimParameter(class CQuaternionAnimParameter *); /* linkage=_ZN24CQuaternionAnimParameterC4Ev */
	void KV3TransferLoad_CQuaternionAnimParameter(class CQuaternionAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN24CQuaternionAnimParameter40KV3TransferLoad_CQuaternionAnimParameterEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CQuaternionAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN24CQuaternionAnimParameter15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <795011> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/quaternionanimparameter_h_schema.gen_cpp:130 */
	void KV3TransferSave_CQuaternionAnimParameter(const class CQuaternionAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK24CQuaternionAnimParameter40KV3TransferSave_CQuaternionAnimParameterEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CQuaternionAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK24CQuaternionAnimParameter15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <794fc3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/quaternionanimparameter_h_schema.gen_cpp:117 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN24CQuaternionAnimParameter32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN24CQuaternionAnimParameter15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CQuaternionAnimParameter(class CQuaternionAnimParameter *); /* linkage=_ZN24CQuaternionAnimParameterD4Ev */
	class CQuaternionAnimParameter & operator=(class CQuaternionAnimParameter *, const class CQuaternionAnimParameter  &); /* linkage=_ZN24CQuaternionAnimParameteraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CQuaternionAnimParameter *); /* linkage=_ZN24CQuaternionAnimParameter38Schema_CompileTimeVerificationFunctionEv */
	/* <794c42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/quaternionanimparameter.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CQuaternionAnimParameter  *); /* linkage=_ZNK24CQuaternionAnimParameter21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN24CQuaternionAnimParameter22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN24CQuaternionAnimParameter17GetPrimaryBindingEv */
	void CQuaternionAnimParameter(class CQuaternionAnimParameter *, class CQuaternionAnimParameter &); /* linkage=_ZN24CQuaternionAnimParameterC4EOS_ */
	void CQuaternionAnimParameter(class CQuaternionAnimParameter *, const class CQuaternionAnimParameter  &); /* linkage=_ZN24CQuaternionAnimParameterC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN24CQuaternionAnimParameter8MyTypeIDEv */
	/* <14c54c8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN24CQuaternionAnimParameter10MyTypeInfoEv */
	class CQuaternionAnimParameter * Schema_MarkHelperFn(void); /* linkage=_ZN24CQuaternionAnimParameter19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN24CQuaternionAnimParameter20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CQuaternionAnimParameter  *, char &); /* linkage=_ZN24CQuaternionAnimParameter31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CQuaternionAnimParameter * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN24CQuaternionAnimParameter32KV3TransferAllocateClassInstanceEPKc */
	void CQuaternionAnimParameter(class CQuaternionAnimParameter *, const class CUtlString  &, class AnimParamID); /* linkage=_ZN24CQuaternionAnimParameterC4ERK10CUtlString11AnimParamID */
};

// <014BE2B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 18793
} /* size: 0, variables: 2 */

// <014BE2B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014BE245> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/quaternionanimparameter.h:14
// function call: 1
void CQuaternionAnimParameter::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


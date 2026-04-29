
//
// animgraph/vectoranimparameter.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <014B6410> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:11
// function calls: 2
void CVectorAnimParameter::~CVectorAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 11
} /* size: 49, inline expansions: 2 (57 bytes) */

// <014B6273> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:11
// function calls: 7
void CVectorAnimParameter::~CVectorAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 35
	IAnimParameter::~IAnimParameter(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 11
	CVectorAnimParameter::~CVectorAnimParameter(); // 11
} /* size: 77, inline expansions: 7 (98 bytes) */

// <014B6257> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:11
inline void CVectorAnimParameter::~CVectorAnimParameter()
{
} /* size: 0 */

// <014ABEA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:11
// member functions: 63
// member variables: 2
// static member variables: 2
// vtable entries: 13
// class size: 56
class CVectorAnimParameter : public CAnimParameterBase {
public:
	/* class CAnimParameterBase <ancestor>; */ /* 0 48 */
	void CVectorAnimParameter(CVectorAnimParameter* , CVectorAnimParameter& );
	void CVectorAnimParameter(CVectorAnimParameter* , const CVectorAnimParameter& );
private:
	static class CClassInfoT<CVectorAnimParameter> m_classInfoCVectorAnimParameter; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8 */
	virtual void* CastToBase(CVectorAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8 */
	virtual const void* CastToBase(const CVectorAnimParameter* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	CVectorAnimParameter* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	void Schema_CompileTimeVerificationFunction(CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:15 */
	void KV3TransferPolymorphicClassname(const CVectorAnimParameter* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:15 */
	CVectorAnimParameter* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:15 */
	virtual void KV3TransferSave(const CVectorAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:15 */
	virtual void KV3TransferLoad(CVectorAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:15 */
	void KV3TransferSave_CVectorAnimParameter(const CVectorAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:15 */
	void KV3TransferLoad_CVectorAnimParameter(CVectorAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:16 */
	void CVectorAnimParameter(CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:23 */
	void CVectorAnimParameter(CVectorAnimParameter* , const CUtlString& , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:30 */
	virtual AnimParamType_t GetParameterType(const CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:36 */
	virtual CAnimVariant GetDefaultValue(const CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:42 */
	virtual void SetDefaultValue(CVectorAnimParameter* , CAnimVariant);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:48 */
	virtual CAnimVariant GetMinValue(const CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:54 */
	virtual CAnimVariant GetMaxValue(const CVectorAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:60 */
	virtual CAnimVariant GetClampedValue(const CVectorAnimParameter* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:66 */
	virtual void CopyProperties(CVectorAnimParameter* , IAnimParameter* );
	Vector m_defaultValue; /* 44 12 */
	virtual void ~CVectorAnimParameter(CVectorAnimParameter* );
	virtual class CAnimVariant GetClampedValue(const class CVectorAnimParameter  *, const class CAnimVariant  &); /* linkage=_ZNK20CVectorAnimParameter15GetClampedValueERK12CAnimVariant */
	virtual void CopyProperties(class CVectorAnimParameter *, class IAnimParameter *); /* linkage=_ZN20CVectorAnimParameter14CopyPropertiesEP14IAnimParameter */
	virtual class CAnimVariant GetMaxValue(const class CVectorAnimParameter  *); /* linkage=_ZNK20CVectorAnimParameter11GetMaxValueEv */
	virtual class CAnimVariant GetMinValue(const class CVectorAnimParameter  *); /* linkage=_ZNK20CVectorAnimParameter11GetMinValueEv */
	/* <14c4a4e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:42 */
	virtual void SetDefaultValue(class CVectorAnimParameter *, class CAnimVariant); /* linkage=_ZN20CVectorAnimParameter15SetDefaultValueE12CAnimVariant */
	virtual class CAnimVariant GetDefaultValue(const class CVectorAnimParameter  *); /* linkage=_ZNK20CVectorAnimParameter15GetDefaultValueEv */
	virtual enum AnimParamType_t GetParameterType(const class CVectorAnimParameter  *); /* linkage=_ZNK20CVectorAnimParameter16GetParameterTypeEv */
	virtual const void  * CastToBase(const class CVectorAnimParameter  *, class ClassID); /* linkage=_ZNK20CVectorAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CVectorAnimParameter *, class ClassID); /* linkage=_ZN20CVectorAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	/* <14c49c5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CVectorAnimParameter  *); /* linkage=_ZNK20CVectorAnimParameter11GetTypeInfoEv */
	void CVectorAnimParameter(class CVectorAnimParameter *); /* linkage=_ZN20CVectorAnimParameterC4Ev */
	void KV3TransferLoad_CVectorAnimParameter(class CVectorAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN20CVectorAnimParameter36KV3TransferLoad_CVectorAnimParameterEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CVectorAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN20CVectorAnimParameter15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <79542e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/vectoranimparameter_h_schema.gen_cpp:130 */
	void KV3TransferSave_CVectorAnimParameter(const class CVectorAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CVectorAnimParameter36KV3TransferSave_CVectorAnimParameterEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CVectorAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CVectorAnimParameter15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <7953e0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/vectoranimparameter_h_schema.gen_cpp:117 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CVectorAnimParameter32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CVectorAnimParameter15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CVectorAnimParameter(class CVectorAnimParameter *); /* linkage=_ZN20CVectorAnimParameterD4Ev */
	class CVectorAnimParameter & operator=(class CVectorAnimParameter *, const class CVectorAnimParameter  &); /* linkage=_ZN20CVectorAnimParameteraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CVectorAnimParameter *); /* linkage=_ZN20CVectorAnimParameter38Schema_CompileTimeVerificationFunctionEv */
	/* <794cf5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/vectoranimparameter.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CVectorAnimParameter  *); /* linkage=_ZNK20CVectorAnimParameter21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CVectorAnimParameter22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CVectorAnimParameter17GetPrimaryBindingEv */
	void CVectorAnimParameter(class CVectorAnimParameter *, class CVectorAnimParameter &); /* linkage=_ZN20CVectorAnimParameterC4EOS_ */
	void CVectorAnimParameter(class CVectorAnimParameter *, const class CVectorAnimParameter  &); /* linkage=_ZN20CVectorAnimParameterC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20CVectorAnimParameter8MyTypeIDEv */
	/* <14c54e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20CVectorAnimParameter10MyTypeInfoEv */
	class CVectorAnimParameter * Schema_MarkHelperFn(void); /* linkage=_ZN20CVectorAnimParameter19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CVectorAnimParameter20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CVectorAnimParameter  *, char &); /* linkage=_ZN20CVectorAnimParameter31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CVectorAnimParameter * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CVectorAnimParameter32KV3TransferAllocateClassInstanceEPKc */
	void CVectorAnimParameter(class CVectorAnimParameter *, const class CUtlString  &, class AnimParamID); /* linkage=_ZN20CVectorAnimParameterC4ERK10CUtlString11AnimParamID */
};

// <014BD511> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 18695
} /* size: 0, variables: 2 */

// <014BD50B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014BD4A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/vectoranimparameter.h:14
// function call: 1
void CVectorAnimParameter::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/boolanimparameter.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <014B52F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:9
// function calls: 2
void CBoolAnimParameter::~CBoolAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 9
} /* size: 49, inline expansions: 2 (57 bytes) */

// <014B5154> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:9
// function calls: 7
void CBoolAnimParameter::~CBoolAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 35
	IAnimParameter::~IAnimParameter(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 9
	CBoolAnimParameter::~CBoolAnimParameter(); // 9
} /* size: 77, inline expansions: 7 (98 bytes) */

// <014B5138> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:9
inline void CBoolAnimParameter::~CBoolAnimParameter()
{
} /* size: 0 */

// <014A8745> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:9
// member functions: 63
// member variables: 2
// static member variables: 2
// vtable entries: 13
// class size: 48
class CBoolAnimParameter : public CAnimParameterBase {
public:
	/* class CAnimParameterBase <ancestor>; */ /* 0 48 */
	void CBoolAnimParameter(CBoolAnimParameter* , CBoolAnimParameter& );
	void CBoolAnimParameter(CBoolAnimParameter* , const CBoolAnimParameter& );
private:
	static class CClassInfoT<CBoolAnimParameter> m_classInfoCBoolAnimParameter; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8 */
	virtual void* CastToBase(CBoolAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8 */
	virtual const void* CastToBase(const CBoolAnimParameter* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	CBoolAnimParameter* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	void Schema_CompileTimeVerificationFunction(CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:13 */
	void KV3TransferPolymorphicClassname(const CBoolAnimParameter* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:13 */
	CBoolAnimParameter* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:13 */
	virtual void KV3TransferSave(const CBoolAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:13 */
	virtual void KV3TransferLoad(CBoolAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:13 */
	void KV3TransferSave_CBoolAnimParameter(const CBoolAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:13 */
	void KV3TransferLoad_CBoolAnimParameter(CBoolAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:16 */
	void CBoolAnimParameter(CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:23 */
	void CBoolAnimParameter(CBoolAnimParameter* , const CUtlString& , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:30 */
	virtual AnimParamType_t GetParameterType(const CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:36 */
	virtual CAnimVariant GetDefaultValue(const CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:42 */
	virtual void SetDefaultValue(CBoolAnimParameter* , CAnimVariant);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:48 */
	virtual CAnimVariant GetMinValue(const CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:54 */
	virtual CAnimVariant GetMaxValue(const CBoolAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:60 */
	virtual CAnimVariant GetClampedValue(const CBoolAnimParameter* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:66 */
	virtual void CopyProperties(CBoolAnimParameter* , IAnimParameter* );
	bool m_bDefaultValue; /* 42 1 */
	virtual void ~CBoolAnimParameter(CBoolAnimParameter* );
	virtual class CAnimVariant GetClampedValue(const class CBoolAnimParameter  *, const class CAnimVariant  &); /* linkage=_ZNK18CBoolAnimParameter15GetClampedValueERK12CAnimVariant */
	virtual void CopyProperties(class CBoolAnimParameter *, class IAnimParameter *); /* linkage=_ZN18CBoolAnimParameter14CopyPropertiesEP14IAnimParameter */
	virtual class CAnimVariant GetMaxValue(const class CBoolAnimParameter  *); /* linkage=_ZNK18CBoolAnimParameter11GetMaxValueEv */
	virtual class CAnimVariant GetMinValue(const class CBoolAnimParameter  *); /* linkage=_ZNK18CBoolAnimParameter11GetMinValueEv */
	/* <14c4fb3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:42 */
	virtual void SetDefaultValue(class CBoolAnimParameter *, class CAnimVariant); /* linkage=_ZN18CBoolAnimParameter15SetDefaultValueE12CAnimVariant */
	virtual class CAnimVariant GetDefaultValue(const class CBoolAnimParameter  *); /* linkage=_ZNK18CBoolAnimParameter15GetDefaultValueEv */
	virtual enum AnimParamType_t GetParameterType(const class CBoolAnimParameter  *); /* linkage=_ZNK18CBoolAnimParameter16GetParameterTypeEv */
	virtual const void  * CastToBase(const class CBoolAnimParameter  *, class ClassID); /* linkage=_ZNK18CBoolAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CBoolAnimParameter *, class ClassID); /* linkage=_ZN18CBoolAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	/* <14c48c9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CBoolAnimParameter  *); /* linkage=_ZNK18CBoolAnimParameter11GetTypeInfoEv */
	void CBoolAnimParameter(class CBoolAnimParameter *); /* linkage=_ZN18CBoolAnimParameterC4Ev */
	void KV3TransferLoad_CBoolAnimParameter(class CBoolAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN18CBoolAnimParameter34KV3TransferLoad_CBoolAnimParameterEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CBoolAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN18CBoolAnimParameter15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBoolAnimParameter(const class CBoolAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CBoolAnimParameter34KV3TransferSave_CBoolAnimParameterEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CBoolAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CBoolAnimParameter15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <794e8b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/boolanimparameter_h_schema.gen_cpp:117 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CBoolAnimParameter32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CBoolAnimParameter15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CBoolAnimParameter(class CBoolAnimParameter *); /* linkage=_ZN18CBoolAnimParameterD4Ev */
	class CBoolAnimParameter & operator=(class CBoolAnimParameter *, const class CBoolAnimParameter  &); /* linkage=_ZN18CBoolAnimParameteraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CBoolAnimParameter *); /* linkage=_ZN18CBoolAnimParameter38Schema_CompileTimeVerificationFunctionEv */
	/* <794976> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/boolanimparameter.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBoolAnimParameter  *); /* linkage=_ZNK18CBoolAnimParameter21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CBoolAnimParameter22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CBoolAnimParameter17GetPrimaryBindingEv */
	void CBoolAnimParameter(class CBoolAnimParameter *, class CBoolAnimParameter &); /* linkage=_ZN18CBoolAnimParameterC4EOS_ */
	void CBoolAnimParameter(class CBoolAnimParameter *, const class CBoolAnimParameter  &); /* linkage=_ZN18CBoolAnimParameterC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CBoolAnimParameter8MyTypeIDEv */
	/* <14c5432> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CBoolAnimParameter10MyTypeInfoEv */
	class CBoolAnimParameter * Schema_MarkHelperFn(void); /* linkage=_ZN18CBoolAnimParameter19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CBoolAnimParameter20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CBoolAnimParameter  *, char &); /* linkage=_ZN18CBoolAnimParameter31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CBoolAnimParameter * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CBoolAnimParameter32KV3TransferAllocateClassInstanceEPKc */
	void CBoolAnimParameter(class CBoolAnimParameter *, const class CUtlString  &, class AnimParamID); /* linkage=_ZN18CBoolAnimParameterC4ERK10CUtlString11AnimParamID */
};

// <014C24B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 18641
} /* size: 0, variables: 2 */

// <014C24AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014C2444> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/boolanimparameter.h:12
// function call: 1
void CBoolAnimParameter::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */


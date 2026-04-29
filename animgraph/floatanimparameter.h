
//
// animgraph/floatanimparameter.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <014B5D08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:9
// function calls: 2
void CFloatAnimParameter::~CFloatAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 9
} /* size: 49, inline expansions: 2 (57 bytes) */

// <014B5B6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:9
// function calls: 7
void CFloatAnimParameter::~CFloatAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 35
	IAnimParameter::~IAnimParameter(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 9
	CFloatAnimParameter::~CFloatAnimParameter(); // 9
} /* size: 77, inline expansions: 7 (98 bytes) */

// <014B5B4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:9
inline void CFloatAnimParameter::~CFloatAnimParameter()
{
} /* size: 0 */

// <014AB0E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:9
// member functions: 63
// member variables: 4
// static member variables: 2
// vtable entries: 13
// class size: 56
class CFloatAnimParameter : public CAnimParameterBase {
public:
	/* class CAnimParameterBase <ancestor>; */ /* 0 48 */
	void CFloatAnimParameter(CFloatAnimParameter* , CFloatAnimParameter& );
	void CFloatAnimParameter(CFloatAnimParameter* , const CFloatAnimParameter& );
private:
	static class CClassInfoT<CFloatAnimParameter> m_classInfoCFloatAnimParameter; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8 */
	virtual void* CastToBase(CFloatAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8 */
	virtual const void* CastToBase(const CFloatAnimParameter* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	CFloatAnimParameter* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	void Schema_CompileTimeVerificationFunction(CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:13 */
	void KV3TransferPolymorphicClassname(const CFloatAnimParameter* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:13 */
	CFloatAnimParameter* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:13 */
	virtual void KV3TransferSave(const CFloatAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:13 */
	virtual void KV3TransferLoad(CFloatAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:13 */
	void KV3TransferSave_CFloatAnimParameter(const CFloatAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:13 */
	void KV3TransferLoad_CFloatAnimParameter(CFloatAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:16 */
	void CFloatAnimParameter(CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:23 */
	void CFloatAnimParameter(CFloatAnimParameter* , const CUtlString& , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:30 */
	virtual AnimParamType_t GetParameterType(const CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:36 */
	virtual CAnimVariant GetDefaultValue(const CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:42 */
	virtual void SetDefaultValue(CFloatAnimParameter* , CAnimVariant);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:48 */
	virtual CAnimVariant GetMinValue(const CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:54 */
	virtual CAnimVariant GetMaxValue(const CFloatAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:60 */
	virtual CAnimVariant GetClampedValue(const CFloatAnimParameter* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:67 */
	virtual void CopyProperties(CFloatAnimParameter* , IAnimParameter* );
	float m_fDefaultValue; /* 44 4 */
	float m_fMinValue; /* 48 4 */
	float m_fMaxValue; /* 52 4 */
	virtual void ~CFloatAnimParameter(CFloatAnimParameter* );
	virtual class CAnimVariant GetClampedValue(const class CFloatAnimParameter  *, const class CAnimVariant  &); /* linkage=_ZNK19CFloatAnimParameter15GetClampedValueERK12CAnimVariant */
	virtual void CopyProperties(class CFloatAnimParameter *, class IAnimParameter *); /* linkage=_ZN19CFloatAnimParameter14CopyPropertiesEP14IAnimParameter */
	virtual class CAnimVariant GetMaxValue(const class CFloatAnimParameter  *); /* linkage=_ZNK19CFloatAnimParameter11GetMaxValueEv */
	virtual class CAnimVariant GetMinValue(const class CFloatAnimParameter  *); /* linkage=_ZNK19CFloatAnimParameter11GetMinValueEv */
	/* <14c4e2b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:42 */
	virtual void SetDefaultValue(class CFloatAnimParameter *, class CAnimVariant); /* linkage=_ZN19CFloatAnimParameter15SetDefaultValueE12CAnimVariant */
	virtual class CAnimVariant GetDefaultValue(const class CFloatAnimParameter  *); /* linkage=_ZNK19CFloatAnimParameter15GetDefaultValueEv */
	virtual enum AnimParamType_t GetParameterType(const class CFloatAnimParameter  *); /* linkage=_ZNK19CFloatAnimParameter16GetParameterTypeEv */
	virtual const void  * CastToBase(const class CFloatAnimParameter  *, class ClassID); /* linkage=_ZNK19CFloatAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFloatAnimParameter *, class ClassID); /* linkage=_ZN19CFloatAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	/* <14c4947> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFloatAnimParameter  *); /* linkage=_ZNK19CFloatAnimParameter11GetTypeInfoEv */
	void CFloatAnimParameter(class CFloatAnimParameter *); /* linkage=_ZN19CFloatAnimParameterC4Ev */
	void KV3TransferLoad_CFloatAnimParameter(class CFloatAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFloatAnimParameter35KV3TransferLoad_CFloatAnimParameterEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFloatAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFloatAnimParameter15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFloatAnimParameter(const class CFloatAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFloatAnimParameter35KV3TransferSave_CFloatAnimParameterEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFloatAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFloatAnimParameter15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <794f27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/floatanimparameter_h_schema.gen_cpp:135 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CFloatAnimParameter32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CFloatAnimParameter15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFloatAnimParameter(class CFloatAnimParameter *); /* linkage=_ZN19CFloatAnimParameterD4Ev */
	class CFloatAnimParameter & operator=(class CFloatAnimParameter *, const class CFloatAnimParameter  &); /* linkage=_ZN19CFloatAnimParameteraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFloatAnimParameter *); /* linkage=_ZN19CFloatAnimParameter38Schema_CompileTimeVerificationFunctionEv */
	/* <794adc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/floatanimparameter.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFloatAnimParameter  *); /* linkage=_ZNK19CFloatAnimParameter21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CFloatAnimParameter22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CFloatAnimParameter17GetPrimaryBindingEv */
	void CFloatAnimParameter(class CFloatAnimParameter *, class CFloatAnimParameter &); /* linkage=_ZN19CFloatAnimParameterC4EOS_ */
	void CFloatAnimParameter(class CFloatAnimParameter *, const class CFloatAnimParameter  &); /* linkage=_ZN19CFloatAnimParameterC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CFloatAnimParameter8MyTypeIDEv */
	/* <14c548c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CFloatAnimParameter10MyTypeInfoEv */
	class CFloatAnimParameter * Schema_MarkHelperFn(void); /* linkage=_ZN19CFloatAnimParameter19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CFloatAnimParameter20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CFloatAnimParameter  *, char &); /* linkage=_ZN19CFloatAnimParameter31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CFloatAnimParameter * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CFloatAnimParameter32KV3TransferAllocateClassInstanceEPKc */
	void CFloatAnimParameter(class CFloatAnimParameter *, const class CUtlString  &, class AnimParamID); /* linkage=_ZN19CFloatAnimParameterC4ERK10CUtlString11AnimParamID */
};

// <014BFCBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 18668
} /* size: 0, variables: 2 */

// <014BFCB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014BFC4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/floatanimparameter.h:12
// function call: 1
void CFloatAnimParameter::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */


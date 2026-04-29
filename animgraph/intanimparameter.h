
//
// animgraph/intanimparameter.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <014B5F60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:9
// function calls: 2
void CIntAnimParameter::~CIntAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 9
} /* size: 49, inline expansions: 2 (57 bytes) */

// <014B5DC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:9
// function calls: 7
void CIntAnimParameter::~CIntAnimParameter()
{
	CUtlString::~CUtlString(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 35
	IAnimParameter::~IAnimParameter(); // 15
	CAnimParameterBase::~CAnimParameterBase(); // 9
	CIntAnimParameter::~CIntAnimParameter(); // 9
} /* size: 77, inline expansions: 7 (98 bytes) */

// <014B5DA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:9
inline void CIntAnimParameter::~CIntAnimParameter()
{
} /* size: 0 */

// <014AB585> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:9
// member functions: 63
// member variables: 4
// static member variables: 2
// vtable entries: 13
// class size: 56
class CIntAnimParameter : public CAnimParameterBase {
public:
	/* class CAnimParameterBase <ancestor>; */ /* 0 48 */
	void CIntAnimParameter(CIntAnimParameter* , CIntAnimParameter& );
	void CIntAnimParameter(CIntAnimParameter* , const CIntAnimParameter& );
private:
	static class CClassInfoT<CIntAnimParameter> m_classInfoCIntAnimParameter; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8 */
	virtual void* CastToBase(CIntAnimParameter* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8 */
	virtual const void* CastToBase(const CIntAnimParameter* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	CIntAnimParameter* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	void Schema_CompileTimeVerificationFunction(CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:13 */
	void KV3TransferPolymorphicClassname(const CIntAnimParameter* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:13 */
	CIntAnimParameter* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:13 */
	virtual void KV3TransferSave(const CIntAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:13 */
	virtual void KV3TransferLoad(CIntAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:13 */
	void KV3TransferSave_CIntAnimParameter(const CIntAnimParameter* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:13 */
	void KV3TransferLoad_CIntAnimParameter(CIntAnimParameter* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:16 */
	void CIntAnimParameter(CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:23 */
	void CIntAnimParameter(CIntAnimParameter* , const CUtlString& , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:30 */
	virtual AnimParamType_t GetParameterType(const CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:36 */
	virtual CAnimVariant GetDefaultValue(const CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:42 */
	virtual void SetDefaultValue(CIntAnimParameter* , CAnimVariant);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:48 */
	virtual CAnimVariant GetMinValue(const CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:54 */
	virtual CAnimVariant GetMaxValue(const CIntAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:60 */
	virtual CAnimVariant GetClampedValue(const CIntAnimParameter* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:67 */
	virtual void CopyProperties(CIntAnimParameter* , IAnimParameter* );
	int m_defaultValue; /* 44 4 */
	int m_minValue; /* 48 4 */
	int m_maxValue; /* 52 4 */
	virtual void ~CIntAnimParameter(CIntAnimParameter* );
	virtual class CAnimVariant GetClampedValue(const class CIntAnimParameter  *, const class CAnimVariant  &); /* linkage=_ZNK17CIntAnimParameter15GetClampedValueERK12CAnimVariant */
	virtual void CopyProperties(class CIntAnimParameter *, class IAnimParameter *); /* linkage=_ZN17CIntAnimParameter14CopyPropertiesEP14IAnimParameter */
	virtual class CAnimVariant GetMaxValue(const class CIntAnimParameter  *); /* linkage=_ZNK17CIntAnimParameter11GetMaxValueEv */
	virtual class CAnimVariant GetMinValue(const class CIntAnimParameter  *); /* linkage=_ZNK17CIntAnimParameter11GetMinValueEv */
	/* <14c4d02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:42 */
	virtual void SetDefaultValue(class CIntAnimParameter *, class CAnimVariant); /* linkage=_ZN17CIntAnimParameter15SetDefaultValueE12CAnimVariant */
	virtual class CAnimVariant GetDefaultValue(const class CIntAnimParameter  *); /* linkage=_ZNK17CIntAnimParameter15GetDefaultValueEv */
	virtual enum AnimParamType_t GetParameterType(const class CIntAnimParameter  *); /* linkage=_ZNK17CIntAnimParameter16GetParameterTypeEv */
	virtual const void  * CastToBase(const class CIntAnimParameter  *, class ClassID); /* linkage=_ZNK17CIntAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CIntAnimParameter *, class ClassID); /* linkage=_ZN17CIntAnimParameter10CastToBaseEN10Reflection7ClassIDE */
	/* <14c4971> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CIntAnimParameter  *); /* linkage=_ZNK17CIntAnimParameter11GetTypeInfoEv */
	void CIntAnimParameter(class CIntAnimParameter *); /* linkage=_ZN17CIntAnimParameterC4Ev */
	void KV3TransferLoad_CIntAnimParameter(class CIntAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN17CIntAnimParameter33KV3TransferLoad_CIntAnimParameterEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CIntAnimParameter *, class CKV3TransferLoadContext *); /* linkage=_ZN17CIntAnimParameter15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CIntAnimParameter(const class CIntAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CIntAnimParameter33KV3TransferSave_CIntAnimParameterEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CIntAnimParameter  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CIntAnimParameter15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <794f75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/intanimparameter_h_schema.gen_cpp:135 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CIntAnimParameter32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CIntAnimParameter15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CIntAnimParameter(class CIntAnimParameter *); /* linkage=_ZN17CIntAnimParameterD4Ev */
	class CIntAnimParameter & operator=(class CIntAnimParameter *, const class CIntAnimParameter  &); /* linkage=_ZN17CIntAnimParameteraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CIntAnimParameter *); /* linkage=_ZN17CIntAnimParameter38Schema_CompileTimeVerificationFunctionEv */
	/* <794b8f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/intanimparameter.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CIntAnimParameter  *); /* linkage=_ZNK17CIntAnimParameter21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CIntAnimParameter22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CIntAnimParameter17GetPrimaryBindingEv */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17CIntAnimParameter8MyTypeIDEv */
	void CIntAnimParameter(class CIntAnimParameter *, class CIntAnimParameter &); /* linkage=_ZN17CIntAnimParameterC4EOS_ */
	void CIntAnimParameter(class CIntAnimParameter *, const class CIntAnimParameter  &); /* linkage=_ZN17CIntAnimParameterC4ERKS_ */
	/* <14c54aa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17CIntAnimParameter10MyTypeInfoEv */
	class CIntAnimParameter * Schema_MarkHelperFn(void); /* linkage=_ZN17CIntAnimParameter19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CIntAnimParameter20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CIntAnimParameter  *, char &); /* linkage=_ZN17CIntAnimParameter31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CIntAnimParameter * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CIntAnimParameter32KV3TransferAllocateClassInstanceEPKc */
	void CIntAnimParameter(class CIntAnimParameter *, const class CUtlString  &, class AnimParamID); /* linkage=_ZN17CIntAnimParameterC4ERK10CUtlString11AnimParamID */
};

// <014BEFBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 18614
} /* size: 0, variables: 2 */

// <014BEFB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014BEF49> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/intanimparameter.h:12
// function call: 1
void CIntAnimParameter::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */


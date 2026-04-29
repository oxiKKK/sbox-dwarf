
//
// animgraph/animparameterbase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <014C1FEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:15
void CAnimParameterBase::~CAnimParameterBase()
{
} /* size: 0 */

// <014C1FBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:15
inline void CAnimParameterBase::~CAnimParameterBase()
{
} /* size: 0 */

// <014A3514> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:15
// member functions: 67
// member variables: 7
// static member variables: 2
// vtable entries: 13
// class size: 48
class CAnimParameterBase : public IAnimParameter, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimParameter <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CAnimParameterBase(CAnimParameterBase* , CAnimParameterBase& );
	void CAnimParameterBase(CAnimParameterBase* , const CAnimParameterBase& );
private:
	static class CClassInfoT<CAnimParameterBase> m_classInfoCAnimParameterBase; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12 */
	virtual void* CastToBase(CAnimParameterBase* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12 */
	virtual const void* CastToBase(const CAnimParameterBase* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	CAnimParameterBase* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	void Schema_CompileTimeVerificationFunction(CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19 */
	void KV3TransferPolymorphicClassname(const CAnimParameterBase* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19 */
	CAnimParameterBase* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19 */
	virtual void KV3TransferSave(const CAnimParameterBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19 */
	virtual void KV3TransferLoad(CAnimParameterBase* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19 */
	void KV3TransferSave_CAnimParameterBase(const CAnimParameterBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19 */
	void KV3TransferLoad_CAnimParameterBase(CAnimParameterBase* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:16 */
	void CAnimParameterBase(CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:22 */
	void CAnimParameterBase(CAnimParameterBase* , const CUtlString& , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:30 */
	virtual const CUtlString& GetName(const CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:36 */
	virtual AnimParamID GetParameterID(const CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:42 */
	virtual bool ShouldUseMostRecentValue(const CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:48 */
	virtual bool IsAutoReset(const CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:54 */
	virtual AnimParamButton_t GetPreviewButton(const CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:71 */
	virtual void CopyProperties(CAnimParameterBase* , IAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:36 */
	virtual CAnimVariant GetClampedValue(const CAnimParameterBase* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:60 */
	void SetID(CAnimParameterBase* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:66 */
	void SetName(CAnimParameterBase* , const CUtlString& );
	CUtlString m_name; /* 24 8 */
	AnimParamID m_id; /* 32 4 */
	AnimParamButton_t m_previewButton; /* 36 4 */
	bool m_bUseMostRecentValue; /* 40 1 */
	bool m_bAutoReset; /* 41 1 */
	virtual void ~CAnimParameterBase(CAnimParameterBase* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CAnimParameterBase22Schema_StaticClassnameEv */
	/* <794dd3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterbase_h_schema.gen_cpp:134 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CAnimParameterBase32Schema_VerifyBindingIsRegisteredEv */
	class CAnimParameterBase * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CAnimParameterBase32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CAnimParameterBase  *, char &); /* linkage=_ZN18CAnimParameterBase31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CAnimParameterBase20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CAnimParameterBase17GetPrimaryBindingEv */
	/* <14c507d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:71 */
	virtual void CopyProperties(class CAnimParameterBase *, class IAnimParameter *); /* linkage=_ZN18CAnimParameterBase14CopyPropertiesEP14IAnimParameter */
	virtual const void  * CastToBase(const class CAnimParameterBase  *, class ClassID); /* linkage=_ZNK18CAnimParameterBase10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CAnimParameterBase *, class ClassID); /* linkage=_ZN18CAnimParameterBase10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimParameterBase  *); /* linkage=_ZNK18CAnimParameterBase11GetTypeInfoEv */
	virtual enum AnimParamButton_t GetPreviewButton(const class CAnimParameterBase  *); /* linkage=_ZNK18CAnimParameterBase16GetPreviewButtonEv */
	virtual bool IsAutoReset(const class CAnimParameterBase  *); /* linkage=_ZNK18CAnimParameterBase11IsAutoResetEv */
	virtual bool ShouldUseMostRecentValue(const class CAnimParameterBase  *); /* linkage=_ZNK18CAnimParameterBase24ShouldUseMostRecentValueEv */
	virtual class AnimParamID GetParameterID(const class CAnimParameterBase  *); /* linkage=_ZNK18CAnimParameterBase14GetParameterIDEv */
	virtual const class CUtlString  & GetName(const class CAnimParameterBase  *); /* linkage=_ZNK18CAnimParameterBase7GetNameEv */
	virtual void ~CAnimParameterBase(class CAnimParameterBase *); /* linkage=_ZN18CAnimParameterBaseD4Ev */
	class CAnimParameterBase & operator=(class CAnimParameterBase *, const class CAnimParameterBase  &); /* linkage=_ZN18CAnimParameterBaseaSERKS_ */
	void KV3TransferLoad_CAnimParameterBase(class CAnimParameterBase *, class CKV3TransferLoadContext *); /* linkage=_ZN18CAnimParameterBase34KV3TransferLoad_CAnimParameterBaseEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CAnimParameterBase *, class CKV3TransferLoadContext *); /* linkage=_ZN18CAnimParameterBase15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimParameterBase(const class CAnimParameterBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CAnimParameterBase34KV3TransferSave_CAnimParameterBaseEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CAnimParameterBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CAnimParameterBase15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <7945c3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterbase_h_schema.gen_cpp:107 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CAnimParameterBase15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <794da8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterbase_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(class CAnimParameterBase *); /* linkage=_ZN18CAnimParameterBase38Schema_CompileTimeVerificationFunctionEv */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimParameterBase  *); /* linkage=_ZNK18CAnimParameterBase21Schema_DynamicBindingEv */
	void SetName(class CAnimParameterBase *, const class CUtlString  &); /* linkage=_ZN18CAnimParameterBase7SetNameERK10CUtlString */
	void SetID(class CAnimParameterBase *, class AnimParamID); /* linkage=_ZN18CAnimParameterBase5SetIDE11AnimParamID */
	void CAnimParameterBase(class CAnimParameterBase *, class CAnimParameterBase &); /* linkage=_ZN18CAnimParameterBaseC4EOS_ */
	void CAnimParameterBase(class CAnimParameterBase *, const class CAnimParameterBase  &); /* linkage=_ZN18CAnimParameterBaseC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CAnimParameterBase8MyTypeIDEv */
	/* <14c5414> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CAnimParameterBase10MyTypeInfoEv */
	class CAnimParameterBase * Schema_MarkHelperFn(void); /* linkage=_ZN18CAnimParameterBase19Schema_MarkHelperFnEv */
	void CAnimParameterBase(class CAnimParameterBase *); /* linkage=_ZN18CAnimParameterBaseC4Ev */
	void CAnimParameterBase(class CAnimParameterBase *, const class CUtlString  &, class AnimParamID); /* linkage=_ZN18CAnimParameterBaseC4ERK10CUtlString11AnimParamID */
	virtual class CAnimVariant GetClampedValue(const class CAnimParameterBase  *, const class CAnimVariant  &); /* linkage=_ZNK18CAnimParameterBase15GetClampedValueERK12CAnimVariant */
};

// <014C3B48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 18641
} /* size: 0, variables: 2 */

// <014C3B42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014C3AD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18
// function call: 1
void CAnimParameterBase::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 18
} /* size: 29, inline expansions: 1 (15 bytes) */

// <00F95E01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00F95DFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:18
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00F95DD8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19
inline void KV3TransferPolymorphicClassname(const CAnimParameterBase* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00F95DC1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterbase.h:19
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */


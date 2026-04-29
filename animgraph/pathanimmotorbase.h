
//
// animgraph/pathanimmotorbase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <0146C597> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:10
void CPathAnimMotorBase::~CPathAnimMotorBase()
{
} /* size: 0 */

// <0146C564> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:10
inline void CPathAnimMotorBase::~CPathAnimMotorBase()
{
} /* size: 0 */

// <01454EBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:10
// member functions: 47
// member variables: 3
// static member variables: 2
// vtable entries: 6
// class size: 80
class CPathAnimMotorBase : public CAnimMotorBase {
public:
	/* class CAnimMotorBase <ancestor>; */ /* 0 40 */
	void CPathAnimMotorBase(CPathAnimMotorBase* , CPathAnimMotorBase& );
	void CPathAnimMotorBase(CPathAnimMotorBase* , const CPathAnimMotorBase& );
private:
	static class CClassInfoT<CPathAnimMotorBase> m_classInfoCPathAnimMotorBase; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7 */
	virtual const CClassInfo& GetTypeInfo(const CPathAnimMotorBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7 */
	virtual void* CastToBase(CPathAnimMotorBase* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7 */
	virtual const void* CastToBase(const CPathAnimMotorBase* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	CPathAnimMotorBase* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	void Schema_CompileTimeVerificationFunction(CPathAnimMotorBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CPathAnimMotorBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:14 */
	void KV3TransferPolymorphicClassname(const CPathAnimMotorBase* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:14 */
	CPathAnimMotorBase* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:14 */
	virtual void KV3TransferSave(const CPathAnimMotorBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:14 */
	virtual void KV3TransferLoad(CPathAnimMotorBase* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:14 */
	void KV3TransferSave_CPathAnimMotorBase(const CPathAnimMotorBase* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:14 */
	void KV3TransferLoad_CPathAnimMotorBase(CPathAnimMotorBase* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:11 */
	void CPathAnimMotorBase(CPathAnimMotorBase* );
protected:
	CAnimInputDamping m_facingDamping; /* 40 0 */
	bool m_bLockToPath; /* 72 1 */
	virtual void ~CPathAnimMotorBase(CPathAnimMotorBase* );
	virtual const void  * CastToBase(const class CPathAnimMotorBase  *, class ClassID); /* linkage=_ZNK18CPathAnimMotorBase10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CPathAnimMotorBase *, class ClassID); /* linkage=_ZN18CPathAnimMotorBase10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class CPathAnimMotorBase  *); /* linkage=_ZNK18CPathAnimMotorBase11GetTypeInfoEv */
	void KV3TransferLoad_CPathAnimMotorBase(class CPathAnimMotorBase *, class CKV3TransferLoadContext *); /* linkage=_ZN18CPathAnimMotorBase34KV3TransferLoad_CPathAnimMotorBaseEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CPathAnimMotorBase *, class CKV3TransferLoadContext *); /* linkage=_ZN18CPathAnimMotorBase15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPathAnimMotorBase(const class CPathAnimMotorBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CPathAnimMotorBase34KV3TransferSave_CPathAnimMotorBaseEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CPathAnimMotorBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CPathAnimMotorBase15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <75dab7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/pathanimmotorbase_h_schema.gen_cpp:122 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CPathAnimMotorBase32Schema_VerifyBindingIsRegisteredEv */
	/* <75d0ff> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/pathanimmotorbase_h_schema.gen_cpp:95 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CPathAnimMotorBase15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CPathAnimMotorBase *); /* linkage=_ZN18CPathAnimMotorBase38Schema_CompileTimeVerificationFunctionEv */
	virtual void ~CPathAnimMotorBase(class CPathAnimMotorBase *); /* linkage=_ZN18CPathAnimMotorBaseD4Ev */
	class CPathAnimMotorBase & operator=(class CPathAnimMotorBase *, const class CPathAnimMotorBase  &); /* linkage=_ZN18CPathAnimMotorBaseaSERKS_ */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPathAnimMotorBase  *); /* linkage=_ZNK18CPathAnimMotorBase21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CPathAnimMotorBase22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CPathAnimMotorBase17GetPrimaryBindingEv */
	void CPathAnimMotorBase(class CPathAnimMotorBase *, class CPathAnimMotorBase &); /* linkage=_ZN18CPathAnimMotorBaseC4EOS_ */
	void CPathAnimMotorBase(class CPathAnimMotorBase *, const class CPathAnimMotorBase  &); /* linkage=_ZN18CPathAnimMotorBaseC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CPathAnimMotorBase8MyTypeIDEv */
	/* <14726d3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.cpp:7 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CPathAnimMotorBase10MyTypeInfoEv */
	class CPathAnimMotorBase * Schema_MarkHelperFn(void); /* linkage=_ZN18CPathAnimMotorBase19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CPathAnimMotorBase20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CPathAnimMotorBase  *, char &); /* linkage=_ZN18CPathAnimMotorBase31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CPathAnimMotorBase * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CPathAnimMotorBase32KV3TransferAllocateClassInstanceEPKc */
	void CPathAnimMotorBase(class CPathAnimMotorBase *); /* linkage=_ZN18CPathAnimMotorBaseC4Ev */
};

// <0146CB02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 8717
} /* size: 0, variables: 2 */

// <0146CAFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0146CA91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorbase.h:13
// function call: 1
void CPathAnimMotorBase::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 29, inline expansions: 1 (15 bytes) */


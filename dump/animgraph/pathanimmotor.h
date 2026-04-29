
//
// animgraph/pathanimmotor.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0145F40B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:9
// function calls: 3
void CPathAnimMotor::~CPathAnimMotor()
{
	CUtlString::~CUtlString(); // 18
	CAnimMotorBase::~CAnimMotorBase(); // 10
	CPathAnimMotorBase::~CPathAnimMotorBase(); // 9
} /* size: 49, inline expansions: 3 (101 bytes) */

// <0145F249> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:9
// function calls: 8
void CPathAnimMotor::~CPathAnimMotor()
{
	CUtlString::~CUtlString(); // 18
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 18
	Object::~Object(); // 15
	IAnimMotor::~IAnimMotor(); // 18
	CAnimMotorBase::~CAnimMotorBase(); // 10
	CPathAnimMotorBase::~CPathAnimMotorBase(); // 9
	CPathAnimMotor::~CPathAnimMotor(); // 9
} /* size: 77, inline expansions: 8 (141 bytes) */

// <0145F22D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:9
inline void CPathAnimMotor::~CPathAnimMotor()
{
} /* size: 0 */

// <01455580> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:9
// member functions: 49
// member variable: 1
// static member variables: 2
// vtable entries: 7
// class size: 80
class CPathAnimMotor : public CPathAnimMotorBase {
public:
	/* class CPathAnimMotorBase <ancestor>; */ /* 0 80 */
	void CPathAnimMotor(CPathAnimMotor* , CPathAnimMotor& );
	void CPathAnimMotor(CPathAnimMotor* , const CPathAnimMotor& );
private:
	static class CClassInfoT<CPathAnimMotor> m_classInfoCPathAnimMotor; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9 */
	virtual void* CastToBase(CPathAnimMotor* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9 */
	virtual const void* CastToBase(const CPathAnimMotor* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	CPathAnimMotor* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	void Schema_CompileTimeVerificationFunction(CPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:13 */
	void KV3TransferPolymorphicClassname(const CPathAnimMotor* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:13 */
	CPathAnimMotor* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:13 */
	virtual void KV3TransferSave(const CPathAnimMotor* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:13 */
	virtual void KV3TransferLoad(CPathAnimMotor* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:13 */
	void KV3TransferSave_CPathAnimMotor(const CPathAnimMotor* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:13 */
	void KV3TransferLoad_CPathAnimMotor(CPathAnimMotor* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:16 */
	void CPathAnimMotor(CPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:23 */
	virtual CAnimMotorUpdaterBase* CreateInstance(const CPathAnimMotor* , CAnimGraphInitContext& );
	virtual void ~CPathAnimMotor(CPathAnimMotor* );
	virtual class CAnimMotorUpdaterBase * CreateInstance(const class CPathAnimMotor  *, class CAnimGraphInitContext &); /* linkage=_ZNK14CPathAnimMotor14CreateInstanceER21CAnimGraphInitContext */
	virtual const void  * CastToBase(const class CPathAnimMotor  *, class ClassID); /* linkage=_ZNK14CPathAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CPathAnimMotor *, class ClassID); /* linkage=_ZN14CPathAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	/* <1471e0d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CPathAnimMotor  *); /* linkage=_ZNK14CPathAnimMotor11GetTypeInfoEv */
	void CPathAnimMotor(class CPathAnimMotor *); /* linkage=_ZN14CPathAnimMotorC4Ev */
	void KV3TransferLoad_CPathAnimMotor(class CPathAnimMotor *, class CKV3TransferLoadContext *); /* linkage=_ZN14CPathAnimMotor30KV3TransferLoad_CPathAnimMotorEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CPathAnimMotor *, class CKV3TransferLoadContext *); /* linkage=_ZN14CPathAnimMotor15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPathAnimMotor(const class CPathAnimMotor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CPathAnimMotor30KV3TransferSave_CPathAnimMotorEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CPathAnimMotor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CPathAnimMotor15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <75da69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/pathanimmotor_h_schema.gen_cpp:92 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CPathAnimMotor32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CPathAnimMotor15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CPathAnimMotor(class CPathAnimMotor *); /* linkage=_ZN14CPathAnimMotorD4Ev */
	class CPathAnimMotor & operator=(class CPathAnimMotor *, const class CPathAnimMotor  &); /* linkage=_ZN14CPathAnimMotoraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CPathAnimMotor *); /* linkage=_ZN14CPathAnimMotor38Schema_CompileTimeVerificationFunctionEv */
	/* <75d79e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/pathanimmotor.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPathAnimMotor  *); /* linkage=_ZNK14CPathAnimMotor21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CPathAnimMotor22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CPathAnimMotor17GetPrimaryBindingEv */
	void CPathAnimMotor(class CPathAnimMotor *, class CPathAnimMotor &); /* linkage=_ZN14CPathAnimMotorC4EOS_ */
	void CPathAnimMotor(class CPathAnimMotor *, const class CPathAnimMotor  &); /* linkage=_ZN14CPathAnimMotorC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14CPathAnimMotor8MyTypeIDEv */
	/* <14726b5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14CPathAnimMotor10MyTypeInfoEv */
	class CPathAnimMotor * Schema_MarkHelperFn(void); /* linkage=_ZN14CPathAnimMotor19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CPathAnimMotor20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CPathAnimMotor  *, char &); /* linkage=_ZN14CPathAnimMotor31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CPathAnimMotor * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CPathAnimMotor32KV3TransferAllocateClassInstanceEPKc */
};

// <0146C05B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 8624
} /* size: 0, variables: 2 */

// <0146C055> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0146BFEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotor.h:12
// function call: 1
void CPathAnimMotor::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */


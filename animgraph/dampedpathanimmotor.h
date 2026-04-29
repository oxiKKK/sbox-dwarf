
//
// animgraph/dampedpathanimmotor.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0145F15E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:9
// function calls: 3
void CDampedPathAnimMotor::~CDampedPathAnimMotor()
{
	CUtlString::~CUtlString(); // 18
	CAnimMotorBase::~CAnimMotorBase(); // 10
	CPathAnimMotorBase::~CPathAnimMotorBase(); // 9
} /* size: 49, inline expansions: 3 (101 bytes) */

// <0145EF9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:9
// function calls: 8
void CDampedPathAnimMotor::~CDampedPathAnimMotor()
{
	CUtlString::~CUtlString(); // 18
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 18
	Object::~Object(); // 15
	IAnimMotor::~IAnimMotor(); // 18
	CAnimMotorBase::~CAnimMotorBase(); // 10
	CPathAnimMotorBase::~CPathAnimMotorBase(); // 9
	CDampedPathAnimMotor::~CDampedPathAnimMotor(); // 9
} /* size: 77, inline expansions: 8 (141 bytes) */

// <0145EF80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:9
inline void CDampedPathAnimMotor::~CDampedPathAnimMotor()
{
} /* size: 0 */

// <014551D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:9
// member functions: 49
// member variables: 7
// static member variables: 2
// vtable entries: 7
// class size: 104
class CDampedPathAnimMotor : public CPathAnimMotorBase {
public:
	/* class CPathAnimMotorBase <ancestor>; */ /* 0 80 */
	void CDampedPathAnimMotor(CDampedPathAnimMotor* , CDampedPathAnimMotor& );
	void CDampedPathAnimMotor(CDampedPathAnimMotor* , const CDampedPathAnimMotor& );
private:
	static class CClassInfoT<CDampedPathAnimMotor> m_classInfoCDampedPathAnimMotor; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CDampedPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10 */
	virtual void* CastToBase(CDampedPathAnimMotor* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10 */
	virtual const void* CastToBase(const CDampedPathAnimMotor* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	CDampedPathAnimMotor* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	void Schema_CompileTimeVerificationFunction(CDampedPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CDampedPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:13 */
	void KV3TransferPolymorphicClassname(const CDampedPathAnimMotor* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:13 */
	CDampedPathAnimMotor* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:13 */
	virtual void KV3TransferSave(const CDampedPathAnimMotor* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:13 */
	virtual void KV3TransferLoad(CDampedPathAnimMotor* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:13 */
	void KV3TransferSave_CDampedPathAnimMotor(const CDampedPathAnimMotor* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:13 */
	void KV3TransferLoad_CDampedPathAnimMotor(CDampedPathAnimMotor* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:17 */
	void CDampedPathAnimMotor(CDampedPathAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:24 */
	virtual CAnimMotorUpdaterBase* CreateInstance(const CDampedPathAnimMotor* , CAnimGraphInitContext& );
	float m_flAnticipationTime; /* 76 4 */
	AnimParamID m_anticipationPosParam; /* 80 4 */
	AnimParamID m_anticipationHeadingParam; /* 84 4 */
	float m_flSpringConstant; /* 88 4 */
	float m_flMinSpringTension; /* 92 4 */
	float m_flMaxSpringTension; /* 96 4 */
	virtual void ~CDampedPathAnimMotor(CDampedPathAnimMotor* );
	virtual class CAnimMotorUpdaterBase * CreateInstance(const class CDampedPathAnimMotor  *, class CAnimGraphInitContext &); /* linkage=_ZNK20CDampedPathAnimMotor14CreateInstanceER21CAnimGraphInitContext */
	virtual const void  * CastToBase(const class CDampedPathAnimMotor  *, class ClassID); /* linkage=_ZNK20CDampedPathAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CDampedPathAnimMotor *, class ClassID); /* linkage=_ZN20CDampedPathAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	/* <1471de3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CDampedPathAnimMotor  *); /* linkage=_ZNK20CDampedPathAnimMotor11GetTypeInfoEv */
	void CDampedPathAnimMotor(class CDampedPathAnimMotor *); /* linkage=_ZN20CDampedPathAnimMotorC4Ev */
	void KV3TransferLoad_CDampedPathAnimMotor(class CDampedPathAnimMotor *, class CKV3TransferLoadContext *); /* linkage=_ZN20CDampedPathAnimMotor36KV3TransferLoad_CDampedPathAnimMotorEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CDampedPathAnimMotor *, class CKV3TransferLoadContext *); /* linkage=_ZN20CDampedPathAnimMotor15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDampedPathAnimMotor(const class CDampedPathAnimMotor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CDampedPathAnimMotor36KV3TransferSave_CDampedPathAnimMotorEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CDampedPathAnimMotor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CDampedPathAnimMotor15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <75da1b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/dampedpathanimmotor_h_schema.gen_cpp:177 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CDampedPathAnimMotor32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CDampedPathAnimMotor15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CDampedPathAnimMotor(class CDampedPathAnimMotor *); /* linkage=_ZN20CDampedPathAnimMotorD4Ev */
	class CDampedPathAnimMotor & operator=(class CDampedPathAnimMotor *, const class CDampedPathAnimMotor  &); /* linkage=_ZN20CDampedPathAnimMotoraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CDampedPathAnimMotor *); /* linkage=_ZN20CDampedPathAnimMotor38Schema_CompileTimeVerificationFunctionEv */
	/* <75d6ea> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/dampedpathanimmotor.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDampedPathAnimMotor  *); /* linkage=_ZNK20CDampedPathAnimMotor21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CDampedPathAnimMotor22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CDampedPathAnimMotor17GetPrimaryBindingEv */
	void CDampedPathAnimMotor(class CDampedPathAnimMotor *, class CDampedPathAnimMotor &); /* linkage=_ZN20CDampedPathAnimMotorC4EOS_ */
	void CDampedPathAnimMotor(class CDampedPathAnimMotor *, const class CDampedPathAnimMotor  &); /* linkage=_ZN20CDampedPathAnimMotorC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20CDampedPathAnimMotor8MyTypeIDEv */
	/* <1472697> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20CDampedPathAnimMotor10MyTypeInfoEv */
	class CDampedPathAnimMotor * Schema_MarkHelperFn(void); /* linkage=_ZN20CDampedPathAnimMotor19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CDampedPathAnimMotor20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CDampedPathAnimMotor  *, char &); /* linkage=_ZN20CDampedPathAnimMotor31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CDampedPathAnimMotor * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CDampedPathAnimMotor32KV3TransferAllocateClassInstanceEPKc */
};

// <0146CA5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 8766
} /* size: 0, variables: 2 */

// <0146CA59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0146C9EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotor.h:12
// function call: 1
void CDampedPathAnimMotor::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */


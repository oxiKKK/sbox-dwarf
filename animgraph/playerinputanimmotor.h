
//
// animgraph/playerinputanimmotor.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0145F85D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:13
// function calls: 12
void CPlayerInputAnimMotor::~CPlayerInputAnimMotor()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 13
	CUtlString::~CUtlString(); // 18
	CAnimMotorBase::~CAnimMotorBase(); // 13
} /* size: 169, inline expansions: 12 (337 bytes) */

// <0145F4F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:13
// function calls: 17
void CPlayerInputAnimMotor::~CPlayerInputAnimMotor()
{
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 13
	CUtlString::~CUtlString(); // 18
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 18
	Object::~Object(); // 15
	IAnimMotor::~IAnimMotor(); // 18
	CAnimMotorBase::~CAnimMotorBase(); // 13
	CPlayerInputAnimMotor::~CPlayerInputAnimMotor(); // 13
} /* size: 143, inline expansions: 17 (339 bytes) */

// <0145F4DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:13
inline void CPlayerInputAnimMotor::~CPlayerInputAnimMotor()
{
} /* size: 0 */

// <014558E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:13
// member functions: 53
// member variables: 7
// static member variables: 2
// vtable entries: 7
// class size: 96
class CPlayerInputAnimMotor : public CAnimMotorBase {
public:
	/* class CAnimMotorBase <ancestor>; */ /* 0 40 */
	void CPlayerInputAnimMotor(CPlayerInputAnimMotor* , CPlayerInputAnimMotor& );
	void CPlayerInputAnimMotor(CPlayerInputAnimMotor* , const CPlayerInputAnimMotor& );
private:
	static class CClassInfoT<CPlayerInputAnimMotor> m_classInfoCPlayerInputAnimMotor; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CPlayerInputAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10 */
	virtual void* CastToBase(CPlayerInputAnimMotor* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10 */
	virtual const void* CastToBase(const CPlayerInputAnimMotor* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	CPlayerInputAnimMotor* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	void Schema_CompileTimeVerificationFunction(CPlayerInputAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CPlayerInputAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:17 */
	void KV3TransferPolymorphicClassname(const CPlayerInputAnimMotor* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:17 */
	CPlayerInputAnimMotor* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:17 */
	virtual void KV3TransferSave(const CPlayerInputAnimMotor* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:17 */
	virtual void KV3TransferLoad(CPlayerInputAnimMotor* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:17 */
	void KV3TransferSave_CPlayerInputAnimMotor(const CPlayerInputAnimMotor* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:17 */
	void KV3TransferLoad_CPlayerInputAnimMotor(CPlayerInputAnimMotor* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:17 */
	void CPlayerInputAnimMotor(CPlayerInputAnimMotor* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:24 */
	virtual CAnimMotorUpdaterBase* CreateInstance(const CPlayerInputAnimMotor* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:28 */
	PropertyChangeDirtyResult_t OnChangeCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:29 */
	PropertyAttrState_t VisibleIfAcceleration(void* );
	CUtlVector<float, CUtlMemory<float, int> > m_sampleTimes; /* 40 32 */
	bool m_bUseAcceleraion; /* 72 1 */
	float m_flSpringConstant; /* 76 4 */
	float m_flAnticipationDistance; /* 80 4 */
	AnimParamID m_anticipationPosParam; /* 84 4 */
	AnimParamID m_anticipationHeadingParam; /* 88 4 */
	virtual void ~CPlayerInputAnimMotor(CPlayerInputAnimMotor* );
	virtual class CAnimMotorUpdaterBase * CreateInstance(const class CPlayerInputAnimMotor  *, class CAnimGraphInitContext &); /* linkage=_ZNK21CPlayerInputAnimMotor14CreateInstanceER21CAnimGraphInitContext */
	virtual const void  * CastToBase(const class CPlayerInputAnimMotor  *, class ClassID); /* linkage=_ZNK21CPlayerInputAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CPlayerInputAnimMotor *, class ClassID); /* linkage=_ZN21CPlayerInputAnimMotor10CastToBaseEN10Reflection7ClassIDE */
	/* <1471e37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CPlayerInputAnimMotor  *); /* linkage=_ZNK21CPlayerInputAnimMotor11GetTypeInfoEv */
	void CPlayerInputAnimMotor(class CPlayerInputAnimMotor *); /* linkage=_ZN21CPlayerInputAnimMotorC4Ev */
	void KV3TransferLoad_CPlayerInputAnimMotor(class CPlayerInputAnimMotor *, class CKV3TransferLoadContext *); /* linkage=_ZN21CPlayerInputAnimMotor37KV3TransferLoad_CPlayerInputAnimMotorEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CPlayerInputAnimMotor *, class CKV3TransferLoadContext *); /* linkage=_ZN21CPlayerInputAnimMotor15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPlayerInputAnimMotor(const class CPlayerInputAnimMotor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CPlayerInputAnimMotor37KV3TransferSave_CPlayerInputAnimMotorEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CPlayerInputAnimMotor  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CPlayerInputAnimMotor15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <75db6e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/playerinputanimmotor_h_schema.gen_cpp:174 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CPlayerInputAnimMotor32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CPlayerInputAnimMotor15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CPlayerInputAnimMotor(class CPlayerInputAnimMotor *); /* linkage=_ZN21CPlayerInputAnimMotorD4Ev */
	class CPlayerInputAnimMotor & operator=(class CPlayerInputAnimMotor *, const class CPlayerInputAnimMotor  &); /* linkage=_ZN21CPlayerInputAnimMotoraSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CPlayerInputAnimMotor *); /* linkage=_ZN21CPlayerInputAnimMotor38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t VisibleIfAcceleration(void *); /* linkage=_ZN21CPlayerInputAnimMotor21VisibleIfAccelerationEPv */
	enum PropertyChangeDirtyResult_t OnChangeCallback(void *); /* linkage=_ZN21CPlayerInputAnimMotor16OnChangeCallbackEPv */
	/* <75d852> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/playerinputanimmotor.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPlayerInputAnimMotor  *); /* linkage=_ZNK21CPlayerInputAnimMotor21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CPlayerInputAnimMotor22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CPlayerInputAnimMotor17GetPrimaryBindingEv */
	void CPlayerInputAnimMotor(class CPlayerInputAnimMotor *, class CPlayerInputAnimMotor &); /* linkage=_ZN21CPlayerInputAnimMotorC4EOS_ */
	void CPlayerInputAnimMotor(class CPlayerInputAnimMotor *, const class CPlayerInputAnimMotor  &); /* linkage=_ZN21CPlayerInputAnimMotorC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21CPlayerInputAnimMotor8MyTypeIDEv */
	/* <14726f1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21CPlayerInputAnimMotor10MyTypeInfoEv */
	class CPlayerInputAnimMotor * Schema_MarkHelperFn(void); /* linkage=_ZN21CPlayerInputAnimMotor19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN21CPlayerInputAnimMotor20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CPlayerInputAnimMotor  *, char &); /* linkage=_ZN21CPlayerInputAnimMotor31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CPlayerInputAnimMotor * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN21CPlayerInputAnimMotor32KV3TransferAllocateClassInstanceEPKc */
};

// <0146B3C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 8793
} /* size: 0, variables: 2 */

// <0146B3BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0146B353> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.h:16
// function call: 1
void CPlayerInputAnimMotor::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


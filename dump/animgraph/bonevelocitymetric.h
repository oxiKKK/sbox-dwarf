
//
// animgraph/bonevelocitymetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E1F2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:9
// function calls: 9
void CBoneVelocityMetric::~CBoneVelocityMetric()
{
	CUtlString::~CUtlString(); // 9
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMotionMetricBase::~CMotionMetricBase(); // 9
} /* size: 134, inline expansions: 9 (163 bytes) */

// <013E1C2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:9
// function calls: 14
void CBoneVelocityMetric::~CBoneVelocityMetric()
{
	CUtlString::~CUtlString(); // 9
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 18
	Object::~Object(); // 24
	IMotionMetric::~IMotionMetric(); // 18
	CMotionMetricBase::~CMotionMetricBase(); // 9
	CBoneVelocityMetric::~CBoneVelocityMetric(); // 9
} /* size: 135, inline expansions: 14 (216 bytes) */

// <013E1C10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:9
inline void CBoneVelocityMetric::~CBoneVelocityMetric()
{
} /* size: 0 */

// <013AB7F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:9
// member functions: 45
// member variables: 2
// static member variables: 2
// vtable entries: 10
// class size: 48
class CBoneVelocityMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CBoneVelocityMetric> m_classInfoCBoneVelocityMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CBoneVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10 */
	virtual void* CastToBase(CBoneVelocityMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10 */
	virtual const void* CastToBase(const CBoneVelocityMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	CBoneVelocityMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	void Schema_CompileTimeVerificationFunction(CBoneVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBoneVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:13 */
	void KV3TransferPolymorphicClassname(const CBoneVelocityMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:13 */
	CBoneVelocityMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:13 */
	virtual void KV3TransferSave(const CBoneVelocityMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:13 */
	virtual void KV3TransferLoad(CBoneVelocityMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:13 */
	void KV3TransferSave_CBoneVelocityMetric(const CBoneVelocityMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:13 */
	void KV3TransferLoad_CBoneVelocityMetric(CBoneVelocityMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:18 */
	void CBoneVelocityMetric(CBoneVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:17 */
	virtual CUtlString GetUIName(const CBoneVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:26 */
	virtual int GetDimensionCount(const CBoneVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:32 */
	virtual MotionMetricCategory GetCategory(const CBoneVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:38 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CBoneVelocityMetric* , CMotionMetricInitContext& , CPackedData& , float);
	CUtlString m_boneName; /* 40 8 */
	virtual void ~CBoneVelocityMetric(CBoneVelocityMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CBoneVelocityMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK19CBoneVelocityMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CBoneVelocityMetric  *); /* linkage=_ZNK19CBoneVelocityMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CBoneVelocityMetric  *); /* linkage=_ZNK19CBoneVelocityMetric17GetDimensionCountEv */
	virtual class CUtlString GetUIName(const class CBoneVelocityMetric  *); /* linkage=_ZNK19CBoneVelocityMetric9GetUINameEv */
	virtual const void  * CastToBase(const class CBoneVelocityMetric  *, class ClassID); /* linkage=_ZNK19CBoneVelocityMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CBoneVelocityMetric *, class ClassID); /* linkage=_ZN19CBoneVelocityMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c429> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CBoneVelocityMetric  *); /* linkage=_ZNK19CBoneVelocityMetric11GetTypeInfoEv */
	void KV3TransferLoad_CBoneVelocityMetric(class CBoneVelocityMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CBoneVelocityMetric35KV3TransferLoad_CBoneVelocityMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CBoneVelocityMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CBoneVelocityMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBoneVelocityMetric(const class CBoneVelocityMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CBoneVelocityMetric35KV3TransferSave_CBoneVelocityMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CBoneVelocityMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CBoneVelocityMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <719c10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/bonevelocitymetric_h_schema.gen_cpp:120 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CBoneVelocityMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CBoneVelocityMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CBoneVelocityMetric(class CBoneVelocityMetric *); /* linkage=_ZN19CBoneVelocityMetricD4Ev */
	class CBoneVelocityMetric & operator=(class CBoneVelocityMetric *, const class CBoneVelocityMetric  &); /* linkage=_ZN19CBoneVelocityMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CBoneVelocityMetric *); /* linkage=_ZN19CBoneVelocityMetric38Schema_CompileTimeVerificationFunctionEv */
	void CBoneVelocityMetric(class CBoneVelocityMetric *); /* linkage=_ZN19CBoneVelocityMetricC4Ev */
	/* <7194c5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/bonevelocitymetric.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBoneVelocityMetric  *); /* linkage=_ZNK19CBoneVelocityMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CBoneVelocityMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CBoneVelocityMetric17GetPrimaryBindingEv */
};

// <01409E9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 46888
} /* size: 0, variables: 2 */

// <01409E97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01409E2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:12
// function call: 1
void CBoneVelocityMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01409E15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:18
void CBoneVelocityMetric::CBoneVelocityMetric()
{
} /* size: 0 */

// <01409DFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.h:18
inline void CBoneVelocityMetric::CBoneVelocityMetric()
{
} /* size: 0 */


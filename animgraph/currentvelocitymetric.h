
//
// animgraph/currentvelocitymetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E238C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:9
// function calls: 8
void CCurrentVelocityMetric::~CCurrentVelocityMetric()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMotionMetricBase::~CMotionMetricBase(); // 9
} /* size: 57, inline expansions: 8 (144 bytes) */

// <013E2105> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:9
// function calls: 13
void CCurrentVelocityMetric::~CCurrentVelocityMetric()
{
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
	CCurrentVelocityMetric::~CCurrentVelocityMetric(); // 9
} /* size: 109, inline expansions: 13 (231 bytes) */

// <013E20E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:9
inline void CCurrentVelocityMetric::~CCurrentVelocityMetric()
{
} /* size: 0 */

// <013ABB97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:9
// member functions: 43
// member variable: 1
// static member variables: 2
// vtable entries: 9
// class size: 40
class CCurrentVelocityMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CCurrentVelocityMetric> m_classInfoCCurrentVelocityMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CCurrentVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10 */
	virtual void* CastToBase(CCurrentVelocityMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10 */
	virtual const void* CastToBase(const CCurrentVelocityMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	CCurrentVelocityMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	void Schema_CompileTimeVerificationFunction(CCurrentVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CCurrentVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:13 */
	void KV3TransferPolymorphicClassname(const CCurrentVelocityMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:13 */
	CCurrentVelocityMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:13 */
	virtual void KV3TransferSave(const CCurrentVelocityMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:13 */
	virtual void KV3TransferLoad(CCurrentVelocityMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:13 */
	void KV3TransferSave_CCurrentVelocityMetric(const CCurrentVelocityMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:13 */
	void KV3TransferLoad_CCurrentVelocityMetric(CCurrentVelocityMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:18 */
	void CCurrentVelocityMetric(CCurrentVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:17 */
	virtual int GetDimensionCount(const CCurrentVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:23 */
	virtual MotionMetricCategory GetCategory(const CCurrentVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:29 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CCurrentVelocityMetric* , CMotionMetricInitContext& , CPackedData& , float);
	virtual void ~CCurrentVelocityMetric(CCurrentVelocityMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CCurrentVelocityMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK22CCurrentVelocityMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CCurrentVelocityMetric  *); /* linkage=_ZNK22CCurrentVelocityMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CCurrentVelocityMetric  *); /* linkage=_ZNK22CCurrentVelocityMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CCurrentVelocityMetric  *, class ClassID); /* linkage=_ZNK22CCurrentVelocityMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CCurrentVelocityMetric *, class ClassID); /* linkage=_ZN22CCurrentVelocityMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c453> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CCurrentVelocityMetric  *); /* linkage=_ZNK22CCurrentVelocityMetric11GetTypeInfoEv */
	void KV3TransferLoad_CCurrentVelocityMetric(class CCurrentVelocityMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN22CCurrentVelocityMetric38KV3TransferLoad_CCurrentVelocityMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CCurrentVelocityMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN22CCurrentVelocityMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CCurrentVelocityMetric(const class CCurrentVelocityMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CCurrentVelocityMetric38KV3TransferSave_CCurrentVelocityMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CCurrentVelocityMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CCurrentVelocityMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <719c5d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/currentvelocitymetric_h_schema.gen_cpp:92 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN22CCurrentVelocityMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN22CCurrentVelocityMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CCurrentVelocityMetric(class CCurrentVelocityMetric *); /* linkage=_ZN22CCurrentVelocityMetricD4Ev */
	class CCurrentVelocityMetric & operator=(class CCurrentVelocityMetric *, const class CCurrentVelocityMetric  &); /* linkage=_ZN22CCurrentVelocityMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CCurrentVelocityMetric *); /* linkage=_ZN22CCurrentVelocityMetric38Schema_CompileTimeVerificationFunctionEv */
	void CCurrentVelocityMetric(class CCurrentVelocityMetric *); /* linkage=_ZN22CCurrentVelocityMetricC4Ev */
	/* <719578> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/currentvelocitymetric.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCurrentVelocityMetric  *); /* linkage=_ZNK22CCurrentVelocityMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN22CCurrentVelocityMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN22CCurrentVelocityMetric17GetPrimaryBindingEv */
};

// <014096C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 46969
} /* size: 0, variables: 2 */

// <014096BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01409652> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:12
// function call: 1
void CCurrentVelocityMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0140963B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:18
void CCurrentVelocityMetric::CCurrentVelocityMetric()
{
} /* size: 0 */

// <01409622> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.h:18
inline void CCurrentVelocityMetric::CCurrentVelocityMetric()
{
} /* size: 0 */


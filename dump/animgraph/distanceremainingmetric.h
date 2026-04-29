
//
// animgraph/distanceremainingmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E27F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:13
// function calls: 8
void CDistanceRemainingMetric::~CDistanceRemainingMetric()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMotionMetricBase::~CMotionMetricBase(); // 13
} /* size: 57, inline expansions: 8 (144 bytes) */

// <013E256D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:13
// function calls: 13
void CDistanceRemainingMetric::~CDistanceRemainingMetric()
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
	CMotionMetricBase::~CMotionMetricBase(); // 13
	CDistanceRemainingMetric::~CDistanceRemainingMetric(); // 13
} /* size: 109, inline expansions: 13 (231 bytes) */

// <013E2551> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:13
inline void CDistanceRemainingMetric::~CDistanceRemainingMetric()
{
} /* size: 0 */

// <013ABEFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:13
// member functions: 51
// member variables: 8
// static member variables: 2
// vtable entries: 9
// class size: 64
class CDistanceRemainingMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CDistanceRemainingMetric> m_classInfoCDistanceRemainingMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CDistanceRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9 */
	virtual void* CastToBase(CDistanceRemainingMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9 */
	virtual const void* CastToBase(const CDistanceRemainingMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	CDistanceRemainingMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	void Schema_CompileTimeVerificationFunction(CDistanceRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CDistanceRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:17 */
	void KV3TransferPolymorphicClassname(const CDistanceRemainingMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:17 */
	CDistanceRemainingMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:17 */
	virtual void KV3TransferSave(const CDistanceRemainingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:17 */
	virtual void KV3TransferLoad(CDistanceRemainingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:17 */
	void KV3TransferSave_CDistanceRemainingMetric(const CDistanceRemainingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:17 */
	void KV3TransferLoad_CDistanceRemainingMetric(CDistanceRemainingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:22 */
	void CDistanceRemainingMetric(CDistanceRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:16 */
	virtual int GetDimensionCount(const CDistanceRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:22 */
	virtual MotionMetricCategory GetCategory(const CDistanceRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:28 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CDistanceRemainingMetric* , CMotionMetricInitContext& , CPackedData& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:30 */
	PropertyChangeDirtyResult_t OnParameterChangeCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:31 */
	PropertyAttrState_t VisibleIfFixedEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:32 */
	PropertyAttrState_t VisibleIfGoalDistanceEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:33 */
	PropertyAttrState_t VisibleIfGoalOvershootEnabled(void* );
	float m_flMaxDistance; /* 36 4 */
	bool m_bFilterFixedMinDistance; /* 40 1 */
	float m_flMinDistance; /* 44 4 */
	bool m_bFilterGoalDistance; /* 48 1 */
	float m_flStartGoalFilterDistance; /* 52 4 */
	bool m_bFilterGoalOvershoot; /* 56 1 */
	float m_flMaxGoalOvershootScale; /* 60 4 */
	virtual void ~CDistanceRemainingMetric(CDistanceRemainingMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CDistanceRemainingMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK24CDistanceRemainingMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CDistanceRemainingMetric  *); /* linkage=_ZNK24CDistanceRemainingMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CDistanceRemainingMetric  *); /* linkage=_ZNK24CDistanceRemainingMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CDistanceRemainingMetric  *, class ClassID); /* linkage=_ZNK24CDistanceRemainingMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CDistanceRemainingMetric *, class ClassID); /* linkage=_ZN24CDistanceRemainingMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c47d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CDistanceRemainingMetric  *); /* linkage=_ZNK24CDistanceRemainingMetric11GetTypeInfoEv */
	void KV3TransferLoad_CDistanceRemainingMetric(class CDistanceRemainingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN24CDistanceRemainingMetric40KV3TransferLoad_CDistanceRemainingMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CDistanceRemainingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN24CDistanceRemainingMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDistanceRemainingMetric(const class CDistanceRemainingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK24CDistanceRemainingMetric40KV3TransferSave_CDistanceRemainingMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CDistanceRemainingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK24CDistanceRemainingMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <719caa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/distanceremainingmetric_h_schema.gen_cpp:192 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN24CDistanceRemainingMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN24CDistanceRemainingMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CDistanceRemainingMetric(class CDistanceRemainingMetric *); /* linkage=_ZN24CDistanceRemainingMetricD4Ev */
	class CDistanceRemainingMetric & operator=(class CDistanceRemainingMetric *, const class CDistanceRemainingMetric  &); /* linkage=_ZN24CDistanceRemainingMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CDistanceRemainingMetric *); /* linkage=_ZN24CDistanceRemainingMetric38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t VisibleIfGoalOvershootEnabled(void *); /* linkage=_ZN24CDistanceRemainingMetric29VisibleIfGoalOvershootEnabledEPv */
	enum PropertyAttrState_t VisibleIfGoalDistanceEnabled(void *); /* linkage=_ZN24CDistanceRemainingMetric28VisibleIfGoalDistanceEnabledEPv */
	enum PropertyAttrState_t VisibleIfFixedEnabled(void *); /* linkage=_ZN24CDistanceRemainingMetric21VisibleIfFixedEnabledEPv */
	enum PropertyChangeDirtyResult_t OnParameterChangeCallback(void *); /* linkage=_ZN24CDistanceRemainingMetric25OnParameterChangeCallbackEPv */
	void CDistanceRemainingMetric(class CDistanceRemainingMetric *); /* linkage=_ZN24CDistanceRemainingMetricC4Ev */
	/* <71962b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/distanceremainingmetric.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDistanceRemainingMetric  *); /* linkage=_ZNK24CDistanceRemainingMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN24CDistanceRemainingMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN24CDistanceRemainingMetric17GetPrimaryBindingEv */
};

// <014090BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 47023
} /* size: 0, variables: 2 */

// <014090B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0140904E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:16
// function call: 1
void CDistanceRemainingMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01409037> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:22
void CDistanceRemainingMetric::CDistanceRemainingMetric()
{
} /* size: 0 */

// <0140901E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.h:22
inline void CDistanceRemainingMetric::CDistanceRemainingMetric()
{
} /* size: 0 */


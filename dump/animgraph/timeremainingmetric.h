
//
// animgraph/timeremainingmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <013E6BF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:9
// function calls: 8
void CTimeRemainingMetric::~CTimeRemainingMetric()
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

// <013E696D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:9
// function calls: 13
void CTimeRemainingMetric::~CTimeRemainingMetric()
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
	CTimeRemainingMetric::~CTimeRemainingMetric(); // 9
} /* size: 109, inline expansions: 13 (231 bytes) */

// <013E6951> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:9
inline void CTimeRemainingMetric::~CTimeRemainingMetric()
{
} /* size: 0 */

// <013CEFCC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:9
// member functions: 59
// member variables: 5
// static member variables: 2
// vtable entries: 9
// class size: 56
class CTimeRemainingMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
	void CTimeRemainingMetric(CTimeRemainingMetric* , CTimeRemainingMetric& );
	void CTimeRemainingMetric(CTimeRemainingMetric* , const CTimeRemainingMetric& );
private:
	static class CClassInfoT<CTimeRemainingMetric> m_classInfoCTimeRemainingMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CTimeRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9 */
	virtual void* CastToBase(CTimeRemainingMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9 */
	virtual const void* CastToBase(const CTimeRemainingMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	CTimeRemainingMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	void Schema_CompileTimeVerificationFunction(CTimeRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CTimeRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:13 */
	void KV3TransferPolymorphicClassname(const CTimeRemainingMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:13 */
	CTimeRemainingMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:13 */
	virtual void KV3TransferSave(const CTimeRemainingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:13 */
	virtual void KV3TransferLoad(CTimeRemainingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:13 */
	void KV3TransferSave_CTimeRemainingMetric(const CTimeRemainingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:13 */
	void KV3TransferLoad_CTimeRemainingMetric(CTimeRemainingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:17 */
	void CTimeRemainingMetric(CTimeRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:23 */
	virtual int GetDimensionCount(const CTimeRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:29 */
	virtual MotionMetricCategory GetCategory(const CTimeRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:35 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CTimeRemainingMetric* , CMotionMetricInitContext& , CPackedData& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:25 */
	PropertyChangeDirtyResult_t OnParameterChangeCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:26 */
	PropertyAttrState_t VisibleIfMatch(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:27 */
	PropertyAttrState_t VisibleIfFilter(void* );
	bool m_bMatchByTimeRemaining; /* 36 1 */
	float m_flMaxTimeRemaining; /* 40 4 */
	bool m_bFilterByTimeRemaining; /* 44 1 */
	float m_flMinTimeRemaining; /* 48 4 */
	virtual void ~CTimeRemainingMetric(CTimeRemainingMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CTimeRemainingMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK20CTimeRemainingMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CTimeRemainingMetric  *); /* linkage=_ZNK20CTimeRemainingMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CTimeRemainingMetric  *); /* linkage=_ZNK20CTimeRemainingMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CTimeRemainingMetric  *, class ClassID); /* linkage=_ZNK20CTimeRemainingMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CTimeRemainingMetric *, class ClassID); /* linkage=_ZN20CTimeRemainingMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c69f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CTimeRemainingMetric  *); /* linkage=_ZNK20CTimeRemainingMetric11GetTypeInfoEv */
	void CTimeRemainingMetric(class CTimeRemainingMetric *); /* linkage=_ZN20CTimeRemainingMetricC4Ev */
	void KV3TransferLoad_CTimeRemainingMetric(class CTimeRemainingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN20CTimeRemainingMetric36KV3TransferLoad_CTimeRemainingMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CTimeRemainingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN20CTimeRemainingMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CTimeRemainingMetric(const class CTimeRemainingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CTimeRemainingMetric36KV3TransferSave_CTimeRemainingMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CTimeRemainingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CTimeRemainingMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <71ad54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/timeremainingmetric_h_schema.gen_cpp:159 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CTimeRemainingMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CTimeRemainingMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CTimeRemainingMetric(class CTimeRemainingMetric *); /* linkage=_ZN20CTimeRemainingMetricD4Ev */
	class CTimeRemainingMetric & operator=(class CTimeRemainingMetric *, const class CTimeRemainingMetric  &); /* linkage=_ZN20CTimeRemainingMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CTimeRemainingMetric *); /* linkage=_ZN20CTimeRemainingMetric38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t VisibleIfFilter(void *); /* linkage=_ZN20CTimeRemainingMetric15VisibleIfFilterEPv */
	enum PropertyAttrState_t VisibleIfMatch(void *); /* linkage=_ZN20CTimeRemainingMetric14VisibleIfMatchEPv */
	enum PropertyChangeDirtyResult_t OnParameterChangeCallback(void *); /* linkage=_ZN20CTimeRemainingMetric25OnParameterChangeCallbackEPv */
	/* <719b10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/timeremainingmetric.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CTimeRemainingMetric  *); /* linkage=_ZNK20CTimeRemainingMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CTimeRemainingMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CTimeRemainingMetric17GetPrimaryBindingEv */
	void CTimeRemainingMetric(class CTimeRemainingMetric *, class CTimeRemainingMetric &); /* linkage=_ZN20CTimeRemainingMetricC4EOS_ */
	void CTimeRemainingMetric(class CTimeRemainingMetric *, const class CTimeRemainingMetric  &); /* linkage=_ZN20CTimeRemainingMetricC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20CTimeRemainingMetric8MyTypeIDEv */
	/* <140f21f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20CTimeRemainingMetric10MyTypeInfoEv */
	class CTimeRemainingMetric * Schema_MarkHelperFn(void); /* linkage=_ZN20CTimeRemainingMetric19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CTimeRemainingMetric20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CTimeRemainingMetric  *, char &); /* linkage=_ZN20CTimeRemainingMetric31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CTimeRemainingMetric * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CTimeRemainingMetric32KV3TransferAllocateClassInstanceEPKc */
};

// <013F8433> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 46915
} /* size: 0, variables: 2 */

// <013F842D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <013F83C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.h:12
// function call: 1
void CTimeRemainingMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */


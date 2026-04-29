
//
// animgraph/pathmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E57EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:12
// function calls: 18
void CPathMetric::~CPathMetric()
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
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 12
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMotionMetricBase::~CMotionMetricBase(); // 12
} /* size: 146, inline expansions: 18 (403 bytes) */

// <013E5367> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:12
// function calls: 23
void CPathMetric::~CPathMetric()
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
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 12
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
	CMotionMetricBase::~CMotionMetricBase(); // 12
	CPathMetric::~CPathMetric(); // 12
} /* size: 149, inline expansions: 23 (416 bytes) */

// <013E534B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:12
inline void CPathMetric::~CPathMetric()
{
} /* size: 0 */

// <013CE463> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:12
// member functions: 47
// member variables: 5
// static member variables: 2
// vtable entries: 9
// class size: 80
class CPathMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CPathMetric> m_classInfoCPathMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CPathMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9 */
	virtual void* CastToBase(CPathMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9 */
	virtual const void* CastToBase(const CPathMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	CPathMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	void Schema_CompileTimeVerificationFunction(CPathMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CPathMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:16 */
	void KV3TransferPolymorphicClassname(const CPathMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:16 */
	CPathMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:16 */
	virtual void KV3TransferSave(const CPathMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:16 */
	virtual void KV3TransferLoad(CPathMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:16 */
	void KV3TransferSave_CPathMetric(const CPathMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:16 */
	void KV3TransferLoad_CPathMetric(CPathMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:20 */
	void CPathMetric(CPathMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:17 */
	virtual int GetDimensionCount(const CPathMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:23 */
	virtual MotionMetricCategory GetCategory(const CPathMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:29 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CPathMetric* , CMotionMetricInitContext& , CPackedData& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:28 */
	PropertyChangeDirtyResult_t UI_OnSettingChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:29 */
	PropertyAttrState_t UI_EnableIfExtrapolating(void* );
	float m_flDistance; /* 36 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_pathSamples; /* 40 32 */
	bool m_bExtrapolateMovement; /* 72 1 */
	float m_flMinExtrapolationSpeed; /* 76 4 */
	virtual void ~CPathMetric(CPathMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CPathMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK11CPathMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CPathMetric  *); /* linkage=_ZNK11CPathMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CPathMetric  *); /* linkage=_ZNK11CPathMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CPathMetric  *, class ClassID); /* linkage=_ZNK11CPathMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CPathMetric *, class ClassID); /* linkage=_ZN11CPathMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c621> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CPathMetric  *); /* linkage=_ZNK11CPathMetric11GetTypeInfoEv */
	void KV3TransferLoad_CPathMetric(class CPathMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN11CPathMetric27KV3TransferLoad_CPathMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CPathMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN11CPathMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPathMetric(const class CPathMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CPathMetric27KV3TransferSave_CPathMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CPathMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CPathMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <71acba> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/pathmetric_h_schema.gen_cpp:150 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CPathMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CPathMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CPathMetric(class CPathMetric *); /* linkage=_ZN11CPathMetricD4Ev */
	class CPathMetric & operator=(class CPathMetric *, const class CPathMetric  &); /* linkage=_ZN11CPathMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CPathMetric *); /* linkage=_ZN11CPathMetric38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t UI_EnableIfExtrapolating(void *); /* linkage=_ZN11CPathMetric24UI_EnableIfExtrapolatingEPv */
	enum PropertyChangeDirtyResult_t UI_OnSettingChanged(void *); /* linkage=_ZN11CPathMetric19UI_OnSettingChangedEPv */
	void CPathMetric(class CPathMetric *); /* linkage=_ZN11CPathMetricC4Ev */
	/* <7199aa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/pathmetric.h:15 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPathMetric  *); /* linkage=_ZNK11CPathMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CPathMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CPathMetric17GetPrimaryBindingEv */
};

// <013FAA68> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 46692
} /* size: 0, variables: 2 */

// <013FAA62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <013FA9F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:15
// function call: 1
void CPathMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 15
} /* size: 0, inline expansions: 1 (0 bytes) */

// <013FA9E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:20
void CPathMetric::CPathMetric()
{
} /* size: 0 */

// <013FA9C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.h:20
inline void CPathMetric::CPathMetric()
{
} /* size: 0 */


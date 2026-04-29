
//
// animgraph/footcyclemetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E2F4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:9
// variable: 1
// function calls: 22
void CFootCycleMetric::~CFootCycleMetric()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 9
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMotionMetricBase::~CMotionMetricBase(); // 9
} /* size: 235, inline expansions: 18 (594 bytes) */

// <013E29D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:9
// variable: 1
// function calls: 27
void CFootCycleMetric::~CFootCycleMetric()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 9
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
	CFootCycleMetric::~CFootCycleMetric(); // 9
} /* size: 231, inline expansions: 23 (734 bytes) */

// <013E29B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:9
inline void CFootCycleMetric::~CFootCycleMetric()
{
} /* size: 0 */

// <013AC347> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:9
// member functions: 43
// member variables: 2
// static member variables: 2
// vtable entries: 9
// class size: 72
class CFootCycleMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CFootCycleMetric> m_classInfoCFootCycleMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CFootCycleMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10 */
	virtual void* CastToBase(CFootCycleMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10 */
	virtual const void* CastToBase(const CFootCycleMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	CFootCycleMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	void Schema_CompileTimeVerificationFunction(CFootCycleMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFootCycleMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:13 */
	void KV3TransferPolymorphicClassname(const CFootCycleMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:13 */
	CFootCycleMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:13 */
	virtual void KV3TransferSave(const CFootCycleMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:13 */
	virtual void KV3TransferLoad(CFootCycleMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:13 */
	void KV3TransferSave_CFootCycleMetric(const CFootCycleMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:13 */
	void KV3TransferLoad_CFootCycleMetric(CFootCycleMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:18 */
	void CFootCycleMetric(CFootCycleMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:17 */
	virtual int GetDimensionCount(const CFootCycleMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:23 */
	virtual MotionMetricCategory GetCategory(const CFootCycleMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:29 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CFootCycleMetric* , CMotionMetricInitContext& , CPackedData& , float);
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_feet; /* 40 32 */
	virtual void ~CFootCycleMetric(CFootCycleMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CFootCycleMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK16CFootCycleMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CFootCycleMetric  *); /* linkage=_ZNK16CFootCycleMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CFootCycleMetric  *); /* linkage=_ZNK16CFootCycleMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CFootCycleMetric  *, class ClassID); /* linkage=_ZNK16CFootCycleMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFootCycleMetric *, class ClassID); /* linkage=_ZN16CFootCycleMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c4a7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFootCycleMetric  *); /* linkage=_ZNK16CFootCycleMetric11GetTypeInfoEv */
	/* <71c372> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footcyclemetric_h_schema.gen_cpp:148 */
	void KV3TransferLoad_CFootCycleMetric(class CFootCycleMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN16CFootCycleMetric32KV3TransferLoad_CFootCycleMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFootCycleMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN16CFootCycleMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootCycleMetric(const class CFootCycleMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CFootCycleMetric32KV3TransferSave_CFootCycleMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFootCycleMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CFootCycleMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <719cf7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footcyclemetric_h_schema.gen_cpp:122 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CFootCycleMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CFootCycleMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFootCycleMetric(class CFootCycleMetric *); /* linkage=_ZN16CFootCycleMetricD4Ev */
	class CFootCycleMetric & operator=(class CFootCycleMetric *, const class CFootCycleMetric  &); /* linkage=_ZN16CFootCycleMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFootCycleMetric *); /* linkage=_ZN16CFootCycleMetric38Schema_CompileTimeVerificationFunctionEv */
	void CFootCycleMetric(class CFootCycleMetric *); /* linkage=_ZN16CFootCycleMetricC4Ev */
	/* <7196de> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footcyclemetric.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootCycleMetric  *); /* linkage=_ZNK16CFootCycleMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CFootCycleMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CFootCycleMetric17GetPrimaryBindingEv */
};

// <01408A4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 46812
} /* size: 0, variables: 2 */

// <01408A44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014089D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:12
// function call: 1
void CFootCycleMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */

// <014089C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:18
void CFootCycleMetric::CFootCycleMetric()
{
} /* size: 0 */

// <014089A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.h:18
inline void CFootCycleMetric::CFootCycleMetric()
{
} /* size: 0 */


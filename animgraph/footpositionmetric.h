
//
// animgraph/footpositionmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E3913> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:9
// variable: 1
// function calls: 22
void CFootPositionMetric::~CFootPositionMetric()
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

// <013E339A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:9
// variable: 1
// function calls: 27
void CFootPositionMetric::~CFootPositionMetric()
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
	CFootPositionMetric::~CFootPositionMetric(); // 9
} /* size: 231, inline expansions: 23 (734 bytes) */

// <013E337E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:9
inline void CFootPositionMetric::~CFootPositionMetric()
{
} /* size: 0 */

// <013ADDD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:9
// member functions: 43
// member variables: 3
// static member variables: 2
// vtable entries: 9
// class size: 80
class CFootPositionMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CFootPositionMetric> m_classInfoCFootPositionMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CFootPositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9 */
	virtual void* CastToBase(CFootPositionMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9 */
	virtual const void* CastToBase(const CFootPositionMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	CFootPositionMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	void Schema_CompileTimeVerificationFunction(CFootPositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFootPositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:13 */
	void KV3TransferPolymorphicClassname(const CFootPositionMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:13 */
	CFootPositionMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:13 */
	virtual void KV3TransferSave(const CFootPositionMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:13 */
	virtual void KV3TransferLoad(CFootPositionMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:13 */
	void KV3TransferSave_CFootPositionMetric(const CFootPositionMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:13 */
	void KV3TransferLoad_CFootPositionMetric(CFootPositionMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:17 */
	void CFootPositionMetric(CFootPositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:16 */
	virtual int GetDimensionCount(const CFootPositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:22 */
	virtual MotionMetricCategory GetCategory(const CFootPositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:28 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CFootPositionMetric* , CMotionMetricInitContext& , CPackedData& , float);
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_feet; /* 40 32 */
	bool m_bIgnoreSlope; /* 72 1 */
	virtual void ~CFootPositionMetric(CFootPositionMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CFootPositionMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK19CFootPositionMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CFootPositionMetric  *); /* linkage=_ZNK19CFootPositionMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CFootPositionMetric  *); /* linkage=_ZNK19CFootPositionMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CFootPositionMetric  *, class ClassID); /* linkage=_ZNK19CFootPositionMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFootPositionMetric *, class ClassID); /* linkage=_ZN19CFootPositionMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c4d1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFootPositionMetric  *); /* linkage=_ZNK19CFootPositionMetric11GetTypeInfoEv */
	/* <71bebb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footpositionmetric_h_schema.gen_cpp:158 */
	void KV3TransferLoad_CFootPositionMetric(class CFootPositionMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFootPositionMetric35KV3TransferLoad_CFootPositionMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFootPositionMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFootPositionMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootPositionMetric(const class CFootPositionMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFootPositionMetric35KV3TransferSave_CFootPositionMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFootPositionMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFootPositionMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <719d44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footpositionmetric_h_schema.gen_cpp:131 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CFootPositionMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CFootPositionMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFootPositionMetric(class CFootPositionMetric *); /* linkage=_ZN19CFootPositionMetricD4Ev */
	class CFootPositionMetric & operator=(class CFootPositionMetric *, const class CFootPositionMetric  &); /* linkage=_ZN19CFootPositionMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFootPositionMetric *); /* linkage=_ZN19CFootPositionMetric38Schema_CompileTimeVerificationFunctionEv */
	void CFootPositionMetric(class CFootPositionMetric *); /* linkage=_ZN19CFootPositionMetricC4Ev */
	/* <719791> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footpositionmetric.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootPositionMetric  *); /* linkage=_ZNK19CFootPositionMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CFootPositionMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CFootPositionMetric17GetPrimaryBindingEv */
};

// <01407A12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 46888
} /* size: 0, variables: 2 */

// <01407A0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <014079A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:12
// function call: 1
void CFootPositionMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0140798A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:17
void CFootPositionMetric::CFootPositionMetric()
{
} /* size: 0 */

// <01407971> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.h:17
inline void CFootPositionMetric::CFootPositionMetric()
{
} /* size: 0 */


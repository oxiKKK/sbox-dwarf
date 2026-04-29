
//
// animgraph/stepsremainingmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <013E6521> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:9
// variable: 1
// function calls: 22
void CStepsRemainingMetric::~CStepsRemainingMetric()
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

// <013E5FA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:9
// variable: 1
// function calls: 27
void CStepsRemainingMetric::~CStepsRemainingMetric()
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
	CStepsRemainingMetric::~CStepsRemainingMetric(); // 9
} /* size: 231, inline expansions: 23 (734 bytes) */

// <013E5F8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:9
inline void CStepsRemainingMetric::~CStepsRemainingMetric()
{
} /* size: 0 */

// <013CEC04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:9
// member functions: 53
// member variables: 3
// static member variables: 2
// vtable entries: 9
// class size: 80
class CStepsRemainingMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
	void CStepsRemainingMetric(CStepsRemainingMetric* , CStepsRemainingMetric& );
	void CStepsRemainingMetric(CStepsRemainingMetric* , const CStepsRemainingMetric& );
private:
	static class CClassInfoT<CStepsRemainingMetric> m_classInfoCStepsRemainingMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CStepsRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9 */
	virtual void* CastToBase(CStepsRemainingMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9 */
	virtual const void* CastToBase(const CStepsRemainingMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	CStepsRemainingMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	void Schema_CompileTimeVerificationFunction(CStepsRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CStepsRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:13 */
	void KV3TransferPolymorphicClassname(const CStepsRemainingMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:13 */
	CStepsRemainingMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:13 */
	virtual void KV3TransferSave(const CStepsRemainingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:13 */
	virtual void KV3TransferLoad(CStepsRemainingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:13 */
	void KV3TransferSave_CStepsRemainingMetric(const CStepsRemainingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:13 */
	void KV3TransferLoad_CStepsRemainingMetric(CStepsRemainingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:16 */
	void CStepsRemainingMetric(CStepsRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:22 */
	virtual int GetDimensionCount(const CStepsRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:28 */
	virtual MotionMetricCategory GetCategory(const CStepsRemainingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:34 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CStepsRemainingMetric* , CMotionMetricInitContext& , CPackedData& , float);
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_feet; /* 40 32 */
	float m_flMinStepsRemaining; /* 72 4 */
	virtual void ~CStepsRemainingMetric(CStepsRemainingMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CStepsRemainingMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK21CStepsRemainingMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CStepsRemainingMetric  *); /* linkage=_ZNK21CStepsRemainingMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CStepsRemainingMetric  *); /* linkage=_ZNK21CStepsRemainingMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CStepsRemainingMetric  *, class ClassID); /* linkage=_ZNK21CStepsRemainingMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CStepsRemainingMetric *, class ClassID); /* linkage=_ZN21CStepsRemainingMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c675> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CStepsRemainingMetric  *); /* linkage=_ZNK21CStepsRemainingMetric11GetTypeInfoEv */
	void CStepsRemainingMetric(class CStepsRemainingMetric *); /* linkage=_ZN21CStepsRemainingMetricC4Ev */
	/* <71b89d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/stepsremainingmetric_h_schema.gen_cpp:158 */
	void KV3TransferLoad_CStepsRemainingMetric(class CStepsRemainingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN21CStepsRemainingMetric37KV3TransferLoad_CStepsRemainingMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CStepsRemainingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN21CStepsRemainingMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CStepsRemainingMetric(const class CStepsRemainingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CStepsRemainingMetric37KV3TransferSave_CStepsRemainingMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CStepsRemainingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CStepsRemainingMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <71ad07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/stepsremainingmetric_h_schema.gen_cpp:131 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CStepsRemainingMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CStepsRemainingMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CStepsRemainingMetric(class CStepsRemainingMetric *); /* linkage=_ZN21CStepsRemainingMetricD4Ev */
	class CStepsRemainingMetric & operator=(class CStepsRemainingMetric *, const class CStepsRemainingMetric  &); /* linkage=_ZN21CStepsRemainingMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CStepsRemainingMetric *); /* linkage=_ZN21CStepsRemainingMetric38Schema_CompileTimeVerificationFunctionEv */
	/* <719a5d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/stepsremainingmetric.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CStepsRemainingMetric  *); /* linkage=_ZNK21CStepsRemainingMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CStepsRemainingMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CStepsRemainingMetric17GetPrimaryBindingEv */
	void CStepsRemainingMetric(class CStepsRemainingMetric *, class CStepsRemainingMetric &); /* linkage=_ZN21CStepsRemainingMetricC4EOS_ */
	void CStepsRemainingMetric(class CStepsRemainingMetric *, const class CStepsRemainingMetric  &); /* linkage=_ZN21CStepsRemainingMetricC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21CStepsRemainingMetric8MyTypeIDEv */
	/* <140f201> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21CStepsRemainingMetric10MyTypeInfoEv */
	class CStepsRemainingMetric * Schema_MarkHelperFn(void); /* linkage=_ZN21CStepsRemainingMetric19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN21CStepsRemainingMetric20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CStepsRemainingMetric  *, char &); /* linkage=_ZN21CStepsRemainingMetric31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CStepsRemainingMetric * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN21CStepsRemainingMetric32KV3TransferAllocateClassInstanceEPKc */
};

// <013F961D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 46942
} /* size: 0, variables: 2 */

// <013F9617> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <013F95AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.h:12
// function call: 1
void CStepsRemainingMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */


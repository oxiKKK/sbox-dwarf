
//
// animgraph/futurefacingmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E444E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:13
// function calls: 8
void CFutureFacingMetric::~CFutureFacingMetric()
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

// <013E41C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:13
// function calls: 13
void CFutureFacingMetric::~CFutureFacingMetric()
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
	CFutureFacingMetric::~CFutureFacingMetric(); // 13
} /* size: 109, inline expansions: 13 (231 bytes) */

// <013E41AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:13
inline void CFutureFacingMetric::~CFutureFacingMetric()
{
} /* size: 0 */

// <013B04BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:13
// member functions: 43
// member variables: 2
// static member variables: 2
// vtable entries: 9
// class size: 40
class CFutureFacingMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CFutureFacingMetric> m_classInfoCFutureFacingMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CFutureFacingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9 */
	virtual void* CastToBase(CFutureFacingMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9 */
	virtual const void* CastToBase(const CFutureFacingMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	CFutureFacingMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	void Schema_CompileTimeVerificationFunction(CFutureFacingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFutureFacingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:17 */
	void KV3TransferPolymorphicClassname(const CFutureFacingMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:17 */
	CFutureFacingMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:17 */
	virtual void KV3TransferSave(const CFutureFacingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:17 */
	virtual void KV3TransferLoad(CFutureFacingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:17 */
	void KV3TransferSave_CFutureFacingMetric(const CFutureFacingMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:17 */
	void KV3TransferLoad_CFutureFacingMetric(CFutureFacingMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:21 */
	void CFutureFacingMetric(CFutureFacingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:16 */
	virtual int GetDimensionCount(const CFutureFacingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:22 */
	virtual MotionMetricCategory GetCategory(const CFutureFacingMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:28 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CFutureFacingMetric* , CMotionMetricInitContext& , CPackedData& , float);
	float m_flDistance; /* 36 4 */
	virtual void ~CFutureFacingMetric(CFutureFacingMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CFutureFacingMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK19CFutureFacingMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CFutureFacingMetric  *); /* linkage=_ZNK19CFutureFacingMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CFutureFacingMetric  *); /* linkage=_ZNK19CFutureFacingMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CFutureFacingMetric  *, class ClassID); /* linkage=_ZNK19CFutureFacingMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFutureFacingMetric *, class ClassID); /* linkage=_ZN19CFutureFacingMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c525> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFutureFacingMetric  *); /* linkage=_ZNK19CFutureFacingMetric11GetTypeInfoEv */
	/* <71a79d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/futurefacingmetric_h_schema.gen_cpp:143 */
	void KV3TransferLoad_CFutureFacingMetric(class CFutureFacingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFutureFacingMetric35KV3TransferLoad_CFutureFacingMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFutureFacingMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFutureFacingMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <719dde> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/futurefacingmetric_h_schema.gen_cpp:130 */
	void KV3TransferSave_CFutureFacingMetric(const class CFutureFacingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFutureFacingMetric35KV3TransferSave_CFutureFacingMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFutureFacingMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFutureFacingMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <719d91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/futurefacingmetric_h_schema.gen_cpp:117 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CFutureFacingMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CFutureFacingMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFutureFacingMetric(class CFutureFacingMetric *); /* linkage=_ZN19CFutureFacingMetricD4Ev */
	class CFutureFacingMetric & operator=(class CFutureFacingMetric *, const class CFutureFacingMetric  &); /* linkage=_ZN19CFutureFacingMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFutureFacingMetric *); /* linkage=_ZN19CFutureFacingMetric38Schema_CompileTimeVerificationFunctionEv */
	void CFutureFacingMetric(class CFutureFacingMetric *); /* linkage=_ZN19CFutureFacingMetricC4Ev */
	/* <719844> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/futurefacingmetric.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFutureFacingMetric  *); /* linkage=_ZNK19CFutureFacingMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CFutureFacingMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CFutureFacingMetric17GetPrimaryBindingEv */
};

// <01405788> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 46888
} /* size: 0, variables: 2 */

// <01405782> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01405717> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:16
// function call: 1
void CFutureFacingMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01405700> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:21
void CFutureFacingMetric::CFutureFacingMetric()
{
} /* size: 0 */

// <014056E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.h:21
inline void CFutureFacingMetric::CFutureFacingMetric()
{
} /* size: 0 */



//
// animgraph/bonepositionmetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E1A56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:9
// function calls: 9
void CBonePositionMetric::~CBonePositionMetric()
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

// <013E1753> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:9
// function calls: 14
void CBonePositionMetric::~CBonePositionMetric()
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
	CBonePositionMetric::~CBonePositionMetric(); // 9
} /* size: 135, inline expansions: 14 (216 bytes) */

// <013E1737> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:9
inline void CBonePositionMetric::~CBonePositionMetric()
{
} /* size: 0 */

// <013A957E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:9
// member functions: 45
// member variables: 2
// static member variables: 2
// vtable entries: 10
// class size: 48
class CBonePositionMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CBonePositionMetric> m_classInfoCBonePositionMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CBonePositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10 */
	virtual void* CastToBase(CBonePositionMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10 */
	virtual const void* CastToBase(const CBonePositionMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	CBonePositionMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	void Schema_CompileTimeVerificationFunction(CBonePositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBonePositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:13 */
	void KV3TransferPolymorphicClassname(const CBonePositionMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:13 */
	CBonePositionMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:13 */
	virtual void KV3TransferSave(const CBonePositionMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:13 */
	virtual void KV3TransferLoad(CBonePositionMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:13 */
	void KV3TransferSave_CBonePositionMetric(const CBonePositionMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:13 */
	void KV3TransferLoad_CBonePositionMetric(CBonePositionMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:18 */
	void CBonePositionMetric(CBonePositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:17 */
	virtual CUtlString GetUIName(const CBonePositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:23 */
	virtual int GetDimensionCount(const CBonePositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:29 */
	virtual MotionMetricCategory GetCategory(const CBonePositionMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:35 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CBonePositionMetric* , CMotionMetricInitContext& , CPackedData& , float);
	CUtlString m_boneName; /* 40 8 */
	virtual void ~CBonePositionMetric(CBonePositionMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CBonePositionMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK19CBonePositionMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CBonePositionMetric  *); /* linkage=_ZNK19CBonePositionMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CBonePositionMetric  *); /* linkage=_ZNK19CBonePositionMetric17GetDimensionCountEv */
	virtual class CUtlString GetUIName(const class CBonePositionMetric  *); /* linkage=_ZNK19CBonePositionMetric9GetUINameEv */
	virtual const void  * CastToBase(const class CBonePositionMetric  *, class ClassID); /* linkage=_ZNK19CBonePositionMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CBonePositionMetric *, class ClassID); /* linkage=_ZN19CBonePositionMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c3ff> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CBonePositionMetric  *); /* linkage=_ZNK19CBonePositionMetric11GetTypeInfoEv */
	void KV3TransferLoad_CBonePositionMetric(class CBonePositionMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CBonePositionMetric35KV3TransferLoad_CBonePositionMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CBonePositionMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN19CBonePositionMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBonePositionMetric(const class CBonePositionMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CBonePositionMetric35KV3TransferSave_CBonePositionMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CBonePositionMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CBonePositionMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <719bc3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/bonepositionmetric_h_schema.gen_cpp:120 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CBonePositionMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CBonePositionMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CBonePositionMetric(class CBonePositionMetric *); /* linkage=_ZN19CBonePositionMetricD4Ev */
	class CBonePositionMetric & operator=(class CBonePositionMetric *, const class CBonePositionMetric  &); /* linkage=_ZN19CBonePositionMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CBonePositionMetric *); /* linkage=_ZN19CBonePositionMetric38Schema_CompileTimeVerificationFunctionEv */
	void CBonePositionMetric(class CBonePositionMetric *); /* linkage=_ZN19CBonePositionMetricC4Ev */
	/* <719412> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/bonepositionmetric.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBonePositionMetric  *); /* linkage=_ZNK19CBonePositionMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CBonePositionMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CBonePositionMetric17GetPrimaryBindingEv */
};

// <0140A8CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 46888
} /* size: 0, variables: 2 */

// <0140A8C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0140A85D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:12
// function call: 1
void CBonePositionMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0140A7B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:18
void CBonePositionMetric::CBonePositionMetric()
{
} /* size: 0 */

// <0140A799> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.h:18
inline void CBonePositionMetric::CBonePositionMetric()
{
} /* size: 0 */


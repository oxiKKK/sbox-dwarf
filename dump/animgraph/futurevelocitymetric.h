
//
// animgraph/futurevelocitymetric.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <013E4D1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:12
// function calls: 8
void CFutureVelocityMetric::~CFutureVelocityMetric()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CMotionMetricBase::~CMotionMetricBase(); // 12
} /* size: 57, inline expansions: 8 (144 bytes) */

// <013E4A97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:12
// function calls: 13
void CFutureVelocityMetric::~CFutureVelocityMetric()
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
	CMotionMetricBase::~CMotionMetricBase(); // 12
	CFutureVelocityMetric::~CFutureVelocityMetric(); // 12
} /* size: 109, inline expansions: 13 (231 bytes) */

// <013E4A7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:12
inline void CFutureVelocityMetric::~CFutureVelocityMetric()
{
} /* size: 0 */

// <013B0C09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:12
// member functions: 47
// member variables: 6
// static member variables: 2
// vtable entries: 9
// class size: 56
class CFutureVelocityMetric : public CMotionMetricBase {
public:
	/* class CMotionMetricBase <ancestor>; */ /* 0 40 */
private:
	static class CClassInfoT<CFutureVelocityMetric> m_classInfoCFutureVelocityMetric; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CFutureVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9 */
	virtual void* CastToBase(CFutureVelocityMetric* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9 */
	virtual const void* CastToBase(const CFutureVelocityMetric* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	CFutureVelocityMetric* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	void Schema_CompileTimeVerificationFunction(CFutureVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFutureVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:16 */
	void KV3TransferPolymorphicClassname(const CFutureVelocityMetric* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:16 */
	CFutureVelocityMetric* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:16 */
	virtual void KV3TransferSave(const CFutureVelocityMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:16 */
	virtual void KV3TransferLoad(CFutureVelocityMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:16 */
	void KV3TransferSave_CFutureVelocityMetric(const CFutureVelocityMetric* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:16 */
	void KV3TransferLoad_CFutureVelocityMetric(CFutureVelocityMetric* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:20 */
	void CFutureVelocityMetric(CFutureVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:16 */
	virtual int GetDimensionCount(const CFutureVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:29 */
	virtual MotionMetricCategory GetCategory(const CFutureVelocityMetric* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:35 */
	virtual CMotionMetricEvaluator* CreateEvaluator(const CFutureVelocityMetric* , CMotionMetricInitContext& , CPackedData& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:28 */
	PropertyChangeDirtyResult_t UI_OnSettingChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:29 */
	PropertyAttrState_t UI_EnableIfManualSpeed(void* );
	float m_flDistance; /* 36 4 */
	float m_flStoppingDistance; /* 40 4 */
	bool m_bIgnoreDirection; /* 44 1 */
	bool m_bAutoTargetSpeed; /* 45 1 */
	float m_flManualTargetSpeed; /* 48 4 */
	virtual void ~CFutureVelocityMetric(CFutureVelocityMetric* );
	virtual class CMotionMetricEvaluator * CreateEvaluator(const class CFutureVelocityMetric  *, class CMotionMetricInitContext &, CPackedData &, float); /* linkage=_ZNK21CFutureVelocityMetric15CreateEvaluatorER24CMotionMetricInitContextR12CPackedDataTILb0EEf */
	virtual enum MotionMetricCategory GetCategory(const class CFutureVelocityMetric  *); /* linkage=_ZNK21CFutureVelocityMetric11GetCategoryEv */
	virtual int GetDimensionCount(const class CFutureVelocityMetric  *); /* linkage=_ZNK21CFutureVelocityMetric17GetDimensionCountEv */
	virtual const void  * CastToBase(const class CFutureVelocityMetric  *, class ClassID); /* linkage=_ZNK21CFutureVelocityMetric10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFutureVelocityMetric *, class ClassID); /* linkage=_ZN21CFutureVelocityMetric10CastToBaseEN10Reflection7ClassIDE */
	/* <140c579> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFutureVelocityMetric  *); /* linkage=_ZNK21CFutureVelocityMetric11GetTypeInfoEv */
	void KV3TransferLoad_CFutureVelocityMetric(class CFutureVelocityMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN21CFutureVelocityMetric37KV3TransferLoad_CFutureVelocityMetricEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFutureVelocityMetric *, class CKV3TransferLoadContext *); /* linkage=_ZN21CFutureVelocityMetric15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFutureVelocityMetric(const class CFutureVelocityMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CFutureVelocityMetric37KV3TransferSave_CFutureVelocityMetricEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFutureVelocityMetric  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CFutureVelocityMetric15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <71a66f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/futurevelocitymetric_h_schema.gen_cpp:159 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CFutureVelocityMetric32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CFutureVelocityMetric15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFutureVelocityMetric(class CFutureVelocityMetric *); /* linkage=_ZN21CFutureVelocityMetricD4Ev */
	class CFutureVelocityMetric & operator=(class CFutureVelocityMetric *, const class CFutureVelocityMetric  &); /* linkage=_ZN21CFutureVelocityMetricaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFutureVelocityMetric *); /* linkage=_ZN21CFutureVelocityMetric38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t UI_EnableIfManualSpeed(void *); /* linkage=_ZN21CFutureVelocityMetric22UI_EnableIfManualSpeedEPv */
	enum PropertyChangeDirtyResult_t UI_OnSettingChanged(void *); /* linkage=_ZN21CFutureVelocityMetric19UI_OnSettingChangedEPv */
	void CFutureVelocityMetric(class CFutureVelocityMetric *); /* linkage=_ZN21CFutureVelocityMetricC4Ev */
	/* <7198f7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/futurevelocitymetric.h:15 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFutureVelocityMetric  *); /* linkage=_ZNK21CFutureVelocityMetric21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CFutureVelocityMetric22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CFutureVelocityMetric17GetPrimaryBindingEv */
};

// <01404397> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 46942
} /* size: 0, variables: 2 */

// <01404391> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01404326> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:15
// function call: 1
void CFutureVelocityMetric::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 15
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0140430F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:20
void CFutureVelocityMetric::CFutureVelocityMetric()
{
} /* size: 0 */

// <014042F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.h:20
inline void CFutureVelocityMetric::CFutureVelocityMetric()
{
} /* size: 0 */



//
// animgraph/footlockanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 2
//

// <010574B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:11
void CFootLockItem::~CFootLockItem()
{
} /* size: 0 */

// <0105749A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:11
inline void CFootLockItem::~CFootLockItem()
{
} /* size: 0 */

// <010181F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:11
// member functions: 33
// member variables: 6
// static member variable: 1
// class size: 40
class CFootLockItem {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	CFootLockItem* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	void Schema_CompileTimeVerificationFunction(CFootLockItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:13 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootLockItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:14 */
	CFootLockItem* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:14 */
	void KV3TransferSave(const CFootLockItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:14 */
	void KV3TransferLoad(CFootLockItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:14 */
	void KV3TransferSave_CFootLockItem(const CFootLockItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:14 */
	void KV3TransferLoad_CFootLockItem(CFootLockItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:20 */
	void CFootLockItem(CFootLockItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:22 */
	void GetItemName(void* , CUtlString* );
	CUtlString m_footName; /* 0 8 */
	CUtlString m_targetBoneName; /* 8 8 */
	CUtlString m_ikChainName; /* 16 8 */
	AnimTagID m_disableTagID; /* 24 4 */
	float m_flMaxRotationLeft; /* 28 4 */
	float m_flMaxRotationRight; /* 32 4 */
	void ~CFootLockItem(CFootLockItem* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN13CFootLockItem17GetPrimaryBindingEv */
	class CFootLockItem * Schema_MarkHelperFn(void); /* linkage=_ZN13CFootLockItem19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN13CFootLockItem15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <518897> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footlockanimnode_h_schema.gen_cpp:172 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN13CFootLockItem32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootLockItem *); /* linkage=_ZN13CFootLockItem38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN13CFootLockItem20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN13CFootLockItem22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootLockItem  *); /* linkage=_ZNK13CFootLockItem21Schema_DynamicBindingEv */
	class CFootLockItem * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN13CFootLockItem32KV3TransferAllocateClassInstanceEPKc */
	/* <5188e4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footlockanimnode_h_schema.gen_cpp:180 */
	void KV3TransferSave(const class CFootLockItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CFootLockItem15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <51893e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footlockanimnode_h_schema.gen_cpp:195 */
	void KV3TransferLoad(class CFootLockItem *, class CKV3TransferLoadContext *); /* linkage=_ZN13CFootLockItem15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootLockItem(const class CFootLockItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CFootLockItem29KV3TransferSave_CFootLockItemEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootLockItem(class CFootLockItem *, class CKV3TransferLoadContext *); /* linkage=_ZN13CFootLockItem29KV3TransferLoad_CFootLockItemEP23CKV3TransferLoadContext */
	void CFootLockItem(class CFootLockItem *); /* linkage=_ZN13CFootLockItemC4Ev */
	void GetItemName(void *, class CUtlString *); /* linkage=_ZN13CFootLockItem11GetItemNameEPvP10CUtlString */
	class CFootLockItem & operator=(class CFootLockItem *, const class CFootLockItem  &); /* linkage=_ZN13CFootLockItemaSERKS_ */
	void ~CFootLockItem(class CFootLockItem *); /* linkage=_ZN13CFootLockItemD4Ev */
};

// <01051E3C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:34
// variable: 1
// function calls: 28
void CFootLockAnimNode::~CFootLockAnimNode()
{
	CUtlString::~CUtlString(); // 34
	{
		int i; // 1721
		CUtlMemory<CFootLockItem, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 11
		CUtlString::~CUtlString(); // 11
		CUtlString::~CUtlString(); // 11
		CFootLockItem::~CFootLockItem(); // 1526
		Destruct<CFootLockItem>(CFootLockItem* pMemory); // 1723
	}
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::RemoveAll(); // 1798
	CUtlMemory<CFootLockItem, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFootLockItem, int>::Purge(); // 903
	CUtlMemory<CFootLockItem, int>::Purge(); // 1799
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::Purge(); // 560
	ValidateAlignment<CFootLockItem>(void); // 508
	CUtlMemory<CFootLockItem, int>::Purge(); // 510
	CUtlMemory<CFootLockItem, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFootLockItem, CUtlMemory<CFootLockItem, int> >::~CUtlVector(); // 34
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 34
} /* size: 325, inline expansions: 21 (783 bytes) */

// <0105171F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:34
// variable: 1
// function calls: 33
void CFootLockAnimNode::~CFootLockAnimNode()
{
	CUtlString::~CUtlString(); // 34
	{
		int i; // 1721
		CUtlMemory<CFootLockItem, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 11
		CUtlString::~CUtlString(); // 11
		CUtlString::~CUtlString(); // 11
		CFootLockItem::~CFootLockItem(); // 1526
		Destruct<CFootLockItem>(CFootLockItem* pMemory); // 1723
	}
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::RemoveAll(); // 1798
	CUtlMemory<CFootLockItem, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFootLockItem, int>::Purge(); // 903
	CUtlMemory<CFootLockItem, int>::Purge(); // 1799
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::Purge(); // 560
	ValidateAlignment<CFootLockItem>(void); // 508
	CUtlMemory<CFootLockItem, int>::Purge(); // 510
	CUtlMemory<CFootLockItem, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFootLockItem, CUtlMemory<CFootLockItem, int> >::~CUtlVector(); // 34
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 35
	Object::~Object(); // 30
	IAnimNode::~IAnimNode(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 34
	CFootLockAnimNode::~CFootLockAnimNode(); // 34
} /* size: 319, inline expansions: 26 (1007 bytes) */

// <01051703> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:34
inline void CFootLockAnimNode::~CFootLockAnimNode()
{
} /* size: 0 */

// <01018436> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:34
// member functions: 75
// member variables: 37
// static member variables: 2
// vtable entries: 14
// class size: 328
class CFootLockAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CFootLockAnimNode(CFootLockAnimNode* , CFootLockAnimNode& );
	void CFootLockAnimNode(CFootLockAnimNode* , const CFootLockAnimNode& );
private:
	static class CClassInfoT<CFootLockAnimNode> m_classInfoCFootLockAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:36 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const CFootLockAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13 */
	virtual void* CastToBase(CFootLockAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13 */
	virtual const void* CastToBase(const CFootLockAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	CFootLockAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	void Schema_CompileTimeVerificationFunction(CFootLockAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFootLockAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:38 */
	void KV3TransferPolymorphicClassname(const CFootLockAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:38 */
	CFootLockAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:38 */
	virtual void KV3TransferSave(const CFootLockAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:38 */
	virtual void KV3TransferLoad(CFootLockAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:38 */
	void KV3TransferSave_CFootLockAnimNode(const CFootLockAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:38 */
	void KV3TransferLoad_CFootLockAnimNode(CFootLockAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:32 */
	void CFootLockAnimNode(CFootLockAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:37 */
	virtual int GetChildCount(const CFootLockAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:43 */
	virtual IAnimNode* GetChild(const CFootLockAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:49 */
	virtual AnimNodeID GetChildID(const CFootLockAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:55 */
	virtual void SetChildID(CFootLockAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:61 */
	virtual const CUtlString& GetChildName(const CFootLockAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:74 */
	virtual void SetInputConnection(CFootLockAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:68 */
	virtual AnimOutputID GetChildOutputID(const CFootLockAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:80 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CFootLockAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:55 */
	PropertyChangeDirtyResult_t UIOnPropertyChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:56 */
	PropertyAttrState_t VisibleIfStepHeightEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:57 */
	PropertyAttrState_t VisibleIfTwoBoneIKEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:58 */
	PropertyAttrState_t VisibleIfGroundTracingEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:59 */
	PropertyAttrState_t VisibleIfHipDropEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:60 */
	PropertyAttrState_t VisibleIfRootDampingEnabled(void* );
	CNodeConnection m_inputConnection; /* 64 8 */
	CUtlVector<CFootLockItem, CUtlMemory<CFootLockItem, int> > m_items; /* 72 32 */
	CUtlString m_hipBoneName; /* 104 8 */
	float m_flBlendTime; /* 112 4 */
	bool m_bApplyFootRotationLimits; /* 116 1 */
	bool m_bResetChild; /* 117 1 */
	IKSolverType m_ikSolverType; /* 120 4 */
	bool m_bAlwaysUseFallbackHinge; /* 124 1 */
	float m_flStrideCurveScale; /* 128 4 */
	float m_flStrideCurveLimitScale; /* 132 4 */
	bool m_bEnableVerticalCurvedPaths; /* 136 1 */
	bool m_bModulateStepHeight; /* 137 1 */
	float m_flStepHeightIncreaseScale; /* 140 4 */
	float m_flStepHeightDecreaseScale; /* 144 4 */
	bool m_bEnableHipShift; /* 148 1 */
	float m_flHipShiftScale; /* 152 4 */
	CAnimInputDamping m_hipShiftDamping; /* 160 0 */
	bool m_bApplyTilt; /* 192 1 */
	float m_flTiltPlanePitchSpringStrength; /* 196 4 */
	float m_flTiltPlaneRollSpringStrength; /* 200 4 */
	bool m_bEnableLockBreaking; /* 204 1 */
	float m_flLockBreakTolerance; /* 208 4 */
	float m_flLockBreakBlendTime; /* 212 4 */
	bool m_bEnableStretching; /* 216 1 */
	float m_flMaxStretchAmount; /* 220 4 */
	float m_flStretchExtensionScale; /* 224 4 */
	bool m_bEnableGroundTracing; /* 228 1 */
	float m_flTraceAngleBlend; /* 232 4 */
	bool m_bApplyHipDrop; /* 236 1 */
	float m_flMaxFootHeight; /* 240 4 */
	float m_flExtensionScale; /* 244 4 */
	CAnimInputDamping m_hipDampingSettings; /* 248 0 */
	bool m_bEnableRootHeightDamping; /* 280 1 */
	CAnimInputDamping m_rootHeightDamping; /* 288 0 */
	float m_flMaxRootHeightOffset; /* 320 4 */
	float m_flMinRootHeightOffset; /* 324 4 */
	virtual void ~CFootLockAnimNode(CFootLockAnimNode* );
	virtual void SetInputConnection(class CFootLockAnimNode *, int, class CNodeConnection); /* linkage=_ZN17CFootLockAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CFootLockAnimNode *, int, class AnimNodeID); /* linkage=_ZN17CFootLockAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CFootLockAnimNode  *, int); /* linkage=_ZNK17CFootLockAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CFootLockAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK17CFootLockAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CFootLockAnimNode  *, int); /* linkage=_ZNK17CFootLockAnimNode16GetChildOutputIDEi */
	/* <1093346> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:61 */
	virtual const class CUtlString  & GetChildName(const class CFootLockAnimNode  *, int); /* linkage=_ZNK17CFootLockAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CFootLockAnimNode  *, int); /* linkage=_ZNK17CFootLockAnimNode8GetChildEi */
	virtual int GetChildCount(const class CFootLockAnimNode  *); /* linkage=_ZNK17CFootLockAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CFootLockAnimNode  *, class ClassID); /* linkage=_ZNK17CFootLockAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFootLockAnimNode *, class ClassID); /* linkage=_ZN17CFootLockAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <10909a1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFootLockAnimNode  *); /* linkage=_ZNK17CFootLockAnimNode11GetTypeInfoEv */
	void CFootLockAnimNode(class CFootLockAnimNode *); /* linkage=_ZN17CFootLockAnimNodeC4Ev */
	void KV3TransferLoad_CFootLockAnimNode(class CFootLockAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootLockAnimNode33KV3TransferLoad_CFootLockAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFootLockAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootLockAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootLockAnimNode(const class CFootLockAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootLockAnimNode33KV3TransferSave_CFootLockAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFootLockAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootLockAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518998> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footlockanimnode_h_schema.gen_cpp:771 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CFootLockAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CFootLockAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFootLockAnimNode(class CFootLockAnimNode *); /* linkage=_ZN17CFootLockAnimNodeD4Ev */
	class CFootLockAnimNode & operator=(class CFootLockAnimNode *, const class CFootLockAnimNode  &); /* linkage=_ZN17CFootLockAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFootLockAnimNode *); /* linkage=_ZN17CFootLockAnimNode38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t VisibleIfRootDampingEnabled(void *); /* linkage=_ZN17CFootLockAnimNode27VisibleIfRootDampingEnabledEPv */
	enum PropertyAttrState_t VisibleIfHipDropEnabled(void *); /* linkage=_ZN17CFootLockAnimNode23VisibleIfHipDropEnabledEPv */
	enum PropertyAttrState_t VisibleIfGroundTracingEnabled(void *); /* linkage=_ZN17CFootLockAnimNode29VisibleIfGroundTracingEnabledEPv */
	enum PropertyAttrState_t VisibleIfTwoBoneIKEnabled(void *); /* linkage=_ZN17CFootLockAnimNode25VisibleIfTwoBoneIKEnabledEPv */
	enum PropertyAttrState_t VisibleIfStepHeightEnabled(void *); /* linkage=_ZN17CFootLockAnimNode26VisibleIfStepHeightEnabledEPv */
	enum PropertyChangeDirtyResult_t UIOnPropertyChanged(void *); /* linkage=_ZN17CFootLockAnimNode19UIOnPropertyChangedEPv */
	/* <515356> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:37 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootLockAnimNode  *); /* linkage=_ZNK17CFootLockAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CFootLockAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CFootLockAnimNode17GetPrimaryBindingEv */
	void CFootLockAnimNode(class CFootLockAnimNode *, class CFootLockAnimNode &); /* linkage=_ZN17CFootLockAnimNodeC4EOS_ */
	void CFootLockAnimNode(class CFootLockAnimNode *, const class CFootLockAnimNode  &); /* linkage=_ZN17CFootLockAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17CFootLockAnimNode8MyTypeIDEv */
	/* <109561d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17CFootLockAnimNode10MyTypeInfoEv */
	class CFootLockAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN17CFootLockAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CFootLockAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CFootLockAnimNode  *, char &); /* linkage=_ZN17CFootLockAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CFootLockAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CFootLockAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0106CFC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:36
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 36
	const char   __PRETTY_FUNCTION__; // 21110
} /* size: 0, variables: 2 */

// <00F94104> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:36
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 36
	const char   __PRETTY_FUNCTION__; // 38841
} /* size: 0, variables: 2 */

// <0106CFC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0106CF58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.h:37
// function call: 1
void CFootLockAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 37
} /* size: 0, inline expansions: 1 (0 bytes) */


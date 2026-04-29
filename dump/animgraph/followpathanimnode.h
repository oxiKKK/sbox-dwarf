
//
// animgraph/followpathanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0105150D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:15
// function calls: 10
void CFollowPathAnimNode::~CFollowPathAnimNode()
{
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 15
} /* size: 118, inline expansions: 10 (242 bytes) */

// <010511CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:15
// function calls: 15
void CFollowPathAnimNode::~CFollowPathAnimNode()
{
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
	CAnimNodeBase::~CAnimNodeBase(); // 15
	CFollowPathAnimNode::~CFollowPathAnimNode(); // 15
} /* size: 115, inline expansions: 15 (263 bytes) */

// <010511B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:15
inline void CFollowPathAnimNode::~CFollowPathAnimNode()
{
} /* size: 0 */

// <01015DE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:15
// member functions: 71
// member variables: 15
// static member variables: 2
// vtable entries: 14
// class size: 144
class CFollowPathAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CFollowPathAnimNode(CFollowPathAnimNode* , CFollowPathAnimNode& );
	void CFollowPathAnimNode(CFollowPathAnimNode* , const CFollowPathAnimNode& );
private:
	static class CClassInfoT<CFollowPathAnimNode> m_classInfoCFollowPathAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CFollowPathAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9 */
	virtual void* CastToBase(CFollowPathAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9 */
	virtual const void* CastToBase(const CFollowPathAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	CFollowPathAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	void Schema_CompileTimeVerificationFunction(CFollowPathAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFollowPathAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:19 */
	void KV3TransferPolymorphicClassname(const CFollowPathAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:19 */
	CFollowPathAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:19 */
	virtual void KV3TransferSave(const CFollowPathAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:19 */
	virtual void KV3TransferLoad(CFollowPathAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:19 */
	void KV3TransferSave_CFollowPathAnimNode(const CFollowPathAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:19 */
	void KV3TransferLoad_CFollowPathAnimNode(CFollowPathAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:18 */
	void CFollowPathAnimNode(CFollowPathAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:25 */
	virtual int GetChildCount(const CFollowPathAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:31 */
	virtual IAnimNode* GetChild(const CFollowPathAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:37 */
	virtual AnimNodeID GetChildID(const CFollowPathAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:43 */
	virtual void SetChildID(CFollowPathAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:49 */
	virtual const CUtlString& GetChildName(const CFollowPathAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:63 */
	virtual void SetInputConnection(CFollowPathAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:57 */
	virtual AnimOutputID GetChildOutputID(const CFollowPathAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:69 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CFollowPathAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:37 */
	PropertyChangeDirtyResult_t UI_RefreshHierarchyOnChange(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:38 */
	PropertyAttrState_t UI_VisibleIfSpeedScaleEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:39 */
	PropertyAttrState_t UI_VisibleIfFacingEnabled(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:40 */
	PropertyAttrState_t UI_VisibleIfFacingIsParam(void* );
	CNodeConnection m_inputConnection; /* 64 8 */
	float m_flBlendOutTime; /* 72 4 */
	bool m_bBlockNonPathMovement; /* 76 1 */
	bool m_bStopFeetAtGoal; /* 77 1 */
	bool m_bScaleSpeed; /* 78 1 */
	float m_flScale; /* 80 4 */
	float m_flMinAngle; /* 84 4 */
	float m_flMaxAngle; /* 88 4 */
	float m_flSpeedScaleBlending; /* 92 4 */
	bool m_bTurnToFace; /* 96 1 */
	AnimValueSource m_facingTarget; /* 100 4 */
	AnimParamID m_param; /* 104 4 */
	float m_flTurnToFaceOffset; /* 108 4 */
	CAnimInputDamping m_damping; /* 112 0 */
	virtual void ~CFollowPathAnimNode(CFollowPathAnimNode* );
	virtual void SetInputConnection(class CFollowPathAnimNode *, int, class CNodeConnection); /* linkage=_ZN19CFollowPathAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CFollowPathAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CFollowPathAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CFollowPathAnimNode  *, int); /* linkage=_ZNK19CFollowPathAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CFollowPathAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CFollowPathAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CFollowPathAnimNode  *, int); /* linkage=_ZNK19CFollowPathAnimNode16GetChildOutputIDEi */
	/* <1093209> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:49 */
	virtual const class CUtlString  & GetChildName(const class CFollowPathAnimNode  *, int); /* linkage=_ZNK19CFollowPathAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CFollowPathAnimNode  *, int); /* linkage=_ZNK19CFollowPathAnimNode8GetChildEi */
	virtual int GetChildCount(const class CFollowPathAnimNode  *); /* linkage=_ZNK19CFollowPathAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CFollowPathAnimNode  *, class ClassID); /* linkage=_ZNK19CFollowPathAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFollowPathAnimNode *, class ClassID); /* linkage=_ZN19CFollowPathAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1090978> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFollowPathAnimNode  *); /* linkage=_ZNK19CFollowPathAnimNode11GetTypeInfoEv */
	void CFollowPathAnimNode(class CFollowPathAnimNode *); /* linkage=_ZN19CFollowPathAnimNodeC4Ev */
	void KV3TransferLoad_CFollowPathAnimNode(class CFollowPathAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFollowPathAnimNode35KV3TransferLoad_CFollowPathAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFollowPathAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CFollowPathAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFollowPathAnimNode(const class CFollowPathAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFollowPathAnimNode35KV3TransferSave_CFollowPathAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFollowPathAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CFollowPathAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518849> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/followpathanimnode_h_schema.gen_cpp:311 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CFollowPathAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CFollowPathAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFollowPathAnimNode(class CFollowPathAnimNode *); /* linkage=_ZN19CFollowPathAnimNodeD4Ev */
	class CFollowPathAnimNode & operator=(class CFollowPathAnimNode *, const class CFollowPathAnimNode  &); /* linkage=_ZN19CFollowPathAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFollowPathAnimNode *); /* linkage=_ZN19CFollowPathAnimNode38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t UI_VisibleIfFacingIsParam(void *); /* linkage=_ZN19CFollowPathAnimNode25UI_VisibleIfFacingIsParamEPv */
	enum PropertyAttrState_t UI_VisibleIfFacingEnabled(void *); /* linkage=_ZN19CFollowPathAnimNode25UI_VisibleIfFacingEnabledEPv */
	enum PropertyAttrState_t UI_VisibleIfSpeedScaleEnabled(void *); /* linkage=_ZN19CFollowPathAnimNode29UI_VisibleIfSpeedScaleEnabledEPv */
	enum PropertyChangeDirtyResult_t UI_RefreshHierarchyOnChange(void *); /* linkage=_ZN19CFollowPathAnimNode27UI_RefreshHierarchyOnChangeEPv */
	/* <5152a2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/followpathanimnode.h:18 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFollowPathAnimNode  *); /* linkage=_ZNK19CFollowPathAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CFollowPathAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CFollowPathAnimNode17GetPrimaryBindingEv */
	void CFollowPathAnimNode(class CFollowPathAnimNode *, class CFollowPathAnimNode &); /* linkage=_ZN19CFollowPathAnimNodeC4EOS_ */
	void CFollowPathAnimNode(class CFollowPathAnimNode *, const class CFollowPathAnimNode  &); /* linkage=_ZN19CFollowPathAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CFollowPathAnimNode8MyTypeIDEv */
	/* <10955ff> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CFollowPathAnimNode10MyTypeInfoEv */
	class CFollowPathAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CFollowPathAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CFollowPathAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CFollowPathAnimNode  *, char &); /* linkage=_ZN19CFollowPathAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CFollowPathAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CFollowPathAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0106DB9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 21164
} /* size: 0, variables: 2 */

// <0106DB95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0106DB2A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.h:18
// function call: 1
void CFollowPathAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 18
} /* size: 0, inline expansions: 1 (0 bytes) */


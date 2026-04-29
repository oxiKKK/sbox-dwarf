
//
// animgraph/turnhelperanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0125B3B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:14
// function calls: 10
void CTurnHelperAnimNode::~CTurnHelperAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 14
} /* size: 126, inline expansions: 10 (250 bytes) */

// <0125B073> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:14
// function calls: 15
void CTurnHelperAnimNode::~CTurnHelperAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 14
	CTurnHelperAnimNode::~CTurnHelperAnimNode(); // 14
} /* size: 123, inline expansions: 15 (279 bytes) */

// <0125B057> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:14
inline void CTurnHelperAnimNode::~CTurnHelperAnimNode()
{
} /* size: 0 */

// <0123BB7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:14
// member functions: 67
// member variables: 9
// static member variables: 2
// vtable entries: 14
// class size: 96
class CTurnHelperAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CTurnHelperAnimNode(CTurnHelperAnimNode* , CTurnHelperAnimNode& );
	void CTurnHelperAnimNode(CTurnHelperAnimNode* , const CTurnHelperAnimNode& );
private:
	static class CClassInfoT<CTurnHelperAnimNode> m_classInfoCTurnHelperAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CTurnHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10 */
	virtual void* CastToBase(CTurnHelperAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10 */
	virtual const void* CastToBase(const CTurnHelperAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	CTurnHelperAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CTurnHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CTurnHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:18 */
	void KV3TransferPolymorphicClassname(const CTurnHelperAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:18 */
	CTurnHelperAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:18 */
	virtual void KV3TransferSave(const CTurnHelperAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:18 */
	virtual void KV3TransferLoad(CTurnHelperAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:18 */
	void KV3TransferSave_CTurnHelperAnimNode(const CTurnHelperAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:18 */
	void KV3TransferLoad_CTurnHelperAnimNode(CTurnHelperAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:19 */
	void CTurnHelperAnimNode(CTurnHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:26 */
	virtual int GetChildCount(const CTurnHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:32 */
	virtual IAnimNode* GetChild(const CTurnHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:38 */
	virtual AnimNodeID GetChildID(const CTurnHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:44 */
	virtual void SetChildID(CTurnHelperAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:50 */
	virtual const CUtlString& GetChildName(const CTurnHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:64 */
	virtual void SetInputConnection(CTurnHelperAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:58 */
	virtual AnimOutputID GetChildOutputID(const CTurnHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:70 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CTurnHelperAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:36 */
	PropertyChangeDirtyResult_t OnFieldChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:37 */
	PropertyAttrState_t FacingTargetParamVisibility(void* );
	CNodeConnection m_inputConnection; /* 64 8 */
	AnimValueSource m_facingTarget; /* 72 4 */
	AnimParamID m_facingTargetParam; /* 76 4 */
	float m_turnStartTime; /* 80 4 */
	float m_turnDuration; /* 84 4 */
	bool m_bMatchChildDuration; /* 88 1 */
	bool m_bUseManualTurnOffset; /* 89 1 */
	float m_manualTurnOffset; /* 92 4 */
	virtual void ~CTurnHelperAnimNode(CTurnHelperAnimNode* );
	virtual void SetInputConnection(class CTurnHelperAnimNode *, int, class CNodeConnection); /* linkage=_ZN19CTurnHelperAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CTurnHelperAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CTurnHelperAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CTurnHelperAnimNode  *, int); /* linkage=_ZNK19CTurnHelperAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CTurnHelperAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CTurnHelperAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CTurnHelperAnimNode  *, int); /* linkage=_ZNK19CTurnHelperAnimNode16GetChildOutputIDEi */
	/* <129cb65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:50 */
	virtual const class CUtlString  & GetChildName(const class CTurnHelperAnimNode  *, int); /* linkage=_ZNK19CTurnHelperAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CTurnHelperAnimNode  *, int); /* linkage=_ZNK19CTurnHelperAnimNode8GetChildEi */
	virtual int GetChildCount(const class CTurnHelperAnimNode  *); /* linkage=_ZNK19CTurnHelperAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CTurnHelperAnimNode  *, class ClassID); /* linkage=_ZNK19CTurnHelperAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CTurnHelperAnimNode *, class ClassID); /* linkage=_ZN19CTurnHelperAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129c487> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CTurnHelperAnimNode  *); /* linkage=_ZNK19CTurnHelperAnimNode11GetTypeInfoEv */
	void CTurnHelperAnimNode(class CTurnHelperAnimNode *); /* linkage=_ZN19CTurnHelperAnimNodeC4Ev */
	void KV3TransferLoad_CTurnHelperAnimNode(class CTurnHelperAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CTurnHelperAnimNode35KV3TransferLoad_CTurnHelperAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CTurnHelperAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CTurnHelperAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CTurnHelperAnimNode(const class CTurnHelperAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CTurnHelperAnimNode35KV3TransferSave_CTurnHelperAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CTurnHelperAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CTurnHelperAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <645544> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/turnhelperanimnode_h_schema.gen_cpp:188 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CTurnHelperAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CTurnHelperAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CTurnHelperAnimNode(class CTurnHelperAnimNode *); /* linkage=_ZN19CTurnHelperAnimNodeD4Ev */
	class CTurnHelperAnimNode & operator=(class CTurnHelperAnimNode *, const class CTurnHelperAnimNode  &); /* linkage=_ZN19CTurnHelperAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CTurnHelperAnimNode *); /* linkage=_ZN19CTurnHelperAnimNode38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t FacingTargetParamVisibility(void *); /* linkage=_ZN19CTurnHelperAnimNode27FacingTargetParamVisibilityEPv */
	enum PropertyChangeDirtyResult_t OnFieldChanged(void *); /* linkage=_ZN19CTurnHelperAnimNode14OnFieldChangedEPv */
	/* <645362> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/turnhelperanimnode.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CTurnHelperAnimNode  *); /* linkage=_ZNK19CTurnHelperAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CTurnHelperAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CTurnHelperAnimNode17GetPrimaryBindingEv */
	void CTurnHelperAnimNode(class CTurnHelperAnimNode *, class CTurnHelperAnimNode &); /* linkage=_ZN19CTurnHelperAnimNodeC4EOS_ */
	void CTurnHelperAnimNode(class CTurnHelperAnimNode *, const class CTurnHelperAnimNode  &); /* linkage=_ZN19CTurnHelperAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CTurnHelperAnimNode8MyTypeIDEv */
	/* <129f497> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CTurnHelperAnimNode10MyTypeInfoEv */
	class CTurnHelperAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CTurnHelperAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CTurnHelperAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CTurnHelperAnimNode  *, char &); /* linkage=_ZN19CTurnHelperAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CTurnHelperAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CTurnHelperAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0127C2B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 11087
} /* size: 0, variables: 2 */

// <0127C2AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0127C23E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.h:17
// function call: 1
void CTurnHelperAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 17
} /* size: 0, inline expansions: 1 (0 bytes) */


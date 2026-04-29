
//
// animgraph/twoboneikanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0125BA11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:14
// function calls: 14
void CTwoBoneIKAnimNode::~CTwoBoneIKAnimNode()
{
	CUtlString::~CUtlString(); // 14
	CUtlString::~CUtlString(); // 14
	CUtlString::~CUtlString(); // 14
	CUtlString::~CUtlString(); // 14
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
} /* size: 222, inline expansions: 14 (257 bytes) */

// <0125B5C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:14
// function calls: 19
void CTwoBoneIKAnimNode::~CTwoBoneIKAnimNode()
{
	CUtlString::~CUtlString(); // 14
	CUtlString::~CUtlString(); // 14
	CUtlString::~CUtlString(); // 14
	CUtlString::~CUtlString(); // 14
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
	CTwoBoneIKAnimNode::~CTwoBoneIKAnimNode(); // 14
} /* size: 223, inline expansions: 19 (403 bytes) */

// <0125B5A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:14
inline void CTwoBoneIKAnimNode::~CTwoBoneIKAnimNode()
{
} /* size: 0 */

// <0123C3AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:14
// member functions: 75
// member variables: 11
// static member variables: 2
// vtable entries: 14
// class size: 136
class CTwoBoneIKAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CTwoBoneIKAnimNode(CTwoBoneIKAnimNode* , CTwoBoneIKAnimNode& );
	void CTwoBoneIKAnimNode(CTwoBoneIKAnimNode* , const CTwoBoneIKAnimNode& );
private:
	static class CClassInfoT<CTwoBoneIKAnimNode> m_classInfoCTwoBoneIKAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15 */
	virtual const CClassInfo& GetTypeInfo(const CTwoBoneIKAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15 */
	virtual void* CastToBase(CTwoBoneIKAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15 */
	virtual const void* CastToBase(const CTwoBoneIKAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	CTwoBoneIKAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CTwoBoneIKAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CTwoBoneIKAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:18 */
	void KV3TransferPolymorphicClassname(const CTwoBoneIKAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:18 */
	CTwoBoneIKAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:18 */
	virtual void KV3TransferSave(const CTwoBoneIKAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:18 */
	virtual void KV3TransferLoad(CTwoBoneIKAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:18 */
	void KV3TransferSave_CTwoBoneIKAnimNode(const CTwoBoneIKAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:18 */
	void KV3TransferLoad_CTwoBoneIKAnimNode(CTwoBoneIKAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:24 */
	void CTwoBoneIKAnimNode(CTwoBoneIKAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:31 */
	virtual int GetChildCount(const CTwoBoneIKAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:37 */
	virtual IAnimNode* GetChild(const CTwoBoneIKAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:43 */
	virtual AnimNodeID GetChildID(const CTwoBoneIKAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:49 */
	virtual void SetChildID(CTwoBoneIKAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:55 */
	virtual const CUtlString& GetChildName(const CTwoBoneIKAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:68 */
	virtual void SetInputConnection(CTwoBoneIKAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:62 */
	virtual AnimOutputID GetChildOutputID(const CTwoBoneIKAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:74 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CTwoBoneIKAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:35 */
	PropertyChangeDirtyResult_t DirtyChangeCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:36 */
	PropertyAttrState_t EndEffectorAttachmentAttrCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:37 */
	PropertyAttrState_t TargetAttachmentAttrCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:38 */
	PropertyAttrState_t TargetBoneAttrCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:40 */
	PropertyAttrState_t TargetParamAttrCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:45 */
	PropertyAttrState_t RotationParamAttrCallback(void* );
	CNodeConnection m_inputConnection; /* 64 8 */
	CUtlString m_ikChainName; /* 72 8 */
	IkEndEffectorType m_endEffectorType; /* 80 4 */
	CUtlString m_endEffectorAttachmentName; /* 88 8 */
	IkTargetType m_targetType; /* 96 4 */
	CUtlString m_attachmentName; /* 104 8 */
	CUtlString m_targetBoneName; /* 112 8 */
	AnimParamID m_targetParam; /* 120 4 */
	bool m_bMatchTargetOrientation; /* 124 1 */
	AnimParamID m_rotationParam; /* 128 4 */
	virtual void ~CTwoBoneIKAnimNode(CTwoBoneIKAnimNode* );
	virtual void SetInputConnection(class CTwoBoneIKAnimNode *, int, class CNodeConnection); /* linkage=_ZN18CTwoBoneIKAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CTwoBoneIKAnimNode *, int, class AnimNodeID); /* linkage=_ZN18CTwoBoneIKAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CTwoBoneIKAnimNode  *, int); /* linkage=_ZNK18CTwoBoneIKAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CTwoBoneIKAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK18CTwoBoneIKAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CTwoBoneIKAnimNode  *, int); /* linkage=_ZNK18CTwoBoneIKAnimNode16GetChildOutputIDEi */
	/* <129cca3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:55 */
	virtual const class CUtlString  & GetChildName(const class CTwoBoneIKAnimNode  *, int); /* linkage=_ZNK18CTwoBoneIKAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CTwoBoneIKAnimNode  *, int); /* linkage=_ZNK18CTwoBoneIKAnimNode8GetChildEi */
	virtual int GetChildCount(const class CTwoBoneIKAnimNode  *); /* linkage=_ZNK18CTwoBoneIKAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CTwoBoneIKAnimNode  *, class ClassID); /* linkage=_ZNK18CTwoBoneIKAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CTwoBoneIKAnimNode *, class ClassID); /* linkage=_ZN18CTwoBoneIKAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129c4b1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15 */
	virtual const class CClassInfo  & GetTypeInfo(const class CTwoBoneIKAnimNode  *); /* linkage=_ZNK18CTwoBoneIKAnimNode11GetTypeInfoEv */
	void CTwoBoneIKAnimNode(class CTwoBoneIKAnimNode *); /* linkage=_ZN18CTwoBoneIKAnimNodeC4Ev */
	void KV3TransferLoad_CTwoBoneIKAnimNode(class CTwoBoneIKAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN18CTwoBoneIKAnimNode34KV3TransferLoad_CTwoBoneIKAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CTwoBoneIKAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN18CTwoBoneIKAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CTwoBoneIKAnimNode(const class CTwoBoneIKAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CTwoBoneIKAnimNode34KV3TransferSave_CTwoBoneIKAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CTwoBoneIKAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CTwoBoneIKAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <645592> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/twoboneikanimnode_h_schema.gen_cpp:263 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CTwoBoneIKAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CTwoBoneIKAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CTwoBoneIKAnimNode(class CTwoBoneIKAnimNode *); /* linkage=_ZN18CTwoBoneIKAnimNodeD4Ev */
	class CTwoBoneIKAnimNode & operator=(class CTwoBoneIKAnimNode *, const class CTwoBoneIKAnimNode  &); /* linkage=_ZN18CTwoBoneIKAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CTwoBoneIKAnimNode *); /* linkage=_ZN18CTwoBoneIKAnimNode38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t RotationParamAttrCallback(void *); /* linkage=_ZN18CTwoBoneIKAnimNode25RotationParamAttrCallbackEPv */
	enum PropertyAttrState_t TargetParamAttrCallback(void *); /* linkage=_ZN18CTwoBoneIKAnimNode23TargetParamAttrCallbackEPv */
	enum PropertyAttrState_t TargetBoneAttrCallback(void *); /* linkage=_ZN18CTwoBoneIKAnimNode22TargetBoneAttrCallbackEPv */
	enum PropertyAttrState_t TargetAttachmentAttrCallback(void *); /* linkage=_ZN18CTwoBoneIKAnimNode28TargetAttachmentAttrCallbackEPv */
	enum PropertyAttrState_t EndEffectorAttachmentAttrCallback(void *); /* linkage=_ZN18CTwoBoneIKAnimNode33EndEffectorAttachmentAttrCallbackEPv */
	enum PropertyChangeDirtyResult_t DirtyChangeCallback(void *); /* linkage=_ZN18CTwoBoneIKAnimNode19DirtyChangeCallbackEPv */
	/* <645416> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/twoboneikanimnode.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CTwoBoneIKAnimNode  *); /* linkage=_ZNK18CTwoBoneIKAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CTwoBoneIKAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CTwoBoneIKAnimNode17GetPrimaryBindingEv */
	void CTwoBoneIKAnimNode(class CTwoBoneIKAnimNode *, class CTwoBoneIKAnimNode &); /* linkage=_ZN18CTwoBoneIKAnimNodeC4EOS_ */
	void CTwoBoneIKAnimNode(class CTwoBoneIKAnimNode *, const class CTwoBoneIKAnimNode  &); /* linkage=_ZN18CTwoBoneIKAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CTwoBoneIKAnimNode8MyTypeIDEv */
	/* <129f4b5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CTwoBoneIKAnimNode10MyTypeInfoEv */
	class CTwoBoneIKAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN18CTwoBoneIKAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CTwoBoneIKAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CTwoBoneIKAnimNode  *, char &); /* linkage=_ZN18CTwoBoneIKAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CTwoBoneIKAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CTwoBoneIKAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0127B8DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 11060
} /* size: 0, variables: 2 */

// <0127B8D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0127B869> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.h:17
// function call: 1
void CTwoBoneIKAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 17
} /* size: 0, inline expansions: 1 (0 bytes) */


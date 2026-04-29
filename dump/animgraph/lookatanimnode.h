
//
// animgraph/lookatanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0113F53B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:11
// function calls: 12
void CLookAtAnimNode::~CLookAtAnimNode()
{
	CUtlString::~CUtlString(); // 11
	CUtlString::~CUtlString(); // 11
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 11
} /* size: 190, inline expansions: 12 (233 bytes) */

// <0113F169> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:11
// function calls: 17
void CLookAtAnimNode::~CLookAtAnimNode()
{
	CUtlString::~CUtlString(); // 11
	CUtlString::~CUtlString(); // 11
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
	CAnimNodeBase::~CAnimNodeBase(); // 11
	CLookAtAnimNode::~CLookAtAnimNode(); // 11
} /* size: 191, inline expansions: 17 (347 bytes) */

// <0113F14D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:11
inline void CLookAtAnimNode::~CLookAtAnimNode()
{
} /* size: 0 */

// <011016FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:11
// member functions: 63
// member variables: 15
// static member variables: 2
// vtable entries: 14
// class size: 160
class CLookAtAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CLookAtAnimNode(CLookAtAnimNode* , CLookAtAnimNode& );
	void CLookAtAnimNode(CLookAtAnimNode* , const CLookAtAnimNode& );
private:
	static class CClassInfoT<CLookAtAnimNode> m_classInfoCLookAtAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CLookAtAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12 */
	virtual void* CastToBase(CLookAtAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12 */
	virtual const void* CastToBase(const CLookAtAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	CLookAtAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	void Schema_CompileTimeVerificationFunction(CLookAtAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CLookAtAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:15 */
	void KV3TransferPolymorphicClassname(const CLookAtAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:15 */
	CLookAtAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:15 */
	virtual void KV3TransferSave(const CLookAtAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:15 */
	virtual void KV3TransferLoad(CLookAtAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:15 */
	void KV3TransferSave_CLookAtAnimNode(const CLookAtAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:15 */
	void KV3TransferLoad_CLookAtAnimNode(CLookAtAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:21 */
	void CLookAtAnimNode(CLookAtAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:26 */
	virtual int GetChildCount(const CLookAtAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:32 */
	virtual IAnimNode* GetChild(const CLookAtAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:38 */
	virtual AnimNodeID GetChildID(const CLookAtAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:44 */
	virtual void SetChildID(CLookAtAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:50 */
	virtual const CUtlString& GetChildName(const CLookAtAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:63 */
	virtual void SetInputConnection(CLookAtAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:57 */
	virtual AnimOutputID GetChildOutputID(const CLookAtAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:68 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CLookAtAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	AnimVectorSource m_target; /* 72 4 */
	AnimParamID m_param; /* 76 4 */
	AnimParamID m_weightParam; /* 80 4 */
	CUtlString m_lookatChainName; /* 88 8 */
	CUtlString m_attachmentName; /* 96 8 */
	float m_flYawLimit; /* 104 4 */
	float m_flPitchLimit; /* 108 4 */
	bool m_bResetBase; /* 112 1 */
	bool m_bLockWhenWaning; /* 113 1 */
	bool m_bUseHysteresis; /* 114 1 */
	float m_flHysteresisInnerAngle; /* 116 4 */
	float m_flHysteresisOuterAngle; /* 120 4 */
	CAnimInputDamping m_damping; /* 128 0 */
	virtual void ~CLookAtAnimNode(CLookAtAnimNode* );
	virtual void SetInputConnection(class CLookAtAnimNode *, int, class CNodeConnection); /* linkage=_ZN15CLookAtAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CLookAtAnimNode *, int, class AnimNodeID); /* linkage=_ZN15CLookAtAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CLookAtAnimNode  *, int); /* linkage=_ZNK15CLookAtAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CLookAtAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK15CLookAtAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CLookAtAnimNode  *, int); /* linkage=_ZNK15CLookAtAnimNode16GetChildOutputIDEi */
	/* <1195676> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:50 */
	virtual const class CUtlString  & GetChildName(const class CLookAtAnimNode  *, int); /* linkage=_ZNK15CLookAtAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CLookAtAnimNode  *, int); /* linkage=_ZNK15CLookAtAnimNode8GetChildEi */
	virtual int GetChildCount(const class CLookAtAnimNode  *); /* linkage=_ZNK15CLookAtAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CLookAtAnimNode  *, class ClassID); /* linkage=_ZNK15CLookAtAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CLookAtAnimNode *, class ClassID); /* linkage=_ZN15CLookAtAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <119330a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CLookAtAnimNode  *); /* linkage=_ZNK15CLookAtAnimNode11GetTypeInfoEv */
	void CLookAtAnimNode(class CLookAtAnimNode *); /* linkage=_ZN15CLookAtAnimNodeC4Ev */
	void KV3TransferLoad_CLookAtAnimNode(class CLookAtAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN15CLookAtAnimNode31KV3TransferLoad_CLookAtAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CLookAtAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN15CLookAtAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CLookAtAnimNode(const class CLookAtAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CLookAtAnimNode31KV3TransferSave_CLookAtAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CLookAtAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CLookAtAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec1c6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/lookatanimnode_h_schema.gen_cpp:260 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CLookAtAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CLookAtAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CLookAtAnimNode(class CLookAtAnimNode *); /* linkage=_ZN15CLookAtAnimNodeD4Ev */
	class CLookAtAnimNode & operator=(class CLookAtAnimNode *, const class CLookAtAnimNode  &); /* linkage=_ZN15CLookAtAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CLookAtAnimNode *); /* linkage=_ZN15CLookAtAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5e9d56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/lookatanimnode.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CLookAtAnimNode  *); /* linkage=_ZNK15CLookAtAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CLookAtAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CLookAtAnimNode17GetPrimaryBindingEv */
	void CLookAtAnimNode(class CLookAtAnimNode *, class CLookAtAnimNode &); /* linkage=_ZN15CLookAtAnimNodeC4EOS_ */
	void CLookAtAnimNode(class CLookAtAnimNode *, const class CLookAtAnimNode  &); /* linkage=_ZN15CLookAtAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN15CLookAtAnimNode8MyTypeIDEv */
	/* <11981eb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN15CLookAtAnimNode10MyTypeInfoEv */
	class CLookAtAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN15CLookAtAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CLookAtAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CLookAtAnimNode  *, char &); /* linkage=_ZN15CLookAtAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CLookAtAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CLookAtAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0117F481> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 44309
} /* size: 0, variables: 2 */

// <0117F47B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0117F410> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.h:14
// function call: 1
void CLookAtAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


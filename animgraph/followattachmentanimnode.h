
//
// animgraph/followattachmentanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01050F41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:14
// function calls: 12
void CFollowAttachmentAnimNode::~CFollowAttachmentAnimNode()
{
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
} /* size: 182, inline expansions: 12 (231 bytes) */

// <01050B7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:14
// function calls: 17
void CFollowAttachmentAnimNode::~CFollowAttachmentAnimNode()
{
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
	CFollowAttachmentAnimNode::~CFollowAttachmentAnimNode(); // 14
} /* size: 183, inline expansions: 17 (332 bytes) */

// <01050B5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:14
inline void CFollowAttachmentAnimNode::~CFollowAttachmentAnimNode()
{
} /* size: 0 */

// <01015830> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:14
// member functions: 63
// member variables: 6
// static member variables: 2
// vtable entries: 14
// class size: 96
class CFollowAttachmentAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CFollowAttachmentAnimNode(CFollowAttachmentAnimNode* , CFollowAttachmentAnimNode& );
	void CFollowAttachmentAnimNode(CFollowAttachmentAnimNode* , const CFollowAttachmentAnimNode& );
private:
	static class CClassInfoT<CFollowAttachmentAnimNode> m_classInfoCFollowAttachmentAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CFollowAttachmentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10 */
	virtual void* CastToBase(CFollowAttachmentAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10 */
	virtual const void* CastToBase(const CFollowAttachmentAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	CFollowAttachmentAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CFollowAttachmentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CFollowAttachmentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:18 */
	void KV3TransferPolymorphicClassname(const CFollowAttachmentAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:18 */
	CFollowAttachmentAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:18 */
	virtual void KV3TransferSave(const CFollowAttachmentAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:18 */
	virtual void KV3TransferLoad(CFollowAttachmentAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:18 */
	void KV3TransferSave_CFollowAttachmentAnimNode(const CFollowAttachmentAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:18 */
	void KV3TransferLoad_CFollowAttachmentAnimNode(CFollowAttachmentAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:19 */
	void CFollowAttachmentAnimNode(CFollowAttachmentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:26 */
	virtual int GetChildCount(const CFollowAttachmentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:32 */
	virtual IAnimNode* GetChild(const CFollowAttachmentAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:38 */
	virtual AnimNodeID GetChildID(const CFollowAttachmentAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:44 */
	virtual void SetChildID(CFollowAttachmentAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:50 */
	virtual const CUtlString& GetChildName(const CFollowAttachmentAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:63 */
	virtual void SetInputConnection(CFollowAttachmentAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:57 */
	virtual AnimOutputID GetChildOutputID(const CFollowAttachmentAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:69 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CFollowAttachmentAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	CUtlString m_boneName; /* 72 8 */
	CUtlString m_attachmentName; /* 80 8 */
	bool m_bMatchTranslation; /* 88 1 */
	bool m_bMatchRotation; /* 89 1 */
	virtual void ~CFollowAttachmentAnimNode(CFollowAttachmentAnimNode* );
	virtual void SetInputConnection(class CFollowAttachmentAnimNode *, int, class CNodeConnection); /* linkage=_ZN25CFollowAttachmentAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CFollowAttachmentAnimNode *, int, class AnimNodeID); /* linkage=_ZN25CFollowAttachmentAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CFollowAttachmentAnimNode  *, int); /* linkage=_ZNK25CFollowAttachmentAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CFollowAttachmentAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK25CFollowAttachmentAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CFollowAttachmentAnimNode  *, int); /* linkage=_ZNK25CFollowAttachmentAnimNode16GetChildOutputIDEi */
	/* <10930cc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:50 */
	virtual const class CUtlString  & GetChildName(const class CFollowAttachmentAnimNode  *, int); /* linkage=_ZNK25CFollowAttachmentAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CFollowAttachmentAnimNode  *, int); /* linkage=_ZNK25CFollowAttachmentAnimNode8GetChildEi */
	virtual int GetChildCount(const class CFollowAttachmentAnimNode  *); /* linkage=_ZNK25CFollowAttachmentAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CFollowAttachmentAnimNode  *, class ClassID); /* linkage=_ZNK25CFollowAttachmentAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CFollowAttachmentAnimNode *, class ClassID); /* linkage=_ZN25CFollowAttachmentAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <109094f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFollowAttachmentAnimNode  *); /* linkage=_ZNK25CFollowAttachmentAnimNode11GetTypeInfoEv */
	void CFollowAttachmentAnimNode(class CFollowAttachmentAnimNode *); /* linkage=_ZN25CFollowAttachmentAnimNodeC4Ev */
	void KV3TransferLoad_CFollowAttachmentAnimNode(class CFollowAttachmentAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN25CFollowAttachmentAnimNode41KV3TransferLoad_CFollowAttachmentAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CFollowAttachmentAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN25CFollowAttachmentAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFollowAttachmentAnimNode(const class CFollowAttachmentAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK25CFollowAttachmentAnimNode41KV3TransferSave_CFollowAttachmentAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CFollowAttachmentAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK25CFollowAttachmentAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5187fc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/followattachmentanimnode_h_schema.gen_cpp:158 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN25CFollowAttachmentAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN25CFollowAttachmentAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CFollowAttachmentAnimNode(class CFollowAttachmentAnimNode *); /* linkage=_ZN25CFollowAttachmentAnimNodeD4Ev */
	class CFollowAttachmentAnimNode & operator=(class CFollowAttachmentAnimNode *, const class CFollowAttachmentAnimNode  &); /* linkage=_ZN25CFollowAttachmentAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CFollowAttachmentAnimNode *); /* linkage=_ZN25CFollowAttachmentAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5151ef> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/followattachmentanimnode.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFollowAttachmentAnimNode  *); /* linkage=_ZNK25CFollowAttachmentAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN25CFollowAttachmentAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN25CFollowAttachmentAnimNode17GetPrimaryBindingEv */
	void CFollowAttachmentAnimNode(class CFollowAttachmentAnimNode *, class CFollowAttachmentAnimNode &); /* linkage=_ZN25CFollowAttachmentAnimNodeC4EOS_ */
	void CFollowAttachmentAnimNode(class CFollowAttachmentAnimNode *, const class CFollowAttachmentAnimNode  &); /* linkage=_ZN25CFollowAttachmentAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25CFollowAttachmentAnimNode8MyTypeIDEv */
	/* <10955e1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25CFollowAttachmentAnimNode10MyTypeInfoEv */
	class CFollowAttachmentAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN25CFollowAttachmentAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN25CFollowAttachmentAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CFollowAttachmentAnimNode  *, char &); /* linkage=_ZN25CFollowAttachmentAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CFollowAttachmentAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN25CFollowAttachmentAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0106ED00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 21316
} /* size: 0, variables: 2 */

// <0106ECFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0106EC8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.h:17
// function call: 1
void CFollowAttachmentAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 17
} /* size: 0, inline expansions: 1 (0 bytes) */


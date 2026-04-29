
//
// animgraph/commentanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0104F182> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:13
// function calls: 11
void CCommentAnimNode::~CCommentAnimNode()
{
	CUtlString::~CUtlString(); // 13
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 13
} /* size: 174, inline expansions: 11 (215 bytes) */

// <0104EDF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:13
// function calls: 16
void CCommentAnimNode::~CCommentAnimNode()
{
	CUtlString::~CUtlString(); // 13
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
	CAnimNodeBase::~CAnimNodeBase(); // 13
	CCommentAnimNode::~CCommentAnimNode(); // 13
} /* size: 175, inline expansions: 16 (296 bytes) */

// <0104EDDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:13
inline void CCommentAnimNode::~CCommentAnimNode()
{
} /* size: 0 */

// <010138D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:13
// member functions: 71
// member variables: 5
// static member variables: 2
// vtable entries: 18
// class size: 96
class CCommentAnimNode : public CAnimNodeBase, public ICommentAnimNode {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	/* class ICommentAnimNode <ancestor>; */ /* 64 8 */
	void CCommentAnimNode(CCommentAnimNode* , CCommentAnimNode& );
	void CCommentAnimNode(CCommentAnimNode* , const CCommentAnimNode& );
private:
	static class CClassInfoT<CCommentAnimNode> m_classInfoCCommentAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10 */
	virtual void* CastToBase(CCommentAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10 */
	virtual const void* CastToBase(const CCommentAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	CCommentAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CCommentAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:17 */
	CCommentAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:17 */
	virtual void KV3TransferSave(const CCommentAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:17 */
	virtual void KV3TransferLoad(CCommentAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:17 */
	void KV3TransferSave_CCommentAnimNode(const CCommentAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:17 */
	void KV3TransferLoad_CCommentAnimNode(CCommentAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:19 */
	void CCommentAnimNode(CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:26 */
	virtual int GetChildCount(const CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:32 */
	virtual IAnimNode* GetChild(const CCommentAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:38 */
	virtual AnimNodeID GetChildID(const CCommentAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:44 */
	virtual void SetChildID(CCommentAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:50 */
	virtual const CUtlString& GetChildName(const CCommentAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:57 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CCommentAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:64 */
	virtual const CUtlString& GetCommentText(const CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:70 */
	virtual void SetCommentText(CCommentAnimNode* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:76 */
	virtual const Vector2D& GetNodeSize(const CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:82 */
	virtual void SetNodeSize(CCommentAnimNode* , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:88 */
	virtual const Color& GetColor(const CCommentAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:94 */
	virtual void SetColor(CCommentAnimNode* , const Color& );
	CUtlString m_commentText; /* 72 8 */
	Vector2D m_size; /* 80 8 */
	Color m_color; /* 88 4 */
	virtual void ~CCommentAnimNode(CCommentAnimNode* );
	/* <10907cd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:94 */
	virtual void SetColor(class CCommentAnimNode *, const class Color  &); /* linkage=_ZN16CCommentAnimNode8SetColorERK5Color */
	/* <10907a4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:88 */
	virtual const class Color  & GetColor(const class CCommentAnimNode  *); /* linkage=_ZNK16CCommentAnimNode8GetColorEv */
	/* <1090737> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:82 */
	virtual void SetNodeSize(class CCommentAnimNode *, const class Vector2D  &); /* linkage=_ZN16CCommentAnimNode11SetNodeSizeERK8Vector2D */
	/* <109070e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:76 */
	virtual const class Vector2D  & GetNodeSize(const class CCommentAnimNode  *); /* linkage=_ZNK16CCommentAnimNode11GetNodeSizeEv */
	/* <1093c03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:70 */
	virtual void SetCommentText(class CCommentAnimNode *, const class CUtlString  &); /* linkage=_ZN16CCommentAnimNode14SetCommentTextERK10CUtlString */
	/* <10906e5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:64 */
	virtual const class CUtlString  & GetCommentText(const class CCommentAnimNode  *); /* linkage=_ZNK16CCommentAnimNode14GetCommentTextEv */
	virtual void SetChildID(class CCommentAnimNode *, int, class AnimNodeID); /* linkage=_ZN16CCommentAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CCommentAnimNode  *, int); /* linkage=_ZNK16CCommentAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CCommentAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK16CCommentAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	/* <10929e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:50 */
	virtual const class CUtlString  & GetChildName(const class CCommentAnimNode  *, int); /* linkage=_ZNK16CCommentAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CCommentAnimNode  *, int); /* linkage=_ZNK16CCommentAnimNode8GetChildEi */
	virtual int GetChildCount(const class CCommentAnimNode  *); /* linkage=_ZNK16CCommentAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CCommentAnimNode  *, class ClassID); /* linkage=_ZNK16CCommentAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CCommentAnimNode *, class ClassID); /* linkage=_ZN16CCommentAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <10906bc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CCommentAnimNode  *); /* linkage=_ZNK16CCommentAnimNode11GetTypeInfoEv */
	void CCommentAnimNode(class CCommentAnimNode *); /* linkage=_ZN16CCommentAnimNodeC4Ev */
	void KV3TransferLoad_CCommentAnimNode(class CCommentAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN16CCommentAnimNode32KV3TransferLoad_CCommentAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CCommentAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN16CCommentAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CCommentAnimNode(const class CCommentAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CCommentAnimNode32KV3TransferSave_CCommentAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CCommentAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CCommentAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5186c8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/commentanimnode_h_schema.gen_cpp:135 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CCommentAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CCommentAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CCommentAnimNode(class CCommentAnimNode *); /* linkage=_ZN16CCommentAnimNodeD4Ev */
	class CCommentAnimNode & operator=(class CCommentAnimNode *, const class CCommentAnimNode  &); /* linkage=_ZN16CCommentAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CCommentAnimNode *); /* linkage=_ZN16CCommentAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <514f23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/commentanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCommentAnimNode  *); /* linkage=_ZNK16CCommentAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CCommentAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CCommentAnimNode17GetPrimaryBindingEv */
	void CCommentAnimNode(class CCommentAnimNode *, class CCommentAnimNode &); /* linkage=_ZN16CCommentAnimNodeC4EOS_ */
	void CCommentAnimNode(class CCommentAnimNode *, const class CCommentAnimNode  &); /* linkage=_ZN16CCommentAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN16CCommentAnimNode8MyTypeIDEv */
	/* <109554b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN16CCommentAnimNode10MyTypeInfoEv */
	class CCommentAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN16CCommentAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CCommentAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CCommentAnimNode  *, char &); /* linkage=_ZN16CCommentAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CCommentAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CCommentAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <01072E0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 21083
} /* size: 0, variables: 2 */

// <01072E08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01072D9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/commentanimnode.h:16
// function call: 1
void CCommentAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/slowdownonslopesanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01256111> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:14
// function calls: 10
void CSlowDownOnSlopesAnimNode::~CSlowDownOnSlopesAnimNode()
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

// <01255DD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:14
// function calls: 15
void CSlowDownOnSlopesAnimNode::~CSlowDownOnSlopesAnimNode()
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
	CSlowDownOnSlopesAnimNode::~CSlowDownOnSlopesAnimNode(); // 14
} /* size: 123, inline expansions: 15 (279 bytes) */

// <01255DB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:14
inline void CSlowDownOnSlopesAnimNode::~CSlowDownOnSlopesAnimNode()
{
} /* size: 0 */

// <01222FBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:14
// member functions: 63
// member variables: 3
// static member variables: 2
// vtable entries: 14
// class size: 80
class CSlowDownOnSlopesAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CSlowDownOnSlopesAnimNode(CSlowDownOnSlopesAnimNode* , CSlowDownOnSlopesAnimNode& );
	void CSlowDownOnSlopesAnimNode(CSlowDownOnSlopesAnimNode* , const CSlowDownOnSlopesAnimNode& );
private:
	static class CClassInfoT<CSlowDownOnSlopesAnimNode> m_classInfoCSlowDownOnSlopesAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CSlowDownOnSlopesAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11 */
	virtual void* CastToBase(CSlowDownOnSlopesAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11 */
	virtual const void* CastToBase(const CSlowDownOnSlopesAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	CSlowDownOnSlopesAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CSlowDownOnSlopesAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSlowDownOnSlopesAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:18 */
	void KV3TransferPolymorphicClassname(const CSlowDownOnSlopesAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:18 */
	CSlowDownOnSlopesAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:18 */
	virtual void KV3TransferSave(const CSlowDownOnSlopesAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:18 */
	virtual void KV3TransferLoad(CSlowDownOnSlopesAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:18 */
	void KV3TransferSave_CSlowDownOnSlopesAnimNode(const CSlowDownOnSlopesAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:18 */
	void KV3TransferLoad_CSlowDownOnSlopesAnimNode(CSlowDownOnSlopesAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:20 */
	void CSlowDownOnSlopesAnimNode(CSlowDownOnSlopesAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:27 */
	virtual int GetChildCount(const CSlowDownOnSlopesAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:33 */
	virtual IAnimNode* GetChild(const CSlowDownOnSlopesAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:39 */
	virtual AnimNodeID GetChildID(const CSlowDownOnSlopesAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:45 */
	virtual void SetChildID(CSlowDownOnSlopesAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:51 */
	virtual const CUtlString& GetChildName(const CSlowDownOnSlopesAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:65 */
	virtual void SetInputConnection(CSlowDownOnSlopesAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:59 */
	virtual AnimOutputID GetChildOutputID(const CSlowDownOnSlopesAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:71 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSlowDownOnSlopesAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	float m_flSlowDownStrength; /* 72 4 */
	virtual void ~CSlowDownOnSlopesAnimNode(CSlowDownOnSlopesAnimNode* );
	virtual void SetInputConnection(class CSlowDownOnSlopesAnimNode *, int, class CNodeConnection); /* linkage=_ZN25CSlowDownOnSlopesAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CSlowDownOnSlopesAnimNode *, int, class AnimNodeID); /* linkage=_ZN25CSlowDownOnSlopesAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CSlowDownOnSlopesAnimNode  *, int); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSlowDownOnSlopesAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CSlowDownOnSlopesAnimNode  *, int); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode16GetChildOutputIDEi */
	/* <129c7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:51 */
	virtual const class CUtlString  & GetChildName(const class CSlowDownOnSlopesAnimNode  *, int); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSlowDownOnSlopesAnimNode  *, int); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode8GetChildEi */
	virtual int GetChildCount(const class CSlowDownOnSlopesAnimNode  *); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CSlowDownOnSlopesAnimNode  *, class ClassID); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSlowDownOnSlopesAnimNode *, class ClassID); /* linkage=_ZN25CSlowDownOnSlopesAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129bd08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSlowDownOnSlopesAnimNode  *); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode11GetTypeInfoEv */
	void CSlowDownOnSlopesAnimNode(class CSlowDownOnSlopesAnimNode *); /* linkage=_ZN25CSlowDownOnSlopesAnimNodeC4Ev */
	/* <5ec99c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/slowdownonslopesanimnode_h_schema.gen_cpp:155 */
	void KV3TransferLoad_CSlowDownOnSlopesAnimNode(class CSlowDownOnSlopesAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN25CSlowDownOnSlopesAnimNode41KV3TransferLoad_CSlowDownOnSlopesAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSlowDownOnSlopesAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN25CSlowDownOnSlopesAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSlowDownOnSlopesAnimNode(const class CSlowDownOnSlopesAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode41KV3TransferSave_CSlowDownOnSlopesAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSlowDownOnSlopesAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec94e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/slowdownonslopesanimnode_h_schema.gen_cpp:128 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN25CSlowDownOnSlopesAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN25CSlowDownOnSlopesAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSlowDownOnSlopesAnimNode(class CSlowDownOnSlopesAnimNode *); /* linkage=_ZN25CSlowDownOnSlopesAnimNodeD4Ev */
	class CSlowDownOnSlopesAnimNode & operator=(class CSlowDownOnSlopesAnimNode *, const class CSlowDownOnSlopesAnimNode  &); /* linkage=_ZN25CSlowDownOnSlopesAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CSlowDownOnSlopesAnimNode *); /* linkage=_ZN25CSlowDownOnSlopesAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea457> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/slowdownonslopesanimnode.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSlowDownOnSlopesAnimNode  *); /* linkage=_ZNK25CSlowDownOnSlopesAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN25CSlowDownOnSlopesAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN25CSlowDownOnSlopesAnimNode17GetPrimaryBindingEv */
	void CSlowDownOnSlopesAnimNode(class CSlowDownOnSlopesAnimNode *, class CSlowDownOnSlopesAnimNode &); /* linkage=_ZN25CSlowDownOnSlopesAnimNodeC4EOS_ */
	void CSlowDownOnSlopesAnimNode(class CSlowDownOnSlopesAnimNode *, const class CSlowDownOnSlopesAnimNode  &); /* linkage=_ZN25CSlowDownOnSlopesAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25CSlowDownOnSlopesAnimNode8MyTypeIDEv */
	/* <129f165> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25CSlowDownOnSlopesAnimNode10MyTypeInfoEv */
	class CSlowDownOnSlopesAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN25CSlowDownOnSlopesAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN25CSlowDownOnSlopesAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSlowDownOnSlopesAnimNode  *, char &); /* linkage=_ZN25CSlowDownOnSlopesAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSlowDownOnSlopesAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN25CSlowDownOnSlopesAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <012951CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 11244
} /* size: 0, variables: 2 */

// <012951C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0129515C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.h:17
// function call: 1
void CSlowDownOnSlopesAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 17
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/rootanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01142972> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:13
// function calls: 10
void CRootAnimNode::~CRootAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 13
} /* size: 126, inline expansions: 10 (250 bytes) */

// <01142632> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:13
// function calls: 15
void CRootAnimNode::~CRootAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 13
	CRootAnimNode::~CRootAnimNode(); // 13
} /* size: 123, inline expansions: 15 (279 bytes) */

// <01142616> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:13
inline void CRootAnimNode::~CRootAnimNode()
{
} /* size: 0 */

// <0111B9B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:13
// member functions: 67
// member variables: 2
// static member variables: 2
// vtable entries: 16
// class size: 72
class CRootAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CRootAnimNode(CRootAnimNode* , CRootAnimNode& );
	void CRootAnimNode(CRootAnimNode* , const CRootAnimNode& );
private:
	static class CClassInfoT<CRootAnimNode> m_classInfoCRootAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CRootAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10 */
	virtual void* CastToBase(CRootAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10 */
	virtual const void* CastToBase(const CRootAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	CRootAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CRootAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CRootAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CRootAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:17 */
	CRootAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:17 */
	virtual void KV3TransferSave(const CRootAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:17 */
	virtual void KV3TransferLoad(CRootAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:17 */
	void KV3TransferSave_CRootAnimNode(const CRootAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:17 */
	void KV3TransferLoad_CRootAnimNode(CRootAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:17 */
	void CRootAnimNode(CRootAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:24 */
	virtual bool IsRootNode(const CRootAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:30 */
	virtual int GetChildCount(const CRootAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:36 */
	virtual IAnimNode* GetChild(const CRootAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:42 */
	virtual AnimNodeID GetChildID(const CRootAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:48 */
	virtual void SetChildID(CRootAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:66 */
	virtual const CUtlString& GetChildName(const CRootAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:73 */
	virtual int GetParentCount(const CRootAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:60 */
	virtual void SetInputConnection(CRootAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:54 */
	virtual AnimOutputID GetChildOutputID(const CRootAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:79 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CRootAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	virtual void ~CRootAnimNode(CRootAnimNode* );
	virtual void SetInputConnection(class CRootAnimNode *, int, class CNodeConnection); /* linkage=_ZN13CRootAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CRootAnimNode *, int, class AnimNodeID); /* linkage=_ZN13CRootAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CRootAnimNode  *, int); /* linkage=_ZNK13CRootAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CRootAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK13CRootAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CRootAnimNode  *, int); /* linkage=_ZNK13CRootAnimNode16GetChildOutputIDEi */
	virtual int GetParentCount(const class CRootAnimNode  *); /* linkage=_ZNK13CRootAnimNode14GetParentCountEv */
	/* <1195a27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:66 */
	virtual const class CUtlString  & GetChildName(const class CRootAnimNode  *, int); /* linkage=_ZNK13CRootAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CRootAnimNode  *, int); /* linkage=_ZNK13CRootAnimNode8GetChildEi */
	virtual int GetChildCount(const class CRootAnimNode  *); /* linkage=_ZNK13CRootAnimNode13GetChildCountEv */
	virtual bool IsRootNode(const class CRootAnimNode  *); /* linkage=_ZNK13CRootAnimNode10IsRootNodeEv */
	virtual const void  * CastToBase(const class CRootAnimNode  *, class ClassID); /* linkage=_ZNK13CRootAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CRootAnimNode *, class ClassID); /* linkage=_ZN13CRootAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1193701> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CRootAnimNode  *); /* linkage=_ZNK13CRootAnimNode11GetTypeInfoEv */
	void CRootAnimNode(class CRootAnimNode *); /* linkage=_ZN13CRootAnimNodeC4Ev */
	/* <5ec34e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/rootanimnode_h_schema.gen_cpp:142 */
	void KV3TransferLoad_CRootAnimNode(class CRootAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN13CRootAnimNode29KV3TransferLoad_CRootAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CRootAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN13CRootAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <5edf5e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/rootanimnode_h_schema.gen_cpp:129 */
	void KV3TransferSave_CRootAnimNode(const class CRootAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CRootAnimNode29KV3TransferSave_CRootAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CRootAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CRootAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec300> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/rootanimnode_h_schema.gen_cpp:116 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN13CRootAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN13CRootAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CRootAnimNode(class CRootAnimNode *); /* linkage=_ZN13CRootAnimNodeD4Ev */
	class CRootAnimNode & operator=(class CRootAnimNode *, const class CRootAnimNode  &); /* linkage=_ZN13CRootAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CRootAnimNode *); /* linkage=_ZN13CRootAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea024> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/rootanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CRootAnimNode  *); /* linkage=_ZNK13CRootAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN13CRootAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN13CRootAnimNode17GetPrimaryBindingEv */
	void CRootAnimNode(class CRootAnimNode *, class CRootAnimNode &); /* linkage=_ZN13CRootAnimNodeC4EOS_ */
	void CRootAnimNode(class CRootAnimNode *, const class CRootAnimNode  &); /* linkage=_ZN13CRootAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN13CRootAnimNode8MyTypeIDEv */
	/* <11982c8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN13CRootAnimNode10MyTypeInfoEv */
	class CRootAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN13CRootAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN13CRootAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CRootAnimNode  *, char &); /* linkage=_ZN13CRootAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CRootAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN13CRootAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0116FB87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 44255
} /* size: 0, variables: 2 */

// <0116FB81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0116FB16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.h:16
// function call: 1
void CRootAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


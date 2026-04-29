
//
// animgraph/pathhelperanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01142420> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:13
// function calls: 10
void CPathHelperAnimNode::~CPathHelperAnimNode()
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

// <011420E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:13
// function calls: 15
void CPathHelperAnimNode::~CPathHelperAnimNode()
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
	CPathHelperAnimNode::~CPathHelperAnimNode(); // 13
} /* size: 123, inline expansions: 15 (279 bytes) */

// <011420C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:13
inline void CPathHelperAnimNode::~CPathHelperAnimNode()
{
} /* size: 0 */

// <0111B420> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:13
// member functions: 63
// member variables: 4
// static member variables: 2
// vtable entries: 14
// class size: 80
class CPathHelperAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CPathHelperAnimNode(CPathHelperAnimNode* , CPathHelperAnimNode& );
	void CPathHelperAnimNode(CPathHelperAnimNode* , const CPathHelperAnimNode& );
private:
	static class CClassInfoT<CPathHelperAnimNode> m_classInfoCPathHelperAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CPathHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10 */
	virtual void* CastToBase(CPathHelperAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10 */
	virtual const void* CastToBase(const CPathHelperAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	CPathHelperAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CPathHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CPathHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CPathHelperAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:17 */
	CPathHelperAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:17 */
	virtual void KV3TransferSave(const CPathHelperAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:17 */
	virtual void KV3TransferLoad(CPathHelperAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:17 */
	void KV3TransferSave_CPathHelperAnimNode(const CPathHelperAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:17 */
	void KV3TransferLoad_CPathHelperAnimNode(CPathHelperAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:19 */
	void CPathHelperAnimNode(CPathHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:26 */
	virtual int GetChildCount(const CPathHelperAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:32 */
	virtual IAnimNode* GetChild(const CPathHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:38 */
	virtual AnimNodeID GetChildID(const CPathHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:44 */
	virtual void SetChildID(CPathHelperAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:50 */
	virtual const CUtlString& GetChildName(const CPathHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:64 */
	virtual void SetInputConnection(CPathHelperAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:58 */
	virtual AnimOutputID GetChildOutputID(const CPathHelperAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:70 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CPathHelperAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	float m_flStoppingRadius; /* 72 4 */
	float m_flStoppingSpeedScale; /* 76 4 */
	virtual void ~CPathHelperAnimNode(CPathHelperAnimNode* );
	virtual void SetInputConnection(class CPathHelperAnimNode *, int, class CNodeConnection); /* linkage=_ZN19CPathHelperAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CPathHelperAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CPathHelperAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CPathHelperAnimNode  *, int); /* linkage=_ZNK19CPathHelperAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CPathHelperAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CPathHelperAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CPathHelperAnimNode  *, int); /* linkage=_ZNK19CPathHelperAnimNode16GetChildOutputIDEi */
	/* <11958ea> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:50 */
	virtual const class CUtlString  & GetChildName(const class CPathHelperAnimNode  *, int); /* linkage=_ZNK19CPathHelperAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CPathHelperAnimNode  *, int); /* linkage=_ZNK19CPathHelperAnimNode8GetChildEi */
	virtual int GetChildCount(const class CPathHelperAnimNode  *); /* linkage=_ZNK19CPathHelperAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CPathHelperAnimNode  *, class ClassID); /* linkage=_ZNK19CPathHelperAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CPathHelperAnimNode *, class ClassID); /* linkage=_ZN19CPathHelperAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <11936d8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CPathHelperAnimNode  *); /* linkage=_ZNK19CPathHelperAnimNode11GetTypeInfoEv */
	void CPathHelperAnimNode(class CPathHelperAnimNode *); /* linkage=_ZN19CPathHelperAnimNodeC4Ev */
	void KV3TransferLoad_CPathHelperAnimNode(class CPathHelperAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CPathHelperAnimNode35KV3TransferLoad_CPathHelperAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CPathHelperAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CPathHelperAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPathHelperAnimNode(const class CPathHelperAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CPathHelperAnimNode35KV3TransferSave_CPathHelperAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CPathHelperAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CPathHelperAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec2b2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/pathhelperanimnode_h_schema.gen_cpp:134 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CPathHelperAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CPathHelperAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CPathHelperAnimNode(class CPathHelperAnimNode *); /* linkage=_ZN19CPathHelperAnimNodeD4Ev */
	class CPathHelperAnimNode & operator=(class CPathHelperAnimNode *, const class CPathHelperAnimNode  &); /* linkage=_ZN19CPathHelperAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CPathHelperAnimNode *); /* linkage=_ZN19CPathHelperAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5e9f71> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/pathhelperanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPathHelperAnimNode  *); /* linkage=_ZNK19CPathHelperAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CPathHelperAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CPathHelperAnimNode17GetPrimaryBindingEv */
	void CPathHelperAnimNode(class CPathHelperAnimNode *, class CPathHelperAnimNode &); /* linkage=_ZN19CPathHelperAnimNodeC4EOS_ */
	void CPathHelperAnimNode(class CPathHelperAnimNode *, const class CPathHelperAnimNode  &); /* linkage=_ZN19CPathHelperAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CPathHelperAnimNode8MyTypeIDEv */
	/* <11982aa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CPathHelperAnimNode10MyTypeInfoEv */
	class CPathHelperAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CPathHelperAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CPathHelperAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CPathHelperAnimNode  *, char &); /* linkage=_ZN19CPathHelperAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CPathHelperAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CPathHelperAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <01170488> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 44417
} /* size: 0, variables: 2 */

// <01170482> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01170417> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.h:16
// function call: 1
void CPathHelperAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


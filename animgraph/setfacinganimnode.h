
//
// animgraph/setfacinganimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01145632> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:12
// function calls: 10
void CSetFacingAnimNode::~CSetFacingAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 12
} /* size: 126, inline expansions: 10 (250 bytes) */

// <011452F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:12
// function calls: 15
void CSetFacingAnimNode::~CSetFacingAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 12
	CSetFacingAnimNode::~CSetFacingAnimNode(); // 12
} /* size: 123, inline expansions: 15 (279 bytes) */

// <011452D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:12
inline void CSetFacingAnimNode::~CSetFacingAnimNode()
{
} /* size: 0 */

// <0111F043> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:12
// member functions: 65
// member variables: 4
// static member variables: 2
// vtable entries: 15
// class size: 80
class CSetFacingAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CSetFacingAnimNode(CSetFacingAnimNode* , CSetFacingAnimNode& );
	void CSetFacingAnimNode(CSetFacingAnimNode* , const CSetFacingAnimNode& );
private:
	static class CClassInfoT<CSetFacingAnimNode> m_classInfoCSetFacingAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CSetFacingAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9 */
	virtual void* CastToBase(CSetFacingAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9 */
	virtual const void* CastToBase(const CSetFacingAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	CSetFacingAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	void Schema_CompileTimeVerificationFunction(CSetFacingAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSetFacingAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:16 */
	void KV3TransferPolymorphicClassname(const CSetFacingAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:16 */
	CSetFacingAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:16 */
	virtual void KV3TransferSave(const CSetFacingAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:16 */
	virtual void KV3TransferLoad(CSetFacingAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:16 */
	void KV3TransferSave_CSetFacingAnimNode(const CSetFacingAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:16 */
	void KV3TransferLoad_CSetFacingAnimNode(CSetFacingAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:19 */
	void CSetFacingAnimNode(CSetFacingAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:26 */
	virtual CUtlString GetUIName(const CSetFacingAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:51 */
	virtual int GetChildCount(const CSetFacingAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:57 */
	virtual IAnimNode* GetChild(const CSetFacingAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:63 */
	virtual AnimNodeID GetChildID(const CSetFacingAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:69 */
	virtual void SetChildID(CSetFacingAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:75 */
	virtual const CUtlString& GetChildName(const CSetFacingAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:89 */
	virtual void SetInputConnection(CSetFacingAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:83 */
	virtual AnimOutputID GetChildOutputID(const CSetFacingAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:95 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSetFacingAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	FacingMode m_facingMode; /* 72 4 */
	bool m_bResetChild; /* 76 1 */
	virtual void ~CSetFacingAnimNode(CSetFacingAnimNode* );
	virtual void SetInputConnection(class CSetFacingAnimNode *, int, class CNodeConnection); /* linkage=_ZN18CSetFacingAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CSetFacingAnimNode *, int, class AnimNodeID); /* linkage=_ZN18CSetFacingAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CSetFacingAnimNode  *, int); /* linkage=_ZNK18CSetFacingAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSetFacingAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK18CSetFacingAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CSetFacingAnimNode  *, int); /* linkage=_ZNK18CSetFacingAnimNode16GetChildOutputIDEi */
	/* <1195b5e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:75 */
	virtual const class CUtlString  & GetChildName(const class CSetFacingAnimNode  *, int); /* linkage=_ZNK18CSetFacingAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSetFacingAnimNode  *, int); /* linkage=_ZNK18CSetFacingAnimNode8GetChildEi */
	virtual int GetChildCount(const class CSetFacingAnimNode  *); /* linkage=_ZNK18CSetFacingAnimNode13GetChildCountEv */
	virtual class CUtlString GetUIName(const class CSetFacingAnimNode  *); /* linkage=_ZNK18CSetFacingAnimNode9GetUINameEv */
	virtual const void  * CastToBase(const class CSetFacingAnimNode  *, class ClassID); /* linkage=_ZNK18CSetFacingAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSetFacingAnimNode *, class ClassID); /* linkage=_ZN18CSetFacingAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1193e71> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSetFacingAnimNode  *); /* linkage=_ZNK18CSetFacingAnimNode11GetTypeInfoEv */
	void CSetFacingAnimNode(class CSetFacingAnimNode *); /* linkage=_ZN18CSetFacingAnimNodeC4Ev */
	void KV3TransferLoad_CSetFacingAnimNode(class CSetFacingAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN18CSetFacingAnimNode34KV3TransferLoad_CSetFacingAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSetFacingAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN18CSetFacingAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSetFacingAnimNode(const class CSetFacingAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CSetFacingAnimNode34KV3TransferSave_CSetFacingAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSetFacingAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CSetFacingAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec864> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/setfacinganimnode_h_schema.gen_cpp:134 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CSetFacingAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CSetFacingAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSetFacingAnimNode(class CSetFacingAnimNode *); /* linkage=_ZN18CSetFacingAnimNodeD4Ev */
	class CSetFacingAnimNode & operator=(class CSetFacingAnimNode *, const class CSetFacingAnimNode  &); /* linkage=_ZN18CSetFacingAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CSetFacingAnimNode *); /* linkage=_ZN18CSetFacingAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea23e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/setfacinganimnode.h:15 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSetFacingAnimNode  *); /* linkage=_ZNK18CSetFacingAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CSetFacingAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CSetFacingAnimNode17GetPrimaryBindingEv */
	void CSetFacingAnimNode(class CSetFacingAnimNode *, class CSetFacingAnimNode &); /* linkage=_ZN18CSetFacingAnimNodeC4EOS_ */
	void CSetFacingAnimNode(class CSetFacingAnimNode *, const class CSetFacingAnimNode  &); /* linkage=_ZN18CSetFacingAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CSetFacingAnimNode8MyTypeIDEv */
	/* <119839a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CSetFacingAnimNode10MyTypeInfoEv */
	class CSetFacingAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN18CSetFacingAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CSetFacingAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSetFacingAnimNode  *, char &); /* linkage=_ZN18CSetFacingAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSetFacingAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CSetFacingAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0116907E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 44390
} /* size: 0, variables: 2 */

// <01169078> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0116900D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.h:15
// function call: 1
void CSetFacingAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 15
} /* size: 0, inline expansions: 1 (0 bytes) */


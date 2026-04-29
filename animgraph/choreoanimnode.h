
//
// animgraph/choreoanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	class: 1
//

// <0104E4B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:13
// function calls: 10
void CChoreoAnimNode::~CChoreoAnimNode()
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
} /* size: 118, inline expansions: 10 (242 bytes) */

// <0104E179> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:13
// function calls: 15
void CChoreoAnimNode::~CChoreoAnimNode()
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
	CChoreoAnimNode::~CChoreoAnimNode(); // 13
} /* size: 115, inline expansions: 15 (263 bytes) */

// <0104E15D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:13
inline void CChoreoAnimNode::~CChoreoAnimNode()
{
} /* size: 0 */

// <01012B8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:13
// member functions: 63
// member variables: 2
// static member variables: 2
// vtable entries: 14
// class size: 72
class CChoreoAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CChoreoAnimNode(CChoreoAnimNode* , CChoreoAnimNode& );
	void CChoreoAnimNode(CChoreoAnimNode* , const CChoreoAnimNode& );
private:
	static class CClassInfoT<CChoreoAnimNode> m_classInfoCChoreoAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CChoreoAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9 */
	virtual void* CastToBase(CChoreoAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9 */
	virtual const void* CastToBase(const CChoreoAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	CChoreoAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CChoreoAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CChoreoAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CChoreoAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:17 */
	CChoreoAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:17 */
	virtual void KV3TransferSave(const CChoreoAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:17 */
	virtual void KV3TransferLoad(CChoreoAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:17 */
	void KV3TransferSave_CChoreoAnimNode(const CChoreoAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:17 */
	void KV3TransferLoad_CChoreoAnimNode(CChoreoAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:18 */
	void CChoreoAnimNode(CChoreoAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:25 */
	virtual int GetChildCount(const CChoreoAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:31 */
	virtual IAnimNode* GetChild(const CChoreoAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:37 */
	virtual AnimNodeID GetChildID(const CChoreoAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:43 */
	virtual void SetChildID(CChoreoAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:49 */
	virtual const CUtlString& GetChildName(const CChoreoAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:63 */
	virtual void SetInputConnection(CChoreoAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:57 */
	virtual AnimOutputID GetChildOutputID(const CChoreoAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:69 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CChoreoAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	virtual void ~CChoreoAnimNode(CChoreoAnimNode* );
	virtual void SetInputConnection(class CChoreoAnimNode *, int, class CNodeConnection); /* linkage=_ZN15CChoreoAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CChoreoAnimNode *, int, class AnimNodeID); /* linkage=_ZN15CChoreoAnimNode10SetChildIDEi10AnimNodeID */
	/* <109062c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:37 */
	virtual class AnimNodeID GetChildID(const class CChoreoAnimNode  *, int); /* linkage=_ZNK15CChoreoAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CChoreoAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK15CChoreoAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CChoreoAnimNode  *, int); /* linkage=_ZNK15CChoreoAnimNode16GetChildOutputIDEi */
	/* <1092e58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:49 */
	virtual const class CUtlString  & GetChildName(const class CChoreoAnimNode  *, int); /* linkage=_ZNK15CChoreoAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CChoreoAnimNode  *, int); /* linkage=_ZNK15CChoreoAnimNode8GetChildEi */
	virtual int GetChildCount(const class CChoreoAnimNode  *); /* linkage=_ZNK15CChoreoAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CChoreoAnimNode  *, class ClassID); /* linkage=_ZNK15CChoreoAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CChoreoAnimNode *, class ClassID); /* linkage=_ZN15CChoreoAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1090603> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CChoreoAnimNode  *); /* linkage=_ZNK15CChoreoAnimNode11GetTypeInfoEv */
	void CChoreoAnimNode(class CChoreoAnimNode *); /* linkage=_ZN15CChoreoAnimNodeC4Ev */
	/* <51821e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/choreoanimnode_h_schema.gen_cpp:142 */
	void KV3TransferLoad_CChoreoAnimNode(class CChoreoAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN15CChoreoAnimNode31KV3TransferLoad_CChoreoAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CChoreoAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN15CChoreoAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <5192a7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/choreoanimnode_h_schema.gen_cpp:129 */
	void KV3TransferSave_CChoreoAnimNode(const class CChoreoAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CChoreoAnimNode31KV3TransferSave_CChoreoAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CChoreoAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CChoreoAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5181d1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/choreoanimnode_h_schema.gen_cpp:116 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CChoreoAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CChoreoAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CChoreoAnimNode(class CChoreoAnimNode *); /* linkage=_ZN15CChoreoAnimNodeD4Ev */
	class CChoreoAnimNode & operator=(class CChoreoAnimNode *, const class CChoreoAnimNode  &); /* linkage=_ZN15CChoreoAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CChoreoAnimNode *); /* linkage=_ZN15CChoreoAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <514e70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choreoanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CChoreoAnimNode  *); /* linkage=_ZNK15CChoreoAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CChoreoAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CChoreoAnimNode17GetPrimaryBindingEv */
	void CChoreoAnimNode(class CChoreoAnimNode *, class CChoreoAnimNode &); /* linkage=_ZN15CChoreoAnimNodeC4EOS_ */
	void CChoreoAnimNode(class CChoreoAnimNode *, const class CChoreoAnimNode  &); /* linkage=_ZN15CChoreoAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN15CChoreoAnimNode8MyTypeIDEv */
	/* <10954c8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN15CChoreoAnimNode10MyTypeInfoEv */
	class CChoreoAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN15CChoreoAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CChoreoAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CChoreoAnimNode  *, char &); /* linkage=_ZN15CChoreoAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CChoreoAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CChoreoAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <01074D32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 21056
} /* size: 0, variables: 2 */

// <00F941C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 38787
} /* size: 0, variables: 2 */

// <01074D2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01074CC1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.h:16
// function call: 1
void CChoreoAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/cyclecontrolanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0104F711> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:13
// function calls: 10
void CCycleControlAnimNode::~CCycleControlAnimNode()
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

// <0104F3D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:13
// function calls: 15
void CCycleControlAnimNode::~CCycleControlAnimNode()
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
	CCycleControlAnimNode::~CCycleControlAnimNode(); // 13
} /* size: 115, inline expansions: 15 (263 bytes) */

// <0104F3B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:13
inline void CCycleControlAnimNode::~CCycleControlAnimNode()
{
} /* size: 0 */

// <01014090> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:13
// member functions: 63
// member variables: 4
// static member variables: 3
// vtable entries: 14
// class size: 80
class CCycleControlAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CCycleControlAnimNode(CCycleControlAnimNode* , CCycleControlAnimNode& );
	void CCycleControlAnimNode(CCycleControlAnimNode* , const CCycleControlAnimNode& );
private:
	static class CClassInfoT<CCycleControlAnimNode> m_classInfoCCycleControlAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CCycleControlAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12 */
	virtual void* CastToBase(CCycleControlAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12 */
	virtual const void* CastToBase(const CCycleControlAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	CCycleControlAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CCycleControlAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CCycleControlAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CCycleControlAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:17 */
	CCycleControlAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:17 */
	virtual void KV3TransferSave(const CCycleControlAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:17 */
	virtual void KV3TransferLoad(CCycleControlAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:17 */
	void KV3TransferSave_CCycleControlAnimNode(const CCycleControlAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:17 */
	void KV3TransferLoad_CCycleControlAnimNode(CCycleControlAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:23 */
	void CCycleControlAnimNode(CCycleControlAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:30 */
	virtual int GetChildCount(const CCycleControlAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:36 */
	virtual IAnimNode* GetChild(const CCycleControlAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:42 */
	virtual AnimNodeID GetChildID(const CCycleControlAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:48 */
	virtual void SetChildID(CCycleControlAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:54 */
	virtual const CUtlString& GetChildName(const CCycleControlAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:66 */
	virtual void SetInputConnection(CCycleControlAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:60 */
	virtual AnimOutputID GetChildOutputID(const CCycleControlAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:72 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CCycleControlAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	AnimValueSource m_valueSource; /* 72 4 */
	AnimParamID m_param; /* 76 4 */
	static class CUtlString m_sChildName; /* 0 0 */
	virtual void ~CCycleControlAnimNode(CCycleControlAnimNode* );
	virtual void SetInputConnection(class CCycleControlAnimNode *, int, class CNodeConnection); /* linkage=_ZN21CCycleControlAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CCycleControlAnimNode *, int, class AnimNodeID); /* linkage=_ZN21CCycleControlAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CCycleControlAnimNode  *, int); /* linkage=_ZNK21CCycleControlAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CCycleControlAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK21CCycleControlAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CCycleControlAnimNode  *, int); /* linkage=_ZNK21CCycleControlAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CCycleControlAnimNode  *, int); /* linkage=_ZNK21CCycleControlAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CCycleControlAnimNode  *, int); /* linkage=_ZNK21CCycleControlAnimNode8GetChildEi */
	virtual int GetChildCount(const class CCycleControlAnimNode  *); /* linkage=_ZNK21CCycleControlAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CCycleControlAnimNode  *, class ClassID); /* linkage=_ZNK21CCycleControlAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CCycleControlAnimNode *, class ClassID); /* linkage=_ZN21CCycleControlAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <10908ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CCycleControlAnimNode  *); /* linkage=_ZNK21CCycleControlAnimNode11GetTypeInfoEv */
	void CCycleControlAnimNode(class CCycleControlAnimNode *); /* linkage=_ZN21CCycleControlAnimNodeC4Ev */
	void KV3TransferLoad_CCycleControlAnimNode(class CCycleControlAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN21CCycleControlAnimNode37KV3TransferLoad_CCycleControlAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CCycleControlAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN21CCycleControlAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CCycleControlAnimNode(const class CCycleControlAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CCycleControlAnimNode37KV3TransferSave_CCycleControlAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CCycleControlAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CCycleControlAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518715> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/cyclecontrolanimnode_h_schema.gen_cpp:137 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CCycleControlAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CCycleControlAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CCycleControlAnimNode(class CCycleControlAnimNode *); /* linkage=_ZN21CCycleControlAnimNodeD4Ev */
	class CCycleControlAnimNode & operator=(class CCycleControlAnimNode *, const class CCycleControlAnimNode  &); /* linkage=_ZN21CCycleControlAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CCycleControlAnimNode *); /* linkage=_ZN21CCycleControlAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <514fd6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/cyclecontrolanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCycleControlAnimNode  *); /* linkage=_ZNK21CCycleControlAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CCycleControlAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CCycleControlAnimNode17GetPrimaryBindingEv */
	void CCycleControlAnimNode(class CCycleControlAnimNode *, class CCycleControlAnimNode &); /* linkage=_ZN21CCycleControlAnimNodeC4EOS_ */
	void CCycleControlAnimNode(class CCycleControlAnimNode *, const class CCycleControlAnimNode  &); /* linkage=_ZN21CCycleControlAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21CCycleControlAnimNode8MyTypeIDEv */
	/* <1095569> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21CCycleControlAnimNode10MyTypeInfoEv */
	class CCycleControlAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN21CCycleControlAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN21CCycleControlAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CCycleControlAnimNode  *, char &); /* linkage=_ZN21CCycleControlAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CCycleControlAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN21CCycleControlAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <010720B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 21213
} /* size: 0, variables: 2 */

// <010720B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01072047> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.h:16
// function call: 1
void CCycleControlAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


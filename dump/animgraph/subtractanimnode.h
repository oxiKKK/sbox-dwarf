
//
// animgraph/subtractanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0125AE61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:13
// function calls: 10
void CSubtractAnimNode::~CSubtractAnimNode()
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

// <0125AB21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:13
// function calls: 15
void CSubtractAnimNode::~CSubtractAnimNode()
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
	CSubtractAnimNode::~CSubtractAnimNode(); // 13
} /* size: 123, inline expansions: 15 (279 bytes) */

// <0125AB05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:13
inline void CSubtractAnimNode::~CSubtractAnimNode()
{
} /* size: 0 */

// <0123B54D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:13
// member functions: 67
// member variables: 10
// static member variables: 2
// vtable entries: 14
// class size: 96
class CSubtractAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CSubtractAnimNode(CSubtractAnimNode* , CSubtractAnimNode& );
	void CSubtractAnimNode(CSubtractAnimNode* , const CSubtractAnimNode& );
private:
	static class CClassInfoT<CSubtractAnimNode> m_classInfoCSubtractAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CSubtractAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11 */
	virtual void* CastToBase(CSubtractAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11 */
	virtual const void* CastToBase(const CSubtractAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	CSubtractAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CSubtractAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSubtractAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CSubtractAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:17 */
	CSubtractAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:17 */
	virtual void KV3TransferSave(const CSubtractAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:17 */
	virtual void KV3TransferLoad(CSubtractAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:17 */
	void KV3TransferSave_CSubtractAnimNode(const CSubtractAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:17 */
	void KV3TransferLoad_CSubtractAnimNode(CSubtractAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:20 */
	void CSubtractAnimNode(CSubtractAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:27 */
	virtual int GetChildCount(const CSubtractAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:33 */
	virtual IAnimNode* GetChild(const CSubtractAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:39 */
	virtual AnimNodeID GetChildID(const CSubtractAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:45 */
	virtual void SetChildID(CSubtractAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:58 */
	virtual const CUtlString& GetChildName(const CSubtractAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:73 */
	virtual void SetInputConnection(CSubtractAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:67 */
	virtual AnimOutputID GetChildOutputID(const CSubtractAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:86 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSubtractAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:124 */
	PropertyChangeDirtyResult_t RefreshUICallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:130 */
	PropertyAttrState_t TimingBlendParamFilter(void* );
	CNodeConnection m_baseInputConnection; /* 64 8 */
	CNodeConnection m_subtractInputConnection; /* 72 8 */
	BinaryNodeTiming m_timingBehavior; /* 80 4 */
	float m_flTimingBlend; /* 84 4 */
	BinaryNodeChildOption m_footMotionTiming; /* 88 4 */
	bool m_bResetBase; /* 92 1 */
	bool m_bResetSubtract; /* 93 1 */
	bool m_bApplyChannelsSeparately; /* 94 1 */
	bool m_bModelSpace; /* 95 1 */
	virtual void ~CSubtractAnimNode(CSubtractAnimNode* );
	/* <129cde1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:73 */
	virtual void SetInputConnection(class CSubtractAnimNode *, int, class CNodeConnection); /* linkage=_ZN17CSubtractAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CSubtractAnimNode *, int, class AnimNodeID); /* linkage=_ZN17CSubtractAnimNode10SetChildIDEi10AnimNodeID */
	/* <129c40d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:39 */
	virtual class AnimNodeID GetChildID(const class CSubtractAnimNode  *, int); /* linkage=_ZNK17CSubtractAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSubtractAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK17CSubtractAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CSubtractAnimNode  *, int); /* linkage=_ZNK17CSubtractAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CSubtractAnimNode  *, int); /* linkage=_ZNK17CSubtractAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSubtractAnimNode  *, int); /* linkage=_ZNK17CSubtractAnimNode8GetChildEi */
	virtual int GetChildCount(const class CSubtractAnimNode  *); /* linkage=_ZNK17CSubtractAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CSubtractAnimNode  *, class ClassID); /* linkage=_ZNK17CSubtractAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSubtractAnimNode *, class ClassID); /* linkage=_ZN17CSubtractAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129c3e3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSubtractAnimNode  *); /* linkage=_ZNK17CSubtractAnimNode11GetTypeInfoEv */
	enum PropertyChangeDirtyResult_t RefreshUICallback(void *); /* linkage=_ZN17CSubtractAnimNode17RefreshUICallbackEPv */
	enum PropertyAttrState_t TimingBlendParamFilter(void *); /* linkage=_ZN17CSubtractAnimNode22TimingBlendParamFilterEPv */
	void CSubtractAnimNode(class CSubtractAnimNode *); /* linkage=_ZN17CSubtractAnimNodeC4Ev */
	void KV3TransferLoad_CSubtractAnimNode(class CSubtractAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CSubtractAnimNode33KV3TransferLoad_CSubtractAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSubtractAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CSubtractAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSubtractAnimNode(const class CSubtractAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CSubtractAnimNode33KV3TransferSave_CSubtractAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSubtractAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CSubtractAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <6454f6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/subtractanimnode_h_schema.gen_cpp:196 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CSubtractAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CSubtractAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSubtractAnimNode(class CSubtractAnimNode *); /* linkage=_ZN17CSubtractAnimNodeD4Ev */
	class CSubtractAnimNode & operator=(class CSubtractAnimNode *, const class CSubtractAnimNode  &); /* linkage=_ZN17CSubtractAnimNodeaSERKS_ */
	/* <6454cb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/subtractanimnode_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(class CSubtractAnimNode *); /* linkage=_ZN17CSubtractAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <6452ae> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/subtractanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSubtractAnimNode  *); /* linkage=_ZNK17CSubtractAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CSubtractAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CSubtractAnimNode17GetPrimaryBindingEv */
	void CSubtractAnimNode(class CSubtractAnimNode *, class CSubtractAnimNode &); /* linkage=_ZN17CSubtractAnimNodeC4EOS_ */
	void CSubtractAnimNode(class CSubtractAnimNode *, const class CSubtractAnimNode  &); /* linkage=_ZN17CSubtractAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17CSubtractAnimNode8MyTypeIDEv */
	/* <129f479> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17CSubtractAnimNode10MyTypeInfoEv */
	class CSubtractAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN17CSubtractAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CSubtractAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSubtractAnimNode  *, char &); /* linkage=_ZN17CSubtractAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSubtractAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CSubtractAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0127D239> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 11033
} /* size: 0, variables: 2 */

// <0127D233> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0127D1C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.h:16
// function call: 1
void CSubtractAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


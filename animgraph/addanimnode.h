
//
// animgraph/addanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0104AB4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:13
// function calls: 10
void CAddAnimNode::~CAddAnimNode()
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

// <0104A80D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:13
// function calls: 15
void CAddAnimNode::~CAddAnimNode()
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
	CAddAnimNode::~CAddAnimNode(); // 13
} /* size: 115, inline expansions: 15 (263 bytes) */

// <0104A7F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:13
inline void CAddAnimNode::~CAddAnimNode()
{
} /* size: 0 */

// <00FFCD11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:13
// member functions: 67
// member variables: 10
// static member variables: 2
// vtable entries: 14
// class size: 96
class CAddAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CAddAnimNode(CAddAnimNode* , CAddAnimNode& );
	void CAddAnimNode(CAddAnimNode* , const CAddAnimNode& );
private:
	static class CClassInfoT<CAddAnimNode> m_classInfoCAddAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CAddAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11 */
	virtual void* CastToBase(CAddAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11 */
	virtual const void* CastToBase(const CAddAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	CAddAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CAddAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAddAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CAddAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:17 */
	CAddAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:17 */
	virtual void KV3TransferSave(const CAddAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:17 */
	virtual void KV3TransferLoad(CAddAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:17 */
	void KV3TransferSave_CAddAnimNode(const CAddAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:17 */
	void KV3TransferLoad_CAddAnimNode(CAddAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:21 */
	void CAddAnimNode(CAddAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:28 */
	virtual int GetChildCount(const CAddAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:34 */
	virtual IAnimNode* GetChild(const CAddAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:40 */
	virtual AnimNodeID GetChildID(const CAddAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:46 */
	virtual void SetChildID(CAddAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:59 */
	virtual const CUtlString& GetChildName(const CAddAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:74 */
	virtual void SetInputConnection(CAddAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:68 */
	virtual AnimOutputID GetChildOutputID(const CAddAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:87 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CAddAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:122 */
	PropertyChangeDirtyResult_t RefreshUICallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:128 */
	PropertyAttrState_t TimingBlendParamFilter(void* );
	CNodeConnection m_baseInput; /* 64 8 */
	CNodeConnection m_additiveInput; /* 72 8 */
	BinaryNodeTiming m_timingBehavior; /* 80 4 */
	float m_flTimingBlend; /* 84 4 */
	BinaryNodeChildOption m_footMotionTiming; /* 88 4 */
	bool m_bResetBase; /* 92 1 */
	bool m_bResetAdditive; /* 93 1 */
	bool m_bApplyChannelsSeparately; /* 94 1 */
	bool m_bModelSpace; /* 95 1 */
	virtual void ~CAddAnimNode(CAddAnimNode* );
	/* <109347d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:74 */
	virtual void SetInputConnection(class CAddAnimNode *, int, class CNodeConnection); /* linkage=_ZN12CAddAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CAddAnimNode *, int, class AnimNodeID); /* linkage=_ZN12CAddAnimNode10SetChildIDEi10AnimNodeID */
	/* <1090025> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:40 */
	virtual class AnimNodeID GetChildID(const class CAddAnimNode  *, int); /* linkage=_ZNK12CAddAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CAddAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK12CAddAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CAddAnimNode  *, int); /* linkage=_ZNK12CAddAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CAddAnimNode  *, int); /* linkage=_ZNK12CAddAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CAddAnimNode  *, int); /* linkage=_ZNK12CAddAnimNode8GetChildEi */
	virtual int GetChildCount(const class CAddAnimNode  *); /* linkage=_ZNK12CAddAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CAddAnimNode  *, class ClassID); /* linkage=_ZNK12CAddAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CAddAnimNode *, class ClassID); /* linkage=_ZN12CAddAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <108fffc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CAddAnimNode  *); /* linkage=_ZNK12CAddAnimNode11GetTypeInfoEv */
	/* <10946e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:122 */
	enum PropertyChangeDirtyResult_t RefreshUICallback(void *); /* linkage=_ZN12CAddAnimNode17RefreshUICallbackEPv */
	enum PropertyAttrState_t TimingBlendParamFilter(void *); /* linkage=_ZN12CAddAnimNode22TimingBlendParamFilterEPv */
	void CAddAnimNode(class CAddAnimNode *); /* linkage=_ZN12CAddAnimNodeC4Ev */
	void KV3TransferLoad_CAddAnimNode(class CAddAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAddAnimNode28KV3TransferLoad_CAddAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CAddAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAddAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAddAnimNode(const class CAddAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAddAnimNode28KV3TransferSave_CAddAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CAddAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAddAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5177e9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/addanimnode_h_schema.gen_cpp:196 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN12CAddAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN12CAddAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CAddAnimNode(class CAddAnimNode *); /* linkage=_ZN12CAddAnimNodeD4Ev */
	class CAddAnimNode & operator=(class CAddAnimNode *, const class CAddAnimNode  &); /* linkage=_ZN12CAddAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CAddAnimNode *); /* linkage=_ZN12CAddAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <514a3a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/addanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAddAnimNode  *); /* linkage=_ZNK12CAddAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN12CAddAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN12CAddAnimNode17GetPrimaryBindingEv */
	void CAddAnimNode(class CAddAnimNode *, class CAddAnimNode &); /* linkage=_ZN12CAddAnimNodeC4EOS_ */
	void CAddAnimNode(class CAddAnimNode *, const class CAddAnimNode  &); /* linkage=_ZN12CAddAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN12CAddAnimNode8MyTypeIDEv */
	/* <10946c9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN12CAddAnimNode10MyTypeInfoEv */
	class CAddAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN12CAddAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN12CAddAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CAddAnimNode  *, char &); /* linkage=_ZN12CAddAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAddAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN12CAddAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0108D52B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 20975
} /* size: 0, variables: 2 */

// <0108D525> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0108D4BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.h:16
// function call: 1
void CAddAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/bonemaskanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0104D41E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:13
// function calls: 11
void CBoneMaskAnimNode::~CBoneMaskAnimNode()
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
} /* size: 166, inline expansions: 11 (219 bytes) */

// <0104D095> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:13
// function calls: 16
void CBoneMaskAnimNode::~CBoneMaskAnimNode()
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
	CBoneMaskAnimNode::~CBoneMaskAnimNode(); // 13
} /* size: 167, inline expansions: 16 (304 bytes) */

// <0104D079> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:13
inline void CBoneMaskAnimNode::~CBoneMaskAnimNode()
{
} /* size: 0 */

// <010100D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:13
// member functions: 71
// member variables: 14
// static member variables: 2
// vtable entries: 14
// class size: 128
class CBoneMaskAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CBoneMaskAnimNode(CBoneMaskAnimNode* , CBoneMaskAnimNode& );
	void CBoneMaskAnimNode(CBoneMaskAnimNode* , const CBoneMaskAnimNode& );
private:
	static class CClassInfoT<CBoneMaskAnimNode> m_classInfoCBoneMaskAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CBoneMaskAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11 */
	virtual void* CastToBase(CBoneMaskAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11 */
	virtual const void* CastToBase(const CBoneMaskAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	CBoneMaskAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CBoneMaskAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBoneMaskAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CBoneMaskAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:17 */
	CBoneMaskAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:17 */
	virtual void KV3TransferSave(const CBoneMaskAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:17 */
	virtual void KV3TransferLoad(CBoneMaskAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:17 */
	void KV3TransferSave_CBoneMaskAnimNode(const CBoneMaskAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:17 */
	void KV3TransferLoad_CBoneMaskAnimNode(CBoneMaskAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:20 */
	void CBoneMaskAnimNode(CBoneMaskAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:27 */
	virtual int GetChildCount(const CBoneMaskAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:33 */
	virtual IAnimNode* GetChild(const CBoneMaskAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:39 */
	virtual AnimNodeID GetChildID(const CBoneMaskAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:45 */
	virtual void SetChildID(CBoneMaskAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:58 */
	virtual const CUtlString& GetChildName(const CBoneMaskAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:73 */
	virtual void SetInputConnection(CBoneMaskAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:67 */
	virtual AnimOutputID GetChildOutputID(const CBoneMaskAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:86 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CBoneMaskAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:136 */
	PropertyChangeDirtyResult_t RefreshUICallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:142 */
	PropertyAttrState_t BlendSourceFilter(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:149 */
	PropertyAttrState_t BlendParamFilter(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:164 */
	PropertyAttrState_t TimingBlendParamFilter(void* );
	CUtlString m_weightListName; /* 64 8 */
	CNodeConnection m_inputConnection1; /* 72 8 */
	CNodeConnection m_inputConnection2; /* 80 8 */
	BoneMaskBlendSpace m_blendSpace; /* 88 4 */
	bool m_bUseBlendScale; /* 92 1 */
	AnimValueSource m_blendValueSource; /* 96 4 */
	AnimParamID m_blendParameter; /* 100 4 */
	BinaryNodeTiming m_timingBehavior; /* 104 4 */
	float m_flTimingBlend; /* 108 4 */
	float m_flRootMotionBlend; /* 112 4 */
	BinaryNodeChildOption m_footMotionTiming; /* 116 4 */
	bool m_bResetChild1; /* 120 1 */
	bool m_bResetChild2; /* 121 1 */
	virtual void ~CBoneMaskAnimNode(CBoneMaskAnimNode* );
	/* <1093655> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:73 */
	virtual void SetInputConnection(class CBoneMaskAnimNode *, int, class CNodeConnection); /* linkage=_ZN17CBoneMaskAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CBoneMaskAnimNode *, int, class AnimNodeID); /* linkage=_ZN17CBoneMaskAnimNode10SetChildIDEi10AnimNodeID */
	/* <1090561> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:39 */
	virtual class AnimNodeID GetChildID(const class CBoneMaskAnimNode  *, int); /* linkage=_ZNK17CBoneMaskAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CBoneMaskAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK17CBoneMaskAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CBoneMaskAnimNode  *, int); /* linkage=_ZNK17CBoneMaskAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CBoneMaskAnimNode  *, int); /* linkage=_ZNK17CBoneMaskAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CBoneMaskAnimNode  *, int); /* linkage=_ZNK17CBoneMaskAnimNode8GetChildEi */
	virtual int GetChildCount(const class CBoneMaskAnimNode  *); /* linkage=_ZNK17CBoneMaskAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CBoneMaskAnimNode  *, class ClassID); /* linkage=_ZNK17CBoneMaskAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CBoneMaskAnimNode *, class ClassID); /* linkage=_ZN17CBoneMaskAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1090538> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CBoneMaskAnimNode  *); /* linkage=_ZNK17CBoneMaskAnimNode11GetTypeInfoEv */
	enum PropertyAttrState_t BlendSourceFilter(void *); /* linkage=_ZN17CBoneMaskAnimNode17BlendSourceFilterEPv */
	enum PropertyAttrState_t BlendParamFilter(void *); /* linkage=_ZN17CBoneMaskAnimNode16BlendParamFilterEPv */
	enum PropertyChangeDirtyResult_t RefreshUICallback(void *); /* linkage=_ZN17CBoneMaskAnimNode17RefreshUICallbackEPv */
	enum PropertyAttrState_t TimingBlendParamFilter(void *); /* linkage=_ZN17CBoneMaskAnimNode22TimingBlendParamFilterEPv */
	void CBoneMaskAnimNode(class CBoneMaskAnimNode *); /* linkage=_ZN17CBoneMaskAnimNodeC4Ev */
	void KV3TransferLoad_CBoneMaskAnimNode(class CBoneMaskAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CBoneMaskAnimNode33KV3TransferLoad_CBoneMaskAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CBoneMaskAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CBoneMaskAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBoneMaskAnimNode(const class CBoneMaskAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CBoneMaskAnimNode33KV3TransferSave_CBoneMaskAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CBoneMaskAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CBoneMaskAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518035> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/bonemaskanimnode_h_schema.gen_cpp:253 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CBoneMaskAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CBoneMaskAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CBoneMaskAnimNode(class CBoneMaskAnimNode *); /* linkage=_ZN17CBoneMaskAnimNodeD4Ev */
	class CBoneMaskAnimNode & operator=(class CBoneMaskAnimNode *, const class CBoneMaskAnimNode  &); /* linkage=_ZN17CBoneMaskAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CBoneMaskAnimNode *); /* linkage=_ZN17CBoneMaskAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <514d09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/bonemaskanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBoneMaskAnimNode  *); /* linkage=_ZNK17CBoneMaskAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CBoneMaskAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CBoneMaskAnimNode17GetPrimaryBindingEv */
	void CBoneMaskAnimNode(class CBoneMaskAnimNode *, class CBoneMaskAnimNode &); /* linkage=_ZN17CBoneMaskAnimNodeC4EOS_ */
	void CBoneMaskAnimNode(class CBoneMaskAnimNode *, const class CBoneMaskAnimNode  &); /* linkage=_ZN17CBoneMaskAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17CBoneMaskAnimNode8MyTypeIDEv */
	/* <109546e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17CBoneMaskAnimNode10MyTypeInfoEv */
	class CBoneMaskAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN17CBoneMaskAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CBoneMaskAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CBoneMaskAnimNode  *, char &); /* linkage=_ZN17CBoneMaskAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CBoneMaskAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CBoneMaskAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0107978D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 21110
} /* size: 0, variables: 2 */

// <01079787> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0107971C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.h:16
// function call: 1
void CBoneMaskAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


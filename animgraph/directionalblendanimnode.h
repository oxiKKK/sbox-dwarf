
//
// animgraph/directionalblendanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0104FCAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:13
// function calls: 11
void CDirectionalBlendAnimNode::~CDirectionalBlendAnimNode()
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

// <0104F923> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:13
// function calls: 16
void CDirectionalBlendAnimNode::~CDirectionalBlendAnimNode()
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
	CDirectionalBlendAnimNode::~CDirectionalBlendAnimNode(); // 13
} /* size: 167, inline expansions: 16 (304 bytes) */

// <0104F907> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:13
inline void CDirectionalBlendAnimNode::~CDirectionalBlendAnimNode()
{
} /* size: 0 */

// <01014693> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:13
// member functions: 63
// member variables: 8
// static member variables: 2
// vtable entries: 12
// class size: 120
class CDirectionalBlendAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CDirectionalBlendAnimNode(CDirectionalBlendAnimNode* , CDirectionalBlendAnimNode& );
	void CDirectionalBlendAnimNode(CDirectionalBlendAnimNode* , const CDirectionalBlendAnimNode& );
private:
	static class CClassInfoT<CDirectionalBlendAnimNode> m_classInfoCDirectionalBlendAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26 */
	virtual const CClassInfo& GetTypeInfo(const CDirectionalBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26 */
	virtual void* CastToBase(CDirectionalBlendAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26 */
	virtual const void* CastToBase(const CDirectionalBlendAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	CDirectionalBlendAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CDirectionalBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CDirectionalBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CDirectionalBlendAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:17 */
	CDirectionalBlendAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:17 */
	virtual void KV3TransferSave(const CDirectionalBlendAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:17 */
	virtual void KV3TransferLoad(CDirectionalBlendAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:17 */
	void KV3TransferSave_CDirectionalBlendAnimNode(const CDirectionalBlendAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:17 */
	void KV3TransferLoad_CDirectionalBlendAnimNode(CDirectionalBlendAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:35 */
	void CDirectionalBlendAnimNode(CDirectionalBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:42 */
	virtual int GetChildCount(const CDirectionalBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:48 */
	virtual IAnimNode* GetChild(const CDirectionalBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:54 */
	virtual AnimNodeID GetChildID(const CDirectionalBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:60 */
	virtual void SetChildID(CDirectionalBlendAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:66 */
	virtual const CUtlString& GetChildName(const CDirectionalBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:73 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CDirectionalBlendAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:122 */
	PropertyChangeDirtyResult_t BlendSourceChangedCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:128 */
	PropertyAttrState_t VisibleIfSourceIsParam(void* );
	CUtlString m_animNamePrefix; /* 64 8 */
	AnimValueSource m_blendValueSource; /* 72 4 */
	AnimParamID m_param; /* 76 4 */
	bool m_bLoop; /* 80 1 */
	bool m_bLockBlendOnReset; /* 81 1 */
	float m_playbackSpeed; /* 84 4 */
	CAnimInputDamping m_damping; /* 88 0 */
	virtual void ~CDirectionalBlendAnimNode(CDirectionalBlendAnimNode* );
	virtual void SetChildID(class CDirectionalBlendAnimNode *, int, class AnimNodeID); /* linkage=_ZN25CDirectionalBlendAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CDirectionalBlendAnimNode  *, int); /* linkage=_ZNK25CDirectionalBlendAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CDirectionalBlendAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK25CDirectionalBlendAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	/* <1092ae2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:66 */
	virtual const class CUtlString  & GetChildName(const class CDirectionalBlendAnimNode  *, int); /* linkage=_ZNK25CDirectionalBlendAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CDirectionalBlendAnimNode  *, int); /* linkage=_ZNK25CDirectionalBlendAnimNode8GetChildEi */
	virtual int GetChildCount(const class CDirectionalBlendAnimNode  *); /* linkage=_ZNK25CDirectionalBlendAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CDirectionalBlendAnimNode  *, class ClassID); /* linkage=_ZNK25CDirectionalBlendAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CDirectionalBlendAnimNode *, class ClassID); /* linkage=_ZN25CDirectionalBlendAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <10908d4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26 */
	virtual const class CClassInfo  & GetTypeInfo(const class CDirectionalBlendAnimNode  *); /* linkage=_ZNK25CDirectionalBlendAnimNode11GetTypeInfoEv */
	enum PropertyChangeDirtyResult_t BlendSourceChangedCallback(void *); /* linkage=_ZN25CDirectionalBlendAnimNode26BlendSourceChangedCallbackEPv */
	enum PropertyAttrState_t VisibleIfSourceIsParam(void *); /* linkage=_ZN25CDirectionalBlendAnimNode22VisibleIfSourceIsParamEPv */
	void CDirectionalBlendAnimNode(class CDirectionalBlendAnimNode *); /* linkage=_ZN25CDirectionalBlendAnimNodeC4Ev */
	void KV3TransferLoad_CDirectionalBlendAnimNode(class CDirectionalBlendAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN25CDirectionalBlendAnimNode41KV3TransferLoad_CDirectionalBlendAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CDirectionalBlendAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN25CDirectionalBlendAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDirectionalBlendAnimNode(const class CDirectionalBlendAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK25CDirectionalBlendAnimNode41KV3TransferSave_CDirectionalBlendAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CDirectionalBlendAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK25CDirectionalBlendAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518762> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/directionalblendanimnode_h_schema.gen_cpp:180 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN25CDirectionalBlendAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN25CDirectionalBlendAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CDirectionalBlendAnimNode(class CDirectionalBlendAnimNode *); /* linkage=_ZN25CDirectionalBlendAnimNodeD4Ev */
	class CDirectionalBlendAnimNode & operator=(class CDirectionalBlendAnimNode *, const class CDirectionalBlendAnimNode  &); /* linkage=_ZN25CDirectionalBlendAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CDirectionalBlendAnimNode *); /* linkage=_ZN25CDirectionalBlendAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <515089> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/directionalblendanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDirectionalBlendAnimNode  *); /* linkage=_ZNK25CDirectionalBlendAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN25CDirectionalBlendAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN25CDirectionalBlendAnimNode17GetPrimaryBindingEv */
	void CDirectionalBlendAnimNode(class CDirectionalBlendAnimNode *, class CDirectionalBlendAnimNode &); /* linkage=_ZN25CDirectionalBlendAnimNodeC4EOS_ */
	void CDirectionalBlendAnimNode(class CDirectionalBlendAnimNode *, const class CDirectionalBlendAnimNode  &); /* linkage=_ZN25CDirectionalBlendAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25CDirectionalBlendAnimNode8MyTypeIDEv */
	/* <1095587> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.cpp:26 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25CDirectionalBlendAnimNode10MyTypeInfoEv */
	class CDirectionalBlendAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN25CDirectionalBlendAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN25CDirectionalBlendAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CDirectionalBlendAnimNode  *, char &); /* linkage=_ZN25CDirectionalBlendAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CDirectionalBlendAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN25CDirectionalBlendAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0107147E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 21316
} /* size: 0, variables: 2 */

// <01071478> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0107140D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directionalblendanimnode.h:16
// function call: 1
void CDirectionalBlendAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


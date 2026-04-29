
//
// animgraph/skeletalinputanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01255BBF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:15
// function calls: 10
void CSkeletalInputAnimNode::~CSkeletalInputAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 15
} /* size: 126, inline expansions: 10 (250 bytes) */

// <0125587F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:15
// function calls: 15
void CSkeletalInputAnimNode::~CSkeletalInputAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 15
	CSkeletalInputAnimNode::~CSkeletalInputAnimNode(); // 15
} /* size: 123, inline expansions: 15 (279 bytes) */

// <01255863> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:15
inline void CSkeletalInputAnimNode::~CSkeletalInputAnimNode()
{
} /* size: 0 */

// <012209A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:15
// member functions: 63
// member variables: 5
// static member variables: 2
// vtable entries: 12
// class size: 80
class CSkeletalInputAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CSkeletalInputAnimNode(CSkeletalInputAnimNode* , CSkeletalInputAnimNode& );
	void CSkeletalInputAnimNode(CSkeletalInputAnimNode* , const CSkeletalInputAnimNode& );
private:
	static class CClassInfoT<CSkeletalInputAnimNode> m_classInfoCSkeletalInputAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CSkeletalInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9 */
	virtual void* CastToBase(CSkeletalInputAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9 */
	virtual const void* CastToBase(const CSkeletalInputAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	CSkeletalInputAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	void Schema_CompileTimeVerificationFunction(CSkeletalInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSkeletalInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:19 */
	void KV3TransferPolymorphicClassname(const CSkeletalInputAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:19 */
	CSkeletalInputAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:19 */
	virtual void KV3TransferSave(const CSkeletalInputAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:19 */
	virtual void KV3TransferLoad(CSkeletalInputAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:19 */
	void KV3TransferSave_CSkeletalInputAnimNode(const CSkeletalInputAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:19 */
	void KV3TransferLoad_CSkeletalInputAnimNode(CSkeletalInputAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:18 */
	void CSkeletalInputAnimNode(CSkeletalInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:23 */
	virtual int GetChildCount(const CSkeletalInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:29 */
	virtual IAnimNode* GetChild(const CSkeletalInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:35 */
	virtual AnimNodeID GetChildID(const CSkeletalInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:41 */
	virtual void SetChildID(CSkeletalInputAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:47 */
	virtual const CUtlString& GetChildName(const CSkeletalInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:54 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSkeletalInputAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:76 */
	PropertyChangeDirtyResult_t OnSourceChangeCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:82 */
	PropertyAttrState_t VisibleIfLiveStream(void* );
	AnimVrBoneTransformSource_t m_transformSource; /* 64 4 */
	AnimVRHandMotionRange_t m_motionRange; /* 68 4 */
	bool m_bEnableIK; /* 72 1 */
	bool m_bEnableCollision; /* 73 1 */
	virtual void ~CSkeletalInputAnimNode(CSkeletalInputAnimNode* );
	virtual void SetChildID(class CSkeletalInputAnimNode *, int, class AnimNodeID); /* linkage=_ZN22CSkeletalInputAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CSkeletalInputAnimNode  *, int); /* linkage=_ZNK22CSkeletalInputAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSkeletalInputAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK22CSkeletalInputAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	/* <129c6ae> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:47 */
	virtual const class CUtlString  & GetChildName(const class CSkeletalInputAnimNode  *, int); /* linkage=_ZNK22CSkeletalInputAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSkeletalInputAnimNode  *, int); /* linkage=_ZNK22CSkeletalInputAnimNode8GetChildEi */
	virtual int GetChildCount(const class CSkeletalInputAnimNode  *); /* linkage=_ZNK22CSkeletalInputAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CSkeletalInputAnimNode  *, class ClassID); /* linkage=_ZNK22CSkeletalInputAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSkeletalInputAnimNode *, class ClassID); /* linkage=_ZN22CSkeletalInputAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129bcde> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSkeletalInputAnimNode  *); /* linkage=_ZNK22CSkeletalInputAnimNode11GetTypeInfoEv */
	/* <129f13b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:76 */
	enum PropertyChangeDirtyResult_t OnSourceChangeCallback(void *); /* linkage=_ZN22CSkeletalInputAnimNode22OnSourceChangeCallbackEPv */
	enum PropertyAttrState_t VisibleIfLiveStream(void *); /* linkage=_ZN22CSkeletalInputAnimNode19VisibleIfLiveStreamEPv */
	void CSkeletalInputAnimNode(class CSkeletalInputAnimNode *); /* linkage=_ZN22CSkeletalInputAnimNodeC4Ev */
	void KV3TransferLoad_CSkeletalInputAnimNode(class CSkeletalInputAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN22CSkeletalInputAnimNode38KV3TransferLoad_CSkeletalInputAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSkeletalInputAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN22CSkeletalInputAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSkeletalInputAnimNode(const class CSkeletalInputAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CSkeletalInputAnimNode38KV3TransferSave_CSkeletalInputAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSkeletalInputAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CSkeletalInputAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec900> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/skeletalinputanimnode_h_schema.gen_cpp:156 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN22CSkeletalInputAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN22CSkeletalInputAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSkeletalInputAnimNode(class CSkeletalInputAnimNode *); /* linkage=_ZN22CSkeletalInputAnimNodeD4Ev */
	class CSkeletalInputAnimNode & operator=(class CSkeletalInputAnimNode *, const class CSkeletalInputAnimNode  &); /* linkage=_ZN22CSkeletalInputAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CSkeletalInputAnimNode *); /* linkage=_ZN22CSkeletalInputAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea3a4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/skeletalinputanimnode.h:18 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSkeletalInputAnimNode  *); /* linkage=_ZNK22CSkeletalInputAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN22CSkeletalInputAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN22CSkeletalInputAnimNode17GetPrimaryBindingEv */
	void CSkeletalInputAnimNode(class CSkeletalInputAnimNode *, class CSkeletalInputAnimNode &); /* linkage=_ZN22CSkeletalInputAnimNodeC4EOS_ */
	void CSkeletalInputAnimNode(class CSkeletalInputAnimNode *, const class CSkeletalInputAnimNode  &); /* linkage=_ZN22CSkeletalInputAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN22CSkeletalInputAnimNode8MyTypeIDEv */
	/* <129f11d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN22CSkeletalInputAnimNode10MyTypeInfoEv */
	class CSkeletalInputAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN22CSkeletalInputAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN22CSkeletalInputAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSkeletalInputAnimNode  *, char &); /* linkage=_ZN22CSkeletalInputAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSkeletalInputAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22CSkeletalInputAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0129631A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 11168
} /* size: 0, variables: 2 */

// <01296314> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <012962A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputanimnode.h:18
// function call: 1
void CSkeletalInputAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 18
} /* size: 0, inline expansions: 1 (0 bytes) */


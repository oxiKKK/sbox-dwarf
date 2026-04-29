
//
// animgraph/subgraphanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <01259FD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:15
// function calls: 32
void CSubGraphAnimNode::~CSubGraphAnimNode()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 15
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 344
	CSmartPtr<CSubGraph, CRefCountAccessor>::~CSmartPtr(); // 15
	CUtlString::~CUtlString(); // 15
	CUtlString::~CUtlString(); // 15
	ValidateAlignment<CUtlHashtableEntry<AnimOutputID, CNodeConnection> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 15
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
} /* size: 286, inline expansions: 32 (494 bytes) */

// <0125981B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:15
// function calls: 37
void CSubGraphAnimNode::~CSubGraphAnimNode()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 15
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 344
	CSmartPtr<CSubGraph, CRefCountAccessor>::~CSmartPtr(); // 15
	CUtlString::~CUtlString(); // 15
	CUtlString::~CUtlString(); // 15
	ValidateAlignment<CUtlHashtableEntry<AnimOutputID, CNodeConnection> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 15
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
	CSubGraphAnimNode::~CSubGraphAnimNode(); // 15
} /* size: 286, inline expansions: 37 (697 bytes) */

// <012597FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:15
inline void CSubGraphAnimNode::~CSubGraphAnimNode()
{
} /* size: 0 */

// <0123981E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:15
// member functions: 117
// member variables: 10
// static member variables: 2
// vtable entries: 32
// class size: 152
class CSubGraphAnimNode : public CAnimNodeBase, public ISubGraphAnimNode {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	/* class ISubGraphAnimNode <ancestor>; */ /* 64 8 */
	void CSubGraphAnimNode(CSubGraphAnimNode* , CSubGraphAnimNode& );
	void CSubGraphAnimNode(CSubGraphAnimNode* , const CSubGraphAnimNode& );
private:
	static class CClassInfoT<CSubGraphAnimNode> m_classInfoCSubGraphAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15 */
	virtual const CClassInfo& GetTypeInfo(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15 */
	virtual void* CastToBase(CSubGraphAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15 */
	virtual const void* CastToBase(const CSubGraphAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	CSubGraphAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	void Schema_CompileTimeVerificationFunction(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:19 */
	void KV3TransferPolymorphicClassname(const CSubGraphAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:19 */
	CSubGraphAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:19 */
	virtual void KV3TransferSave(const CSubGraphAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:19 */
	virtual void KV3TransferLoad(CSubGraphAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:19 */
	void KV3TransferSave_CSubGraphAnimNode(const CSubGraphAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:19 */
	void KV3TransferLoad_CSubGraphAnimNode(CSubGraphAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:24 */
	void CSubGraphAnimNode(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:34 */
	virtual int GetChildCount(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:48 */
	virtual IAnimNode* GetChild(const CSubGraphAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:54 */
	virtual AnimNodeID GetChildID(const CSubGraphAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:96 */
	virtual void SetChildID(CSubGraphAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:102 */
	virtual const CUtlString& GetChildName(const CSubGraphAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:122 */
	virtual int GetParentCount(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:136 */
	virtual const CUtlString& GetParentName(const CSubGraphAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:156 */
	virtual void SetInputConnection(CSubGraphAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:75 */
	virtual AnimOutputID GetChildOutputID(const CSubGraphAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:168 */
	virtual AnimOutputID GetOutputID(const CSubGraphAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:215 */
	virtual int GetOutputIndex(const CSubGraphAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:182 */
	virtual AnimNodeID GetOutputNodeID(const CSubGraphAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:196 */
	virtual AnimNodeLocation_t GetOutputNodeLocation(const CSubGraphAnimNode* , AnimOutputID, const AnimNodePath& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:229 */
	virtual int GetOutputCount(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:243 */
	virtual bool HasOutputs(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:249 */
	virtual CUtlString GetUIName(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:277 */
	virtual void SetContext(CSubGraphAnimNode* , const CAnimGraphContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:270 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSubGraphAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:306 */
	virtual IAnimNodeManager* GetNodeManager(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:312 */
	virtual void SetInputNodeID(CSubGraphAnimNode* , AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:318 */
	virtual void SetOutputNodeID(CSubGraphAnimNode* , AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:324 */
	virtual AnimNodeID GetInputNodeID(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:330 */
	virtual AnimNodeID GetOutputNodeID(const CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:350 */
	virtual bool ShowVisualizer(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:356 */
	virtual IAnimationSubGraph* CreateNewSubGraph(CSubGraphAnimNode* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:403 */
	virtual IAnimationSubGraph* GetSubGraph(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:336 */
	void TransferPostSaveFn(const CSubGraphAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:342 */
	void TransferPostLoadFn(CSubGraphAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:577 */
	PropertyChangeDirtyResult_t OnSubGraphFilenameChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:587 */
	void Bake(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:477 */
	bool CheckForCircularDependencies(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:414 */
	void OnSubGraphFilenameChanged(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:515 */
	void LoadSubGraph(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:447 */
	void ReleaseSubGraph(CSubGraphAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:496 */
	bool CheckForCircularDependencies(CSubGraphAnimNode* , IAnimNodeManager* );
	AnimNodeID m_inputNodeID; /* 72 4 */
	AnimNodeID m_outputNodeID; /* 76 4 */
	CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, undefined_t, CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int> > m_inputConnectionMap; /* 80 32 */
	CUtlString m_subGraphFilename; /* 112 8 */
	CUtlString m_loadedSubGraphFilename; /* 120 8 */
	CSubGraphPtr m_pSubGraph; /* 128 8 */
	CAnimNodeManagerPtr m_nodeManager; /* 136 8 */
	bool m_bIsBaked; /* 144 1 */
	virtual void ~CSubGraphAnimNode(CSubGraphAnimNode* );
	/* <129d55d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:403 */
	virtual class IAnimationSubGraph * GetSubGraph(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode11GetSubGraphEv */
	virtual class IAnimationSubGraph * CreateNewSubGraph(class CSubGraphAnimNode *, const char  *); /* linkage=_ZN17CSubGraphAnimNode17CreateNewSubGraphEPKc */
	/* <129c35d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:330 */
	virtual class AnimNodeID GetOutputNodeID(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode15GetOutputNodeIDEv */
	/* <129c301> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:324 */
	virtual class AnimNodeID GetInputNodeID(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode14GetInputNodeIDEv */
	/* <129c291> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:318 */
	virtual void SetOutputNodeID(class CSubGraphAnimNode *, class AnimNodeID); /* linkage=_ZN17CSubGraphAnimNode15SetOutputNodeIDE10AnimNodeID */
	/* <129c221> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:312 */
	virtual void SetInputNodeID(class CSubGraphAnimNode *, class AnimNodeID); /* linkage=_ZN17CSubGraphAnimNode14SetInputNodeIDE10AnimNodeID */
	/* <129c1c6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:306 */
	virtual class IAnimNodeManager * GetNodeManager(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode14GetNodeManagerEv */
	virtual void SetInputConnection(class CSubGraphAnimNode *, int, class CNodeConnection); /* linkage=_ZN17CSubGraphAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CSubGraphAnimNode *, int, class AnimNodeID); /* linkage=_ZN17CSubGraphAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CSubGraphAnimNode  *, int); /* linkage=_ZNK17CSubGraphAnimNode10GetChildIDEi */
	/* <129f7ae> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:277 */
	virtual void SetContext(class CSubGraphAnimNode *, const CAnimGraphContextPtr  &); /* linkage=_ZN17CSubGraphAnimNode10SetContextERK9CSmartPtrI17CAnimGraphContext17CRefCountAccessorE */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSubGraphAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK17CSubGraphAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual bool ShowVisualizer(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode14ShowVisualizerEv */
	virtual bool HasOutputs(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode10HasOutputsEv */
	virtual int GetOutputCount(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode14GetOutputCountEv */
	virtual class AnimNodeLocation_t GetOutputNodeLocation(const class CSubGraphAnimNode  *, class AnimOutputID, const AnimNodePath  &); /* linkage=_ZNK17CSubGraphAnimNode21GetOutputNodeLocationE12AnimOutputIDRK10CUtlVectorI10AnimNodeID10CUtlMemoryIS2_iEE */
	virtual class AnimNodeID GetOutputNodeID(const class CSubGraphAnimNode  *, class AnimOutputID); /* linkage=_ZNK17CSubGraphAnimNode15GetOutputNodeIDE12AnimOutputID */
	virtual int GetOutputIndex(const class CSubGraphAnimNode  *, class AnimOutputID); /* linkage=_ZNK17CSubGraphAnimNode14GetOutputIndexE12AnimOutputID */
	virtual class AnimOutputID GetChildOutputID(const class CSubGraphAnimNode  *, int); /* linkage=_ZNK17CSubGraphAnimNode16GetChildOutputIDEi */
	virtual class AnimOutputID GetOutputID(const class CSubGraphAnimNode  *, int); /* linkage=_ZNK17CSubGraphAnimNode11GetOutputIDEi */
	virtual const class CUtlString  & GetParentName(const class CSubGraphAnimNode  *, int); /* linkage=_ZNK17CSubGraphAnimNode13GetParentNameEi */
	virtual int GetParentCount(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode14GetParentCountEv */
	virtual const class CUtlString  & GetChildName(const class CSubGraphAnimNode  *, int); /* linkage=_ZNK17CSubGraphAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSubGraphAnimNode  *, int); /* linkage=_ZNK17CSubGraphAnimNode8GetChildEi */
	virtual int GetChildCount(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode13GetChildCountEv */
	virtual class CUtlString GetUIName(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode9GetUINameEv */
	virtual const void  * CastToBase(const class CSubGraphAnimNode  *, class ClassID); /* linkage=_ZNK17CSubGraphAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSubGraphAnimNode *, class ClassID); /* linkage=_ZN17CSubGraphAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129c19c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode11GetTypeInfoEv */
	void TransferPostLoadFn(class CSubGraphAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CSubGraphAnimNode18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void TransferPostSaveFn(const class CSubGraphAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CSubGraphAnimNode18TransferPostSaveFnEP23CKV3TransferSaveContext */
	enum PropertyChangeDirtyResult_t OnSubGraphFilenameChanged(void *); /* linkage=_ZN17CSubGraphAnimNode25OnSubGraphFilenameChangedEPv */
	void CSubGraphAnimNode(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNodeC4Ev */
	void KV3TransferLoad_CSubGraphAnimNode(class CSubGraphAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CSubGraphAnimNode33KV3TransferLoad_CSubGraphAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSubGraphAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CSubGraphAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSubGraphAnimNode(const class CSubGraphAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CSubGraphAnimNode33KV3TransferSave_CSubGraphAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSubGraphAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CSubGraphAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ed92d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/subgraphanimnode_h_schema.gen_cpp:139 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CSubGraphAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CSubGraphAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSubGraphAnimNode(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNodeD4Ev */
	class CSubGraphAnimNode & operator=(class CSubGraphAnimNode *, const class CSubGraphAnimNode  &); /* linkage=_ZN17CSubGraphAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea7d7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/subgraphanimnode.h:18 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSubGraphAnimNode  *); /* linkage=_ZNK17CSubGraphAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CSubGraphAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CSubGraphAnimNode17GetPrimaryBindingEv */
	void Bake(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode4BakeEv */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17CSubGraphAnimNode8MyTypeIDEv */
	bool CheckForCircularDependencies(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode28CheckForCircularDependenciesEv */
	void CSubGraphAnimNode(class CSubGraphAnimNode *, class CSubGraphAnimNode &); /* linkage=_ZN17CSubGraphAnimNodeC4EOS_ */
	void CSubGraphAnimNode(class CSubGraphAnimNode *, const class CSubGraphAnimNode  &); /* linkage=_ZN17CSubGraphAnimNodeC4ERKS_ */
	/* <129f45b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17CSubGraphAnimNode10MyTypeInfoEv */
	class CSubGraphAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN17CSubGraphAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CSubGraphAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSubGraphAnimNode  *, char &); /* linkage=_ZN17CSubGraphAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSubGraphAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CSubGraphAnimNode32KV3TransferAllocateClassInstanceEPKc */
	/* <129fbfb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:414 */
	void OnSubGraphFilenameChanged(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode25OnSubGraphFilenameChangedEv */
	void LoadSubGraph(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode12LoadSubGraphEv */
	void ReleaseSubGraph(class CSubGraphAnimNode *); /* linkage=_ZN17CSubGraphAnimNode15ReleaseSubGraphEv */
	bool CheckForCircularDependencies(class CSubGraphAnimNode *, class IAnimNodeManager *); /* linkage=_ZN17CSubGraphAnimNode28CheckForCircularDependenciesEP16IAnimNodeManager */
};

// <012866E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 11033
} /* size: 0, variables: 2 */

// <00F8A87F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 38841
} /* size: 0, variables: 2 */

// <00E7DAA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 11520
} /* size: 0, variables: 2 */

// <012866DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01286671> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.h:18
// function call: 1
void CSubGraphAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 18
} /* size: 0, inline expansions: 1 (0 bytes) */


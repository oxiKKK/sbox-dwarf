
//
// animgraph/groupanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//	class: 1
//	struct: 1
//

// <01156BD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:10
void CConnectionProxyItem::CConnectionProxyItem()
{
} /* size: 0 */

// <01156BBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:10
inline void CConnectionProxyItem::CConnectionProxyItem()
{
} /* size: 0 */

// <0114F516> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:10
void CConnectionProxyItem::~CConnectionProxyItem()
{
} /* size: 0 */

// <0114F4FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:10
inline void CConnectionProxyItem::~CConnectionProxyItem()
{
} /* size: 0 */

// <010F3AE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:10
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 24
struct CConnectionProxyItem {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	CConnectionProxyItem* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	void Schema_CompileTimeVerificationFunction(CConnectionProxyItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:12 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConnectionProxyItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:13 */
	CConnectionProxyItem* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:13 */
	void KV3TransferSave(const CConnectionProxyItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:13 */
	void KV3TransferLoad(CConnectionProxyItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:13 */
	void KV3TransferSave_CConnectionProxyItem(const CConnectionProxyItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:13 */
	void KV3TransferLoad_CConnectionProxyItem(CConnectionProxyItem* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	AnimOutputID m_outputID; /* 8 4 */
	CNodeConnection m_inputConnection; /* 12 8 */
	void ~CConnectionProxyItem(CConnectionProxyItem* );
	void CConnectionProxyItem(CConnectionProxyItem* );
};

// <0113AF37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:24
// variables: 2
// function calls: 36
void CGroupAnimNode::~CGroupAnimNode()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 24
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 24
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Count(); // 897
			CUtlHashtableEntry<AnimOutputID, CNodeConnection>::IsValid(); // 899
			CUtlHashtableEntry<AnimOutputID, CNodeConnection>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<AnimOutputID, CNodeConnection> >(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 188
	ValidateAlignment<CUtlHashtableEntry<AnimOutputID, CNodeConnection> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 24
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 24
} /* size: 334, inline expansions: 31 (735 bytes) */

// <0113A667> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:24
// variables: 2
// function calls: 41
void CGroupAnimNode::~CGroupAnimNode()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 24
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 24
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Count(); // 897
			CUtlHashtableEntry<AnimOutputID, CNodeConnection>::IsValid(); // 899
			CUtlHashtableEntry<AnimOutputID, CNodeConnection>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<AnimOutputID, CNodeConnection> >(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 188
	ValidateAlignment<CUtlHashtableEntry<AnimOutputID, CNodeConnection> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 24
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
	CAnimNodeBase::~CAnimNodeBase(); // 24
	CGroupAnimNode::~CGroupAnimNode(); // 24
} /* size: 332, inline expansions: 36 (972 bytes) */

// <0113A64B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:24
inline void CGroupAnimNode::~CGroupAnimNode()
{
} /* size: 0 */

// <010F3CD8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:24
// member functions: 97
// member variables: 7
// static member variables: 2
// vtable entries: 29
// class size: 128
class CGroupAnimNode : public CAnimNodeBase, public IGroupAnimNode {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	/* class IGroupAnimNode <ancestor>; */ /* 64 8 */
	void CGroupAnimNode(CGroupAnimNode* , CGroupAnimNode& );
	void CGroupAnimNode(CGroupAnimNode* , const CGroupAnimNode& );
private:
	static class CClassInfoT<CGroupAnimNode> m_classInfoCGroupAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:26 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14 */
	virtual const CClassInfo& GetTypeInfo(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14 */
	virtual void* CastToBase(CGroupAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14 */
	virtual const void* CastToBase(const CGroupAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	CGroupAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	void Schema_CompileTimeVerificationFunction(CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:28 */
	void KV3TransferPolymorphicClassname(const CGroupAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:28 */
	CGroupAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:28 */
	virtual void KV3TransferSave(const CGroupAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:28 */
	virtual void KV3TransferLoad(CGroupAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:28 */
	void KV3TransferSave_CGroupAnimNode(const CGroupAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:28 */
	void KV3TransferLoad_CGroupAnimNode(CGroupAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:23 */
	void CGroupAnimNode(CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:31 */
	virtual int GetChildCount(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:44 */
	virtual IAnimNode* GetChild(const CGroupAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:50 */
	virtual AnimNodeID GetChildID(const CGroupAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:90 */
	virtual void SetChildID(CGroupAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:96 */
	virtual const CUtlString& GetChildName(const CGroupAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:115 */
	virtual int GetParentCount(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:128 */
	virtual const CUtlString& GetParentName(const CGroupAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:147 */
	virtual void SetInputConnection(CGroupAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:70 */
	virtual AnimOutputID GetChildOutputID(const CGroupAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:158 */
	virtual AnimOutputID GetOutputID(const CGroupAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:202 */
	virtual int GetOutputIndex(const CGroupAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:171 */
	virtual AnimNodeID GetOutputNodeID(const CGroupAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:184 */
	virtual AnimNodeLocation_t GetOutputNodeLocation(const CGroupAnimNode* , AnimOutputID, const AnimNodePath& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:215 */
	virtual int GetOutputCount(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:228 */
	virtual bool HasOutputs(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:257 */
	virtual void SetContext(CGroupAnimNode* , const CAnimGraphContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:234 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CGroupAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:288 */
	virtual IAnimNodeManager* GetNodeManager(CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:241 */
	void TransferPostSaveFn(const CGroupAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:249 */
	void TransferPostLoadFn(CGroupAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:294 */
	virtual void SetInputNodeID(CGroupAnimNode* , AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:300 */
	virtual void SetOutputNodeID(CGroupAnimNode* , AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:306 */
	virtual AnimNodeID GetInputNodeID(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:312 */
	virtual AnimNodeID GetOutputNodeID(const CGroupAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:318 */
	virtual void AddProxyItems(CGroupAnimNode* );
protected:
	AnimNodeID m_inputNodeID; /* 72 4 */
	AnimNodeID m_outputNodeID; /* 76 4 */
	CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, undefined_t, CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int> > m_inputConnectionMap; /* 80 32 */
	CAnimNodeManagerPtr m_nodeManager; /* 112 8 */
	CAnimGraphContextPtr m_context; /* 120 8 */
	virtual void ~CGroupAnimNode(CGroupAnimNode* );
	virtual void AddProxyItems(class CGroupAnimNode *); /* linkage=_ZN14CGroupAnimNode13AddProxyItemsEv */
	/* <1192e34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:312 */
	virtual class AnimNodeID GetOutputNodeID(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode15GetOutputNodeIDEv */
	/* <1192dd9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:306 */
	virtual class AnimNodeID GetInputNodeID(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode14GetInputNodeIDEv */
	/* <1192d6a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:300 */
	virtual void SetOutputNodeID(class CGroupAnimNode *, class AnimNodeID); /* linkage=_ZN14CGroupAnimNode15SetOutputNodeIDE10AnimNodeID */
	/* <1192cfb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:294 */
	virtual void SetInputNodeID(class CGroupAnimNode *, class AnimNodeID); /* linkage=_ZN14CGroupAnimNode14SetInputNodeIDE10AnimNodeID */
	/* <1192ca1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:288 */
	virtual class IAnimNodeManager * GetNodeManager(class CGroupAnimNode *); /* linkage=_ZN14CGroupAnimNode14GetNodeManagerEv */
	virtual void SetInputConnection(class CGroupAnimNode *, int, class CNodeConnection); /* linkage=_ZN14CGroupAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CGroupAnimNode *, int, class AnimNodeID); /* linkage=_ZN14CGroupAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CGroupAnimNode  *, int); /* linkage=_ZNK14CGroupAnimNode10GetChildIDEi */
	virtual void SetContext(class CGroupAnimNode *, const CAnimGraphContextPtr  &); /* linkage=_ZN14CGroupAnimNode10SetContextERK9CSmartPtrI17CAnimGraphContext17CRefCountAccessorE */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CGroupAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK14CGroupAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual bool HasOutputs(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode10HasOutputsEv */
	virtual int GetOutputCount(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode14GetOutputCountEv */
	virtual class AnimNodeLocation_t GetOutputNodeLocation(const class CGroupAnimNode  *, class AnimOutputID, const AnimNodePath  &); /* linkage=_ZNK14CGroupAnimNode21GetOutputNodeLocationE12AnimOutputIDRK10CUtlVectorI10AnimNodeID10CUtlMemoryIS2_iEE */
	virtual class AnimNodeID GetOutputNodeID(const class CGroupAnimNode  *, class AnimOutputID); /* linkage=_ZNK14CGroupAnimNode15GetOutputNodeIDE12AnimOutputID */
	virtual int GetOutputIndex(const class CGroupAnimNode  *, class AnimOutputID); /* linkage=_ZNK14CGroupAnimNode14GetOutputIndexE12AnimOutputID */
	virtual class AnimOutputID GetChildOutputID(const class CGroupAnimNode  *, int); /* linkage=_ZNK14CGroupAnimNode16GetChildOutputIDEi */
	virtual class AnimOutputID GetOutputID(const class CGroupAnimNode  *, int); /* linkage=_ZNK14CGroupAnimNode11GetOutputIDEi */
	virtual const class CUtlString  & GetParentName(const class CGroupAnimNode  *, int); /* linkage=_ZNK14CGroupAnimNode13GetParentNameEi */
	virtual int GetParentCount(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode14GetParentCountEv */
	virtual const class CUtlString  & GetChildName(const class CGroupAnimNode  *, int); /* linkage=_ZNK14CGroupAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CGroupAnimNode  *, int); /* linkage=_ZNK14CGroupAnimNode8GetChildEi */
	virtual int GetChildCount(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CGroupAnimNode  *, class ClassID); /* linkage=_ZNK14CGroupAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CGroupAnimNode *, class ClassID); /* linkage=_ZN14CGroupAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1192c78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14 */
	virtual const class CClassInfo  & GetTypeInfo(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode11GetTypeInfoEv */
	void TransferPostLoadFn(class CGroupAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN14CGroupAnimNode18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void TransferPostSaveFn(const class CGroupAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CGroupAnimNode18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void CGroupAnimNode(class CGroupAnimNode *); /* linkage=_ZN14CGroupAnimNodeC4Ev */
	void KV3TransferLoad_CGroupAnimNode(class CGroupAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN14CGroupAnimNode30KV3TransferLoad_CGroupAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CGroupAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN14CGroupAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CGroupAnimNode(const class CGroupAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CGroupAnimNode30KV3TransferSave_CGroupAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CGroupAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CGroupAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518bec> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/groupanimnode_h_schema.gen_cpp:242 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CGroupAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CGroupAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CGroupAnimNode(class CGroupAnimNode *); /* linkage=_ZN14CGroupAnimNodeD4Ev */
	class CGroupAnimNode & operator=(class CGroupAnimNode *, const class CGroupAnimNode  &); /* linkage=_ZN14CGroupAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CGroupAnimNode *); /* linkage=_ZN14CGroupAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5154be> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/groupanimnode.h:27 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CGroupAnimNode  *); /* linkage=_ZNK14CGroupAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CGroupAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CGroupAnimNode17GetPrimaryBindingEv */
	void CGroupAnimNode(class CGroupAnimNode *, class CGroupAnimNode &); /* linkage=_ZN14CGroupAnimNodeC4EOS_ */
	void CGroupAnimNode(class CGroupAnimNode *, const class CGroupAnimNode  &); /* linkage=_ZN14CGroupAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14CGroupAnimNode8MyTypeIDEv */
	/* <11980fb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14CGroupAnimNode10MyTypeInfoEv */
	class CGroupAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN14CGroupAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CGroupAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CGroupAnimNode  *, char &); /* linkage=_ZN14CGroupAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CGroupAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CGroupAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0118EB1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:26
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 26
	const char   __PRETTY_FUNCTION__; // 44282
} /* size: 0, variables: 2 */

// <0118EB18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0118EAAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.h:27
// function call: 1
void CGroupAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 27
} /* size: 0, inline expansions: 1 (0 bytes) */


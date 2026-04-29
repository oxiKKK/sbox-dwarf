
//
// animgraph/groupinputanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	class: 1
//

// <0113BCFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:11
// variable: 1
// function calls: 25
void CGroupInputAnimNode::~CGroupInputAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CConnectionProxyItem, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 10
		CConnectionProxyItem::~CConnectionProxyItem(); // 1526
		Destruct<CConnectionProxyItem>(CConnectionProxyItem* pMemory); // 1723
	}
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::RemoveAll(); // 1798
	CUtlMemory<CConnectionProxyItem, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CConnectionProxyItem, int>::Purge(); // 903
	CUtlMemory<CConnectionProxyItem, int>::Purge(); // 1799
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Purge(); // 560
	ValidateAlignment<CConnectionProxyItem>(void); // 508
	CUtlMemory<CConnectionProxyItem, int>::Purge(); // 510
	CUtlMemory<CConnectionProxyItem, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::~CUtlVector(); // 11
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 11
} /* size: 291, inline expansions: 20 (700 bytes) */

// <0113B6C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:11
// variable: 1
// function calls: 30
void CGroupInputAnimNode::~CGroupInputAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CConnectionProxyItem, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 10
		CConnectionProxyItem::~CConnectionProxyItem(); // 1526
		Destruct<CConnectionProxyItem>(CConnectionProxyItem* pMemory); // 1723
	}
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::RemoveAll(); // 1798
	CUtlMemory<CConnectionProxyItem, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CConnectionProxyItem, int>::Purge(); // 903
	CUtlMemory<CConnectionProxyItem, int>::Purge(); // 1799
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Purge(); // 560
	ValidateAlignment<CConnectionProxyItem>(void); // 508
	CUtlMemory<CConnectionProxyItem, int>::Purge(); // 510
	CUtlMemory<CConnectionProxyItem, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::~CUtlVector(); // 11
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
	CAnimNodeBase::~CAnimNodeBase(); // 11
	CGroupInputAnimNode::~CGroupInputAnimNode(); // 11
} /* size: 283, inline expansions: 25 (873 bytes) */

// <0113B6A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:11
inline void CGroupInputAnimNode::~CGroupInputAnimNode()
{
} /* size: 0 */

// <010F6166> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:11
// member functions: 81
// member variables: 2
// static member variables: 2
// vtable entries: 20
// class size: 96
class CGroupInputAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CGroupInputAnimNode(CGroupInputAnimNode* , CGroupInputAnimNode& );
	void CGroupInputAnimNode(CGroupInputAnimNode* , const CGroupInputAnimNode& );
private:
	static class CClassInfoT<CGroupInputAnimNode> m_classInfoCGroupInputAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9 */
	virtual void* CastToBase(CGroupInputAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9 */
	virtual const void* CastToBase(const CGroupInputAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	CGroupInputAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	void Schema_CompileTimeVerificationFunction(CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:15 */
	void KV3TransferPolymorphicClassname(const CGroupInputAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:15 */
	CGroupInputAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:15 */
	virtual void KV3TransferSave(const CGroupInputAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:15 */
	virtual void KV3TransferLoad(CGroupInputAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:15 */
	void KV3TransferSave_CGroupInputAnimNode(const CGroupInputAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:15 */
	void KV3TransferLoad_CGroupInputAnimNode(CGroupInputAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:17 */
	void CGroupInputAnimNode(CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:24 */
	virtual int GetChildCount(const CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:30 */
	virtual IAnimNode* GetChild(const CGroupInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:36 */
	virtual AnimNodeID GetChildID(const CGroupInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:42 */
	virtual void SetChildID(CGroupInputAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:48 */
	virtual const CUtlString& GetChildName(const CGroupInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:55 */
	virtual int GetParentCount(const CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:61 */
	virtual const CUtlString& GetParentName(const CGroupInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:75 */
	virtual AnimOutputID GetOutputID(const CGroupInputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:81 */
	virtual int GetOutputIndex(const CGroupInputAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:105 */
	virtual AnimNodeID GetOutputNodeID(const CGroupInputAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:132 */
	virtual AnimNodeLocation_t GetOutputNodeLocation(const CGroupInputAnimNode* , AnimOutputID, const AnimNodePath& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:93 */
	virtual int GetOutputCount(const CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:99 */
	virtual bool HasOutputs(const CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:170 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CGroupInputAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:177 */
	void AddProxyItem(CGroupInputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:205 */
	PropertyAttrState_t OnProxyItemsChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:185 */
	void OnProxyItemsChanged(CGroupInputAnimNode* );
	CUtlVector<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> > m_proxyItems; /* 64 32 */
	virtual void ~CGroupInputAnimNode(CGroupInputAnimNode* );
	virtual void SetChildID(class CGroupInputAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CGroupInputAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CGroupInputAnimNode  *, int); /* linkage=_ZNK19CGroupInputAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CGroupInputAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CGroupInputAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual bool HasOutputs(const class CGroupInputAnimNode  *); /* linkage=_ZNK19CGroupInputAnimNode10HasOutputsEv */
	virtual int GetOutputCount(const class CGroupInputAnimNode  *); /* linkage=_ZNK19CGroupInputAnimNode14GetOutputCountEv */
	virtual class AnimNodeLocation_t GetOutputNodeLocation(const class CGroupInputAnimNode  *, class AnimOutputID, const AnimNodePath  &); /* linkage=_ZNK19CGroupInputAnimNode21GetOutputNodeLocationE12AnimOutputIDRK10CUtlVectorI10AnimNodeID10CUtlMemoryIS2_iEE */
	virtual class AnimNodeID GetOutputNodeID(const class CGroupInputAnimNode  *, class AnimOutputID); /* linkage=_ZNK19CGroupInputAnimNode15GetOutputNodeIDE12AnimOutputID */
	/* <1192eb8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:81 */
	virtual int GetOutputIndex(const class CGroupInputAnimNode  *, class AnimOutputID); /* linkage=_ZNK19CGroupInputAnimNode14GetOutputIndexE12AnimOutputID */
	virtual class AnimOutputID GetOutputID(const class CGroupInputAnimNode  *, int); /* linkage=_ZNK19CGroupInputAnimNode11GetOutputIDEi */
	/* <1195c9b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:61 */
	virtual const class CUtlString  & GetParentName(const class CGroupInputAnimNode  *, int); /* linkage=_ZNK19CGroupInputAnimNode13GetParentNameEi */
	virtual int GetParentCount(const class CGroupInputAnimNode  *); /* linkage=_ZNK19CGroupInputAnimNode14GetParentCountEv */
	/* <1194bdb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:48 */
	virtual const class CUtlString  & GetChildName(const class CGroupInputAnimNode  *, int); /* linkage=_ZNK19CGroupInputAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CGroupInputAnimNode  *, int); /* linkage=_ZNK19CGroupInputAnimNode8GetChildEi */
	virtual int GetChildCount(const class CGroupInputAnimNode  *); /* linkage=_ZNK19CGroupInputAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CGroupInputAnimNode  *, class ClassID); /* linkage=_ZNK19CGroupInputAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CGroupInputAnimNode *, class ClassID); /* linkage=_ZN19CGroupInputAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1192e8f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CGroupInputAnimNode  *); /* linkage=_ZNK19CGroupInputAnimNode11GetTypeInfoEv */
	enum PropertyAttrState_t OnProxyItemsChanged(void *); /* linkage=_ZN19CGroupInputAnimNode19OnProxyItemsChangedEPv */
	void CGroupInputAnimNode(class CGroupInputAnimNode *); /* linkage=_ZN19CGroupInputAnimNodeC4Ev */
	void KV3TransferLoad_CGroupInputAnimNode(class CGroupInputAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CGroupInputAnimNode35KV3TransferLoad_CGroupInputAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CGroupInputAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CGroupInputAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CGroupInputAnimNode(const class CGroupInputAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CGroupInputAnimNode35KV3TransferSave_CGroupInputAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CGroupInputAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CGroupInputAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518c39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/groupinputanimnode_h_schema.gen_cpp:122 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CGroupInputAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CGroupInputAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CGroupInputAnimNode(class CGroupInputAnimNode *); /* linkage=_ZN19CGroupInputAnimNodeD4Ev */
	class CGroupInputAnimNode & operator=(class CGroupInputAnimNode *, const class CGroupInputAnimNode  &); /* linkage=_ZN19CGroupInputAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CGroupInputAnimNode *); /* linkage=_ZN19CGroupInputAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <515571> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/groupinputanimnode.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CGroupInputAnimNode  *); /* linkage=_ZNK19CGroupInputAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CGroupInputAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CGroupInputAnimNode17GetPrimaryBindingEv */
	void CGroupInputAnimNode(class CGroupInputAnimNode *, class CGroupInputAnimNode &); /* linkage=_ZN19CGroupInputAnimNodeC4EOS_ */
	void CGroupInputAnimNode(class CGroupInputAnimNode *, const class CGroupInputAnimNode  &); /* linkage=_ZN19CGroupInputAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CGroupInputAnimNode8MyTypeIDEv */
	/* <1198119> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CGroupInputAnimNode10MyTypeInfoEv */
	class CGroupInputAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CGroupInputAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CGroupInputAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CGroupInputAnimNode  *, char &); /* linkage=_ZN19CGroupInputAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CGroupInputAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CGroupInputAnimNode32KV3TransferAllocateClassInstanceEPKc */
	void AddProxyItem(class CGroupInputAnimNode *); /* linkage=_ZN19CGroupInputAnimNode12AddProxyItemEv */
	void OnProxyItemsChanged(class CGroupInputAnimNode *); /* linkage=_ZN19CGroupInputAnimNode19OnProxyItemsChangedEv */
};

// <0128663F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 11087
} /* size: 0, variables: 2 */

// <0118E995> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 44417
} /* size: 0, variables: 2 */

// <0118E98F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0118E924> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.h:14
// function call: 1
void CGroupInputAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


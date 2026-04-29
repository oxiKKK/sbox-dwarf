
//
// animgraph/groupoutputanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	class: 1
//

// <0113C829> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:11
// variable: 1
// function calls: 25
void CGroupOutputAnimNode::~CGroupOutputAnimNode()
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

// <0113C1EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:11
// variable: 1
// function calls: 30
void CGroupOutputAnimNode::~CGroupOutputAnimNode()
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
	CGroupOutputAnimNode::~CGroupOutputAnimNode(); // 11
} /* size: 283, inline expansions: 25 (873 bytes) */

// <0113C1D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:11
inline void CGroupOutputAnimNode::~CGroupOutputAnimNode()
{
} /* size: 0 */

// <010F7F50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:11
// member functions: 85
// member variables: 2
// static member variables: 2
// vtable entries: 22
// class size: 96
class CGroupOutputAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CGroupOutputAnimNode(CGroupOutputAnimNode* , CGroupOutputAnimNode& );
	void CGroupOutputAnimNode(CGroupOutputAnimNode* , const CGroupOutputAnimNode& );
private:
	static class CClassInfoT<CGroupOutputAnimNode> m_classInfoCGroupOutputAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8 */
	virtual void* CastToBase(CGroupOutputAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8 */
	virtual const void* CastToBase(const CGroupOutputAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	CGroupOutputAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	void Schema_CompileTimeVerificationFunction(CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:15 */
	void KV3TransferPolymorphicClassname(const CGroupOutputAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:15 */
	CGroupOutputAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:15 */
	virtual void KV3TransferSave(const CGroupOutputAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:15 */
	virtual void KV3TransferLoad(CGroupOutputAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:15 */
	void KV3TransferSave_CGroupOutputAnimNode(const CGroupOutputAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:15 */
	void KV3TransferLoad_CGroupOutputAnimNode(CGroupOutputAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:16 */
	void CGroupOutputAnimNode(CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:23 */
	virtual int GetChildCount(const CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:29 */
	virtual IAnimNode* GetChild(const CGroupOutputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:35 */
	virtual AnimNodeID GetChildID(const CGroupOutputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:41 */
	virtual void SetChildID(CGroupOutputAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:59 */
	virtual const CUtlString& GetChildName(const CGroupOutputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:73 */
	virtual int GetParentCount(const CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:79 */
	virtual const CUtlString& GetParentName(const CGroupOutputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:53 */
	virtual void SetInputConnection(CGroupOutputAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:47 */
	virtual AnimOutputID GetChildOutputID(const CGroupOutputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:86 */
	virtual AnimOutputID GetOutputID(const CGroupOutputAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:92 */
	virtual int GetOutputIndex(const CGroupOutputAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:104 */
	virtual AnimNodeID GetOutputNodeID(const CGroupOutputAnimNode* , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:126 */
	virtual AnimNodeLocation_t GetOutputNodeLocation(const CGroupOutputAnimNode* , AnimOutputID, const AnimNodePath& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:157 */
	virtual int GetOutputCount(const CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:163 */
	virtual bool HasOutputs(const CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:169 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CGroupOutputAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:176 */
	void AddProxyItem(CGroupOutputAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:204 */
	PropertyAttrState_t OnProxyItemsChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:184 */
	void OnProxyItemsChanged(CGroupOutputAnimNode* );
	CUtlVector<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> > m_proxyItems; /* 64 32 */
	virtual void ~CGroupOutputAnimNode(CGroupOutputAnimNode* );
	virtual void SetInputConnection(class CGroupOutputAnimNode *, int, class CNodeConnection); /* linkage=_ZN20CGroupOutputAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CGroupOutputAnimNode *, int, class AnimNodeID); /* linkage=_ZN20CGroupOutputAnimNode10SetChildIDEi10AnimNodeID */
	/* <11930a1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:35 */
	virtual class AnimNodeID GetChildID(const class CGroupOutputAnimNode  *, int); /* linkage=_ZNK20CGroupOutputAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CGroupOutputAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK20CGroupOutputAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual bool HasOutputs(const class CGroupOutputAnimNode  *); /* linkage=_ZNK20CGroupOutputAnimNode10HasOutputsEv */
	virtual int GetOutputCount(const class CGroupOutputAnimNode  *); /* linkage=_ZNK20CGroupOutputAnimNode14GetOutputCountEv */
	virtual class AnimNodeLocation_t GetOutputNodeLocation(const class CGroupOutputAnimNode  *, class AnimOutputID, const AnimNodePath  &); /* linkage=_ZNK20CGroupOutputAnimNode21GetOutputNodeLocationE12AnimOutputIDRK10CUtlVectorI10AnimNodeID10CUtlMemoryIS2_iEE */
	virtual class AnimNodeID GetOutputNodeID(const class CGroupOutputAnimNode  *, class AnimOutputID); /* linkage=_ZNK20CGroupOutputAnimNode15GetOutputNodeIDE12AnimOutputID */
	virtual int GetOutputIndex(const class CGroupOutputAnimNode  *, class AnimOutputID); /* linkage=_ZNK20CGroupOutputAnimNode14GetOutputIndexE12AnimOutputID */
	/* <119316f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:47 */
	virtual class AnimOutputID GetChildOutputID(const class CGroupOutputAnimNode  *, int); /* linkage=_ZNK20CGroupOutputAnimNode16GetChildOutputIDEi */
	virtual class AnimOutputID GetOutputID(const class CGroupOutputAnimNode  *, int); /* linkage=_ZNK20CGroupOutputAnimNode11GetOutputIDEi */
	/* <1194cdd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:79 */
	virtual const class CUtlString  & GetParentName(const class CGroupOutputAnimNode  *, int); /* linkage=_ZNK20CGroupOutputAnimNode13GetParentNameEi */
	virtual int GetParentCount(const class CGroupOutputAnimNode  *); /* linkage=_ZNK20CGroupOutputAnimNode14GetParentCountEv */
	/* <1195e9d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:59 */
	virtual const class CUtlString  & GetChildName(const class CGroupOutputAnimNode  *, int); /* linkage=_ZNK20CGroupOutputAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CGroupOutputAnimNode  *, int); /* linkage=_ZNK20CGroupOutputAnimNode8GetChildEi */
	virtual int GetChildCount(const class CGroupOutputAnimNode  *); /* linkage=_ZNK20CGroupOutputAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CGroupOutputAnimNode  *, class ClassID); /* linkage=_ZNK20CGroupOutputAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CGroupOutputAnimNode *, class ClassID); /* linkage=_ZN20CGroupOutputAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1193078> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CGroupOutputAnimNode  *); /* linkage=_ZNK20CGroupOutputAnimNode11GetTypeInfoEv */
	enum PropertyAttrState_t OnProxyItemsChanged(void *); /* linkage=_ZN20CGroupOutputAnimNode19OnProxyItemsChangedEPv */
	void CGroupOutputAnimNode(class CGroupOutputAnimNode *); /* linkage=_ZN20CGroupOutputAnimNodeC4Ev */
	void KV3TransferLoad_CGroupOutputAnimNode(class CGroupOutputAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN20CGroupOutputAnimNode36KV3TransferLoad_CGroupOutputAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CGroupOutputAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN20CGroupOutputAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CGroupOutputAnimNode(const class CGroupOutputAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CGroupOutputAnimNode36KV3TransferSave_CGroupOutputAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CGroupOutputAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CGroupOutputAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518c86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/groupoutputanimnode_h_schema.gen_cpp:122 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CGroupOutputAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CGroupOutputAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CGroupOutputAnimNode(class CGroupOutputAnimNode *); /* linkage=_ZN20CGroupOutputAnimNodeD4Ev */
	class CGroupOutputAnimNode & operator=(class CGroupOutputAnimNode *, const class CGroupOutputAnimNode  &); /* linkage=_ZN20CGroupOutputAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CGroupOutputAnimNode *); /* linkage=_ZN20CGroupOutputAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <515624> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/groupoutputanimnode.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CGroupOutputAnimNode  *); /* linkage=_ZNK20CGroupOutputAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CGroupOutputAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CGroupOutputAnimNode17GetPrimaryBindingEv */
	void CGroupOutputAnimNode(class CGroupOutputAnimNode *, class CGroupOutputAnimNode &); /* linkage=_ZN20CGroupOutputAnimNodeC4EOS_ */
	void CGroupOutputAnimNode(class CGroupOutputAnimNode *, const class CGroupOutputAnimNode  &); /* linkage=_ZN20CGroupOutputAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20CGroupOutputAnimNode8MyTypeIDEv */
	/* <1198137> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20CGroupOutputAnimNode10MyTypeInfoEv */
	class CGroupOutputAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN20CGroupOutputAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CGroupOutputAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CGroupOutputAnimNode  *, char &); /* linkage=_ZN20CGroupOutputAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CGroupOutputAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CGroupOutputAnimNode32KV3TransferAllocateClassInstanceEPKc */
	void AddProxyItem(class CGroupOutputAnimNode *); /* linkage=_ZN20CGroupOutputAnimNode12AddProxyItemEv */
	void OnProxyItemsChanged(class CGroupOutputAnimNode *); /* linkage=_ZN20CGroupOutputAnimNode19OnProxyItemsChangedEv */
};

// <0128660D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 11114
} /* size: 0, variables: 2 */

// <0118E8F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 44444
} /* size: 0, variables: 2 */

// <0118E8ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0118E882> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.h:14
// function call: 1
void CGroupOutputAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


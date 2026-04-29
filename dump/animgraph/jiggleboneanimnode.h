
//
// animgraph/jiggleboneanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	classes: 2
//

// <0114F2A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:14
void CJiggleBoneItem::~CJiggleBoneItem()
{
} /* size: 0 */

// <0114F286> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:14
inline void CJiggleBoneItem::~CJiggleBoneItem()
{
} /* size: 0 */

// <010FA185> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:14
// member functions: 33
// member variables: 7
// static member variable: 1
// class size: 48
class CJiggleBoneItem {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	CJiggleBoneItem* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CJiggleBoneItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:16 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CJiggleBoneItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:17 */
	CJiggleBoneItem* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferSave(const CJiggleBoneItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferLoad(CJiggleBoneItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferSave_CJiggleBoneItem(const CJiggleBoneItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferLoad_CJiggleBoneItem(CJiggleBoneItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:23 */
	void CJiggleBoneItem(CJiggleBoneItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:25 */
	void GetItemName(void* , CUtlString* );
	CUtlString m_boneName; /* 0 8 */
	float m_flSpringStrength; /* 8 4 */
	float m_flSimRateFPS; /* 12 4 */
	float m_flDamping; /* 16 4 */
	JiggleBoneSimSpace m_eSimSpace; /* 20 4 */
	Vector m_vBoundsMaxLS; /* 24 12 */
	Vector m_vBoundsMinLS; /* 36 12 */
	void ~CJiggleBoneItem(CJiggleBoneItem* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CJiggleBoneItem17GetPrimaryBindingEv */
	class CJiggleBoneItem * Schema_MarkHelperFn(void); /* linkage=_ZN15CJiggleBoneItem19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CJiggleBoneItem15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5ec081> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/jiggleboneanimnode_h_schema.gen_cpp:175 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CJiggleBoneItem32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CJiggleBoneItem *); /* linkage=_ZN15CJiggleBoneItem38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CJiggleBoneItem20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CJiggleBoneItem22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CJiggleBoneItem  *); /* linkage=_ZNK15CJiggleBoneItem21Schema_DynamicBindingEv */
	class CJiggleBoneItem * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CJiggleBoneItem32KV3TransferAllocateClassInstanceEPKc */
	/* <5ec0cf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/jiggleboneanimnode_h_schema.gen_cpp:183 */
	void KV3TransferSave(const class CJiggleBoneItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CJiggleBoneItem15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5edabe> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/jiggleboneanimnode_h_schema.gen_cpp:199 */
	void KV3TransferLoad(class CJiggleBoneItem *, class CKV3TransferLoadContext *); /* linkage=_ZN15CJiggleBoneItem15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CJiggleBoneItem(const class CJiggleBoneItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CJiggleBoneItem31KV3TransferSave_CJiggleBoneItemEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CJiggleBoneItem(class CJiggleBoneItem *, class CKV3TransferLoadContext *); /* linkage=_ZN15CJiggleBoneItem31KV3TransferLoad_CJiggleBoneItemEP23CKV3TransferLoadContext */
	void CJiggleBoneItem(class CJiggleBoneItem *); /* linkage=_ZN15CJiggleBoneItemC4Ev */
	void GetItemName(void *, class CUtlString *); /* linkage=_ZN15CJiggleBoneItem11GetItemNameEPvP10CUtlString */
	class CJiggleBoneItem & operator=(class CJiggleBoneItem *, const class CJiggleBoneItem  &); /* linkage=_ZN15CJiggleBoneItemaSERKS_ */
	void ~CJiggleBoneItem(class CJiggleBoneItem *); /* linkage=_ZN15CJiggleBoneItemD4Ev */
};

// <0113E691> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:40
// variable: 1
// function calls: 25
void CJiggleBoneAnimNode::~CJiggleBoneAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CJiggleBoneItem, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 14
		CJiggleBoneItem::~CJiggleBoneItem(); // 1526
		Destruct<CJiggleBoneItem>(CJiggleBoneItem* pMemory); // 1723
	}
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::RemoveAll(); // 1798
	CUtlMemory<CJiggleBoneItem, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CJiggleBoneItem, int>::Purge(); // 903
	CUtlMemory<CJiggleBoneItem, int>::Purge(); // 1799
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::Purge(); // 560
	ValidateAlignment<CJiggleBoneItem>(void); // 508
	CUtlMemory<CJiggleBoneItem, int>::Purge(); // 510
	CUtlMemory<CJiggleBoneItem, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::~CUtlVector(); // 40
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 40
} /* size: 291, inline expansions: 20 (700 bytes) */

// <0113E057> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:40
// variable: 1
// function calls: 30
void CJiggleBoneAnimNode::~CJiggleBoneAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CJiggleBoneItem, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 14
		CJiggleBoneItem::~CJiggleBoneItem(); // 1526
		Destruct<CJiggleBoneItem>(CJiggleBoneItem* pMemory); // 1723
	}
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::RemoveAll(); // 1798
	CUtlMemory<CJiggleBoneItem, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CJiggleBoneItem, int>::Purge(); // 903
	CUtlMemory<CJiggleBoneItem, int>::Purge(); // 1799
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::Purge(); // 560
	ValidateAlignment<CJiggleBoneItem>(void); // 508
	CUtlMemory<CJiggleBoneItem, int>::Purge(); // 510
	CUtlMemory<CJiggleBoneItem, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::~CUtlVector(); // 40
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
	CAnimNodeBase::~CAnimNodeBase(); // 40
	CJiggleBoneAnimNode::~CJiggleBoneAnimNode(); // 40
} /* size: 283, inline expansions: 25 (873 bytes) */

// <0113E03B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:40
inline void CJiggleBoneAnimNode::~CJiggleBoneAnimNode()
{
} /* size: 0 */

// <010FA3D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:40
// member functions: 63
// member variables: 3
// static member variables: 2
// vtable entries: 14
// class size: 104
class CJiggleBoneAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CJiggleBoneAnimNode(CJiggleBoneAnimNode* , CJiggleBoneAnimNode& );
	void CJiggleBoneAnimNode(CJiggleBoneAnimNode* , const CJiggleBoneAnimNode& );
private:
	static class CClassInfoT<CJiggleBoneAnimNode> m_classInfoCJiggleBoneAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:42 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CJiggleBoneAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8 */
	virtual void* CastToBase(CJiggleBoneAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8 */
	virtual const void* CastToBase(const CJiggleBoneAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	CJiggleBoneAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	void Schema_CompileTimeVerificationFunction(CJiggleBoneAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CJiggleBoneAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:44 */
	void KV3TransferPolymorphicClassname(const CJiggleBoneAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:44 */
	CJiggleBoneAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:44 */
	virtual void KV3TransferSave(const CJiggleBoneAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:44 */
	virtual void KV3TransferLoad(CJiggleBoneAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:44 */
	void KV3TransferSave_CJiggleBoneAnimNode(const CJiggleBoneAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:44 */
	void KV3TransferLoad_CJiggleBoneAnimNode(CJiggleBoneAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:27 */
	void CJiggleBoneAnimNode(CJiggleBoneAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:32 */
	virtual int GetChildCount(const CJiggleBoneAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:38 */
	virtual IAnimNode* GetChild(const CJiggleBoneAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:44 */
	virtual AnimNodeID GetChildID(const CJiggleBoneAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:50 */
	virtual void SetChildID(CJiggleBoneAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:56 */
	virtual const CUtlString& GetChildName(const CJiggleBoneAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:69 */
	virtual void SetInputConnection(CJiggleBoneAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:63 */
	virtual AnimOutputID GetChildOutputID(const CJiggleBoneAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:75 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CJiggleBoneAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	CUtlVector<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> > m_items; /* 72 32 */
	virtual void ~CJiggleBoneAnimNode(CJiggleBoneAnimNode* );
	virtual void SetInputConnection(class CJiggleBoneAnimNode *, int, class CNodeConnection); /* linkage=_ZN19CJiggleBoneAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CJiggleBoneAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CJiggleBoneAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CJiggleBoneAnimNode  *, int); /* linkage=_ZNK19CJiggleBoneAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CJiggleBoneAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CJiggleBoneAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CJiggleBoneAnimNode  *, int); /* linkage=_ZNK19CJiggleBoneAnimNode16GetChildOutputIDEi */
	/* <119553f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:56 */
	virtual const class CUtlString  & GetChildName(const class CJiggleBoneAnimNode  *, int); /* linkage=_ZNK19CJiggleBoneAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CJiggleBoneAnimNode  *, int); /* linkage=_ZNK19CJiggleBoneAnimNode8GetChildEi */
	virtual int GetChildCount(const class CJiggleBoneAnimNode  *); /* linkage=_ZNK19CJiggleBoneAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CJiggleBoneAnimNode  *, class ClassID); /* linkage=_ZNK19CJiggleBoneAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CJiggleBoneAnimNode *, class ClassID); /* linkage=_ZN19CJiggleBoneAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <11932b8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CJiggleBoneAnimNode  *); /* linkage=_ZNK19CJiggleBoneAnimNode11GetTypeInfoEv */
	void CJiggleBoneAnimNode(class CJiggleBoneAnimNode *); /* linkage=_ZN19CJiggleBoneAnimNodeC4Ev */
	void KV3TransferLoad_CJiggleBoneAnimNode(class CJiggleBoneAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CJiggleBoneAnimNode35KV3TransferLoad_CJiggleBoneAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CJiggleBoneAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CJiggleBoneAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CJiggleBoneAnimNode(const class CJiggleBoneAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CJiggleBoneAnimNode35KV3TransferSave_CJiggleBoneAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CJiggleBoneAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CJiggleBoneAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec129> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/jiggleboneanimnode_h_schema.gen_cpp:314 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CJiggleBoneAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CJiggleBoneAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CJiggleBoneAnimNode(class CJiggleBoneAnimNode *); /* linkage=_ZN19CJiggleBoneAnimNodeD4Ev */
	class CJiggleBoneAnimNode & operator=(class CJiggleBoneAnimNode *, const class CJiggleBoneAnimNode  &); /* linkage=_ZN19CJiggleBoneAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CJiggleBoneAnimNode *); /* linkage=_ZN19CJiggleBoneAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5e9bef> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:43 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CJiggleBoneAnimNode  *); /* linkage=_ZNK19CJiggleBoneAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CJiggleBoneAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CJiggleBoneAnimNode17GetPrimaryBindingEv */
	void CJiggleBoneAnimNode(class CJiggleBoneAnimNode *, class CJiggleBoneAnimNode &); /* linkage=_ZN19CJiggleBoneAnimNodeC4EOS_ */
	void CJiggleBoneAnimNode(class CJiggleBoneAnimNode *, const class CJiggleBoneAnimNode  &); /* linkage=_ZN19CJiggleBoneAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CJiggleBoneAnimNode8MyTypeIDEv */
	/* <11981af> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CJiggleBoneAnimNode10MyTypeInfoEv */
	class CJiggleBoneAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CJiggleBoneAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CJiggleBoneAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CJiggleBoneAnimNode  *, char &); /* linkage=_ZN19CJiggleBoneAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CJiggleBoneAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CJiggleBoneAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <011813F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:42
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 42
	const char   __PRETTY_FUNCTION__; // 44417
} /* size: 0, variables: 2 */

// <011813F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01181387> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.h:43
// function call: 1
void CJiggleBoneAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 43
} /* size: 0, inline expansions: 1 (0 bytes) */


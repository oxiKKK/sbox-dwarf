
//
// animgraph/blendanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//	class: 1
//	struct: 1
//

// <0107A91D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:15
void CBlendNodeChild::~CBlendNodeChild()
{
} /* size: 0 */

// <0107A901> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:15
inline void CBlendNodeChild::~CBlendNodeChild()
{
} /* size: 0 */

// <0105D4E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:15
void CBlendNodeChild::CBlendNodeChild(const CBlendNodeChild &)
{
} /* size: 0 */

// <0105D4C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:15
inline void CBlendNodeChild::CBlendNodeChild(const CBlendNodeChild &)
{
} /* size: 0 */

// <0100C8DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:15
// member functions: 17
// member variables: 3
// static member variable: 1
// struct size: 24
struct CBlendNodeChild {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	CBlendNodeChild* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CBlendNodeChild* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:17 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CBlendNodeChild* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:18 */
	CBlendNodeChild* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:18 */
	void KV3TransferSave(const CBlendNodeChild* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:18 */
	void KV3TransferLoad(CBlendNodeChild* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:18 */
	void KV3TransferSave_CBlendNodeChild(const CBlendNodeChild* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:18 */
	void KV3TransferLoad_CBlendNodeChild(CBlendNodeChild* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:23 */
	void CBlendNodeChild(CBlendNodeChild* );
	CNodeConnection m_inputConnection; /* 0 8 */
	CUtlString m_name; /* 8 8 */
	float m_blendValue; /* 16 4 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:29 */
	void GetItemName(void* , CUtlString* );
	void CBlendNodeChild(CBlendNodeChild* , const CBlendNodeChild& );
	void ~CBlendNodeChild(CBlendNodeChild* );
};

// <0104CBAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:36
// variable: 1
// function calls: 25
void CBlendAnimNode::~CBlendAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CBlendNodeChild, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 15
		CBlendNodeChild::~CBlendNodeChild(); // 1526
		Destruct<CBlendNodeChild>(CBlendNodeChild* pMemory); // 1723
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::RemoveAll(); // 1798
	CUtlMemory<CBlendNodeChild, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBlendNodeChild, int>::Purge(); // 903
	CUtlMemory<CBlendNodeChild, int>::Purge(); // 1799
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Purge(); // 560
	ValidateAlignment<CBlendNodeChild>(void); // 508
	CUtlMemory<CBlendNodeChild, int>::Purge(); // 510
	CUtlMemory<CBlendNodeChild, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::~CUtlVector(); // 36
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 36
} /* size: 299, inline expansions: 20 (750 bytes) */

// <0104C589> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:36
// variable: 1
// function calls: 30
void CBlendAnimNode::~CBlendAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CBlendNodeChild, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 15
		CBlendNodeChild::~CBlendNodeChild(); // 1526
		Destruct<CBlendNodeChild>(CBlendNodeChild* pMemory); // 1723
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::RemoveAll(); // 1798
	CUtlMemory<CBlendNodeChild, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBlendNodeChild, int>::Purge(); // 903
	CUtlMemory<CBlendNodeChild, int>::Purge(); // 1799
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Purge(); // 560
	ValidateAlignment<CBlendNodeChild>(void); // 508
	CUtlMemory<CBlendNodeChild, int>::Purge(); // 510
	CUtlMemory<CBlendNodeChild, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::~CUtlVector(); // 36
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
	CAnimNodeBase::~CAnimNodeBase(); // 36
	CBlendAnimNode::~CBlendAnimNode(); // 36
} /* size: 288, inline expansions: 25 (873 bytes) */

// <0104C56D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:36
inline void CBlendAnimNode::~CBlendAnimNode()
{
} /* size: 0 */

// <0100CB0F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:36
// member functions: 83
// member variables: 11
// static member variables: 2
// vtable entries: 22
// class size: 152
class CBlendAnimNode : public CAnimNodeBase, public IBlendAnimNode {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	/* class IBlendAnimNode <ancestor>; */ /* 64 8 */
	void CBlendAnimNode(CBlendAnimNode* , CBlendAnimNode& );
	void CBlendAnimNode(CBlendAnimNode* , const CBlendAnimNode& );
private:
	static class CClassInfoT<CBlendAnimNode> m_classInfoCBlendAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:38 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15 */
	virtual const CClassInfo& GetTypeInfo(const CBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15 */
	virtual void* CastToBase(CBlendAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15 */
	virtual const void* CastToBase(const CBlendAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	CBlendAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	void Schema_CompileTimeVerificationFunction(CBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:40 */
	void KV3TransferPolymorphicClassname(const CBlendAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:40 */
	CBlendAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:40 */
	virtual void KV3TransferSave(const CBlendAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:40 */
	virtual void KV3TransferLoad(CBlendAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:40 */
	void KV3TransferSave_CBlendAnimNode(const CBlendAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:40 */
	void KV3TransferLoad_CBlendAnimNode(CBlendAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:56 */
	void CBlendAnimNode(CBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:63 */
	virtual int GetChildCount(const CBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:69 */
	virtual IAnimNode* GetChild(const CBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:77 */
	virtual AnimNodeID GetChildID(const CBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:85 */
	virtual void SetChildID(CBlendAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:93 */
	virtual const CUtlString& GetChildName(const CBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:117 */
	virtual void SetInputConnection(CBlendAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:109 */
	virtual AnimOutputID GetChildOutputID(const CBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:125 */
	virtual int GetParamCount(const CBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:131 */
	virtual AnimParamID GetParamID(const CBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:137 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CBlendAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:215 */
	virtual int AddChild(CBlendAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:224 */
	virtual void RemoveChild(CBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:232 */
	virtual void SetChild(CBlendAnimNode* , int, IAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:247 */
	virtual void SetChildName(CBlendAnimNode* , int, const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:255 */
	virtual float GetChildBlendValue(const CBlendAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:263 */
	virtual void SetChildBlendValue(CBlendAnimNode* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:271 */
	PropertyChangeDirtyResult_t BlendSourceChangedCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:277 */
	PropertyAttrState_t VisibleIfSourceIsParam(void* );
	CUtlVector<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> > m_children; /* 72 32 */
	AnimValueSource m_blendValueSource; /* 104 4 */
	AnimParamID m_param; /* 108 4 */
	BlendKeyType m_blendKeyType; /* 112 4 */
	bool m_bLockBlendOnReset; /* 116 1 */
	bool m_bSyncCycles; /* 117 1 */
	bool m_bLoop; /* 118 1 */
	bool m_bLockWhenWaning; /* 119 1 */
	CAnimInputDamping m_damping; /* 120 0 */
	virtual void ~CBlendAnimNode(CBlendAnimNode* );
	/* <1090b13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:263 */
	virtual void SetChildBlendValue(class CBlendAnimNode *, int, float); /* linkage=_ZN14CBlendAnimNode18SetChildBlendValueEif */
	/* <1090a1c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:255 */
	virtual float GetChildBlendValue(const class CBlendAnimNode  *, int); /* linkage=_ZNK14CBlendAnimNode18GetChildBlendValueEi */
	virtual void SetChildName(class CBlendAnimNode *, int, const class CUtlString  &); /* linkage=_ZN14CBlendAnimNode12SetChildNameEiRK10CUtlString */
	virtual void SetChild(class CBlendAnimNode *, int, class IAnimNode *); /* linkage=_ZN14CBlendAnimNode8SetChildEiP9IAnimNode */
	virtual void RemoveChild(class CBlendAnimNode *, int); /* linkage=_ZN14CBlendAnimNode11RemoveChildEi */
	virtual int AddChild(class CBlendAnimNode *); /* linkage=_ZN14CBlendAnimNode8AddChildEv */
	virtual void SetInputConnection(class CBlendAnimNode *, int, class CNodeConnection); /* linkage=_ZN14CBlendAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CBlendAnimNode *, int, class AnimNodeID); /* linkage=_ZN14CBlendAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CBlendAnimNode  *, int); /* linkage=_ZNK14CBlendAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CBlendAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK14CBlendAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimParamID GetParamID(const class CBlendAnimNode  *, int); /* linkage=_ZNK14CBlendAnimNode10GetParamIDEi */
	virtual int GetParamCount(const class CBlendAnimNode  *); /* linkage=_ZNK14CBlendAnimNode13GetParamCountEv */
	virtual class AnimOutputID GetChildOutputID(const class CBlendAnimNode  *, int); /* linkage=_ZNK14CBlendAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CBlendAnimNode  *, int); /* linkage=_ZNK14CBlendAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CBlendAnimNode  *, int); /* linkage=_ZNK14CBlendAnimNode8GetChildEi */
	virtual int GetChildCount(const class CBlendAnimNode  *); /* linkage=_ZNK14CBlendAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CBlendAnimNode  *, class ClassID); /* linkage=_ZNK14CBlendAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CBlendAnimNode *, class ClassID); /* linkage=_ZN14CBlendAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <109049e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15 */
	virtual const class CClassInfo  & GetTypeInfo(const class CBlendAnimNode  *); /* linkage=_ZNK14CBlendAnimNode11GetTypeInfoEv */
	enum PropertyChangeDirtyResult_t BlendSourceChangedCallback(void *); /* linkage=_ZN14CBlendAnimNode26BlendSourceChangedCallbackEPv */
	enum PropertyAttrState_t VisibleIfSourceIsParam(void *); /* linkage=_ZN14CBlendAnimNode22VisibleIfSourceIsParamEPv */
	void CBlendAnimNode(class CBlendAnimNode *); /* linkage=_ZN14CBlendAnimNodeC4Ev */
	void KV3TransferLoad_CBlendAnimNode(class CBlendAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN14CBlendAnimNode30KV3TransferLoad_CBlendAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CBlendAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN14CBlendAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBlendAnimNode(const class CBlendAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CBlendAnimNode30KV3TransferSave_CBlendAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CBlendAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CBlendAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <517fe7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/blendanimnode_h_schema.gen_cpp:330 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CBlendAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CBlendAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CBlendAnimNode(class CBlendAnimNode *); /* linkage=_ZN14CBlendAnimNodeD4Ev */
	class CBlendAnimNode & operator=(class CBlendAnimNode *, const class CBlendAnimNode  &); /* linkage=_ZN14CBlendAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CBlendAnimNode *); /* linkage=_ZN14CBlendAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <514c55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:39 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBlendAnimNode  *); /* linkage=_ZNK14CBlendAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CBlendAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CBlendAnimNode17GetPrimaryBindingEv */
	void CBlendAnimNode(class CBlendAnimNode *, class CBlendAnimNode &); /* linkage=_ZN14CBlendAnimNodeC4EOS_ */
	void CBlendAnimNode(class CBlendAnimNode *, const class CBlendAnimNode  &); /* linkage=_ZN14CBlendAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14CBlendAnimNode8MyTypeIDEv */
	/* <1095450> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14CBlendAnimNode10MyTypeInfoEv */
	class CBlendAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN14CBlendAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CBlendAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CBlendAnimNode  *, char &); /* linkage=_ZN14CBlendAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CBlendAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CBlendAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0107D635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:38
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 38
	const char   __PRETTY_FUNCTION__; // 21029
} /* size: 0, variables: 2 */

// <0107D62F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0107D5C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.h:39
// function call: 1
void CBlendAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 39
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/selectoranimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0114354E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:26
// variable: 1
// function calls: 44
void CSelectorAnimNode::~CSelectorAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 26
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimTagID, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimTagID, int>::Purge(); // 903
	CUtlMemory<AnimTagID, int>::Purge(); // 1799
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Purge(); // 560
	ValidateAlignment<AnimTagID>(void); // 508
	CUtlMemory<AnimTagID, int>::Purge(); // 510
	CUtlMemory<AnimTagID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> >::~CUtlVector(); // 26
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::RemoveAll(); // 1798
	CUtlMemory<CNodeConnection, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CNodeConnection, int>::Purge(); // 903
	CUtlMemory<CNodeConnection, int>::Purge(); // 1799
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::Purge(); // 560
	ValidateAlignment<CNodeConnection>(void); // 508
	CUtlMemory<CNodeConnection, int>::Purge(); // 510
	CUtlMemory<CNodeConnection, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CNodeConnection, CUtlMemory<CNodeConnection, int> >::~CUtlVector(); // 26
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 26
} /* size: 379, inline expansions: 40 (1059 bytes) */

// <01142B84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:26
// variable: 1
// function calls: 49
void CSelectorAnimNode::~CSelectorAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 26
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimTagID, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimTagID, int>::Purge(); // 903
	CUtlMemory<AnimTagID, int>::Purge(); // 1799
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Purge(); // 560
	ValidateAlignment<AnimTagID>(void); // 508
	CUtlMemory<AnimTagID, int>::Purge(); // 510
	CUtlMemory<AnimTagID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> >::~CUtlVector(); // 26
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::RemoveAll(); // 1798
	CUtlMemory<CNodeConnection, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CNodeConnection, int>::Purge(); // 903
	CUtlMemory<CNodeConnection, int>::Purge(); // 1799
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::Purge(); // 560
	ValidateAlignment<CNodeConnection>(void); // 508
	CUtlMemory<CNodeConnection, int>::Purge(); // 510
	CUtlMemory<CNodeConnection, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CNodeConnection, CUtlMemory<CNodeConnection, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CNodeConnection, CUtlMemory<CNodeConnection, int> >::~CUtlVector(); // 26
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
	CAnimNodeBase::~CAnimNodeBase(); // 26
	CSelectorAnimNode::~CSelectorAnimNode(); // 26
} /* size: 368, inline expansions: 45 (1299 bytes) */

// <01142B68> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:26
inline void CSelectorAnimNode::~CSelectorAnimNode()
{
} /* size: 0 */

// <0111BFCD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:26
// member functions: 87
// member variables: 16
// static member variables: 2
// vtable entries: 22
// class size: 224
class CSelectorAnimNode : public CAnimNodeBase, public ISelectorAnimNode {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	/* class ISelectorAnimNode <ancestor>; */ /* 64 8 */
	void CSelectorAnimNode(CSelectorAnimNode* , CSelectorAnimNode& );
	void CSelectorAnimNode(CSelectorAnimNode* , const CSelectorAnimNode& );
private:
	static class CClassInfoT<CSelectorAnimNode> m_classInfoCSelectorAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:28 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12 */
	virtual void* CastToBase(CSelectorAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12 */
	virtual const void* CastToBase(const CSelectorAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	CSelectorAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	void Schema_CompileTimeVerificationFunction(CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:30 */
	void KV3TransferPolymorphicClassname(const CSelectorAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:30 */
	CSelectorAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:30 */
	virtual void KV3TransferSave(const CSelectorAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:30 */
	virtual void KV3TransferLoad(CSelectorAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:30 */
	void KV3TransferSave_CSelectorAnimNode(const CSelectorAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:30 */
	void KV3TransferLoad_CSelectorAnimNode(CSelectorAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:22 */
	void CSelectorAnimNode(CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:31 */
	virtual CUtlString GetUIName(const CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:46 */
	virtual int GetChildCount(const CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:52 */
	virtual IAnimNode* GetChild(const CSelectorAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:58 */
	virtual AnimNodeID GetChildID(const CSelectorAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:64 */
	virtual void SetChildID(CSelectorAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:70 */
	virtual const CUtlString& GetChildName(const CSelectorAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:107 */
	virtual void SetInputConnection(CSelectorAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:101 */
	virtual AnimOutputID GetChildOutputID(const CSelectorAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:113 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSelectorAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:150 */
	virtual int GetOptionCount(const CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:156 */
	virtual AnimParamID GetParamID(const CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:172 */
	virtual AnimTagID GetTagID(const CSelectorAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:178 */
	virtual void SetTagID(CSelectorAnimNode* , int, AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:184 */
	virtual const CBlendCurve& GetBlendCurve(const CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:190 */
	virtual void SetBlendCurve(CSelectorAnimNode* , const CBlendCurve& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:196 */
	virtual void RefreshInputs(CSelectorAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:244 */
	PropertyChangeDirtyResult_t OnParameterChangeCallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:60 */
	PropertyAttrState_t VisibleIfBool(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:61 */
	PropertyAttrState_t VisibleIfEnum(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:62 */
	PropertyAttrState_t VisibleIfInt(void* );
	CUtlVector<CNodeConnection, CUtlMemory<CNodeConnection, int> > m_children; /* 72 32 */
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> > m_tags; /* 104 32 */
	SelectionSource_t m_selectionSource; /* 136 4 */
	AnimParamID m_boolParamID; /* 140 4 */
	AnimParamID m_enumParamID; /* 144 4 */
	AnimParamID m_intParamID; /* 148 4 */
	int m_intParamMinValue; /* 152 4 */
	int m_intParamMaxValue; /* 156 4 */
	float m_blendDuration; /* 160 4 */
	SelectorTagBehavior_t m_tagBehavior; /* 164 4 */
	bool m_bResetOnChange; /* 168 1 */
	bool m_bSyncCyclesOnChange; /* 169 1 */
	CBlendCurve m_blendCurve; /* 172 16 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_intParamNames; /* 192 32 */
	virtual void ~CSelectorAnimNode(CSelectorAnimNode* );
	virtual void RefreshInputs(class CSelectorAnimNode *); /* linkage=_ZN17CSelectorAnimNode13RefreshInputsEv */
	/* <1193b62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:190 */
	virtual void SetBlendCurve(class CSelectorAnimNode *, const class CBlendCurve  &); /* linkage=_ZN17CSelectorAnimNode13SetBlendCurveERK11CBlendCurve */
	/* <1193b39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:184 */
	virtual const class CBlendCurve  & GetBlendCurve(const class CSelectorAnimNode  *); /* linkage=_ZNK17CSelectorAnimNode13GetBlendCurveEv */
	/* <1193a64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:178 */
	virtual void SetTagID(class CSelectorAnimNode *, int, class AnimTagID); /* linkage=_ZN17CSelectorAnimNode8SetTagIDEi9AnimTagID */
	/* <119387a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:156 */
	virtual class AnimParamID GetParamID(const class CSelectorAnimNode  *); /* linkage=_ZNK17CSelectorAnimNode10GetParamIDEv */
	/* <1196714> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:150 */
	virtual int GetOptionCount(const class CSelectorAnimNode  *); /* linkage=_ZNK17CSelectorAnimNode14GetOptionCountEv */
	virtual void SetInputConnection(class CSelectorAnimNode *, int, class CNodeConnection); /* linkage=_ZN17CSelectorAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CSelectorAnimNode *, int, class AnimNodeID); /* linkage=_ZN17CSelectorAnimNode10SetChildIDEi10AnimNodeID */
	/* <11937ac> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:58 */
	virtual class AnimNodeID GetChildID(const class CSelectorAnimNode  *, int); /* linkage=_ZNK17CSelectorAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSelectorAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK17CSelectorAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	/* <1193996> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:172 */
	virtual class AnimTagID GetTagID(const class CSelectorAnimNode  *, int); /* linkage=_ZNK17CSelectorAnimNode8GetTagIDEi */
	virtual class AnimOutputID GetChildOutputID(const class CSelectorAnimNode  *, int); /* linkage=_ZNK17CSelectorAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CSelectorAnimNode  *, int); /* linkage=_ZNK17CSelectorAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSelectorAnimNode  *, int); /* linkage=_ZNK17CSelectorAnimNode8GetChildEi */
	/* <1193753> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:46 */
	virtual int GetChildCount(const class CSelectorAnimNode  *); /* linkage=_ZNK17CSelectorAnimNode13GetChildCountEv */
	virtual class CUtlString GetUIName(const class CSelectorAnimNode  *); /* linkage=_ZNK17CSelectorAnimNode9GetUINameEv */
	virtual const void  * CastToBase(const class CSelectorAnimNode  *, class ClassID); /* linkage=_ZNK17CSelectorAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSelectorAnimNode *, class ClassID); /* linkage=_ZN17CSelectorAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <119372a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSelectorAnimNode  *); /* linkage=_ZNK17CSelectorAnimNode11GetTypeInfoEv */
	enum PropertyChangeDirtyResult_t OnParameterChangeCallback(void *); /* linkage=_ZN17CSelectorAnimNode25OnParameterChangeCallbackEPv */
	void CSelectorAnimNode(class CSelectorAnimNode *); /* linkage=_ZN17CSelectorAnimNodeC4Ev */
	void KV3TransferLoad_CSelectorAnimNode(class CSelectorAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CSelectorAnimNode33KV3TransferLoad_CSelectorAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSelectorAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CSelectorAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSelectorAnimNode(const class CSelectorAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CSelectorAnimNode33KV3TransferSave_CSelectorAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSelectorAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CSelectorAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec7c7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/selectoranimnode_h_schema.gen_cpp:307 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CSelectorAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CSelectorAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSelectorAnimNode(class CSelectorAnimNode *); /* linkage=_ZN17CSelectorAnimNodeD4Ev */
	class CSelectorAnimNode & operator=(class CSelectorAnimNode *, const class CSelectorAnimNode  &); /* linkage=_ZN17CSelectorAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CSelectorAnimNode *); /* linkage=_ZN17CSelectorAnimNode38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t VisibleIfInt(void *); /* linkage=_ZN17CSelectorAnimNode12VisibleIfIntEPv */
	enum PropertyAttrState_t VisibleIfEnum(void *); /* linkage=_ZN17CSelectorAnimNode13VisibleIfEnumEPv */
	enum PropertyAttrState_t VisibleIfBool(void *); /* linkage=_ZN17CSelectorAnimNode13VisibleIfBoolEPv */
	/* <5ea0d7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/selectoranimnode.h:29 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSelectorAnimNode  *); /* linkage=_ZNK17CSelectorAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CSelectorAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CSelectorAnimNode17GetPrimaryBindingEv */
	void CSelectorAnimNode(class CSelectorAnimNode *, class CSelectorAnimNode &); /* linkage=_ZN17CSelectorAnimNodeC4EOS_ */
	void CSelectorAnimNode(class CSelectorAnimNode *, const class CSelectorAnimNode  &); /* linkage=_ZN17CSelectorAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17CSelectorAnimNode8MyTypeIDEv */
	/* <1198304> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17CSelectorAnimNode10MyTypeInfoEv */
	class CSelectorAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN17CSelectorAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CSelectorAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSelectorAnimNode  *, char &); /* linkage=_ZN17CSelectorAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSelectorAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CSelectorAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0116F2A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:28
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 28
	const char   __PRETTY_FUNCTION__; // 44363
} /* size: 0, variables: 2 */

// <0116F29A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0116F22F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectoranimnode.h:29
// function call: 1
void CSelectorAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 29
} /* size: 0, inline expansions: 1 (0 bytes) */


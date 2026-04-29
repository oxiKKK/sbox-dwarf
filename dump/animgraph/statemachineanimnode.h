
//
// animgraph/statemachineanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <01258458> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:18
// variable: 1
// function calls: 37
void CStateMachineAnimNode::~CStateMachineAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimState>(CAnimState* pObj); // 344
		CSmartPtr<CAnimState, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 1798
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 560
	ValidateAlignment<CSmartPtr<CAnimState> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 410
	CUtlVector<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> >::~CUtlVector(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 18
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 18
} /* size: 323, inline expansions: 27 (774 bytes) */

// <01257BCF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:18
// variable: 1
// function calls: 42
void CStateMachineAnimNode::~CStateMachineAnimNode()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimState>(CAnimState* pObj); // 344
		CSmartPtr<CAnimState, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 1798
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 560
	ValidateAlignment<CSmartPtr<CAnimState> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 410
	CUtlVector<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> >::~CUtlVector(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 18
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
	CAnimNodeBase::~CAnimNodeBase(); // 18
	CStateMachineAnimNode::~CStateMachineAnimNode(); // 18
} /* size: 319, inline expansions: 32 (1007 bytes) */

// <01257BB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:18
inline void CStateMachineAnimNode::~CStateMachineAnimNode()
{
} /* size: 0 */

// <0122FCFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:18
// member functions: 95
// member variables: 6
// static member variables: 2
// vtable entries: 27
// class size: 120
class CStateMachineAnimNode : public CAnimNodeBase, public IAnimStateMachine {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	/* class IAnimStateMachine <ancestor>; */ /* 64 8 */
	void CStateMachineAnimNode(CStateMachineAnimNode* , CStateMachineAnimNode& );
	void CStateMachineAnimNode(CStateMachineAnimNode* , const CStateMachineAnimNode& );
private:
	static class CClassInfoT<CStateMachineAnimNode> m_classInfoCStateMachineAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:20 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13 */
	virtual void* CastToBase(CStateMachineAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13 */
	virtual const void* CastToBase(const CStateMachineAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	CStateMachineAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	void Schema_CompileTimeVerificationFunction(CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22 */
	void KV3TransferPolymorphicClassname(const CStateMachineAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22 */
	CStateMachineAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22 */
	virtual void KV3TransferSave(const CStateMachineAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22 */
	virtual void KV3TransferLoad(CStateMachineAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22 */
	void KV3TransferSave_CStateMachineAnimNode(const CStateMachineAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22 */
	void KV3TransferLoad_CStateMachineAnimNode(CStateMachineAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:23 */
	void CStateMachineAnimNode(CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:30 */
	virtual int GetChildCount(const CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:36 */
	virtual IAnimNode* GetChild(const CStateMachineAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:42 */
	virtual AnimNodeID GetChildID(const CStateMachineAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:48 */
	virtual void SetChildID(CStateMachineAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:54 */
	virtual const CUtlString& GetChildName(const CStateMachineAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:66 */
	virtual void SetInputConnection(CStateMachineAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:60 */
	virtual AnimOutputID GetChildOutputID(const CStateMachineAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:72 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CStateMachineAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:181 */
	virtual int GetStateCount(const CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:187 */
	virtual IAnimState* GetState(CStateMachineAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:193 */
	virtual const IAnimState* GetState(const CStateMachineAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:407 */
	virtual AnimStateID GetStateID(const CStateMachineAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:199 */
	virtual IAnimState* AddState(CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:210 */
	virtual void RemoveState(CStateMachineAnimNode* , IAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:223 */
	virtual bool CopyStatesToBuffer(CStateMachineAnimNode* , const CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& , CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:235 */
	virtual bool PasteStatesFromBuffer(CStateMachineAnimNode* , const CUtlBuffer& , CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:321 */
	virtual bool SaveToBuffer(const CStateMachineAnimNode* , CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:331 */
	virtual bool LoadFromBuffer(CStateMachineAnimNode* , const CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:425 */
	virtual void MoveStateToIndex(CStateMachineAnimNode* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:356 */
	virtual IAnimState* GetState(CStateMachineAnimNode* , AnimStateID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:370 */
	virtual const IAnimState* GetState(const CStateMachineAnimNode* , AnimStateID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:384 */
	int GetIndexOfState(const CStateMachineAnimNode* , AnimStateID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:398 */
	void TransferPostLoadFn(CStateMachineAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:412 */
	AnimStateID CreateStateID(const CStateMachineAnimNode* );
	CAnimStateMachineContextPtr m_stateMachineContext; /* 72 8 */
	CUtlVector<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> > m_states; /* 80 32 */
	bool m_bBlockWaningTags; /* 112 1 */
	bool m_bLockStateWhenWaning; /* 113 1 */
	virtual void ~CStateMachineAnimNode(CStateMachineAnimNode* );
	virtual const class IAnimState  * GetState(const class CStateMachineAnimNode  *, class AnimStateID); /* linkage=_ZNK21CStateMachineAnimNode8GetStateE11AnimStateID */
	virtual class IAnimState * GetState(class CStateMachineAnimNode *, class AnimStateID); /* linkage=_ZN21CStateMachineAnimNode8GetStateE11AnimStateID */
	virtual void MoveStateToIndex(class CStateMachineAnimNode *, int, int); /* linkage=_ZN21CStateMachineAnimNode16MoveStateToIndexEii */
	virtual bool LoadFromBuffer(class CStateMachineAnimNode *, const class CUtlBuffer  &); /* linkage=_ZN21CStateMachineAnimNode14LoadFromBufferERK10CUtlBuffer */
	virtual bool SaveToBuffer(const class CStateMachineAnimNode  *, class CUtlBuffer &); /* linkage=_ZNK21CStateMachineAnimNode12SaveToBufferER10CUtlBuffer */
	virtual bool PasteStatesFromBuffer(class CStateMachineAnimNode *, const class CUtlBuffer  &, class CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> > &); /* linkage=_ZN21CStateMachineAnimNode21PasteStatesFromBufferERK10CUtlBufferR10CUtlVectorIP10IAnimState10CUtlMemoryIS5_iEE */
	virtual bool CopyStatesToBuffer(class CStateMachineAnimNode *, const class CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >  &, class CUtlBuffer &); /* linkage=_ZN21CStateMachineAnimNode18CopyStatesToBufferERK10CUtlVectorIP10IAnimState10CUtlMemoryIS2_iEER10CUtlBuffer */
	/* <129f6ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:210 */
	virtual void RemoveState(class CStateMachineAnimNode *, class IAnimState *); /* linkage=_ZN21CStateMachineAnimNode11RemoveStateEP10IAnimState */
	virtual class IAnimState * AddState(class CStateMachineAnimNode *); /* linkage=_ZN21CStateMachineAnimNode8AddStateEv */
	/* <129c02d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:407 */
	virtual class AnimStateID GetStateID(const class CStateMachineAnimNode  *, int); /* linkage=_ZNK21CStateMachineAnimNode10GetStateIDEi */
	virtual const class IAnimState  * GetState(const class CStateMachineAnimNode  *, int); /* linkage=_ZNK21CStateMachineAnimNode8GetStateEi */
	/* <129bf65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:187 */
	virtual class IAnimState * GetState(class CStateMachineAnimNode *, int); /* linkage=_ZN21CStateMachineAnimNode8GetStateEi */
	virtual int GetStateCount(const class CStateMachineAnimNode  *); /* linkage=_ZNK21CStateMachineAnimNode13GetStateCountEv */
	virtual void SetInputConnection(class CStateMachineAnimNode *, int, class CNodeConnection); /* linkage=_ZN21CStateMachineAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CStateMachineAnimNode *, int, class AnimNodeID); /* linkage=_ZN21CStateMachineAnimNode10SetChildIDEi10AnimNodeID */
	/* <129c5d4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:42 */
	virtual class AnimNodeID GetChildID(const class CStateMachineAnimNode  *, int); /* linkage=_ZNK21CStateMachineAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CStateMachineAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK21CStateMachineAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CStateMachineAnimNode  *, int); /* linkage=_ZNK21CStateMachineAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CStateMachineAnimNode  *, int); /* linkage=_ZNK21CStateMachineAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CStateMachineAnimNode  *, int); /* linkage=_ZNK21CStateMachineAnimNode8GetChildEi */
	/* <129bf0b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:30 */
	virtual int GetChildCount(const class CStateMachineAnimNode  *); /* linkage=_ZNK21CStateMachineAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CStateMachineAnimNode  *, class ClassID); /* linkage=_ZNK21CStateMachineAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CStateMachineAnimNode *, class ClassID); /* linkage=_ZN21CStateMachineAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129bee1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13 */
	virtual const class CClassInfo  & GetTypeInfo(const class CStateMachineAnimNode  *); /* linkage=_ZNK21CStateMachineAnimNode11GetTypeInfoEv */
	void TransferPostLoadFn(class CStateMachineAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN21CStateMachineAnimNode18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void CStateMachineAnimNode(class CStateMachineAnimNode *); /* linkage=_ZN21CStateMachineAnimNodeC4Ev */
	void KV3TransferLoad_CStateMachineAnimNode(class CStateMachineAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN21CStateMachineAnimNode37KV3TransferLoad_CStateMachineAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CStateMachineAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN21CStateMachineAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CStateMachineAnimNode(const class CStateMachineAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CStateMachineAnimNode37KV3TransferSave_CStateMachineAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CStateMachineAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CStateMachineAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ed891> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/statemachineanimnode_h_schema.gen_cpp:137 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CStateMachineAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CStateMachineAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CStateMachineAnimNode(class CStateMachineAnimNode *); /* linkage=_ZN21CStateMachineAnimNodeD4Ev */
	class CStateMachineAnimNode & operator=(class CStateMachineAnimNode *, const class CStateMachineAnimNode  &); /* linkage=_ZN21CStateMachineAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CStateMachineAnimNode *); /* linkage=_ZN21CStateMachineAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea671> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/statemachineanimnode.h:21 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CStateMachineAnimNode  *); /* linkage=_ZNK21CStateMachineAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CStateMachineAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CStateMachineAnimNode17GetPrimaryBindingEv */
	void CStateMachineAnimNode(class CStateMachineAnimNode *, class CStateMachineAnimNode &); /* linkage=_ZN21CStateMachineAnimNodeC4EOS_ */
	void CStateMachineAnimNode(class CStateMachineAnimNode *, const class CStateMachineAnimNode  &); /* linkage=_ZN21CStateMachineAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21CStateMachineAnimNode8MyTypeIDEv */
	/* <129f261> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21CStateMachineAnimNode10MyTypeInfoEv */
	class CStateMachineAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN21CStateMachineAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN21CStateMachineAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CStateMachineAnimNode  *, char &); /* linkage=_ZN21CStateMachineAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CStateMachineAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN21CStateMachineAnimNode32KV3TransferAllocateClassInstanceEPKc */
	/* <129f27f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:384 */
	int GetIndexOfState(const class CStateMachineAnimNode  *, class AnimStateID); /* linkage=_ZNK21CStateMachineAnimNode15GetIndexOfStateE11AnimStateID */
	class AnimStateID CreateStateID(const class CStateMachineAnimNode  *); /* linkage=_ZNK21CStateMachineAnimNode13CreateStateIDEv */
};

// <0128EAAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:20
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 20
	const char   __PRETTY_FUNCTION__; // 11141
} /* size: 0, variables: 2 */

// <00F94135> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:20
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 20
	const char   __PRETTY_FUNCTION__; // 38949
} /* size: 0, variables: 2 */

// <0128EAA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0128EAA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <0128EA35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:21
// function call: 1
void CStateMachineAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 21
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0128EA12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.h:22
inline void KV3TransferPolymorphicClassname(const CStateMachineAnimNode* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */


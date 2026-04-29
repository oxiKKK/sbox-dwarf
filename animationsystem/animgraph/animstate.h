
//
// animationsystem/animgraph/animstate.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//	class: 1
//

// <0085B654> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:17
inline void CAnimState::operator=(const CAnimState &)
{
} /* size: 0 */

// <0085AC19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:17
// variable: 1
// function calls: 48
void CAnimState::~CAnimState()
{
	CUtlString::~CUtlString(); // 17
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 17
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimTagID, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimTagID, int>::Purge(); // 903
	CUtlMemory<AnimTagID, int>::Purge(); // 1799
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Purge(); // 560
	ValidateAlignment<AnimTagID>(void); // 508
	CUtlMemory<AnimTagID, int>::Purge(); // 510
	CUtlMemory<AnimTagID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> >::~CUtlVector(); // 17
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 344
		CSmartPtr<CAnimStateTransition, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimStateTransition> >(CSmartPtr<CAnimStateTransition, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 1798
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 560
	ValidateAlignment<CSmartPtr<CAnimStateTransition> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefC this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCount this); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 344
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::~CSmartPtr(); // 17
} /* size: 299, inline expansions: 38 (885 bytes) */

// <0085ABB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:17
void CAnimState::~CAnimState()
{
} /* size: 36 */

// <0085AB96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:17
inline void CAnimState::~CAnimState()
{
} /* size: 0 */

// <0083820D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:17
// member functions: 117
// member variables: 15
// static member variables: 2
// vtable entries: 29
// class size: 168
class CAnimState : public IAnimState, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimState <ancestor>; */ /* 0 0 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CAnimState(CAnimState* , CAnimState& );
	void CAnimState(CAnimState* , const CAnimState& );
	CAnimState& operator=(CAnimState* , CAnimState& );
	CAnimState& operator=(CAnimState* , const CAnimState& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19 */
	CAnimState* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:176 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:205 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:20 */
	void KV3TransferPolymorphicClassname(const CAnimState* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:20 */
	CAnimState* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:213 */
	virtual void KV3TransferSave(const CAnimState* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:234 */
	virtual void KV3TransferLoad(CAnimState* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:218 */
	void KV3TransferSave_CAnimState(const CAnimState* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:239 */
	void KV3TransferLoad_CAnimState(CAnimState* , CKV3TransferLoadContext* );
	static class CClassInfoT<CAnimState> m_classInfoCAnimState; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:25 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:25 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:25 */
	virtual const CClassInfo& GetTypeInfo(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:25 */
	virtual void* CastToBase(CAnimState* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:25 */
	virtual const void* CastToBase(const CAnimState* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:28 */
	void CAnimState(CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:32 */
	virtual const CUtlString& GetName(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:35 */
	virtual AnimStateID GetStateID(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:38 */
	virtual bool IsStartState(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:42 */
	virtual bool IsEndState(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:46 */
	virtual bool IsPassThrough(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:49 */
	virtual const Vector2D& GetPosition(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:50 */
	virtual void SetPosition(CAnimState* , const Vector2D& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:53 */
	virtual int GetTransitionCount(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:56 */
	virtual IAnimStateTransition* GetTransition(CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:57 */
	virtual const IAnimStateTransition* GetTransition(const CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:60 */
	virtual IAnimStateTransition* AddTransition(CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:61 */
	virtual IAnimStateTransition* AddTransition(CAnimState* , IAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:64 */
	virtual void RemoveTransition(CAnimState* , IAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:68 */
	virtual void MoveTransitionToIndex(CAnimState* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:71 */
	virtual int GetTagCount(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:74 */
	virtual IAnimTag* GetTag(CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:75 */
	virtual const IAnimTag* GetTag(const CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:78 */
	virtual void AddTag(CAnimState* , const IAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:81 */
	virtual void RemoveTag(CAnimState* , const IAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:82 */
	virtual void RemoveTag(CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:85 */
	virtual StateTagBehavior GetTagBehavior(const CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:86 */
	virtual void SetTagBehavior(CAnimState* , int, StateTagBehavior);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:92 */
	void SetStateID(CAnimState* , AnimStateID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:95 */
	AnimNodeID GetNodeID(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:96 */
	void SetNodeID(CAnimState* , AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:98 */
	AnimOutputID GetOutputID(const CAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:99 */
	void SetInputConnection(CAnimState* , CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:101 */
	CAnimStateTransitionPtr GetTransitionInternal(CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:102 */
	CAnimStateTransitionConstPtr GetTransitionInternal(const CAnimState* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:104 */
	void SetContext(CAnimState* , const CAnimStateMachineContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:106 */
	void InitUpdateData(CAnimState* , CStateUpdateData& , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:108 */
	void OnPostLoad(CAnimState* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:111 */
	virtual bool AlwaysEvaluate(const CAnimState* );
	CAnimStateMachineContextPtr m_context; /* 24 8 */
	CUtlVector<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimStateTransition, CRefCountAccessor>, int> > m_transitions; /* 32 32 */
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> > m_tags; /* 64 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_tagBehaviors; /* 96 32 */
	CUtlString m_name; /* 128 8 */
	CNodeConnection m_inputConnection; /* 136 8 */
	AnimStateID m_stateID; /* 144 4 */
	Vector2D m_position; /* 148 8 */
	bool m_bIsStartState; /* 156 1 */
	bool m_bIsEndtState; /* 157 1 */
	bool m_bIsPassthrough; /* 158 1 */
	bool m_bIsRootMotionExclusive; /* 159 1 */
	bool m_bAlwaysEvaluate; /* 160 1 */
	virtual void ~CAnimState(CAnimState* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CAnimState22Schema_StaticClassnameEv */
	/* <85cb3e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstate_h_schema.gen_cpp:205 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CAnimState32Schema_VerifyBindingIsRegisteredEv */
	class CAnimState * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CAnimState32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CAnimState  *, char &); /* linkage=_ZN10CAnimState31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CAnimState20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CAnimState17GetPrimaryBindingEv */
	void CAnimState(class CAnimState *, class CAnimState &); /* linkage=_ZN10CAnimStateC4EOS_ */
	void CAnimState(class CAnimState *, const class CAnimState  &); /* linkage=_ZN10CAnimStateC4ERKS_ */
	class CAnimState & operator=(class CAnimState *, class CAnimState &); /* linkage=_ZN10CAnimStateaSEOS_ */
	class CAnimState & operator=(class CAnimState *, const class CAnimState  &); /* linkage=_ZN10CAnimStateaSERKS_ */
	class CAnimState * Schema_MarkHelperFn(void); /* linkage=_ZN10CAnimState19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CAnimState15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CAnimState *); /* linkage=_ZN10CAnimState38Schema_CompileTimeVerificationFunctionEv */
	/* <85c9d2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimState  *); /* linkage=_ZNK10CAnimState21Schema_DynamicBindingEv */
	virtual void KV3TransferSave(const class CAnimState  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CAnimState15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimState *, class CKV3TransferLoadContext *); /* linkage=_ZN10CAnimState15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimState(const class CAnimState  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CAnimState26KV3TransferSave_CAnimStateEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimState(class CAnimState *, class CKV3TransferLoadContext *); /* linkage=_ZN10CAnimState26KV3TransferLoad_CAnimStateEP23CKV3TransferLoadContext */
	const class ClassID  MyTypeID(void); /* linkage=_ZN10CAnimState8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN10CAnimState10MyTypeInfoEv */
	/* <1a02d56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:13 */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimState  *); /* linkage=_ZNK10CAnimState11GetTypeInfoEv */
	virtual void * CastToBase(class CAnimState *, class ClassID); /* linkage=_ZN10CAnimState10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CAnimState  *, class ClassID); /* linkage=_ZNK10CAnimState10CastToBaseEN10Reflection7ClassIDE */
	void CAnimState(class CAnimState *); /* linkage=_ZN10CAnimStateC4Ev */
	virtual const class CUtlString  & GetName(const class CAnimState  *); /* linkage=_ZNK10CAnimState7GetNameEv */
	/* <1a02d80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:192 */
	virtual class AnimStateID GetStateID(const class CAnimState  *); /* linkage=_ZNK10CAnimState10GetStateIDEv */
	virtual bool IsStartState(const class CAnimState  *); /* linkage=_ZNK10CAnimState12IsStartStateEv */
	virtual bool IsEndState(const class CAnimState  *); /* linkage=_ZNK10CAnimState10IsEndStateEv */
	virtual bool IsPassThrough(const class CAnimState  *); /* linkage=_ZNK10CAnimState13IsPassThroughEv */
	virtual const class Vector2D  & GetPosition(const class CAnimState  *); /* linkage=_ZNK10CAnimState11GetPositionEv */
	virtual void SetPosition(class CAnimState *, const class Vector2D  &); /* linkage=_ZN10CAnimState11SetPositionERK8Vector2D */
	virtual int GetTransitionCount(const class CAnimState  *); /* linkage=_ZNK10CAnimState18GetTransitionCountEv */
	virtual class IAnimStateTransition * GetTransition(class CAnimState *, int); /* linkage=_ZN10CAnimState13GetTransitionEi */
	virtual const class IAnimStateTransition  * GetTransition(const class CAnimState  *, int); /* linkage=_ZNK10CAnimState13GetTransitionEi */
	virtual class IAnimStateTransition * AddTransition(class CAnimState *); /* linkage=_ZN10CAnimState13AddTransitionEv */
	virtual class IAnimStateTransition * AddTransition(class CAnimState *, class IAnimState *); /* linkage=_ZN10CAnimState13AddTransitionEP10IAnimState */
	virtual void RemoveTransition(class CAnimState *, class IAnimStateTransition *); /* linkage=_ZN10CAnimState16RemoveTransitionEP20IAnimStateTransition */
	virtual void MoveTransitionToIndex(class CAnimState *, int, int); /* linkage=_ZN10CAnimState21MoveTransitionToIndexEii */
	virtual int GetTagCount(const class CAnimState  *); /* linkage=_ZNK10CAnimState11GetTagCountEv */
	virtual class IAnimTag * GetTag(class CAnimState *, int); /* linkage=_ZN10CAnimState6GetTagEi */
	virtual const class IAnimTag  * GetTag(const class CAnimState  *, int); /* linkage=_ZNK10CAnimState6GetTagEi */
	virtual void AddTag(class CAnimState *, const class IAnimTag  *); /* linkage=_ZN10CAnimState6AddTagEPK8IAnimTag */
	virtual void RemoveTag(class CAnimState *, const class IAnimTag  *); /* linkage=_ZN10CAnimState9RemoveTagEPK8IAnimTag */
	virtual void RemoveTag(class CAnimState *, int); /* linkage=_ZN10CAnimState9RemoveTagEi */
	virtual enum StateTagBehavior GetTagBehavior(const class CAnimState  *, int); /* linkage=_ZNK10CAnimState14GetTagBehaviorEi */
	virtual void SetTagBehavior(class CAnimState *, int, enum StateTagBehavior); /* linkage=_ZN10CAnimState14SetTagBehaviorEi16StateTagBehavior */
	void SetStateID(class CAnimState *, class AnimStateID); /* linkage=_ZN10CAnimState10SetStateIDE11AnimStateID */
	class AnimNodeID GetNodeID(const class CAnimState  *); /* linkage=_ZNK10CAnimState9GetNodeIDEv */
	void SetNodeID(class CAnimState *, class AnimNodeID); /* linkage=_ZN10CAnimState9SetNodeIDE10AnimNodeID */
	class AnimOutputID GetOutputID(const class CAnimState  *); /* linkage=_ZNK10CAnimState11GetOutputIDEv */
	void SetInputConnection(class CAnimState *, class CNodeConnection); /* linkage=_ZN10CAnimState18SetInputConnectionE15CNodeConnection */
	CAnimStateTransitionPtr GetTransitionInternal(class CAnimState *, int); /* linkage=_ZN10CAnimState21GetTransitionInternalEi */
	CAnimStateTransitionConstPtr GetTransitionInternal(const class CAnimState  *, int); /* linkage=_ZNK10CAnimState21GetTransitionInternalEi */
	void SetContext(class CAnimState *, const CAnimStateMachineContextPtr  &); /* linkage=_ZN10CAnimState10SetContextERK9CSmartPtrI24CAnimStateMachineContext17CRefCountAccessorE */
	void InitUpdateData(class CAnimState *, class CStateUpdateData &, class CAnimGraphInitContext &); /* linkage=_ZN10CAnimState14InitUpdateDataER16CStateUpdateDataR21CAnimGraphInitContext */
	void OnPostLoad(class CAnimState *, class CKV3TransferLoadContext *); /* linkage=_ZN10CAnimState10OnPostLoadEP23CKV3TransferLoadContext */
	virtual bool AlwaysEvaluate(const class CAnimState  *); /* linkage=_ZNK10CAnimState14AlwaysEvaluateEv */
	virtual void ~CAnimState(class CAnimState *); /* linkage=_ZN10CAnimStateD4Ev */
	virtual inline void ~CAnimState(class CAnimState *); /* linkage=_ZN10CAnimStateD4Ev */
};

// <0085C9D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19
// function calls: 3
void CAnimState::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 205
	Schema_VerifyBindingIsRegistered(void); // 19
	GetPrimaryBinding(void); // 19
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0085B79B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0085B795> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0085B77C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19
inline void CAnimState::Schema_DynamicBinding()
{
} /* size: 0 */

// <005B07EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:19
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <005B07C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:20
inline void KV3TransferPolymorphicClassname(const CAnimState* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <005B07AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:20
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <0083EAF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:28
void CAnimState::CAnimState()
{
} /* size: 0 */

// <0085B74C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstate.h:111
void CAnimState::AlwaysEvaluate()
{
} /* size: 12 */


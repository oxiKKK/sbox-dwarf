
//
// animgraph/animationsubgraph.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//	class: 1
//

// <00DFE011> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:9
// variables: 2
// function calls: 54
void CAnimationSubGraph::~CAnimationSubGraph()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 9
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 1798
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 560
	ValidateAlignment<CSmartPtr<CAnimTagBase> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> this); // 9
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 1798
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 560
	ValidateAlignment<CSmartPtr<CAnimParameterBase> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAcce this); // 9
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 9
} /* size: 331, inline expansions: 34 (1128 bytes) */

// <00DFD476> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:9
// variables: 2
// function calls: 57
void CAnimationSubGraph::~CAnimationSubGraph()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 9
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 1798
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 560
	ValidateAlignment<CSmartPtr<CAnimTagBase> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> this); // 9
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 1798
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 560
	ValidateAlignment<CSmartPtr<CAnimParameterBase> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAcce this); // 9
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 9
	Object::~Object(); // 60
	IAnimationSubGraph::~IAnimationSubGraph(); // 9
	CAnimationSubGraph::~CAnimationSubGraph(); // 9
} /* size: 330, inline expansions: 37 (1400 bytes) */

// <00DFD45A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:9
inline void CAnimationSubGraph::~CAnimationSubGraph()
{
} /* size: 0 */

// <00DB39DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:9
// member functions: 64
// member variables: 5
// static member variables: 2
// vtable entries: 8
// class size: 88
class CAnimationSubGraph : public IAnimationSubGraph {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class IAnimationSubGraph <ancestor>; */ /* 0 8 */
private:
	static class CClassInfoT<CAnimationSubGraph> m_classInfoCAnimationSubGraph; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20 */
	virtual const CClassInfo& GetTypeInfo(const CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20 */
	virtual void* CastToBase(CAnimationSubGraph* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20 */
	virtual const void* CastToBase(const CAnimationSubGraph* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	CAnimationSubGraph* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	void Schema_CompileTimeVerificationFunction(CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13 */
	void KV3TransferPolymorphicClassname(const CAnimationSubGraph* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13 */
	CAnimationSubGraph* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13 */
	virtual void KV3TransferSave(const CAnimationSubGraph* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13 */
	virtual void KV3TransferLoad(CAnimationSubGraph* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13 */
	void KV3TransferSave_CAnimationSubGraph(const CAnimationSubGraph* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13 */
	void KV3TransferLoad_CAnimationSubGraph(CAnimationSubGraph* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:23 */
	void CAnimationSubGraph(CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:100 */
	void TransferPostSaveFn(const CAnimationSubGraph* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:160 */
	void TransferPostLoadFn(CAnimationSubGraph* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:212 */
	virtual IAnimNodeManager* GetNodeManager(CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:218 */
	virtual const IAnimNodeManager* GetNodeManager(const CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:224 */
	CAnimGraphContextPtr GetContext(CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:230 */
	int GetParameterCount(const CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:236 */
	CAnimParameterBase* GetParameter(const CAnimationSubGraph* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:242 */
	int GetTagCount(const CAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:248 */
	CAnimTagBase* GetTag(const CAnimationSubGraph* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:38 */
	void CAnimationSubGraph(CAnimationSubGraph* , const CAnimationSubGraph& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:30 */
	void operator=(CAnimationSubGraph* , const CAnimationSubGraph& );
	CAnimNodeManagerPtr m_nodeManager; /* 8 8 */
	CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int> > m_localParameters; /* 16 32 */
	CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> > m_localTags; /* 48 32 */
	CAnimGraphContextPtr m_context; /* 80 8 */
	virtual void ~CAnimationSubGraph(CAnimationSubGraph* );
	virtual const class IAnimNodeManager  * GetNodeManager(const class CAnimationSubGraph  *); /* linkage=_ZNK18CAnimationSubGraph14GetNodeManagerEv */
	/* <e8a2ea> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:212 */
	virtual class IAnimNodeManager * GetNodeManager(class CAnimationSubGraph *); /* linkage=_ZN18CAnimationSubGraph14GetNodeManagerEv */
	virtual const void  * CastToBase(const class CAnimationSubGraph  *, class ClassID); /* linkage=_ZNK18CAnimationSubGraph10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CAnimationSubGraph *, class ClassID); /* linkage=_ZN18CAnimationSubGraph10CastToBaseEN10Reflection7ClassIDE */
	/* <e8a2c1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20 */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimationSubGraph  *); /* linkage=_ZNK18CAnimationSubGraph11GetTypeInfoEv */
	void TransferPostLoadFn(class CAnimationSubGraph *, class CKV3TransferLoadContext *); /* linkage=_ZN18CAnimationSubGraph18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void TransferPostSaveFn(const class CAnimationSubGraph  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CAnimationSubGraph18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void CAnimationSubGraph(class CAnimationSubGraph *); /* linkage=_ZN18CAnimationSubGraphC4Ev */
	void operator=(class CAnimationSubGraph *, const class CAnimationSubGraph  &); /* linkage=_ZN18CAnimationSubGraphaSERKS_ */
	void KV3TransferLoad_CAnimationSubGraph(class CAnimationSubGraph *, class CKV3TransferLoadContext *); /* linkage=_ZN18CAnimationSubGraph34KV3TransferLoad_CAnimationSubGraphEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CAnimationSubGraph *, class CKV3TransferLoadContext *); /* linkage=_ZN18CAnimationSubGraph15KV3TransferLoadEP23CKV3TransferLoadContext */
	/* <44fdc7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationsubgraph_h_schema.gen_cpp:103 */
	void KV3TransferSave_CAnimationSubGraph(const class CAnimationSubGraph  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CAnimationSubGraph34KV3TransferSave_CAnimationSubGraphEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CAnimationSubGraph  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CAnimationSubGraph15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <44d07b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animationsubgraph_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CAnimationSubGraph32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CAnimationSubGraph15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CAnimationSubGraph(class CAnimationSubGraph *); /* linkage=_ZN18CAnimationSubGraphD4Ev */
	void Schema_CompileTimeVerificationFunction(class CAnimationSubGraph *); /* linkage=_ZN18CAnimationSubGraph38Schema_CompileTimeVerificationFunctionEv */
	/* <44ab80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animationsubgraph.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimationSubGraph  *); /* linkage=_ZNK18CAnimationSubGraph21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CAnimationSubGraph22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CAnimationSubGraph17GetPrimaryBindingEv */
	class CAnimationSubGraph * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CAnimationSubGraph32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CAnimationSubGraph  *, char &); /* linkage=_ZN18CAnimationSubGraph31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CAnimationSubGraph20Schema_StaticBindingEv */
	const class ClassID  MyTypeID(void); /* linkage=_ZN18CAnimationSubGraph8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN18CAnimationSubGraph10MyTypeInfoEv */
	class CAnimationSubGraph * Schema_MarkHelperFn(void); /* linkage=_ZN18CAnimationSubGraph19Schema_MarkHelperFnEv */
	CAnimGraphContextPtr GetContext(class CAnimationSubGraph *); /* linkage=_ZN18CAnimationSubGraph10GetContextEv */
	int GetParameterCount(const class CAnimationSubGraph  *); /* linkage=_ZNK18CAnimationSubGraph17GetParameterCountEv */
	class CAnimParameterBase * GetParameter(const class CAnimationSubGraph  *, int); /* linkage=_ZNK18CAnimationSubGraph12GetParameterEi */
	int GetTagCount(const class CAnimationSubGraph  *); /* linkage=_ZNK18CAnimationSubGraph11GetTagCountEv */
	class CAnimTagBase * GetTag(const class CAnimationSubGraph  *, int); /* linkage=_ZNK18CAnimationSubGraph6GetTagEi */
	void CAnimationSubGraph(class CAnimationSubGraph *, const class CAnimationSubGraph  &); /* linkage=_ZN18CAnimationSubGraphC4ERKS_ */
};

// <012865DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 11060
} /* size: 0, variables: 2 */

// <00E8113B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 11547
} /* size: 0, variables: 2 */

// <00E81135> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00E8112F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00E810C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12
// function call: 1
void CAnimationSubGraph::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 12
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00D1A9AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:12
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00E810AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00D1A984> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:13
inline void KV3TransferPolymorphicClassname(const CAnimationSubGraph* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00C1418B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.h:20
void CAnimationSubGraph::CAnimationSubGraph()
{
} /* size: 0 */


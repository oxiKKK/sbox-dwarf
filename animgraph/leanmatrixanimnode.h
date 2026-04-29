
//
// animgraph/leanmatrixanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0113EF1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:15
// function calls: 11
void CLeanMatrixAnimNode::~CLeanMatrixAnimNode()
{
	CUtlString::~CUtlString(); // 15
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
} /* size: 182, inline expansions: 11 (211 bytes) */

// <0113EB85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:15
// function calls: 16
void CLeanMatrixAnimNode::~CLeanMatrixAnimNode()
{
	CUtlString::~CUtlString(); // 15
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
	CLeanMatrixAnimNode::~CLeanMatrixAnimNode(); // 15
} /* size: 183, inline expansions: 16 (317 bytes) */

// <0113EB69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:15
inline void CLeanMatrixAnimNode::~CLeanMatrixAnimNode()
{
} /* size: 0 */

// <010FC0AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:15
// member functions: 61
// member variables: 9
// static member variables: 2
// vtable entries: 13
// class size: 152
class CLeanMatrixAnimNode : public CAnimNodeBase, public ISequenceUser {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	/* class ISequenceUser <ancestor>; */ /* 64 8 */
	void CLeanMatrixAnimNode(CLeanMatrixAnimNode* , CLeanMatrixAnimNode& );
	void CLeanMatrixAnimNode(CLeanMatrixAnimNode* , const CLeanMatrixAnimNode& );
private:
	static class CClassInfoT<CLeanMatrixAnimNode> m_classInfoCLeanMatrixAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CLeanMatrixAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12 */
	virtual void* CastToBase(CLeanMatrixAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12 */
	virtual const void* CastToBase(const CLeanMatrixAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	CLeanMatrixAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	void Schema_CompileTimeVerificationFunction(CLeanMatrixAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CLeanMatrixAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:19 */
	void KV3TransferPolymorphicClassname(const CLeanMatrixAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:19 */
	CLeanMatrixAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:19 */
	virtual void KV3TransferSave(const CLeanMatrixAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:19 */
	virtual void KV3TransferLoad(CLeanMatrixAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:19 */
	void KV3TransferSave_CLeanMatrixAnimNode(const CLeanMatrixAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:19 */
	void KV3TransferLoad_CLeanMatrixAnimNode(CLeanMatrixAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:22 */
	void CLeanMatrixAnimNode(CLeanMatrixAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:27 */
	virtual int GetChildCount(const CLeanMatrixAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:33 */
	virtual IAnimNode* GetChild(const CLeanMatrixAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:39 */
	virtual AnimNodeID GetChildID(const CLeanMatrixAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:45 */
	virtual void SetChildID(CLeanMatrixAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:51 */
	virtual const CUtlString& GetChildName(const CLeanMatrixAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:58 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CLeanMatrixAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:103 */
	virtual void GetSequencesUsed(const CLeanMatrixAnimNode* , CSequenceList& );
	CUtlString m_sequenceName; /* 72 8 */
	float m_flMaxValue; /* 80 4 */
	AnimVectorSource m_blendSource; /* 84 4 */
	AnimParamID m_param; /* 88 4 */
	Vector m_verticalAxisDirection; /* 92 12 */
	Vector m_horizontalAxisDirection; /* 104 12 */
	CAnimInputDamping m_damping; /* 120 0 */
	virtual void ~CLeanMatrixAnimNode(CLeanMatrixAnimNode* );
	virtual void GetSequencesUsed(const class CLeanMatrixAnimNode  *, class CSequenceList &); /* linkage=_ZNK19CLeanMatrixAnimNode16GetSequencesUsedER13CSequenceList */
	virtual void SetChildID(class CLeanMatrixAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CLeanMatrixAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CLeanMatrixAnimNode  *, int); /* linkage=_ZNK19CLeanMatrixAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CLeanMatrixAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CLeanMatrixAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	/* <1194edb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:51 */
	virtual const class CUtlString  & GetChildName(const class CLeanMatrixAnimNode  *, int); /* linkage=_ZNK19CLeanMatrixAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CLeanMatrixAnimNode  *, int); /* linkage=_ZNK19CLeanMatrixAnimNode8GetChildEi */
	virtual int GetChildCount(const class CLeanMatrixAnimNode  *); /* linkage=_ZNK19CLeanMatrixAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CLeanMatrixAnimNode  *, class ClassID); /* linkage=_ZNK19CLeanMatrixAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CLeanMatrixAnimNode *, class ClassID); /* linkage=_ZN19CLeanMatrixAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <11932e1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CLeanMatrixAnimNode  *); /* linkage=_ZNK19CLeanMatrixAnimNode11GetTypeInfoEv */
	void CLeanMatrixAnimNode(class CLeanMatrixAnimNode *); /* linkage=_ZN19CLeanMatrixAnimNodeC4Ev */
	void KV3TransferLoad_CLeanMatrixAnimNode(class CLeanMatrixAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CLeanMatrixAnimNode35KV3TransferLoad_CLeanMatrixAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CLeanMatrixAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CLeanMatrixAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CLeanMatrixAnimNode(const class CLeanMatrixAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CLeanMatrixAnimNode35KV3TransferSave_CLeanMatrixAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CLeanMatrixAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CLeanMatrixAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec178> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/leanmatrixanimnode_h_schema.gen_cpp:177 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CLeanMatrixAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CLeanMatrixAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CLeanMatrixAnimNode(class CLeanMatrixAnimNode *); /* linkage=_ZN19CLeanMatrixAnimNodeD4Ev */
	class CLeanMatrixAnimNode & operator=(class CLeanMatrixAnimNode *, const class CLeanMatrixAnimNode  &); /* linkage=_ZN19CLeanMatrixAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CLeanMatrixAnimNode *); /* linkage=_ZN19CLeanMatrixAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5e9ca3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/leanmatrixanimnode.h:18 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CLeanMatrixAnimNode  *); /* linkage=_ZNK19CLeanMatrixAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CLeanMatrixAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CLeanMatrixAnimNode17GetPrimaryBindingEv */
	void CLeanMatrixAnimNode(class CLeanMatrixAnimNode *, class CLeanMatrixAnimNode &); /* linkage=_ZN19CLeanMatrixAnimNodeC4EOS_ */
	void CLeanMatrixAnimNode(class CLeanMatrixAnimNode *, const class CLeanMatrixAnimNode  &); /* linkage=_ZN19CLeanMatrixAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CLeanMatrixAnimNode8MyTypeIDEv */
	/* <11981cd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CLeanMatrixAnimNode10MyTypeInfoEv */
	class CLeanMatrixAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CLeanMatrixAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CLeanMatrixAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CLeanMatrixAnimNode  *, char &); /* linkage=_ZN19CLeanMatrixAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CLeanMatrixAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CLeanMatrixAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <011805B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 44417
} /* size: 0, variables: 2 */

// <011805B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01180548> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.h:18
// function call: 1
void CLeanMatrixAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 18
} /* size: 0, inline expansions: 1 (0 bytes) */


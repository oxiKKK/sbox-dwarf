
//
// animgraph/directplaybackanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <0105023B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:15
// function calls: 10
void CDirectPlaybackAnimNode::~CDirectPlaybackAnimNode()
{
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
} /* size: 118, inline expansions: 10 (242 bytes) */

// <0104FEFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:15
// function calls: 15
void CDirectPlaybackAnimNode::~CDirectPlaybackAnimNode()
{
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
	CDirectPlaybackAnimNode::~CDirectPlaybackAnimNode(); // 15
} /* size: 115, inline expansions: 15 (263 bytes) */

// <0104FEDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:15
inline void CDirectPlaybackAnimNode::~CDirectPlaybackAnimNode()
{
} /* size: 0 */

// <01014C78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:15
// member functions: 63
// member variables: 5
// static member variables: 2
// vtable entries: 14
// class size: 80
class CDirectPlaybackAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 64 */
	void CDirectPlaybackAnimNode(CDirectPlaybackAnimNode* , CDirectPlaybackAnimNode& );
	void CDirectPlaybackAnimNode(CDirectPlaybackAnimNode* , const CDirectPlaybackAnimNode& );
private:
	static class CClassInfoT<CDirectPlaybackAnimNode> m_classInfoCDirectPlaybackAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CDirectPlaybackAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10 */
	virtual void* CastToBase(CDirectPlaybackAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10 */
	virtual const void* CastToBase(const CDirectPlaybackAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	CDirectPlaybackAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	void Schema_CompileTimeVerificationFunction(CDirectPlaybackAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CDirectPlaybackAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:19 */
	void KV3TransferPolymorphicClassname(const CDirectPlaybackAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:19 */
	CDirectPlaybackAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:19 */
	virtual void KV3TransferSave(const CDirectPlaybackAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:19 */
	virtual void KV3TransferLoad(CDirectPlaybackAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:19 */
	void KV3TransferSave_CDirectPlaybackAnimNode(const CDirectPlaybackAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:19 */
	void KV3TransferLoad_CDirectPlaybackAnimNode(CDirectPlaybackAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:18 */
	void CDirectPlaybackAnimNode(CDirectPlaybackAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:25 */
	virtual int GetChildCount(const CDirectPlaybackAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:31 */
	virtual IAnimNode* GetChild(const CDirectPlaybackAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:37 */
	virtual AnimNodeID GetChildID(const CDirectPlaybackAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:43 */
	virtual void SetChildID(CDirectPlaybackAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:49 */
	virtual const CUtlString& GetChildName(const CDirectPlaybackAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:62 */
	virtual void SetInputConnection(CDirectPlaybackAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:56 */
	virtual AnimOutputID GetChildOutputID(const CDirectPlaybackAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:68 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CDirectPlaybackAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	bool m_bFinishEarly; /* 72 1 */
	bool m_bResetOnFinish; /* 73 1 */
	bool m_bStopSequenceOnFinish; /* 74 1 */
	virtual void ~CDirectPlaybackAnimNode(CDirectPlaybackAnimNode* );
	virtual void SetInputConnection(class CDirectPlaybackAnimNode *, int, class CNodeConnection); /* linkage=_ZN23CDirectPlaybackAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CDirectPlaybackAnimNode *, int, class AnimNodeID); /* linkage=_ZN23CDirectPlaybackAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CDirectPlaybackAnimNode  *, int); /* linkage=_ZNK23CDirectPlaybackAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CDirectPlaybackAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK23CDirectPlaybackAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CDirectPlaybackAnimNode  *, int); /* linkage=_ZNK23CDirectPlaybackAnimNode16GetChildOutputIDEi */
	/* <1092f95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:49 */
	virtual const class CUtlString  & GetChildName(const class CDirectPlaybackAnimNode  *, int); /* linkage=_ZNK23CDirectPlaybackAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CDirectPlaybackAnimNode  *, int); /* linkage=_ZNK23CDirectPlaybackAnimNode8GetChildEi */
	virtual int GetChildCount(const class CDirectPlaybackAnimNode  *); /* linkage=_ZNK23CDirectPlaybackAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CDirectPlaybackAnimNode  *, class ClassID); /* linkage=_ZNK23CDirectPlaybackAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CDirectPlaybackAnimNode *, class ClassID); /* linkage=_ZN23CDirectPlaybackAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <10908fd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CDirectPlaybackAnimNode  *); /* linkage=_ZNK23CDirectPlaybackAnimNode11GetTypeInfoEv */
	void CDirectPlaybackAnimNode(class CDirectPlaybackAnimNode *); /* linkage=_ZN23CDirectPlaybackAnimNodeC4Ev */
	void KV3TransferLoad_CDirectPlaybackAnimNode(class CDirectPlaybackAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN23CDirectPlaybackAnimNode39KV3TransferLoad_CDirectPlaybackAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CDirectPlaybackAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN23CDirectPlaybackAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CDirectPlaybackAnimNode(const class CDirectPlaybackAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CDirectPlaybackAnimNode39KV3TransferSave_CDirectPlaybackAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CDirectPlaybackAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK23CDirectPlaybackAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5187af> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/directplaybackanimnode_h_schema.gen_cpp:143 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN23CDirectPlaybackAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN23CDirectPlaybackAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CDirectPlaybackAnimNode(class CDirectPlaybackAnimNode *); /* linkage=_ZN23CDirectPlaybackAnimNodeD4Ev */
	class CDirectPlaybackAnimNode & operator=(class CDirectPlaybackAnimNode *, const class CDirectPlaybackAnimNode  &); /* linkage=_ZN23CDirectPlaybackAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CDirectPlaybackAnimNode *); /* linkage=_ZN23CDirectPlaybackAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <51513c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/directplaybackanimnode.h:18 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CDirectPlaybackAnimNode  *); /* linkage=_ZNK23CDirectPlaybackAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN23CDirectPlaybackAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN23CDirectPlaybackAnimNode17GetPrimaryBindingEv */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23CDirectPlaybackAnimNode8MyTypeIDEv */
	void CDirectPlaybackAnimNode(class CDirectPlaybackAnimNode *, class CDirectPlaybackAnimNode &); /* linkage=_ZN23CDirectPlaybackAnimNodeC4EOS_ */
	void CDirectPlaybackAnimNode(class CDirectPlaybackAnimNode *, const class CDirectPlaybackAnimNode  &); /* linkage=_ZN23CDirectPlaybackAnimNodeC4ERKS_ */
	/* <10955a5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23CDirectPlaybackAnimNode10MyTypeInfoEv */
	class CDirectPlaybackAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN23CDirectPlaybackAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN23CDirectPlaybackAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CDirectPlaybackAnimNode  *, char &); /* linkage=_ZN23CDirectPlaybackAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CDirectPlaybackAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN23CDirectPlaybackAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <010707D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 21262
} /* size: 0, variables: 2 */

// <00F94197> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 39003
} /* size: 0, variables: 2 */

// <00E73F13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 11667
} /* size: 0, variables: 2 */

// <010707CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01070761> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.h:18
// function call: 1
void CDirectPlaybackAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 18
} /* size: 0, inline expansions: 1 (0 bytes) */


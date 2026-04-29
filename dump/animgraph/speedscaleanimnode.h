
//
// animgraph/speedscaleanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <012579BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:13
// function calls: 10
void CSpeedScaleAnimNode::~CSpeedScaleAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 13
} /* size: 126, inline expansions: 10 (250 bytes) */

// <0125767D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:13
// function calls: 15
void CSpeedScaleAnimNode::~CSpeedScaleAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 13
	CSpeedScaleAnimNode::~CSpeedScaleAnimNode(); // 13
} /* size: 123, inline expansions: 15 (279 bytes) */

// <01257661> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:13
inline void CSpeedScaleAnimNode::~CSpeedScaleAnimNode()
{
} /* size: 0 */

// <0122CFE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:13
// member functions: 63
// member variables: 3
// static member variables: 3
// vtable entries: 14
// class size: 80
class CSpeedScaleAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CSpeedScaleAnimNode(CSpeedScaleAnimNode* , CSpeedScaleAnimNode& );
	void CSpeedScaleAnimNode(CSpeedScaleAnimNode* , const CSpeedScaleAnimNode& );
private:
	static class CClassInfoT<CSpeedScaleAnimNode> m_classInfoCSpeedScaleAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13 */
	virtual const CClassInfo& GetTypeInfo(const CSpeedScaleAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13 */
	virtual void* CastToBase(CSpeedScaleAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13 */
	virtual const void* CastToBase(const CSpeedScaleAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	CSpeedScaleAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CSpeedScaleAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CSpeedScaleAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CSpeedScaleAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:17 */
	CSpeedScaleAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:17 */
	virtual void KV3TransferSave(const CSpeedScaleAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:17 */
	virtual void KV3TransferLoad(CSpeedScaleAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:17 */
	void KV3TransferSave_CSpeedScaleAnimNode(const CSpeedScaleAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:17 */
	void KV3TransferLoad_CSpeedScaleAnimNode(CSpeedScaleAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:24 */
	void CSpeedScaleAnimNode(CSpeedScaleAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:31 */
	virtual int GetChildCount(const CSpeedScaleAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:37 */
	virtual IAnimNode* GetChild(const CSpeedScaleAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:43 */
	virtual AnimNodeID GetChildID(const CSpeedScaleAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:49 */
	virtual void SetChildID(CSpeedScaleAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:55 */
	virtual const CUtlString& GetChildName(const CSpeedScaleAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:67 */
	virtual void SetInputConnection(CSpeedScaleAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:61 */
	virtual AnimOutputID GetChildOutputID(const CSpeedScaleAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:73 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CSpeedScaleAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	AnimParamID m_param; /* 72 4 */
	static class CUtlString m_sChildName; /* 0 0 */
	virtual void ~CSpeedScaleAnimNode(CSpeedScaleAnimNode* );
	virtual void SetInputConnection(class CSpeedScaleAnimNode *, int, class CNodeConnection); /* linkage=_ZN19CSpeedScaleAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CSpeedScaleAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CSpeedScaleAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CSpeedScaleAnimNode  *, int); /* linkage=_ZNK19CSpeedScaleAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CSpeedScaleAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CSpeedScaleAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CSpeedScaleAnimNode  *, int); /* linkage=_ZNK19CSpeedScaleAnimNode16GetChildOutputIDEi */
	virtual const class CUtlString  & GetChildName(const class CSpeedScaleAnimNode  *, int); /* linkage=_ZNK19CSpeedScaleAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CSpeedScaleAnimNode  *, int); /* linkage=_ZNK19CSpeedScaleAnimNode8GetChildEi */
	virtual int GetChildCount(const class CSpeedScaleAnimNode  *); /* linkage=_ZNK19CSpeedScaleAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CSpeedScaleAnimNode  *, class ClassID); /* linkage=_ZNK19CSpeedScaleAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CSpeedScaleAnimNode *, class ClassID); /* linkage=_ZN19CSpeedScaleAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129beb7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSpeedScaleAnimNode  *); /* linkage=_ZNK19CSpeedScaleAnimNode11GetTypeInfoEv */
	void CSpeedScaleAnimNode(class CSpeedScaleAnimNode *); /* linkage=_ZN19CSpeedScaleAnimNodeC4Ev */
	/* <5ecff7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/speedscaleanimnode_h_schema.gen_cpp:155 */
	void KV3TransferLoad_CSpeedScaleAnimNode(class CSpeedScaleAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CSpeedScaleAnimNode35KV3TransferLoad_CSpeedScaleAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CSpeedScaleAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CSpeedScaleAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CSpeedScaleAnimNode(const class CSpeedScaleAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CSpeedScaleAnimNode35KV3TransferSave_CSpeedScaleAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CSpeedScaleAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CSpeedScaleAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ecfa9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/speedscaleanimnode_h_schema.gen_cpp:128 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CSpeedScaleAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CSpeedScaleAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CSpeedScaleAnimNode(class CSpeedScaleAnimNode *); /* linkage=_ZN19CSpeedScaleAnimNodeD4Ev */
	class CSpeedScaleAnimNode & operator=(class CSpeedScaleAnimNode *, const class CSpeedScaleAnimNode  &); /* linkage=_ZN19CSpeedScaleAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CSpeedScaleAnimNode *); /* linkage=_ZN19CSpeedScaleAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea5be> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/speedscaleanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSpeedScaleAnimNode  *); /* linkage=_ZNK19CSpeedScaleAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CSpeedScaleAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CSpeedScaleAnimNode17GetPrimaryBindingEv */
	void CSpeedScaleAnimNode(class CSpeedScaleAnimNode *, class CSpeedScaleAnimNode &); /* linkage=_ZN19CSpeedScaleAnimNodeC4EOS_ */
	void CSpeedScaleAnimNode(class CSpeedScaleAnimNode *, const class CSpeedScaleAnimNode  &); /* linkage=_ZN19CSpeedScaleAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CSpeedScaleAnimNode8MyTypeIDEv */
	/* <129f225> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CSpeedScaleAnimNode10MyTypeInfoEv */
	class CSpeedScaleAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CSpeedScaleAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CSpeedScaleAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CSpeedScaleAnimNode  *, char &); /* linkage=_ZN19CSpeedScaleAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CSpeedScaleAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CSpeedScaleAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <0128F4EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 11087
} /* size: 0, variables: 2 */

// <0128F4E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0128F47D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.h:16
// function call: 1
void CSpeedScaleAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */


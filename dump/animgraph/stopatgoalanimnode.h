
//
// animgraph/stopatgoalanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01259609> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:14
// function calls: 10
void CStopAtGoalAnimNode::~CStopAtGoalAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 14
} /* size: 126, inline expansions: 10 (250 bytes) */

// <012592C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:14
// function calls: 15
void CStopAtGoalAnimNode::~CStopAtGoalAnimNode()
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
	CAnimNodeBase::~CAnimNodeBase(); // 14
	CStopAtGoalAnimNode::~CStopAtGoalAnimNode(); // 14
} /* size: 123, inline expansions: 15 (279 bytes) */

// <012592AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:14
inline void CStopAtGoalAnimNode::~CStopAtGoalAnimNode()
{
} /* size: 0 */

// <01235891> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:14
// member functions: 63
// member variables: 7
// static member variables: 2
// vtable entries: 14
// class size: 120
class CStopAtGoalAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CStopAtGoalAnimNode(CStopAtGoalAnimNode* , CStopAtGoalAnimNode& );
	void CStopAtGoalAnimNode(CStopAtGoalAnimNode* , const CStopAtGoalAnimNode& );
private:
	static class CClassInfoT<CStopAtGoalAnimNode> m_classInfoCStopAtGoalAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CStopAtGoalAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9 */
	virtual void* CastToBase(CStopAtGoalAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9 */
	virtual const void* CastToBase(const CStopAtGoalAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	CStopAtGoalAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CStopAtGoalAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CStopAtGoalAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:18 */
	void KV3TransferPolymorphicClassname(const CStopAtGoalAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:18 */
	CStopAtGoalAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:18 */
	virtual void KV3TransferSave(const CStopAtGoalAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:18 */
	virtual void KV3TransferLoad(CStopAtGoalAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:18 */
	void KV3TransferSave_CStopAtGoalAnimNode(const CStopAtGoalAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:18 */
	void KV3TransferLoad_CStopAtGoalAnimNode(CStopAtGoalAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:18 */
	void CStopAtGoalAnimNode(CStopAtGoalAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:25 */
	virtual int GetChildCount(const CStopAtGoalAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:31 */
	virtual IAnimNode* GetChild(const CStopAtGoalAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:37 */
	virtual AnimNodeID GetChildID(const CStopAtGoalAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:43 */
	virtual void SetChildID(CStopAtGoalAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:49 */
	virtual const CUtlString& GetChildName(const CStopAtGoalAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:62 */
	virtual void SetInputConnection(CStopAtGoalAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:56 */
	virtual AnimOutputID GetChildOutputID(const CStopAtGoalAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:68 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CStopAtGoalAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	float m_flOuterRadius; /* 72 4 */
	float m_flInnerRadius; /* 76 4 */
	float m_flMaxScale; /* 80 4 */
	float m_flMinScale; /* 84 4 */
	CAnimInputDamping m_damping; /* 88 0 */
	virtual void ~CStopAtGoalAnimNode(CStopAtGoalAnimNode* );
	virtual void SetInputConnection(class CStopAtGoalAnimNode *, int, class CNodeConnection); /* linkage=_ZN19CStopAtGoalAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CStopAtGoalAnimNode *, int, class AnimNodeID); /* linkage=_ZN19CStopAtGoalAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CStopAtGoalAnimNode  *, int); /* linkage=_ZNK19CStopAtGoalAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CStopAtGoalAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK19CStopAtGoalAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CStopAtGoalAnimNode  *, int); /* linkage=_ZNK19CStopAtGoalAnimNode16GetChildOutputIDEi */
	/* <129ca27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:49 */
	virtual const class CUtlString  & GetChildName(const class CStopAtGoalAnimNode  *, int); /* linkage=_ZNK19CStopAtGoalAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CStopAtGoalAnimNode  *, int); /* linkage=_ZNK19CStopAtGoalAnimNode8GetChildEi */
	virtual int GetChildCount(const class CStopAtGoalAnimNode  *); /* linkage=_ZNK19CStopAtGoalAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CStopAtGoalAnimNode  *, class ClassID); /* linkage=_ZNK19CStopAtGoalAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CStopAtGoalAnimNode *, class ClassID); /* linkage=_ZN19CStopAtGoalAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <129c172> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CStopAtGoalAnimNode  *); /* linkage=_ZNK19CStopAtGoalAnimNode11GetTypeInfoEv */
	void CStopAtGoalAnimNode(class CStopAtGoalAnimNode *); /* linkage=_ZN19CStopAtGoalAnimNodeC4Ev */
	void KV3TransferLoad_CStopAtGoalAnimNode(class CStopAtGoalAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CStopAtGoalAnimNode35KV3TransferLoad_CStopAtGoalAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CStopAtGoalAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN19CStopAtGoalAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CStopAtGoalAnimNode(const class CStopAtGoalAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CStopAtGoalAnimNode35KV3TransferSave_CStopAtGoalAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CStopAtGoalAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CStopAtGoalAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ed8df> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/stopatgoalanimnode_h_schema.gen_cpp:161 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CStopAtGoalAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CStopAtGoalAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CStopAtGoalAnimNode(class CStopAtGoalAnimNode *); /* linkage=_ZN19CStopAtGoalAnimNodeD4Ev */
	class CStopAtGoalAnimNode & operator=(class CStopAtGoalAnimNode *, const class CStopAtGoalAnimNode  &); /* linkage=_ZN19CStopAtGoalAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CStopAtGoalAnimNode *); /* linkage=_ZN19CStopAtGoalAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5ea724> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/stopatgoalanimnode.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CStopAtGoalAnimNode  *); /* linkage=_ZNK19CStopAtGoalAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CStopAtGoalAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CStopAtGoalAnimNode17GetPrimaryBindingEv */
	void CStopAtGoalAnimNode(class CStopAtGoalAnimNode *, class CStopAtGoalAnimNode &); /* linkage=_ZN19CStopAtGoalAnimNodeC4EOS_ */
	void CStopAtGoalAnimNode(class CStopAtGoalAnimNode *, const class CStopAtGoalAnimNode  &); /* linkage=_ZN19CStopAtGoalAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CStopAtGoalAnimNode8MyTypeIDEv */
	/* <129f41f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CStopAtGoalAnimNode10MyTypeInfoEv */
	class CStopAtGoalAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN19CStopAtGoalAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CStopAtGoalAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CStopAtGoalAnimNode  *, char &); /* linkage=_ZN19CStopAtGoalAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CStopAtGoalAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CStopAtGoalAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <01287068> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 11087
} /* size: 0, variables: 2 */

// <01287062> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01286FF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.h:17
// function call: 1
void CStopAtGoalAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 17
} /* size: 0, inline expansions: 1 (0 bytes) */


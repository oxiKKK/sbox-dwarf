
//
// animgraph/hitreactanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0113D0EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:11
// function calls: 12
void CHitReactAnimNode::~CHitReactAnimNode()
{
	CUtlString::~CUtlString(); // 11
	CUtlString::~CUtlString(); // 11
	CUtlString::~CUtlString(); // 35
	CUtlString::~CUtlString(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 35
	CAnimNodeBase::~CAnimNodeBase(); // 11
} /* size: 190, inline expansions: 12 (233 bytes) */

// <0113CD1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:11
// function calls: 17
void CHitReactAnimNode::~CHitReactAnimNode()
{
	CUtlString::~CUtlString(); // 11
	CUtlString::~CUtlString(); // 11
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
	CAnimNodeBase::~CAnimNodeBase(); // 11
	CHitReactAnimNode::~CHitReactAnimNode(); // 11
} /* size: 191, inline expansions: 17 (347 bytes) */

// <0113CD01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:11
inline void CHitReactAnimNode::~CHitReactAnimNode()
{
} /* size: 0 */

// <010F8C28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:11
// member functions: 63
// member variables: 25
// static member variables: 2
// vtable entries: 14
// class size: 176
class CHitReactAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CHitReactAnimNode(CHitReactAnimNode* , CHitReactAnimNode& );
	void CHitReactAnimNode(CHitReactAnimNode* , const CHitReactAnimNode& );
private:
	static class CClassInfoT<CHitReactAnimNode> m_classInfoCHitReactAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const CHitReactAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9 */
	virtual void* CastToBase(CHitReactAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9 */
	virtual const void* CastToBase(const CHitReactAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	CHitReactAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	void Schema_CompileTimeVerificationFunction(CHitReactAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CHitReactAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:15 */
	void KV3TransferPolymorphicClassname(const CHitReactAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:15 */
	CHitReactAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:15 */
	virtual void KV3TransferSave(const CHitReactAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:15 */
	virtual void KV3TransferLoad(CHitReactAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:15 */
	void KV3TransferSave_CHitReactAnimNode(const CHitReactAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:15 */
	void KV3TransferLoad_CHitReactAnimNode(CHitReactAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:18 */
	void CHitReactAnimNode(CHitReactAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:23 */
	virtual int GetChildCount(const CHitReactAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:29 */
	virtual IAnimNode* GetChild(const CHitReactAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:35 */
	virtual AnimNodeID GetChildID(const CHitReactAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:41 */
	virtual void SetChildID(CHitReactAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:47 */
	virtual const CUtlString& GetChildName(const CHitReactAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:60 */
	virtual void SetInputConnection(CHitReactAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:54 */
	virtual AnimOutputID GetChildOutputID(const CHitReactAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:66 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CHitReactAnimNode* , CAnimGraphInitContext& );
	CNodeConnection m_inputConnection; /* 64 8 */
	float m_flMinDelayBetweenHits; /* 72 4 */
	AnimParamID m_triggerParam; /* 76 4 */
	AnimParamID m_hitBoneParam; /* 80 4 */
	AnimParamID m_hitOffsetParam; /* 84 4 */
	AnimParamID m_hitDirectionParam; /* 88 4 */
	AnimParamID m_hitStrengthParam; /* 92 4 */
	CUtlString m_weightListName; /* 96 8 */
	CUtlString m_hipBoneName; /* 104 8 */
	float m_flHipBoneTranslationScale; /* 112 4 */
	int m_nEffectedBoneCount; /* 116 4 */
	float m_flMaxImpactForce; /* 120 4 */
	float m_flMinImpactForce; /* 124 4 */
	float m_flWhipImpactScale; /* 128 4 */
	float m_flCounterRotationScale; /* 132 4 */
	float m_flDistanceFadeScale; /* 136 4 */
	float m_flPropagationScale; /* 140 4 */
	float m_flWhipDelay; /* 144 4 */
	float m_flSpringStrength; /* 148 4 */
	float m_flWhipSpringStrength; /* 152 4 */
	float m_flHipDipSpringStrength; /* 156 4 */
	float m_flHipDipImpactScale; /* 160 4 */
	float m_flHipDipDelay; /* 164 4 */
	bool m_bResetBase; /* 168 1 */
	virtual void ~CHitReactAnimNode(CHitReactAnimNode* );
	virtual void SetInputConnection(class CHitReactAnimNode *, int, class CNodeConnection); /* linkage=_ZN17CHitReactAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CHitReactAnimNode *, int, class AnimNodeID); /* linkage=_ZN17CHitReactAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CHitReactAnimNode  *, int); /* linkage=_ZNK17CHitReactAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CHitReactAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK17CHitReactAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CHitReactAnimNode  *, int); /* linkage=_ZNK17CHitReactAnimNode16GetChildOutputIDEi */
	/* <1195408> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:47 */
	virtual const class CUtlString  & GetChildName(const class CHitReactAnimNode  *, int); /* linkage=_ZNK17CHitReactAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CHitReactAnimNode  *, int); /* linkage=_ZNK17CHitReactAnimNode8GetChildEi */
	virtual int GetChildCount(const class CHitReactAnimNode  *); /* linkage=_ZNK17CHitReactAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CHitReactAnimNode  *, class ClassID); /* linkage=_ZNK17CHitReactAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CHitReactAnimNode *, class ClassID); /* linkage=_ZN17CHitReactAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <119323d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9 */
	virtual const class CClassInfo  & GetTypeInfo(const class CHitReactAnimNode  *); /* linkage=_ZNK17CHitReactAnimNode11GetTypeInfoEv */
	void CHitReactAnimNode(class CHitReactAnimNode *); /* linkage=_ZN17CHitReactAnimNodeC4Ev */
	void KV3TransferLoad_CHitReactAnimNode(class CHitReactAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CHitReactAnimNode33KV3TransferLoad_CHitReactAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CHitReactAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN17CHitReactAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CHitReactAnimNode(const class CHitReactAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CHitReactAnimNode33KV3TransferSave_CHitReactAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CHitReactAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CHitReactAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518cd3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/hitreactanimnode_h_schema.gen_cpp:344 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CHitReactAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CHitReactAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CHitReactAnimNode(class CHitReactAnimNode *); /* linkage=_ZN17CHitReactAnimNodeD4Ev */
	class CHitReactAnimNode & operator=(class CHitReactAnimNode *, const class CHitReactAnimNode  &); /* linkage=_ZN17CHitReactAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CHitReactAnimNode *); /* linkage=_ZN17CHitReactAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5156d7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/hitreactanimnode.h:14 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CHitReactAnimNode  *); /* linkage=_ZNK17CHitReactAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CHitReactAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CHitReactAnimNode17GetPrimaryBindingEv */
	void CHitReactAnimNode(class CHitReactAnimNode *, class CHitReactAnimNode &); /* linkage=_ZN17CHitReactAnimNodeC4EOS_ */
	void CHitReactAnimNode(class CHitReactAnimNode *, const class CHitReactAnimNode  &); /* linkage=_ZN17CHitReactAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17CHitReactAnimNode8MyTypeIDEv */
	/* <1198155> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17CHitReactAnimNode10MyTypeInfoEv */
	class CHitReactAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN17CHitReactAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CHitReactAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CHitReactAnimNode  *, char &); /* linkage=_ZN17CHitReactAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CHitReactAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CHitReactAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <01183293> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 44363
} /* size: 0, variables: 2 */

// <0118328D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01183222> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.h:14
// function call: 1
void CHitReactAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 14
} /* size: 0, inline expansions: 1 (0 bytes) */


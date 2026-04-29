
//
// animgraph/moveranimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01141ECE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:14
// function calls: 10
void CMoverAnimNode::~CMoverAnimNode()
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

// <01141B8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:14
// function calls: 15
void CMoverAnimNode::~CMoverAnimNode()
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
	CMoverAnimNode::~CMoverAnimNode(); // 14
} /* size: 123, inline expansions: 15 (279 bytes) */

// <01141B72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:14
inline void CMoverAnimNode::~CMoverAnimNode()
{
} /* size: 0 */

// <0111ADF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:14
// member functions: 67
// member variables: 10
// static member variables: 2
// vtable entries: 14
// class size: 120
class CMoverAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CMoverAnimNode(CMoverAnimNode* , CMoverAnimNode& );
	void CMoverAnimNode(CMoverAnimNode* , const CMoverAnimNode& );
private:
	static class CClassInfoT<CMoverAnimNode> m_classInfoCMoverAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CMoverAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11 */
	virtual void* CastToBase(CMoverAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11 */
	virtual const void* CastToBase(const CMoverAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	CMoverAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CMoverAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CMoverAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:18 */
	void KV3TransferPolymorphicClassname(const CMoverAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:18 */
	CMoverAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:18 */
	virtual void KV3TransferSave(const CMoverAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:18 */
	virtual void KV3TransferLoad(CMoverAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:18 */
	void KV3TransferSave_CMoverAnimNode(const CMoverAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:18 */
	void KV3TransferLoad_CMoverAnimNode(CMoverAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:20 */
	void CMoverAnimNode(CMoverAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:27 */
	virtual int GetChildCount(const CMoverAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:33 */
	virtual IAnimNode* GetChild(const CMoverAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:39 */
	virtual AnimNodeID GetChildID(const CMoverAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:45 */
	virtual void SetChildID(CMoverAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:51 */
	virtual const CUtlString& GetChildName(const CMoverAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:65 */
	virtual void SetInputConnection(CMoverAnimNode* , int, CNodeConnection);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:59 */
	virtual AnimOutputID GetChildOutputID(const CMoverAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:71 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CMoverAnimNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:36 */
	PropertyChangeDirtyResult_t OnFieldChanged(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:37 */
	PropertyAttrState_t FacingTargetParamVisibility(void* );
	CNodeConnection m_inputConnection; /* 64 8 */
	bool m_bApplyMovement; /* 72 1 */
	bool m_bOrientMovement; /* 73 1 */
	bool m_bAdditive; /* 74 1 */
	bool m_bTurnToFace; /* 75 1 */
	float m_flTurnToFaceOffset; /* 76 4 */
	AnimValueSource m_facingTarget; /* 80 4 */
	AnimParamID m_facingTargetParam; /* 84 4 */
	CAnimInputDamping m_damping; /* 88 0 */
	virtual void ~CMoverAnimNode(CMoverAnimNode* );
	virtual void SetInputConnection(class CMoverAnimNode *, int, class CNodeConnection); /* linkage=_ZN14CMoverAnimNode18SetInputConnectionEi15CNodeConnection */
	virtual void SetChildID(class CMoverAnimNode *, int, class AnimNodeID); /* linkage=_ZN14CMoverAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CMoverAnimNode  *, int); /* linkage=_ZNK14CMoverAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CMoverAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK14CMoverAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	virtual class AnimOutputID GetChildOutputID(const class CMoverAnimNode  *, int); /* linkage=_ZNK14CMoverAnimNode16GetChildOutputIDEi */
	/* <11957ad> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:51 */
	virtual const class CUtlString  & GetChildName(const class CMoverAnimNode  *, int); /* linkage=_ZNK14CMoverAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CMoverAnimNode  *, int); /* linkage=_ZNK14CMoverAnimNode8GetChildEi */
	virtual int GetChildCount(const class CMoverAnimNode  *); /* linkage=_ZNK14CMoverAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CMoverAnimNode  *, class ClassID); /* linkage=_ZNK14CMoverAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CMoverAnimNode *, class ClassID); /* linkage=_ZN14CMoverAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <11936af> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CMoverAnimNode  *); /* linkage=_ZNK14CMoverAnimNode11GetTypeInfoEv */
	void CMoverAnimNode(class CMoverAnimNode *); /* linkage=_ZN14CMoverAnimNodeC4Ev */
	void KV3TransferLoad_CMoverAnimNode(class CMoverAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN14CMoverAnimNode30KV3TransferLoad_CMoverAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CMoverAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN14CMoverAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CMoverAnimNode(const class CMoverAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CMoverAnimNode30KV3TransferSave_CMoverAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CMoverAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CMoverAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec264> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/moveranimnode_h_schema.gen_cpp:200 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CMoverAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CMoverAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CMoverAnimNode(class CMoverAnimNode *); /* linkage=_ZN14CMoverAnimNodeD4Ev */
	class CMoverAnimNode & operator=(class CMoverAnimNode *, const class CMoverAnimNode  &); /* linkage=_ZN14CMoverAnimNodeaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CMoverAnimNode *); /* linkage=_ZN14CMoverAnimNode38Schema_CompileTimeVerificationFunctionEv */
	enum PropertyAttrState_t FacingTargetParamVisibility(void *); /* linkage=_ZN14CMoverAnimNode27FacingTargetParamVisibilityEPv */
	enum PropertyChangeDirtyResult_t OnFieldChanged(void *); /* linkage=_ZN14CMoverAnimNode14OnFieldChangedEPv */
	/* <5e9ebe> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/moveranimnode.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CMoverAnimNode  *); /* linkage=_ZNK14CMoverAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CMoverAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CMoverAnimNode17GetPrimaryBindingEv */
	void CMoverAnimNode(class CMoverAnimNode *, class CMoverAnimNode &); /* linkage=_ZN14CMoverAnimNodeC4EOS_ */
	void CMoverAnimNode(class CMoverAnimNode *, const class CMoverAnimNode  &); /* linkage=_ZN14CMoverAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14CMoverAnimNode8MyTypeIDEv */
	/* <119828c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14CMoverAnimNode10MyTypeInfoEv */
	class CMoverAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN14CMoverAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CMoverAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CMoverAnimNode  *, char &); /* linkage=_ZN14CMoverAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CMoverAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CMoverAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <01170EA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 44282
} /* size: 0, variables: 2 */

// <01170EA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01170E38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.h:17
// function call: 1
void CMoverAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 17
} /* size: 0, inline expansions: 1 (0 bytes) */


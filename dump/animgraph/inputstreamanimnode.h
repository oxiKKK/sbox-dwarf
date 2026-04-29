
//
// animgraph/inputstreamanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	class: 1
//

// <0113D6BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:13
// function calls: 10
void CInputStreamAnimNode::~CInputStreamAnimNode()
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

// <0113D37B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:13
// function calls: 15
void CInputStreamAnimNode::~CInputStreamAnimNode()
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
	CInputStreamAnimNode::~CInputStreamAnimNode(); // 13
} /* size: 123, inline expansions: 15 (279 bytes) */

// <0113D35F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:13
inline void CInputStreamAnimNode::~CInputStreamAnimNode()
{
} /* size: 0 */

// <010F926D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:13
// member functions: 59
// member variable: 1
// static member variables: 2
// vtable entries: 12
// class size: 64
class CInputStreamAnimNode : public CAnimNodeBase {
public:
	/* class CAnimNodeBase <ancestor>; */ /* 0 0 */
	void CInputStreamAnimNode(CInputStreamAnimNode* , CInputStreamAnimNode& );
	void CInputStreamAnimNode(CInputStreamAnimNode* , const CInputStreamAnimNode& );
private:
	static class CClassInfoT<CInputStreamAnimNode> m_classInfoCInputStreamAnimNode; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const CInputStreamAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8 */
	virtual void* CastToBase(CInputStreamAnimNode* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8 */
	virtual const void* CastToBase(const CInputStreamAnimNode* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	CInputStreamAnimNode* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CInputStreamAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CInputStreamAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:17 */
	void KV3TransferPolymorphicClassname(const CInputStreamAnimNode* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:17 */
	CInputStreamAnimNode* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:17 */
	virtual void KV3TransferSave(const CInputStreamAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:17 */
	virtual void KV3TransferLoad(CInputStreamAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:17 */
	void KV3TransferSave_CInputStreamAnimNode(const CInputStreamAnimNode* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:17 */
	void KV3TransferLoad_CInputStreamAnimNode(CInputStreamAnimNode* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:17 */
	void CInputStreamAnimNode(CInputStreamAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:22 */
	virtual int GetChildCount(const CInputStreamAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:28 */
	virtual IAnimNode* GetChild(const CInputStreamAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:34 */
	virtual AnimNodeID GetChildID(const CInputStreamAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:40 */
	virtual void SetChildID(CInputStreamAnimNode* , int, AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:46 */
	virtual const CUtlString& GetChildName(const CInputStreamAnimNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:53 */
	virtual CAnimUpdateNodeBase* CreateUpdateNode(const CInputStreamAnimNode* , CAnimGraphInitContext& );
	virtual void ~CInputStreamAnimNode(CInputStreamAnimNode* );
	CSchemaClassInfo * :64;
	CSchemaClassInfo * :64;
	CSchemaClassInfo * :64;
	CSchemaClassInfo * :64;
	CSchemaClassInfo * :64;
	CSchemaClassInfo * :64;
	CSchemaClassInfo * :64;
	CSchemaClassInfo * :64;
	virtual void SetChildID(class CInputStreamAnimNode *, int, class AnimNodeID); /* linkage=_ZN20CInputStreamAnimNode10SetChildIDEi10AnimNodeID */
	virtual class AnimNodeID GetChildID(const class CInputStreamAnimNode  *, int); /* linkage=_ZNK20CInputStreamAnimNode10GetChildIDEi */
	virtual class CAnimUpdateNodeBase * CreateUpdateNode(const class CInputStreamAnimNode  *, class CAnimGraphInitContext &); /* linkage=_ZNK20CInputStreamAnimNode16CreateUpdateNodeER21CAnimGraphInitContext */
	/* <1194ddf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:46 */
	virtual const class CUtlString  & GetChildName(const class CInputStreamAnimNode  *, int); /* linkage=_ZNK20CInputStreamAnimNode12GetChildNameEi */
	virtual class IAnimNode * GetChild(const class CInputStreamAnimNode  *, int); /* linkage=_ZNK20CInputStreamAnimNode8GetChildEi */
	virtual int GetChildCount(const class CInputStreamAnimNode  *); /* linkage=_ZNK20CInputStreamAnimNode13GetChildCountEv */
	virtual const void  * CastToBase(const class CInputStreamAnimNode  *, class ClassID); /* linkage=_ZNK20CInputStreamAnimNode10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CInputStreamAnimNode *, class ClassID); /* linkage=_ZN20CInputStreamAnimNode10CastToBaseEN10Reflection7ClassIDE */
	/* <1193266> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8 */
	virtual const class CClassInfo  & GetTypeInfo(const class CInputStreamAnimNode  *); /* linkage=_ZNK20CInputStreamAnimNode11GetTypeInfoEv */
	void CInputStreamAnimNode(class CInputStreamAnimNode *); /* linkage=_ZN20CInputStreamAnimNodeC4Ev */
	void KV3TransferLoad_CInputStreamAnimNode(class CInputStreamAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN20CInputStreamAnimNode36KV3TransferLoad_CInputStreamAnimNodeEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CInputStreamAnimNode *, class CKV3TransferLoadContext *); /* linkage=_ZN20CInputStreamAnimNode15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CInputStreamAnimNode(const class CInputStreamAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CInputStreamAnimNode36KV3TransferSave_CInputStreamAnimNodeEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CInputStreamAnimNode  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CInputStreamAnimNode15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5ec033> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/inputstreamanimnode_h_schema.gen_cpp:92 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CInputStreamAnimNode32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CInputStreamAnimNode15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CInputStreamAnimNode(class CInputStreamAnimNode *); /* linkage=_ZN20CInputStreamAnimNodeD4Ev */
	class CInputStreamAnimNode & operator=(class CInputStreamAnimNode *, const class CInputStreamAnimNode  &); /* linkage=_ZN20CInputStreamAnimNodeaSERKS_ */
	/* <5ec008> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/inputstreamanimnode_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(class CInputStreamAnimNode *); /* linkage=_ZN20CInputStreamAnimNode38Schema_CompileTimeVerificationFunctionEv */
	/* <5e9b3c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/inputstreamanimnode.h:16 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CInputStreamAnimNode  *); /* linkage=_ZNK20CInputStreamAnimNode21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CInputStreamAnimNode22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CInputStreamAnimNode17GetPrimaryBindingEv */
	void CInputStreamAnimNode(class CInputStreamAnimNode *, class CInputStreamAnimNode &); /* linkage=_ZN20CInputStreamAnimNodeC4EOS_ */
	void CInputStreamAnimNode(class CInputStreamAnimNode *, const class CInputStreamAnimNode  &); /* linkage=_ZN20CInputStreamAnimNodeC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20CInputStreamAnimNode8MyTypeIDEv */
	/* <1198173> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20CInputStreamAnimNode10MyTypeInfoEv */
	class CInputStreamAnimNode * Schema_MarkHelperFn(void); /* linkage=_ZN20CInputStreamAnimNode19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CInputStreamAnimNode20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CInputStreamAnimNode  *, char &); /* linkage=_ZN20CInputStreamAnimNode31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CInputStreamAnimNode * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CInputStreamAnimNode32KV3TransferAllocateClassInstanceEPKc */
};

// <011824A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 44444
} /* size: 0, variables: 2 */

// <00F91561> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 38922
} /* size: 0, variables: 2 */

// <0118249F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01182434> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.h:16
// function call: 1
void CInputStreamAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 16
} /* size: 0, inline expansions: 1 (0 bytes) */



//
// animgraph/eventanimtag.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01304C27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:10
// function calls: 2
void CEventAnimTag::~CEventAnimTag()
{
	CUtlString::~CUtlString(); // 13
	CAnimTagBase::~CAnimTagBase(); // 10
} /* size: 65, inline expansions: 2 (67 bytes) */

// <01304A8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:10
// function calls: 7
void CEventAnimTag::~CEventAnimTag()
{
	CUtlString::~CUtlString(); // 13
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 13
	Object::~Object(); // 12
	IAnimTag::~IAnimTag(); // 13
	CAnimTagBase::~CAnimTagBase(); // 10
	CEventAnimTag::~CEventAnimTag(); // 10
} /* size: 88, inline expansions: 7 (109 bytes) */

// <01304A6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:10
inline void CEventAnimTag::~CEventAnimTag()
{
} /* size: 0 */

// <012FBA2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:10
// member functions: 49
// member variables: 2
// static member variables: 2
// vtable entries: 7
// class size: 48
class CEventAnimTag : public CAnimTagBase, public IEventAnimTag {
public:
	/* class CAnimTagBase <ancestor>; */ /* 0 40 */
	/* class IEventAnimTag <ancestor>; */ /* 40 8 */
	void CEventAnimTag(CEventAnimTag* , CEventAnimTag& );
	void CEventAnimTag(CEventAnimTag* , const CEventAnimTag& );
private:
	static class CClassInfoT<CEventAnimTag> m_classInfoCEventAnimTag; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CEventAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10 */
	virtual void* CastToBase(CEventAnimTag* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10 */
	virtual const void* CastToBase(const CEventAnimTag* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	CEventAnimTag* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	void Schema_CompileTimeVerificationFunction(CEventAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CEventAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:14 */
	void KV3TransferPolymorphicClassname(const CEventAnimTag* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:14 */
	CEventAnimTag* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:14 */
	virtual void KV3TransferSave(const CEventAnimTag* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:14 */
	virtual void KV3TransferLoad(CEventAnimTag* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:14 */
	void KV3TransferSave_CEventAnimTag(const CEventAnimTag* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:14 */
	void KV3TransferLoad_CEventAnimTag(CEventAnimTag* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:18 */
	void CEventAnimTag(CEventAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:24 */
	virtual const char* GetIdentifier(const CEventAnimTag* );
	virtual void ~CEventAnimTag(CEventAnimTag* );
	/* <131f190> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:24 */
	virtual const char  * GetIdentifier(const class CEventAnimTag  *); /* linkage=_ZNK13CEventAnimTag13GetIdentifierEv */
	virtual const void  * CastToBase(const class CEventAnimTag  *, class ClassID); /* linkage=_ZNK13CEventAnimTag10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CEventAnimTag *, class ClassID); /* linkage=_ZN13CEventAnimTag10CastToBaseEN10Reflection7ClassIDE */
	/* <131eed0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CEventAnimTag  *); /* linkage=_ZNK13CEventAnimTag11GetTypeInfoEv */
	void CEventAnimTag(class CEventAnimTag *); /* linkage=_ZN13CEventAnimTagC4Ev */
	void KV3TransferLoad_CEventAnimTag(class CEventAnimTag *, class CKV3TransferLoadContext *); /* linkage=_ZN13CEventAnimTag29KV3TransferLoad_CEventAnimTagEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CEventAnimTag *, class CKV3TransferLoadContext *); /* linkage=_ZN13CEventAnimTag15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CEventAnimTag(const class CEventAnimTag  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CEventAnimTag29KV3TransferSave_CEventAnimTagEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CEventAnimTag  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CEventAnimTag15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <681a2b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/eventanimtag_h_schema.gen_cpp:92 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN13CEventAnimTag32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN13CEventAnimTag15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CEventAnimTag(class CEventAnimTag *); /* linkage=_ZN13CEventAnimTagD4Ev */
	class CEventAnimTag & operator=(class CEventAnimTag *, const class CEventAnimTag  &); /* linkage=_ZN13CEventAnimTagaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CEventAnimTag *); /* linkage=_ZN13CEventAnimTag38Schema_CompileTimeVerificationFunctionEv */
	/* <68176a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/eventanimtag.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CEventAnimTag  *); /* linkage=_ZNK13CEventAnimTag21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN13CEventAnimTag22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN13CEventAnimTag17GetPrimaryBindingEv */
	void CEventAnimTag(class CEventAnimTag *, class CEventAnimTag &); /* linkage=_ZN13CEventAnimTagC4EOS_ */
	void CEventAnimTag(class CEventAnimTag *, const class CEventAnimTag  &); /* linkage=_ZN13CEventAnimTagC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN13CEventAnimTag8MyTypeIDEv */
	/* <131f81c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN13CEventAnimTag10MyTypeInfoEv */
	class CEventAnimTag * Schema_MarkHelperFn(void); /* linkage=_ZN13CEventAnimTag19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN13CEventAnimTag20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CEventAnimTag  *, char &); /* linkage=_ZN13CEventAnimTag31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CEventAnimTag * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN13CEventAnimTag32KV3TransferAllocateClassInstanceEPKc */
};

// <013127F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 22581
} /* size: 0, variables: 2 */

// <013127EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01312784> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.h:13
// function call: 1
void CEventAnimTag::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */


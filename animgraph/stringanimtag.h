
//
// animgraph/stringanimtag.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01304E74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:10
// function calls: 2
void CStringAnimTag::~CStringAnimTag()
{
	CUtlString::~CUtlString(); // 13
	CAnimTagBase::~CAnimTagBase(); // 10
} /* size: 65, inline expansions: 2 (67 bytes) */

// <01304CD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:10
// function calls: 7
void CStringAnimTag::~CStringAnimTag()
{
	CUtlString::~CUtlString(); // 13
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 13
	Object::~Object(); // 12
	IAnimTag::~IAnimTag(); // 13
	CAnimTagBase::~CAnimTagBase(); // 10
	CStringAnimTag::~CStringAnimTag(); // 10
} /* size: 88, inline expansions: 7 (109 bytes) */

// <01304CBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:10
inline void CStringAnimTag::~CStringAnimTag()
{
} /* size: 0 */

// <012FBF0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:10
// member functions: 47
// member variables: 2
// static member variables: 2
// vtable entries: 6
// class size: 48
class CStringAnimTag : public CAnimTagBase, public IStringAnimTag {
public:
	/* class CAnimTagBase <ancestor>; */ /* 0 40 */
	/* class IStringAnimTag <ancestor>; */ /* 40 8 */
	void CStringAnimTag(CStringAnimTag* , CStringAnimTag& );
	void CStringAnimTag(CStringAnimTag* , const CStringAnimTag& );
private:
	static class CClassInfoT<CStringAnimTag> m_classInfoCStringAnimTag; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:12 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CStringAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10 */
	virtual void* CastToBase(CStringAnimTag* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10 */
	virtual const void* CastToBase(const CStringAnimTag* , ClassID);
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	CStringAnimTag* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	void Schema_CompileTimeVerificationFunction(CStringAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CStringAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:14 */
	void KV3TransferPolymorphicClassname(const CStringAnimTag* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:14 */
	CStringAnimTag* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:14 */
	virtual void KV3TransferSave(const CStringAnimTag* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:14 */
	virtual void KV3TransferLoad(CStringAnimTag* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:14 */
	void KV3TransferSave_CStringAnimTag(const CStringAnimTag* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:14 */
	void KV3TransferLoad_CStringAnimTag(CStringAnimTag* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:19 */
	void CStringAnimTag(CStringAnimTag* );
	virtual void ~CStringAnimTag(CStringAnimTag* );
	virtual const void  * CastToBase(const class CStringAnimTag  *, class ClassID); /* linkage=_ZNK14CStringAnimTag10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class CStringAnimTag *, class ClassID); /* linkage=_ZN14CStringAnimTag10CastToBaseEN10Reflection7ClassIDE */
	/* <131eefa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CStringAnimTag  *); /* linkage=_ZNK14CStringAnimTag11GetTypeInfoEv */
	void CStringAnimTag(class CStringAnimTag *); /* linkage=_ZN14CStringAnimTagC4Ev */
	void KV3TransferLoad_CStringAnimTag(class CStringAnimTag *, class CKV3TransferLoadContext *); /* linkage=_ZN14CStringAnimTag30KV3TransferLoad_CStringAnimTagEP23CKV3TransferLoadContext */
	virtual void KV3TransferLoad(class CStringAnimTag *, class CKV3TransferLoadContext *); /* linkage=_ZN14CStringAnimTag15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CStringAnimTag(const class CStringAnimTag  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CStringAnimTag30KV3TransferSave_CStringAnimTagEP23CKV3TransferSaveContext */
	virtual void KV3TransferSave(const class CStringAnimTag  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CStringAnimTag15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <681a78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/stringanimtag_h_schema.gen_cpp:92 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CStringAnimTag32Schema_VerifyBindingIsRegisteredEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CStringAnimTag15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	virtual void ~CStringAnimTag(class CStringAnimTag *); /* linkage=_ZN14CStringAnimTagD4Ev */
	class CStringAnimTag & operator=(class CStringAnimTag *, const class CStringAnimTag  &); /* linkage=_ZN14CStringAnimTagaSERKS_ */
	void Schema_CompileTimeVerificationFunction(class CStringAnimTag *); /* linkage=_ZN14CStringAnimTag38Schema_CompileTimeVerificationFunctionEv */
	/* <68181b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/stringanimtag.h:13 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CStringAnimTag  *); /* linkage=_ZNK14CStringAnimTag21Schema_DynamicBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CStringAnimTag22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CStringAnimTag17GetPrimaryBindingEv */
	void CStringAnimTag(class CStringAnimTag *, class CStringAnimTag &); /* linkage=_ZN14CStringAnimTagC4EOS_ */
	void CStringAnimTag(class CStringAnimTag *, const class CStringAnimTag  &); /* linkage=_ZN14CStringAnimTagC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN14CStringAnimTag8MyTypeIDEv */
	/* <131f858> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN14CStringAnimTag10MyTypeInfoEv */
	class CStringAnimTag * Schema_MarkHelperFn(void); /* linkage=_ZN14CStringAnimTag19Schema_MarkHelperFnEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CStringAnimTag20Schema_StaticBindingEv */
	void KV3TransferPolymorphicClassname(const class CStringAnimTag  *, char &); /* linkage=_ZN14CStringAnimTag31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CStringAnimTag * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CStringAnimTag32KV3TransferAllocateClassInstanceEPKc */
};

// <01310D98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:12
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 12
	const char   __PRETTY_FUNCTION__; // 22608
} /* size: 0, variables: 2 */

// <01310D92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <01310D27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.h:13
// function call: 1
void CStringAnimTag::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 13
} /* size: 0, inline expansions: 1 (0 bytes) */


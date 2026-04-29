
//
// animationsystem/animgraph/animtagspan.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//	class: 1
//

// <0067ADA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:13
inline void CAnimTagSpan::operator=(const CAnimTagSpan &)
{
} /* size: 0 */

// <0067AC15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:13
// function calls: 7
void CAnimTagSpan::~CAnimTagSpan()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 13
} /* size: 49, inline expansions: 7 (97 bytes) */

// <0067A9DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:13
// function calls: 11
void CAnimTagSpan::~CAnimTagSpan()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 13
	IAnimTagSpan::~IAnimTagSpan(); // 13
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 13
	CAnimTagSpan::~CAnimTagSpan(); // 13
} /* size: 93, inline expansions: 11 (165 bytes) */

// <0067A9C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:13
inline void CAnimTagSpan::~CAnimTagSpan()
{
} /* size: 0 */

// <00670BEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:13
// member functions: 61
// member variables: 6
// static member variable: 1
// vtable entries: 9
// class size: 48
class CAnimTagSpan : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IAnimTagSpan {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IAnimTagSpan <ancestor>; */ /* 16 8 */
	void CAnimTagSpan(CAnimTagSpan* , CAnimTagSpan& );
	void CAnimTagSpan(CAnimTagSpan* , const CAnimTagSpan& );
	CAnimTagSpan& operator=(CAnimTagSpan* , CAnimTagSpan& );
	CAnimTagSpan& operator=(CAnimTagSpan* , const CAnimTagSpan& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15 */
	CAnimTagSpan* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:67 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:96 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:16 */
	void KV3TransferPolymorphicClassname(const CAnimTagSpan* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:16 */
	CAnimTagSpan* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:104 */
	virtual void KV3TransferSave(const CAnimTagSpan* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:116 */
	virtual void KV3TransferLoad(CAnimTagSpan* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:109 */
	void KV3TransferSave_CAnimTagSpan(const CAnimTagSpan* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:121 */
	void KV3TransferLoad_CAnimTagSpan(CAnimTagSpan* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:19 */
	void CAnimTagSpan(CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:20 */
	void CAnimTagSpan(CAnimTagSpan* , AnimTagID, const CAnimGraphContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:23 */
	virtual IAnimTag* GetTag(CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:24 */
	virtual const IAnimTag* GetTag(const CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:27 */
	virtual float GetStartCycle(const CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:28 */
	virtual void SetStartCycle(CAnimTagSpan* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:31 */
	virtual float GetDuration(const CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:32 */
	virtual void SetDuration(CAnimTagSpan* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:34 */
	AnimTagID GetTagID(const CAnimTagSpan* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:35 */
	void SetTagID(CAnimTagSpan* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:36 */
	void SetContext(CAnimTagSpan* , const CAnimGraphContextPtr& );
	CAnimGraphContextPtr m_context; /* 24 8 */
	AnimTagID m_id; /* 32 4 */
	float m_fStartCycle; /* 36 4 */
	float m_fDuration; /* 40 4 */
	virtual void ~CAnimTagSpan(CAnimTagSpan* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN12CAnimTagSpan22Schema_StaticClassnameEv */
	/* <6819de> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagspan_h_schema.gen_cpp:96 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN12CAnimTagSpan32Schema_VerifyBindingIsRegisteredEv */
	class CAnimTagSpan * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN12CAnimTagSpan32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CAnimTagSpan  *, char &); /* linkage=_ZN12CAnimTagSpan31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN12CAnimTagSpan20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN12CAnimTagSpan17GetPrimaryBindingEv */
	void CAnimTagSpan(class CAnimTagSpan *, class CAnimTagSpan &); /* linkage=_ZN12CAnimTagSpanC4EOS_ */
	void CAnimTagSpan(class CAnimTagSpan *, const class CAnimTagSpan  &); /* linkage=_ZN12CAnimTagSpanC4ERKS_ */
	class CAnimTagSpan & operator=(class CAnimTagSpan *, class CAnimTagSpan &); /* linkage=_ZN12CAnimTagSpanaSEOS_ */
	class CAnimTagSpan & operator=(class CAnimTagSpan *, const class CAnimTagSpan  &); /* linkage=_ZN12CAnimTagSpanaSERKS_ */
	class CAnimTagSpan * Schema_MarkHelperFn(void); /* linkage=_ZN12CAnimTagSpan19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN12CAnimTagSpan15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CAnimTagSpan *); /* linkage=_ZN12CAnimTagSpan38Schema_CompileTimeVerificationFunctionEv */
	/* <6816b9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimTagSpan  *); /* linkage=_ZNK12CAnimTagSpan21Schema_DynamicBindingEv */
	virtual void KV3TransferSave(const class CAnimTagSpan  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimTagSpan15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimTagSpan *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimTagSpan15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimTagSpan(const class CAnimTagSpan  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CAnimTagSpan28KV3TransferSave_CAnimTagSpanEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimTagSpan(class CAnimTagSpan *, class CKV3TransferLoadContext *); /* linkage=_ZN12CAnimTagSpan28KV3TransferLoad_CAnimTagSpanEP23CKV3TransferLoadContext */
	void CAnimTagSpan(class CAnimTagSpan *); /* linkage=_ZN12CAnimTagSpanC4Ev */
	void CAnimTagSpan(class CAnimTagSpan *, class AnimTagID, const CAnimGraphContextPtr  &); /* linkage=_ZN12CAnimTagSpanC4E9AnimTagIDRK9CSmartPtrI17CAnimGraphContext17CRefCountAccessorE */
	virtual class IAnimTag * GetTag(class CAnimTagSpan *); /* linkage=_ZN12CAnimTagSpan6GetTagEv */
	virtual const class IAnimTag  * GetTag(const class CAnimTagSpan  *); /* linkage=_ZNK12CAnimTagSpan6GetTagEv */
	/* <131f748> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:52 */
	virtual float GetStartCycle(const class CAnimTagSpan  *); /* linkage=_ZNK12CAnimTagSpan13GetStartCycleEv */
	/* <131f772> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:58 */
	virtual void SetStartCycle(class CAnimTagSpan *, float); /* linkage=_ZN12CAnimTagSpan13SetStartCycleEf */
	/* <131f7a3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:64 */
	virtual float GetDuration(const class CAnimTagSpan  *); /* linkage=_ZNK12CAnimTagSpan11GetDurationEv */
	/* <131f7cd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:70 */
	virtual void SetDuration(class CAnimTagSpan *, float); /* linkage=_ZN12CAnimTagSpan11SetDurationEf */
	class AnimTagID GetTagID(const class CAnimTagSpan  *); /* linkage=_ZNK12CAnimTagSpan8GetTagIDEv */
	void SetTagID(class CAnimTagSpan *, class AnimTagID); /* linkage=_ZN12CAnimTagSpan8SetTagIDE9AnimTagID */
	void SetContext(class CAnimTagSpan *, const CAnimGraphContextPtr  &); /* linkage=_ZN12CAnimTagSpan10SetContextERK9CSmartPtrI17CAnimGraphContext17CRefCountAccessorE */
	virtual void ~CAnimTagSpan(class CAnimTagSpan *); /* linkage=_ZN12CAnimTagSpanD4Ev */
	virtual inline void ~CAnimTagSpan(class CAnimTagSpan *); /* linkage=_ZN12CAnimTagSpanD4Ev */
};

// <006B68AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <006B68A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <006B689E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <006816B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15
// function calls: 3
void CAnimTagSpan::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 96
	Schema_VerifyBindingIsRegistered(void); // 15
	GetPrimaryBinding(void); // 15
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0067AE43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:15
inline void CAnimTagSpan::Schema_DynamicBinding()
{
} /* size: 0 */

// <006B687B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:16
inline void KV3TransferPolymorphicClassname(const CAnimTagSpan* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <006B6864> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:16
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00673C94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagspan.h:19
void CAnimTagSpan::CAnimTagSpan()
{
} /* size: 0 */


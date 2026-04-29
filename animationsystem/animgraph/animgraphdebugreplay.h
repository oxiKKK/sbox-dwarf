
//
// animationsystem/animgraph/animgraphdebugreplay.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 19
//	classes: 2
//

// <003A478C> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:15
inline void CAnimReplayFrame::operator=(const CAnimReplayFrame &)
{
} /* size: 0 */

// <003A461C> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:15
// function calls: 6
void CAnimReplayFrame::~CAnimReplayFrame()
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 19
	CUtlBinaryBlock::~CUtlBinaryBlock(); // 15
} /* size: 41, inline expansions: 6 (95 bytes) */

// <003A4438> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:15
// function calls: 9
void CAnimReplayFrame::~CAnimReplayFrame()
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 19
	CUtlBinaryBlock::~CUtlBinaryBlock(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	CAnimReplayFrame::~CAnimReplayFrame(); // 15
} /* size: 93, inline expansions: 9 (136 bytes) */

// <003A441C> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:15
inline void CAnimReplayFrame::~CAnimReplayFrame()
{
} /* size: 0 */

// <00391680> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:15
// member functions: 53
// member variables: 4
// static member variable: 1
// vtable entries: 3
// class size: 96
class CAnimReplayFrame : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:18 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimReplayFrame(CAnimReplayFrame* , CAnimReplayFrame& );
	void CAnimReplayFrame(CAnimReplayFrame* , const CAnimReplayFrame& );
	CAnimReplayFrame& operator=(CAnimReplayFrame* , CAnimReplayFrame& );
	CAnimReplayFrame& operator=(CAnimReplayFrame* , const CAnimReplayFrame& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17 */
	CAnimReplayFrame* Schema_MarkHelperFn(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:67 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:96 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimReplayFrame* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimReplayFrame* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:18 */
	void KV3TransferPolymorphicClassname(const CAnimReplayFrame* , char& );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:18 */
	CAnimReplayFrame* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:104 */
	virtual void KV3TransferSave(const CAnimReplayFrame* , CKV3TransferSaveContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:116 */
	virtual void KV3TransferLoad(CAnimReplayFrame* , CKV3TransferLoadContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:109 */
	void KV3TransferSave_CAnimReplayFrame(const CAnimReplayFrame* , CKV3TransferSaveContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:121 */
	void KV3TransferLoad_CAnimReplayFrame(CAnimReplayFrame* , CKV3TransferLoadContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:21 */
	void CAnimReplayFrame(CAnimReplayFrame* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:23 */
	void Set(CAnimReplayFrame* , const CAnimationGraphInstance* , float);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:24 */
	void Refresh(CAnimReplayFrame* , const CAnimationGraphInstance* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:25 */
	void Apply(CAnimReplayFrame* , CAnimationGraphInstance* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:27 */
	float GetTimeStamp(const CAnimReplayFrame* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:29 */
	const CTransform& GetLocalToWorldTransform(const CAnimReplayFrame* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:30 */
	void SetLocalToWorldTransform(CAnimReplayFrame* , const CTransform& );
	CUtlBinaryBlock m_instanceData; /* 16 24 */
	CTransform m_localToWorldTransform __attribute__((__aligned__(16))); /* 48 32 */
	float m_timeStamp; /* 80 4 */
	virtual void ~CAnimReplayFrame(CAnimReplayFrame* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CAnimReplayFrame22Schema_StaticClassnameEv */
	void CAnimReplayFrame(class CAnimReplayFrame *, class CAnimReplayFrame &); /* linkage=_ZN16CAnimReplayFrameC4EOS_ */
	void CAnimReplayFrame(class CAnimReplayFrame *, const class CAnimReplayFrame  &); /* linkage=_ZN16CAnimReplayFrameC4ERKS_ */
	class CAnimReplayFrame & operator=(class CAnimReplayFrame *, class CAnimReplayFrame &); /* linkage=_ZN16CAnimReplayFrameaSEOS_ */
	class CAnimReplayFrame & operator=(class CAnimReplayFrame *, const class CAnimReplayFrame  &); /* linkage=_ZN16CAnimReplayFrameaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CAnimReplayFrame17GetPrimaryBindingEv */
	class CAnimReplayFrame * Schema_MarkHelperFn(void); /* linkage=_ZN16CAnimReplayFrame19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CAnimReplayFrame15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <3a5bb6> ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:96 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CAnimReplayFrame32Schema_VerifyBindingIsRegisteredEv */
	/* <3a5b8b> ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(class CAnimReplayFrame *); /* linkage=_ZN16CAnimReplayFrame38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CAnimReplayFrame20Schema_StaticBindingEv */
	/* <3a5ad7> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimReplayFrame  *); /* linkage=_ZNK16CAnimReplayFrame21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimReplayFrame  *, char &); /* linkage=_ZN16CAnimReplayFrame31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimReplayFrame * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CAnimReplayFrame32KV3TransferAllocateClassInstanceEPKc */
	/* <3a5c04> ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:104 */
	virtual void KV3TransferSave(const class CAnimReplayFrame  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CAnimReplayFrame15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <3a5c5f> ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:116 */
	virtual void KV3TransferLoad(class CAnimReplayFrame *, class CKV3TransferLoadContext *); /* linkage=_ZN16CAnimReplayFrame15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimReplayFrame(const class CAnimReplayFrame  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CAnimReplayFrame32KV3TransferSave_CAnimReplayFrameEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimReplayFrame(class CAnimReplayFrame *, class CKV3TransferLoadContext *); /* linkage=_ZN16CAnimReplayFrame32KV3TransferLoad_CAnimReplayFrameEP23CKV3TransferLoadContext */
	void CAnimReplayFrame(class CAnimReplayFrame *); /* linkage=_ZN16CAnimReplayFrameC4Ev */
	void Set(class CAnimReplayFrame *, const class CAnimationGraphInstance  *, float); /* linkage=_ZN16CAnimReplayFrame3SetEPK23CAnimationGraphInstancef */
	/* <15d24f8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:29 */
	void Refresh(class CAnimReplayFrame *, const class CAnimationGraphInstance  *); /* linkage=_ZN16CAnimReplayFrame7RefreshEPK23CAnimationGraphInstance */
	/* <15d25a3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:37 */
	void Apply(class CAnimReplayFrame *, class CAnimationGraphInstance *); /* linkage=_ZN16CAnimReplayFrame5ApplyEP23CAnimationGraphInstance */
	/* <15d26c0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:48 */
	float GetTimeStamp(const class CAnimReplayFrame  *); /* linkage=_ZNK16CAnimReplayFrame12GetTimeStampEv */
	const class CTransform  & GetLocalToWorldTransform(const class CAnimReplayFrame  *); /* linkage=_ZNK16CAnimReplayFrame24GetLocalToWorldTransformEv */
	/* <15d26e9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:60 */
	void SetLocalToWorldTransform(class CAnimReplayFrame *, const class CTransform  &); /* linkage=_ZN16CAnimReplayFrame24SetLocalToWorldTransformERK10CTransform */
	virtual void ~CAnimReplayFrame(class CAnimReplayFrame *); /* linkage=_ZN16CAnimReplayFrameD4Ev */
	virtual inline void ~CAnimReplayFrame(class CAnimReplayFrame *); /* linkage=_ZN16CAnimReplayFrameD4Ev */
} __attribute__((__aligned__(16)));

// <003A5AD7> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17
// function calls: 3
void CAnimReplayFrame::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 96
	Schema_VerifyBindingIsRegistered(void); // 17
	GetPrimaryBinding(void); // 17
} /* size: 75, inline expansions: 3 (78 bytes) */

// <003A488E> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <003A4888> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <003A4882> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <003A4869> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:17
inline void CAnimReplayFrame::Schema_DynamicBinding()
{
} /* size: 0 */

// <003A4846> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:18
inline void KV3TransferPolymorphicClassname(const CAnimReplayFrame* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <003A482F> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:18
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00397241> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:21
void CAnimReplayFrame::CAnimReplayFrame()
{
} /* size: 0 */

// <003A23A4> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:42
inline void CAnimGraphDebugReplay::operator=(const CAnimGraphDebugReplay &)
{
} /* size: 0 */

// <003A1DC1> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:42
// variable: 1
// function calls: 27
void CAnimGraphDebugReplay::~CAnimGraphDebugReplay()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimReplayFrame> >(CSmartPtr<CAnimReplayFrame, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 1798
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 560
	ValidateAlignment<CSmartPtr<CAnimReplayFrame> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor this); // 42
	CUtlVectorBase<IAnimReplayListener::RemoveAll(); // 1798
	CUtlMemory<IAnimReplayListener::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimReplayListener::Purge(); // 903
	CUtlMemory<IAnimReplayListener::Purge(); // 1799
	CUtlVectorBase<IAnimReplayListener::Purge(); // 560
	CUtlVectorBase<IAnimReplayListener::~CUtlVectorBase(); // 410
	CUtlVector<IAnimReplayListener::~CUtlVector(); // 42
} /* size: 195, inline expansions: 17 (610 bytes) */

// <003A16FD> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:42
// variable: 1
// function calls: 34
void CAnimGraphDebugReplay::~CAnimGraphDebugReplay()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimReplayFrame> >(CSmartPtr<CAnimReplayFrame, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 1798
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 560
	ValidateAlignment<CSmartPtr<CAnimReplayFrame> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor this); // 42
	CUtlVectorBase<IAnimReplayListener::RemoveAll(); // 1798
	CUtlMemory<IAnimReplayListener::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimReplayListener::Purge(); // 903
	CUtlMemory<IAnimReplayListener::Purge(); // 1799
	CUtlVectorBase<IAnimReplayListener::Purge(); // 560
	ValidateAlignment<IAnimReplayListener*>(void); // 508
	CUtlMemory<IAnimReplayListener::Purge(); // 510
	CUtlMemory<IAnimReplayListener::~CUtlMemory(); // 562
	CUtlVectorBase<IAnimReplayListener::~CUtlVectorBase(); // 410
	CUtlVector<IAnimReplayListener::~CUtlVector(); // 42
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 30
	IAnimGraphDebugReplay::~IAnimGraphDebugReplay(); // 42
	CAnimGraphDebugReplay::~CAnimGraphDebugReplay(); // 42
} /* size: 193, inline expansions: 24 (740 bytes) */

// <003A16E1> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:42
inline void CAnimGraphDebugReplay::~CAnimGraphDebugReplay()
{
} /* size: 0 */

// <00391DB6> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:42
// member functions: 101
// member variables: 13
// static member variable: 1
// vtable entries: 24
// class size: 128
class CAnimGraphDebugReplay : public IAnimGraphDebugReplay {
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:137 */
	enum Mode {
		Idle = 0,
		Recording = 1,
		Playing = 2,
	};
public:
	/* class IAnimGraphDebugReplay <ancestor>; */ /* 0 16 */
	void CAnimGraphDebugReplay(CAnimGraphDebugReplay* , CAnimGraphDebugReplay& );
	void CAnimGraphDebugReplay(CAnimGraphDebugReplay* , const CAnimGraphDebugReplay& );
	CAnimGraphDebugReplay& operator=(CAnimGraphDebugReplay* , CAnimGraphDebugReplay& );
	CAnimGraphDebugReplay& operator=(CAnimGraphDebugReplay* , const CAnimGraphDebugReplay& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44 */
	CAnimGraphDebugReplay* Schema_MarkHelperFn(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:173 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:202 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:136 */
	void Schema_CompileTimeVerificationFunction(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:45 */
	void KV3TransferPolymorphicClassname(const CAnimGraphDebugReplay* , char& );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:45 */
	CAnimGraphDebugReplay* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:210 */
	virtual void KV3TransferSave(const CAnimGraphDebugReplay* , CKV3TransferSaveContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:224 */
	virtual void KV3TransferLoad(CAnimGraphDebugReplay* , CKV3TransferLoadContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:215 */
	void KV3TransferSave_CAnimGraphDebugReplay(const CAnimGraphDebugReplay* , CKV3TransferSaveContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:229 */
	void KV3TransferLoad_CAnimGraphDebugReplay(CAnimGraphDebugReplay* , CKV3TransferLoadContext* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:48 */
	void CAnimGraphDebugReplay(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:52 */
	virtual CReceiptPtr AddListener(CAnimGraphDebugReplay* , IAnimReplayListener* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:57 */
	virtual IAnimationGraphBuilder* GetAnimGraph(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:58 */
	virtual void SetAnimGraph(CAnimGraphDebugReplay* , IAnimationGraphBuilder* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:61 */
	virtual bool IsRecording(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:65 */
	virtual void StartRecording(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:68 */
	virtual void StopRecording(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:71 */
	virtual CTransform GetFrameLocalToWorldTransform(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:75 */
	virtual void SetFrameLocalToWorldTransform(CAnimGraphDebugReplay* , const CTransform& );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:78 */
	virtual int GetMaxFrameCount(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:79 */
	virtual void SetMaxFrameCount(CAnimGraphDebugReplay* , int);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:82 */
	virtual bool IsPlaying(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:85 */
	virtual void StartPlayback(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:88 */
	virtual void StopPlayback(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:91 */
	virtual bool IsPlaybackPaused(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:94 */
	virtual void SetPlaybackPaused(CAnimGraphDebugReplay* , bool);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:98 */
	virtual void ReRunFrame(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:101 */
	virtual int GetFrameCount(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:104 */
	virtual int GetCurrentFrame(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:107 */
	virtual void SetCurrentFrame(CAnimGraphDebugReplay* , int);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:110 */
	virtual float GetFrameTime(const CAnimGraphDebugReplay* , int);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:113 */
	virtual float GetDuration(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:119 */
	void PushFrame(CAnimGraphDebugReplay* , const CAnimationGraphInstance* , float);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:122 */
	void RefreshFrame(CAnimGraphDebugReplay* , const CAnimationGraphInstance* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:125 */
	void ApplyCurrentFrame(CAnimGraphDebugReplay* , CAnimationGraphInstance* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:127 */
	void AdvanceFrame(CAnimGraphDebugReplay* , float);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:129 */
	bool ShouldReRunFrame(const CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:130 */
	void ClearReRunFrame(CAnimGraphDebugReplay* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:133 */
	CAnimReplayFramePtr GetFrameAtIndex(const CAnimGraphDebugReplay* , int);
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:134 */
	void RemoveListener(CAnimGraphDebugReplay* , IAnimReplayListener* );
	/* ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:135 */
	void SetIdleMode(CAnimGraphDebugReplay* );
	CUtlVector<IAnimReplayListener*, CUtlMemory<IAnimReplayListener*, int> > m_listeners; /* 16 32 */
	Mode m_mode; /* 48 4 */
	float m_playbackTime; /* 52 4 */
	int m_currentFrame; /* 56 4 */
	int m_lastAppliedFrame; /* 60 4 */
	bool m_bPaused; /* 64 1 */
	bool m_bReRunFrame; /* 65 1 */
	CAnimationGraph * m_pAnimGraph; /* 72 8 */
	CUtlVector<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int> > m_frameList; /* 80 32 */
	int m_startIndex; /* 112 4 */
	int m_writeIndex; /* 116 4 */
	int m_frameCount; /* 120 4 */
	virtual void ~CAnimGraphDebugReplay(CAnimGraphDebugReplay* );
	void CAnimGraphDebugReplay(class CAnimGraphDebugReplay *, class CAnimGraphDebugReplay &); /* linkage=_ZN21CAnimGraphDebugReplayC4EOS_ */
	void CAnimGraphDebugReplay(class CAnimGraphDebugReplay *, const class CAnimGraphDebugReplay  &); /* linkage=_ZN21CAnimGraphDebugReplayC4ERKS_ */
	class CAnimGraphDebugReplay & operator=(class CAnimGraphDebugReplay *, class CAnimGraphDebugReplay &); /* linkage=_ZN21CAnimGraphDebugReplayaSEOS_ */
	class CAnimGraphDebugReplay & operator=(class CAnimGraphDebugReplay *, const class CAnimGraphDebugReplay  &); /* linkage=_ZN21CAnimGraphDebugReplayaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN21CAnimGraphDebugReplay17GetPrimaryBindingEv */
	class CAnimGraphDebugReplay * Schema_MarkHelperFn(void); /* linkage=_ZN21CAnimGraphDebugReplay19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN21CAnimGraphDebugReplay15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <3a5cba> ../_generated_code/animationsystem/linuxsteamrt64/release/animgraphdebugreplay_h_schema.gen_cpp:202 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN21CAnimGraphDebugReplay32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN21CAnimGraphDebugReplay20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN21CAnimGraphDebugReplay22Schema_StaticClassnameEv */
	/* <3a5a23> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimGraphDebugReplay  *, char &); /* linkage=_ZN21CAnimGraphDebugReplay31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimGraphDebugReplay * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN21CAnimGraphDebugReplay32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimGraphDebugReplay  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CAnimGraphDebugReplay15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimGraphDebugReplay *, class CKV3TransferLoadContext *); /* linkage=_ZN21CAnimGraphDebugReplay15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimGraphDebugReplay(const class CAnimGraphDebugReplay  *, class CKV3TransferSaveContext *); /* linkage=_ZNK21CAnimGraphDebugReplay37KV3TransferSave_CAnimGraphDebugReplayEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimGraphDebugReplay(class CAnimGraphDebugReplay *, class CKV3TransferLoadContext *); /* linkage=_ZN21CAnimGraphDebugReplay37KV3TransferLoad_CAnimGraphDebugReplayEP23CKV3TransferLoadContext */
	void CAnimGraphDebugReplay(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplayC4Ev */
	virtual CReceiptPtr AddListener(class CAnimGraphDebugReplay *, class IAnimReplayListener *); /* linkage=_ZN21CAnimGraphDebugReplay11AddListenerEP19IAnimReplayListener */
	virtual class IAnimationGraphBuilder * GetAnimGraph(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay12GetAnimGraphEv */
	virtual void SetAnimGraph(class CAnimGraphDebugReplay *, class IAnimationGraphBuilder *); /* linkage=_ZN21CAnimGraphDebugReplay12SetAnimGraphEP22IAnimationGraphBuilder */
	/* <15cf9e9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:91 */
	virtual bool IsRecording(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay11IsRecordingEv */
	virtual void StartRecording(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay14StartRecordingEv */
	virtual void StopRecording(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay13StopRecordingEv */
	virtual class CTransform GetFrameLocalToWorldTransform(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay29GetFrameLocalToWorldTransformEv */
	virtual void SetFrameLocalToWorldTransform(class CAnimGraphDebugReplay *, const class CTransform  &); /* linkage=_ZN21CAnimGraphDebugReplay29SetFrameLocalToWorldTransformERK10CTransform */
	virtual int GetMaxFrameCount(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay16GetMaxFrameCountEv */
	virtual void SetMaxFrameCount(class CAnimGraphDebugReplay *, int); /* linkage=_ZN21CAnimGraphDebugReplay16SetMaxFrameCountEi */
	virtual bool IsPlaying(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay9IsPlayingEv */
	virtual void StartPlayback(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay13StartPlaybackEv */
	virtual void StopPlayback(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay12StopPlaybackEv */
	/* <15cfa12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:215 */
	virtual bool IsPlaybackPaused(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay16IsPlaybackPausedEv */
	virtual void SetPlaybackPaused(class CAnimGraphDebugReplay *, bool); /* linkage=_ZN21CAnimGraphDebugReplay17SetPlaybackPausedEb */
	virtual void ReRunFrame(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay10ReRunFrameEv */
	/* <15cfa3b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:227 */
	virtual int GetFrameCount(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay13GetFrameCountEv */
	/* <15cfa64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:233 */
	virtual int GetCurrentFrame(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay15GetCurrentFrameEv */
	virtual void SetCurrentFrame(class CAnimGraphDebugReplay *, int); /* linkage=_ZN21CAnimGraphDebugReplay15SetCurrentFrameEi */
	/* <15d27d4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:256 */
	virtual float GetFrameTime(const class CAnimGraphDebugReplay  *, int); /* linkage=_ZNK21CAnimGraphDebugReplay12GetFrameTimeEi */
	virtual float GetDuration(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay11GetDurationEv */
	void PushFrame(class CAnimGraphDebugReplay *, const class CAnimationGraphInstance  *, float); /* linkage=_ZN21CAnimGraphDebugReplay9PushFrameEPK23CAnimationGraphInstancef */
	void RefreshFrame(class CAnimGraphDebugReplay *, const class CAnimationGraphInstance  *); /* linkage=_ZN21CAnimGraphDebugReplay12RefreshFrameEPK23CAnimationGraphInstance */
	void ApplyCurrentFrame(class CAnimGraphDebugReplay *, class CAnimationGraphInstance *); /* linkage=_ZN21CAnimGraphDebugReplay17ApplyCurrentFrameEP23CAnimationGraphInstance */
	void AdvanceFrame(class CAnimGraphDebugReplay *, float); /* linkage=_ZN21CAnimGraphDebugReplay12AdvanceFrameEf */
	bool ShouldReRunFrame(const class CAnimGraphDebugReplay  *); /* linkage=_ZNK21CAnimGraphDebugReplay16ShouldReRunFrameEv */
	void ClearReRunFrame(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay15ClearReRunFrameEv */
	CAnimReplayFramePtr GetFrameAtIndex(const class CAnimGraphDebugReplay  *, int); /* linkage=_ZNK21CAnimGraphDebugReplay15GetFrameAtIndexEi */
	void RemoveListener(class CAnimGraphDebugReplay *, class IAnimReplayListener *); /* linkage=_ZN21CAnimGraphDebugReplay14RemoveListenerEP19IAnimReplayListener */
	void SetIdleMode(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplay11SetIdleModeEv */
	virtual void ~CAnimGraphDebugReplay(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplayD4Ev */
	virtual inline void ~CAnimGraphDebugReplay(class CAnimGraphDebugReplay *); /* linkage=_ZN21CAnimGraphDebugReplayD4Ev */
};

// <003A5A23> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44
// function calls: 3
void CAnimGraphDebugReplay::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 202
	Schema_VerifyBindingIsRegistered(void); // 44
	GetPrimaryBinding(void); // 44
} /* size: 75, inline expansions: 3 (78 bytes) */

// <003A480A> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:44
inline void CAnimGraphDebugReplay::Schema_DynamicBinding()
{
} /* size: 0 */

// <0039717D> ../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animgraphdebugreplay.h:48
void CAnimGraphDebugReplay::CAnimGraphDebugReplay()
{
} /* size: 0 */


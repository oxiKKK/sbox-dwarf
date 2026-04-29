
//
// animationsystem/animgraph/activityparamvalues.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 28
//	classes: 3
//

// <00448466> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:23
inline void CParameterValue::operator=(const CParameterValue &)
{
} /* size: 0 */

// <004482DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:23
// function calls: 7
void CParameterValue::~CParameterValue()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 23
} /* size: 57, inline expansions: 7 (129 bytes) */

// <004480C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:23
// function calls: 10
void CParameterValue::~CParameterValue()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 23
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 23
	CParameterValue::~CParameterValue(); // 23
} /* size: 101, inline expansions: 10 (163 bytes) */

// <004480A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:23
inline void CParameterValue::~CParameterValue()
{
} /* size: 0 */

// <003E6628> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:23
// member functions: 57
// member variables: 5
// static member variable: 1
// vtable entries: 8
// class size: 56
class CParameterValue : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IParameterValue {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:26 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IParameterValue <ancestor>; */ /* 16 8 */
	void CParameterValue(CParameterValue* , CParameterValue& );
	void CParameterValue(CParameterValue* , const CParameterValue& );
	CParameterValue& operator=(CParameterValue* , CParameterValue& );
	CParameterValue& operator=(CParameterValue* , const CParameterValue& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25 */
	CParameterValue* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:64 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CParameterValue* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CParameterValue* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:26 */
	void KV3TransferPolymorphicClassname(const CParameterValue* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:26 */
	CParameterValue* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:101 */
	virtual void KV3TransferSave(const CParameterValue* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:112 */
	virtual void KV3TransferLoad(CParameterValue* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:106 */
	void KV3TransferSave_CParameterValue(const CParameterValue* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:117 */
	void KV3TransferLoad_CParameterValue(CParameterValue* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:30 */
	void CParameterValue(CParameterValue* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:31 */
	void CParameterValue(CParameterValue* , const CAnimParameterListPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:34 */
	virtual IAnimParameter* GetParameter(CParameterValue* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:35 */
	virtual const IAnimParameter* GetParameter(const CParameterValue* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:36 */
	virtual void SetParameter(CParameterValue* , const IAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:38 */
	virtual const CAnimVariant& GetValue(const CParameterValue* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:39 */
	virtual void SetValue(CParameterValue* , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:42 */
	void SetAnimParameterList(CParameterValue* , const CAnimParameterListPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:43 */
	AnimParamID GetParamID(const CParameterValue* );
	AnimParamID m_id; /* 24 4 */
	CAnimVariant m_value; /* 28 17 */
	CAnimParameterListPtr m_pParamList; /* 48 8 */
	virtual void ~CParameterValue(CParameterValue* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CParameterValue22Schema_StaticClassnameEv */
	void CParameterValue(class CParameterValue *, class CParameterValue &); /* linkage=_ZN15CParameterValueC4EOS_ */
	void CParameterValue(class CParameterValue *, const class CParameterValue  &); /* linkage=_ZN15CParameterValueC4ERKS_ */
	class CParameterValue & operator=(class CParameterValue *, class CParameterValue &); /* linkage=_ZN15CParameterValueaSEOS_ */
	class CParameterValue & operator=(class CParameterValue *, const class CParameterValue  &); /* linkage=_ZN15CParameterValueaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CParameterValue17GetPrimaryBindingEv */
	class CParameterValue * Schema_MarkHelperFn(void); /* linkage=_ZN15CParameterValue19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CParameterValue15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44cce3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CParameterValue32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CParameterValue *); /* linkage=_ZN15CParameterValue38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CParameterValue20Schema_StaticBindingEv */
	/* <44b06d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CParameterValue  *); /* linkage=_ZNK15CParameterValue21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CParameterValue  *, char &); /* linkage=_ZN15CParameterValue31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CParameterValue * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CParameterValue32KV3TransferAllocateClassInstanceEPKc */
	/* <44cd31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:101 */
	virtual void KV3TransferSave(const class CParameterValue  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CParameterValue15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <44f972> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:112 */
	virtual void KV3TransferLoad(class CParameterValue *, class CKV3TransferLoadContext *); /* linkage=_ZN15CParameterValue15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CParameterValue(const class CParameterValue  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CParameterValue31KV3TransferSave_CParameterValueEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CParameterValue(class CParameterValue *, class CKV3TransferLoadContext *); /* linkage=_ZN15CParameterValue31KV3TransferLoad_CParameterValueEP23CKV3TransferLoadContext */
	void CParameterValue(class CParameterValue *); /* linkage=_ZN15CParameterValueC4Ev */
	void CParameterValue(class CParameterValue *, const CAnimParameterListPtr  &); /* linkage=_ZN15CParameterValueC4ERK9CSmartPtrI18CAnimParameterList17CRefCountAccessorE */
	/* <e8c77e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:24 */
	virtual class IAnimParameter * GetParameter(class CParameterValue *); /* linkage=_ZN15CParameterValue12GetParameterEv */
	virtual const class IAnimParameter  * GetParameter(const class CParameterValue  *); /* linkage=_ZNK15CParameterValue12GetParameterEv */
	virtual void SetParameter(class CParameterValue *, const class IAnimParameter  *); /* linkage=_ZN15CParameterValue12SetParameterEPK14IAnimParameter */
	/* <e89caf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:60 */
	virtual const class CAnimVariant  & GetValue(const class CParameterValue  *); /* linkage=_ZNK15CParameterValue8GetValueEv */
	/* <e8c869> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:66 */
	virtual void SetValue(class CParameterValue *, const class CAnimVariant  &); /* linkage=_ZN15CParameterValue8SetValueERK12CAnimVariant */
	/* <e8ca74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:72 */
	void SetAnimParameterList(class CParameterValue *, const CAnimParameterListPtr  &); /* linkage=_ZN15CParameterValue20SetAnimParameterListERK9CSmartPtrI18CAnimParameterList17CRefCountAccessorE */
	/* <e8cd1a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:78 */
	class AnimParamID GetParamID(const class CParameterValue  *); /* linkage=_ZNK15CParameterValue10GetParamIDEv */
	virtual void ~CParameterValue(class CParameterValue *); /* linkage=_ZN15CParameterValueD4Ev */
	virtual inline void ~CParameterValue(class CParameterValue *); /* linkage=_ZN15CParameterValueD4Ev */
};

// <0044B06D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25
// function calls: 3
void CParameterValue::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 93
	Schema_VerifyBindingIsRegistered(void); // 25
	GetPrimaryBinding(void); // 25
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0044862F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00448629> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00448623> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0044860A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:25
inline void CParameterValue::Schema_DynamicBinding()
{
} /* size: 0 */

// <004485E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:26
inline void KV3TransferPolymorphicClassname(const CParameterValue* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <004485D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:26
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <0040622E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:30
void CParameterValue::CParameterValue()
{
} /* size: 0 */

// <00446619> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:53
inline void CActivityValues::operator=(const CActivityValues &)
{
} /* size: 0 */

// <004460CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:53
// variable: 1
// function calls: 25
void CActivityValues::~CActivityValues()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 53
	CUtlString::~CUtlString(); // 53
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CParameterValue>(CParameterValue* pObj); // 344
		CSmartPtr<CParameterValue, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 1798
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, this); // 53
} /* size: 219, inline expansions: 15 (589 bytes) */

// <00445A56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:53
// variable: 1
// function calls: 31
void CActivityValues::~CActivityValues()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 53
	CUtlString::~CUtlString(); // 53
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CParameterValue>(CParameterValue* pObj); // 344
		CSmartPtr<CParameterValue, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CParameterValue> >(CSmartPtr<CParameterValue, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 1798
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 560
	ValidateAlignment<CSmartPtr<CParameterValue> >(void); // 508
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccess this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, this); // 53
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 53
	CActivityValues::~CActivityValues(); // 53
} /* size: 214, inline expansions: 21 (725 bytes) */

// <00445A3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:53
inline void CActivityValues::~CActivityValues()
{
} /* size: 0 */

// <003E6E0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:53
// member functions: 61
// member variables: 5
// static member variable: 1
// vtable entries: 10
// class size: 72
class CActivityValues : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IActivityValues {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:56 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IActivityValues <ancestor>; */ /* 16 8 */
	void CActivityValues(CActivityValues* , CActivityValues& );
	void CActivityValues(CActivityValues* , const CActivityValues& );
	CActivityValues& operator=(CActivityValues* , CActivityValues& );
	CActivityValues& operator=(CActivityValues* , const CActivityValues& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55 */
	CActivityValues* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:159 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:188 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:131 */
	void Schema_CompileTimeVerificationFunction(CActivityValues* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CActivityValues* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:56 */
	void KV3TransferPolymorphicClassname(const CActivityValues* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:56 */
	CActivityValues* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:196 */
	virtual void KV3TransferSave(const CActivityValues* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:207 */
	virtual void KV3TransferLoad(CActivityValues* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:201 */
	void KV3TransferSave_CActivityValues(const CActivityValues* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:212 */
	void KV3TransferLoad_CActivityValues(CActivityValues* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:60 */
	void CActivityValues(CActivityValues* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:61 */
	void CActivityValues(CActivityValues* , const CUtlString& , const CAnimParameterListPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:65 */
	virtual const CUtlString& GetActivityName(const CActivityValues* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:68 */
	virtual int Count(const CActivityValues* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:71 */
	virtual IParameterValue* GetParamValue(CActivityValues* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:72 */
	virtual const IParameterValue* GetParamValue(const CActivityValues* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:75 */
	virtual IParameterValue* AddParamValue(CActivityValues* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:78 */
	virtual void RemoveParamValue(CActivityValues* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:79 */
	virtual void RemoveParamValue(CActivityValues* , IParameterValue* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:82 */
	void SetAnimParameterList(CActivityValues* , const CAnimParameterListPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:83 */
	CParameterValueConstPtr GetParamValueInternal(const CActivityValues* , int);
	CUtlVector<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int> > m_values; /* 24 32 */
	CUtlString m_activityName; /* 56 8 */
	CAnimParameterListPtr m_pParamList; /* 64 8 */
	virtual void ~CActivityValues(CActivityValues* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CActivityValues22Schema_StaticClassnameEv */
	void CActivityValues(class CActivityValues *, class CActivityValues &); /* linkage=_ZN15CActivityValuesC4EOS_ */
	void CActivityValues(class CActivityValues *, const class CActivityValues  &); /* linkage=_ZN15CActivityValuesC4ERKS_ */
	class CActivityValues & operator=(class CActivityValues *, class CActivityValues &); /* linkage=_ZN15CActivityValuesaSEOS_ */
	class CActivityValues & operator=(class CActivityValues *, const class CActivityValues  &); /* linkage=_ZN15CActivityValuesaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CActivityValues17GetPrimaryBindingEv */
	class CActivityValues * Schema_MarkHelperFn(void); /* linkage=_ZN15CActivityValues19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CActivityValues15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44cd8b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:188 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CActivityValues32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CActivityValues *); /* linkage=_ZN15CActivityValues38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CActivityValues20Schema_StaticBindingEv */
	/* <44b121> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CActivityValues  *); /* linkage=_ZNK15CActivityValues21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CActivityValues  *, char &); /* linkage=_ZN15CActivityValues31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CActivityValues * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CActivityValues32KV3TransferAllocateClassInstanceEPKc */
	/* <44d536> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:196 */
	virtual void KV3TransferSave(const class CActivityValues  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CActivityValues15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <4501f2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:207 */
	virtual void KV3TransferLoad(class CActivityValues *, class CKV3TransferLoadContext *); /* linkage=_ZN15CActivityValues15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CActivityValues(const class CActivityValues  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CActivityValues31KV3TransferSave_CActivityValuesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CActivityValues(class CActivityValues *, class CKV3TransferLoadContext *); /* linkage=_ZN15CActivityValues31KV3TransferLoad_CActivityValuesEP23CKV3TransferLoadContext */
	void CActivityValues(class CActivityValues *); /* linkage=_ZN15CActivityValuesC4Ev */
	void CActivityValues(class CActivityValues *, const class CUtlString  &, const CAnimParameterListPtr  &); /* linkage=_ZN15CActivityValuesC4ERK10CUtlStringRK9CSmartPtrI18CAnimParameterList17CRefCountAccessorE */
	/* <e89cd8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:100 */
	virtual const class CUtlString  & GetActivityName(const class CActivityValues  *); /* linkage=_ZNK15CActivityValues15GetActivityNameEv */
	/* <e89d01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:106 */
	virtual int Count(const class CActivityValues  *); /* linkage=_ZNK15CActivityValues5CountEv */
	/* <e8cd74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:112 */
	virtual class IParameterValue * GetParamValue(class CActivityValues *, int); /* linkage=_ZN15CActivityValues13GetParamValueEi */
	virtual const class IParameterValue  * GetParamValue(const class CActivityValues  *, int); /* linkage=_ZNK15CActivityValues13GetParamValueEi */
	virtual class IParameterValue * AddParamValue(class CActivityValues *); /* linkage=_ZN15CActivityValues13AddParamValueEv */
	/* <e8ce2f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:131 */
	virtual void RemoveParamValue(class CActivityValues *, int); /* linkage=_ZN15CActivityValues16RemoveParamValueEi */
	/* <e8d22c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:137 */
	virtual void RemoveParamValue(class CActivityValues *, class IParameterValue *); /* linkage=_ZN15CActivityValues16RemoveParamValueEP15IParameterValue */
	/* <e8d61f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:153 */
	void SetAnimParameterList(class CActivityValues *, const CAnimParameterListPtr  &); /* linkage=_ZN15CActivityValues20SetAnimParameterListERK9CSmartPtrI18CAnimParameterList17CRefCountAccessorE */
	/* <e8dc9c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:163 */
	CParameterValueConstPtr GetParamValueInternal(const class CActivityValues  *, int); /* linkage=_ZNK15CActivityValues21GetParamValueInternalEi */
	virtual void ~CActivityValues(class CActivityValues *); /* linkage=_ZN15CActivityValuesD4Ev */
	virtual inline void ~CActivityValues(class CActivityValues *); /* linkage=_ZN15CActivityValuesD4Ev */
};

// <0044B121> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55
// function calls: 3
void CActivityValues::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 188
	Schema_VerifyBindingIsRegistered(void); // 55
	GetPrimaryBinding(void); // 55
} /* size: 75, inline expansions: 3 (78 bytes) */

// <004485A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:55
inline void CActivityValues::Schema_DynamicBinding()
{
} /* size: 0 */

// <00448582> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:56
inline void KV3TransferPolymorphicClassname(const CActivityValues* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <004060FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:60
void CActivityValues::CActivityValues()
{
} /* size: 0 */

// <00442F15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:95
inline void CActivityValueList::operator=(const CActivityValueList &)
{
} /* size: 0 */

// <00442A06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:95
// variable: 1
// function calls: 24
void CActivityValueList::~CActivityValueList()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 95
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CActivityValues>(CActivityValues* pObj); // 344
		CSmartPtr<CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CActivityValues> >(CSmartPtr<CActivityValues, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 1798
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, this); // 95
} /* size: 203, inline expansions: 14 (584 bytes) */

// <004423CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:95
// variable: 1
// function calls: 30
void CActivityValueList::~CActivityValueList()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 95
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CActivityValues>(CActivityValues* pObj); // 344
		CSmartPtr<CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CActivityValues> >(CSmartPtr<CActivityValues, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 1798
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 560
	ValidateAlignment<CSmartPtr<CActivityValues> >(void); // 508
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, this); // 95
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 95
	CActivityValueList::~CActivityValueList(); // 95
} /* size: 198, inline expansions: 20 (704 bytes) */

// <004423AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:95
inline void CActivityValueList::~CActivityValueList()
{
} /* size: 0 */

// <003E8D44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:95
// member functions: 59
// member variables: 4
// static member variable: 1
// vtable entries: 10
// class size: 64
class CActivityValueList : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IActivityValueList {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:98 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IActivityValueList <ancestor>; */ /* 16 8 */
	void CActivityValueList(CActivityValueList* , CActivityValueList& );
	void CActivityValueList(CActivityValueList* , const CActivityValueList& );
	CActivityValueList& operator=(CActivityValueList* , CActivityValueList& );
	CActivityValueList& operator=(CActivityValueList* , const CActivityValueList& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97 */
	CActivityValueList* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:251 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:280 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:226 */
	void Schema_CompileTimeVerificationFunction(CActivityValueList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CActivityValueList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:98 */
	void KV3TransferPolymorphicClassname(const CActivityValueList* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:98 */
	CActivityValueList* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:288 */
	virtual void KV3TransferSave(const CActivityValueList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:298 */
	virtual void KV3TransferLoad(CActivityValueList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:293 */
	void KV3TransferSave_CActivityValueList(const CActivityValueList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:303 */
	void KV3TransferLoad_CActivityValueList(CActivityValueList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:102 */
	void CActivityValueList(CActivityValueList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:106 */
	virtual int Count(const CActivityValueList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:109 */
	virtual IActivityValues* GetActivityValues(CActivityValueList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:110 */
	virtual const IActivityValues* GetActivityValues(const CActivityValueList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:112 */
	virtual IActivityValues* GetActivityValues(CActivityValueList* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:113 */
	virtual const IActivityValues* GetActivityValues(const CActivityValueList* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:116 */
	virtual IActivityValues* AddActivity(CActivityValueList* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:119 */
	virtual void RemoveActivity(CActivityValueList* , IActivityValues* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:122 */
	CActivityValuesConstPtr GetActivityValuesInternal(const CActivityValueList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:123 */
	void SetAnimParameterList(CActivityValueList* , const CAnimParameterListPtr& );
	CUtlVector<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int> > m_activities; /* 24 32 */
	CAnimParameterListPtr m_pParamList; /* 56 8 */
	virtual void ~CActivityValueList(CActivityValueList* );
	void CActivityValueList(class CActivityValueList *, class CActivityValueList &); /* linkage=_ZN18CActivityValueListC4EOS_ */
	void CActivityValueList(class CActivityValueList *, const class CActivityValueList  &); /* linkage=_ZN18CActivityValueListC4ERKS_ */
	class CActivityValueList & operator=(class CActivityValueList *, class CActivityValueList &); /* linkage=_ZN18CActivityValueListaSEOS_ */
	class CActivityValueList & operator=(class CActivityValueList *, const class CActivityValueList  &); /* linkage=_ZN18CActivityValueListaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CActivityValueList17GetPrimaryBindingEv */
	class CActivityValueList * Schema_MarkHelperFn(void); /* linkage=_ZN18CActivityValueList19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CActivityValueList15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44cdd9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/activityparamvalues_h_schema.gen_cpp:280 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CActivityValueList32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CActivityValueList *); /* linkage=_ZN18CActivityValueList38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CActivityValueList20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CActivityValueList22Schema_StaticClassnameEv */
	/* <44b1d5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CActivityValueList  *); /* linkage=_ZNK18CActivityValueList21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CActivityValueList  *, char &); /* linkage=_ZN18CActivityValueList31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CActivityValueList * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CActivityValueList32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CActivityValueList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CActivityValueList15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CActivityValueList *, class CKV3TransferLoadContext *); /* linkage=_ZN18CActivityValueList15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CActivityValueList(const class CActivityValueList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CActivityValueList34KV3TransferSave_CActivityValueListEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CActivityValueList(class CActivityValueList *, class CKV3TransferLoadContext *); /* linkage=_ZN18CActivityValueList34KV3TransferLoad_CActivityValueListEP23CKV3TransferLoadContext */
	void CActivityValueList(class CActivityValueList *); /* linkage=_ZN18CActivityValueListC4Ev */
	/* <e89d5a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:178 */
	virtual int Count(const class CActivityValueList  *); /* linkage=_ZNK18CActivityValueList5CountEv */
	/* <e8e028> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:184 */
	virtual class IActivityValues * GetActivityValues(class CActivityValueList *, int); /* linkage=_ZN18CActivityValueList17GetActivityValuesEi */
	virtual const class IActivityValues  * GetActivityValues(const class CActivityValueList  *, int); /* linkage=_ZNK18CActivityValueList17GetActivityValuesEi */
	virtual class IActivityValues * GetActivityValues(class CActivityValueList *, const class CUtlString  &); /* linkage=_ZN18CActivityValueList17GetActivityValuesERK10CUtlString */
	virtual const class IActivityValues  * GetActivityValues(const class CActivityValueList  *, const class CUtlString  &); /* linkage=_ZNK18CActivityValueList17GetActivityValuesERK10CUtlString */
	virtual class IActivityValues * AddActivity(class CActivityValueList *, const class CUtlString  &); /* linkage=_ZN18CActivityValueList11AddActivityERK10CUtlString */
	virtual void RemoveActivity(class CActivityValueList *, class IActivityValues *); /* linkage=_ZN18CActivityValueList14RemoveActivityEP15IActivityValues */
	/* <e8e0e3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/activityparamvalues.cpp:247 */
	CActivityValuesConstPtr GetActivityValuesInternal(const class CActivityValueList  *, int); /* linkage=_ZNK18CActivityValueList25GetActivityValuesInternalEi */
	void SetAnimParameterList(class CActivityValueList *, const CAnimParameterListPtr  &); /* linkage=_ZN18CActivityValueList20SetAnimParameterListERK9CSmartPtrI18CAnimParameterList17CRefCountAccessorE */
	virtual void ~CActivityValueList(class CActivityValueList *); /* linkage=_ZN18CActivityValueListD4Ev */
	virtual inline void ~CActivityValueList(class CActivityValueList *); /* linkage=_ZN18CActivityValueListD4Ev */
};

// <0044B1D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97
// function calls: 3
void CActivityValueList::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 280
	Schema_VerifyBindingIsRegistered(void); // 97
	GetPrimaryBinding(void); // 97
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00448540> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:97
inline void CActivityValueList::Schema_DynamicBinding()
{
} /* size: 0 */

// <0044851D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:98
inline void KV3TransferPolymorphicClassname(const CActivityValueList* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <0040600A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/activityparamvalues.h:102
void CActivityValueList::CActivityValueList()
{
} /* size: 0 */


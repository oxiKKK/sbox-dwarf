
//
// animationsystem/animgraph/animinputdamping.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//	structs: 4
//

// <003FCDD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:10
// member functions: 2
// member variables: 3
// static member variable: 1
// struct size: 12
struct CDampedValue {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:12 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:14 */
	void CDampedValue(CDampedValue* , float, float);
	float m_flValue; /* 0 4 */
	float m_flVelocity; /* 4 4 */
	bool m_bUpdated; /* 8 1 */
};

// <003FCE59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:25
// member function: 1
// member variables: 3
// static member variable: 1
// struct size: 20
struct CDampedVector2 {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:27 */
	datamap_t* GetBaseMap(void);
	Vector2D m_vValue; /* 0 8 */
	Vector2D m_vVelocity; /* 8 8 */
	bool m_bUpdated; /* 16 1 */
};

// <003FCEB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:35
// member function: 1
// member variables: 3
// static member variable: 1
// struct size: 28
struct CDampedVector {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:37 */
	datamap_t* GetBaseMap(void);
	Vector m_vValue; /* 0 12 */
	Vector m_vVelocity; /* 12 12 */
	bool m_bUpdated; /* 24 1 */
};

// <003FCF0F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:45
// member function: 1
// member variables: 3
// static member variable: 1
// struct size: 48
struct CDampedVectorAligned {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:47 */
	datamap_t* GetBaseMap(void);
	VectorAligned m_vValue __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vVelocity __attribute__((__aligned__(16))); /* 16 16 */
	bool m_bUpdated; /* 32 1 */
} __attribute__((__aligned__(16)));

// <007587FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:55
inline void CAnimInputDamping::operator=(const CAnimInputDamping &)
{
} /* size: 0 */

// <003FCF70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:55
// member functions: 61
// member variables: 7
// static member variable: 1
// vtable entries: 3
// class size: 32
class CAnimInputDamping {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:58 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 1,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:58 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
	void ~CAnimInputDamping(CAnimInputDamping* );
	void CAnimInputDamping(CAnimInputDamping* , CAnimInputDamping& );
	void CAnimInputDamping(CAnimInputDamping* , const CAnimInputDamping& );
	CAnimInputDamping& operator=(CAnimInputDamping* , CAnimInputDamping& );
	CAnimInputDamping& operator=(CAnimInputDamping* , const CAnimInputDamping& );
	int ()(void) * * _vptr.CAnimInputDamping; /* 0 8 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57 */
	CAnimInputDamping* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:140 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:169 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimInputDamping* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimInputDamping* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:58 */
	void KV3TransferPolymorphicClassname(const CAnimInputDamping* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:58 */
	CAnimInputDamping* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:177 */
	virtual void KV3TransferSave(const CAnimInputDamping* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:192 */
	virtual void KV3TransferLoad(CAnimInputDamping* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:182 */
	void KV3TransferSave_CAnimInputDamping(const CAnimInputDamping* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:197 */
	void KV3TransferLoad_CAnimInputDamping(CAnimInputDamping* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:63 */
	void CAnimInputDamping(CAnimInputDamping* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:64 */
	void CAnimInputDamping(CAnimInputDamping* , DampingSpeedFunction, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:67 */
	float Update(const CAnimInputDamping* , CDampedValue& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:68 */
	Vector2D Update(const CAnimInputDamping* , CDampedVector2& , const Vector2D& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:69 */
	Vector Update(const CAnimInputDamping* , CDampedVector& , const Vector& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:70 */
	VectorAligned Update(const CAnimInputDamping* , CDampedVectorAligned& , const VectorAligned& , float);
	DampingSpeedFunction m_speedFunction; /* 8 4 */
	float m_fSpeedScale; /* 12 4 */
	float m_fMinSpeed; /* 16 4 */
	float m_fMaxTension; /* 20 4 */
	float m_fTension; /* 24 4 */
	float m_fDamping; /* 28 4 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:86 */
	PropertyChangeDirtyResult_t RefreshUICallback(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:91 */
	PropertyAttrState_t BouncySpringFilter(void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:105 */
	PropertyAttrState_t NoBouncySpringFilter(void* );
	void ~CAnimInputDamping(class CAnimInputDamping *); /* linkage=_ZN17CAnimInputDampingD4Ev */
	void CAnimInputDamping(class CAnimInputDamping *, class CAnimInputDamping &); /* linkage=_ZN17CAnimInputDampingC4EOS_ */
	void CAnimInputDamping(class CAnimInputDamping *, const class CAnimInputDamping  &); /* linkage=_ZN17CAnimInputDampingC4ERKS_ */
	class CAnimInputDamping & operator=(class CAnimInputDamping *, class CAnimInputDamping &); /* linkage=_ZN17CAnimInputDampingaSEOS_ */
	class CAnimInputDamping & operator=(class CAnimInputDamping *, const class CAnimInputDamping  &); /* linkage=_ZN17CAnimInputDampingaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CAnimInputDamping17GetPrimaryBindingEv */
	class CAnimInputDamping * Schema_MarkHelperFn(void); /* linkage=_ZN17CAnimInputDamping19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CAnimInputDamping15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44d235> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animinputdamping_h_schema.gen_cpp:169 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CAnimInputDamping32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimInputDamping *); /* linkage=_ZN17CAnimInputDamping38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CAnimInputDamping20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CAnimInputDamping22Schema_StaticClassnameEv */
	/* <44ad9d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimInputDamping  *); /* linkage=_ZNK17CAnimInputDamping21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimInputDamping  *, char &); /* linkage=_ZN17CAnimInputDamping31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimInputDamping * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CAnimInputDamping32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimInputDamping  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CAnimInputDamping15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimInputDamping *, class CKV3TransferLoadContext *); /* linkage=_ZN17CAnimInputDamping15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimInputDamping(const class CAnimInputDamping  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CAnimInputDamping33KV3TransferSave_CAnimInputDampingEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimInputDamping(class CAnimInputDamping *, class CKV3TransferLoadContext *); /* linkage=_ZN17CAnimInputDamping33KV3TransferLoad_CAnimInputDampingEP23CKV3TransferLoadContext */
	void CAnimInputDamping(class CAnimInputDamping *); /* linkage=_ZN17CAnimInputDampingC4Ev */
	void CAnimInputDamping(class CAnimInputDamping *, enum DampingSpeedFunction, float); /* linkage=_ZN17CAnimInputDampingC4E20DampingSpeedFunctionf */
	float Update(const class CAnimInputDamping  *, class CDampedValue &, float, float); /* linkage=_ZNK17CAnimInputDamping6UpdateER12CDampedValueff */
	class Vector2D Update(const class CAnimInputDamping  *, class CDampedVector2 &, const class Vector2D  &, float); /* linkage=_ZNK17CAnimInputDamping6UpdateER14CDampedVector2RK8Vector2Df */
	class Vector Update(const class CAnimInputDamping  *, class CDampedVector &, const class Vector  &, float); /* linkage=_ZNK17CAnimInputDamping6UpdateER13CDampedVectorRK6Vectorf */
	class VectorAligned Update(const class CAnimInputDamping  *, class CDampedVectorAligned &, const class VectorAligned  &, float); /* linkage=_ZNK17CAnimInputDamping6UpdateER20CDampedVectorAlignedRK13VectorAlignedf */
	enum PropertyChangeDirtyResult_t RefreshUICallback(void *); /* linkage=_ZN17CAnimInputDamping17RefreshUICallbackEPv */
	enum PropertyAttrState_t BouncySpringFilter(void *); /* linkage=_ZN17CAnimInputDamping18BouncySpringFilterEPv */
	enum PropertyAttrState_t NoBouncySpringFilter(void *); /* linkage=_ZN17CAnimInputDamping20NoBouncySpringFilterEPv */
	void KV3TransferLoad(void); /* linkage=_ZN17CAnimInputDamping15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave(void); /* linkage=_ZNK17CAnimInputDamping15KV3TransferSaveEP23CKV3TransferSaveContext */
	class VectorAligned Update<VectorAligned, CDampedVectorAligned>(const class CAnimInputDamping  *, class CDampedVectorAligned &, const class VectorAligned  &, float); /* linkage=_ZNK17CAnimInputDamping6UpdateI13VectorAligned20CDampedVectorAlignedEET_RT0_RKS3_f */
	class Vector Update<Vector, CDampedVector>(const class CAnimInputDamping  *, class CDampedVector &, const class Vector  &, float); /* linkage=_ZNK17CAnimInputDamping6UpdateI6Vector13CDampedVectorEET_RT0_RKS3_f */
	class Vector2D Update<Vector2D, CDampedVector2>(const class CAnimInputDamping  *, class CDampedVector2 &, const class Vector2D  &, float); /* linkage=_ZNK17CAnimInputDamping6UpdateI8Vector2D14CDampedVector2EET_RT0_RKS3_f */
};

// <00758971> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0075896B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <0044AD9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57
// function calls: 3
void CAnimInputDamping::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 169
	Schema_VerifyBindingIsRegistered(void); // 57
	GetPrimaryBinding(void); // 57
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00430156> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0043013D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:57
inline void CAnimInputDamping::Schema_DynamicBinding()
{
} /* size: 0 */

// <00758948> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:58
inline void KV3TransferPolymorphicClassname(const CAnimInputDamping* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00405F66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:63
void CAnimInputDamping::CAnimInputDamping()
{
} /* size: 0 */

// <0043010F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:86
void RefreshUICallback(void* pThis)
{
} /* size: 10 */

// <004300CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:91
// variable: 1
void BouncySpringFilter(void* pThis)
{
	CAnimInputDamping* pThisPtr; // 93
} /* size: 16, variables: 1 */

// <00430089> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animinputdamping.h:105
// variable: 1
void NoBouncySpringFilter(void* pThis)
{
	CAnimInputDamping* pThisPtr; // 107
} /* size: 16, variables: 1 */


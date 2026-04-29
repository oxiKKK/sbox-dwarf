
//
// public/modellib/footdefinition.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 8
//	classes: 3
//

// <0532823E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:14
inline void CFootDefinition::operator=(const CFootDefinition &)
{
} /* size: 0 */

// <0532821B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:14
void CFootDefinition::CFootDefinition()
{
} /* size: 0 */

// <053281FF> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:14
inline void CFootDefinition::CFootDefinition()
{
} /* size: 0 */

// <053281E8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:14
void CFootDefinition::~CFootDefinition()
{
} /* size: 0 */

// <053281CC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:14
inline void CFootDefinition::~CFootDefinition()
{
} /* size: 0 */

// <049D2D49> ../public/modellib/footdefinition.h:14
// member functions: 31
// member variables: 9
// static member variable: 1
// class size: 64
class CFootDefinition {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footdefinition.h:16 */
	CFootDefinition* Schema_MarkHelperFn(void);
	/* ../public/modellib/footdefinition.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footdefinition.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footdefinition.h:16 */
	void Schema_CompileTimeVerificationFunction(CFootDefinition* );
	/* ../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footdefinition.h:16 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootDefinition* );
	/* ../public/modellib/footdefinition.h:17 */
	CFootDefinition* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferSave(const CFootDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferLoad(CFootDefinition* , CKV3TransferLoadContext* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferSave_CFootDefinition(const CFootDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferLoad_CFootDefinition(CFootDefinition* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_ankleBoneName; /* 8 8 */
	CUtlString m_toeBoneName; /* 16 8 */
	Vector m_vBallOffset; /* 24 12 */
	Vector m_vHeelOffset; /* 36 12 */
	float m_flFootLength; /* 48 4 */
	float m_flBindPoseDirectionMS; /* 52 4 */
	float m_flTraceHeight; /* 56 4 */
	float m_flTraceRadius; /* 60 4 */
	void CFootDefinition(CFootDefinition* );
	void ~CFootDefinition(CFootDefinition* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootDefinition17GetPrimaryBindingEv */
	class CFootDefinition * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootDefinition19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootDefinition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5328802> ../_generated_code/modellib/linuxsteamrt64/release/footdefinition_h_schema.gen_cpp:112 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootDefinition32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootDefinition *); /* linkage=_ZN15CFootDefinition38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootDefinition20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootDefinition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootDefinition  *); /* linkage=_ZNK15CFootDefinition21Schema_DynamicBindingEv */
	class CFootDefinition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootDefinition32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootDefinition15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootDefinition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootDefinition(const class CFootDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootDefinition31KV3TransferSave_CFootDefinitionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootDefinition(class CFootDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootDefinition31KV3TransferLoad_CFootDefinitionEP23CKV3TransferLoadContext */
	void CFootDefinition(class CFootDefinition *); /* linkage=_ZN15CFootDefinitionC4Ev */
	void ~CFootDefinition(class CFootDefinition *); /* linkage=_ZN15CFootDefinitionD4Ev */
	class CFootDefinition & operator=(class CFootDefinition *, const class CFootDefinition  &); /* linkage=_ZN15CFootDefinitionaSERKS_ */
};

// <053225F3> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:14
// member functions: 32
// member variables: 9
// static member variable: 1
// class size: 64
class CFootDefinition {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	CFootDefinition* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	void Schema_CompileTimeVerificationFunction(CFootDefinition* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootDefinition* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:17 */
	CFootDefinition* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:17 */
	void KV3TransferSave(const CFootDefinition* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:17 */
	void KV3TransferLoad(CFootDefinition* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:17 */
	void KV3TransferSave_CFootDefinition(const CFootDefinition* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:17 */
	void KV3TransferLoad_CFootDefinition(CFootDefinition* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_ankleBoneName; /* 8 8 */
	CUtlString m_toeBoneName; /* 16 8 */
	Vector m_vBallOffset; /* 24 12 */
	Vector m_vHeelOffset; /* 36 12 */
	float m_flFootLength; /* 48 4 */
	float m_flBindPoseDirectionMS; /* 52 4 */
	float m_flTraceHeight; /* 56 4 */
	float m_flTraceRadius; /* 60 4 */
	void ~CFootDefinition(CFootDefinition* );
	void CFootDefinition(CFootDefinition* );
	CFootDefinition& operator=(CFootDefinition* , const CFootDefinition& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootDefinition17GetPrimaryBindingEv */
	class CFootDefinition * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootDefinition19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootDefinition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5328802> ../_generated_code/modellib/linuxsteamrt64/release/footdefinition_h_schema.gen_cpp:112 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootDefinition32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootDefinition *); /* linkage=_ZN15CFootDefinition38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootDefinition20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootDefinition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootDefinition  *); /* linkage=_ZNK15CFootDefinition21Schema_DynamicBindingEv */
	class CFootDefinition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootDefinition32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootDefinition15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootDefinition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootDefinition(const class CFootDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootDefinition31KV3TransferSave_CFootDefinitionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootDefinition(class CFootDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootDefinition31KV3TransferLoad_CFootDefinitionEP23CKV3TransferLoadContext */
	void CFootDefinition(class CFootDefinition *); /* linkage=_ZN15CFootDefinitionC4Ev */
	void ~CFootDefinition(class CFootDefinition *); /* linkage=_ZN15CFootDefinitionD4Ev */
	class CFootDefinition & operator=(class CFootDefinition *, const class CFootDefinition  &); /* linkage=_ZN15CFootDefinitionaSERKS_ */
};

// <00FCD179> ../public/modellib/footdefinition.h:14
// member functions: 30
// member variables: 9
// static member variable: 1
// class size: 64
class CFootDefinition {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footdefinition.h:16 */
	CFootDefinition* Schema_MarkHelperFn(void);
	/* ../public/modellib/footdefinition.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footdefinition.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footdefinition.h:16 */
	void Schema_CompileTimeVerificationFunction(CFootDefinition* );
	/* ../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footdefinition.h:16 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footdefinition.h:16 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootDefinition* );
	/* ../public/modellib/footdefinition.h:17 */
	CFootDefinition* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferSave(const CFootDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferLoad(CFootDefinition* , CKV3TransferLoadContext* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferSave_CFootDefinition(const CFootDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footdefinition.h:17 */
	void KV3TransferLoad_CFootDefinition(CFootDefinition* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_ankleBoneName; /* 8 8 */
	CUtlString m_toeBoneName; /* 16 8 */
	Vector m_vBallOffset; /* 24 12 */
	Vector m_vHeelOffset; /* 36 12 */
	float m_flFootLength; /* 48 4 */
	float m_flBindPoseDirectionMS; /* 52 4 */
	float m_flTraceHeight; /* 56 4 */
	float m_flTraceRadius; /* 60 4 */
	void ~CFootDefinition(CFootDefinition* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootDefinition17GetPrimaryBindingEv */
	class CFootDefinition * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootDefinition19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootDefinition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5328802> ../_generated_code/modellib/linuxsteamrt64/release/footdefinition_h_schema.gen_cpp:112 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootDefinition32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootDefinition *); /* linkage=_ZN15CFootDefinition38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootDefinition20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootDefinition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootDefinition  *); /* linkage=_ZNK15CFootDefinition21Schema_DynamicBindingEv */
	class CFootDefinition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootDefinition32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootDefinition15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootDefinition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootDefinition(const class CFootDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootDefinition31KV3TransferSave_CFootDefinitionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootDefinition(class CFootDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootDefinition31KV3TransferLoad_CFootDefinitionEP23CKV3TransferLoadContext */
	void CFootDefinition(class CFootDefinition *); /* linkage=_ZN15CFootDefinitionC4Ev */
	void ~CFootDefinition(class CFootDefinition *); /* linkage=_ZN15CFootDefinitionD4Ev */
	class CFootDefinition & operator=(class CFootDefinition *, const class CFootDefinition  &); /* linkage=_ZN15CFootDefinitionaSERKS_ */
};

// <053282B1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <053282AA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <05328291> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footdefinition.h:16
inline void CFootDefinition::Schema_DynamicBinding()
{
} /* size: 0 */


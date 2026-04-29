
//
// schemasystem/internalregistration.h
//
//	referenced by: libschemasystem.so
//
//	functions: 8
//	class: 1
//

// <0020EA8B> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:15
inline void CSchemaSystemInternalRegistration::operator=(const CSchemaSystemInternalRegistration &)
{
} /* size: 0 */

// <0020EA35> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:15
void CSchemaSystemInternalRegistration::CSchemaSystemInternalRegistration()
{
} /* size: 0 */

// <0020EA19> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:15
inline void CSchemaSystemInternalRegistration::CSchemaSystemInternalRegistration()
{
} /* size: 0 */

// <0020EA02> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:15
void CSchemaSystemInternalRegistration::~CSchemaSystemInternalRegistration()
{
} /* size: 0 */

// <0020E9E6> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:15
inline void CSchemaSystemInternalRegistration::~CSchemaSystemInternalRegistration()
{
} /* size: 0 */

// <0020D022> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:15
// member functions: 22
// member variables: 18
// static member variable: 1
// class size: 336
class CSchemaSystemInternalRegistration {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	CSchemaSystemInternalRegistration* Schema_MarkHelperFn(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	void Schema_CompileTimeVerificationFunction(CSchemaSystemInternalRegistration* );
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CSchemaSystemInternalRegistration* );
	Vector2D m_Vector2D; /* 0 8 */
	Vector m_Vector; /* 8 12 */
	VectorAligned m_VectorAligned __attribute__((__aligned__(16))); /* 32 16 */
	QAngle m_QAngle; /* 48 12 */
	RadianEuler m_RadianEuler; /* 60 12 */
	DegreeEuler m_DegreeEuler; /* 72 12 */
	Quaternion m_Quaternion; /* 84 16 */
	matrix3x4_t m_matrix3x4_t; /* 100 48 */
	matrix3x4a_t m_matrix3x4a_t __attribute__((__aligned__(16))); /* 160 48 */
	Color m_Color; /* 208 4 */
	Vector4D m_Vector4D; /* 212 16 */
	CTransform m_CTransform __attribute__((__aligned__(16))); /* 240 32 */
	KeyValues * m_pKeyValues; /* 272 8 */
	CUtlBinaryBlock m_CUtlBinaryBlock; /* 280 24 */
	CUtlString m_CUtlString; /* 304 8 */
	CUtlSymbol m_CUtlSymbol; /* 312 2 */
	CUtlStringToken m_stringToken; /* 316 4 */
	CResourceArray<CResourcePointer<CResourceString> > m_ResourceTypes; /* 320 8 */
	void ~CSchemaSystemInternalRegistration(CSchemaSystemInternalRegistration* );
	void CSchemaSystemInternalRegistration(CSchemaSystemInternalRegistration* );
	CSchemaSystemInternalRegistration& operator=(CSchemaSystemInternalRegistration* , const CSchemaSystemInternalRegistration& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN33CSchemaSystemInternalRegistration17GetPrimaryBindingEv */
	class CSchemaSystemInternalRegistration * Schema_MarkHelperFn(void); /* linkage=_ZN33CSchemaSystemInternalRegistration19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN33CSchemaSystemInternalRegistration15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <20f271> ../_generated_code/schemasystem/linuxsteamrt64/release/internalregistration_h_schema.gen_cpp:139 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN33CSchemaSystemInternalRegistration32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CSchemaSystemInternalRegistration *); /* linkage=_ZN33CSchemaSystemInternalRegistration38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN33CSchemaSystemInternalRegistration20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN33CSchemaSystemInternalRegistration22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CSchemaSystemInternalRegistration  *); /* linkage=_ZNK33CSchemaSystemInternalRegistration21Schema_DynamicBindingEv */
	void ~CSchemaSystemInternalRegistration(class CSchemaSystemInternalRegistration *); /* linkage=_ZN33CSchemaSystemInternalRegistrationD4Ev */
	void CSchemaSystemInternalRegistration(class CSchemaSystemInternalRegistration *); /* linkage=_ZN33CSchemaSystemInternalRegistrationC4Ev */
	class CSchemaSystemInternalRegistration & operator=(class CSchemaSystemInternalRegistration *, const class CSchemaSystemInternalRegistration  &); /* linkage=_ZN33CSchemaSystemInternalRegistrationaSERKS_ */
} __attribute__((__aligned__(16)));

// <0020EB1F> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0020EB19> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0020EB00> ../_generated_code/schemasystem/linuxsteamrt64/release/../../../../schemasystem/internalregistration.h:18
inline void CSchemaSystemInternalRegistration::Schema_DynamicBinding()
{
} /* size: 0 */


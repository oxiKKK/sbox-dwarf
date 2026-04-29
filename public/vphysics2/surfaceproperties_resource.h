
//
// public/vphysics2/surfaceproperties_resource.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 11
//	classes: 4
//

// <0096FB18> ../public/vphysics2/surfaceproperties_resource.h:19
// member functions: 26
// member variables: 5
// static member variable: 1
// class size: 20
class CPhysSurfacePropertiesPhysics {
	float m_friction; /* 0 4 */
	float m_elasticity; /* 4 4 */
	float m_density; /* 8 4 */
	float m_dampening; /* 12 4 */
	float m_bouncethreshold; /* 16 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	CPhysSurfacePropertiesPhysics* Schema_MarkHelperFn(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	void Schema_CompileTimeVerificationFunction(CPhysSurfacePropertiesPhysics* );
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:30 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CPhysSurfacePropertiesPhysics* );
	/* ../public/vphysics2/surfaceproperties_resource.h:31 */
	CPhysSurfacePropertiesPhysics* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferSave(const CPhysSurfacePropertiesPhysics* , CKV3TransferSaveContext* );
	/* ../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferLoad(CPhysSurfacePropertiesPhysics* , CKV3TransferLoadContext* );
	/* ../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferSave_CPhysSurfacePropertiesPhysics(const CPhysSurfacePropertiesPhysics* , CKV3TransferSaveContext* );
	/* ../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferLoad_CPhysSurfacePropertiesPhysics(CPhysSurfacePropertiesPhysics* , CKV3TransferLoadContext* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics17GetPrimaryBindingEv */
	class CPhysSurfacePropertiesPhysics * Schema_MarkHelperFn(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <51060b6> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:108 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics32Schema_VerifyBindingIsRegisteredEv */
	/* <510608b> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:34 */
	void Schema_CompileTimeVerificationFunction(class CPhysSurfacePropertiesPhysics *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPhysSurfacePropertiesPhysics  *); /* linkage=_ZNK29CPhysSurfacePropertiesPhysics21Schema_DynamicBindingEv */
	class CPhysSurfacePropertiesPhysics * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics32KV3TransferAllocateClassInstanceEPKc */
	/* <5106104> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:116 */
	void KV3TransferSave(const class CPhysSurfacePropertiesPhysics  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CPhysSurfacePropertiesPhysics15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <510615e> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:130 */
	void KV3TransferLoad(class CPhysSurfacePropertiesPhysics *, class CKV3TransferLoadContext *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPhysSurfacePropertiesPhysics(const class CPhysSurfacePropertiesPhysics  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CPhysSurfacePropertiesPhysics45KV3TransferSave_CPhysSurfacePropertiesPhysicsEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CPhysSurfacePropertiesPhysics(class CPhysSurfacePropertiesPhysics *, class CKV3TransferLoadContext *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics45KV3TransferLoad_CPhysSurfacePropertiesPhysicsEP23CKV3TransferLoadContext */
};

// <050FBFAB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:19
// member functions: 26
// member variables: 5
// static member variable: 1
// class size: 20
class CPhysSurfacePropertiesPhysics {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:31 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	float m_friction; /* 0 4 */
	float m_elasticity; /* 4 4 */
	float m_density; /* 8 4 */
	float m_dampening; /* 12 4 */
	float m_bouncethreshold; /* 16 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	CPhysSurfacePropertiesPhysics* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	void Schema_CompileTimeVerificationFunction(CPhysSurfacePropertiesPhysics* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CPhysSurfacePropertiesPhysics* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:31 */
	CPhysSurfacePropertiesPhysics* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferSave(const CPhysSurfacePropertiesPhysics* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferLoad(CPhysSurfacePropertiesPhysics* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferSave_CPhysSurfacePropertiesPhysics(const CPhysSurfacePropertiesPhysics* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:31 */
	void KV3TransferLoad_CPhysSurfacePropertiesPhysics(CPhysSurfacePropertiesPhysics* , CKV3TransferLoadContext* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics17GetPrimaryBindingEv */
	class CPhysSurfacePropertiesPhysics * Schema_MarkHelperFn(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <51060b6> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:108 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics32Schema_VerifyBindingIsRegisteredEv */
	/* <510608b> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:34 */
	void Schema_CompileTimeVerificationFunction(class CPhysSurfacePropertiesPhysics *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN29CPhysSurfacePropertiesPhysics22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPhysSurfacePropertiesPhysics  *); /* linkage=_ZNK29CPhysSurfacePropertiesPhysics21Schema_DynamicBindingEv */
	class CPhysSurfacePropertiesPhysics * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics32KV3TransferAllocateClassInstanceEPKc */
	/* <5106104> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:116 */
	void KV3TransferSave(const class CPhysSurfacePropertiesPhysics  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CPhysSurfacePropertiesPhysics15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <510615e> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:130 */
	void KV3TransferLoad(class CPhysSurfacePropertiesPhysics *, class CKV3TransferLoadContext *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPhysSurfacePropertiesPhysics(const class CPhysSurfacePropertiesPhysics  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CPhysSurfacePropertiesPhysics45KV3TransferSave_CPhysSurfacePropertiesPhysicsEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CPhysSurfacePropertiesPhysics(class CPhysSurfacePropertiesPhysics *, class CKV3TransferLoadContext *); /* linkage=_ZN29CPhysSurfacePropertiesPhysics45KV3TransferLoad_CPhysSurfacePropertiesPhysicsEP23CKV3TransferLoadContext */
};

// <0510598F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <05105989> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <05105970> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:30
inline void CPhysSurfacePropertiesPhysics::Schema_DynamicBinding()
{
} /* size: 0 */

// <051021B0> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:40
inline void CPhysSurfaceProperties::operator=(const CPhysSurfaceProperties &)
{
} /* size: 0 */

// <0510218D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:40
void CPhysSurfaceProperties::CPhysSurfaceProperties()
{
} /* size: 0 */

// <05102171> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:40
inline void CPhysSurfaceProperties::CPhysSurfaceProperties()
{
} /* size: 0 */

// <0510215A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:40
void CPhysSurfaceProperties::~CPhysSurfaceProperties()
{
} /* size: 0 */

// <0510213E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:40
inline void CPhysSurfaceProperties::~CPhysSurfaceProperties()
{
} /* size: 0 */

// <0096ECFC> ../public/vphysics2/surfaceproperties_resource.h:40
// member functions: 33
// member variables: 9
// static member variable: 1
// class size: 64
class CPhysSurfaceProperties {
	CUtlString m_name; /* 0 8 */
	uint32 m_nameHash; /* 8 4 */
	uint32 m_baseNameHash; /* 12 4 */
	int m_nIndex; /* 16 4 */
	int m_nBaseIndex; /* 20 4 */
	bool m_bHidden; /* 24 1 */
	CUtlString m_description; /* 32 8 */
	CPhysSurfacePropertiesPhysics m_physics; /* 40 20 */
	int m_AudioSurface; /* 60 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	CPhysSurfaceProperties* Schema_MarkHelperFn(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	void Schema_CompileTimeVerificationFunction(CPhysSurfaceProperties* );
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	const char* Schema_StaticClassname(void);
	/* ../public/vphysics2/surfaceproperties_resource.h:61 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CPhysSurfaceProperties* );
	/* ../public/vphysics2/surfaceproperties_resource.h:62 */
	CPhysSurfaceProperties* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferSave(const CPhysSurfaceProperties* , CKV3TransferSaveContext* );
	/* ../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferLoad(CPhysSurfaceProperties* , CKV3TransferLoadContext* );
	/* ../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferSave_CPhysSurfaceProperties(const CPhysSurfaceProperties* , CKV3TransferSaveContext* );
	/* ../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferLoad_CPhysSurfaceProperties(CPhysSurfaceProperties* , CKV3TransferLoadContext* );
	/* ../public/vphysics2/surfaceproperties_resource.h:65 */
	CUtlStringToken GetNameHash(const CPhysSurfaceProperties* );
	/* ../public/vphysics2/surfaceproperties_resource.h:72 */
	void UpdatePhysics(CPhysSurfaceProperties* , float, float, float, float, float);
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN22CPhysSurfaceProperties17GetPrimaryBindingEv */
	class CPhysSurfaceProperties * Schema_MarkHelperFn(void); /* linkage=_ZN22CPhysSurfaceProperties19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN22CPhysSurfaceProperties15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <51061b8> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:224 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN22CPhysSurfaceProperties32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CPhysSurfaceProperties *); /* linkage=_ZN22CPhysSurfaceProperties38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN22CPhysSurfaceProperties20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN22CPhysSurfaceProperties22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPhysSurfaceProperties  *); /* linkage=_ZNK22CPhysSurfaceProperties21Schema_DynamicBindingEv */
	class CPhysSurfaceProperties * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22CPhysSurfaceProperties32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CPhysSurfaceProperties  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CPhysSurfaceProperties15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CPhysSurfaceProperties *, class CKV3TransferLoadContext *); /* linkage=_ZN22CPhysSurfaceProperties15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPhysSurfaceProperties(const class CPhysSurfaceProperties  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CPhysSurfaceProperties38KV3TransferSave_CPhysSurfacePropertiesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CPhysSurfaceProperties(class CPhysSurfaceProperties *, class CKV3TransferLoadContext *); /* linkage=_ZN22CPhysSurfaceProperties38KV3TransferLoad_CPhysSurfacePropertiesEP23CKV3TransferLoadContext */
	class CUtlStringToken GetNameHash(const class CPhysSurfaceProperties  *); /* linkage=_ZNK22CPhysSurfaceProperties11GetNameHashEv */
	void UpdatePhysics(class CPhysSurfaceProperties *, float, float, float, float, float); /* linkage=_ZN22CPhysSurfaceProperties13UpdatePhysicsEfffff */
	void ~CPhysSurfaceProperties(class CPhysSurfaceProperties *); /* linkage=_ZN22CPhysSurfacePropertiesD4Ev */
	void CPhysSurfaceProperties(class CPhysSurfaceProperties *); /* linkage=_ZN22CPhysSurfacePropertiesC4Ev */
	class CPhysSurfaceProperties & operator=(class CPhysSurfaceProperties *, const class CPhysSurfaceProperties  &); /* linkage=_ZN22CPhysSurfacePropertiesaSERKS_ */
};

// <0101EDE3> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:40
// member functions: 36
// member variables: 9
// static member variable: 1
// class size: 64
class CPhysSurfaceProperties {
	CUtlString m_name; /* 0 8 */
	uint32 m_nameHash; /* 8 4 */
	uint32 m_baseNameHash; /* 12 4 */
	int m_nIndex; /* 16 4 */
	int m_nBaseIndex; /* 20 4 */
	bool m_bHidden; /* 24 1 */
	CUtlString m_description; /* 32 8 */
	CPhysSurfacePropertiesPhysics m_physics; /* 40 20 */
	int m_AudioSurface; /* 60 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	CPhysSurfaceProperties* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	void Schema_CompileTimeVerificationFunction(CPhysSurfaceProperties* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CPhysSurfaceProperties* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:62 */
	CPhysSurfaceProperties* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferSave(const CPhysSurfaceProperties* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferLoad(CPhysSurfaceProperties* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferSave_CPhysSurfaceProperties(const CPhysSurfaceProperties* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:62 */
	void KV3TransferLoad_CPhysSurfaceProperties(CPhysSurfaceProperties* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:65 */
	CUtlStringToken GetNameHash(const CPhysSurfaceProperties* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:72 */
	void UpdatePhysics(CPhysSurfaceProperties* , float, float, float, float, float);
	void ~CPhysSurfaceProperties(CPhysSurfaceProperties* );
	void CPhysSurfaceProperties(CPhysSurfaceProperties* );
	CPhysSurfaceProperties& operator=(CPhysSurfaceProperties* , const CPhysSurfaceProperties& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN22CPhysSurfaceProperties17GetPrimaryBindingEv */
	class CPhysSurfaceProperties * Schema_MarkHelperFn(void); /* linkage=_ZN22CPhysSurfaceProperties19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN22CPhysSurfaceProperties15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <51061b8> ../_generated_code/modellib/linuxsteamrt64/release/surfaceproperties_resource_h_schema.gen_cpp:224 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN22CPhysSurfaceProperties32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CPhysSurfaceProperties *); /* linkage=_ZN22CPhysSurfaceProperties38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN22CPhysSurfaceProperties20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN22CPhysSurfaceProperties22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPhysSurfaceProperties  *); /* linkage=_ZNK22CPhysSurfaceProperties21Schema_DynamicBindingEv */
	class CPhysSurfaceProperties * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22CPhysSurfaceProperties32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CPhysSurfaceProperties  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CPhysSurfaceProperties15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CPhysSurfaceProperties *, class CKV3TransferLoadContext *); /* linkage=_ZN22CPhysSurfaceProperties15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPhysSurfaceProperties(const class CPhysSurfaceProperties  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22CPhysSurfaceProperties38KV3TransferSave_CPhysSurfacePropertiesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CPhysSurfaceProperties(class CPhysSurfaceProperties *, class CKV3TransferLoadContext *); /* linkage=_ZN22CPhysSurfaceProperties38KV3TransferLoad_CPhysSurfacePropertiesEP23CKV3TransferLoadContext */
	class CUtlStringToken GetNameHash(const class CPhysSurfaceProperties  *); /* linkage=_ZNK22CPhysSurfaceProperties11GetNameHashEv */
	void UpdatePhysics(class CPhysSurfaceProperties *, float, float, float, float, float); /* linkage=_ZN22CPhysSurfaceProperties13UpdatePhysicsEfffff */
	void ~CPhysSurfaceProperties(class CPhysSurfaceProperties *); /* linkage=_ZN22CPhysSurfacePropertiesD4Ev */
	void CPhysSurfaceProperties(class CPhysSurfaceProperties *); /* linkage=_ZN22CPhysSurfacePropertiesC4Ev */
	class CPhysSurfaceProperties & operator=(class CPhysSurfaceProperties *, const class CPhysSurfaceProperties  &); /* linkage=_ZN22CPhysSurfacePropertiesaSERKS_ */
};

// <0510594B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/vphysics2/surfaceproperties_resource.h:61
inline void CPhysSurfaceProperties::Schema_DynamicBinding()
{
} /* size: 0 */

// <0187354C> ../public/vphysics2/surfaceproperties_resource.h:65
// variable: 1
inline void CPhysSurfaceProperties::GetNameHash()
{
	CUtlStringToken token; // 67
} /* size: 0, variables: 1 */

// <013378CB> ../public/vphysics2/surfaceproperties_resource.h:72
inline void CPhysSurfaceProperties::UpdatePhysics(float Friction, float Elasticity, float Density, float RollingResistance, float BounceThreshold)
{
} /* size: 0 */



//
// public/resourcefile/resourcemanifestfiledata.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   libschemasystem.so
//
//	functions: 4
//	structs: 6
//

// <023C79C9> ../public/resourcefile/resourcemanifestfiledata.h:20
// member variable: 1
// struct size: 8
struct ResourceManifestOld_t {
	CResourceArray<CResourceString> m_ResourceFileNameList; /* 0 8 */
};

// <023C79EB> ../public/resourcefile/resourcemanifestfiledata.h:28
// member variable: 1
// struct size: 8
struct ResourceManifestGroup_t {
	CResourceArray<CResourceString> m_Resources; /* 0 8 */
};

// <023C7D5F> ../public/resourcefile/resourcemanifestfiledata.h:33
// member variable: 1
// struct size: 8
struct ResourceManifestNew_t {
	CResourceArray<ResourceManifestGroup_t> m_ManifestGroups; /* 0 8 */
};

// <0008FE4C> ../public/resourcefile/resourcemanifestfiledata.h:47
// member variable: 1
// struct size: 4
struct HResourceManifest__ {
	int unused; /* 0 4 */
};

// <0679A70E> ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0679A708> ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0679A6EF> ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56
inline void InfoForResourceTypeCResourceManifestInternal::Schema_DynamicBinding()
{
} /* size: 0 */

// <023F94D2> ../public/resourcefile/resourcemanifestfiledata.h:56
inline void ResourceTypeName(void)
{
} /* size: 0 */

// <023C7DBD> ../public/resourcefile/resourcemanifestfiledata.h:56
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<474080965238> {
	/* ../public/resourcefile/resourcemanifestfiledata.h:56 */
	const char* RuntimeClassName(void);
	/* ../public/resourcefile/resourcemanifestfiledata.h:56 */
	const char* HandleName(void);
	/* ../public/resourcefile/resourcemanifestfiledata.h:56 */
	const char* ResourceTypeName(void);
};

// <0679A1BA> ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCResourceManifestInternal {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	InfoForResourceTypeCResourceManifestInternal* Schema_MarkHelperFn(void);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCResourceManifestInternal* );
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/resourcefile/linuxsteamrt64/release/../../../../public/resourcefile/resourcemanifestfiledata.h:56 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCResourceManifestInternal* );
	static const ResourceType_t RESOURCE_TYPE = 474080965238; /* 0 0 */
};


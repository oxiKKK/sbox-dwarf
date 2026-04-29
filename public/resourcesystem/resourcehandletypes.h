
//
// public/resourcesystem/resourcehandletypes.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 22
//	structs: 61
//

// <0432DD7E> ../public/resourcesystem/resourcehandletypes.h:15
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0432DD5F> ../public/resourcesystem/resourcehandletypes.h:15
inline void InfoForResourceTypeCGenericDataResource::Schema_DynamicBinding()
{
} /* size: 0 */

// <021BB164> ../public/resourcesystem/resourcehandletypes.h:15
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCGenericDataResource {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	InfoForResourceTypeCGenericDataResource* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCGenericDataResource* );
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCGenericDataResource* );
	static const ResourceType_t RESOURCE_TYPE = 418564367478; /* 0 0 */
};

// <021BB8E2> ../public/resourcesystem/resourcehandletypes.h:15
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCGenericDataResource> {
	static const ResourceType_t RESOURCE_TYPE = 418564367478; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	typedef struct CGenericDataResource RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <021BB921> ../public/resourcesystem/resourcehandletypes.h:15
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<418564367478> {
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	typedef struct CGenericDataResource RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:15 */
	typedef HGenericData HandleType_t;
};

// <05507A8A> ../public/resourcesystem/resourcehandletypes.h:20
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0432DD3A> ../public/resourcesystem/resourcehandletypes.h:20
inline void InfoForResourceTypeCAnimData::Schema_DynamicBinding()
{
} /* size: 0 */

// <03DD42BA> ../public/resourcesystem/resourcehandletypes.h:20
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCAnimData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	InfoForResourceTypeCAnimData* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCAnimData* );
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCAnimData* );
	static const ResourceType_t RESOURCE_TYPE = 469920276854; /* 0 0 */
};

// <03DD4A2A> ../public/resourcesystem/resourcehandletypes.h:20
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCAnimData> {
	static const ResourceType_t RESOURCE_TYPE = 469920276854; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	typedef struct CAnimData RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00AF2E0C> ../public/resourcesystem/resourcehandletypes.h:20
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<469920276854> {
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	typedef struct CAnimData RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:20 */
	typedef HAnimation_Internal HandleType_t;
};

// <0432DD15> ../public/resourcesystem/resourcehandletypes.h:25
inline void InfoForResourceTypeCAnimationGroup::Schema_DynamicBinding()
{
} /* size: 0 */

// <010508B2> ../public/resourcesystem/resourcehandletypes.h:25
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCAnimationGroup {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	InfoForResourceTypeCAnimationGroup* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCAnimationGroup* );
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCAnimationGroup* );
	static const ResourceType_t RESOURCE_TYPE = 482955714934; /* 0 0 */
};

// <0105102E> ../public/resourcesystem/resourcehandletypes.h:25
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCAnimationGroup> {
	static const ResourceType_t RESOURCE_TYPE = 482955714934; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	typedef struct CAnimationGroup RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00AF3F0D> ../public/resourcesystem/resourcehandletypes.h:25
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<482955714934> {
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	typedef struct CAnimationGroup RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:25 */
	typedef HAnimationGroup_Internal HandleType_t;
};

// <0432DCF0> ../public/resourcesystem/resourcehandletypes.h:30
inline void InfoForResourceTypeCSequenceGroupData::Schema_DynamicBinding()
{
} /* size: 0 */

// <017BC2AB> ../public/resourcesystem/resourcehandletypes.h:30
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCSequenceGroupData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	InfoForResourceTypeCSequenceGroupData* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCSequenceGroupData* );
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCSequenceGroupData* );
	static const ResourceType_t RESOURCE_TYPE = 1902474102; /* 0 0 */
};

// <017BCA11> ../public/resourcesystem/resourcehandletypes.h:30
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCSequenceGroupData> {
	static const ResourceType_t RESOURCE_TYPE = 1902474102; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	typedef struct CSequenceGroupData RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00AF503E> ../public/resourcesystem/resourcehandletypes.h:30
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<1902474102> {
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	typedef struct CSequenceGroupData RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:30 */
	typedef HSequenceGroup_Internal HandleType_t;
};

// <0432DCCB> ../public/resourcesystem/resourcehandletypes.h:35
inline void InfoForResourceTypeIMaterial2::Schema_DynamicBinding()
{
} /* size: 0 */

// <0003DBBE> ../public/resourcesystem/resourcehandletypes.h:35
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeIMaterial2 {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	InfoForResourceTypeIMaterial2* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeIMaterial2* );
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeIMaterial2* );
	static const ResourceType_t RESOURCE_TYPE = 1952542070; /* 0 0 */
};

// <0003E90F> ../public/resourcesystem/resourcehandletypes.h:35
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeIMaterial2> {
	static const ResourceType_t RESOURCE_TYPE = 1952542070; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	typedef struct IMaterial2 RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <0603700A> ../public/resourcesystem/resourcehandletypes.h:35
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<1952542070> {
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	typedef HMaterial HandleType_t;
};

// <000374B2> ../public/resourcesystem/resourcehandletypes.h:35
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeIMaterial2 {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	InfoForResourceTypeIMaterial2* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeIMaterial2* );
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeIMaterial2* );
	static const ResourceType_t RESOURCE_TYPE = 1952542070; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:35 */
	typedef struct IMaterial2 RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <0432DCA6> ../public/resourcesystem/resourcehandletypes.h:40
inline void InfoForResourceTypeCMorphSetData::Schema_DynamicBinding()
{
} /* size: 0 */

// <0432899A> ../public/resourcesystem/resourcehandletypes.h:40
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCMorphSetData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	InfoForResourceTypeCMorphSetData* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCMorphSetData* );
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCMorphSetData* );
	static const ResourceType_t RESOURCE_TYPE = 440006569334; /* 0 0 */
};

// <04C62128> ../public/resourcesystem/resourcehandletypes.h:40
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCMorphSetData> {
	static const ResourceType_t RESOURCE_TYPE = 440006569334; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	typedef struct CMorphSetData RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <004390A6> ../public/resourcesystem/resourcehandletypes.h:40
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<440006569334> {
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	typedef struct CMorphSetData RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:40 */
	typedef HMorphSet_Internal HandleType_t;
};

// <0432DC81> ../public/resourcesystem/resourcehandletypes.h:45
inline void InfoForResourceTypeCRenderMesh::Schema_DynamicBinding()
{
} /* size: 0 */

// <00F6FA14> ../public/resourcesystem/resourcehandletypes.h:45
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCRenderMesh {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	InfoForResourceTypeCRenderMesh* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCRenderMesh* );
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCRenderMesh* );
	static const ResourceType_t RESOURCE_TYPE = 448612625782; /* 0 0 */
};

// <00F70191> ../public/resourcesystem/resourcehandletypes.h:45
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCRenderMesh> {
	static const ResourceType_t RESOURCE_TYPE = 448612625782; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	typedef struct CRenderMesh RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <000B8CF3> ../public/resourcesystem/resourcehandletypes.h:45
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<448612625782> {
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:45 */
	typedef HRenderMesh_Internal HandleType_t;
};

// <0432DC5C> ../public/resourcesystem/resourcehandletypes.h:50
inline void InfoForResourceTypeCModel::Schema_DynamicBinding()
{
} /* size: 0 */

// <000912AB> ../public/resourcesystem/resourcehandletypes.h:50
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCModel {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	InfoForResourceTypeCModel* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCModel* );
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCModel* );
	static const ResourceType_t RESOURCE_TYPE = 1818520950; /* 0 0 */
};

// <0009204D> ../public/resourcesystem/resourcehandletypes.h:50
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCModel> {
	static const ResourceType_t RESOURCE_TYPE = 1818520950; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	typedef struct CModel RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <000B9E2F> ../public/resourcesystem/resourcehandletypes.h:50
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<1818520950> {
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	typedef struct CModel RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:50 */
	typedef HModel HandleType_t;
};

// <0432DC37> ../public/resourcesystem/resourcehandletypes.h:55
inline void InfoForResourceTypeCTextureBase::Schema_DynamicBinding()
{
} /* size: 0 */

// <0003E94A> ../public/resourcesystem/resourcehandletypes.h:55
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCTextureBase {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	InfoForResourceTypeCTextureBase* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCTextureBase* );
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCTextureBase* );
	static const ResourceType_t RESOURCE_TYPE = 2019914870; /* 0 0 */
};

// <0003F696> ../public/resourcesystem/resourcehandletypes.h:55
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCTextureBase> {
	static const ResourceType_t RESOURCE_TYPE = 2019914870; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	typedef struct CTextureBase RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <007B1CE7> ../public/resourcesystem/resourcehandletypes.h:55
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<2019914870> {
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:55 */
	typedef HRenderTexture HandleType_t;
};

// <001E34D0> ../../public/resourcesystem/resourcehandletypes.h:55
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCTextureBase {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	InfoForResourceTypeCTextureBase* Schema_MarkHelperFn(void);
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCTextureBase* );
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	const char* Schema_StaticClassname(void);
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCTextureBase* );
	static const ResourceType_t RESOURCE_TYPE = 2019914870; /* 0 0 */
};

// <001E421E> ../../public/resourcesystem/resourcehandletypes.h:55
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCTextureBase> {
	static const ResourceType_t RESOURCE_TYPE = 2019914870; /* 0 0 */
	/* ../../public/resourcesystem/resourcehandletypes.h:55 */
	typedef struct CTextureBase RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <0432DC12> ../public/resourcesystem/resourcehandletypes.h:60
inline void InfoForResourceTypeVSound_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <026A39F2> ../public/resourcesystem/resourcehandletypes.h:60
inline void ResourceTypeName(void)
{
} /* size: 0 */

// <005E020C> ../public/resourcesystem/resourcehandletypes.h:60
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeVSound_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	InfoForResourceTypeVSound_t* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeVSound_t* );
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeVSound_t* );
	static const ResourceType_t RESOURCE_TYPE = 1684960118; /* 0 0 */
};

// <005E0945> ../public/resourcesystem/resourcehandletypes.h:60
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeVSound_t> {
	static const ResourceType_t RESOURCE_TYPE = 1684960118; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	typedef struct VSound_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <005E0980> ../public/resourcesystem/resourcehandletypes.h:60
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<1684960118> {
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:60 */
	typedef HSound HandleType_t;
};

// <0432DBED> ../public/resourcesystem/resourcehandletypes.h:65
inline void InfoForResourceTypeCPhysAggregateData::Schema_DynamicBinding()
{
} /* size: 0 */

// <009210C6> ../public/resourcesystem/resourcehandletypes.h:65
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCPhysAggregateData {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	InfoForResourceTypeCPhysAggregateData* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCPhysAggregateData* );
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCPhysAggregateData* );
	static const ResourceType_t RESOURCE_TYPE = 495958126710; /* 0 0 */
};

// <00921B97> ../public/resourcesystem/resourcehandletypes.h:65
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCPhysAggregateData> {
	static const ResourceType_t RESOURCE_TYPE = 495958126710; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	typedef struct CPhysAggregateData RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00921BD6> ../public/resourcesystem/resourcehandletypes.h:65
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<495958126710> {
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	typedef struct CPhysAggregateData RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:65 */
	typedef HPhysAggregateData_Internal HandleType_t;
};

// <0432DBC8> ../public/resourcesystem/resourcehandletypes.h:70
inline void InfoForResourceTypeCEntityLump::Schema_DynamicBinding()
{
} /* size: 0 */

// <00E1057A> ../public/resourcesystem/resourcehandletypes.h:70
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCEntityLump {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	InfoForResourceTypeCEntityLump* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCEntityLump* );
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCEntityLump* );
	static const ResourceType_t RESOURCE_TYPE = 495874631030; /* 0 0 */
};

// <00E116BF> ../public/resourcesystem/resourcehandletypes.h:70
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCEntityLump> {
	static const ResourceType_t RESOURCE_TYPE = 495874631030; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	typedef struct CEntityLump RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00E116FE> ../public/resourcesystem/resourcehandletypes.h:70
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<495874631030> {
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	typedef struct CEntityLump RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:70 */
	typedef HEntityLump HandleType_t;
};

// <0432DBA3> ../public/resourcesystem/resourcehandletypes.h:75
inline void InfoForResourceTypeCWorldNode::Schema_DynamicBinding()
{
} /* size: 0 */

// <00F730CE> ../public/resourcesystem/resourcehandletypes.h:75
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCWorldNode {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	InfoForResourceTypeCWorldNode* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCWorldNode* );
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCWorldNode* );
	static const ResourceType_t RESOURCE_TYPE = 431366240118; /* 0 0 */
};

// <00F7423D> ../public/resourcesystem/resourcehandletypes.h:75
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCWorldNode> {
	static const ResourceType_t RESOURCE_TYPE = 431366240118; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	typedef struct CWorldNode RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00F7427C> ../public/resourcesystem/resourcehandletypes.h:75
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<431366240118> {
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:75 */
	typedef HWorldNode HandleType_t;
};

// <0432DB7E> ../public/resourcesystem/resourcehandletypes.h:80
inline void InfoForResourceTypeWorld_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00EB4675> ../public/resourcesystem/resourcehandletypes.h:80
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeWorld_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	InfoForResourceTypeWorld_t* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeWorld_t* );
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeWorld_t* );
	static const ResourceType_t RESOURCE_TYPE = 431316170614; /* 0 0 */
};

// <00EB55A7> ../public/resourcesystem/resourcehandletypes.h:80
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeWorld_t> {
	static const ResourceType_t RESOURCE_TYPE = 431316170614; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	typedef struct World_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00EB55E6> ../public/resourcesystem/resourcehandletypes.h:80
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<431316170614> {
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:80 */
	typedef HWorld HandleType_t;
};

// <0432DB59> ../public/resourcesystem/resourcehandletypes.h:85
inline void InfoForResourceTypeCVoxelVisibility::Schema_DynamicBinding()
{
} /* size: 0 */

// <00EB5648> ../public/resourcesystem/resourcehandletypes.h:85
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCVoxelVisibility {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	InfoForResourceTypeCVoxelVisibility* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCVoxelVisibility* );
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCVoxelVisibility* );
	static const ResourceType_t RESOURCE_TYPE = 1936291446; /* 0 0 */
};

// <00EB67A1> ../public/resourcesystem/resourcehandletypes.h:85
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCVoxelVisibility> {
	static const ResourceType_t RESOURCE_TYPE = 1936291446; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	typedef struct CVoxelVisibility RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00EB67DC> ../public/resourcesystem/resourcehandletypes.h:85
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<1936291446> {
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:85 */
	typedef HWorldVis HandleType_t;
};

// <0432DB34> ../public/resourcesystem/resourcehandletypes.h:90
inline void InfoForResourceTypeCPostProcessingResource::Schema_DynamicBinding()
{
} /* size: 0 */

// <00093035> ../public/resourcesystem/resourcehandletypes.h:90
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<500152889462> {
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	const char* ResourceTypeName(void);
};

// <043293E4> ../public/resourcesystem/resourcehandletypes.h:90
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCPostProcessingResource {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	InfoForResourceTypeCPostProcessingResource* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCPostProcessingResource* );
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:90 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCPostProcessingResource* );
	static const ResourceType_t RESOURCE_TYPE = 500152889462; /* 0 0 */
};

// <0432DB0F> ../public/resourcesystem/resourcehandletypes.h:95
inline void InfoForResourceTypeIAnimationGraph::Schema_DynamicBinding()
{
} /* size: 0 */

// <0009308B> ../public/resourcesystem/resourcehandletypes.h:95
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeIAnimationGraph {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	InfoForResourceTypeIAnimationGraph* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeIAnimationGraph* );
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeIAnimationGraph* );
	static const ResourceType_t RESOURCE_TYPE = 7525640765879247222; /* 0 0 */
};

// <00093776> ../public/resourcesystem/resourcehandletypes.h:95
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph> {
	static const ResourceType_t RESOURCE_TYPE = 7525640765879247222; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	typedef struct IAnimationGraph RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <01153488> ../public/resourcesystem/resourcehandletypes.h:95
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<7525640765879247222> {
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	typedef HAnimationGraph HandleType_t;
};

// <00AF7320> ../public/resourcesystem/resourcehandletypes.h:95
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<7525640765879247222> {
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	typedef struct IAnimationGraph RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:95 */
	typedef HAnimationGraph HandleType_t;
};

// <0432DAEA> ../public/resourcesystem/resourcehandletypes.h:100
inline void InfoForResourceTypeIAnimationSubGraph::Schema_DynamicBinding()
{
} /* size: 0 */

// <043295F6> ../public/resourcesystem/resourcehandletypes.h:100
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeIAnimationSubGraph {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	InfoForResourceTypeIAnimationSubGraph* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeIAnimationSubGraph* );
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeIAnimationSubGraph* );
	static const ResourceType_t RESOURCE_TYPE = 7525640765695161206; /* 0 0 */
};

// <00AF7A7E> ../public/resourcesystem/resourcehandletypes.h:100
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeIAnimationSubGraph> {
	static const ResourceType_t RESOURCE_TYPE = 7525640765695161206; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	typedef struct IAnimationSubGraph RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <00AF7ABD> ../public/resourcesystem/resourcehandletypes.h:100
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<7525640765695161206> {
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	typedef struct IAnimationSubGraph RuntimeClass_t;
	/* ../public/resourcesystem/resourcehandletypes.h:100 */
	typedef HAnimationSubGraph HandleType_t;
};

// <0432DAC5> ../public/resourcesystem/resourcehandletypes.h:105
inline void InfoForResourceTypeCVfx::Schema_DynamicBinding()
{
} /* size: 0 */

// <011534F2> ../public/resourcesystem/resourcehandletypes.h:105
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCVfx {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	InfoForResourceTypeCVfx* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCVfx* );
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCVfx* );
	static const ResourceType_t RESOURCE_TYPE = 125779801368691; /* 0 0 */
};

// <01154CCA> ../public/resourcesystem/resourcehandletypes.h:105
// static member variable: 1
// struct size: 1
struct ResourceHandleInfo_t<InfoForResourceTypeCVfx> {
	static const ResourceType_t RESOURCE_TYPE = 125779801368691; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	typedef struct CVfx RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
};

// <01154D0C> ../public/resourcesystem/resourcehandletypes.h:105
// member functions: 3
// struct size: 1
struct ResourceTypeInfo_t<125779801368691> {
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const char* RuntimeClassName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const char* HandleName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const char* ResourceTypeName(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	typedef HShader HandleType_t;
};

// <000389CF> ../public/resourcesystem/resourcehandletypes.h:105
// member functions: 8
// static member variables: 2
// struct size: 1
struct InfoForResourceTypeCVfx {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	InfoForResourceTypeCVfx* Schema_MarkHelperFn(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	void Schema_CompileTimeVerificationFunction(InfoForResourceTypeCVfx* );
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const char* Schema_StaticClassname(void);
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoForResourceTypeCVfx* );
	static const ResourceType_t RESOURCE_TYPE = 125779801368691; /* 0 0 */
	/* ../public/resourcesystem/resourcehandletypes.h:105 */
	typedef struct CVfx RuntimeClass_t;
};


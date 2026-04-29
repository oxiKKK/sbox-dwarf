
//
// public/worldrenderer/worldnodeschema.h
//
//	referenced by: libengine2.so
//
//	functions: 61
//	class: 1
//	structs: 27
//

// <0427AB66> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:43
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0420E1A9> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:43
// member functions: 2
// class size: 1
class CSchemaTypeOf<ObjectTypeFlags_t> {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:43 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:43 */
	const char* GetEnumName(void);
};

// <04284CE0> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:47
// function calls: 12
void SceneObject_t::operator=(const SceneObject_t &)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 47
	Vector4D::operator=(
			const Vector4D& vOther);  // 47
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 47
	Vector::operator=(
			const Vector& vOther);  // 47
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CStrongHandle<InfoForResourceTypeCModel>& src);  // 47
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
		const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 666
	CStrongHandle<InfoForResourceTypeCRenderMesh>::operator=(
			const CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 47
} /* size: 518, inline expansions: 12 (438 bytes) */

// <0427A886> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:47
inline void SceneObject_t::operator=(const SceneObject_t &)
{
} /* size: 0 */

// <0427A86F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:47
void SceneObject_t::~SceneObject_t()
{
} /* size: 0 */

// <0427A853> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:47
inline void SceneObject_t::~SceneObject_t()
{
} /* size: 0 */

// <00FD2954> ../public/worldrenderer/worldnodeschema.h:47
// member functions: 16
// member variables: 20
// static member variable: 1
// struct size: 160
struct SceneObject_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	SceneObject_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	void Schema_CompileTimeVerificationFunction(SceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	SceneObject_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferSave(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferLoad(SceneObject_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferSave_SceneObject_t(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferLoad_SceneObject_t(SceneObject_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:55 */
	void SceneObject_t(SceneObject_t* );
	uint32 m_nObjectID; /* 0 4 */
	Vector4D m_vTransform[3]; /* 4 48 */
	float32 m_flFadeStartDistance; /* 52 4 */
	float32 m_flFadeEndDistance; /* 56 4 */
	Vector4D m_vTintColor; /* 60 16 */
	CUtlString m_skin; /* 80 8 */
	ObjectTypeFlags_t m_nObjectTypeFlags; /* 88 4 */
	Vector m_vLightingOrigin; /* 92 12 */
	uint32 m_nLightGroup; /* 104 4 */
	int16 m_nOverlayRenderOrder; /* 108 2 */
	int16 m_nLODOverride; /* 110 2 */
	int32 m_nCubeMapPrecomputedHandshake; /* 112 4 */
	int32 m_nLightProbeVolumePrecomputedHandshake; /* 116 4 */
	int16 m_nBoundsGroupIndex; /* 120 2 */
	MeshGroupMask_t m_meshGroupMask; /* 128 8 */
	int16 _padding; /* 136 2 */
	int32 m_nVisClusterMembersOffset:24; /* 140: 0 4 */
	int32 m_nVisClusterMembersCount:8; /* 140:24 4 */
	HModelStrong m_renderableModel; /* 144 8 */
	HRenderMesh_InternalStrong m_renderable; /* 152 8 */
protected:
	/* ../public/worldrenderer/worldnodeschema.h:89 */
	void KV3TransferPostSaveFn(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:90 */
	void KV3TransferPostLoadFn(SceneObject_t* , CKV3TransferLoadContext* );
};

// <01079406> ../public/worldrenderer/worldnodeschema.h:47
// member functions: 17
// member variables: 20
// static member variable: 1
// struct size: 160
struct SceneObject_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	SceneObject_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	void Schema_CompileTimeVerificationFunction(SceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	SceneObject_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferSave(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferLoad(SceneObject_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferSave_SceneObject_t(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferLoad_SceneObject_t(SceneObject_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:55 */
	void SceneObject_t(SceneObject_t* );
	uint32 m_nObjectID; /* 0 4 */
	Vector4D m_vTransform[3]; /* 4 48 */
	float32 m_flFadeStartDistance; /* 52 4 */
	float32 m_flFadeEndDistance; /* 56 4 */
	Vector4D m_vTintColor; /* 60 16 */
	CUtlString m_skin; /* 80 8 */
	ObjectTypeFlags_t m_nObjectTypeFlags; /* 88 4 */
	Vector m_vLightingOrigin; /* 92 12 */
	uint32 m_nLightGroup; /* 104 4 */
	int16 m_nOverlayRenderOrder; /* 108 2 */
	int16 m_nLODOverride; /* 110 2 */
	int32 m_nCubeMapPrecomputedHandshake; /* 112 4 */
	int32 m_nLightProbeVolumePrecomputedHandshake; /* 116 4 */
	int16 m_nBoundsGroupIndex; /* 120 2 */
	MeshGroupMask_t m_meshGroupMask; /* 128 8 */
	int16 _padding; /* 136 2 */
	int32 m_nVisClusterMembersOffset:24; /* 140: 0 4 */
	int32 m_nVisClusterMembersCount:8; /* 140:24 4 */
	HModelStrong m_renderableModel; /* 144 8 */
	HRenderMesh_InternalStrong m_renderable; /* 152 8 */
protected:
	/* ../public/worldrenderer/worldnodeschema.h:89 */
	void KV3TransferPostSaveFn(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:90 */
	void KV3TransferPostLoadFn(SceneObject_t* , CKV3TransferLoadContext* );
	void ~SceneObject_t(SceneObject_t* );
};

// <0420E1EC> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:47
// member functions: 18
// member variables: 20
// static member variable: 1
// struct size: 160
struct SceneObject_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:50 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	SceneObject_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	void Schema_CompileTimeVerificationFunction(SceneObject_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49 */
	const CSchemaClassInfo* Schema_DynamicBinding(const SceneObject_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:50 */
	SceneObject_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferSave(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferLoad(SceneObject_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferSave_SceneObject_t(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:50 */
	void KV3TransferLoad_SceneObject_t(SceneObject_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:55 */
	void SceneObject_t(SceneObject_t* );
	uint32 m_nObjectID; /* 0 4 */
	Vector4D m_vTransform[3]; /* 4 48 */
	float32 m_flFadeStartDistance; /* 52 4 */
	float32 m_flFadeEndDistance; /* 56 4 */
	Vector4D m_vTintColor; /* 60 16 */
	CUtlString m_skin; /* 80 8 */
	ObjectTypeFlags_t m_nObjectTypeFlags; /* 88 4 */
	Vector m_vLightingOrigin; /* 92 12 */
	uint32 m_nLightGroup; /* 104 4 */
	int16 m_nOverlayRenderOrder; /* 108 2 */
	int16 m_nLODOverride; /* 110 2 */
	int32 m_nCubeMapPrecomputedHandshake; /* 112 4 */
	int32 m_nLightProbeVolumePrecomputedHandshake; /* 116 4 */
	int16 m_nBoundsGroupIndex; /* 120 2 */
	MeshGroupMask_t m_meshGroupMask; /* 128 8 */
	int16 _padding; /* 136 2 */
	int32 m_nVisClusterMembersOffset:24; /* 140: 0 4 */
	int32 m_nVisClusterMembersCount:8; /* 140:24 4 */
	HModelStrong m_renderableModel; /* 144 8 */
	HRenderMesh_InternalStrong m_renderable; /* 152 8 */
protected:
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:89 */
	void KV3TransferPostSaveFn(const SceneObject_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:90 */
	void KV3TransferPostLoadFn(SceneObject_t* , CKV3TransferLoadContext* );
	void ~SceneObject_t(SceneObject_t* );
	SceneObject_t& operator=(SceneObject_t* , const SceneObject_t& );
};

// <0427AB35> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0427AB16> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:49
inline void SceneObject_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0427AAFF> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:55
void SceneObject_t::SceneObject_t()
{
} /* size: 0 */

// <0427AAE6> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:55
inline void SceneObject_t::SceneObject_t()
{
} /* size: 0 */

// <042727AF> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:94
void BaseSceneObjectOverride_t::BaseSceneObjectOverride_t()
{
} /* size: 0 */

// <04272793> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:94
inline void BaseSceneObjectOverride_t::BaseSceneObjectOverride_t()
{
} /* size: 0 */

// <00FD420E> ../public/worldrenderer/worldnodeschema.h:94
// member functions: 13
// member variable: 1
// static member variable: 1
// struct size: 4
struct BaseSceneObjectOverride_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	BaseSceneObjectOverride_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	void Schema_CompileTimeVerificationFunction(BaseSceneObjectOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:96 */
	const CSchemaClassInfo* Schema_DynamicBinding(const BaseSceneObjectOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:97 */
	BaseSceneObjectOverride_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferSave(const BaseSceneObjectOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferLoad(BaseSceneObjectOverride_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferSave_BaseSceneObjectOverride_t(const BaseSceneObjectOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferLoad_BaseSceneObjectOverride_t(BaseSceneObjectOverride_t* , CKV3TransferLoadContext* );
	uint32 m_nSceneObjectIndex; /* 0 4 */
};

// <0420E604> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:94
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 4
struct BaseSceneObjectOverride_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	BaseSceneObjectOverride_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	void Schema_CompileTimeVerificationFunction(BaseSceneObjectOverride_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96 */
	const CSchemaClassInfo* Schema_DynamicBinding(const BaseSceneObjectOverride_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:97 */
	BaseSceneObjectOverride_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferSave(const BaseSceneObjectOverride_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferLoad(BaseSceneObjectOverride_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferSave_BaseSceneObjectOverride_t(const BaseSceneObjectOverride_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:97 */
	void KV3TransferLoad_BaseSceneObjectOverride_t(BaseSceneObjectOverride_t* , CKV3TransferLoadContext* );
	uint32 m_nSceneObjectIndex; /* 0 4 */
	void BaseSceneObjectOverride_t(BaseSceneObjectOverride_t* );
};

// <0427AAC1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:96
inline void BaseSceneObjectOverride_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04271F19> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:103
void ExtraVertexStreamOverride_t::ExtraVertexStreamOverride_t()
{
} /* size: 0 */

// <04271EFD> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:103
inline void ExtraVertexStreamOverride_t::ExtraVertexStreamOverride_t()
{
} /* size: 0 */

// <00FD3DE8> ../public/worldrenderer/worldnodeschema.h:103
// member functions: 13
// member variables: 5
// static member variable: 1
// struct size: 32
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t {
public:
	/* struct BaseSceneObjectOverride_t <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	ExtraVertexStreamOverride_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	void Schema_CompileTimeVerificationFunction(ExtraVertexStreamOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:105 */
	const CSchemaClassInfo* Schema_DynamicBinding(const ExtraVertexStreamOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:106 */
	ExtraVertexStreamOverride_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferSave(const ExtraVertexStreamOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferLoad(ExtraVertexStreamOverride_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferSave_ExtraVertexStreamOverride_t(const ExtraVertexStreamOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferLoad_ExtraVertexStreamOverride_t(ExtraVertexStreamOverride_t* , CKV3TransferLoadContext* );
	uint32 m_nSubSceneObject; /* 4 4 */
	uint32 m_nDrawCallIndex; /* 8 4 */
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; /* 12 4 */
	CRenderBufferBinding m_extraBufferBinding; /* 16 16 */
};

// <0420E7C2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:103
// member functions: 14
// member variables: 5
// static member variable: 1
// struct size: 32
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:106 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* struct BaseSceneObjectOverride_t <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	ExtraVertexStreamOverride_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	void Schema_CompileTimeVerificationFunction(ExtraVertexStreamOverride_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105 */
	const CSchemaClassInfo* Schema_DynamicBinding(const ExtraVertexStreamOverride_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:106 */
	ExtraVertexStreamOverride_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferSave(const ExtraVertexStreamOverride_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferLoad(ExtraVertexStreamOverride_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferSave_ExtraVertexStreamOverride_t(const ExtraVertexStreamOverride_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:106 */
	void KV3TransferLoad_ExtraVertexStreamOverride_t(ExtraVertexStreamOverride_t* , CKV3TransferLoadContext* );
	uint32 m_nSubSceneObject; /* 4 4 */
	uint32 m_nDrawCallIndex; /* 8 4 */
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; /* 12 4 */
	CRenderBufferBinding m_extraBufferBinding; /* 16 16 */
	void ExtraVertexStreamOverride_t(ExtraVertexStreamOverride_t* );
};

// <0427AA9C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:105
inline void ExtraVertexStreamOverride_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0426EEA7> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:125
inline void MaterialOverride_t::operator=(const MaterialOverride_t &)
{
} /* size: 0 */

// <0426EE90> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:125
void MaterialOverride_t::MaterialOverride_t()
{
} /* size: 0 */

// <0426EE74> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:125
inline void MaterialOverride_t::MaterialOverride_t()
{
} /* size: 0 */

// <0426EE5D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:125
void MaterialOverride_t::~MaterialOverride_t()
{
} /* size: 0 */

// <0426EE41> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:125
inline void MaterialOverride_t::~MaterialOverride_t()
{
} /* size: 0 */

// <00FD43B0> ../public/worldrenderer/worldnodeschema.h:125
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 24
struct MaterialOverride_t : public BaseSceneObjectOverride_t {
public:
	/* struct BaseSceneObjectOverride_t <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	MaterialOverride_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	void Schema_CompileTimeVerificationFunction(MaterialOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* Schema_DynamicBinding(const MaterialOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	MaterialOverride_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferSave(const MaterialOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferLoad(MaterialOverride_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferSave_MaterialOverride_t(const MaterialOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferLoad_MaterialOverride_t(MaterialOverride_t* , CKV3TransferLoadContext* );
	uint32 m_nSubSceneObject; /* 4 4 */
	uint32 m_nDrawCallIndex; /* 8 4 */
	HMaterialStrong m_pMaterial; /* 16 8 */
};

// <01079B8C> ../public/worldrenderer/worldnodeschema.h:125
// member functions: 14
// member variables: 4
// static member variable: 1
// struct size: 24
struct MaterialOverride_t : public BaseSceneObjectOverride_t {
public:
	/* struct BaseSceneObjectOverride_t <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	MaterialOverride_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	void Schema_CompileTimeVerificationFunction(MaterialOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* Schema_DynamicBinding(const MaterialOverride_t* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	MaterialOverride_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferSave(const MaterialOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferLoad(MaterialOverride_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferSave_MaterialOverride_t(const MaterialOverride_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferLoad_MaterialOverride_t(MaterialOverride_t* , CKV3TransferLoadContext* );
	uint32 m_nSubSceneObject; /* 4 4 */
	uint32 m_nDrawCallIndex; /* 8 4 */
	HMaterialStrong m_pMaterial; /* 16 8 */
	void ~MaterialOverride_t(MaterialOverride_t* );
};

// <0420E9CC> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:125
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 24
struct MaterialOverride_t : public BaseSceneObjectOverride_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:128 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* struct BaseSceneObjectOverride_t <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	MaterialOverride_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	void Schema_CompileTimeVerificationFunction(MaterialOverride_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127 */
	const CSchemaClassInfo* Schema_DynamicBinding(const MaterialOverride_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:128 */
	MaterialOverride_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferSave(const MaterialOverride_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferLoad(MaterialOverride_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferSave_MaterialOverride_t(const MaterialOverride_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:128 */
	void KV3TransferLoad_MaterialOverride_t(MaterialOverride_t* , CKV3TransferLoadContext* );
	uint32 m_nSubSceneObject; /* 4 4 */
	uint32 m_nDrawCallIndex; /* 8 4 */
	HMaterialStrong m_pMaterial; /* 16 8 */
	void ~MaterialOverride_t(MaterialOverride_t* );
	void MaterialOverride_t(MaterialOverride_t* );
	MaterialOverride_t& operator=(MaterialOverride_t* , const MaterialOverride_t& );
};

// <0427AA77> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:127
inline void MaterialOverride_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0426C7A5> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:142
inline void InfoOverlayData_t::operator=(const InfoOverlayData_t &)
{
} /* size: 0 */

// <0426C78E> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:142
void InfoOverlayData_t::~InfoOverlayData_t()
{
} /* size: 0 */

// <0426C772> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:142
inline void InfoOverlayData_t::~InfoOverlayData_t()
{
} /* size: 0 */

// <00FD4573> ../public/worldrenderer/worldnodeschema.h:142
// member functions: 14
// member variables: 10
// static member variable: 1
// struct size: 112
struct InfoOverlayData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	InfoOverlayData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	void Schema_CompileTimeVerificationFunction(InfoOverlayData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoOverlayData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	InfoOverlayData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferSave(const InfoOverlayData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferLoad(InfoOverlayData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferSave_InfoOverlayData_t(const InfoOverlayData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferLoad_InfoOverlayData_t(InfoOverlayData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:147 */
	void InfoOverlayData_t(InfoOverlayData_t* );
	matrix3x4_t m_transform; /* 0 48 */
	float m_flWidth; /* 48 4 */
	float m_flHeight; /* 52 4 */
	float m_flDepth; /* 56 4 */
	Vector2D m_vUVStart; /* 60 8 */
	Vector2D m_vUVEnd; /* 68 8 */
	HMaterialStrong m_pMaterial; /* 80 8 */
	int m_nRenderOrder; /* 88 4 */
	Vector4D m_vTintColor; /* 92 16 */
	int m_nSequenceOverride; /* 108 4 */
};

// <01079D6B> ../public/worldrenderer/worldnodeschema.h:142
// member functions: 15
// member variables: 10
// static member variable: 1
// struct size: 112
struct InfoOverlayData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	InfoOverlayData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	void Schema_CompileTimeVerificationFunction(InfoOverlayData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoOverlayData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	InfoOverlayData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferSave(const InfoOverlayData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferLoad(InfoOverlayData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferSave_InfoOverlayData_t(const InfoOverlayData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferLoad_InfoOverlayData_t(InfoOverlayData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:147 */
	void InfoOverlayData_t(InfoOverlayData_t* );
	matrix3x4_t m_transform; /* 0 48 */
	float m_flWidth; /* 48 4 */
	float m_flHeight; /* 52 4 */
	float m_flDepth; /* 56 4 */
	Vector2D m_vUVStart; /* 60 8 */
	Vector2D m_vUVEnd; /* 68 8 */
	HMaterialStrong m_pMaterial; /* 80 8 */
	int m_nRenderOrder; /* 88 4 */
	Vector4D m_vTintColor; /* 92 16 */
	int m_nSequenceOverride; /* 108 4 */
	void ~InfoOverlayData_t(InfoOverlayData_t* );
};

// <0420EC06> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:142
// member functions: 16
// member variables: 10
// static member variable: 1
// struct size: 112
struct InfoOverlayData_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:145 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	InfoOverlayData_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	void Schema_CompileTimeVerificationFunction(InfoOverlayData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144 */
	const CSchemaClassInfo* Schema_DynamicBinding(const InfoOverlayData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:145 */
	InfoOverlayData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferSave(const InfoOverlayData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferLoad(InfoOverlayData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferSave_InfoOverlayData_t(const InfoOverlayData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:145 */
	void KV3TransferLoad_InfoOverlayData_t(InfoOverlayData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:147 */
	void InfoOverlayData_t(InfoOverlayData_t* );
	matrix3x4_t m_transform; /* 0 48 */
	float m_flWidth; /* 48 4 */
	float m_flHeight; /* 52 4 */
	float m_flDepth; /* 56 4 */
	Vector2D m_vUVStart; /* 60 8 */
	Vector2D m_vUVEnd; /* 68 8 */
	HMaterialStrong m_pMaterial; /* 80 8 */
	int m_nRenderOrder; /* 88 4 */
	Vector4D m_vTintColor; /* 92 16 */
	int m_nSequenceOverride; /* 108 4 */
	void ~InfoOverlayData_t(InfoOverlayData_t* );
	InfoOverlayData_t& operator=(InfoOverlayData_t* , const InfoOverlayData_t& );
};

// <0427AA52> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:144
inline void InfoOverlayData_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0427AA3B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:147
void InfoOverlayData_t::InfoOverlayData_t()
{
} /* size: 0 */

// <0427AA22> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:147
inline void InfoOverlayData_t::InfoOverlayData_t()
{
} /* size: 0 */

// <042F45BA> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:173
inline void BakedLightingInfo_t::operator=(const BakedLightingInfo_t &)
{
} /* size: 0 */

// <042F450C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:173
void BakedLightingInfo_t::BakedLightingInfo_t()
{
} /* size: 0 */

// <042F44F0> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:173
inline void BakedLightingInfo_t::BakedLightingInfo_t()
{
} /* size: 0 */

// <042F44D9> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:173
void BakedLightingInfo_t::~BakedLightingInfo_t()
{
} /* size: 0 */

// <042F44BD> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:173
inline void BakedLightingInfo_t::~BakedLightingInfo_t()
{
} /* size: 0 */

// <00ED926A> ../public/worldrenderer/worldnodeschema.h:173
// member functions: 14
// member variables: 5
// static member variable: 1
// struct size: 56
struct BakedLightingInfo_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	BakedLightingInfo_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	void Schema_CompileTimeVerificationFunction(BakedLightingInfo_t* );
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* Schema_DynamicBinding(const BakedLightingInfo_t* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	BakedLightingInfo_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferSave(const BakedLightingInfo_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferLoad(BakedLightingInfo_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferSave_BakedLightingInfo_t(const BakedLightingInfo_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferLoad_BakedLightingInfo_t(BakedLightingInfo_t* , CKV3TransferLoadContext* );
	uint32 m_nLightmapVersionNumber; /* 0 4 */
	uint32 m_nLightmapGameVersionNumber; /* 4 4 */
	Vector2D m_vLightmapUvScale; /* 8 8 */
	bool m_bHasLightmaps; /* 16 1 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int> > m_lightMaps; /* 24 32 */
	void ~BakedLightingInfo_t(BakedLightingInfo_t* );
};

// <00FD47B3> ../public/worldrenderer/worldnodeschema.h:173
// member functions: 13
// member variables: 5
// static member variable: 1
// struct size: 56
struct BakedLightingInfo_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	BakedLightingInfo_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	void Schema_CompileTimeVerificationFunction(BakedLightingInfo_t* );
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* Schema_DynamicBinding(const BakedLightingInfo_t* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	BakedLightingInfo_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferSave(const BakedLightingInfo_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferLoad(BakedLightingInfo_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferSave_BakedLightingInfo_t(const BakedLightingInfo_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferLoad_BakedLightingInfo_t(BakedLightingInfo_t* , CKV3TransferLoadContext* );
	uint32 m_nLightmapVersionNumber; /* 0 4 */
	uint32 m_nLightmapGameVersionNumber; /* 4 4 */
	Vector2D m_vLightmapUvScale; /* 8 8 */
	bool m_bHasLightmaps; /* 16 1 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int> > m_lightMaps; /* 24 32 */
};

// <0420EEA2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:173
// member functions: 16
// member variables: 5
// static member variable: 1
// struct size: 56
struct BakedLightingInfo_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:176 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	BakedLightingInfo_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	void Schema_CompileTimeVerificationFunction(BakedLightingInfo_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175 */
	const CSchemaClassInfo* Schema_DynamicBinding(const BakedLightingInfo_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:176 */
	BakedLightingInfo_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferSave(const BakedLightingInfo_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferLoad(BakedLightingInfo_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferSave_BakedLightingInfo_t(const BakedLightingInfo_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:176 */
	void KV3TransferLoad_BakedLightingInfo_t(BakedLightingInfo_t* , CKV3TransferLoadContext* );
	uint32 m_nLightmapVersionNumber; /* 0 4 */
	uint32 m_nLightmapGameVersionNumber; /* 4 4 */
	Vector2D m_vLightmapUvScale; /* 8 8 */
	bool m_bHasLightmaps; /* 16 1 */
	CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int> > m_lightMaps; /* 24 32 */
	void ~BakedLightingInfo_t(BakedLightingInfo_t* );
	void BakedLightingInfo_t(BakedLightingInfo_t* );
	BakedLightingInfo_t& operator=(BakedLightingInfo_t* , const BakedLightingInfo_t& );
};

// <042FD210> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0427A9FD> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:175
inline void BakedLightingInfo_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <042639BB> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:185
inline void WorldNodeOnDiskBufferData_t::operator=(const WorldNodeOnDiskBufferData_t &)
{
} /* size: 0 */

// <04263970> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:185
void WorldNodeOnDiskBufferData_t::WorldNodeOnDiskBufferData_t()
{
} /* size: 0 */

// <04263954> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:185
inline void WorldNodeOnDiskBufferData_t::WorldNodeOnDiskBufferData_t()
{
} /* size: 0 */

// <0426393D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:185
void WorldNodeOnDiskBufferData_t::~WorldNodeOnDiskBufferData_t()
{
} /* size: 0 */

// <04263921> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:185
inline void WorldNodeOnDiskBufferData_t::~WorldNodeOnDiskBufferData_t()
{
} /* size: 0 */

// <00FD6029> ../public/worldrenderer/worldnodeschema.h:185
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 72
struct WorldNodeOnDiskBufferData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	WorldNodeOnDiskBufferData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	void Schema_CompileTimeVerificationFunction(WorldNodeOnDiskBufferData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldNodeOnDiskBufferData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	WorldNodeOnDiskBufferData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferSave(const WorldNodeOnDiskBufferData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferLoad(WorldNodeOnDiskBufferData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferSave_WorldNodeOnDiskBufferData_t(const WorldNodeOnDiskBufferData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferLoad_WorldNodeOnDiskBufferData_t(WorldNodeOnDiskBufferData_t* , CKV3TransferLoadContext* );
	int32 m_nElementCount; /* 0 4 */
	int32 m_nElementSizeInBytes; /* 4 4 */
	CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > m_inputLayoutFields; /* 8 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_pData; /* 40 32 */
};

// <0107B8BB> ../public/worldrenderer/worldnodeschema.h:185
// member functions: 14
// member variables: 4
// static member variable: 1
// struct size: 72
struct WorldNodeOnDiskBufferData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	WorldNodeOnDiskBufferData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	void Schema_CompileTimeVerificationFunction(WorldNodeOnDiskBufferData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldNodeOnDiskBufferData_t* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	WorldNodeOnDiskBufferData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferSave(const WorldNodeOnDiskBufferData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferLoad(WorldNodeOnDiskBufferData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferSave_WorldNodeOnDiskBufferData_t(const WorldNodeOnDiskBufferData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferLoad_WorldNodeOnDiskBufferData_t(WorldNodeOnDiskBufferData_t* , CKV3TransferLoadContext* );
	int32 m_nElementCount; /* 0 4 */
	int32 m_nElementSizeInBytes; /* 4 4 */
	CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > m_inputLayoutFields; /* 8 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_pData; /* 40 32 */
	void ~WorldNodeOnDiskBufferData_t(WorldNodeOnDiskBufferData_t* );
};

// <042107F7> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:185
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 72
struct WorldNodeOnDiskBufferData_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:188 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	WorldNodeOnDiskBufferData_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	void Schema_CompileTimeVerificationFunction(WorldNodeOnDiskBufferData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldNodeOnDiskBufferData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:188 */
	WorldNodeOnDiskBufferData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferSave(const WorldNodeOnDiskBufferData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferLoad(WorldNodeOnDiskBufferData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferSave_WorldNodeOnDiskBufferData_t(const WorldNodeOnDiskBufferData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:188 */
	void KV3TransferLoad_WorldNodeOnDiskBufferData_t(WorldNodeOnDiskBufferData_t* , CKV3TransferLoadContext* );
	int32 m_nElementCount; /* 0 4 */
	int32 m_nElementSizeInBytes; /* 4 4 */
	CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > m_inputLayoutFields; /* 8 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_pData; /* 40 32 */
	void ~WorldNodeOnDiskBufferData_t(WorldNodeOnDiskBufferData_t* );
	void WorldNodeOnDiskBufferData_t(WorldNodeOnDiskBufferData_t* );
	WorldNodeOnDiskBufferData_t& operator=(WorldNodeOnDiskBufferData_t* , const WorldNodeOnDiskBufferData_t& );
};

// <0427A9D8> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:187
inline void WorldNodeOnDiskBufferData_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0425FA78> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:196
inline void AggregateMeshInfo_t::operator=(const AggregateMeshInfo_t &)
{
} /* size: 0 */

// <0425FA61> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:196
void AggregateMeshInfo_t::AggregateMeshInfo_t()
{
} /* size: 0 */

// <0425FA45> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:196
inline void AggregateMeshInfo_t::AggregateMeshInfo_t()
{
} /* size: 0 */

// <00FD61F2> ../public/worldrenderer/worldnodeschema.h:196
// member functions: 13
// member variables: 8
// static member variable: 1
// struct size: 56
struct AggregateMeshInfo_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	AggregateMeshInfo_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	void Schema_CompileTimeVerificationFunction(AggregateMeshInfo_t* );
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:198 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AggregateMeshInfo_t* );
	/* ../public/worldrenderer/worldnodeschema.h:199 */
	AggregateMeshInfo_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferSave(const AggregateMeshInfo_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferLoad(AggregateMeshInfo_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferSave_AggregateMeshInfo_t(const AggregateMeshInfo_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferLoad_AggregateMeshInfo_t(AggregateMeshInfo_t* , CKV3TransferLoadContext* );
	Vector4D m_vTintColor; /* 0 16 */
	Vector m_vWorldBounds[2]; /* 16 24 */
	uint16 m_nDrawDescriptorIndex; /* 40 2 */
	uint16 m_nVisClusterMemberOffset; /* 42 2 */
	uint8 m_nVisClusterMemberCount; /* 44 1 */
	uint8 _pad; /* 45 1 */
	int32 m_nCubeMapPrecomputedHandshake; /* 48 4 */
	ObjectTypeFlags_t m_objectFlags; /* 52 4 */
};

// <04210A37> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:196
// member functions: 15
// member variables: 8
// static member variable: 1
// struct size: 56
struct AggregateMeshInfo_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:199 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	AggregateMeshInfo_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	void Schema_CompileTimeVerificationFunction(AggregateMeshInfo_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AggregateMeshInfo_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:199 */
	AggregateMeshInfo_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferSave(const AggregateMeshInfo_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferLoad(AggregateMeshInfo_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferSave_AggregateMeshInfo_t(const AggregateMeshInfo_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:199 */
	void KV3TransferLoad_AggregateMeshInfo_t(AggregateMeshInfo_t* , CKV3TransferLoadContext* );
	Vector4D m_vTintColor; /* 0 16 */
	Vector m_vWorldBounds[2]; /* 16 24 */
	uint16 m_nDrawDescriptorIndex; /* 40 2 */
	uint16 m_nVisClusterMemberOffset; /* 42 2 */
	uint8 m_nVisClusterMemberCount; /* 44 1 */
	uint8 _pad; /* 45 1 */
	int32 m_nCubeMapPrecomputedHandshake; /* 48 4 */
	ObjectTypeFlags_t m_objectFlags; /* 52 4 */
	void AggregateMeshInfo_t(AggregateMeshInfo_t* );
	AggregateMeshInfo_t& operator=(AggregateMeshInfo_t* , const AggregateMeshInfo_t& );
};

// <0427A9B3> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:198
inline void AggregateMeshInfo_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0428581F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:212
// function calls: 37
void AggregateSceneObject_t::operator=(const AggregateSceneObject_t &)
{
	Vector::operator=(
			const Vector& vOther);  // 212
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Count(); // 573
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<AggregateMeshInfo_t, int>::Base(); // 112
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Base(); // 102
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::begin(); // 574
	CUtlMemory<AggregateMeshInfo_t, int>::Base(); // 113
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Base(); // 105
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Count(); // 105
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::end(); // 574
	Vector4D::operator=(
			const Vector4D& vOther);  // 196
	Vector::operator=(
			const Vector& vOther);  // 196
	AggregateMeshInfo_t::operator=(
			const AggregateMeshInfo_t  &);  // 209
	UtlTraitsCopyRange<AggregateMeshInfo_t>(const AggregateMeshInfo_t* pFrom,
						const AggregateMeshInfo_t* pFromEnd,
						AggregateMeshInfo_t* pTo);  // 200
	UtlTraitsCopyRange<AggregateMeshInfo_t>(const AggregateMeshInfo_t* pFrom,
						const AggregateMeshInfo_t* pFromEnd,
						AggregateMeshInfo_t* pTo);  // 574
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::operator=(
			const CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >& other);  // 565
	CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::operator=(
			const CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >& other);  // 452
	CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::operator=(
			const CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >& src);  // 212
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 573
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 102
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::begin(); // 574
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 105
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<short unsigned int>(const short unsigned int* pFrom,
						const short unsigned int* pFromEnd,
						short unsigned int* pTo);  // 574
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >& other);  // 565
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >& other);  // 452
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::operator=(
			const CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& src);  // 212
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CStrongHandle<InfoForResourceTypeCModel>& src);  // 212
} /* size: 456, inline expansions: 37 (1865 bytes) */

// <0425AE77> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:212
inline void AggregateSceneObject_t::operator=(const AggregateSceneObject_t &)
{
} /* size: 0 */

// <0425ADF8> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:212
void AggregateSceneObject_t::AggregateSceneObject_t()
{
} /* size: 0 */

// <0425ADDC> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:212
inline void AggregateSceneObject_t::AggregateSceneObject_t()
{
} /* size: 0 */

// <0425ADC5> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:212
void AggregateSceneObject_t::~AggregateSceneObject_t()
{
} /* size: 0 */

// <0425ADA9> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:212
inline void AggregateSceneObject_t::~AggregateSceneObject_t()
{
} /* size: 0 */

// <00FD63F7> ../public/worldrenderer/worldnodeschema.h:212
// member functions: 13
// member variables: 8
// static member variable: 1
// struct size: 112
struct AggregateSceneObject_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	AggregateSceneObject_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	void Schema_CompileTimeVerificationFunction(AggregateSceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AggregateSceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	AggregateSceneObject_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferSave(const AggregateSceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferLoad(AggregateSceneObject_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferSave_AggregateSceneObject_t(const AggregateSceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferLoad_AggregateSceneObject_t(AggregateSceneObject_t* , CKV3TransferLoadContext* );
	Vector m_vWorldBounds[2]; /* 0 24 */
	ObjectTypeFlags_t m_allFlags; /* 24 4 */
	ObjectTypeFlags_t m_anyFlags; /* 28 4 */
	int16 m_nLayer; /* 32 2 */
	int16 m_nBoundsGroupIndex; /* 34 2 */
	CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> > m_aggregateMeshes; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_visClusterMembership; /* 72 32 */
	HModelStrong m_renderableModel; /* 104 8 */
};

// <0107CC83> ../public/worldrenderer/worldnodeschema.h:212
// member functions: 14
// member variables: 8
// static member variable: 1
// struct size: 112
struct AggregateSceneObject_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	AggregateSceneObject_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	void Schema_CompileTimeVerificationFunction(AggregateSceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AggregateSceneObject_t* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	AggregateSceneObject_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferSave(const AggregateSceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferLoad(AggregateSceneObject_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferSave_AggregateSceneObject_t(const AggregateSceneObject_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferLoad_AggregateSceneObject_t(AggregateSceneObject_t* , CKV3TransferLoadContext* );
	Vector m_vWorldBounds[2]; /* 0 24 */
	ObjectTypeFlags_t m_allFlags; /* 24 4 */
	ObjectTypeFlags_t m_anyFlags; /* 28 4 */
	int16 m_nLayer; /* 32 2 */
	int16 m_nBoundsGroupIndex; /* 34 2 */
	CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> > m_aggregateMeshes; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_visClusterMembership; /* 72 32 */
	HModelStrong m_renderableModel; /* 104 8 */
	void ~AggregateSceneObject_t(AggregateSceneObject_t* );
};

// <04210CA8> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:212
// member functions: 16
// member variables: 8
// static member variable: 1
// struct size: 112
struct AggregateSceneObject_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:215 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	AggregateSceneObject_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	void Schema_CompileTimeVerificationFunction(AggregateSceneObject_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AggregateSceneObject_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:215 */
	AggregateSceneObject_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferSave(const AggregateSceneObject_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferLoad(AggregateSceneObject_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferSave_AggregateSceneObject_t(const AggregateSceneObject_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:215 */
	void KV3TransferLoad_AggregateSceneObject_t(AggregateSceneObject_t* , CKV3TransferLoadContext* );
	Vector m_vWorldBounds[2]; /* 0 24 */
	ObjectTypeFlags_t m_allFlags; /* 24 4 */
	ObjectTypeFlags_t m_anyFlags; /* 28 4 */
	int16 m_nLayer; /* 32 2 */
	int16 m_nBoundsGroupIndex; /* 34 2 */
	CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> > m_aggregateMeshes; /* 40 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_visClusterMembership; /* 72 32 */
	HModelStrong m_renderableModel; /* 104 8 */
	void ~AggregateSceneObject_t(AggregateSceneObject_t* );
	void AggregateSceneObject_t(AggregateSceneObject_t* );
	AggregateSceneObject_t& operator=(AggregateSceneObject_t* , const AggregateSceneObject_t& );
};

// <0427A98E> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:214
inline void AggregateSceneObject_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <042542D9> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:227
inline void WorldNode_t::operator=(const WorldNode_t &)
{
} /* size: 0 */

// <0425414A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:227
void WorldNode_t::WorldNode_t()
{
} /* size: 0 */

// <0425412E> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:227
inline void WorldNode_t::WorldNode_t()
{
} /* size: 0 */

// <04251BED> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:227
// variables: 7
// function calls: 193
void WorldNode_t::~WorldNode_t()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCTextureBase> >(CStrongHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase this); // 173
	BakedLightingInfo_t::~BakedLightingInfo_t(); // 227
	CUtlString::~CUtlString(); // 227
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 227
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<WorldNodeOnDiskBufferData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 185
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
		ValidateAlignment<RenderInputLayoutField_t>(void); // 508
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
		CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 185
		WorldNodeOnDiskBufferData_t::~WorldNodeOnDiskBufferData_t(); // 1526
		Destruct<WorldNodeOnDiskBufferData_t>(WorldNodeOnDiskBufferData_t* pMemory); // 1723
	}
	CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::Purge(); // 903
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::Purge(); // 1799
	CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::Purge(); // 560
	ValidateAlignment<WorldNodeOnDiskBufferData_t>(void); // 508
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::Purge(); // 510
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<MaterialOverride_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 125
		MaterialOverride_t::~MaterialOverride_t(); // 1526
		Destruct<MaterialOverride_t>(MaterialOverride_t* pMemory); // 1723
	}
	CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::RemoveAll(); // 1798
	CUtlMemory<MaterialOverride_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<MaterialOverride_t, int>::Purge(); // 903
	CUtlMemory<MaterialOverride_t, int>::Purge(); // 1799
	CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::Purge(); // 560
	ValidateAlignment<MaterialOverride_t>(void); // 508
	CUtlMemory<MaterialOverride_t, int>::Purge(); // 510
	CUtlMemory<MaterialOverride_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::~CUtlVector(); // 227
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ExtraVertexStreamOverride_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Purge(); // 903
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Purge(); // 1799
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::Purge(); // 560
	ValidateAlignment<ExtraVertexStreamOverride_t>(void); // 508
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Purge(); // 510
	CUtlMemory<ExtraVertexStreamOverride_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<AggregateSceneObject_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 212
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<short unsigned int, int>::Purge(); // 903
		CUtlMemory<short unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
		ValidateAlignment<short unsigned int>(void); // 508
		CUtlMemory<short unsigned int, int>::Purge(); // 510
		CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 212
		CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::RemoveAll(); // 1798
		CUtlMemory<AggregateMeshInfo_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<AggregateMeshInfo_t, int>::Purge(); // 903
		CUtlMemory<AggregateMeshInfo_t, int>::Purge(); // 1799
		CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::Purge(); // 560
		ValidateAlignment<AggregateMeshInfo_t>(void); // 508
		CUtlMemory<AggregateMeshInfo_t, int>::Purge(); // 510
		CUtlMemory<AggregateMeshInfo_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AggregateMeshInfo_t, CUtlMemory<AggregateMeshInfo_t, int> >::~CUtlVector(); // 212
		AggregateSceneObject_t::~AggregateSceneObject_t(); // 1526
		Destruct<AggregateSceneObject_t>(AggregateSceneObject_t* pMemory); // 1723
	}
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AggregateSceneObject_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AggregateSceneObject_t, int>::Purge(); // 903
	CUtlMemory<AggregateSceneObject_t, int>::Purge(); // 1799
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::Purge(); // 560
	ValidateAlignment<AggregateSceneObject_t>(void); // 508
	CUtlMemory<AggregateSceneObject_t, int>::Purge(); // 510
	CUtlMemory<AggregateSceneObject_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::~CUtlVector(); // 227
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AABB_t, int>::Purge(); // 903
	CUtlMemory<AABB_t, int>::Purge(); // 1799
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Purge(); // 560
	ValidateAlignment<AABB_t>(void); // 508
	CUtlMemory<AABB_t, int>::Purge(); // 510
	CUtlMemory<AABB_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVector(); // 227
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<InfoOverlayData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 142
		InfoOverlayData_t::~InfoOverlayData_t(); // 1526
		Destruct<InfoOverlayData_t>(InfoOverlayData_t* pMemory); // 1723
	}
	CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<InfoOverlayData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<InfoOverlayData_t, int>::Purge(); // 903
	CUtlMemory<InfoOverlayData_t, int>::Purge(); // 1799
	CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::Purge(); // 560
	ValidateAlignment<InfoOverlayData_t>(void); // 508
	CUtlMemory<InfoOverlayData_t, int>::Purge(); // 510
	CUtlMemory<InfoOverlayData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<SceneObject_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 47
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 47
		CUtlString::~CUtlString(); // 47
		SceneObject_t::~SceneObject_t(); // 1526
		Destruct<SceneObject_t>(SceneObject_t* pMemory); // 1723
	}
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SceneObject_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SceneObject_t, int>::Purge(); // 903
	CUtlMemory<SceneObject_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Purge(); // 560
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneObject_t, CUtlMemory<SceneObject_t, int> >::~CUtlVector(); // 227
} /* size: 0, inline expansions: 119 (0 bytes) */

// <04251BD1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:227
inline void WorldNode_t::~WorldNode_t()
{
} /* size: 0 */

// <0110BAA4> ../public/worldrenderer/worldnodeschema.h:227
// variables: 6
// function calls: 167
void WorldNode_t::~WorldNode_t()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCTextureBase> >(CStrongHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase this); // 173
	BakedLightingInfo_t::~BakedLightingInfo_t(); // 227
	CUtlString::~CUtlString(); // 227
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 227
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<WorldNodeOnDiskBufferData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 185
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 903
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Purge(); // 560
		ValidateAlignment<RenderInputLayoutField_t>(void); // 508
		CUtlMemory<RenderInputLayoutField_t, int>::Purge(); // 510
		CUtlMemory<RenderInputLayoutField_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::~CUtlVector(); // 185
		WorldNodeOnDiskBufferData_t::~WorldNodeOnDiskBufferData_t(); // 1526
		Destruct<WorldNodeOnDiskBufferData_t>(WorldNodeOnDiskBufferData_t* pMemory); // 1723
	}
	CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::Purge(); // 903
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::Purge(); // 1799
	CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::Purge(); // 560
	ValidateAlignment<WorldNodeOnDiskBufferData_t>(void); // 508
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::Purge(); // 510
	CUtlMemory<WorldNodeOnDiskBufferData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<MaterialOverride_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 125
		MaterialOverride_t::~MaterialOverride_t(); // 1526
		Destruct<MaterialOverride_t>(MaterialOverride_t* pMemory); // 1723
	}
	CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::RemoveAll(); // 1798
	CUtlMemory<MaterialOverride_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<MaterialOverride_t, int>::Purge(); // 903
	CUtlMemory<MaterialOverride_t, int>::Purge(); // 1799
	CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::Purge(); // 560
	ValidateAlignment<MaterialOverride_t>(void); // 508
	CUtlMemory<MaterialOverride_t, int>::Purge(); // 510
	CUtlMemory<MaterialOverride_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> >::~CUtlVector(); // 227
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ExtraVertexStreamOverride_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Purge(); // 903
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Purge(); // 1799
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::Purge(); // 560
	ValidateAlignment<ExtraVertexStreamOverride_t>(void); // 508
	CUtlMemory<ExtraVertexStreamOverride_t, int>::Purge(); // 510
	CUtlMemory<ExtraVertexStreamOverride_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> >::~CUtlVector(); // 227
	CUtlMemory<AggregateSceneObject_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AggregateSceneObject_t, int>::Purge(); // 903
	CUtlMemory<AggregateSceneObject_t, int>::Purge(); // 1799
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::Purge(); // 560
	ValidateAlignment<AggregateSceneObject_t>(void); // 508
	CUtlMemory<AggregateSceneObject_t, int>::Purge(); // 510
	CUtlMemory<AggregateSceneObject_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> >::~CUtlVector(); // 227
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AABB_t, int>::Purge(); // 903
	CUtlMemory<AABB_t, int>::Purge(); // 1799
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Purge(); // 560
	ValidateAlignment<AABB_t>(void); // 508
	CUtlMemory<AABB_t, int>::Purge(); // 510
	CUtlMemory<AABB_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >::~CUtlVector(); // 227
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<InfoOverlayData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 142
		InfoOverlayData_t::~InfoOverlayData_t(); // 1526
		Destruct<InfoOverlayData_t>(InfoOverlayData_t* pMemory); // 1723
	}
	CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<InfoOverlayData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<InfoOverlayData_t, int>::Purge(); // 903
	CUtlMemory<InfoOverlayData_t, int>::Purge(); // 1799
	CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::Purge(); // 560
	ValidateAlignment<InfoOverlayData_t>(void); // 508
	CUtlMemory<InfoOverlayData_t, int>::Purge(); // 510
	CUtlMemory<InfoOverlayData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> >::~CUtlVector(); // 227
	{
		int i; // 1721
		CUtlMemory<SceneObject_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 47
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 47
		CUtlString::~CUtlString(); // 47
		SceneObject_t::~SceneObject_t(); // 1526
		Destruct<SceneObject_t>(SceneObject_t* pMemory); // 1723
	}
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SceneObject_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SceneObject_t, int>::Purge(); // 903
	CUtlMemory<SceneObject_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::Purge(); // 560
	CUtlVectorBase<SceneObject_t, CUtlMemory<SceneObject_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneObject_t, CUtlMemory<SceneObject_t, int> >::~CUtlVector(); // 227
} /* size: 993, inline expansions: 118 (4029 bytes) */

// <00FD3973> ../public/worldrenderer/worldnodeschema.h:227
// member functions: 13
// member variables: 13
// static member variable: 1
// struct size: 416
struct WorldNode_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	WorldNode_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	void Schema_CompileTimeVerificationFunction(WorldNode_t* );
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldNode_t* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	WorldNode_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferSave(const WorldNode_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferLoad(WorldNode_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferSave_WorldNode_t(const WorldNode_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferLoad_WorldNode_t(WorldNode_t* , CKV3TransferLoadContext* );
	CUtlVector<SceneObject_t, CUtlMemory<SceneObject_t, int> > m_sceneObjects; /* 0 32 */
	CUtlVector<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> > m_infoOverlays; /* 32 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_visClusterMembership; /* 64 32 */
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > m_boundsGroups; /* 96 32 */
	CUtlVector<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> > m_aggregateSceneObjects; /* 128 32 */
	CUtlVector<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> > m_extraVertexStreamOverrides; /* 160 32 */
	CUtlVector<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> > m_materialOverrides; /* 192 32 */
	CUtlVector<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> > m_extraVertexStreams; /* 224 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_layerNames; /* 256 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_sceneObjectLayerIndices; /* 288 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_overlayLayerIndices; /* 320 32 */
	CUtlString m_grassFileName; /* 352 8 */
	BakedLightingInfo_t m_nodeLightingInfo; /* 360 56 */
};

// <0107FCCD> ../public/worldrenderer/worldnodeschema.h:227
// member functions: 14
// member variables: 13
// static member variable: 1
// struct size: 416
struct WorldNode_t {
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	WorldNode_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	void Schema_CompileTimeVerificationFunction(WorldNode_t* );
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldNode_t* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	WorldNode_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferSave(const WorldNode_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferLoad(WorldNode_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferSave_WorldNode_t(const WorldNode_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferLoad_WorldNode_t(WorldNode_t* , CKV3TransferLoadContext* );
	CUtlVector<SceneObject_t, CUtlMemory<SceneObject_t, int> > m_sceneObjects; /* 0 32 */
	CUtlVector<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> > m_infoOverlays; /* 32 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_visClusterMembership; /* 64 32 */
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > m_boundsGroups; /* 96 32 */
	CUtlVector<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> > m_aggregateSceneObjects; /* 128 32 */
	CUtlVector<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> > m_extraVertexStreamOverrides; /* 160 32 */
	CUtlVector<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> > m_materialOverrides; /* 192 32 */
	CUtlVector<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> > m_extraVertexStreams; /* 224 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_layerNames; /* 256 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_sceneObjectLayerIndices; /* 288 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_overlayLayerIndices; /* 320 32 */
	CUtlString m_grassFileName; /* 352 8 */
	BakedLightingInfo_t m_nodeLightingInfo; /* 360 56 */
	void ~WorldNode_t(WorldNode_t* );
};

// <04213D54> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:227
// member functions: 16
// member variables: 13
// static member variable: 1
// struct size: 416
struct WorldNode_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	WorldNode_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	void Schema_CompileTimeVerificationFunction(WorldNode_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldNode_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:230 */
	WorldNode_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferSave(const WorldNode_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferLoad(WorldNode_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferSave_WorldNode_t(const WorldNode_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:230 */
	void KV3TransferLoad_WorldNode_t(WorldNode_t* , CKV3TransferLoadContext* );
	CUtlVector<SceneObject_t, CUtlMemory<SceneObject_t, int> > m_sceneObjects; /* 0 32 */
	CUtlVector<InfoOverlayData_t, CUtlMemory<InfoOverlayData_t, int> > m_infoOverlays; /* 32 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_visClusterMembership; /* 64 32 */
	CUtlVector<AABB_t, CUtlMemory<AABB_t, int> > m_boundsGroups; /* 96 32 */
	CUtlVector<AggregateSceneObject_t, CUtlMemory<AggregateSceneObject_t, int> > m_aggregateSceneObjects; /* 128 32 */
	CUtlVector<ExtraVertexStreamOverride_t, CUtlMemory<ExtraVertexStreamOverride_t, int> > m_extraVertexStreamOverrides; /* 160 32 */
	CUtlVector<MaterialOverride_t, CUtlMemory<MaterialOverride_t, int> > m_materialOverrides; /* 192 32 */
	CUtlVector<WorldNodeOnDiskBufferData_t, CUtlMemory<WorldNodeOnDiskBufferData_t, int> > m_extraVertexStreams; /* 224 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_layerNames; /* 256 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_sceneObjectLayerIndices; /* 288 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_overlayLayerIndices; /* 320 32 */
	CUtlString m_grassFileName; /* 352 8 */
	BakedLightingInfo_t m_nodeLightingInfo; /* 360 56 */
	void ~WorldNode_t(WorldNode_t* );
	void WorldNode_t(WorldNode_t* );
	WorldNode_t& operator=(WorldNode_t* , const WorldNode_t& );
};

// <0427A969> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:229
inline void WorldNode_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <01111F97> ../public/worldrenderer/worldnodeschema.h:230
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <0427A916> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:268
// variables: 3
inline void SceneObject_t::KV3TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
	{
		KeyValues3* pTargetKeyValues; // 273
		KeyValues3* pMemberKV; // 274
		const uint32  visMemberBits; // 276
	}
} /* size: 0 */

// <0427A8C3> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldnodeschema.h:281
// variables: 3
inline void SceneObject_t::KV3TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	{
		uint32 visMemberBits; // 285
		const KeyValues3* pSourceKeyValues; // 287
		const KeyValues3* pMemberKV; // 288
	}
} /* size: 0 */


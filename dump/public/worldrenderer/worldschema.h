
//
// public/worldrenderer/worldschema.h
//
//	referenced by: libengine2.so
//
//	functions: 41
//	classes: 6
//	structs: 11
//

// <042FCE5A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:22
inline void WorldBuilderParams_t::operator=(const WorldBuilderParams_t &)
{
} /* size: 0 */

// <042FCE43> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:22
void WorldBuilderParams_t::WorldBuilderParams_t()
{
} /* size: 0 */

// <042FCE27> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:22
inline void WorldBuilderParams_t::WorldBuilderParams_t()
{
} /* size: 0 */

// <00EDF62F> ../public/worldrenderer/worldschema.h:22
// member functions: 13
// member variables: 5
// static member variable: 1
// struct size: 32
struct WorldBuilderParams_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:24 */
	WorldBuilderParams_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:24 */
	void Schema_CompileTimeVerificationFunction(WorldBuilderParams_t* );
	/* ../public/worldrenderer/worldschema.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:24 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldBuilderParams_t* );
	/* ../public/worldrenderer/worldschema.h:25 */
	WorldBuilderParams_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:25 */
	void KV3TransferSave(const WorldBuilderParams_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:25 */
	void KV3TransferLoad(WorldBuilderParams_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:25 */
	void KV3TransferSave_WorldBuilderParams_t(const WorldBuilderParams_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:25 */
	void KV3TransferLoad_WorldBuilderParams_t(WorldBuilderParams_t* , CKV3TransferLoadContext* );
	float32 m_flMinDrawVolumeSize; /* 0 4 */
	bool m_bBuildBakedLighting; /* 4 1 */
	Vector2D m_vLightmapUvScale; /* 8 8 */
	uint64 m_nCompileTimestamp; /* 16 8 */
	uint64 m_nCompileFingerprint; /* 24 8 */
};

// <042D60F2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:22
// member functions: 15
// member variables: 5
// static member variable: 1
// struct size: 32
struct WorldBuilderParams_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:25 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	WorldBuilderParams_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	void Schema_CompileTimeVerificationFunction(WorldBuilderParams_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const WorldBuilderParams_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:25 */
	WorldBuilderParams_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:25 */
	void KV3TransferSave(const WorldBuilderParams_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:25 */
	void KV3TransferLoad(WorldBuilderParams_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:25 */
	void KV3TransferSave_WorldBuilderParams_t(const WorldBuilderParams_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:25 */
	void KV3TransferLoad_WorldBuilderParams_t(WorldBuilderParams_t* , CKV3TransferLoadContext* );
	float32 m_flMinDrawVolumeSize; /* 0 4 */
	bool m_bBuildBakedLighting; /* 4 1 */
	Vector2D m_vLightmapUvScale; /* 8 8 */
	uint64 m_nCompileTimestamp; /* 16 8 */
	uint64 m_nCompileFingerprint; /* 24 8 */
	void WorldBuilderParams_t(WorldBuilderParams_t* );
	WorldBuilderParams_t& operator=(WorldBuilderParams_t* , const WorldBuilderParams_t& );
};

// <042FCF4A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <042FCF44> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <042FCF2B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:24
inline void WorldBuilderParams_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <042F9B48> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:36
inline void NodeData_t::operator=(const NodeData_t &)
{
} /* size: 0 */

// <042F9B31> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:36
void NodeData_t::NodeData_t()
{
} /* size: 0 */

// <042F9B15> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:36
inline void NodeData_t::NodeData_t()
{
} /* size: 0 */

// <042F9AFE> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:36
void NodeData_t::~NodeData_t()
{
} /* size: 0 */

// <042F9AE2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:36
inline void NodeData_t::~NodeData_t()
{
} /* size: 0 */

// <00EDF807> ../public/worldrenderer/worldschema.h:36
// member functions: 14
// member variables: 7
// static member variable: 1
// struct size: 88
struct NodeData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	NodeData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:38 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	void Schema_CompileTimeVerificationFunction(NodeData_t* );
	/* ../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* Schema_DynamicBinding(const NodeData_t* );
	/* ../public/worldrenderer/worldschema.h:39 */
	NodeData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferSave(const NodeData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferLoad(NodeData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferSave_NodeData_t(const NodeData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferLoad_NodeData_t(NodeData_t* , CKV3TransferLoadContext* );
	int32 m_nParent; /* 0 4 */
	Vector m_vOrigin; /* 4 12 */
	Vector m_vMinBounds; /* 16 12 */
	Vector m_vMaxBounds; /* 28 12 */
	float32 m_flMinimumDistance; /* 40 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_ChildNodeIndices; /* 48 32 */
	CUtlString m_worldNodePrefix; /* 80 8 */
	void ~NodeData_t(NodeData_t* );
};

// <00FE1D7F> ../public/worldrenderer/worldschema.h:36
// member functions: 13
// member variables: 7
// static member variable: 1
// struct size: 88
struct NodeData_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	NodeData_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:38 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	void Schema_CompileTimeVerificationFunction(NodeData_t* );
	/* ../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* Schema_DynamicBinding(const NodeData_t* );
	/* ../public/worldrenderer/worldschema.h:39 */
	NodeData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferSave(const NodeData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferLoad(NodeData_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferSave_NodeData_t(const NodeData_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:39 */
	void KV3TransferLoad_NodeData_t(NodeData_t* , CKV3TransferLoadContext* );
	int32 m_nParent; /* 0 4 */
	Vector m_vOrigin; /* 4 12 */
	Vector m_vMinBounds; /* 16 12 */
	Vector m_vMaxBounds; /* 28 12 */
	float32 m_flMinimumDistance; /* 40 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_ChildNodeIndices; /* 48 32 */
	CUtlString m_worldNodePrefix; /* 80 8 */
};

// <042D6326> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:36
// member functions: 16
// member variables: 7
// static member variable: 1
// struct size: 88
struct NodeData_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:39 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	NodeData_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	void Schema_CompileTimeVerificationFunction(NodeData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38 */
	const CSchemaClassInfo* Schema_DynamicBinding(const NodeData_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:39 */
	NodeData_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:39 */
	void KV3TransferSave(const NodeData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:39 */
	void KV3TransferLoad(NodeData_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:39 */
	void KV3TransferSave_NodeData_t(const NodeData_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:39 */
	void KV3TransferLoad_NodeData_t(NodeData_t* , CKV3TransferLoadContext* );
	int32 m_nParent; /* 0 4 */
	Vector m_vOrigin; /* 4 12 */
	Vector m_vMinBounds; /* 16 12 */
	Vector m_vMaxBounds; /* 28 12 */
	float32 m_flMinimumDistance; /* 40 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_ChildNodeIndices; /* 48 32 */
	CUtlString m_worldNodePrefix; /* 80 8 */
	void ~NodeData_t(NodeData_t* );
	void NodeData_t(NodeData_t* );
	NodeData_t& operator=(NodeData_t* , const NodeData_t& );
};

// <042FCF06> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:38
inline void NodeData_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <042F4599> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:51
inline void World_t::operator=(const World_t &)
{
} /* size: 0 */

// <042F4471> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:51
void World_t::World_t()
{
} /* size: 0 */

// <042F4455> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:51
inline void World_t::World_t()
{
} /* size: 0 */

// <042F3A59> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:51
// variables: 3
// function calls: 52
void World_t::~World_t()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 51
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
	BakedLightingInfo_t::~BakedLightingInfo_t(); // 51
	{
		int i; // 1721
		CUtlMemory<NodeData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 36
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 36
		NodeData_t::~NodeData_t(); // 1526
		Destruct<NodeData_t>(NodeData_t* pMemory); // 1723
	}
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<NodeData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<NodeData_t, int>::Purge(); // 903
	CUtlMemory<NodeData_t, int>::Purge(); // 1799
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Purge(); // 560
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<NodeData_t, CUtlMemory<NodeData_t, int> >::~CUtlVector(); // 51
} /* size: 377, inline expansions: 28 (1514 bytes) */

// <042F3A3D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:51
inline void World_t::~World_t()
{
} /* size: 0 */

// <00F2A9C4> ../public/worldrenderer/worldschema.h:51
void World_t::~World_t()
{
} /* size: 0 */

// <00EB4775> ../public/worldrenderer/worldschema.h:51
// member functions: 14
// member variables: 4
// static member variable: 1
// struct size: 152
struct World_t {
	/* ../public/worldrenderer/worldschema.h:54 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	World_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:53 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	void Schema_CompileTimeVerificationFunction(World_t* );
	/* ../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* Schema_DynamicBinding(const World_t* );
	/* ../public/worldrenderer/worldschema.h:54 */
	World_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferSave(const World_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferLoad(World_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferSave_World_t(const World_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferLoad_World_t(World_t* , CKV3TransferLoadContext* );
	WorldBuilderParams_t m_builderParams; /* 0 32 */
	CUtlVector<NodeData_t, CUtlMemory<NodeData_t, int> > m_worldNodes; /* 32 32 */
	BakedLightingInfo_t m_worldLightingInfo; /* 64 56 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_entityLumps; /* 120 32 */
	void ~World_t(World_t* );
};

// <00F743DE> ../public/worldrenderer/worldschema.h:51
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 152
struct World_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	World_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:53 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	void Schema_CompileTimeVerificationFunction(World_t* );
	/* ../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* Schema_DynamicBinding(const World_t* );
	/* ../public/worldrenderer/worldschema.h:54 */
	World_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferSave(const World_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferLoad(World_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferSave_World_t(const World_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:54 */
	void KV3TransferLoad_World_t(World_t* , CKV3TransferLoadContext* );
	WorldBuilderParams_t m_builderParams; /* 0 32 */
	CUtlVector<NodeData_t, CUtlMemory<NodeData_t, int> > m_worldNodes; /* 32 32 */
	BakedLightingInfo_t m_worldLightingInfo; /* 64 56 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_entityLumps; /* 120 32 */
};

// <042ABF25> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:51
// member functions: 16
// member variables: 4
// static member variable: 1
// struct size: 152
struct World_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	World_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	void Schema_CompileTimeVerificationFunction(World_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53 */
	const CSchemaClassInfo* Schema_DynamicBinding(const World_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:54 */
	World_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:54 */
	void KV3TransferSave(const World_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:54 */
	void KV3TransferLoad(World_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:54 */
	void KV3TransferSave_World_t(const World_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:54 */
	void KV3TransferLoad_World_t(World_t* , CKV3TransferLoadContext* );
	WorldBuilderParams_t m_builderParams; /* 0 32 */
	CUtlVector<NodeData_t, CUtlMemory<NodeData_t, int> > m_worldNodes; /* 32 32 */
	BakedLightingInfo_t m_worldLightingInfo; /* 64 56 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_entityLumps; /* 120 32 */
	void ~World_t(World_t* );
	void World_t(World_t* );
	World_t& operator=(World_t* , const World_t& );
};

// <042FCEE1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:53
inline void World_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00F3F546> ../public/worldrenderer/worldschema.h:54
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <003BC13C> ../public/worldrenderer/worldschema.h:65
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 8
struct VoxelVisBlockOffset_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:67 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:67 */
	VoxelVisBlockOffset_t* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:67 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:67 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:67 */
	void Schema_CompileTimeVerificationFunction(VoxelVisBlockOffset_t* );
	/* ../public/worldrenderer/worldschema.h:67 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:67 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:67 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VoxelVisBlockOffset_t* );
	/* ../public/worldrenderer/worldschema.h:68 */
	VoxelVisBlockOffset_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:68 */
	void KV3TransferSave(const VoxelVisBlockOffset_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:68 */
	void KV3TransferLoad(VoxelVisBlockOffset_t* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:68 */
	void KV3TransferSave_VoxelVisBlockOffset_t(const VoxelVisBlockOffset_t* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:68 */
	void KV3TransferLoad_VoxelVisBlockOffset_t(VoxelVisBlockOffset_t* , CKV3TransferLoadContext* );
	uint32 m_nOffset; /* 0 4 */
	uint32 m_nElementCount; /* 4 4 */
};

// <042D7CC2> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:65
// member functions: 13
// member variables: 2
// static member variable: 1
// struct size: 8
struct VoxelVisBlockOffset_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:68 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	VoxelVisBlockOffset_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	void Schema_CompileTimeVerificationFunction(VoxelVisBlockOffset_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67 */
	const CSchemaClassInfo* Schema_DynamicBinding(const VoxelVisBlockOffset_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:68 */
	VoxelVisBlockOffset_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:68 */
	void KV3TransferSave(const VoxelVisBlockOffset_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:68 */
	void KV3TransferLoad(VoxelVisBlockOffset_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:68 */
	void KV3TransferSave_VoxelVisBlockOffset_t(const VoxelVisBlockOffset_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:68 */
	void KV3TransferLoad_VoxelVisBlockOffset_t(VoxelVisBlockOffset_t* , CKV3TransferLoadContext* );
	uint32 m_nOffset; /* 0 4 */
	uint32 m_nElementCount; /* 4 4 */
};

// <042FCEBC> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:67
inline void VoxelVisBlockOffset_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <00EE12E9> ../public/worldrenderer/worldschema.h:74
// member functions: 4
// member variable: 1
// class size: 4
class CVisBlockOffsetBuild {
private:
	uint32 m_nOffset; /* 0 4 */
	/* ../public/worldrenderer/worldschema.h:78 */
	uint32 GetOffset(const CVisBlockOffsetBuild* );
	/* ../public/worldrenderer/worldschema.h:90 */
	VoxelVisBlockOffset_t AllocOffset(CVisBlockOffsetBuild* , uint32, uint32);
	uint32 GetOffset(const class CVisBlockOffsetBuild  *); /* linkage=_ZNK20CVisBlockOffsetBuild9GetOffsetEv */
	class VoxelVisBlockOffset_t AllocOffset(class CVisBlockOffsetBuild *, uint32, uint32); /* linkage=_ZN20CVisBlockOffsetBuild11AllocOffsetEjj */
};

// <00F3F52D> ../public/worldrenderer/worldschema.h:78
inline void CVisBlockOffsetBuild::GetOffset()
{
} /* size: 0 */

// <00F3F4F0> ../public/worldrenderer/worldschema.h:90
// variable: 1
inline void CVisBlockOffsetBuild::AllocOffset(uint32 nCount, uint32 nSize)
{
	VoxelVisBlockOffset_t tmp; // 92
} /* size: 0, variables: 1 */

// <003BC2EA> ../public/worldrenderer/worldschema.h:101
// member functions: 14
// member variables: 4
// class size: 8
class CVoxelVisNode {
	uint32 m_nIsLeaf:1; /* 0: 0 4 */
	uint32 m_nFirstChildOrRegion:31; /* 0: 1 4 */
	uint32 m_nRegionCount:8; /* 4: 0 4 */
	uint32 m_nEnclosedClusterList:24; /* 4: 8 4 */
	/* ../public/worldrenderer/worldschema.h:109 */
	void SetClusterListIndex(CVoxelVisNode* , int);
	/* ../public/worldrenderer/worldschema.h:123 */
	bool HasEnclosedClusterList(const CVoxelVisNode* );
	/* ../public/worldrenderer/worldschema.h:129 */
	void InitAsLeaf(CVoxelVisNode* , uint);
	/* ../public/worldrenderer/worldschema.h:137 */
	bool IsLeaf(const CVoxelVisNode* );
	/* ../public/worldrenderer/worldschema.h:138 */
	uint FirstChildNode(const CVoxelVisNode* );
	/* ../public/worldrenderer/worldschema.h:139 */
	uint FirstRegion(const CVoxelVisNode* );
	/* ../public/worldrenderer/worldschema.h:140 */
	uint32 RegionCount(const CVoxelVisNode* );
	void SetClusterListIndex(class CVoxelVisNode *, int); /* linkage=_ZN13CVoxelVisNode19SetClusterListIndexEi */
	bool HasEnclosedClusterList(const class CVoxelVisNode  *); /* linkage=_ZNK13CVoxelVisNode22HasEnclosedClusterListEv */
	void InitAsLeaf(class CVoxelVisNode *, uint); /* linkage=_ZN13CVoxelVisNode10InitAsLeafEj */
	bool IsLeaf(const class CVoxelVisNode  *); /* linkage=_ZNK13CVoxelVisNode6IsLeafEv */
	uint FirstChildNode(const class CVoxelVisNode  *); /* linkage=_ZNK13CVoxelVisNode14FirstChildNodeEv */
	uint FirstRegion(const class CVoxelVisNode  *); /* linkage=_ZNK13CVoxelVisNode11FirstRegionEv */
	uint32 RegionCount(const class CVoxelVisNode  *); /* linkage=_ZNK13CVoxelVisNode11RegionCountEv */
};

// <00F3F49E> ../public/worldrenderer/worldschema.h:109
// variables: 3
inline void CVoxelVisNode::SetClusterListIndex(int nListIndex)
{
	const uint32  nEmptyValue; // 111
	const char   __FUNCTION__; // 52660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
} /* size: 0, variables: 2 */

// <003DADFA> ../public/worldrenderer/worldschema.h:123
// variable: 1
inline void CVoxelVisNode::HasEnclosedClusterList()
{
	const uint32  nEmptyValue; // 125
} /* size: 0, variables: 1 */

// <00F3F479> ../public/worldrenderer/worldschema.h:129
inline void CVoxelVisNode::InitAsLeaf(uint nRegion)
{
} /* size: 0 */

// <003DADE1> ../public/worldrenderer/worldschema.h:137
inline void CVoxelVisNode::IsLeaf()
{
} /* size: 0 */

// <003DADC8> ../public/worldrenderer/worldschema.h:138
inline void CVoxelVisNode::FirstChildNode()
{
} /* size: 0 */

// <003BC43B> ../public/worldrenderer/worldschema.h:143
// member functions: 2
// member variables: 4
// class size: 8
class CVoxelVisRegion {
	uint64 m_nCluster:15; /* 0: 0 8 */
	uint64 m_nIsIntersectingGeo:1; /* 0:15 8 */
	uint64 m_nLeafIndex:24; /* 0:16 8 */
	uint64 m_nMaskIndex:24; /* 0:40 8 */
	/* ../public/worldrenderer/worldschema.h:151 */
	bool IsSolid(const CVoxelVisRegion* );
	/* ../public/worldrenderer/worldschema.h:152 */
	uint32 GetCluster(const CVoxelVisRegion* );
};

// <003BC4DA> ../public/worldrenderer/worldschema.h:157
// member variables: 2
// struct size: 8
struct VisClusterListEntry_t {
	uint32 m_nStart; /* 0 4 */
	uint32 m_nCount; /* 4 4 */
};

// <00F3B90A> ../public/worldrenderer/worldschema.h:173
void CVoxelVisibility::CVoxelVisibility()
{
} /* size: 0 */

// <00F3B8EE> ../public/worldrenderer/worldschema.h:173
inline void CVoxelVisibility::CVoxelVisibility()
{
} /* size: 0 */

// <00F39B60> ../public/worldrenderer/worldschema.h:173
void CVoxelVisibility::~CVoxelVisibility()
{
} /* size: 0 */

// <00F39B44> ../public/worldrenderer/worldschema.h:173
inline void CVoxelVisibility::~CVoxelVisibility()
{
} /* size: 0 */

// <0039CE94> ../public/worldrenderer/worldschema.h:173
// member functions: 46
// member variables: 20
// static member variable: 1
// class size: 160
class CVoxelVisibility {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	CVoxelVisibility* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:175 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	void Schema_CompileTimeVerificationFunction(CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:176 */
	CVoxelVisibility* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferSave(const CVoxelVisibility* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferLoad(CVoxelVisibility* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferSave_CVoxelVisibility(const CVoxelVisibility* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferLoad_CVoxelVisibility(CVoxelVisibility* , CKV3TransferLoadContext* );
	const class CVoxelVisNode * m_pTree; /* 0 8 */
	const class CVoxelVisRegion * m_pRegions; /* 8 8 */
	const byte * m_pBlocks; /* 16 8 */
	const class VisClusterListEntry_t * m_pEnclosedClusterLists; /* 24 8 */
	const uint16 * m_pEnclosedClusters; /* 32 8 */
	const uint64 * m_pMasks; /* 40 8 */
	CUtlMemory<unsigned char, int> m_pvsData; /* 48 16 */
	uint32 m_nBaseClusterCount; /* 64 4 */
	uint32 m_nPVSBytesPerCluster; /* 68 4 */
	Vector m_vMinBounds; /* 72 12 */
	Vector m_vMaxBounds; /* 84 12 */
	float m_flGridSize; /* 96 4 */
	uint32 m_nSkyVisibilityCluster; /* 100 4 */
	uint32 m_nSunVisibilityCluster; /* 104 4 */
	VoxelVisBlockOffset_t m_NodeBlock; /* 108 8 */
	VoxelVisBlockOffset_t m_RegionBlock; /* 116 8 */
	VoxelVisBlockOffset_t m_EnclosedClusterListBlock; /* 124 8 */
	VoxelVisBlockOffset_t m_EnclosedClustersBlock; /* 132 8 */
	VoxelVisBlockOffset_t m_MasksBlock; /* 140 8 */
	VoxelVisBlockOffset_t m_nVisBlocks; /* 148 8 */
	/* ../public/worldrenderer/worldschema.h:209 */
	uint32 NodeCount(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:210 */
	uint32 RegionCount(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:211 */
	int ClusterCount(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:212 */
	bool IsValidCluster(const CVoxelVisibility* , int);
	/* ../public/worldrenderer/worldschema.h:213 */
	const uint32* GetVisBits(const CVoxelVisibility* , int);
	/* ../public/worldrenderer/worldschema.h:215 */
	bool HasSunVisiblityData(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:216 */
	bool HasSkyVisiblityData(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:218 */
	uint32 PVSBytes(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:219 */
	uint32 PVSDWordCount(const CVoxelVisibility* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CVoxelVisibility17GetPrimaryBindingEv */
	class CVoxelVisibility * Schema_MarkHelperFn(void); /* linkage=_ZN16CVoxelVisibility19Schema_MarkHelperFnEv */
	/* <42fe4c4> ../_generated_code/engine2/linuxsteamrt64/release/worldschema_h_schema.gen_cpp:537 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CVoxelVisibility15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <42fedb5> ../_generated_code/engine2/linuxsteamrt64/release/worldschema_h_schema.gen_cpp:576 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CVoxelVisibility32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibility38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CVoxelVisibility20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CVoxelVisibility22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility21Schema_DynamicBindingEv */
	class CVoxelVisibility * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CVoxelVisibility32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CVoxelVisibility  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CVoxelVisibility15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CVoxelVisibility *, class CKV3TransferLoadContext *); /* linkage=_ZN16CVoxelVisibility15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CVoxelVisibility(const class CVoxelVisibility  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CVoxelVisibility32KV3TransferSave_CVoxelVisibilityEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CVoxelVisibility(class CVoxelVisibility *, class CKV3TransferLoadContext *); /* linkage=_ZN16CVoxelVisibility32KV3TransferLoad_CVoxelVisibilityEP23CKV3TransferLoadContext */
	uint32 NodeCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility9NodeCountEv */
	uint32 RegionCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility11RegionCountEv */
	int ClusterCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility12ClusterCountEv */
	bool IsValidCluster(const class CVoxelVisibility  *, int); /* linkage=_ZNK16CVoxelVisibility14IsValidClusterEi */
	const uint32  * GetVisBits(const class CVoxelVisibility  *, int); /* linkage=_ZNK16CVoxelVisibility10GetVisBitsEi */
	bool HasSunVisiblityData(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility19HasSunVisiblityDataEv */
	bool HasSkyVisiblityData(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility19HasSkyVisiblityDataEv */
	uint32 PVSBytes(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility8PVSBytesEv */
	uint32 PVSDWordCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility13PVSDWordCountEv */
	void ~CVoxelVisibility(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibilityD4Ev */
	void CVoxelVisibility(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibilityC4Ev */
};

// <00EB5744> ../public/worldrenderer/worldschema.h:173
// member functions: 48
// member variables: 20
// static member variable: 1
// class size: 160
class CVoxelVisibility {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	CVoxelVisibility* Schema_MarkHelperFn(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/worldrenderer/worldschema.h:175 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	void Schema_CompileTimeVerificationFunction(CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	const char* Schema_StaticClassname(void);
	/* ../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:176 */
	CVoxelVisibility* KV3TransferAllocateClassInstance(const char* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferSave(const CVoxelVisibility* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferLoad(CVoxelVisibility* , CKV3TransferLoadContext* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferSave_CVoxelVisibility(const CVoxelVisibility* , CKV3TransferSaveContext* );
	/* ../public/worldrenderer/worldschema.h:176 */
	void KV3TransferLoad_CVoxelVisibility(CVoxelVisibility* , CKV3TransferLoadContext* );
	const class CVoxelVisNode * m_pTree; /* 0 8 */
	const class CVoxelVisRegion * m_pRegions; /* 8 8 */
	const byte * m_pBlocks; /* 16 8 */
	const class VisClusterListEntry_t * m_pEnclosedClusterLists; /* 24 8 */
	const uint16 * m_pEnclosedClusters; /* 32 8 */
	const uint64 * m_pMasks; /* 40 8 */
	CUtlMemory<unsigned char, int> m_pvsData; /* 48 16 */
	uint32 m_nBaseClusterCount; /* 64 4 */
	uint32 m_nPVSBytesPerCluster; /* 68 4 */
	Vector m_vMinBounds; /* 72 12 */
	Vector m_vMaxBounds; /* 84 12 */
	float m_flGridSize; /* 96 4 */
	uint32 m_nSkyVisibilityCluster; /* 100 4 */
	uint32 m_nSunVisibilityCluster; /* 104 4 */
	VoxelVisBlockOffset_t m_NodeBlock; /* 108 8 */
	VoxelVisBlockOffset_t m_RegionBlock; /* 116 8 */
	VoxelVisBlockOffset_t m_EnclosedClusterListBlock; /* 124 8 */
	VoxelVisBlockOffset_t m_EnclosedClustersBlock; /* 132 8 */
	VoxelVisBlockOffset_t m_MasksBlock; /* 140 8 */
	VoxelVisBlockOffset_t m_nVisBlocks; /* 148 8 */
	/* ../public/worldrenderer/worldschema.h:209 */
	uint32 NodeCount(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:210 */
	uint32 RegionCount(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:211 */
	int ClusterCount(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:212 */
	bool IsValidCluster(const CVoxelVisibility* , int);
	/* ../public/worldrenderer/worldschema.h:213 */
	const uint32* GetVisBits(const CVoxelVisibility* , int);
	/* ../public/worldrenderer/worldschema.h:215 */
	bool HasSunVisiblityData(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:216 */
	bool HasSkyVisiblityData(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:218 */
	uint32 PVSBytes(const CVoxelVisibility* );
	/* ../public/worldrenderer/worldschema.h:219 */
	uint32 PVSDWordCount(const CVoxelVisibility* );
	void ~CVoxelVisibility(CVoxelVisibility* );
	void CVoxelVisibility(CVoxelVisibility* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CVoxelVisibility17GetPrimaryBindingEv */
	class CVoxelVisibility * Schema_MarkHelperFn(void); /* linkage=_ZN16CVoxelVisibility19Schema_MarkHelperFnEv */
	/* <42fe4c4> ../_generated_code/engine2/linuxsteamrt64/release/worldschema_h_schema.gen_cpp:537 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CVoxelVisibility15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <42fedb5> ../_generated_code/engine2/linuxsteamrt64/release/worldschema_h_schema.gen_cpp:576 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CVoxelVisibility32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibility38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CVoxelVisibility20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CVoxelVisibility22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility21Schema_DynamicBindingEv */
	class CVoxelVisibility * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CVoxelVisibility32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CVoxelVisibility  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CVoxelVisibility15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CVoxelVisibility *, class CKV3TransferLoadContext *); /* linkage=_ZN16CVoxelVisibility15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CVoxelVisibility(const class CVoxelVisibility  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CVoxelVisibility32KV3TransferSave_CVoxelVisibilityEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CVoxelVisibility(class CVoxelVisibility *, class CKV3TransferLoadContext *); /* linkage=_ZN16CVoxelVisibility32KV3TransferLoad_CVoxelVisibilityEP23CKV3TransferLoadContext */
	uint32 NodeCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility9NodeCountEv */
	uint32 RegionCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility11RegionCountEv */
	int ClusterCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility12ClusterCountEv */
	bool IsValidCluster(const class CVoxelVisibility  *, int); /* linkage=_ZNK16CVoxelVisibility14IsValidClusterEi */
	const uint32  * GetVisBits(const class CVoxelVisibility  *, int); /* linkage=_ZNK16CVoxelVisibility10GetVisBitsEi */
	bool HasSunVisiblityData(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility19HasSunVisiblityDataEv */
	bool HasSkyVisiblityData(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility19HasSkyVisiblityDataEv */
	uint32 PVSBytes(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility8PVSBytesEv */
	uint32 PVSDWordCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility13PVSDWordCountEv */
	void ~CVoxelVisibility(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibilityD4Ev */
	void CVoxelVisibility(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibilityC4Ev */
};

// <042AC139> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:173
// member functions: 46
// member variables: 20
// static member variable: 1
// class size: 160
class CVoxelVisibility {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	CVoxelVisibility* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	void Schema_CompileTimeVerificationFunction(CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:176 */
	CVoxelVisibility* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:176 */
	void KV3TransferSave(const CVoxelVisibility* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:176 */
	void KV3TransferLoad(CVoxelVisibility* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:176 */
	void KV3TransferSave_CVoxelVisibility(const CVoxelVisibility* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:176 */
	void KV3TransferLoad_CVoxelVisibility(CVoxelVisibility* , CKV3TransferLoadContext* );
	const class CVoxelVisNode * m_pTree; /* 0 8 */
	const class CVoxelVisRegion * m_pRegions; /* 8 8 */
	const byte * m_pBlocks; /* 16 8 */
	const class VisClusterListEntry_t * m_pEnclosedClusterLists; /* 24 8 */
	const uint16 * m_pEnclosedClusters; /* 32 8 */
	const uint64 * m_pMasks; /* 40 8 */
	CUtlMemory<unsigned char, int> m_pvsData; /* 48 16 */
	uint32 m_nBaseClusterCount; /* 64 4 */
	uint32 m_nPVSBytesPerCluster; /* 68 4 */
	Vector m_vMinBounds; /* 72 12 */
	Vector m_vMaxBounds; /* 84 12 */
	float m_flGridSize; /* 96 4 */
	uint32 m_nSkyVisibilityCluster; /* 100 4 */
	uint32 m_nSunVisibilityCluster; /* 104 4 */
	VoxelVisBlockOffset_t m_NodeBlock; /* 108 8 */
	VoxelVisBlockOffset_t m_RegionBlock; /* 116 8 */
	VoxelVisBlockOffset_t m_EnclosedClusterListBlock; /* 124 8 */
	VoxelVisBlockOffset_t m_EnclosedClustersBlock; /* 132 8 */
	VoxelVisBlockOffset_t m_MasksBlock; /* 140 8 */
	VoxelVisBlockOffset_t m_nVisBlocks; /* 148 8 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:209 */
	uint32 NodeCount(const CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:210 */
	uint32 RegionCount(const CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:211 */
	int ClusterCount(const CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:212 */
	bool IsValidCluster(const CVoxelVisibility* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:213 */
	const uint32* GetVisBits(const CVoxelVisibility* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:215 */
	bool HasSunVisiblityData(const CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:216 */
	bool HasSkyVisiblityData(const CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:218 */
	uint32 PVSBytes(const CVoxelVisibility* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:219 */
	uint32 PVSDWordCount(const CVoxelVisibility* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CVoxelVisibility17GetPrimaryBindingEv */
	class CVoxelVisibility * Schema_MarkHelperFn(void); /* linkage=_ZN16CVoxelVisibility19Schema_MarkHelperFnEv */
	/* <42fe4c4> ../_generated_code/engine2/linuxsteamrt64/release/worldschema_h_schema.gen_cpp:537 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CVoxelVisibility15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <42fedb5> ../_generated_code/engine2/linuxsteamrt64/release/worldschema_h_schema.gen_cpp:576 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CVoxelVisibility32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibility38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CVoxelVisibility20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CVoxelVisibility22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility21Schema_DynamicBindingEv */
	class CVoxelVisibility * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CVoxelVisibility32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CVoxelVisibility  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CVoxelVisibility15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CVoxelVisibility *, class CKV3TransferLoadContext *); /* linkage=_ZN16CVoxelVisibility15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CVoxelVisibility(const class CVoxelVisibility  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CVoxelVisibility32KV3TransferSave_CVoxelVisibilityEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CVoxelVisibility(class CVoxelVisibility *, class CKV3TransferLoadContext *); /* linkage=_ZN16CVoxelVisibility32KV3TransferLoad_CVoxelVisibilityEP23CKV3TransferLoadContext */
	uint32 NodeCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility9NodeCountEv */
	uint32 RegionCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility11RegionCountEv */
	int ClusterCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility12ClusterCountEv */
	bool IsValidCluster(const class CVoxelVisibility  *, int); /* linkage=_ZNK16CVoxelVisibility14IsValidClusterEi */
	const uint32  * GetVisBits(const class CVoxelVisibility  *, int); /* linkage=_ZNK16CVoxelVisibility10GetVisBitsEi */
	bool HasSunVisiblityData(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility19HasSunVisiblityDataEv */
	bool HasSkyVisiblityData(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility19HasSkyVisiblityDataEv */
	uint32 PVSBytes(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility8PVSBytesEv */
	uint32 PVSDWordCount(const class CVoxelVisibility  *); /* linkage=_ZNK16CVoxelVisibility13PVSDWordCountEv */
	void ~CVoxelVisibility(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibilityD4Ev */
	void CVoxelVisibility(class CVoxelVisibility *); /* linkage=_ZN16CVoxelVisibilityC4Ev */
};

// <042FCE97> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/worldrenderer/worldschema.h:175
inline void CVoxelVisibility::Schema_DynamicBinding()
{
} /* size: 0 */

// <003DADAF> ../public/worldrenderer/worldschema.h:209
inline void CVoxelVisibility::NodeCount()
{
} /* size: 0 */

// <003DAD96> ../public/worldrenderer/worldschema.h:211
inline void CVoxelVisibility::ClusterCount()
{
} /* size: 0 */

// <003DAD71> ../public/worldrenderer/worldschema.h:212
inline void CVoxelVisibility::IsValidCluster(int nClusterIndex)
{
} /* size: 0 */

// <003DAD4C> ../public/worldrenderer/worldschema.h:213
inline void CVoxelVisibility::GetVisBits(int nPVSIndex)
{
} /* size: 0 */

// <003DAD33> ../public/worldrenderer/worldschema.h:215
inline void CVoxelVisibility::HasSunVisiblityData()
{
} /* size: 0 */

// <003DAD1A> ../public/worldrenderer/worldschema.h:216
inline void CVoxelVisibility::HasSkyVisiblityData()
{
} /* size: 0 */

// <003DAD01> ../public/worldrenderer/worldschema.h:218
inline void CVoxelVisibility::PVSBytes()
{
} /* size: 0 */

// <003DACE8> ../public/worldrenderer/worldschema.h:219
inline void CVoxelVisibility::PVSDWordCount()
{
} /* size: 0 */


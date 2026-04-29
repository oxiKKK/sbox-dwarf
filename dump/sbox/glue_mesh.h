
//
// sbox/glue_mesh.h
//
//	referenced by: libengine2.so
//
//	class: 1
//	structs: 8
//

// <011ECE5A> sbox/glue_mesh.h:11
// member variables: 5
// struct size: 20
struct VertexField_t {
	uint32 format; /* 0 4 */
	int nOffset; /* 4 4 */
	int nNameSize; /* 8 4 */
	int nNameOffset; /* 12 4 */
	int nSemanticIndex; /* 16 4 */
};

// <011ECEB9> sbox/glue_mesh.h:20
// member variables: 2
// struct size: 52
struct SboxBoxDesc_t {
	CTransformUnaligned transform; /* 0 40 */
	Vector extents; /* 40 12 */
};

// <011ECEE8> sbox/glue_mesh.h:26
// member variables: 2
// struct size: 16
struct SboxSphereDesc_t {
	Vector center; /* 0 12 */
	float radius; /* 12 4 */
};

// <011ECF17> sbox/glue_mesh.h:32
// member variables: 3
// struct size: 28
struct SboxCapsuleDesc_t {
	Vector center0; /* 0 12 */
	Vector center1; /* 12 12 */
	float radius; /* 24 4 */
};

// <011ECF56> sbox/glue_mesh.h:39
// member variables: 3
// struct size: 48
struct SboxHullDesc_t {
	CTransformUnaligned transform; /* 0 40 */
	int startVertex; /* 40 4 */
	int numVertex; /* 44 4 */
};

// <011ECF95> sbox/glue_mesh.h:46
// member variables: 5
// struct size: 20
struct SboxMeshDesc_t {
	int startVertex; /* 0 4 */
	int numVertex; /* 4 4 */
	int startIndex; /* 8 4 */
	int numIndex; /* 12 4 */
	int startMaterial; /* 16 4 */
};

// <011ECFF4> sbox/glue_mesh.h:55
// member variables: 8
// struct size: 52
struct SboxBoneDesc_t {
	int nameOffset; /* 0 4 */
	int nameLength; /* 4 4 */
	int parentNameOffset; /* 8 4 */
	int parentNameLength; /* 12 4 */
	Vector position; /* 16 12 */
	Quaternion rotation; /* 28 16 */
	float radius; /* 44 4 */
	bool attachment; /* 48 1 */
};

// <011ED083> sbox/glue_mesh.h:67
// member variables: 2
// struct size: 8
struct SboxMeshGroupDesc_t {
	int nameOffset; /* 0 4 */
	int nameLength; /* 4 4 */
};

// <011ED0B2> sbox/glue_mesh.h:73
// member functions: 31
// class size: 1
class MeshGlue {
	/* sbox/glue_mesh.h:77 */
	HRenderMesh_InternalStrong CreateRenderMesh(HMaterial, int, const char* );
	/* sbox/glue_mesh.h:79 */
	HModel CreateModel(CAnimationGroupBuilder* , CPhysBodyDescArray* , CBuilderMaterialGroupArray* , float, CUtlStringToken, float* , HRenderMesh_InternalStrong** , int, int* , MeshGroupMask_t* , SboxMeshGroupDesc_t* , int, Vector* , int, uint32* , int, uint8* , int* , int, SboxSphereDesc_t* , int, SboxCapsuleDesc_t* , int, SboxBoxDesc_t* , int, SboxHullDesc_t* , int, SboxMeshDesc_t* , int, SboxBoneDesc_t* , int, const char* , int, int, int, int, MeshGroupMask_t);
	/* sbox/glue_mesh.h:105 */
	int GetModelNumVertices(HModel);
	/* sbox/glue_mesh.h:106 */
	void GetModelVertices(HModel, SboxVertex_t* , uint32);
	/* sbox/glue_mesh.h:108 */
	int GetModelNumIndices(HModel);
	/* sbox/glue_mesh.h:109 */
	void GetModelIndices(HModel, uint32* , uint32);
	/* sbox/glue_mesh.h:111 */
	int GetModelIndexCount(HModel, int);
	/* sbox/glue_mesh.h:112 */
	int GetModelIndexStart(HModel, int);
	/* sbox/glue_mesh.h:113 */
	int GetModelBaseVertex(HModel, int);
	/* sbox/glue_mesh.h:115 */
	void SetMeshMaterial(HRenderMesh_Internal, HMaterial);
	/* sbox/glue_mesh.h:116 */
	void SetMeshPrimType(HRenderMesh_Internal, int);
	/* sbox/glue_mesh.h:117 */
	void SetMeshBounds(HRenderMesh_Internal, const Vector& , const Vector& );
	/* sbox/glue_mesh.h:118 */
	void SetMeshUvDensity(HRenderMesh_Internal, float);
	/* sbox/glue_mesh.h:120 */
	void SetMeshVertexRange(HRenderMesh_Internal, int32, int32);
	/* sbox/glue_mesh.h:121 */
	void SetMeshIndexRange(HRenderMesh_Internal, int32, int32);
	/* sbox/glue_mesh.h:123 */
	void SetMeshVertexBuffer(HRenderMesh_Internal, VertexBufferHandle_t, void* , int);
	/* sbox/glue_mesh.h:124 */
	void SetMeshIndexBuffer(HRenderMesh_Internal, IndexBufferHandle_t, void* , int);
	/* sbox/glue_mesh.h:126 */
	VertexBufferHandle_t CreateVertexBuffer(int, int, const char* , VertexField_t* , int, void* , int);
	/* sbox/glue_mesh.h:127 */
	VertexBufferHandle_t CreateVertexBuffer(int, const VertexLayout* , void* );
	/* sbox/glue_mesh.h:128 */
	IndexBufferHandle_t CreateIndexBuffer(int, bool, void* , int);
	/* sbox/glue_mesh.h:130 */
	void* LockVertexBuffer(VertexBufferHandle_t, int, int);
	/* sbox/glue_mesh.h:131 */
	void UnlockVertexBuffer(VertexBufferHandle_t, void* , int, int);
	/* sbox/glue_mesh.h:133 */
	void* LockIndexBuffer(IndexBufferHandle_t, int, int);
	/* sbox/glue_mesh.h:134 */
	void UnlockIndexBuffer(IndexBufferHandle_t, void* , int, int);
	/* sbox/glue_mesh.h:136 */
	void SetVertexBufferData(VertexBufferHandle_t, void* , int, int);
	/* sbox/glue_mesh.h:137 */
	void SetIndexBufferData(IndexBufferHandle_t, void* , int, int);
	/* sbox/glue_mesh.h:139 */
	VertexBufferHandle_t SetVertexBufferSize(VertexBufferHandle_t, int);
	/* sbox/glue_mesh.h:140 */
	IndexBufferHandle_t SetIndexBufferSize(IndexBufferHandle_t, int);
	/* sbox/glue_mesh.h:142 */
	CUtlBuffer* SerializeMeshBuffers(HModel, int);
	/* sbox/glue_mesh.h:143 */
	CUtlBuffer* SerializeMeshData(HModel, int);
	/* sbox/glue_mesh.h:144 */
	CUtlBuffer* SerializeModelData(HModel);
};


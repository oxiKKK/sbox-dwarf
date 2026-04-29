
//
// scenesystem/meshbuilderdesc.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	classes: 2
//

// <03F34B45> ../scenesystem/meshbuilderdesc.h:9
// function calls: 20
void CMeshBuilderSceneObject::~CMeshBuilderSceneObject()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 9
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 9
} /* size: 185, inline expansions: 20 (634 bytes) */

// <03F346B6> ../scenesystem/meshbuilderdesc.h:9
// function calls: 22
void CMeshBuilderSceneObject::~CMeshBuilderSceneObject()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 9
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	IGenericInterface::~IGenericInterface(); // 1436
	CSceneObject::~CSceneObject(); // 9
	CMeshBuilderSceneObject::~CMeshBuilderSceneObject(); // 9
} /* size: 201, inline expansions: 22 (834 bytes) */

// <03F3469A> ../scenesystem/meshbuilderdesc.h:9
inline void CMeshBuilderSceneObject::~CMeshBuilderSceneObject()
{
} /* size: 0 */

// <03F32E12> ../scenesystem/meshbuilderdesc.h:9
// member functions: 10
// member variables: 9
// class size: 288
class CMeshBuilderSceneObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CMeshBuilderSceneObject(CMeshBuilderSceneObject* , CMeshBuilderSceneObject& );
	void CMeshBuilderSceneObject(CMeshBuilderSceneObject* , const CMeshBuilderSceneObject& );
	/* ../scenesystem/meshbuilderdesc.cpp:21 */
	void CMeshBuilderSceneObject(CMeshBuilderSceneObject* );
	/* ../scenesystem/meshbuilderdesc.cpp:35 */
	void SetMeshbuilderData2(CMeshBuilderSceneObject* , void* , int, int, uint16* , int, RenderPrimitiveType_t, RenderInputLayout_t, HMaterial);
	HMaterialStrong m_hMaterial; /* 232 8 */
	RenderInputLayout_t m_hInputLayout; /* 240 8 */
	void * m_pVertexBuffer; /* 248 8 */
	uint16 * m_pIndexBuffer; /* 256 8 */
	int m_nVertexSize; /* 264 4 */
	int m_nVertexRenderCount; /* 268 4 */
	int m_nIndexRenderCount; /* 272 4 */
	RenderPrimitiveType_t m_PrimType; /* 276 4 */
	virtual void ~CMeshBuilderSceneObject(CMeshBuilderSceneObject* );
	void CMeshBuilderSceneObject(class CMeshBuilderSceneObject *, class CMeshBuilderSceneObject &); /* linkage=_ZN23CMeshBuilderSceneObjectC4EOS_ */
	void CMeshBuilderSceneObject(class CMeshBuilderSceneObject *, const class CMeshBuilderSceneObject  &); /* linkage=_ZN23CMeshBuilderSceneObjectC4ERKS_ */
	void CMeshBuilderSceneObject(class CMeshBuilderSceneObject *); /* linkage=_ZN23CMeshBuilderSceneObjectC4Ev */
	void SetMeshbuilderData2(class CMeshBuilderSceneObject *, void *, int, int, uint16 *, int, enum RenderPrimitiveType_t, RenderInputLayout_t, HMaterial); /* linkage=_ZN23CMeshBuilderSceneObject19SetMeshbuilderData2EPviiPti21RenderPrimitiveType_tP21RenderInputLayout_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	virtual void ~CMeshBuilderSceneObject(class CMeshBuilderSceneObject *); /* linkage=_ZN23CMeshBuilderSceneObjectD4Ev */
} __attribute__((__aligned__(16)));

// <03F269E9> ../scenesystem/meshbuilderdesc.h:31
// member functions: 22
// member variable: 1
// vtable entries: 6
// class size: 8
class CMeshBuilderSceneObjectDesc : public CBaseSceneObjectDesc {
public:
	/* class CBaseSceneObjectDesc <ancestor>; */ /* 0 0 */
	void ~CMeshBuilderSceneObjectDesc(CMeshBuilderSceneObjectDesc* );
	void CMeshBuilderSceneObjectDesc(CMeshBuilderSceneObjectDesc* , CMeshBuilderSceneObjectDesc& );
	void CMeshBuilderSceneObjectDesc(CMeshBuilderSceneObjectDesc* , const CMeshBuilderSceneObjectDesc& );
	/* ../scenesystem/meshbuilderdesc.cpp:54 */
	void CMeshBuilderSceneObjectDesc(CMeshBuilderSceneObjectDesc* );
	/* ../scenesystem/meshbuilderdesc.h:36 */
	virtual const char* GetTypeName(CMeshBuilderSceneObjectDesc* );
	/* ../scenesystem/meshbuilderdesc.cpp:58 */
	virtual CSceneObject* Create(CMeshBuilderSceneObjectDesc* );
	/* ../scenesystem/meshbuilderdesc.cpp:190 */
	virtual void GeneratePrimitives(CMeshBuilderSceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../scenesystem/meshbuilderdesc.cpp:199 */
	virtual void DrawArray(CMeshBuilderSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/meshbuilderdesc.cpp:205 */
	virtual void DrawArrayExt(CMeshBuilderSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../scenesystem/meshbuilderdesc.cpp:81 */
	void DrawPrimitive(CMeshBuilderSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , const IMaterial2* , IMaterialMode* , ISceneLayer* , bool, SceneSystemPerFrameStats_t& );
	/* ../scenesystem/meshbuilderdesc.cpp:228 */
	virtual void UpdateBoundingBoxToMatchTransform(CMeshBuilderSceneObjectDesc* , CSceneObject* );
	void ~CMeshBuilderSceneObjectDesc(class CMeshBuilderSceneObjectDesc *); /* linkage=_ZN27CMeshBuilderSceneObjectDescD4Ev */
	void CMeshBuilderSceneObjectDesc(class CMeshBuilderSceneObjectDesc *, class CMeshBuilderSceneObjectDesc &); /* linkage=_ZN27CMeshBuilderSceneObjectDescC4EOS_ */
	void CMeshBuilderSceneObjectDesc(class CMeshBuilderSceneObjectDesc *, const class CMeshBuilderSceneObjectDesc  &); /* linkage=_ZN27CMeshBuilderSceneObjectDescC4ERKS_ */
	void CMeshBuilderSceneObjectDesc(class CMeshBuilderSceneObjectDesc *); /* linkage=_ZN27CMeshBuilderSceneObjectDescC4Ev */
	virtual const char  * GetTypeName(class CMeshBuilderSceneObjectDesc *); /* linkage=_ZN27CMeshBuilderSceneObjectDesc11GetTypeNameEv */
	virtual class CSceneObject * Create(class CMeshBuilderSceneObjectDesc *); /* linkage=_ZN27CMeshBuilderSceneObjectDesc6CreateEv */
	virtual void GeneratePrimitives(class CMeshBuilderSceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN27CMeshBuilderSceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKN16ISceneObjectDesc24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	virtual void DrawArray(class CMeshBuilderSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN27CMeshBuilderSceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	virtual void DrawArrayExt(class CMeshBuilderSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN27CMeshBuilderSceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	void DrawPrimitive(class CMeshBuilderSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, const class IMaterial2  *, class IMaterialMode *, class ISceneLayer *, bool, class SceneSystemPerFrameStats_t &); /* linkage=_ZN27CMeshBuilderSceneObjectDesc13DrawPrimitiveEP14IRenderContextP20CMeshDrawPrimitive_tPK10IMaterial2P13IMaterialModeP11ISceneLayerbR26SceneSystemPerFrameStats_t */
	/* <3f466d8> ../scenesystem/meshbuilderdesc.cpp:228 */
	virtual void UpdateBoundingBoxToMatchTransform(class CMeshBuilderSceneObjectDesc *, class CSceneObject *); /* linkage=_ZN27CMeshBuilderSceneObjectDesc33UpdateBoundingBoxToMatchTransformEP12CSceneObject */
};

// <03F3E3E9> ../scenesystem/meshbuilderdesc.h:36
void CMeshBuilderSceneObjectDesc::GetTypeName()
{
} /* size: 12 */


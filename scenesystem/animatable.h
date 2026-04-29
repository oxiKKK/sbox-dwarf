
//
// scenesystem/animatable.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	class: 1
//	struct: 1
//

// <03E63204> ../scenesystem/animatable.h:14
// member variables: 6
// struct size: 72
struct DrawValues_t {
	RenderInputLayout_t m_hInputLayout; /* 0 8 */
	int m_nBlendWeights; /* 8 4 */
	bool m_bMorphEnabled; /* 12 1 */
	bool m_bVertexCacheEnabled; /* 13 1 */
	const class IMaterial2 * m_pDrawMaterial; /* 16 8 */
	MaterialRenderablePass_t m_boundMaterialParams; /* 24 48 */
};

// <03E6326C> ../scenesystem/animatable.h:29
// member functions: 50
// member variables: 3
// vtable entries: 7
// class size: 16
class CAnimatableSceneObjectDesc : public CBaseSceneObjectDesc {
	/* ../scenesystem/animatable.h:90 */
	struct MorphCompositeSetTracker_t {
		CMorphSet * m_pMorphSet; /* 0 8 */
		CMorphCompositeSet * m_pMorphCompositeSet; /* 8 8 */
	};
	/* ../scenesystem/animatable.h:97 */
	enum {
		MAX_MORPH_SETS_PER_ANIMATABLE_SCENE_OBJECT = 10,
	};
public:
	/* class CBaseSceneObjectDesc <ancestor>; */ /* 0 0 */
	void ~CAnimatableSceneObjectDesc(CAnimatableSceneObjectDesc* );
	void CAnimatableSceneObjectDesc(CAnimatableSceneObjectDesc* , CAnimatableSceneObjectDesc& );
	void CAnimatableSceneObjectDesc(CAnimatableSceneObjectDesc* , const CAnimatableSceneObjectDesc& );
	/* ../scenesystem/animatable.h:32 */
	void CAnimatableSceneObjectDesc(CAnimatableSceneObjectDesc* );
	/* ../scenesystem/animatable.h:34 */
	virtual const char* GetTypeName(CAnimatableSceneObjectDesc* );
	/* ../scenesystem/animatable.cpp:38 */
	virtual CSceneObject* Create(CAnimatableSceneObjectDesc* );
	/* ../scenesystem/animatable.cpp:509 */
	virtual void GeneratePrimitives(CAnimatableSceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../scenesystem/animatable.cpp:369 */
	virtual void DrawArrayExt(CAnimatableSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../scenesystem/animatable.cpp:453 */
	virtual void DrawArray(CAnimatableSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/animatable.cpp:518 */
	virtual void DrawDebug(CAnimatableSceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	/* ../scenesystem/animatable.cpp:616 */
	void SetupFlexWeights(const CRenderMesh* , float* , int, const int16* , float* , float* , float* );
	/* ../scenesystem/animatable.cpp:661 */
	void SetupMorphCompositing(const CRenderMesh* , float* , float* , uint32, int);
	/* ../scenesystem/animatable.cpp:760 */
	void SetupBones(BoneSetupInfo_t* );
	/* ../scenesystem/animatable.cpp:53 */
	int AllocateTransforms(CAnimatableSceneObjectDesc* , CSceneAnimatableObject* , CMeshInstance* , const CMeshDrawPrimitive_t* , uint, bool, uint32, int& );
	/* ../scenesystem/animatable.cpp:810 */
	int FindOrAllocateTransforms(CAnimatableSceneObjectDesc* , CSceneAnimatableObject* , CMeshInstance* , const CRenderSkeleton* , const CMeshDrawPrimitive_t* , uint, bool& );
	/* ../scenesystem/animatable.h:72 */
	virtual bool HasProperty(const CAnimatableSceneObjectDesc* , CUtlStringToken);
	/* ../scenesystem/animatable.cpp:489 */
	void SetupAnimationForObject(CAnimatableSceneObjectDesc* , CSceneView* , CSceneAnimatableObject* );
	/* ../scenesystem/animatable.cpp:116 */
	bool BindMaterial(CAnimatableSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , const IMaterial2* , IMaterialMode* , int, DrawValues_t& , bool, int, ISceneLayer* );
	/* ../scenesystem/animatable.cpp:176 */
	void BindCopyMaterial(CAnimatableSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , DrawValues_t& , int);
	/* ../scenesystem/animatable.cpp:192 */
	void DrawPrimitive(CAnimatableSceneObjectDesc* , IRenderContext* , const DrawViewParams_t& , CMeshDrawPrimitive_t* , const IMaterial2* , IMaterialMode* , int, DrawValues_t& , bool, SceneSystemPerFrameStats_t& , int, ISceneLayer* );
	/* ../scenesystem/animatable.h:83 */
	void SetEntityIndexToDebug(CAnimatableSceneObjectDesc* , int);
private:
	/* ../scenesystem/animatable.cpp:44 */
	ExtraShaderData_t GetExtraShaderData(const CMeshDrawPrimitive_t* , uint);
	/* ../scenesystem/animatable.cpp:459 */
	void DebugObjectTransforms(CAnimatableSceneObjectDesc* , CSceneAnimatableObject* );
	/* ../scenesystem/animatable.cpp:549 */
	bool GetMorphCompositeSetForMeshInstance(CMorphSet* , CMorphCompositeSet** , MorphCompositeSetTracker_t* , int* );
	/* ../scenesystem/animatable.cpp:601 */
	bool IsMorphing(const CRenderMesh* );
	int m_nDebugEntIndex; /* 8 4 */
	bool m_bHasDebuggedEntity; /* 12 1 */
	void SetupMorphCompositing(const class CRenderMesh  *, float *, float *, uint32, int); /* linkage=_ZN26CAnimatableSceneObjectDesc21SetupMorphCompositingEPK11CRenderMeshPfS3_ji */
	void SetupFlexWeights(const class CRenderMesh  *, float *, int, const int16  *, float *, float *, float *); /* linkage=_ZN26CAnimatableSceneObjectDesc16SetupFlexWeightsEPK11CRenderMeshPfiPKsS3_S3_S3_ */
	void SetupBones(class BoneSetupInfo_t *); /* linkage=_ZN26CAnimatableSceneObjectDesc10SetupBonesEP15BoneSetupInfo_t */
	void SetEntityIndexToDebug(class CAnimatableSceneObjectDesc *, int); /* linkage=_ZN26CAnimatableSceneObjectDesc21SetEntityIndexToDebugEi */
	virtual const char  * GetTypeName(class CAnimatableSceneObjectDesc *); /* linkage=_ZN26CAnimatableSceneObjectDesc11GetTypeNameEv */
	void ~CAnimatableSceneObjectDesc(class CAnimatableSceneObjectDesc *); /* linkage=_ZN26CAnimatableSceneObjectDescD4Ev */
	void CAnimatableSceneObjectDesc(class CAnimatableSceneObjectDesc *, class CAnimatableSceneObjectDesc &); /* linkage=_ZN26CAnimatableSceneObjectDescC4EOS_ */
	void CAnimatableSceneObjectDesc(class CAnimatableSceneObjectDesc *, const class CAnimatableSceneObjectDesc  &); /* linkage=_ZN26CAnimatableSceneObjectDescC4ERKS_ */
	void CAnimatableSceneObjectDesc(class CAnimatableSceneObjectDesc *); /* linkage=_ZN26CAnimatableSceneObjectDescC4Ev */
	virtual class CSceneObject * Create(class CAnimatableSceneObjectDesc *); /* linkage=_ZN26CAnimatableSceneObjectDesc6CreateEv */
	virtual void GeneratePrimitives(class CAnimatableSceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN26CAnimatableSceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKN16ISceneObjectDesc24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	virtual void DrawArrayExt(class CAnimatableSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN26CAnimatableSceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	virtual void DrawArray(class CAnimatableSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN26CAnimatableSceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	virtual void DrawDebug(class CAnimatableSceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN26CAnimatableSceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	int AllocateTransforms(class CAnimatableSceneObjectDesc *, class CSceneAnimatableObject *, class CMeshInstance *, const class CMeshDrawPrimitive_t  *, uint, bool, uint32, int &); /* linkage=_ZN26CAnimatableSceneObjectDesc18AllocateTransformsEP22CSceneAnimatableObjectP13CMeshInstancePK20CMeshDrawPrimitive_tjbjRi */
	int FindOrAllocateTransforms(class CAnimatableSceneObjectDesc *, class CSceneAnimatableObject *, class CMeshInstance *, const class CRenderSkeleton  *, const class CMeshDrawPrimitive_t  *, uint, bool &); /* linkage=_ZN26CAnimatableSceneObjectDesc24FindOrAllocateTransformsEP22CSceneAnimatableObjectP13CMeshInstancePK15CRenderSkeletonPK20CMeshDrawPrimitive_tjRb */
	virtual bool HasProperty(const class CAnimatableSceneObjectDesc  *, class CUtlStringToken); /* linkage=_ZNK26CAnimatableSceneObjectDesc11HasPropertyE15CUtlStringToken */
	void SetupAnimationForObject(class CAnimatableSceneObjectDesc *, class CSceneView *, class CSceneAnimatableObject *); /* linkage=_ZN26CAnimatableSceneObjectDesc23SetupAnimationForObjectEP10CSceneViewP22CSceneAnimatableObject */
	bool BindMaterial(class CAnimatableSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, const class IMaterial2  *, class IMaterialMode *, int, class DrawValues_t &, bool, int, class ISceneLayer *); /* linkage=_ZN26CAnimatableSceneObjectDesc12BindMaterialEP14IRenderContextP20CMeshDrawPrimitive_tPK10IMaterial2P13IMaterialModeiR12DrawValues_tbiP11ISceneLayer */
	/* <3eb1040> ../scenesystem/animatable.cpp:176 */
	void BindCopyMaterial(class CAnimatableSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, class DrawValues_t &, int); /* linkage=_ZN26CAnimatableSceneObjectDesc16BindCopyMaterialEP14IRenderContextP20CMeshDrawPrimitive_tR12DrawValues_ti */
	void DrawPrimitive(class CAnimatableSceneObjectDesc *, class IRenderContext *, const class DrawViewParams_t  &, class CMeshDrawPrimitive_t *, const class IMaterial2  *, class IMaterialMode *, int, class DrawValues_t &, bool, class SceneSystemPerFrameStats_t &, int, class ISceneLayer *); /* linkage=_ZN26CAnimatableSceneObjectDesc13DrawPrimitiveEP14IRenderContextRK16DrawViewParams_tP20CMeshDrawPrimitive_tPK10IMaterial2P13IMaterialModeiR12DrawValues_tbR26SceneSystemPerFrameStats_tiP11ISceneLayer */
	class ExtraShaderData_t GetExtraShaderData(const class CMeshDrawPrimitive_t  *, uint); /* linkage=_ZN26CAnimatableSceneObjectDesc18GetExtraShaderDataEPK20CMeshDrawPrimitive_tj */
	/* <3eb111e> ../scenesystem/animatable.cpp:459 */
	void DebugObjectTransforms(class CAnimatableSceneObjectDesc *, class CSceneAnimatableObject *); /* linkage=_ZN26CAnimatableSceneObjectDesc21DebugObjectTransformsEP22CSceneAnimatableObject */
	bool GetMorphCompositeSetForMeshInstance(class CMorphSet *, class CMorphCompositeSet * *, class MorphCompositeSetTracker_t *, int *); /* linkage=_ZN26CAnimatableSceneObjectDesc35GetMorphCompositeSetForMeshInstanceEP9CMorphSetPP18CMorphCompositeSetPNS_26MorphCompositeSetTracker_tEPi */
	bool IsMorphing(const class CRenderMesh  *); /* linkage=_ZN26CAnimatableSceneObjectDesc10IsMorphingEPK11CRenderMesh */
};

// <03E9B274> ../scenesystem/animatable.h:32
void CAnimatableSceneObjectDesc::CAnimatableSceneObjectDesc()
{
} /* size: 0 */

// <03E9B25B> ../scenesystem/animatable.h:32
inline void CAnimatableSceneObjectDesc::CAnimatableSceneObjectDesc()
{
} /* size: 0 */

// <03E9B22C> ../scenesystem/animatable.h:34
void CAnimatableSceneObjectDesc::GetTypeName()
{
} /* size: 12 */

// <03E9B174> ../scenesystem/animatable.h:72
// function call: 1
void CAnimatableSceneObjectDesc::HasProperty(CUtlStringToken nToken)
{
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 72
} /* size: 76, inline expansions: 1 (0 bytes) */

// <02F19D94> ../scenesystem/animatable.h:83
inline void CAnimatableSceneObjectDesc::SetEntityIndexToDebug(int nEntIndex)
{
} /* size: 0 */


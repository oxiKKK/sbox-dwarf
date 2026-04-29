
//
// scenesystem/sceneobjectdescs.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	classes: 2
//	struct: 1
//

// <0400F99A> ../scenesystem/sceneobjectdescs.h:7
void DrawViewParams_t::DrawViewParams_t()
{
} /* size: 0 */

// <0400F97E> ../scenesystem/sceneobjectdescs.h:7
inline void DrawViewParams_t::DrawViewParams_t()
{
} /* size: 0 */

// <03E62F96> ../scenesystem/sceneobjectdescs.h:7
// member function: 1
// member variables: 4
// struct size: 32
struct DrawViewParams_t {
	int m_nViewportWidth; /* 0 4 */
	float m_flFov; /* 4 4 */
	Vector m_vCameraPos; /* 8 12 */
	const class ISceneView * m_pView; /* 24 8 */
	void DrawViewParams_t(DrawViewParams_t* );
};

// <03F39CC8> ../scenesystem/sceneobjectdescs.h:15
void CBaseSceneObjectDesc::CBaseSceneObjectDesc()
{
} /* size: 0 */

// <03F39CAC> ../scenesystem/sceneobjectdescs.h:15
inline void CBaseSceneObjectDesc::CBaseSceneObjectDesc()
{
} /* size: 0 */

// <03FDF9FE> ../scenesystem/sceneobjectdescs.h:15
// member functions: 44
// member variable: 1
// vtable entries: 6
// class size: 8
class CBaseSceneObjectDesc : public ISceneObjectDesc {
	/* ../scenesystem/sceneobjectdescs.h:33 */
	struct PerInstanceParams_t {
		int16 m_nEnvMapIndex; /* 0 2 */
		uint8 m_nCubeArrayIndex; /* 2 1 */
		matrix3x4a_t m_mTransform __attribute__((__aligned__(16))); /* 16 48 */
		Vector4D m_vTint; /* 64 16 */
		/* ../scenesystem/sceneobjectdescs.h:40 */
		void InitFromInstance(PerInstanceParams_t* , const CMeshDrawPrimitive_t* );
		void PerInstanceParams_t(PerInstanceParams_t* );
	} __attribute__((__aligned__(16)));
	/* tag__fprintf: const_type tag not supported! */;
	/* ../scenesystem/sceneobjectdescs.cpp:23 */
	struct MaterialBindState_t {
		const class IMaterial2 * m_pBoundMaterial; /* 0 8 */
		CRenderAttributes * m_pAttributes; /* 8 8 */
		MaterialRenderablePass_t m_passInfo; /* 16 48 */
		uint32 m_nShaderOverrides; /* 64 4 */
		RenderInputLayout_t m_hInputLayout; /* 72 8 */
		void MaterialBindState_t(MaterialBindState_t* );
	};
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~CBaseSceneObjectDesc(CBaseSceneObjectDesc* );
	void CBaseSceneObjectDesc(CBaseSceneObjectDesc* , CBaseSceneObjectDesc& );
	void CBaseSceneObjectDesc(CBaseSceneObjectDesc* , const CBaseSceneObjectDesc& );
	void CBaseSceneObjectDesc(CBaseSceneObjectDesc* );
	/* ../scenesystem/sceneobjectdescs.h:18 */
	virtual const char* GetTypeName(CBaseSceneObjectDesc* );
	/* ../scenesystem/sceneobjectdescs.cpp:39 */
	virtual CSceneObject* Create(CBaseSceneObjectDesc* );
	/* ../scenesystem/sceneobjectdescs.cpp:135 */
	virtual void GeneratePrimitives(CBaseSceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../scenesystem/sceneobjectdescs.cpp:828 */
	virtual void DrawArray(CBaseSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/sceneobjectdescs.cpp:834 */
	virtual void DrawArrayExt(CBaseSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../scenesystem/sceneobjectdescs.cpp:969 */
	virtual void DrawDebug(CBaseSceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
protected:
	/* ../scenesystem/sceneobjectdescs.cpp:409 */
	bool CanInstanceTogether(CBaseSceneObjectDesc* , CMeshDrawPrimitive_t* , CMeshDrawPrimitive_t* );
	/* ../scenesystem/sceneobjectdescs.cpp:446 */
	int AllocateTransforms(CBaseSceneObjectDesc* , int, const PerInstanceParams_t* );
	/* ../scenesystem/sceneobjectdescs.cpp:466 */
	void FillTransforms(CBaseSceneObjectDesc* , SceneSystemTransformEntry_t* , int, const PerInstanceParams_t* );
	/* ../scenesystem/sceneobjectdescs.cpp:482 */
	void BindDrawCall(CBaseSceneObjectDesc* , IRenderContext* , const CMaterialDrawDescriptor* , int& );
	/* ../scenesystem/sceneobjectdescs.cpp:498 */
	bool BindMaterial(CBaseSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , const IMaterial2* , IMaterialMode* , MaterialBindState_t* , RenderInputLayout_t, ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/sceneobjectdescs.cpp:599 */
	void DrawInstances(CBaseSceneObjectDesc* , IRenderContext* , const DrawViewParams_t& , PerInstanceParams_t* , int, CMeshDrawPrimitive_t* , const IMaterial2* , IMaterialMode* , MaterialBindState_t* , bool, SceneSystemPerFrameStats_t& , bool, int, ISceneLayer* , SceneSystemTransformEntry_t* , int);
	/* ../scenesystem/sceneobjectdescs.cpp:752 */
	const IMaterial2* GetMaterialForDraw(CBaseSceneObjectDesc* , const IMaterial2* , const CMaterialDrawDescriptor* , ISceneLayer* , bool* );
	/* ../scenesystem/sceneobjectdescs.cpp:770 */
	void SetBakedLightingAttributes(CBaseSceneObjectDesc* , CMeshDrawPrimitive_t* , ISceneLayer* , CRenderAttributes& );
	/* ../scenesystem/sceneobjectdescs.cpp:47 */
	EBatchFlags CalculateBatchFlags(const CMaterialDrawDescriptor* , ESceneObjectFlags, ESceneObjectTypeFlags, bool);
	/* ../scenesystem/sceneobjectdescs.cpp:97 */
	Vector DebugColor(intp);
	virtual class CSceneObject * Create(class CBaseSceneObjectDesc *); /* linkage=_ZN20CBaseSceneObjectDesc6CreateEv */
	virtual void GeneratePrimitives(class CBaseSceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN20CBaseSceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKN16ISceneObjectDesc24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	virtual void DrawDebug(class CBaseSceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN20CBaseSceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	virtual void DrawArrayExt(class CBaseSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN20CBaseSceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	virtual void DrawArray(class CBaseSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN20CBaseSceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	/* <402a934> ../scenesystem/sceneobjectdescs.cpp:466 */
	void FillTransforms(class CBaseSceneObjectDesc *, class SceneSystemTransformEntry_t *, int, const class PerInstanceParams_t  *); /* linkage=_ZN20CBaseSceneObjectDesc14FillTransformsEP27SceneSystemTransformEntry_tiPKNS_19PerInstanceParams_tE */
	void CBaseSceneObjectDesc(class CBaseSceneObjectDesc *); /* linkage=_ZN20CBaseSceneObjectDescC4Ev */
	virtual const char  * GetTypeName(class CBaseSceneObjectDesc *); /* linkage=_ZN20CBaseSceneObjectDesc11GetTypeNameEv */
	void ~CBaseSceneObjectDesc(class CBaseSceneObjectDesc *); /* linkage=_ZN20CBaseSceneObjectDescD4Ev */
	void CBaseSceneObjectDesc(class CBaseSceneObjectDesc *, class CBaseSceneObjectDesc &); /* linkage=_ZN20CBaseSceneObjectDescC4EOS_ */
	void CBaseSceneObjectDesc(class CBaseSceneObjectDesc *, const class CBaseSceneObjectDesc  &); /* linkage=_ZN20CBaseSceneObjectDescC4ERKS_ */
	bool CanInstanceTogether(class CBaseSceneObjectDesc *, class CMeshDrawPrimitive_t *, class CMeshDrawPrimitive_t *); /* linkage=_ZN20CBaseSceneObjectDesc19CanInstanceTogetherEP20CMeshDrawPrimitive_tS1_ */
	int AllocateTransforms(class CBaseSceneObjectDesc *, int, const class PerInstanceParams_t  *); /* linkage=_ZN20CBaseSceneObjectDesc18AllocateTransformsEiPKNS_19PerInstanceParams_tE */
	void BindDrawCall(class CBaseSceneObjectDesc *, class IRenderContext *, const class CMaterialDrawDescriptor  *, int &); /* linkage=_ZN20CBaseSceneObjectDesc12BindDrawCallEP14IRenderContextPK23CMaterialDrawDescriptorRi */
	bool BindMaterial(class CBaseSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, const class IMaterial2  *, class IMaterialMode *, class MaterialBindState_t *, RenderInputLayout_t, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN20CBaseSceneObjectDesc12BindMaterialEP14IRenderContextP20CMeshDrawPrimitive_tPK10IMaterial2P13IMaterialModePNS_19MaterialBindState_tEP21RenderInputLayout_t__P11ISceneLayerR26SceneSystemPerFrameStats_t */
	void DrawInstances(class CBaseSceneObjectDesc *, class IRenderContext *, const class DrawViewParams_t  &, class PerInstanceParams_t *, int, class CMeshDrawPrimitive_t *, const class IMaterial2  *, class IMaterialMode *, class MaterialBindState_t *, bool, class SceneSystemPerFrameStats_t &, bool, int, class ISceneLayer *, class SceneSystemTransformEntry_t *, int); /* linkage=_ZN20CBaseSceneObjectDesc13DrawInstancesEP14IRenderContextRK16DrawViewParams_tPNS_19PerInstanceParams_tEiP20CMeshDrawPrimitive_tPK10IMaterial2P13IMaterialModePNS_19MaterialBindState_tEbR26SceneSystemPerFrameStats_tbiP11ISceneLayerP27SceneSystemTransformEntry_ti */
	/* <402acee> ../scenesystem/sceneobjectdescs.cpp:752 */
	const class IMaterial2  * GetMaterialForDraw(class CBaseSceneObjectDesc *, const class IMaterial2  *, const class CMaterialDrawDescriptor  *, class ISceneLayer *, bool *); /* linkage=_ZN20CBaseSceneObjectDesc18GetMaterialForDrawEPK10IMaterial2PK23CMaterialDrawDescriptorP11ISceneLayerPb */
	void SetBakedLightingAttributes(class CBaseSceneObjectDesc *, class CMeshDrawPrimitive_t *, class ISceneLayer *, class CRenderAttributes &); /* linkage=_ZN20CBaseSceneObjectDesc26SetBakedLightingAttributesEP20CMeshDrawPrimitive_tP11ISceneLayerR17CRenderAttributes */
	enum EBatchFlags CalculateBatchFlags(const class CMaterialDrawDescriptor  *, enum ESceneObjectFlags, enum ESceneObjectTypeFlags, bool); /* linkage=_ZN20CBaseSceneObjectDesc19CalculateBatchFlagsEPK23CMaterialDrawDescriptor17ESceneObjectFlags21ESceneObjectTypeFlagsb */
	class Vector DebugColor(intp); /* linkage=_ZN20CBaseSceneObjectDesc10DebugColorEx */
};

// <0401DE33> ../scenesystem/sceneobjectdescs.h:18
void CBaseSceneObjectDesc::GetTypeName()
{
} /* size: 12 */

// <0400F9CD> ../scenesystem/sceneobjectdescs.h:33
void PerInstanceParams_t::PerInstanceParams_t()
{
} /* size: 0 */

// <0400F9B1> ../scenesystem/sceneobjectdescs.h:33
inline void PerInstanceParams_t::PerInstanceParams_t()
{
} /* size: 0 */

// <0401DE0E> ../scenesystem/sceneobjectdescs.h:40
inline void PerInstanceParams_t::InitFromInstance(const CMeshDrawPrimitive_t* pPrim)
{
} /* size: 0 */

// <03C15546> ../scenesystem/utils/../sceneobjectdescs.h:79
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject> : public CBaseSceneObjectDesc {
public:
	/* class CBaseSceneObjectDesc <ancestor>; */ /* 0 0 */
	void ~CBaseNonPooledSceneObjectDesc(CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>* );
	void CBaseNonPooledSceneObjectDesc(CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>* , CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>& );
	void CBaseNonPooledSceneObjectDesc(CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>* , const CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>& );
	void CBaseNonPooledSceneObjectDesc(CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>* );
protected:
	/* ../scenesystem/utils/../sceneobjectdescs.h:82 */
	virtual void DeleteNonPooledObject(CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>* , CSceneObject* );
};

// <03C16D02> ../scenesystem/utils/../sceneobjectdescs.h:82
// variable: 1
void CBaseNonPooledSceneObjectDesc<C6FaceSkyboxObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	C6FaceSkyboxObject* pRealObject; // 84
} /* size: 25, variables: 1 */


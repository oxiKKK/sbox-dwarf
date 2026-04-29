
//
// utils/materialsystem2utils.h
//
//	referenced by: libmaterialsystem2.so
//
//	class: 1
//

// <003DF76C> utils/materialsystem2utils.h:23
// member functions: 164
// member variables: 11
// vtable entries: 67
// class size: 232
class CMaterialSystem2Utils : public CTier2AppSystem<IMaterialSystem2Utils, 0> {
public:
	/* class CTier2AppSystem<IMaterialSystem2Utils, 0> <ancestor>; */ /* 0 48 */
	void CMaterialSystem2Utils(CMaterialSystem2Utils* , const CMaterialSystem2Utils& );
	/* utils/materialsystem2utils.cpp:622 */
	virtual bool Connect(CMaterialSystem2Utils* , CreateInterfaceFn);
	/* utils/materialsystem2utils.cpp:635 */
	virtual InitReturnVal_t Init(CMaterialSystem2Utils* );
	/* utils/materialsystem2utils.cpp:663 */
	virtual void Shutdown(CMaterialSystem2Utils* );
	/* utils/materialsystem2utils.cpp:604 */
	virtual const AppSystemInfo_t* GetDependencies(CMaterialSystem2Utils* );
	/* utils/materialsystem2utils.cpp:690 */
	virtual FontHandle_t GetDefaultDebugFont(CMaterialSystem2Utils* , bool);
	/* utils/materialsystem2utils.cpp:711 */
	virtual bool SetMaterialModeState(CMaterialSystem2Utils* , IRenderContext* , const IMaterialMode* , const CRenderAttributes* , RenderInputLayout_t, const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* utils/materialsystem2utils.cpp:772 */
	void UpdateKnownMaterials(CMaterialSystem2Utils* );
	/* utils/materialsystem2utils.cpp:788 */
	void OnMaterialUnload(CMaterialSystem2Utils* , const IMaterial2* );
	/* utils/materialsystem2utils.cpp:796 */
	bool SetCurrentMaterialMode(CMaterialSystem2Utils* , IRenderContext* , const IMaterialMode* , const CRenderAttributes* , uint64, HRenderTexture);
	/* utils/materialsystem2utils.cpp:823 */
	virtual void ResetMaterialCache(CMaterialSystem2Utils* , IRenderContext* );
	/* utils/materialsystem2utils.cpp:828 */
	virtual bool SetDefaultMaterial(CMaterialSystem2Utils* , IRenderContext* , bool);
	/* utils/materialsystem2utils.cpp:840 */
	virtual bool SetTexturedMaterial(CMaterialSystem2Utils* , IRenderContext* , HRenderTexture, bool);
	/* utils/materialsystem2utils.cpp:883 */
	virtual bool SetMaterialMode(CMaterialSystem2Utils* , IRenderContext* , const IMaterialMode* , const CRenderAttributes* , uint64, bool);
	/* utils/materialsystem2utils.cpp:920 */
	virtual void QueueResetMaterialCache(CMaterialSystem2Utils* , CUtlStringToken, float);
	/* utils/materialsystem2utils.cpp:927 */
	virtual void QueueSetDefaultMaterial(CMaterialSystem2Utils* , CUtlStringToken, bool, float);
	/* utils/materialsystem2utils.cpp:935 */
	virtual void QueueSetTexturedMaterial(CMaterialSystem2Utils* , CUtlStringToken, HRenderTexture, bool, float);
	/* utils/materialsystem2utils.cpp:943 */
	virtual void QueueSetMaterialMode(CMaterialSystem2Utils* , CUtlStringToken, const IMaterialMode* , const CRenderAttributes* , uint64, bool, float);
	/* utils/materialsystem2utils.cpp:970 */
	virtual void RenderWireframeSphere(CMaterialSystem2Utils* , IRenderContext* , const Vector& , float, int, int, Color, bool);
	/* utils/materialsystem2utils.cpp:1137 */
	virtual void RenderSphere(CMaterialSystem2Utils* , IRenderContext* , const Vector& , float, int, int, Color, bool, bool);
	/* utils/materialsystem2utils.cpp:1130 */
	virtual void RenderSphere(CMaterialSystem2Utils* , IRenderContext* , const Vector& , float, int, int, Color, const IMaterial2* , const CRenderAttributes* , bool);
	/* utils/materialsystem2utils.cpp:1191 */
	virtual void RenderWireframeBox(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool);
	/* utils/materialsystem2utils.cpp:1265 */
	virtual void RenderWireframeSweptBox(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool);
	/* utils/materialsystem2utils.cpp:1405 */
	virtual void RenderBox(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool);
	/* utils/materialsystem2utils.cpp:1397 */
	virtual void RenderBox(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, const IMaterial2* , const CRenderAttributes* , bool);
	/* utils/materialsystem2utils.cpp:1417 */
	virtual void RenderAxes(CMaterialSystem2Utils* , IRenderContext* , const Vector& , float, bool);
	/* utils/materialsystem2utils.cpp:1443 */
	virtual void RenderAxes(CMaterialSystem2Utils* , IRenderContext* , const matrix3x4_t& , float, bool);
	/* utils/materialsystem2utils.cpp:1480 */
	virtual void RenderLine(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , Color, bool);
	/* utils/materialsystem2utils.cpp:1557 */
	virtual void RenderTriangle(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , const Vector& , Color, bool);
	/* utils/materialsystem2utils.cpp:1569 */
	virtual void RenderTriangle(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , const Vector& , Color, const IMaterial2* , const CRenderAttributes* );
	/* utils/materialsystem2utils.cpp:1578 */
	virtual void RenderQuad(CMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , float, float, float, float, float, float, float, float, float, const Color& );
	/* utils/materialsystem2utils.cpp:1665 */
	virtual void DrawScreenSpaceRectangle(CMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , int, int, int, int, float, float, float, float, int, int, int, int, float, VertexColor_t* );
	/* utils/materialsystem2utils.cpp:1874 */
	virtual void DrawNDCSpaceUntexturedPolygon(CMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , int, Vector2D* );
	/* utils/materialsystem2utils.cpp:1944 */
	virtual bool RenderText(CMaterialSystem2Utils* , IRenderContext* , const char* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:1970 */
	virtual bool RenderText(CMaterialSystem2Utils* , IRenderContext* , const uchar16* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:1996 */
	virtual bool RenderText(CMaterialSystem2Utils* , IRenderContext* , const uchar32* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2022 */
	virtual Vector2D RenderText(CMaterialSystem2Utils* , IRenderContext* , CTextLayoutInfo* , const CRenderAttributes* );
	/* utils/materialsystem2utils.cpp:3227 */
	virtual bool RenderText(CMaterialSystem2Utils* , IRenderContext* , const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende, const Vector2D& , const CRenderAttributes* );
	/* utils/materialsystem2utils.cpp:2032 */
	virtual void Render2DLine(CMaterialSystem2Utils* , IRenderContext* , float, float, float, float, const Color& , const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2184 */
	virtual void RenderRect(CMaterialSystem2Utils* , IRenderContext* , const Vector2D& , const Vector2D& , Color, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2226 */
	virtual void RenderRect(CMaterialSystem2Utils* , IRenderContext* , const Vector2D& , const Vector2D& , const Vector2D& , const Vector2D& , Color, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2271 */
	virtual void RenderRect(CMaterialSystem2Utils* , IRenderContext* , const Vector* , const Color* , const Vector2D* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2296 */
	virtual void RenderOutlinedRect(CMaterialSystem2Utils* , IRenderContext* , const Vector2D& , const Vector2D& , float, Color, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2413 */
	virtual void RenderMeshWithMode(CMaterialSystem2Utils* , IRenderContext* , const MeshBuilderBuffers_t* , const IMaterialMode* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2549 */
	virtual void RenderQuads(CMaterialSystem2Utils* , IRenderContext* , const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2571 */
	virtual void RenderConvexGeometry(CMaterialSystem2Utils* , IRenderContext* , const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2596 */
	virtual void RenderPrimitives(CMaterialSystem2Utils* , IRenderContext* , MaterialPrimitiveType2_t, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:2766 */
	virtual void QueueRenderText(CMaterialSystem2Utils* , CUtlStringToken, const char* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:2788 */
	virtual void QueueRenderText(CMaterialSystem2Utils* , CUtlStringToken, const uchar16* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:2810 */
	virtual void QueueRenderText(CMaterialSystem2Utils* , CUtlStringToken, const uchar32* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:2833 */
	virtual void QueueRenderText(CMaterialSystem2Utils* , CUtlStringToken, const CTextLayoutInfo& , const CRenderAttributes* , float);
	/* utils/materialsystem2utils.cpp:2853 */
	virtual void QueueRenderText(CMaterialSystem2Utils* , Vector2D* , CUtlStringToken, CTextLayoutInfo& , const CRenderAttributes* , float);
	/* utils/materialsystem2utils.cpp:2872 */
	virtual void QueueRender2DLine(CMaterialSystem2Utils* , CUtlStringToken, float, float, float, float, const Color& , const CRenderAttributes* , LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:2893 */
	virtual void QueueRender2DLines(CMaterialSystem2Utils* , CUtlStringToken, const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* , const Color& , const CRenderAttributes* , LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:2915 */
	virtual void QueueRenderRect(CMaterialSystem2Utils* , CUtlStringToken, const Vector2D& , const Vector2D& , const Color& , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:2950 */
	virtual void QueueRenderRect(CMaterialSystem2Utils* , CUtlStringToken, const Vector2D& , const Vector2D& , const Vector2D& , const Vector2D& , const Color& , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:2987 */
	virtual void QueueRenderRect(CMaterialSystem2Utils* , CUtlStringToken, const Vector* , const Color* , const Vector2D* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:3007 */
	virtual void QueueAndOwnRenderMeshWithMode(CMaterialSystem2Utils* , CUtlStringToken, const MeshBuilderBuffers_t* , const IMaterialMode* , CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:3022 */
	virtual void QueueRenderMeshWithMode(CMaterialSystem2Utils* , CUtlStringToken, const MeshBuilderBuffers_t* , const IMaterialMode* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:3048 */
	virtual void QueueRenderQuads(CMaterialSystem2Utils* , CUtlStringToken, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:3069 */
	virtual void QueueRenderConvexGeometry(CMaterialSystem2Utils* , CUtlStringToken, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:3090 */
	virtual void QueueRenderPrimitives(CMaterialSystem2Utils* , CUtlStringToken, MaterialPrimitiveType2_t, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* utils/materialsystem2utils.cpp:3165 */
	virtual void RenderFontTexture(CMaterialSystem2Utils* , IRenderContext* , FontTextureHandle_t, int, int, const CRenderAttributes* );
	/* utils/materialsystem2utils.cpp:3189 */
	virtual void CacheFontTextures(CMaterialSystem2Utils* , const CTextLayoutInfo* );
	/* utils/materialsystem2utils.cpp:3374 */
	virtual int PrepareForRender(CMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, RenderViewport_t* , MaterialRenderablePass_t* , int, const IMaterialMode** );
	/* utils/materialsystem2utils.cpp:3478 */
	virtual bool HasQueuedRender(CMaterialSystem2Utils* , CUtlStringToken);
	/* utils/materialsystem2utils.cpp:3489 */
	virtual void RenderFrame(CMaterialSystem2Utils* , IRenderContext* , CUtlStringToken);
	/* utils/materialsystem2utils.cpp:3199 */
	virtual Vector2D GetRawSize(CMaterialSystem2Utils* , const char* , FontHandle_t);
	/* utils/materialsystem2utils.cpp:3340 */
	virtual void AddToView(CMaterialSystem2Utils* , float);
	/* utils/materialsystem2utils.cpp:3554 */
	virtual bool AllocateCompressionTexturesGPU(CMaterialSystem2Utils* , ImageFormat, int32, int32, int32, const char* , HRenderTextureStrong* , CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCT);
	/* utils/materialsystem2utils.cpp:3619 */
	virtual bool CompressTextureGPU(CMaterialSystem2Utils* , EGPUTextureCompressOptions_t, IRenderContext* , HRenderTexture, HRenderTexture, const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResource, int32);
	/* utils/materialsystem2utils.cpp:578 */
	void CMaterialSystem2Utils(CMaterialSystem2Utils* );
	/* utils/materialsystem2utils.cpp:589 */
	virtual void ~CMaterialSystem2Utils(CMaterialSystem2Utils* );
	/* utils/materialsystem2utils.cpp:2102 */
	void RenderLineBatch(CMaterialSystem2Utils* , IRenderContext* , const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* , const Color& , const CRenderAttributes* , LayoutPositionType_e);
	/* utils/materialsystem2utils.cpp:3506 */
	void Flush(CMaterialSystem2Utils* );
	/* utils/materialsystem2utils.h:190 */
	typedef struct CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> > ViewportLayoutList_t;
private:
	/* utils/materialsystem2utils.cpp:3516 */
	ViewportLayoutList_t& GetLayoutList(CMaterialSystem2Utils* , CUtlStringToken);
	/* utils/materialsystem2utils.cpp:3532 */
	void DestroyLayoutObjects(CMaterialSystem2Utils* , int);
	/* utils/materialsystem2utils.cpp:1027 */
	void RenderSphereInternal(CMaterialSystem2Utils* , IRenderContext* , const Vector& , float, int, int, Color, const IMaterial2* , const CRenderAttributes* , bool);
	/* utils/materialsystem2utils.cpp:1340 */
	void RenderBoxInternal(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, const IMaterial2* , const CRenderAttributes* , bool);
	/* utils/materialsystem2utils.cpp:1504 */
	void RenderTriangleInternal(CMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , const Vector& , Color, const IMaterial2* , const CRenderAttributes* );
	/* utils/materialsystem2utils.cpp:3113 */
	void RenderFontTextureInternal(CMaterialSystem2Utils* , IRenderContext* , FontTextureHandle_t, int, int);
	FontHandle_t m_DebugFont; /* 44 4 */
	FontHandle_t m_DebugFontOutline; /* 48 4 */
	RenderInputLayout_t m_hInputLayout; /* 56 8 */
	HMaterialStrong m_hUIMaterial; /* 64 8 */
	HRenderTextureStrong m_hUIPixel; /* 72 8 */
	CUtlVector<CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >, CUtlMemory<CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >, int> > m_LayoutLists; /* 80 32 */
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)> m_LayoutListMap; /* 112 40* /
	CUtlVector<CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >, CUtlMemory<CUtlVector<IQueuedRenderable*, CUtlMemory<IQueuedRenderable*, int> >, int> > m_viewLayoutLists; /* 152 32 */
	CUtlMap<CUtlStringToken, int, short unsigned int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)> m_viewLayoutListMap; /* 184 40* /
	const class IMaterialMode * m_pTexturedMaterialMode; /* 224 8 */
	void CMaterialSystem2Utils(class CMaterialSystem2Utils *, const class CMaterialSystem2Utils  &); /* linkage=_ZN21CMaterialSystem2UtilsC4ERKS_ */
	virtual bool Connect(class CMaterialSystem2Utils *, CreateInterfaceFn); /* linkage=_ZN21CMaterialSystem2Utils7ConnectEPFPvPKcPiE */
	virtual enum InitReturnVal_t Init(class CMaterialSystem2Utils *); /* linkage=_ZN21CMaterialSystem2Utils4InitEv */
	virtual void Shutdown(class CMaterialSystem2Utils *); /* linkage=_ZN21CMaterialSystem2Utils8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CMaterialSystem2Utils *); /* linkage=_ZN21CMaterialSystem2Utils15GetDependenciesEv */
	/* <4a12e5> utils/materialsystem2utils.cpp:690 */
	virtual FontHandle_t GetDefaultDebugFont(class CMaterialSystem2Utils *, bool); /* linkage=_ZN21CMaterialSystem2Utils19GetDefaultDebugFontEb */
	virtual bool SetMaterialModeState(class CMaterialSystem2Utils *, class IRenderContext *, const class IMaterialMode  *, const class CRenderAttributes  *, RenderInputLayout_t, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZN21CMaterialSystem2Utils20SetMaterialModeStateEP14IRenderContextPK13IMaterialModePK17CRenderAttributesP21RenderInputLayout_t__PK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	/* <4a237e> utils/materialsystem2utils.cpp:772 */
	void UpdateKnownMaterials(class CMaterialSystem2Utils *); /* linkage=_ZN21CMaterialSystem2Utils20UpdateKnownMaterialsEv */
	void OnMaterialUnload(class CMaterialSystem2Utils *, const class IMaterial2  *); /* linkage=_ZN21CMaterialSystem2Utils16OnMaterialUnloadEPK10IMaterial2 */
	bool SetCurrentMaterialMode(class CMaterialSystem2Utils *, class IRenderContext *, const class IMaterialMode  *, const class CRenderAttributes  *, uint64, HRenderTexture); /* linkage=_ZN21CMaterialSystem2Utils22SetCurrentMaterialModeEP14IRenderContextPK13IMaterialModePK17CRenderAttributesy11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	/* <4a1316> utils/materialsystem2utils.cpp:823 */
	virtual void ResetMaterialCache(class CMaterialSystem2Utils *, class IRenderContext *); /* linkage=_ZN21CMaterialSystem2Utils18ResetMaterialCacheEP14IRenderContext */
	/* <4a2b5f> utils/materialsystem2utils.cpp:828 */
	virtual bool SetDefaultMaterial(class CMaterialSystem2Utils *, class IRenderContext *, bool); /* linkage=_ZN21CMaterialSystem2Utils18SetDefaultMaterialEP14IRenderContextb */
	virtual bool SetTexturedMaterial(class CMaterialSystem2Utils *, class IRenderContext *, HRenderTexture, bool); /* linkage=_ZN21CMaterialSystem2Utils19SetTexturedMaterialEP14IRenderContext11CWeakHandleI31InfoForResourceTypeCTextureBaseEb */
	virtual bool SetMaterialMode(class CMaterialSystem2Utils *, class IRenderContext *, const class IMaterialMode  *, const class CRenderAttributes  *, uint64, bool); /* linkage=_ZN21CMaterialSystem2Utils15SetMaterialModeEP14IRenderContextPK13IMaterialModePK17CRenderAttributesyb */
	virtual void QueueResetMaterialCache(class CMaterialSystem2Utils *, class CUtlStringToken, float); /* linkage=_ZN21CMaterialSystem2Utils23QueueResetMaterialCacheE15CUtlStringTokenf */
	virtual void QueueSetDefaultMaterial(class CMaterialSystem2Utils *, class CUtlStringToken, bool, float); /* linkage=_ZN21CMaterialSystem2Utils23QueueSetDefaultMaterialE15CUtlStringTokenbf */
	virtual void QueueSetTexturedMaterial(class CMaterialSystem2Utils *, class CUtlStringToken, HRenderTexture, bool, float); /* linkage=_ZN21CMaterialSystem2Utils24QueueSetTexturedMaterialE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEbf */
	virtual void QueueSetMaterialMode(class CMaterialSystem2Utils *, class CUtlStringToken, const class IMaterialMode  *, const class CRenderAttributes  *, uint64, bool, float); /* linkage=_ZN21CMaterialSystem2Utils20QueueSetMaterialModeE15CUtlStringTokenPK13IMaterialModePK17CRenderAttributesybf */
	virtual void RenderWireframeSphere(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, int, int, class Color, bool); /* linkage=_ZN21CMaterialSystem2Utils21RenderWireframeSphereEP14IRenderContextRK6Vectorfii5Colorb */
	virtual void RenderSphere(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, int, int, class Color, bool, bool); /* linkage=_ZN21CMaterialSystem2Utils12RenderSphereEP14IRenderContextRK6Vectorfii5Colorbb */
	virtual void RenderSphere(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, int, int, class Color, const class IMaterial2  *, const class CRenderAttributes  *, bool); /* linkage=_ZN21CMaterialSystem2Utils12RenderSphereEP14IRenderContextRK6Vectorfii5ColorPK10IMaterial2PK17CRenderAttributesb */
	virtual void RenderWireframeBox(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21CMaterialSystem2Utils18RenderWireframeBoxEP14IRenderContextRK6VectorRK6QAngleS4_S4_5Colorb */
	virtual void RenderWireframeSweptBox(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21CMaterialSystem2Utils23RenderWireframeSweptBoxEP14IRenderContextRK6VectorS4_RK6QAngleS4_S4_5Colorb */
	virtual void RenderBox(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN21CMaterialSystem2Utils9RenderBoxEP14IRenderContextRK6VectorRK6QAngleS4_S4_5Colorbb */
	virtual void RenderBox(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *, bool); /* linkage=_ZN21CMaterialSystem2Utils9RenderBoxEP14IRenderContextRK6VectorRK6QAngleS4_S4_5ColorPK10IMaterial2PK17CRenderAttributesb */
	virtual void RenderAxes(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, bool); /* linkage=_ZN21CMaterialSystem2Utils10RenderAxesEP14IRenderContextRK6Vectorfb */
	virtual void RenderAxes(class CMaterialSystem2Utils *, class IRenderContext *, const class matrix3x4_t  &, float, bool); /* linkage=_ZN21CMaterialSystem2Utils10RenderAxesEP14IRenderContextRK11matrix3x4_tfb */
	virtual void RenderLine(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21CMaterialSystem2Utils10RenderLineEP14IRenderContextRK6VectorS4_5Colorb */
	virtual void RenderTriangle(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21CMaterialSystem2Utils14RenderTriangleEP14IRenderContextRK6VectorS4_S4_5Colorb */
	virtual void RenderTriangle(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *); /* linkage=_ZN21CMaterialSystem2Utils14RenderTriangleEP14IRenderContextRK6VectorS4_S4_5ColorPK10IMaterial2PK17CRenderAttributes */
	virtual void RenderQuad(class CMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, float, float, float, float, float, float, float, float, float, const class Color  &); /* linkage=_ZN21CMaterialSystem2Utils10RenderQuadEP14IRenderContextPK10IMaterial2PK17CRenderAttributesfffffffffRK5Color */
	virtual void DrawScreenSpaceRectangle(class CMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, int, int, int, int, float, float, float, float, int, int, int, int, float, class VertexColor_t *); /* linkage=_ZN21CMaterialSystem2Utils24DrawScreenSpaceRectangleEP14IRenderContextPK10IMaterial2PK17CRenderAttributesiiiiffffiiiifP13VertexColor_t */
	virtual void DrawNDCSpaceUntexturedPolygon(class CMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, int, class Vector2D *); /* linkage=_ZN21CMaterialSystem2Utils29DrawNDCSpaceUntexturedPolygonEP14IRenderContextPK10IMaterial2PK17CRenderAttributesiP8Vector2D */
	virtual bool RenderText(class CMaterialSystem2Utils *, class IRenderContext *, const char  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils10RenderTextEP14IRenderContextPKcRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	virtual bool RenderText(class CMaterialSystem2Utils *, class IRenderContext *, const uchar16  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils10RenderTextEP14IRenderContextPKtRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	virtual bool RenderText(class CMaterialSystem2Utils *, class IRenderContext *, const uchar32  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils10RenderTextEP14IRenderContextPKwRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	/* <4a1599> utils/materialsystem2utils.cpp:2022 */
	virtual class Vector2D RenderText(class CMaterialSystem2Utils *, class IRenderContext *, class CTextLayoutInfo *, const class CRenderAttributes  *); /* linkage=_ZN21CMaterialSystem2Utils10RenderTextEP14IRenderContextP15CTextLayoutInfoPK17CRenderAttributes */
	virtual bool RenderText(class CMaterialSystem2Utils *, class IRenderContext *, const class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende, const class Vector2D  &, const class CRenderAttributes  *); /* linkage=_ZN21CMaterialSystem2Utils10RenderTextEP14IRenderContextRK10CUtlVectorIS2_I19CCharRenderGeometry10CUtlMemoryIS3_iEES4_IS6_iEERK8Vector2DPK17CRenderAttributes */
	virtual void Render2DLine(class CMaterialSystem2Utils *, class IRenderContext *, float, float, float, float, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils12Render2DLineEP14IRenderContextffffRK5ColorPK17CRenderAttributes20LayoutPositionType_e */
	virtual void RenderRect(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector2D  &, const class Vector2D  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils10RenderRectEP14IRenderContextRK8Vector2DS4_5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderRect(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils10RenderRectEP14IRenderContextRK8Vector2DS4_S4_S4_5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderRect(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  *, const class Color  *, const class Vector2D  *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils10RenderRectEP14IRenderContextPK6VectorPK5ColorPK8Vector2DPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderOutlinedRect(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector2D  &, const class Vector2D  &, float, class Color, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils18RenderOutlinedRectEP14IRenderContextRK8Vector2DS4_f5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderMeshWithMode(class CMaterialSystem2Utils *, class IRenderContext *, const class MeshBuilderBuffers_t  *, const class IMaterialMode  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils18RenderMeshWithModeEP14IRenderContextPK20MeshBuilderBuffers_tPK13IMaterialModePK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderQuads(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils11RenderQuadsEP14IRenderContextPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderConvexGeometry(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils20RenderConvexGeometryEP14IRenderContextPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderPrimitives(class CMaterialSystem2Utils *, class IRenderContext *, enum MaterialPrimitiveType2_t, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils16RenderPrimitivesEP14IRenderContext24MaterialPrimitiveType2_tPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void QueueRenderText(class CMaterialSystem2Utils *, class CUtlStringToken, const char  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenPKcRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderText(class CMaterialSystem2Utils *, class CUtlStringToken, const uchar16  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenPKtRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderText(class CMaterialSystem2Utils *, class CUtlStringToken, const uchar32  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenPKwRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderText(class CMaterialSystem2Utils *, class CUtlStringToken, const class CTextLayoutInfo  &, const class CRenderAttributes  *, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenRK15CTextLayoutInfoPK17CRenderAttributesf */
	virtual void QueueRenderText(class CMaterialSystem2Utils *, class Vector2D *, class CUtlStringToken, class CTextLayoutInfo &, const class CRenderAttributes  *, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderTextEP8Vector2D15CUtlStringTokenR15CTextLayoutInfoPK17CRenderAttributesf */
	virtual void QueueRender2DLine(class CMaterialSystem2Utils *, class CUtlStringToken, float, float, float, float, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils17QueueRender2DLineE15CUtlStringTokenffffRK5ColorPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRender2DLines(class CMaterialSystem2Utils *, class CUtlStringToken, const class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >  *, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils18QueueRender2DLinesE15CUtlStringTokenPK10CUtlVectorI8Vector2D10CUtlMemoryIS2_iEERK5ColorPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderRect(class CMaterialSystem2Utils *, class CUtlStringToken, const class Vector2D  &, const class Vector2D  &, const class Color  &, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderRectE15CUtlStringTokenRK8Vector2DS3_RK5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderRect(class CMaterialSystem2Utils *, class CUtlStringToken, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class Color  &, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderRectE15CUtlStringTokenRK8Vector2DS3_S3_S3_RK5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderRect(class CMaterialSystem2Utils *, class CUtlStringToken, const class Vector  *, const class Color  *, const class Vector2D  *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils15QueueRenderRectE15CUtlStringTokenPK6VectorPK5ColorPK8Vector2DPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueAndOwnRenderMeshWithMode(class CMaterialSystem2Utils *, class CUtlStringToken, const class MeshBuilderBuffers_t  *, const class IMaterialMode  *, class CRenderAttributes *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils29QueueAndOwnRenderMeshWithModeE15CUtlStringTokenPK20MeshBuilderBuffers_tPK13IMaterialModeP17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderMeshWithMode(class CMaterialSystem2Utils *, class CUtlStringToken, const class MeshBuilderBuffers_t  *, const class IMaterialMode  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils23QueueRenderMeshWithModeE15CUtlStringTokenPK20MeshBuilderBuffers_tPK13IMaterialModePK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderQuads(class CMaterialSystem2Utils *, class CUtlStringToken, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils16QueueRenderQuadsE15CUtlStringTokenPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderConvexGeometry(class CMaterialSystem2Utils *, class CUtlStringToken, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils25QueueRenderConvexGeometryE15CUtlStringTokenPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderPrimitives(class CMaterialSystem2Utils *, class CUtlStringToken, enum MaterialPrimitiveType2_t, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21CMaterialSystem2Utils21QueueRenderPrimitivesE15CUtlStringToken24MaterialPrimitiveType2_tPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void RenderFontTexture(class CMaterialSystem2Utils *, class IRenderContext *, FontTextureHandle_t, int, int, const class CRenderAttributes  *); /* linkage=_ZN21CMaterialSystem2Utils17RenderFontTextureEP14IRenderContextiiiPK17CRenderAttributes */
	/* <4a1629> utils/materialsystem2utils.cpp:3189 */
	virtual void CacheFontTextures(class CMaterialSystem2Utils *, const class CTextLayoutInfo  *); /* linkage=_ZN21CMaterialSystem2Utils17CacheFontTexturesEPK15CTextLayoutInfo */
	virtual int PrepareForRender(class CMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, class RenderViewport_t *, class MaterialRenderablePass_t *, int, const class IMaterialMode  * *); /* linkage=_ZN21CMaterialSystem2Utils16PrepareForRenderEP14IRenderContextPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseEP16RenderViewport_tP24MaterialRenderablePass_tiPPK13IMaterialMode */
	virtual bool HasQueuedRender(class CMaterialSystem2Utils *, class CUtlStringToken); /* linkage=_ZN21CMaterialSystem2Utils15HasQueuedRenderE15CUtlStringToken */
	virtual void RenderFrame(class CMaterialSystem2Utils *, class IRenderContext *, class CUtlStringToken); /* linkage=_ZN21CMaterialSystem2Utils11RenderFrameEP14IRenderContext15CUtlStringToken */
	virtual class Vector2D GetRawSize(class CMaterialSystem2Utils *, const char  *, FontHandle_t); /* linkage=_ZN21CMaterialSystem2Utils10GetRawSizeEPKcj */
	virtual void AddToView(class CMaterialSystem2Utils *, float); /* linkage=_ZN21CMaterialSystem2Utils9AddToViewEf */
	virtual bool AllocateCompressionTexturesGPU(class CMaterialSystem2Utils *, enum ImageFormat, int32, int32, int32, const char  *, HRenderTextureStrong *, class CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCT); /* linkage=_ZN21CMaterialSystem2Utils30AllocateCompressionTexturesGPUE11ImageFormatiiiPKcP13CStrongHandleI31InfoForResourceTypeCTextureBaseER10CUtlVectorI21CStrongHandleCopyableIS4_E10CUtlMemoryIS9_iEE */
	virtual bool CompressTextureGPU(class CMaterialSystem2Utils *, enum EGPUTextureCompressOptions_t, class IRenderContext *, HRenderTexture, HRenderTexture, const class CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResource, int32); /* linkage=_ZN21CMaterialSystem2Utils18CompressTextureGPUE28EGPUTextureCompressOptions_tP14IRenderContext11CWeakHandleI31InfoForResourceTypeCTextureBaseES5_RK10CUtlVectorI21CStrongHandleCopyableIS4_E10CUtlMemoryIS8_iEEi */
	void CMaterialSystem2Utils(class CMaterialSystem2Utils *); /* linkage=_ZN21CMaterialSystem2UtilsC4Ev */
	virtual void ~CMaterialSystem2Utils(class CMaterialSystem2Utils *); /* linkage=_ZN21CMaterialSystem2UtilsD4Ev */
	void RenderLineBatch(class CMaterialSystem2Utils *, class IRenderContext *, const class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >  *, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21CMaterialSystem2Utils15RenderLineBatchEP14IRenderContextPK10CUtlVectorI8Vector2D10CUtlMemoryIS3_iEERK5ColorPK17CRenderAttributes20LayoutPositionType_e */
	void Flush(class CMaterialSystem2Utils *); /* linkage=_ZN21CMaterialSystem2Utils5FlushEv */
	ViewportLayoutList_t & GetLayoutList(class CMaterialSystem2Utils *, class CUtlStringToken); /* linkage=_ZN21CMaterialSystem2Utils13GetLayoutListE15CUtlStringToken */
	void DestroyLayoutObjects(class CMaterialSystem2Utils *, int); /* linkage=_ZN21CMaterialSystem2Utils20DestroyLayoutObjectsEi */
	void RenderSphereInternal(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, int, int, class Color, const class IMaterial2  *, const class CRenderAttributes  *, bool); /* linkage=_ZN21CMaterialSystem2Utils20RenderSphereInternalEP14IRenderContextRK6Vectorfii5ColorPK10IMaterial2PK17CRenderAttributesb */
	void RenderBoxInternal(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *, bool); /* linkage=_ZN21CMaterialSystem2Utils17RenderBoxInternalEP14IRenderContextRK6VectorRK6QAngleS4_S4_5ColorPK10IMaterial2PK17CRenderAttributesb */
	void RenderTriangleInternal(class CMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *); /* linkage=_ZN21CMaterialSystem2Utils22RenderTriangleInternalEP14IRenderContextRK6VectorS4_S4_5ColorPK10IMaterial2PK17CRenderAttributes */
	void RenderFontTextureInternal(class CMaterialSystem2Utils *, class IRenderContext *, FontTextureHandle_t, int, int); /* linkage=_ZN21CMaterialSystem2Utils25RenderFontTextureInternalEP14IRenderContextiii */
};


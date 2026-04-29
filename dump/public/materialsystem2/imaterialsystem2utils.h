
//
// public/materialsystem2/imaterialsystem2utils.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 4
//	class: 1
//

// <004427E4> ../public/materialsystem2/imaterialsystem2utils.h:51
void IMaterialSystem2Utils::IMaterialSystem2Utils()
{
} /* size: 0 */

// <004427C8> ../public/materialsystem2/imaterialsystem2utils.h:51
inline void IMaterialSystem2Utils::IMaterialSystem2Utils()
{
} /* size: 0 */

// <003AC161> ../public/materialsystem2/imaterialsystem2utils.h:51
// member functions: 152
// member variable: 1
// vtable entries: 63
// class size: 8
class IMaterialSystem2Utils : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IMaterialSystem2Utils(IMaterialSystem2Utils* , IMaterialSystem2Utils& );
	void IMaterialSystem2Utils(IMaterialSystem2Utils* , const IMaterialSystem2Utils& );
	void IMaterialSystem2Utils(IMaterialSystem2Utils* );
	void ~IMaterialSystem2Utils(IMaterialSystem2Utils* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:56 */
	virtual FontHandle_t GetDefaultDebugFont(IMaterialSystem2Utils* , bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:65 */
	virtual bool SetMaterialModeState(IMaterialSystem2Utils* , IRenderContext* , const IMaterialMode* , const CRenderAttributes* , RenderInputLayout_t, const RsStencilStateOverride_t* , const RsDepthBiasStateOverride_t* , const RsFillModeOverride_t* , int, uint32);
	/* ../public/materialsystem2/imaterialsystem2utils.h:96 */
	virtual void ResetMaterialCache(IMaterialSystem2Utils* , IRenderContext* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:99 */
	virtual bool SetDefaultMaterial(IMaterialSystem2Utils* , IRenderContext* , bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:102 */
	virtual bool SetTexturedMaterial(IMaterialSystem2Utils* , IRenderContext* , HRenderTexture, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:111 */
	virtual bool SetMaterialMode(IMaterialSystem2Utils* , IRenderContext* , const IMaterialMode* , const CRenderAttributes* , uint64, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:112 */
	bool SetMaterial(IMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , uint64, const CUtlStringToken& , bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:122 */
	bool SetMaterialModeOrTexture(IMaterialSystem2Utils* , IRenderContext* , const IMaterialMode* , const CRenderAttributes* , uint64, HRenderTexture, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:137 */
	bool SetMaterialOrTexture(IMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , uint64, HRenderTexture, const CUtlStringToken& , bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:154 */
	virtual void QueueResetMaterialCache(IMaterialSystem2Utils* , CUtlStringToken, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:157 */
	virtual void QueueSetDefaultMaterial(IMaterialSystem2Utils* , CUtlStringToken, bool, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:160 */
	virtual void QueueSetTexturedMaterial(IMaterialSystem2Utils* , CUtlStringToken, HRenderTexture, bool, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:163 */
	virtual void QueueSetMaterialMode(IMaterialSystem2Utils* , CUtlStringToken, const IMaterialMode* , const CRenderAttributes* , uint64, bool, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:164 */
	void QueueSetMaterial(IMaterialSystem2Utils* , CUtlStringToken, const IMaterial2* , const CRenderAttributes* , uint64, const CUtlStringToken& , bool, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:174 */
	void QueueSetMaterialModeOrTexture(IMaterialSystem2Utils* , CUtlStringToken, const IMaterialMode* , const CRenderAttributes* , uint64, HRenderTexture, bool, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:189 */
	void QueueSetMaterialOrTexture(IMaterialSystem2Utils* , CUtlStringToken, const IMaterial2* , const CRenderAttributes* , uint64, HRenderTexture, const CUtlStringToken& , bool, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:206 */
	virtual void RenderWireframeSphere(IMaterialSystem2Utils* , IRenderContext* , const Vector& , float, int, int, Color, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:207 */
	virtual void RenderSphere(IMaterialSystem2Utils* , IRenderContext* , const Vector& , float, int, int, Color, bool, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:208 */
	virtual void RenderSphere(IMaterialSystem2Utils* , IRenderContext* , const Vector& , float, int, int, Color, const IMaterial2* , const CRenderAttributes* , bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:209 */
	virtual void RenderWireframeBox(IMaterialSystem2Utils* , IRenderContext* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:210 */
	virtual void RenderWireframeSweptBox(IMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:211 */
	virtual void RenderBox(IMaterialSystem2Utils* , IRenderContext* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:212 */
	virtual void RenderBox(IMaterialSystem2Utils* , IRenderContext* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, const IMaterial2* , const CRenderAttributes* , bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:213 */
	virtual void RenderAxes(IMaterialSystem2Utils* , IRenderContext* , const Vector& , float, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:214 */
	virtual void RenderAxes(IMaterialSystem2Utils* , IRenderContext* , const matrix3x4_t& , float, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:215 */
	virtual void RenderLine(IMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , Color, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:216 */
	virtual void RenderTriangle(IMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , const Vector& , Color, bool);
	/* ../public/materialsystem2/imaterialsystem2utils.h:217 */
	virtual void RenderTriangle(IMaterialSystem2Utils* , IRenderContext* , const Vector& , const Vector& , const Vector& , Color, const IMaterial2* , const CRenderAttributes* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:218 */
	virtual void RenderQuad(IMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , float, float, float, float, float, float, float, float, float, const Color& );
	/* ../public/materialsystem2/imaterialsystem2utils.h:219 */
	virtual void DrawScreenSpaceRectangle(IMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , int, int, int, int, float, float, float, float, int, int, int, int, float, VertexColor_t* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:227 */
	virtual void DrawNDCSpaceUntexturedPolygon(IMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , int, Vector2D* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:230 */
	virtual bool RenderText(IMaterialSystem2Utils* , IRenderContext* , const char* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:231 */
	virtual bool RenderText(IMaterialSystem2Utils* , IRenderContext* , const uchar16* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:232 */
	virtual bool RenderText(IMaterialSystem2Utils* , IRenderContext* , const uchar32* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:233 */
	virtual Vector2D RenderText(IMaterialSystem2Utils* , IRenderContext* , CTextLayoutInfo* , const CRenderAttributes* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:234 */
	virtual bool RenderText(IMaterialSystem2Utils* , IRenderContext* , const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende, const Vector2D& , const CRenderAttributes* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:235 */
	virtual void Render2DLine(IMaterialSystem2Utils* , IRenderContext* , float, float, float, float, const Color& , const CRenderAttributes* , LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:236 */
	virtual void RenderRect(IMaterialSystem2Utils* , IRenderContext* , const Vector2D& , const Vector2D& , Color, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:237 */
	virtual void RenderRect(IMaterialSystem2Utils* , IRenderContext* , const Vector2D& , const Vector2D& , const Vector2D& , const Vector2D& , Color, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:238 */
	virtual void RenderRect(IMaterialSystem2Utils* , IRenderContext* , const Vector* , const Color* , const Vector2D* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:241 */
	virtual void RenderOutlinedRect(IMaterialSystem2Utils* , IRenderContext* , const Vector2D& , const Vector2D& , float, Color, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:242 */
	virtual void RenderMeshWithMode(IMaterialSystem2Utils* , IRenderContext* , const MeshBuilderBuffers_t* , const IMaterialMode* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:243 */
	void RenderMesh(IMaterialSystem2Utils* , IRenderContext* , const MeshBuilderBuffers_t* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:248 */
	virtual void RenderQuads(IMaterialSystem2Utils* , IRenderContext* , const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:249 */
	virtual void RenderConvexGeometry(IMaterialSystem2Utils* , IRenderContext* , const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:250 */
	virtual void RenderPrimitives(IMaterialSystem2Utils* , IRenderContext* , MaterialPrimitiveType2_t, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e);
	/* ../public/materialsystem2/imaterialsystem2utils.h:254 */
	virtual void QueueRenderText(IMaterialSystem2Utils* , CUtlStringToken, const char* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:255 */
	virtual void QueueRenderText(IMaterialSystem2Utils* , CUtlStringToken, const uchar16* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:256 */
	virtual void QueueRenderText(IMaterialSystem2Utils* , CUtlStringToken, const uchar32* , const Vector2D& , Color, FontHandle_t, const CRenderAttributes* , LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:257 */
	virtual void QueueRenderText(IMaterialSystem2Utils* , CUtlStringToken, const CTextLayoutInfo& , const CRenderAttributes* , float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:258 */
	virtual void QueueRenderText(IMaterialSystem2Utils* , Vector2D* , CUtlStringToken, CTextLayoutInfo& , const CRenderAttributes* , float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:259 */
	virtual void QueueRender2DLine(IMaterialSystem2Utils* , CUtlStringToken, float, float, float, float, const Color& , const CRenderAttributes* , LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:260 */
	virtual void QueueRender2DLines(IMaterialSystem2Utils* , CUtlStringToken, const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >* , const Color& , const CRenderAttributes* , LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:261 */
	virtual void QueueRenderRect(IMaterialSystem2Utils* , CUtlStringToken, const Vector2D& , const Vector2D& , const Color& , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:262 */
	virtual void QueueRenderRect(IMaterialSystem2Utils* , CUtlStringToken, const Vector2D& , const Vector2D& , const Vector2D& , const Vector2D& , const Color& , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:263 */
	virtual void QueueRenderRect(IMaterialSystem2Utils* , CUtlStringToken, const Vector* , const Color* , const Vector2D* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:266 */
	virtual void QueueAndOwnRenderMeshWithMode(IMaterialSystem2Utils* , CUtlStringToken, const MeshBuilderBuffers_t* , const IMaterialMode* , CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:267 */
	void QueueAndOwnRenderMesh(IMaterialSystem2Utils* , CUtlStringToken, const MeshBuilderBuffers_t* , const IMaterial2* , CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:271 */
	virtual void QueueRenderMeshWithMode(IMaterialSystem2Utils* , CUtlStringToken, const MeshBuilderBuffers_t* , const IMaterialMode* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:272 */
	void QueueRenderMesh(IMaterialSystem2Utils* , CUtlStringToken, const MeshBuilderBuffers_t* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:276 */
	virtual void QueueRenderQuads(IMaterialSystem2Utils* , CUtlStringToken, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:277 */
	virtual void QueueRenderConvexGeometry(IMaterialSystem2Utils* , CUtlStringToken, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:278 */
	virtual void QueueRenderPrimitives(IMaterialSystem2Utils* , CUtlStringToken, MaterialPrimitiveType2_t, const Vector* , const Color* , const Vector2D* , int, const IMaterial2* , const CRenderAttributes* , HRenderTexture, LayoutPositionType_e, float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:281 */
	virtual void RenderFontTexture(IMaterialSystem2Utils* , IRenderContext* , FontTextureHandle_t, int, int, const CRenderAttributes* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:282 */
	virtual void CacheFontTextures(IMaterialSystem2Utils* , const CTextLayoutInfo* );
	/* ../public/materialsystem2/imaterialsystem2utils.h:288 */
	virtual int PrepareForRender(IMaterialSystem2Utils* , IRenderContext* , const IMaterial2* , const CRenderAttributes* , HRenderTexture, RenderViewport_t* , MaterialRenderablePass_t* , int, const IMaterialMode** );
	/* ../public/materialsystem2/imaterialsystem2utils.h:300 */
	virtual bool HasQueuedRender(IMaterialSystem2Utils* , CUtlStringToken);
	/* ../public/materialsystem2/imaterialsystem2utils.h:303 */
	virtual void RenderFrame(IMaterialSystem2Utils* , IRenderContext* , CUtlStringToken);
	/* ../public/materialsystem2/imaterialsystem2utils.h:305 */
	virtual Vector2D GetRawSize(IMaterialSystem2Utils* , const char* , FontHandle_t);
	/* ../public/materialsystem2/imaterialsystem2utils.h:308 */
	virtual void AddToView(IMaterialSystem2Utils* , float);
	/* ../public/materialsystem2/imaterialsystem2utils.h:312 */
	virtual bool AllocateCompressionTexturesGPU(IMaterialSystem2Utils* , ImageFormat, int32, int32, int32, const char* , HRenderTextureStrong* , CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCT);
	/* ../public/materialsystem2/imaterialsystem2utils.h:325 */
	virtual bool CompressTextureGPU(IMaterialSystem2Utils* , EGPUTextureCompressOptions_t, IRenderContext* , HRenderTexture, HRenderTexture, const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResource, int32);
	void IMaterialSystem2Utils(class IMaterialSystem2Utils *, class IMaterialSystem2Utils &); /* linkage=_ZN21IMaterialSystem2UtilsC4EOS_ */
	void IMaterialSystem2Utils(class IMaterialSystem2Utils *, const class IMaterialSystem2Utils  &); /* linkage=_ZN21IMaterialSystem2UtilsC4ERKS_ */
	void IMaterialSystem2Utils(class IMaterialSystem2Utils *); /* linkage=_ZN21IMaterialSystem2UtilsC4Ev */
	void ~IMaterialSystem2Utils(class IMaterialSystem2Utils *); /* linkage=_ZN21IMaterialSystem2UtilsD4Ev */
	virtual FontHandle_t GetDefaultDebugFont(class IMaterialSystem2Utils *, bool); /* linkage=_ZN21IMaterialSystem2Utils19GetDefaultDebugFontEb */
	virtual bool SetMaterialModeState(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterialMode  *, const class CRenderAttributes  *, RenderInputLayout_t, const class RsStencilStateOverride_t  *, const class RsDepthBiasStateOverride_t  *, const class RsFillModeOverride_t  *, int, uint32); /* linkage=_ZN21IMaterialSystem2Utils20SetMaterialModeStateEP14IRenderContextPK13IMaterialModePK17CRenderAttributesP21RenderInputLayout_t__PK24RsStencilStateOverride_tPK26RsDepthBiasStateOverride_tPK20RsFillModeOverride_tij */
	virtual void ResetMaterialCache(class IMaterialSystem2Utils *, class IRenderContext *); /* linkage=_ZN21IMaterialSystem2Utils18ResetMaterialCacheEP14IRenderContext */
	virtual bool SetDefaultMaterial(class IMaterialSystem2Utils *, class IRenderContext *, bool); /* linkage=_ZN21IMaterialSystem2Utils18SetDefaultMaterialEP14IRenderContextb */
	virtual bool SetTexturedMaterial(class IMaterialSystem2Utils *, class IRenderContext *, HRenderTexture, bool); /* linkage=_ZN21IMaterialSystem2Utils19SetTexturedMaterialEP14IRenderContext11CWeakHandleI31InfoForResourceTypeCTextureBaseEb */
	virtual bool SetMaterialMode(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterialMode  *, const class CRenderAttributes  *, uint64, bool); /* linkage=_ZN21IMaterialSystem2Utils15SetMaterialModeEP14IRenderContextPK13IMaterialModePK17CRenderAttributesyb */
	bool SetMaterial(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, uint64, const class CUtlStringToken  &, bool); /* linkage=_ZN21IMaterialSystem2Utils11SetMaterialEP14IRenderContextPK10IMaterial2PK17CRenderAttributesyRK15CUtlStringTokenb */
	bool SetMaterialModeOrTexture(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterialMode  *, const class CRenderAttributes  *, uint64, HRenderTexture, bool); /* linkage=_ZN21IMaterialSystem2Utils24SetMaterialModeOrTextureEP14IRenderContextPK13IMaterialModePK17CRenderAttributesy11CWeakHandleI31InfoForResourceTypeCTextureBaseEb */
	bool SetMaterialOrTexture(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, uint64, HRenderTexture, const class CUtlStringToken  &, bool); /* linkage=_ZN21IMaterialSystem2Utils20SetMaterialOrTextureEP14IRenderContextPK10IMaterial2PK17CRenderAttributesy11CWeakHandleI31InfoForResourceTypeCTextureBaseERK15CUtlStringTokenb */
	virtual void QueueResetMaterialCache(class IMaterialSystem2Utils *, class CUtlStringToken, float); /* linkage=_ZN21IMaterialSystem2Utils23QueueResetMaterialCacheE15CUtlStringTokenf */
	virtual void QueueSetDefaultMaterial(class IMaterialSystem2Utils *, class CUtlStringToken, bool, float); /* linkage=_ZN21IMaterialSystem2Utils23QueueSetDefaultMaterialE15CUtlStringTokenbf */
	virtual void QueueSetTexturedMaterial(class IMaterialSystem2Utils *, class CUtlStringToken, HRenderTexture, bool, float); /* linkage=_ZN21IMaterialSystem2Utils24QueueSetTexturedMaterialE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEbf */
	virtual void QueueSetMaterialMode(class IMaterialSystem2Utils *, class CUtlStringToken, const class IMaterialMode  *, const class CRenderAttributes  *, uint64, bool, float); /* linkage=_ZN21IMaterialSystem2Utils20QueueSetMaterialModeE15CUtlStringTokenPK13IMaterialModePK17CRenderAttributesybf */
	void QueueSetMaterial(class IMaterialSystem2Utils *, class CUtlStringToken, const class IMaterial2  *, const class CRenderAttributes  *, uint64, const class CUtlStringToken  &, bool, float); /* linkage=_ZN21IMaterialSystem2Utils16QueueSetMaterialE15CUtlStringTokenPK10IMaterial2PK17CRenderAttributesyRKS0_bf */
	void QueueSetMaterialModeOrTexture(class IMaterialSystem2Utils *, class CUtlStringToken, const class IMaterialMode  *, const class CRenderAttributes  *, uint64, HRenderTexture, bool, float); /* linkage=_ZN21IMaterialSystem2Utils29QueueSetMaterialModeOrTextureE15CUtlStringTokenPK13IMaterialModePK17CRenderAttributesy11CWeakHandleI31InfoForResourceTypeCTextureBaseEbf */
	void QueueSetMaterialOrTexture(class IMaterialSystem2Utils *, class CUtlStringToken, const class IMaterial2  *, const class CRenderAttributes  *, uint64, HRenderTexture, const class CUtlStringToken  &, bool, float); /* linkage=_ZN21IMaterialSystem2Utils25QueueSetMaterialOrTextureE15CUtlStringTokenPK10IMaterial2PK17CRenderAttributesy11CWeakHandleI31InfoForResourceTypeCTextureBaseERKS0_bf */
	virtual void RenderWireframeSphere(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, int, int, class Color, bool); /* linkage=_ZN21IMaterialSystem2Utils21RenderWireframeSphereEP14IRenderContextRK6Vectorfii5Colorb */
	virtual void RenderSphere(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, int, int, class Color, bool, bool); /* linkage=_ZN21IMaterialSystem2Utils12RenderSphereEP14IRenderContextRK6Vectorfii5Colorbb */
	virtual void RenderSphere(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, int, int, class Color, const class IMaterial2  *, const class CRenderAttributes  *, bool); /* linkage=_ZN21IMaterialSystem2Utils12RenderSphereEP14IRenderContextRK6Vectorfii5ColorPK10IMaterial2PK17CRenderAttributesb */
	virtual void RenderWireframeBox(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21IMaterialSystem2Utils18RenderWireframeBoxEP14IRenderContextRK6VectorRK6QAngleS4_S4_5Colorb */
	virtual void RenderWireframeSweptBox(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21IMaterialSystem2Utils23RenderWireframeSweptBoxEP14IRenderContextRK6VectorS4_RK6QAngleS4_S4_5Colorb */
	virtual void RenderBox(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN21IMaterialSystem2Utils9RenderBoxEP14IRenderContextRK6VectorRK6QAngleS4_S4_5Colorbb */
	virtual void RenderBox(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *, bool); /* linkage=_ZN21IMaterialSystem2Utils9RenderBoxEP14IRenderContextRK6VectorRK6QAngleS4_S4_5ColorPK10IMaterial2PK17CRenderAttributesb */
	virtual void RenderAxes(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, float, bool); /* linkage=_ZN21IMaterialSystem2Utils10RenderAxesEP14IRenderContextRK6Vectorfb */
	virtual void RenderAxes(class IMaterialSystem2Utils *, class IRenderContext *, const class matrix3x4_t  &, float, bool); /* linkage=_ZN21IMaterialSystem2Utils10RenderAxesEP14IRenderContextRK11matrix3x4_tfb */
	virtual void RenderLine(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21IMaterialSystem2Utils10RenderLineEP14IRenderContextRK6VectorS4_5Colorb */
	virtual void RenderTriangle(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, bool); /* linkage=_ZN21IMaterialSystem2Utils14RenderTriangleEP14IRenderContextRK6VectorS4_S4_5Colorb */
	virtual void RenderTriangle(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *); /* linkage=_ZN21IMaterialSystem2Utils14RenderTriangleEP14IRenderContextRK6VectorS4_S4_5ColorPK10IMaterial2PK17CRenderAttributes */
	virtual void RenderQuad(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, float, float, float, float, float, float, float, float, float, const class Color  &); /* linkage=_ZN21IMaterialSystem2Utils10RenderQuadEP14IRenderContextPK10IMaterial2PK17CRenderAttributesfffffffffRK5Color */
	virtual void DrawScreenSpaceRectangle(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, int, int, int, int, float, float, float, float, int, int, int, int, float, class VertexColor_t *); /* linkage=_ZN21IMaterialSystem2Utils24DrawScreenSpaceRectangleEP14IRenderContextPK10IMaterial2PK17CRenderAttributesiiiiffffiiiifP13VertexColor_t */
	virtual void DrawNDCSpaceUntexturedPolygon(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, int, class Vector2D *); /* linkage=_ZN21IMaterialSystem2Utils29DrawNDCSpaceUntexturedPolygonEP14IRenderContextPK10IMaterial2PK17CRenderAttributesiP8Vector2D */
	virtual bool RenderText(class IMaterialSystem2Utils *, class IRenderContext *, const char  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils10RenderTextEP14IRenderContextPKcRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	virtual bool RenderText(class IMaterialSystem2Utils *, class IRenderContext *, const uchar16  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils10RenderTextEP14IRenderContextPKtRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	virtual bool RenderText(class IMaterialSystem2Utils *, class IRenderContext *, const uchar32  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils10RenderTextEP14IRenderContextPKwRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_e */
	virtual class Vector2D RenderText(class IMaterialSystem2Utils *, class IRenderContext *, class CTextLayoutInfo *, const class CRenderAttributes  *); /* linkage=_ZN21IMaterialSystem2Utils10RenderTextEP14IRenderContextP15CTextLayoutInfoPK17CRenderAttributes */
	virtual bool RenderText(class IMaterialSystem2Utils *, class IRenderContext *, const class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende, const class Vector2D  &, const class CRenderAttributes  *); /* linkage=_ZN21IMaterialSystem2Utils10RenderTextEP14IRenderContextRK10CUtlVectorIS2_I19CCharRenderGeometry10CUtlMemoryIS3_iEES4_IS6_iEERK8Vector2DPK17CRenderAttributes */
	virtual void Render2DLine(class IMaterialSystem2Utils *, class IRenderContext *, float, float, float, float, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils12Render2DLineEP14IRenderContextffffRK5ColorPK17CRenderAttributes20LayoutPositionType_e */
	virtual void RenderRect(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector2D  &, const class Vector2D  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils10RenderRectEP14IRenderContextRK8Vector2DS4_5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderRect(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, class Color, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils10RenderRectEP14IRenderContextRK8Vector2DS4_S4_S4_5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderRect(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  *, const class Color  *, const class Vector2D  *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils10RenderRectEP14IRenderContextPK6VectorPK5ColorPK8Vector2DPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderOutlinedRect(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector2D  &, const class Vector2D  &, float, class Color, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils18RenderOutlinedRectEP14IRenderContextRK8Vector2DS4_f5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderMeshWithMode(class IMaterialSystem2Utils *, class IRenderContext *, const class MeshBuilderBuffers_t  *, const class IMaterialMode  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils18RenderMeshWithModeEP14IRenderContextPK20MeshBuilderBuffers_tPK13IMaterialModePK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	void RenderMesh(class IMaterialSystem2Utils *, class IRenderContext *, const class MeshBuilderBuffers_t  *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils10RenderMeshEP14IRenderContextPK20MeshBuilderBuffers_tPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderQuads(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils11RenderQuadsEP14IRenderContextPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderConvexGeometry(class IMaterialSystem2Utils *, class IRenderContext *, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils20RenderConvexGeometryEP14IRenderContextPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void RenderPrimitives(class IMaterialSystem2Utils *, class IRenderContext *, enum MaterialPrimitiveType2_t, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e); /* linkage=_ZN21IMaterialSystem2Utils16RenderPrimitivesEP14IRenderContext24MaterialPrimitiveType2_tPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_e */
	virtual void QueueRenderText(class IMaterialSystem2Utils *, class CUtlStringToken, const char  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenPKcRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderText(class IMaterialSystem2Utils *, class CUtlStringToken, const uchar16  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenPKtRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderText(class IMaterialSystem2Utils *, class CUtlStringToken, const uchar32  *, const class Vector2D  &, class Color, FontHandle_t, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenPKwRK8Vector2D5ColorjPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderText(class IMaterialSystem2Utils *, class CUtlStringToken, const class CTextLayoutInfo  &, const class CRenderAttributes  *, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderTextE15CUtlStringTokenRK15CTextLayoutInfoPK17CRenderAttributesf */
	virtual void QueueRenderText(class IMaterialSystem2Utils *, class Vector2D *, class CUtlStringToken, class CTextLayoutInfo &, const class CRenderAttributes  *, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderTextEP8Vector2D15CUtlStringTokenR15CTextLayoutInfoPK17CRenderAttributesf */
	virtual void QueueRender2DLine(class IMaterialSystem2Utils *, class CUtlStringToken, float, float, float, float, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils17QueueRender2DLineE15CUtlStringTokenffffRK5ColorPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRender2DLines(class IMaterialSystem2Utils *, class CUtlStringToken, const class CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >  *, const class Color  &, const class CRenderAttributes  *, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils18QueueRender2DLinesE15CUtlStringTokenPK10CUtlVectorI8Vector2D10CUtlMemoryIS2_iEERK5ColorPK17CRenderAttributes20LayoutPositionType_ef */
	virtual void QueueRenderRect(class IMaterialSystem2Utils *, class CUtlStringToken, const class Vector2D  &, const class Vector2D  &, const class Color  &, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderRectE15CUtlStringTokenRK8Vector2DS3_RK5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderRect(class IMaterialSystem2Utils *, class CUtlStringToken, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class Color  &, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderRectE15CUtlStringTokenRK8Vector2DS3_S3_S3_RK5ColorPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderRect(class IMaterialSystem2Utils *, class CUtlStringToken, const class Vector  *, const class Color  *, const class Vector2D  *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderRectE15CUtlStringTokenPK6VectorPK5ColorPK8Vector2DPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueAndOwnRenderMeshWithMode(class IMaterialSystem2Utils *, class CUtlStringToken, const class MeshBuilderBuffers_t  *, const class IMaterialMode  *, class CRenderAttributes *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils29QueueAndOwnRenderMeshWithModeE15CUtlStringTokenPK20MeshBuilderBuffers_tPK13IMaterialModeP17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	void QueueAndOwnRenderMesh(class IMaterialSystem2Utils *, class CUtlStringToken, const class MeshBuilderBuffers_t  *, const class IMaterial2  *, class CRenderAttributes *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils21QueueAndOwnRenderMeshE15CUtlStringTokenPK20MeshBuilderBuffers_tPK10IMaterial2P17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderMeshWithMode(class IMaterialSystem2Utils *, class CUtlStringToken, const class MeshBuilderBuffers_t  *, const class IMaterialMode  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils23QueueRenderMeshWithModeE15CUtlStringTokenPK20MeshBuilderBuffers_tPK13IMaterialModePK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	void QueueRenderMesh(class IMaterialSystem2Utils *, class CUtlStringToken, const class MeshBuilderBuffers_t  *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils15QueueRenderMeshE15CUtlStringTokenPK20MeshBuilderBuffers_tPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderQuads(class IMaterialSystem2Utils *, class CUtlStringToken, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils16QueueRenderQuadsE15CUtlStringTokenPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderConvexGeometry(class IMaterialSystem2Utils *, class CUtlStringToken, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils25QueueRenderConvexGeometryE15CUtlStringTokenPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void QueueRenderPrimitives(class IMaterialSystem2Utils *, class CUtlStringToken, enum MaterialPrimitiveType2_t, const class Vector  *, const class Color  *, const class Vector2D  *, int, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, enum LayoutPositionType_e, float); /* linkage=_ZN21IMaterialSystem2Utils21QueueRenderPrimitivesE15CUtlStringToken24MaterialPrimitiveType2_tPK6VectorPK5ColorPK8Vector2DiPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseE20LayoutPositionType_ef */
	virtual void RenderFontTexture(class IMaterialSystem2Utils *, class IRenderContext *, FontTextureHandle_t, int, int, const class CRenderAttributes  *); /* linkage=_ZN21IMaterialSystem2Utils17RenderFontTextureEP14IRenderContextiiiPK17CRenderAttributes */
	virtual void CacheFontTextures(class IMaterialSystem2Utils *, const class CTextLayoutInfo  *); /* linkage=_ZN21IMaterialSystem2Utils17CacheFontTexturesEPK15CTextLayoutInfo */
	virtual int PrepareForRender(class IMaterialSystem2Utils *, class IRenderContext *, const class IMaterial2  *, const class CRenderAttributes  *, HRenderTexture, class RenderViewport_t *, class MaterialRenderablePass_t *, int, const class IMaterialMode  * *); /* linkage=_ZN21IMaterialSystem2Utils16PrepareForRenderEP14IRenderContextPK10IMaterial2PK17CRenderAttributes11CWeakHandleI31InfoForResourceTypeCTextureBaseEP16RenderViewport_tP24MaterialRenderablePass_tiPPK13IMaterialMode */
	virtual bool HasQueuedRender(class IMaterialSystem2Utils *, class CUtlStringToken); /* linkage=_ZN21IMaterialSystem2Utils15HasQueuedRenderE15CUtlStringToken */
	virtual void RenderFrame(class IMaterialSystem2Utils *, class IRenderContext *, class CUtlStringToken); /* linkage=_ZN21IMaterialSystem2Utils11RenderFrameEP14IRenderContext15CUtlStringToken */
	virtual class Vector2D GetRawSize(class IMaterialSystem2Utils *, const char  *, FontHandle_t); /* linkage=_ZN21IMaterialSystem2Utils10GetRawSizeEPKcj */
	virtual void AddToView(class IMaterialSystem2Utils *, float); /* linkage=_ZN21IMaterialSystem2Utils9AddToViewEf */
	virtual bool AllocateCompressionTexturesGPU(class IMaterialSystem2Utils *, enum ImageFormat, int32, int32, int32, const char  *, HRenderTextureStrong *, class CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCT); /* linkage=_ZN21IMaterialSystem2Utils30AllocateCompressionTexturesGPUE11ImageFormatiiiPKcP13CStrongHandleI31InfoForResourceTypeCTextureBaseER10CUtlVectorI21CStrongHandleCopyableIS4_E10CUtlMemoryIS9_iEE */
	virtual bool CompressTextureGPU(class IMaterialSystem2Utils *, enum EGPUTextureCompressOptions_t, class IRenderContext *, HRenderTexture, HRenderTexture, const class CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResource, int32); /* linkage=_ZN21IMaterialSystem2Utils18CompressTextureGPUE28EGPUTextureCompressOptions_tP14IRenderContext11CWeakHandleI31InfoForResourceTypeCTextureBaseES5_RK10CUtlVectorI21CStrongHandleCopyableIS4_E10CUtlMemoryIS8_iEEi */
};

// <0049E885> ../public/materialsystem2/imaterialsystem2utils.h:122
inline void IMaterialSystem2Utils::SetMaterialModeOrTexture(IRenderContext* pCtx, const IMaterialMode* pMode, const CRenderAttributes* pAttributes, uint64 nKey, HRenderTexture hTexture, bool bForce)
{
} /* size: 0 */

// <0049E80C> ../public/materialsystem2/imaterialsystem2utils.h:137
// variable: 1
inline void IMaterialSystem2Utils::SetMaterialOrTexture(IRenderContext* pCtx, const IMaterial2* pMaterial, const CRenderAttributes* pAttributes, uint64 nKey, HRenderTexture hTexture, const CUtlStringToken& shaderMode, bool bForce)
{
	const IMaterialMode* pMode; // 139
} /* size: 0, variables: 1 */


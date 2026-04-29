
//
// public/scenesystem/isceneviewdebugoverlays.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 106
//	classes: 3
//

// <0005B7CB> ../public/scenesystem/isceneviewdebugoverlays.h:54
// member functions: 297
// member variables: 3
// vtable entries: 82
// class size: 24
class ISceneViewDebugOverlays {
	/* ../public/scenesystem/isceneviewdebugoverlays.h:303 */
	struct {
		bool bNoDepthTest; /* 0 1 */
		float flDuration; /* 4 4 */
	};
	int ()(void) * * _vptr.ISceneViewDebugOverlays; /* 0 8 */
	/* ../public/scenesystem/isceneviewdebugoverlays.h:57 */
	void ISceneViewDebugOverlays(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:64 */
	virtual bool IsEmpty(const ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:67 */
	virtual void Clear(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:70 */
	virtual void AddDebugOverlaysBegin(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:71 */
	virtual void AddDebugOverlaysEnd(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:75 */
	virtual void SetOverlayStartTime(ISceneViewDebugOverlays* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:76 */
	virtual float GetOverlayStartTime(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:82 */
	virtual void AddToViewAndAgeList(ISceneViewDebugOverlays* , ISceneView* , float, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:86 */
	virtual void SetMinimumOverlayLifetime(ISceneViewDebugOverlays* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:87 */
	virtual float GetMinimumOverlayLifetime(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:92 */
	virtual void SetDefaultColor(ISceneViewDebugOverlays* , const VertexColor_t& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:93 */
	virtual VertexColor_t GetDefaultColor(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:94 */
	virtual void SetDebugOverlayRenderType(ISceneViewDebugOverlays* , DebugRenderType_t);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:95 */
	virtual DebugRenderType_t GetDebugOverlayRenderType(const ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:98 */
	virtual void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:351 */
	void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:356 */
	void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:103 */
	virtual void Line2D(ISceneViewDebugOverlays* , const Vector2D& , const Vector2D& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:361 */
	void Line2D(ISceneViewDebugOverlays* , const Vector2D& , const Vector2D& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:107 */
	virtual void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:366 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:371 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:376 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:388 */
	void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:381 */
	void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:393 */
	void BoxAngles(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:118 */
	virtual void SolidBoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:402 */
	void SolidBoxAngles(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:122 */
	virtual void Frustum(ISceneViewDebugOverlays* , const CFrustum& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:125 */
	virtual void Sphere(ISceneViewDebugOverlays* , const matrix3x4_t& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:420 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:428 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:433 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:131 */
	virtual void Capsule(ISceneViewDebugOverlays* , const matrix3x4_t& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:134 */
	virtual void Capsule(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:438 */
	void Capsule(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:445 */
	void Capsule(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:140 */
	virtual void Texture(ISceneViewDebugOverlays* , HRenderTexture, const Rect_t& , const VertexColor_t& , const Vector2D& , const Vector2D& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:451 */
	void Texture(ISceneViewDebugOverlays* , HRenderTexture, const RenderViewport_t& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:143 */
	virtual void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const char* , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:461 */
	void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:492 */
	void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , int, int, int, int, bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:475 */
	void VectorText3D(ISceneViewDebugOverlays* , const CFrustum& , const Vector& , float, const VertexColor_t& , bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:148 */
	virtual void Text(ISceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:510 */
	void Text(ISceneViewDebugOverlays* , const Vector2D& , float, const VertexColor_t& , const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:553 */
	void ScreenText(ISceneViewDebugOverlays* , float, float, const char* , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:558 */
	void ScreenTextOffset(ISceneViewDebugOverlays* , float, float, int, const char* , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:153 */
	virtual void TextWithFont(ISceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , bool, bool, FontHandle_t, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:158 */
	virtual void Text(ISceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:524 */
	void Text(ISceneViewDebugOverlays* , const Vector& , int, float, int, int, int, int, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:563 */
	void Text(ISceneViewDebugOverlays* , const Vector& , const char* , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:538 */
	void Text(ISceneViewDebugOverlays* , const Vector& , float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:163 */
	virtual void TextPretty(ISceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64, FontHandle_t, bool);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:568 */
	void EntityTextAtPosition(ISceneViewDebugOverlays* , const Vector& , int, const char* , float64, int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:167 */
	virtual void FilledRect2D(ISceneViewDebugOverlays* , const Rect_t& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:169 */
	virtual void Axis(ISceneViewDebugOverlays* , const matrix3x4_t& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:573 */
	void Axis(ISceneViewDebugOverlays* , const CTransform& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:578 */
	void Axis(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:585 */
	void Axis(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:174 */
	virtual void Cross(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:592 */
	void Cross(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:597 */
	void Cross(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:178 */
	virtual void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:605 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:610 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:615 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:620 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:184 */
	virtual void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , const VertexColor_t& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:628 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const matrix3x4_t& , float, const VertexColor_t& , const VertexColor_t& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:637 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const matrix3x4_t& , float, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:642 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:650 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:655 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:191 */
	virtual void Triangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:663 */
	void Triangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:195 */
	virtual void Circle(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:671 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:199 */
	virtual void Circle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:679 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:684 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:696 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:204 */
	virtual void HorzArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:708 */
	void HorzArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:207 */
	virtual void YawArrow(ISceneViewDebugOverlays* , const Vector& , float, float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:713 */
	void YawArrow(ISceneViewDebugOverlays* , const Vector& , float, float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:210 */
	virtual void VertArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:718 */
	void VertArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:213 */
	virtual void TwistArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:723 */
	void TwistArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:216 */
	virtual void Cone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:728 */
	void Cone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:219 */
	virtual void SolidCone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:733 */
	void SolidCone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:222 */
	virtual void ScreenMessage(ISceneViewDebugOverlays* , const char* , float64, VertexColor_t);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:224 */
	virtual void Grid(ISceneViewDebugOverlays* , const Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:225 */
	virtual bool IsGridVisible(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:226 */
	virtual void HideGrid(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:228 */
	virtual void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:738 */
	void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:743 */
	void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:232 */
	virtual void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:748 */
	void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:755 */
	void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:762 */
	virtual void AddEntityTextOverlay(ISceneViewDebugOverlays* , int, int, float64, int, int, int, int, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:774 */
	virtual void AddBoxOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:411 */
	void AddBoxOverlay(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:789 */
	virtual void AddBoxOverlay2(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , const Color& , const Color& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:800 */
	virtual void AddSphereOverlay(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, int, int, float64, bool, bool);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:805 */
	virtual void AddTriangleOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:810 */
	virtual void AddLineOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:815 */
	virtual void AddLineOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:820 */
	virtual void AddLineOverlayAlpha(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:825 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:837 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:865 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , float64, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:849 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:855 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:871 */
	virtual void AddTextOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:907 */
	virtual void AddTextOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, int, int, int, int, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:888 */
	virtual void AddTextPrettyOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, FontHandle_t, bool, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:924 */
	virtual void AddScreenTextOverlay(ISceneViewDebugOverlays* , float, float, int, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:919 */
	virtual void AddScreenTextOverlay(ISceneViewDebugOverlays* , float, float, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:929 */
	virtual void AddScreenTextOverlayOffset(ISceneViewDebugOverlays* , float, float, int, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:935 */
	virtual void AddSweptBoxOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:941 */
	virtual void AddGridOverlay(ISceneViewDebugOverlays* , const Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:947 */
	virtual void AddCoordFrameOverlay(ISceneViewDebugOverlays* , const matrix3x4_t& , float, int* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:974 */
	virtual void AddCircleOverlay(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:981 */
	virtual int ScreenPosition(ISceneViewDebugOverlays* , const Vector& , Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:989 */
	virtual int ScreenPosition(ISceneViewDebugOverlays* , float, float, Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:266 */
	virtual void AddDebugSceneObject(ISceneViewDebugOverlays* , CSceneObject* , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:271 */
	virtual void PushDebugOverlayScope(ISceneViewDebugOverlays* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:272 */
	virtual void PopDebugOverlayScope(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:273 */
	virtual void RemoveAllInScope(ISceneViewDebugOverlays* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:276 */
	virtual ISceneWorld* GetDebugSceneWorld(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:280 */
	virtual void AddToView(ISceneViewDebugOverlays* , ISceneView* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:281 */
	virtual void AgeList(ISceneViewDebugOverlays* , float, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:284 */
	virtual void UnitTestCycleOverlayRenderType(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:287 */
	void BeginBatchedLines(ISceneViewDebugOverlays* , bool, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:288 */
	void AddBatchedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:996 */
	void AddBatchedBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:290 */
	void AddBatchedTriAxis(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:291 */
	void EndBatchedLines(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:293 */
	void BeginBatchedTriangles(ISceneViewDebugOverlays* , bool, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:294 */
	void AddBatchedTriangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:295 */
	void EndBatchedTriangles(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:298 */
	virtual void RecordSnapshot(ISceneViewDebugOverlays* , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:299 */
	virtual void RestoreSnapshot(ISceneViewDebugOverlays* , const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& );
private:
	DebugRenderType_t m_nRenderType; /* 8 4 */
	struct {
		bool bNoDepthTest; /* 12 1 */
		float flDuration; /* 16 4 */
	} m_BatchedSettings; /* 12 8 */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlaysC4Ev */
	virtual bool IsEmpty(const class ISceneViewDebugOverlays  *); /* linkage=_ZNK23ISceneViewDebugOverlays7IsEmptyEv */
	virtual void Clear(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays5ClearEv */
	virtual void AddDebugOverlaysBegin(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays21AddDebugOverlaysBeginEv */
	virtual void AddDebugOverlaysEnd(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19AddDebugOverlaysEndEv */
	virtual void SetOverlayStartTime(class ISceneViewDebugOverlays *, float); /* linkage=_ZN23ISceneViewDebugOverlays19SetOverlayStartTimeEf */
	virtual float GetOverlayStartTime(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19GetOverlayStartTimeEv */
	virtual void AddToViewAndAgeList(class ISceneViewDebugOverlays *, class ISceneView *, float, float); /* linkage=_ZN23ISceneViewDebugOverlays19AddToViewAndAgeListEP10ISceneViewff */
	virtual void SetMinimumOverlayLifetime(class ISceneViewDebugOverlays *, float); /* linkage=_ZN23ISceneViewDebugOverlays25SetMinimumOverlayLifetimeEf */
	virtual float GetMinimumOverlayLifetime(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays25GetMinimumOverlayLifetimeEv */
	virtual void SetDefaultColor(class ISceneViewDebugOverlays *, const class VertexColor_t  &); /* linkage=_ZN23ISceneViewDebugOverlays15SetDefaultColorERK13VertexColor_t */
	virtual class VertexColor_t GetDefaultColor(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays15GetDefaultColorEv */
	virtual void SetDebugOverlayRenderType(class ISceneViewDebugOverlays *, enum DebugRenderType_t); /* linkage=_ZN23ISceneViewDebugOverlays25SetDebugOverlayRenderTypeE17DebugRenderType_t */
	virtual enum DebugRenderType_t GetDebugOverlayRenderType(const class ISceneViewDebugOverlays  *); /* linkage=_ZNK23ISceneViewDebugOverlays25GetDebugOverlayRenderTypeEv */
	virtual void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_RK13VertexColor_tbd */
	void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_iiibd */
	void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_iiiibd */
	virtual void Line2D(class ISceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays6Line2DERK8Vector2DS2_RK13VertexColor_td */
	void Line2D(class ISceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays6Line2DERK8Vector2DS2_iiiid */
	virtual void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_RK13VertexColor_tbd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_iiiibd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_S2_iiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK10Quaternioniiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK6QAngleiiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK11matrix3x4_tRK6VectorS5_iiiibd */
	virtual void SolidBoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14SolidBoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	void SolidBoxAngles(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14SolidBoxAnglesERK11matrix3x4_tRK6VectorS5_RK13VertexColor_tbd */
	virtual void Frustum(class ISceneViewDebugOverlays *, const class CFrustum  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays7FrustumERK8CFrustumRK13VertexColor_td */
	virtual void Sphere(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK11matrix3x4_tfRK13VertexColor_tbd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6VectorfRK13VertexColor_tbd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6Vectorfiiibd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6Vectorfiiiibd */
	virtual void Capsule(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK11matrix3x4_tffRK13VertexColor_tbd */
	virtual void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorS2_fRK13VertexColor_tbd */
	void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorRK6QAngleffiiiibd */
	void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorRK10Quaternionffiiiibd */
	virtual void Texture(class ISceneViewDebugOverlays *, HRenderTexture, const class Rect_t  &, const class VertexColor_t  &, const class Vector2D  &, const class Vector2D  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays7TextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseERK6Rect_tRK13VertexColor_tRK8Vector2DSB_d */
	void Texture(class ISceneViewDebugOverlays *, HRenderTexture, const class RenderViewport_t  &); /* linkage=_ZN23ISceneViewDebugOverlays7TextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseERK16RenderViewport_t */
	virtual void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const char  *, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorS2_S2_PKcRK13VertexColor_tbd */
	void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorS2_S2_RK13VertexColor_tbdPKcz */
	void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, int, int, int, int, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorRK10QuaternioniiiibdPKcz */
	void VectorText3D(class ISceneViewDebugOverlays *, const class CFrustum  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK8CFrustumRK6VectorfRK13VertexColor_tbdPKcz */
	virtual void Text(class ISceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK8Vector2DiPKcfRK13VertexColor_td */
	void Text(class ISceneViewDebugOverlays *, const class Vector2D  &, float, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK8Vector2DfRK13VertexColor_tPKcz */
	void ScreenText(class ISceneViewDebugOverlays *, float, float, const char  *, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays10ScreenTextEffPKciiiid */
	void ScreenTextOffset(class ISceneViewDebugOverlays *, float, float, int, const char  *, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays16ScreenTextOffsetEffiPKciiiid */
	virtual void TextWithFont(class ISceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, bool, bool, FontHandle_t, float64); /* linkage=_ZN23ISceneViewDebugOverlays12TextWithFontERK8Vector2DiPKcfRK13VertexColor_tbbjd */
	virtual void Text(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectoriPKcfRK13VertexColor_td */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, int, float, int, int, int, int, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectorifiiiidPKcz */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, const char  *, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectorPKcd */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectordPKcz */
	virtual void TextPretty(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64, FontHandle_t, bool); /* linkage=_ZN23ISceneViewDebugOverlays10TextPrettyERK6VectoriPKcfRK13VertexColor_tdjb */
	void EntityTextAtPosition(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float64, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays20EntityTextAtPositionERK6VectoriPKcdiiii */
	virtual void FilledRect2D(class ISceneViewDebugOverlays *, const class Rect_t  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays12FilledRect2DERK6Rect_tRK13VertexColor_td */
	virtual void Axis(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK11matrix3x4_tfbd */
	void Axis(class ISceneViewDebugOverlays *, const class CTransform  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK10CTransformfbd */
	void Axis(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK6VectorRK6QAnglefbd */
	void Axis(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK6VectorRK10Quaternionfbd */
	virtual void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6VectorfRK13VertexColor_tbd */
	void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6Vectorfiiibd */
	void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6Vectorfiiiibd */
	virtual void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_RK13VertexColor_tbd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_iiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_iiiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6Vectorfiiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6Vectorfiiiibd */
	virtual void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, const class VertexColor_t  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorS2_S2_S2_fRK13VertexColor_tS5_S5_bd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, const class VertexColor_t  &, const class VertexColor_t  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK11matrix3x4_tfRK13VertexColor_tS5_S5_bd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK11matrix3x4_tfibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK6QAnglefiiiibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK6QAnglefiiibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK10Quaternionfiiiibd */
	virtual void Triangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8TriangleERK6VectorS2_S2_RK13VertexColor_tbd */
	void Triangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8TriangleERK6VectorS2_S2_iiiibd */
	virtual void Circle(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorfRK13VertexColor_tbd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6Vectorfiiiibd */
	virtual void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorS2_S2_fRK13VertexColor_tbd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorS2_S2_fiiiibd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorRK10Quaternionfiiiibd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorRK6QAnglefiiiibd */
	virtual void HorzArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9HorzArrowERK6VectorS2_fRK13VertexColor_tbd */
	void HorzArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9HorzArrowERK6VectorS2_fiiiibd */
	virtual void YawArrow(class ISceneViewDebugOverlays *, const class Vector  &, float, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8YawArrowERK6VectorfffRK13VertexColor_tbd */
	void YawArrow(class ISceneViewDebugOverlays *, const class Vector  &, float, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8YawArrowERK6Vectorfffiiiibd */
	virtual void VertArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9VertArrowERK6VectorS2_fRK13VertexColor_tbd */
	void VertArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9VertArrowERK6VectorS2_fiiiibd */
	virtual void TwistArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays10TwistArrowERK6VectorS2_S2_fRK13VertexColor_tbd */
	void TwistArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays10TwistArrowERK6VectorS2_S2_fiiiibd */
	virtual void Cone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4ConeERK6VectorS2_ffRK13VertexColor_tbd */
	void Cone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4ConeERK6VectorS2_ffiiiibd */
	virtual void SolidCone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9SolidConeERK6VectorS2_ffRK13VertexColor_tbd */
	void SolidCone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9SolidConeERK6VectorS2_ffiiiibd */
	virtual void ScreenMessage(class ISceneViewDebugOverlays *, const char  *, float64, class VertexColor_t); /* linkage=_ZN23ISceneViewDebugOverlays13ScreenMessageEPKcd13VertexColor_t */
	virtual void Grid(class ISceneViewDebugOverlays *, const class Vector  &); /* linkage=_ZN23ISceneViewDebugOverlays4GridERK6Vector */
	virtual bool IsGridVisible(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays13IsGridVisibleEv */
	virtual void HideGrid(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays8HideGridEv */
	virtual void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiRK13VertexColor_tbd */
	void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiiiibd */
	void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiiiiibd */
	virtual void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK10QuaternionRK13VertexColor_td */
	void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK6QAngleiiiid */
	void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK10Quaternioniiiid */
	virtual void AddEntityTextOverlay(class ISceneViewDebugOverlays *, int, int, float64, int, int, int, int, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays20AddEntityTextOverlayEiidiiiiPKcz */
	virtual void AddBoxOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays13AddBoxOverlayERK6VectorS2_S2_RK6QAngleiiiid */
	void AddBoxOverlay(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays13AddBoxOverlayERK11matrix3x4_tRK6VectorS5_iiiid */
	virtual void AddBoxOverlay2(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, const class Color  &, const class Color  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddBoxOverlay2ERK6VectorS2_S2_RK6QAngleRK5ColorS8_d */
	virtual void AddSphereOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, int, int, float64, bool, bool); /* linkage=_ZN23ISceneViewDebugOverlays16AddSphereOverlayERK6Vectorfiiiiiidbb */
	virtual void AddTriangleOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18AddTriangleOverlayERK6VectorS2_S2_iiiibd */
	virtual void AddLineOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddLineOverlayERK6VectorS2_iiibd */
	virtual void AddLineOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddLineOverlayERK6VectorS2_iiiibd */
	virtual void AddLineOverlayAlpha(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays19AddLineOverlayAlphaERK6VectorS2_iiiibd */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectordPKcz */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridPKcz */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float64, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectordfPKc */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridfPKc */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridffffPKc */
	virtual void AddTextOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays17AddTextOverlayRGBERK6VectoridffffPKcz */
	virtual void AddTextOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, int, int, int, int, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays17AddTextOverlayRGBERK6VectoridiiiiPKcz */
	virtual void AddTextPrettyOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, FontHandle_t, bool, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays23AddTextPrettyOverlayRGBERK6VectoridffffjbPKcz */
	virtual void AddScreenTextOverlay(class ISceneViewDebugOverlays *, float, float, int, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays20AddScreenTextOverlayEffidiiiiPKc */
	virtual void AddScreenTextOverlay(class ISceneViewDebugOverlays *, float, float, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays20AddScreenTextOverlayEffdiiiiPKc */
	virtual void AddScreenTextOverlayOffset(class ISceneViewDebugOverlays *, float, float, int, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays26AddScreenTextOverlayOffsetEffidiiiiPKc */
	virtual void AddSweptBoxOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays18AddSweptBoxOverlayERK6VectorS2_S2_S2_RK6QAngleiiiid */
	virtual void AddGridOverlay(class ISceneViewDebugOverlays *, const class Vector  &); /* linkage=_ZN23ISceneViewDebugOverlays14AddGridOverlayERK6Vector */
	virtual void AddCoordFrameOverlay(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, int *); /* linkage=_ZN23ISceneViewDebugOverlays20AddCoordFrameOverlayERK11matrix3x4_tfPA3_i */
	virtual void AddCircleOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays16AddCircleOverlayERK6Vectorfiiiibd */
	virtual int ScreenPosition(class ISceneViewDebugOverlays *, const class Vector  &, class Vector &); /* linkage=_ZN23ISceneViewDebugOverlays14ScreenPositionERK6VectorRS0_ */
	virtual int ScreenPosition(class ISceneViewDebugOverlays *, float, float, class Vector &); /* linkage=_ZN23ISceneViewDebugOverlays14ScreenPositionEffR6Vector */
	virtual void AddDebugSceneObject(class ISceneViewDebugOverlays *, class CSceneObject *, float64); /* linkage=_ZN23ISceneViewDebugOverlays19AddDebugSceneObjectEP12CSceneObjectd */
	virtual void PushDebugOverlayScope(class ISceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays21PushDebugOverlayScopeE15CUtlStringToken */
	virtual void PopDebugOverlayScope(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays20PopDebugOverlayScopeEv */
	virtual void RemoveAllInScope(class ISceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays16RemoveAllInScopeE15CUtlStringToken */
	virtual class ISceneWorld * GetDebugSceneWorld(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays18GetDebugSceneWorldEv */
	virtual void AddToView(class ISceneViewDebugOverlays *, class ISceneView *, float); /* linkage=_ZN23ISceneViewDebugOverlays9AddToViewEP10ISceneViewf */
	virtual void AgeList(class ISceneViewDebugOverlays *, float, float); /* linkage=_ZN23ISceneViewDebugOverlays7AgeListEff */
	virtual void UnitTestCycleOverlayRenderType(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays30UnitTestCycleOverlayRenderTypeEv */
	void BeginBatchedLines(class ISceneViewDebugOverlays *, bool, float); /* linkage=_ZN23ISceneViewDebugOverlays17BeginBatchedLinesEbf */
	void AddBatchedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays14AddBatchedLineERK6VectorS2_iiii */
	void AddBatchedBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays13AddBatchedBoxERK6VectorS2_iiii */
	void AddBatchedTriAxis(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays17AddBatchedTriAxisERK6Vectorfiiii */
	void EndBatchedLines(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays15EndBatchedLinesEv */
	void BeginBatchedTriangles(class ISceneViewDebugOverlays *, bool, float); /* linkage=_ZN23ISceneViewDebugOverlays21BeginBatchedTrianglesEbf */
	void AddBatchedTriangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays18AddBatchedTriangleERK6VectorS2_S2_iiii */
	void EndBatchedTriangles(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19EndBatchedTrianglesEv */
	virtual void RecordSnapshot(class ISceneViewDebugOverlays *, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays14RecordSnapshotEP10CUtlVectorIh10CUtlMemoryIhiEE15CUtlStringToken */
	virtual void RestoreSnapshot(class ISceneViewDebugOverlays *, const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  &); /* linkage=_ZN23ISceneViewDebugOverlays15RestoreSnapshotERK10CUtlVectorIh10CUtlMemoryIhiEE */
	void ~ISceneViewDebugOverlays(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlaysD4Ev */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *, class ISceneViewDebugOverlays &); /* linkage=_ZN23ISceneViewDebugOverlaysC4EOS_ */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *, const class ISceneViewDebugOverlays  &); /* linkage=_ZN23ISceneViewDebugOverlaysC4ERKS_ */
};

// <02B5ADB2> ../public/scenesystem/isceneviewdebugoverlays.h:54
// member functions: 298
// member variables: 3
// vtable entries: 82
// class size: 24
class ISceneViewDebugOverlays {
	/* ../public/scenesystem/isceneviewdebugoverlays.h:303 */
	struct {
		bool bNoDepthTest; /* 0 1 */
		float flDuration; /* 4 4 */
	};
	void ~ISceneViewDebugOverlays(ISceneViewDebugOverlays* );
	int ()(void) * * _vptr.ISceneViewDebugOverlays; /* 0 8 */
	/* ../public/scenesystem/isceneviewdebugoverlays.h:57 */
	void ISceneViewDebugOverlays(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:64 */
	virtual bool IsEmpty(const ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:67 */
	virtual void Clear(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:70 */
	virtual void AddDebugOverlaysBegin(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:71 */
	virtual void AddDebugOverlaysEnd(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:75 */
	virtual void SetOverlayStartTime(ISceneViewDebugOverlays* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:76 */
	virtual float GetOverlayStartTime(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:82 */
	virtual void AddToViewAndAgeList(ISceneViewDebugOverlays* , ISceneView* , float, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:86 */
	virtual void SetMinimumOverlayLifetime(ISceneViewDebugOverlays* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:87 */
	virtual float GetMinimumOverlayLifetime(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:92 */
	virtual void SetDefaultColor(ISceneViewDebugOverlays* , const VertexColor_t& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:93 */
	virtual VertexColor_t GetDefaultColor(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:94 */
	virtual void SetDebugOverlayRenderType(ISceneViewDebugOverlays* , DebugRenderType_t);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:95 */
	virtual DebugRenderType_t GetDebugOverlayRenderType(const ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:98 */
	virtual void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:351 */
	void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:356 */
	void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:103 */
	virtual void Line2D(ISceneViewDebugOverlays* , const Vector2D& , const Vector2D& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:361 */
	void Line2D(ISceneViewDebugOverlays* , const Vector2D& , const Vector2D& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:107 */
	virtual void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:366 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:371 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:376 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:388 */
	void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:381 */
	void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:393 */
	void BoxAngles(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:118 */
	virtual void SolidBoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:402 */
	void SolidBoxAngles(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:122 */
	virtual void Frustum(ISceneViewDebugOverlays* , const CFrustum& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:125 */
	virtual void Sphere(ISceneViewDebugOverlays* , const matrix3x4_t& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:420 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:428 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:433 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:131 */
	virtual void Capsule(ISceneViewDebugOverlays* , const matrix3x4_t& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:134 */
	virtual void Capsule(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:438 */
	void Capsule(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:445 */
	void Capsule(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:140 */
	virtual void Texture(ISceneViewDebugOverlays* , HRenderTexture, const Rect_t& , const VertexColor_t& , const Vector2D& , const Vector2D& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:451 */
	void Texture(ISceneViewDebugOverlays* , HRenderTexture, const RenderViewport_t& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:143 */
	virtual void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const char* , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:461 */
	void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:492 */
	void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , int, int, int, int, bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:475 */
	void VectorText3D(ISceneViewDebugOverlays* , const CFrustum& , const Vector& , float, const VertexColor_t& , bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:148 */
	virtual void Text(ISceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:510 */
	void Text(ISceneViewDebugOverlays* , const Vector2D& , float, const VertexColor_t& , const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:553 */
	void ScreenText(ISceneViewDebugOverlays* , float, float, const char* , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:558 */
	void ScreenTextOffset(ISceneViewDebugOverlays* , float, float, int, const char* , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:153 */
	virtual void TextWithFont(ISceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , bool, bool, FontHandle_t, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:158 */
	virtual void Text(ISceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:524 */
	void Text(ISceneViewDebugOverlays* , const Vector& , int, float, int, int, int, int, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:563 */
	void Text(ISceneViewDebugOverlays* , const Vector& , const char* , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:538 */
	void Text(ISceneViewDebugOverlays* , const Vector& , float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:163 */
	virtual void TextPretty(ISceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64, FontHandle_t, bool);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:568 */
	void EntityTextAtPosition(ISceneViewDebugOverlays* , const Vector& , int, const char* , float64, int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:167 */
	virtual void FilledRect2D(ISceneViewDebugOverlays* , const Rect_t& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:169 */
	virtual void Axis(ISceneViewDebugOverlays* , const matrix3x4_t& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:573 */
	void Axis(ISceneViewDebugOverlays* , const CTransform& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:578 */
	void Axis(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:585 */
	void Axis(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:174 */
	virtual void Cross(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:592 */
	void Cross(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:597 */
	void Cross(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:178 */
	virtual void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:605 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:610 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:615 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:620 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:184 */
	virtual void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , const VertexColor_t& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:628 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const matrix3x4_t& , float, const VertexColor_t& , const VertexColor_t& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:637 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const matrix3x4_t& , float, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:642 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:650 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:655 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:191 */
	virtual void Triangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:663 */
	void Triangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:195 */
	virtual void Circle(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:671 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:199 */
	virtual void Circle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:679 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:684 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:696 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:204 */
	virtual void HorzArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:708 */
	void HorzArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:207 */
	virtual void YawArrow(ISceneViewDebugOverlays* , const Vector& , float, float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:713 */
	void YawArrow(ISceneViewDebugOverlays* , const Vector& , float, float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:210 */
	virtual void VertArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:718 */
	void VertArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:213 */
	virtual void TwistArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:723 */
	void TwistArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:216 */
	virtual void Cone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:728 */
	void Cone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:219 */
	virtual void SolidCone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:733 */
	void SolidCone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:222 */
	virtual void ScreenMessage(ISceneViewDebugOverlays* , const char* , float64, VertexColor_t);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:224 */
	virtual void Grid(ISceneViewDebugOverlays* , const Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:225 */
	virtual bool IsGridVisible(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:226 */
	virtual void HideGrid(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:228 */
	virtual void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:738 */
	void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:743 */
	void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:232 */
	virtual void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:748 */
	void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:755 */
	void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:762 */
	virtual void AddEntityTextOverlay(ISceneViewDebugOverlays* , int, int, float64, int, int, int, int, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:774 */
	virtual void AddBoxOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:411 */
	void AddBoxOverlay(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:789 */
	virtual void AddBoxOverlay2(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , const Color& , const Color& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:800 */
	virtual void AddSphereOverlay(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, int, int, float64, bool, bool);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:805 */
	virtual void AddTriangleOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:810 */
	virtual void AddLineOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:815 */
	virtual void AddLineOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:820 */
	virtual void AddLineOverlayAlpha(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:825 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:837 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:865 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , float64, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:849 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:855 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:871 */
	virtual void AddTextOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:907 */
	virtual void AddTextOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, int, int, int, int, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:888 */
	virtual void AddTextPrettyOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, FontHandle_t, bool, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:924 */
	virtual void AddScreenTextOverlay(ISceneViewDebugOverlays* , float, float, int, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:919 */
	virtual void AddScreenTextOverlay(ISceneViewDebugOverlays* , float, float, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:929 */
	virtual void AddScreenTextOverlayOffset(ISceneViewDebugOverlays* , float, float, int, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:935 */
	virtual void AddSweptBoxOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:941 */
	virtual void AddGridOverlay(ISceneViewDebugOverlays* , const Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:947 */
	virtual void AddCoordFrameOverlay(ISceneViewDebugOverlays* , const matrix3x4_t& , float, int* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:974 */
	virtual void AddCircleOverlay(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:981 */
	virtual int ScreenPosition(ISceneViewDebugOverlays* , const Vector& , Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:989 */
	virtual int ScreenPosition(ISceneViewDebugOverlays* , float, float, Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:266 */
	virtual void AddDebugSceneObject(ISceneViewDebugOverlays* , CSceneObject* , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:271 */
	virtual void PushDebugOverlayScope(ISceneViewDebugOverlays* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:272 */
	virtual void PopDebugOverlayScope(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:273 */
	virtual void RemoveAllInScope(ISceneViewDebugOverlays* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:276 */
	virtual ISceneWorld* GetDebugSceneWorld(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:280 */
	virtual void AddToView(ISceneViewDebugOverlays* , ISceneView* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:281 */
	virtual void AgeList(ISceneViewDebugOverlays* , float, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:284 */
	virtual void UnitTestCycleOverlayRenderType(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:287 */
	void BeginBatchedLines(ISceneViewDebugOverlays* , bool, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:288 */
	void AddBatchedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:996 */
	void AddBatchedBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:290 */
	void AddBatchedTriAxis(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:291 */
	void EndBatchedLines(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:293 */
	void BeginBatchedTriangles(ISceneViewDebugOverlays* , bool, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:294 */
	void AddBatchedTriangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:295 */
	void EndBatchedTriangles(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:298 */
	virtual void RecordSnapshot(ISceneViewDebugOverlays* , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:299 */
	virtual void RestoreSnapshot(ISceneViewDebugOverlays* , const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& );
private:
	DebugRenderType_t m_nRenderType; /* 8 4 */
	struct {
		bool bNoDepthTest; /* 12 1 */
		float flDuration; /* 16 4 */
	} m_BatchedSettings; /* 12 8 */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlaysC4Ev */
	virtual bool IsEmpty(const class ISceneViewDebugOverlays  *); /* linkage=_ZNK23ISceneViewDebugOverlays7IsEmptyEv */
	virtual void Clear(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays5ClearEv */
	virtual void AddDebugOverlaysBegin(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays21AddDebugOverlaysBeginEv */
	virtual void AddDebugOverlaysEnd(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19AddDebugOverlaysEndEv */
	virtual void SetOverlayStartTime(class ISceneViewDebugOverlays *, float); /* linkage=_ZN23ISceneViewDebugOverlays19SetOverlayStartTimeEf */
	virtual float GetOverlayStartTime(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19GetOverlayStartTimeEv */
	virtual void AddToViewAndAgeList(class ISceneViewDebugOverlays *, class ISceneView *, float, float); /* linkage=_ZN23ISceneViewDebugOverlays19AddToViewAndAgeListEP10ISceneViewff */
	virtual void SetMinimumOverlayLifetime(class ISceneViewDebugOverlays *, float); /* linkage=_ZN23ISceneViewDebugOverlays25SetMinimumOverlayLifetimeEf */
	virtual float GetMinimumOverlayLifetime(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays25GetMinimumOverlayLifetimeEv */
	virtual void SetDefaultColor(class ISceneViewDebugOverlays *, const class VertexColor_t  &); /* linkage=_ZN23ISceneViewDebugOverlays15SetDefaultColorERK13VertexColor_t */
	virtual class VertexColor_t GetDefaultColor(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays15GetDefaultColorEv */
	virtual void SetDebugOverlayRenderType(class ISceneViewDebugOverlays *, enum DebugRenderType_t); /* linkage=_ZN23ISceneViewDebugOverlays25SetDebugOverlayRenderTypeE17DebugRenderType_t */
	virtual enum DebugRenderType_t GetDebugOverlayRenderType(const class ISceneViewDebugOverlays  *); /* linkage=_ZNK23ISceneViewDebugOverlays25GetDebugOverlayRenderTypeEv */
	virtual void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_RK13VertexColor_tbd */
	void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_iiibd */
	void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_iiiibd */
	virtual void Line2D(class ISceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays6Line2DERK8Vector2DS2_RK13VertexColor_td */
	void Line2D(class ISceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays6Line2DERK8Vector2DS2_iiiid */
	virtual void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_RK13VertexColor_tbd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_iiiibd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_S2_iiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK10Quaternioniiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK6QAngleiiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK11matrix3x4_tRK6VectorS5_iiiibd */
	virtual void SolidBoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14SolidBoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	void SolidBoxAngles(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14SolidBoxAnglesERK11matrix3x4_tRK6VectorS5_RK13VertexColor_tbd */
	virtual void Frustum(class ISceneViewDebugOverlays *, const class CFrustum  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays7FrustumERK8CFrustumRK13VertexColor_td */
	virtual void Sphere(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK11matrix3x4_tfRK13VertexColor_tbd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6VectorfRK13VertexColor_tbd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6Vectorfiiibd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6Vectorfiiiibd */
	virtual void Capsule(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK11matrix3x4_tffRK13VertexColor_tbd */
	virtual void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorS2_fRK13VertexColor_tbd */
	void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorRK6QAngleffiiiibd */
	void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorRK10Quaternionffiiiibd */
	virtual void Texture(class ISceneViewDebugOverlays *, HRenderTexture, const class Rect_t  &, const class VertexColor_t  &, const class Vector2D  &, const class Vector2D  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays7TextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseERK6Rect_tRK13VertexColor_tRK8Vector2DSB_d */
	void Texture(class ISceneViewDebugOverlays *, HRenderTexture, const class RenderViewport_t  &); /* linkage=_ZN23ISceneViewDebugOverlays7TextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseERK16RenderViewport_t */
	virtual void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const char  *, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorS2_S2_PKcRK13VertexColor_tbd */
	void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorS2_S2_RK13VertexColor_tbdPKcz */
	void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, int, int, int, int, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorRK10QuaternioniiiibdPKcz */
	void VectorText3D(class ISceneViewDebugOverlays *, const class CFrustum  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK8CFrustumRK6VectorfRK13VertexColor_tbdPKcz */
	virtual void Text(class ISceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK8Vector2DiPKcfRK13VertexColor_td */
	void Text(class ISceneViewDebugOverlays *, const class Vector2D  &, float, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK8Vector2DfRK13VertexColor_tPKcz */
	void ScreenText(class ISceneViewDebugOverlays *, float, float, const char  *, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays10ScreenTextEffPKciiiid */
	void ScreenTextOffset(class ISceneViewDebugOverlays *, float, float, int, const char  *, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays16ScreenTextOffsetEffiPKciiiid */
	virtual void TextWithFont(class ISceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, bool, bool, FontHandle_t, float64); /* linkage=_ZN23ISceneViewDebugOverlays12TextWithFontERK8Vector2DiPKcfRK13VertexColor_tbbjd */
	virtual void Text(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectoriPKcfRK13VertexColor_td */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, int, float, int, int, int, int, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectorifiiiidPKcz */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, const char  *, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectorPKcd */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectordPKcz */
	virtual void TextPretty(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64, FontHandle_t, bool); /* linkage=_ZN23ISceneViewDebugOverlays10TextPrettyERK6VectoriPKcfRK13VertexColor_tdjb */
	void EntityTextAtPosition(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float64, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays20EntityTextAtPositionERK6VectoriPKcdiiii */
	virtual void FilledRect2D(class ISceneViewDebugOverlays *, const class Rect_t  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays12FilledRect2DERK6Rect_tRK13VertexColor_td */
	virtual void Axis(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK11matrix3x4_tfbd */
	void Axis(class ISceneViewDebugOverlays *, const class CTransform  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK10CTransformfbd */
	void Axis(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK6VectorRK6QAnglefbd */
	void Axis(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK6VectorRK10Quaternionfbd */
	virtual void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6VectorfRK13VertexColor_tbd */
	void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6Vectorfiiibd */
	void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6Vectorfiiiibd */
	virtual void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_RK13VertexColor_tbd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_iiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_iiiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6Vectorfiiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6Vectorfiiiibd */
	virtual void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, const class VertexColor_t  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorS2_S2_S2_fRK13VertexColor_tS5_S5_bd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, const class VertexColor_t  &, const class VertexColor_t  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK11matrix3x4_tfRK13VertexColor_tS5_S5_bd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK11matrix3x4_tfibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK6QAnglefiiiibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK6QAnglefiiibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK10Quaternionfiiiibd */
	virtual void Triangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8TriangleERK6VectorS2_S2_RK13VertexColor_tbd */
	void Triangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8TriangleERK6VectorS2_S2_iiiibd */
	virtual void Circle(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorfRK13VertexColor_tbd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6Vectorfiiiibd */
	virtual void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorS2_S2_fRK13VertexColor_tbd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorS2_S2_fiiiibd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorRK10Quaternionfiiiibd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorRK6QAnglefiiiibd */
	virtual void HorzArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9HorzArrowERK6VectorS2_fRK13VertexColor_tbd */
	void HorzArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9HorzArrowERK6VectorS2_fiiiibd */
	virtual void YawArrow(class ISceneViewDebugOverlays *, const class Vector  &, float, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8YawArrowERK6VectorfffRK13VertexColor_tbd */
	void YawArrow(class ISceneViewDebugOverlays *, const class Vector  &, float, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8YawArrowERK6Vectorfffiiiibd */
	virtual void VertArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9VertArrowERK6VectorS2_fRK13VertexColor_tbd */
	void VertArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9VertArrowERK6VectorS2_fiiiibd */
	virtual void TwistArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays10TwistArrowERK6VectorS2_S2_fRK13VertexColor_tbd */
	void TwistArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays10TwistArrowERK6VectorS2_S2_fiiiibd */
	virtual void Cone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4ConeERK6VectorS2_ffRK13VertexColor_tbd */
	void Cone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4ConeERK6VectorS2_ffiiiibd */
	virtual void SolidCone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9SolidConeERK6VectorS2_ffRK13VertexColor_tbd */
	void SolidCone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9SolidConeERK6VectorS2_ffiiiibd */
	virtual void ScreenMessage(class ISceneViewDebugOverlays *, const char  *, float64, class VertexColor_t); /* linkage=_ZN23ISceneViewDebugOverlays13ScreenMessageEPKcd13VertexColor_t */
	virtual void Grid(class ISceneViewDebugOverlays *, const class Vector  &); /* linkage=_ZN23ISceneViewDebugOverlays4GridERK6Vector */
	virtual bool IsGridVisible(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays13IsGridVisibleEv */
	virtual void HideGrid(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays8HideGridEv */
	virtual void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiRK13VertexColor_tbd */
	void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiiiibd */
	void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiiiiibd */
	virtual void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK10QuaternionRK13VertexColor_td */
	void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK6QAngleiiiid */
	void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK10Quaternioniiiid */
	virtual void AddEntityTextOverlay(class ISceneViewDebugOverlays *, int, int, float64, int, int, int, int, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays20AddEntityTextOverlayEiidiiiiPKcz */
	virtual void AddBoxOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays13AddBoxOverlayERK6VectorS2_S2_RK6QAngleiiiid */
	void AddBoxOverlay(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays13AddBoxOverlayERK11matrix3x4_tRK6VectorS5_iiiid */
	virtual void AddBoxOverlay2(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, const class Color  &, const class Color  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddBoxOverlay2ERK6VectorS2_S2_RK6QAngleRK5ColorS8_d */
	virtual void AddSphereOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, int, int, float64, bool, bool); /* linkage=_ZN23ISceneViewDebugOverlays16AddSphereOverlayERK6Vectorfiiiiiidbb */
	virtual void AddTriangleOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18AddTriangleOverlayERK6VectorS2_S2_iiiibd */
	virtual void AddLineOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddLineOverlayERK6VectorS2_iiibd */
	virtual void AddLineOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddLineOverlayERK6VectorS2_iiiibd */
	virtual void AddLineOverlayAlpha(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays19AddLineOverlayAlphaERK6VectorS2_iiiibd */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectordPKcz */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridPKcz */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float64, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectordfPKc */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridfPKc */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridffffPKc */
	virtual void AddTextOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays17AddTextOverlayRGBERK6VectoridffffPKcz */
	virtual void AddTextOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, int, int, int, int, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays17AddTextOverlayRGBERK6VectoridiiiiPKcz */
	virtual void AddTextPrettyOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, FontHandle_t, bool, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays23AddTextPrettyOverlayRGBERK6VectoridffffjbPKcz */
	virtual void AddScreenTextOverlay(class ISceneViewDebugOverlays *, float, float, int, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays20AddScreenTextOverlayEffidiiiiPKc */
	virtual void AddScreenTextOverlay(class ISceneViewDebugOverlays *, float, float, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays20AddScreenTextOverlayEffdiiiiPKc */
	virtual void AddScreenTextOverlayOffset(class ISceneViewDebugOverlays *, float, float, int, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays26AddScreenTextOverlayOffsetEffidiiiiPKc */
	virtual void AddSweptBoxOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays18AddSweptBoxOverlayERK6VectorS2_S2_S2_RK6QAngleiiiid */
	virtual void AddGridOverlay(class ISceneViewDebugOverlays *, const class Vector  &); /* linkage=_ZN23ISceneViewDebugOverlays14AddGridOverlayERK6Vector */
	virtual void AddCoordFrameOverlay(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, int *); /* linkage=_ZN23ISceneViewDebugOverlays20AddCoordFrameOverlayERK11matrix3x4_tfPA3_i */
	virtual void AddCircleOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays16AddCircleOverlayERK6Vectorfiiiibd */
	virtual int ScreenPosition(class ISceneViewDebugOverlays *, const class Vector  &, class Vector &); /* linkage=_ZN23ISceneViewDebugOverlays14ScreenPositionERK6VectorRS0_ */
	virtual int ScreenPosition(class ISceneViewDebugOverlays *, float, float, class Vector &); /* linkage=_ZN23ISceneViewDebugOverlays14ScreenPositionEffR6Vector */
	virtual void AddDebugSceneObject(class ISceneViewDebugOverlays *, class CSceneObject *, float64); /* linkage=_ZN23ISceneViewDebugOverlays19AddDebugSceneObjectEP12CSceneObjectd */
	virtual void PushDebugOverlayScope(class ISceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays21PushDebugOverlayScopeE15CUtlStringToken */
	virtual void PopDebugOverlayScope(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays20PopDebugOverlayScopeEv */
	virtual void RemoveAllInScope(class ISceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays16RemoveAllInScopeE15CUtlStringToken */
	virtual class ISceneWorld * GetDebugSceneWorld(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays18GetDebugSceneWorldEv */
	virtual void AddToView(class ISceneViewDebugOverlays *, class ISceneView *, float); /* linkage=_ZN23ISceneViewDebugOverlays9AddToViewEP10ISceneViewf */
	virtual void AgeList(class ISceneViewDebugOverlays *, float, float); /* linkage=_ZN23ISceneViewDebugOverlays7AgeListEff */
	virtual void UnitTestCycleOverlayRenderType(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays30UnitTestCycleOverlayRenderTypeEv */
	void BeginBatchedLines(class ISceneViewDebugOverlays *, bool, float); /* linkage=_ZN23ISceneViewDebugOverlays17BeginBatchedLinesEbf */
	void AddBatchedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays14AddBatchedLineERK6VectorS2_iiii */
	void AddBatchedBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays13AddBatchedBoxERK6VectorS2_iiii */
	void AddBatchedTriAxis(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays17AddBatchedTriAxisERK6Vectorfiiii */
	void EndBatchedLines(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays15EndBatchedLinesEv */
	void BeginBatchedTriangles(class ISceneViewDebugOverlays *, bool, float); /* linkage=_ZN23ISceneViewDebugOverlays21BeginBatchedTrianglesEbf */
	void AddBatchedTriangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays18AddBatchedTriangleERK6VectorS2_S2_iiii */
	void EndBatchedTriangles(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19EndBatchedTrianglesEv */
	virtual void RecordSnapshot(class ISceneViewDebugOverlays *, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays14RecordSnapshotEP10CUtlVectorIh10CUtlMemoryIhiEE15CUtlStringToken */
	virtual void RestoreSnapshot(class ISceneViewDebugOverlays *, const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  &); /* linkage=_ZN23ISceneViewDebugOverlays15RestoreSnapshotERK10CUtlVectorIh10CUtlMemoryIhiEE */
	void ~ISceneViewDebugOverlays(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlaysD4Ev */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *, class ISceneViewDebugOverlays &); /* linkage=_ZN23ISceneViewDebugOverlaysC4EOS_ */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *, const class ISceneViewDebugOverlays  &); /* linkage=_ZN23ISceneViewDebugOverlaysC4ERKS_ */
};

// <030DB193> ../public/scenesystem/isceneviewdebugoverlays.h:54
// member functions: 300
// member variables: 3
// vtable entries: 82
// class size: 24
class ISceneViewDebugOverlays {
	/* ../public/scenesystem/isceneviewdebugoverlays.h:303 */
	struct {
		bool bNoDepthTest; /* 0 1 */
		float flDuration; /* 4 4 */
	};
	void ISceneViewDebugOverlays(ISceneViewDebugOverlays* , ISceneViewDebugOverlays& );
	void ISceneViewDebugOverlays(ISceneViewDebugOverlays* , const ISceneViewDebugOverlays& );
	void ~ISceneViewDebugOverlays(ISceneViewDebugOverlays* );
	int ()(void) * * _vptr.ISceneViewDebugOverlays; /* 0 8 */
	/* ../public/scenesystem/isceneviewdebugoverlays.h:57 */
	void ISceneViewDebugOverlays(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:64 */
	virtual bool IsEmpty(const ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:67 */
	virtual void Clear(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:70 */
	virtual void AddDebugOverlaysBegin(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:71 */
	virtual void AddDebugOverlaysEnd(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:75 */
	virtual void SetOverlayStartTime(ISceneViewDebugOverlays* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:76 */
	virtual float GetOverlayStartTime(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:82 */
	virtual void AddToViewAndAgeList(ISceneViewDebugOverlays* , ISceneView* , float, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:86 */
	virtual void SetMinimumOverlayLifetime(ISceneViewDebugOverlays* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:87 */
	virtual float GetMinimumOverlayLifetime(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:92 */
	virtual void SetDefaultColor(ISceneViewDebugOverlays* , const VertexColor_t& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:93 */
	virtual VertexColor_t GetDefaultColor(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:94 */
	virtual void SetDebugOverlayRenderType(ISceneViewDebugOverlays* , DebugRenderType_t);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:95 */
	virtual DebugRenderType_t GetDebugOverlayRenderType(const ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:98 */
	virtual void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:351 */
	void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:356 */
	void Line(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:103 */
	virtual void Line2D(ISceneViewDebugOverlays* , const Vector2D& , const Vector2D& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:361 */
	void Line2D(ISceneViewDebugOverlays* , const Vector2D& , const Vector2D& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:107 */
	virtual void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:366 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:371 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:376 */
	void Box(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:388 */
	void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:381 */
	void BoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:393 */
	void BoxAngles(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:118 */
	virtual void SolidBoxAngles(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:402 */
	void SolidBoxAngles(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:122 */
	virtual void Frustum(ISceneViewDebugOverlays* , const CFrustum& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:125 */
	virtual void Sphere(ISceneViewDebugOverlays* , const matrix3x4_t& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:420 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:428 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:433 */
	void Sphere(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:131 */
	virtual void Capsule(ISceneViewDebugOverlays* , const matrix3x4_t& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:134 */
	virtual void Capsule(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:438 */
	void Capsule(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:445 */
	void Capsule(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:140 */
	virtual void Texture(ISceneViewDebugOverlays* , HRenderTexture, const Rect_t& , const VertexColor_t& , const Vector2D& , const Vector2D& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:451 */
	void Texture(ISceneViewDebugOverlays* , HRenderTexture, const RenderViewport_t& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:143 */
	virtual void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const char* , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:461 */
	void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:492 */
	void VectorText3D(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , int, int, int, int, bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:475 */
	void VectorText3D(ISceneViewDebugOverlays* , const CFrustum& , const Vector& , float, const VertexColor_t& , bool, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:148 */
	virtual void Text(ISceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:510 */
	void Text(ISceneViewDebugOverlays* , const Vector2D& , float, const VertexColor_t& , const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:553 */
	void ScreenText(ISceneViewDebugOverlays* , float, float, const char* , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:558 */
	void ScreenTextOffset(ISceneViewDebugOverlays* , float, float, int, const char* , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:153 */
	virtual void TextWithFont(ISceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , bool, bool, FontHandle_t, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:158 */
	virtual void Text(ISceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:524 */
	void Text(ISceneViewDebugOverlays* , const Vector& , int, float, int, int, int, int, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:563 */
	void Text(ISceneViewDebugOverlays* , const Vector& , const char* , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:538 */
	void Text(ISceneViewDebugOverlays* , const Vector& , float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:163 */
	virtual void TextPretty(ISceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64, FontHandle_t, bool);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:568 */
	void EntityTextAtPosition(ISceneViewDebugOverlays* , const Vector& , int, const char* , float64, int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:167 */
	virtual void FilledRect2D(ISceneViewDebugOverlays* , const Rect_t& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:169 */
	virtual void Axis(ISceneViewDebugOverlays* , const matrix3x4_t& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:573 */
	void Axis(ISceneViewDebugOverlays* , const CTransform& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:578 */
	void Axis(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:585 */
	void Axis(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:174 */
	virtual void Cross(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:592 */
	void Cross(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:597 */
	void Cross(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:178 */
	virtual void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:605 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:610 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:615 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:620 */
	void Cross3D(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:184 */
	virtual void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , const VertexColor_t& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:628 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const matrix3x4_t& , float, const VertexColor_t& , const VertexColor_t& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:637 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const matrix3x4_t& , float, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:642 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:650 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:655 */
	void Cross3DOriented(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:191 */
	virtual void Triangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:663 */
	void Triangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:195 */
	virtual void Circle(ISceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:671 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:199 */
	virtual void Circle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:679 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:684 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const Quaternion& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:696 */
	void Circle(ISceneViewDebugOverlays* , const Vector& , const QAngle& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:204 */
	virtual void HorzArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:708 */
	void HorzArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:207 */
	virtual void YawArrow(ISceneViewDebugOverlays* , const Vector& , float, float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:713 */
	void YawArrow(ISceneViewDebugOverlays* , const Vector& , float, float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:210 */
	virtual void VertArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:718 */
	void VertArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:213 */
	virtual void TwistArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:723 */
	void TwistArrow(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:216 */
	virtual void Cone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:728 */
	void Cone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:219 */
	virtual void SolidCone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:733 */
	void SolidCone(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:222 */
	virtual void ScreenMessage(ISceneViewDebugOverlays* , const char* , float64, VertexColor_t);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:224 */
	virtual void Grid(ISceneViewDebugOverlays* , const Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:225 */
	virtual bool IsGridVisible(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:226 */
	virtual void HideGrid(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:228 */
	virtual void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, const VertexColor_t& , bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:738 */
	void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:743 */
	void DrawTickMarkedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , float, int, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:232 */
	virtual void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:748 */
	void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:755 */
	void SweptBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:762 */
	virtual void AddEntityTextOverlay(ISceneViewDebugOverlays* , int, int, float64, int, int, int, int, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:774 */
	virtual void AddBoxOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:411 */
	void AddBoxOverlay(ISceneViewDebugOverlays* , const matrix3x4_t& , const Vector& , const Vector& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:789 */
	virtual void AddBoxOverlay2(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const QAngle& , const Color& , const Color& , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:800 */
	virtual void AddSphereOverlay(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, int, int, float64, bool, bool);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:805 */
	virtual void AddTriangleOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:810 */
	virtual void AddLineOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:815 */
	virtual void AddLineOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:820 */
	virtual void AddLineOverlayAlpha(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:825 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:837 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:865 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , float64, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:849 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:855 */
	virtual void AddTextOverlay(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:871 */
	virtual void AddTextOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:907 */
	virtual void AddTextOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, int, int, int, int, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:888 */
	virtual void AddTextPrettyOverlayRGB(ISceneViewDebugOverlays* , const Vector& , int, float64, float, float, float, float, FontHandle_t, bool, const char* , ...);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:924 */
	virtual void AddScreenTextOverlay(ISceneViewDebugOverlays* , float, float, int, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:919 */
	virtual void AddScreenTextOverlay(ISceneViewDebugOverlays* , float, float, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:929 */
	virtual void AddScreenTextOverlayOffset(ISceneViewDebugOverlays* , float, float, int, float64, int, int, int, int, const char* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:935 */
	virtual void AddSweptBoxOverlay(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const QAngle& , int, int, int, int, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:941 */
	virtual void AddGridOverlay(ISceneViewDebugOverlays* , const Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:947 */
	virtual void AddCoordFrameOverlay(ISceneViewDebugOverlays* , const matrix3x4_t& , float, int* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:974 */
	virtual void AddCircleOverlay(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int, bool, float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:981 */
	virtual int ScreenPosition(ISceneViewDebugOverlays* , const Vector& , Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:989 */
	virtual int ScreenPosition(ISceneViewDebugOverlays* , float, float, Vector& );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:266 */
	virtual void AddDebugSceneObject(ISceneViewDebugOverlays* , CSceneObject* , float64);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:271 */
	virtual void PushDebugOverlayScope(ISceneViewDebugOverlays* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:272 */
	virtual void PopDebugOverlayScope(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:273 */
	virtual void RemoveAllInScope(ISceneViewDebugOverlays* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:276 */
	virtual ISceneWorld* GetDebugSceneWorld(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:280 */
	virtual void AddToView(ISceneViewDebugOverlays* , ISceneView* , float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:281 */
	virtual void AgeList(ISceneViewDebugOverlays* , float, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:284 */
	virtual void UnitTestCycleOverlayRenderType(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:287 */
	void BeginBatchedLines(ISceneViewDebugOverlays* , bool, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:288 */
	void AddBatchedLine(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:996 */
	void AddBatchedBox(ISceneViewDebugOverlays* , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:290 */
	void AddBatchedTriAxis(ISceneViewDebugOverlays* , const Vector& , float, int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:291 */
	void EndBatchedLines(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:293 */
	void BeginBatchedTriangles(ISceneViewDebugOverlays* , bool, float);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:294 */
	void AddBatchedTriangle(ISceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , int, int, int, int);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:295 */
	void EndBatchedTriangles(ISceneViewDebugOverlays* );
	/* ../public/scenesystem/isceneviewdebugoverlays.h:298 */
	virtual void RecordSnapshot(ISceneViewDebugOverlays* , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >* , CUtlStringToken);
	/* ../public/scenesystem/isceneviewdebugoverlays.h:299 */
	virtual void RestoreSnapshot(ISceneViewDebugOverlays* , const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& );
private:
	DebugRenderType_t m_nRenderType; /* 8 4 */
	struct {
		bool bNoDepthTest; /* 12 1 */
		float flDuration; /* 16 4 */
	} m_BatchedSettings; /* 12 8 */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlaysC4Ev */
	virtual bool IsEmpty(const class ISceneViewDebugOverlays  *); /* linkage=_ZNK23ISceneViewDebugOverlays7IsEmptyEv */
	virtual void Clear(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays5ClearEv */
	virtual void AddDebugOverlaysBegin(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays21AddDebugOverlaysBeginEv */
	virtual void AddDebugOverlaysEnd(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19AddDebugOverlaysEndEv */
	virtual void SetOverlayStartTime(class ISceneViewDebugOverlays *, float); /* linkage=_ZN23ISceneViewDebugOverlays19SetOverlayStartTimeEf */
	virtual float GetOverlayStartTime(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19GetOverlayStartTimeEv */
	virtual void AddToViewAndAgeList(class ISceneViewDebugOverlays *, class ISceneView *, float, float); /* linkage=_ZN23ISceneViewDebugOverlays19AddToViewAndAgeListEP10ISceneViewff */
	virtual void SetMinimumOverlayLifetime(class ISceneViewDebugOverlays *, float); /* linkage=_ZN23ISceneViewDebugOverlays25SetMinimumOverlayLifetimeEf */
	virtual float GetMinimumOverlayLifetime(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays25GetMinimumOverlayLifetimeEv */
	virtual void SetDefaultColor(class ISceneViewDebugOverlays *, const class VertexColor_t  &); /* linkage=_ZN23ISceneViewDebugOverlays15SetDefaultColorERK13VertexColor_t */
	virtual class VertexColor_t GetDefaultColor(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays15GetDefaultColorEv */
	virtual void SetDebugOverlayRenderType(class ISceneViewDebugOverlays *, enum DebugRenderType_t); /* linkage=_ZN23ISceneViewDebugOverlays25SetDebugOverlayRenderTypeE17DebugRenderType_t */
	virtual enum DebugRenderType_t GetDebugOverlayRenderType(const class ISceneViewDebugOverlays  *); /* linkage=_ZNK23ISceneViewDebugOverlays25GetDebugOverlayRenderTypeEv */
	virtual void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_RK13VertexColor_tbd */
	void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_iiibd */
	void Line(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4LineERK6VectorS2_iiiibd */
	virtual void Line2D(class ISceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays6Line2DERK8Vector2DS2_RK13VertexColor_td */
	void Line2D(class ISceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays6Line2DERK8Vector2DS2_iiiid */
	virtual void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_RK13VertexColor_tbd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_iiiibd */
	void Box(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays3BoxERK6VectorS2_S2_iiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK10Quaternioniiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK6QAngleiiiibd */
	void BoxAngles(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9BoxAnglesERK11matrix3x4_tRK6VectorS5_iiiibd */
	virtual void SolidBoxAngles(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14SolidBoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	void SolidBoxAngles(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14SolidBoxAnglesERK11matrix3x4_tRK6VectorS5_RK13VertexColor_tbd */
	virtual void Frustum(class ISceneViewDebugOverlays *, const class CFrustum  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays7FrustumERK8CFrustumRK13VertexColor_td */
	virtual void Sphere(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK11matrix3x4_tfRK13VertexColor_tbd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6VectorfRK13VertexColor_tbd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6Vectorfiiibd */
	void Sphere(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6SphereERK6Vectorfiiiibd */
	virtual void Capsule(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK11matrix3x4_tffRK13VertexColor_tbd */
	virtual void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorS2_fRK13VertexColor_tbd */
	void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorRK6QAngleffiiiibd */
	void Capsule(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7CapsuleERK6VectorRK10Quaternionffiiiibd */
	virtual void Texture(class ISceneViewDebugOverlays *, HRenderTexture, const class Rect_t  &, const class VertexColor_t  &, const class Vector2D  &, const class Vector2D  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays7TextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseERK6Rect_tRK13VertexColor_tRK8Vector2DSB_d */
	void Texture(class ISceneViewDebugOverlays *, HRenderTexture, const class RenderViewport_t  &); /* linkage=_ZN23ISceneViewDebugOverlays7TextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseERK16RenderViewport_t */
	virtual void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const char  *, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorS2_S2_PKcRK13VertexColor_tbd */
	void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorS2_S2_RK13VertexColor_tbdPKcz */
	void VectorText3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, int, int, int, int, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK6VectorRK10QuaternioniiiibdPKcz */
	void VectorText3D(class ISceneViewDebugOverlays *, const class CFrustum  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays12VectorText3DERK8CFrustumRK6VectorfRK13VertexColor_tbdPKcz */
	virtual void Text(class ISceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK8Vector2DiPKcfRK13VertexColor_td */
	void Text(class ISceneViewDebugOverlays *, const class Vector2D  &, float, const class VertexColor_t  &, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK8Vector2DfRK13VertexColor_tPKcz */
	void ScreenText(class ISceneViewDebugOverlays *, float, float, const char  *, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays10ScreenTextEffPKciiiid */
	void ScreenTextOffset(class ISceneViewDebugOverlays *, float, float, int, const char  *, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays16ScreenTextOffsetEffiPKciiiid */
	virtual void TextWithFont(class ISceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, bool, bool, FontHandle_t, float64); /* linkage=_ZN23ISceneViewDebugOverlays12TextWithFontERK8Vector2DiPKcfRK13VertexColor_tbbjd */
	virtual void Text(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectoriPKcfRK13VertexColor_td */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, int, float, int, int, int, int, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectorifiiiidPKcz */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, const char  *, float64); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectorPKcd */
	void Text(class ISceneViewDebugOverlays *, const class Vector  &, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays4TextERK6VectordPKcz */
	virtual void TextPretty(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64, FontHandle_t, bool); /* linkage=_ZN23ISceneViewDebugOverlays10TextPrettyERK6VectoriPKcfRK13VertexColor_tdjb */
	void EntityTextAtPosition(class ISceneViewDebugOverlays *, const class Vector  &, int, const char  *, float64, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays20EntityTextAtPositionERK6VectoriPKcdiiii */
	virtual void FilledRect2D(class ISceneViewDebugOverlays *, const class Rect_t  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays12FilledRect2DERK6Rect_tRK13VertexColor_td */
	virtual void Axis(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK11matrix3x4_tfbd */
	void Axis(class ISceneViewDebugOverlays *, const class CTransform  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK10CTransformfbd */
	void Axis(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK6VectorRK6QAnglefbd */
	void Axis(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4AxisERK6VectorRK10Quaternionfbd */
	virtual void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6VectorfRK13VertexColor_tbd */
	void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6Vectorfiiibd */
	void Cross(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays5CrossERK6Vectorfiiiibd */
	virtual void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_RK13VertexColor_tbd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_iiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6VectorS2_S2_iiiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6Vectorfiiibd */
	void Cross3D(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays7Cross3DERK6Vectorfiiiibd */
	virtual void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, const class VertexColor_t  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorS2_S2_S2_fRK13VertexColor_tS5_S5_bd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, const class VertexColor_t  &, const class VertexColor_t  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK11matrix3x4_tfRK13VertexColor_tS5_S5_bd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK11matrix3x4_tfibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK6QAnglefiiiibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK6QAnglefiiibd */
	void Cross3DOriented(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays15Cross3DOrientedERK6VectorRK10Quaternionfiiiibd */
	virtual void Triangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8TriangleERK6VectorS2_S2_RK13VertexColor_tbd */
	void Triangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8TriangleERK6VectorS2_S2_iiiibd */
	virtual void Circle(class ISceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorfRK13VertexColor_tbd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6Vectorfiiiibd */
	virtual void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorS2_S2_fRK13VertexColor_tbd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorS2_S2_fiiiibd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class Quaternion  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorRK10Quaternionfiiiibd */
	void Circle(class ISceneViewDebugOverlays *, const class Vector  &, const class QAngle  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays6CircleERK6VectorRK6QAnglefiiiibd */
	virtual void HorzArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9HorzArrowERK6VectorS2_fRK13VertexColor_tbd */
	void HorzArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9HorzArrowERK6VectorS2_fiiiibd */
	virtual void YawArrow(class ISceneViewDebugOverlays *, const class Vector  &, float, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8YawArrowERK6VectorfffRK13VertexColor_tbd */
	void YawArrow(class ISceneViewDebugOverlays *, const class Vector  &, float, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays8YawArrowERK6Vectorfffiiiibd */
	virtual void VertArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9VertArrowERK6VectorS2_fRK13VertexColor_tbd */
	void VertArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9VertArrowERK6VectorS2_fiiiibd */
	virtual void TwistArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays10TwistArrowERK6VectorS2_S2_fRK13VertexColor_tbd */
	void TwistArrow(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays10TwistArrowERK6VectorS2_S2_fiiiibd */
	virtual void Cone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4ConeERK6VectorS2_ffRK13VertexColor_tbd */
	void Cone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays4ConeERK6VectorS2_ffiiiibd */
	virtual void SolidCone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9SolidConeERK6VectorS2_ffRK13VertexColor_tbd */
	void SolidCone(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays9SolidConeERK6VectorS2_ffiiiibd */
	virtual void ScreenMessage(class ISceneViewDebugOverlays *, const char  *, float64, class VertexColor_t); /* linkage=_ZN23ISceneViewDebugOverlays13ScreenMessageEPKcd13VertexColor_t */
	virtual void Grid(class ISceneViewDebugOverlays *, const class Vector  &); /* linkage=_ZN23ISceneViewDebugOverlays4GridERK6Vector */
	virtual bool IsGridVisible(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays13IsGridVisibleEv */
	virtual void HideGrid(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays8HideGridEv */
	virtual void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiRK13VertexColor_tbd */
	void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiiiibd */
	void DrawTickMarkedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiiiiibd */
	virtual void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK10QuaternionRK13VertexColor_td */
	void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK6QAngleiiiid */
	void SweptBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK10Quaternioniiiid */
	virtual void AddEntityTextOverlay(class ISceneViewDebugOverlays *, int, int, float64, int, int, int, int, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays20AddEntityTextOverlayEiidiiiiPKcz */
	virtual void AddBoxOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays13AddBoxOverlayERK6VectorS2_S2_RK6QAngleiiiid */
	void AddBoxOverlay(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, const class Vector  &, const class Vector  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays13AddBoxOverlayERK11matrix3x4_tRK6VectorS5_iiiid */
	virtual void AddBoxOverlay2(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, const class Color  &, const class Color  &, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddBoxOverlay2ERK6VectorS2_S2_RK6QAngleRK5ColorS8_d */
	virtual void AddSphereOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, int, int, float64, bool, bool); /* linkage=_ZN23ISceneViewDebugOverlays16AddSphereOverlayERK6Vectorfiiiiiidbb */
	virtual void AddTriangleOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays18AddTriangleOverlayERK6VectorS2_S2_iiiibd */
	virtual void AddLineOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddLineOverlayERK6VectorS2_iiibd */
	virtual void AddLineOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays14AddLineOverlayERK6VectorS2_iiiibd */
	virtual void AddLineOverlayAlpha(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays19AddLineOverlayAlphaERK6VectorS2_iiiibd */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectordPKcz */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridPKcz */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float64, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectordfPKc */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridfPKc */
	virtual void AddTextOverlay(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays14AddTextOverlayERK6VectoridffffPKc */
	virtual void AddTextOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays17AddTextOverlayRGBERK6VectoridffffPKcz */
	virtual void AddTextOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, int, int, int, int, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays17AddTextOverlayRGBERK6VectoridiiiiPKcz */
	virtual void AddTextPrettyOverlayRGB(class ISceneViewDebugOverlays *, const class Vector  &, int, float64, float, float, float, float, FontHandle_t, bool, const char  *, ...); /* linkage=_ZN23ISceneViewDebugOverlays23AddTextPrettyOverlayRGBERK6VectoridffffjbPKcz */
	virtual void AddScreenTextOverlay(class ISceneViewDebugOverlays *, float, float, int, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays20AddScreenTextOverlayEffidiiiiPKc */
	virtual void AddScreenTextOverlay(class ISceneViewDebugOverlays *, float, float, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays20AddScreenTextOverlayEffdiiiiPKc */
	virtual void AddScreenTextOverlayOffset(class ISceneViewDebugOverlays *, float, float, int, float64, int, int, int, int, const char  *); /* linkage=_ZN23ISceneViewDebugOverlays26AddScreenTextOverlayOffsetEffidiiiiPKc */
	virtual void AddSweptBoxOverlay(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class QAngle  &, int, int, int, int, float64); /* linkage=_ZN23ISceneViewDebugOverlays18AddSweptBoxOverlayERK6VectorS2_S2_S2_RK6QAngleiiiid */
	virtual void AddGridOverlay(class ISceneViewDebugOverlays *, const class Vector  &); /* linkage=_ZN23ISceneViewDebugOverlays14AddGridOverlayERK6Vector */
	virtual void AddCoordFrameOverlay(class ISceneViewDebugOverlays *, const class matrix3x4_t  &, float, int *); /* linkage=_ZN23ISceneViewDebugOverlays20AddCoordFrameOverlayERK11matrix3x4_tfPA3_i */
	virtual void AddCircleOverlay(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int, bool, float64); /* linkage=_ZN23ISceneViewDebugOverlays16AddCircleOverlayERK6Vectorfiiiibd */
	virtual int ScreenPosition(class ISceneViewDebugOverlays *, const class Vector  &, class Vector &); /* linkage=_ZN23ISceneViewDebugOverlays14ScreenPositionERK6VectorRS0_ */
	virtual int ScreenPosition(class ISceneViewDebugOverlays *, float, float, class Vector &); /* linkage=_ZN23ISceneViewDebugOverlays14ScreenPositionEffR6Vector */
	virtual void AddDebugSceneObject(class ISceneViewDebugOverlays *, class CSceneObject *, float64); /* linkage=_ZN23ISceneViewDebugOverlays19AddDebugSceneObjectEP12CSceneObjectd */
	virtual void PushDebugOverlayScope(class ISceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays21PushDebugOverlayScopeE15CUtlStringToken */
	virtual void PopDebugOverlayScope(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays20PopDebugOverlayScopeEv */
	virtual void RemoveAllInScope(class ISceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays16RemoveAllInScopeE15CUtlStringToken */
	virtual class ISceneWorld * GetDebugSceneWorld(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays18GetDebugSceneWorldEv */
	virtual void AddToView(class ISceneViewDebugOverlays *, class ISceneView *, float); /* linkage=_ZN23ISceneViewDebugOverlays9AddToViewEP10ISceneViewf */
	virtual void AgeList(class ISceneViewDebugOverlays *, float, float); /* linkage=_ZN23ISceneViewDebugOverlays7AgeListEff */
	virtual void UnitTestCycleOverlayRenderType(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays30UnitTestCycleOverlayRenderTypeEv */
	void BeginBatchedLines(class ISceneViewDebugOverlays *, bool, float); /* linkage=_ZN23ISceneViewDebugOverlays17BeginBatchedLinesEbf */
	void AddBatchedLine(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays14AddBatchedLineERK6VectorS2_iiii */
	void AddBatchedBox(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays13AddBatchedBoxERK6VectorS2_iiii */
	void AddBatchedTriAxis(class ISceneViewDebugOverlays *, const class Vector  &, float, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays17AddBatchedTriAxisERK6Vectorfiiii */
	void EndBatchedLines(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays15EndBatchedLinesEv */
	void BeginBatchedTriangles(class ISceneViewDebugOverlays *, bool, float); /* linkage=_ZN23ISceneViewDebugOverlays21BeginBatchedTrianglesEbf */
	void AddBatchedTriangle(class ISceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, int, int, int, int); /* linkage=_ZN23ISceneViewDebugOverlays18AddBatchedTriangleERK6VectorS2_S2_iiii */
	void EndBatchedTriangles(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlays19EndBatchedTrianglesEv */
	virtual void RecordSnapshot(class ISceneViewDebugOverlays *, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > *, class CUtlStringToken); /* linkage=_ZN23ISceneViewDebugOverlays14RecordSnapshotEP10CUtlVectorIh10CUtlMemoryIhiEE15CUtlStringToken */
	virtual void RestoreSnapshot(class ISceneViewDebugOverlays *, const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  &); /* linkage=_ZN23ISceneViewDebugOverlays15RestoreSnapshotERK10CUtlVectorIh10CUtlMemoryIhiEE */
	void ~ISceneViewDebugOverlays(class ISceneViewDebugOverlays *); /* linkage=_ZN23ISceneViewDebugOverlaysD4Ev */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *, class ISceneViewDebugOverlays &); /* linkage=_ZN23ISceneViewDebugOverlaysC4EOS_ */
	void ISceneViewDebugOverlays(class ISceneViewDebugOverlays *, const class ISceneViewDebugOverlays  &); /* linkage=_ZN23ISceneViewDebugOverlaysC4ERKS_ */
};

// <0317C5D1> ../public/scenesystem/isceneviewdebugoverlays.h:57
void ISceneViewDebugOverlays::ISceneViewDebugOverlays()
{
} /* size: 0 */

// <0317C5B8> ../public/scenesystem/isceneviewdebugoverlays.h:57
inline void ISceneViewDebugOverlays::ISceneViewDebugOverlays()
{
} /* size: 0 */

// <040B7C61> ../public/scenesystem/isceneviewdebugoverlays.h:356
inline void ISceneViewDebugOverlays::Line(const Vector& vEndPoint0, const Vector& vEndPoint1, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <0401BD26> ../public/scenesystem/isceneviewdebugoverlays.h:366
inline void ISceneViewDebugOverlays::Box(const Vector& vWorldMins, const Vector& vWorldMaxs, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <02B87C74> ../public/scenesystem/isceneviewdebugoverlays.h:371
inline void ISceneViewDebugOverlays::Box(const Vector& vWorldMins, const Vector& vWorldMaxs, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <03072A0E> ../public/scenesystem/isceneviewdebugoverlays.h:376
inline void ISceneViewDebugOverlays::Box(const Vector& vOrigin, const Vector& vLocalMins, const Vector& vLocalMaxs, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <040B7BC1> ../public/scenesystem/isceneviewdebugoverlays.h:381
// variable: 1
inline void ISceneViewDebugOverlays::BoxAngles(const Vector& vOrigin, const Vector& vLocalMins, const Vector& vLocalMaxs, const QAngle& angles, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
	Quaternion orientation; // 383
} /* size: 0, variables: 1 */

// <03939136> ../public/scenesystem/isceneviewdebugoverlays.h:393
// variables: 3
inline void ISceneViewDebugOverlays::BoxAngles(const matrix3x4_t& mBoxToWorld, const Vector& vLocalMins, const Vector& vLocalMaxs, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
	Vector vOrigin; // 395
	Quaternion orientation; // 396
	float flScale; // 397
} /* size: 0, variables: 3 */

// <040B7B5A> ../public/scenesystem/isceneviewdebugoverlays.h:420
// variable: 1
inline void ISceneViewDebugOverlays::Sphere(const Vector& vCenter, float flRadius, const VertexColor_t& vecColor, bool bNoDepthTest, float64 flTimeToLive)
{
	matrix3x4_t transform; // 422
} /* size: 0, variables: 1 */

// <028657AA> ../public/scenesystem/isceneviewdebugoverlays.h:428
inline void ISceneViewDebugOverlays::Sphere(const Vector& vCenter, float flRadius, int r, int g, int b, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <040B7AE1> ../public/scenesystem/isceneviewdebugoverlays.h:433
inline void ISceneViewDebugOverlays::Sphere(const Vector& vCenter, float flRadius, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <039F5ECA> ../public/scenesystem/isceneviewdebugoverlays.h:475
// variables: 4
// function calls: 8
void ISceneViewDebugOverlays::VectorText3D(const CFrustum& frustum, const Vector& vPos, float flSize, const VertexColor_t& vecColor, bool bCenter, float64 flTimeToLive, const char* pStr, ...)
{
	Vector vUp; // 477
	Vector vLeft; // 478
	char buf; // 480
	va_list args; // 481
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 477
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 478
} /* size: 350, variables: 4, inline expansions: 8 (162 bytes) */

// <040B7904> ../public/scenesystem/isceneviewdebugoverlays.h:524
// variables: 2
// function call: 1
void ISceneViewDebugOverlays::Text(const Vector& vPos, int nTextLineOffsetY, float flMaxDistToDisplay, int r, int g, int b, int a, float64 flTimeToLive, const char* pStr, ...)
{
	char buf; // 526
	va_list args; // 527
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 534
} /* size: 334, variables: 2, inline expansions: 1 (40 bytes) */

// <0317C0F5> ../public/scenesystem/isceneviewdebugoverlays.h:524
// variables: 2
// function calls: 3
void ISceneViewDebugOverlays::Text(const Vector& vPos, int nTextLineOffsetY, float flMaxDistToDisplay, int r, int g, int b, int a, float64 flTimeToLive, const char* pStr, ...)
{
	char buf; // 526
	va_list args; // 527
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 534
	ConVar::GetInt(); // 698
	CSceneViewDebugOverlays::Text(
		const Vector& vOrigin,
		int nTextLineOffsetY,
		const char* pText,
		float flMaxDistToDisplay,
		const VertexColor_t& color,
		float64 flTimeToLive);  // 534
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <040B788B> ../public/scenesystem/isceneviewdebugoverlays.h:553
inline void ISceneViewDebugOverlays::ScreenText(float fXpos, float fYpos, const char* pText, int r, int g, int b, int a, float64 flTimeToLive)
{
} /* size: 0 */

// <040B7805> ../public/scenesystem/isceneviewdebugoverlays.h:558
inline void ISceneViewDebugOverlays::ScreenTextOffset(float fXpos, float fYpos, int nTextLineOffsetY, const char* pText, int r, int g, int b, int a, float64 flTimeToLive)
{
} /* size: 0 */

// <0286540B> ../public/scenesystem/isceneviewdebugoverlays.h:573
inline void ISceneViewDebugOverlays::Axis(const CTransform& t, float flAxisLen, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <028653A7> ../public/scenesystem/isceneviewdebugoverlays.h:585
// variable: 1
inline void ISceneViewDebugOverlays::Axis(const Vector& vPosition, const Quaternion& q, float flAxisLen, bool bNoDepthTest, float64 flTimeToLive)
{
	matrix3x4_t mt; // 587
} /* size: 0, variables: 1 */

// <040B7782> ../public/scenesystem/isceneviewdebugoverlays.h:663
inline void ISceneViewDebugOverlays::Triangle(const Vector& p1, const Vector& p2, const Vector& p3, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <02B87320> ../public/scenesystem/isceneviewdebugoverlays.h:723
inline void ISceneViewDebugOverlays::TwistArrow(const Vector& vStartPos, const Vector& vEndPos, const Vector& vUpVector, float width, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <040B76E4> ../public/scenesystem/isceneviewdebugoverlays.h:748
// variable: 1
inline void ISceneViewDebugOverlays::SweptBox(const Vector& startPos, const Vector& endPos, const Vector& mins, const Vector& maxs, const QAngle& angles, int r, int g, int b, int a, float64 flTimeToLive)
{
	Quaternion q; // 750
} /* size: 0, variables: 1 */

// <040B75BC> ../public/scenesystem/isceneviewdebugoverlays.h:762
// variables: 2
void ISceneViewDebugOverlays::AddEntityTextOverlay(int entityIndex, int nTextOffset, float64 flDuration, int r, int g, int b, int a, const char* format, ...)
{
	char text; // 764
	va_list argptr; // 765
} /* size: 163, variables: 2 */

// <040B720E> ../public/scenesystem/isceneviewdebugoverlays.h:774
// variables: 2
// function calls: 5
void ISceneViewDebugOverlays::AddBoxOverlay(const Vector& vOrigin, const Vector& mins, const Vector& maxs, const QAngle& angles, int r, int g, int b, int a, float64 flDuration)
{
	const int  alpha; // 784
	{
		Quaternion q; // 778
		Quaternion::Quaternion(); // 778
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 780
	}
	Quaternion::Quaternion(); // 383
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 385
	ISceneViewDebugOverlays::BoxAngles(
			const Vector& vOrigin,
			const Vector& vLocalMins,
			const Vector& vLocalMaxs,
			const QAngle& angles,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 785
} /* size: 299, variables: 1, inline expansions: 3 (96 bytes) */

// <040B6FD2> ../public/scenesystem/isceneviewdebugoverlays.h:789
// variable: 1
// function calls: 2
void ISceneViewDebugOverlays::AddBoxOverlay2(const Vector& vOrigin, const Vector& mins, const Vector& maxs, const QAngle& orientation, const Color& faceColor, const Color& edgeColor, float64 flTimeToLive)
{
	Quaternion q; // 791
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 795
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 797
} /* size: 216, variables: 1, inline expansions: 2 (6 bytes) */

// <040B6CA7> ../public/scenesystem/isceneviewdebugoverlays.h:800
// function calls: 6
void ISceneViewDebugOverlays::AddSphereOverlay(const Vector& vOrigin, float flRadius, int nTheta, int nPhi, int r, int g, int b, int a, float64 flDuration, bool bWireframe, bool bNoDepthTest)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 435
	matrix3x4_t::SetToIdentity(); // 423
	matrix3x4_t::matrix3x4_t(); // 422
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 424
	ISceneViewDebugOverlays::Sphere(
		const Vector& vCenter,
		float flRadius,
		const VertexColor_t& vecColor,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 435
	ISceneViewDebugOverlays::Sphere(
		const Vector& vCenter,
		float flRadius,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 802
} /* size: 199, inline expansions: 6 (272 bytes) */

// <040B6AD6> ../public/scenesystem/isceneviewdebugoverlays.h:805
// function calls: 2
void ISceneViewDebugOverlays::AddTriangleOverlay(const Vector& p1, const Vector& p2, const Vector& p3, int r, int g, int b, int a, bool noDepthTest, float64 flDuration)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 665
	ISceneViewDebugOverlays::Triangle(
		const Vector& p1,
		const Vector& p2,
		const Vector& p3,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 807
} /* size: 104, inline expansions: 2 (108 bytes) */

// <0317AE07> ../public/scenesystem/isceneviewdebugoverlays.h:805
// function calls: 13
void ISceneViewDebugOverlays::AddTriangleOverlay(const Vector& p1, const Vector& p2, const Vector& p3, int r, int g, int b, int a, bool noDepthTest, float64 flDuration)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 665
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2140
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2142
	CSceneViewDebugOverlays::Triangle(
		const Vector& p1,
		const Vector& p2,
		const Vector& p3,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 665
	ISceneViewDebugOverlays::Triangle(
		const Vector& p1,
		const Vector& p2,
		const Vector& p3,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 807
} /* size: 0, inline expansions: 13 (0 bytes) */

// <040B6937> ../public/scenesystem/isceneviewdebugoverlays.h:810
// function calls: 2
void ISceneViewDebugOverlays::AddLineOverlay(const Vector& vOrigin, const Vector& dest, int r, int g, int b, bool bNoDepthTest, float64 flDuration)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 358
	ISceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 812
} /* size: 83, inline expansions: 2 (65 bytes) */

// <0317A8CA> ../public/scenesystem/isceneviewdebugoverlays.h:810
// function calls: 13
void ISceneViewDebugOverlays::AddLineOverlay(const Vector& vOrigin, const Vector& dest, int r, int g, int b, bool bNoDepthTest, float64 flDuration)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 358
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 563
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 565
	CSceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 358
	ISceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 812
} /* size: 0, inline expansions: 13 (0 bytes) */

// <040B6784> ../public/scenesystem/isceneviewdebugoverlays.h:815
// function calls: 2
void ISceneViewDebugOverlays::AddLineOverlay(const Vector& vOrigin, const Vector& dest, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 358
	ISceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 817
} /* size: 83, inline expansions: 2 (65 bytes) */

// <0317A37E> ../public/scenesystem/isceneviewdebugoverlays.h:815
// function calls: 13
void ISceneViewDebugOverlays::AddLineOverlay(const Vector& vOrigin, const Vector& dest, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 358
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 563
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 565
	CSceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 358
	ISceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 817
} /* size: 0, inline expansions: 13 (0 bytes) */

// <040B65D1> ../public/scenesystem/isceneviewdebugoverlays.h:820
// function calls: 2
void ISceneViewDebugOverlays::AddLineOverlayAlpha(const Vector& vOrigin, const Vector& dest, int r, int g, int b, int a, bool noDepthTest, float64 flTimeToLive)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 358
	ISceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 822
} /* size: 98, inline expansions: 2 (99 bytes) */

// <03179E62> ../public/scenesystem/isceneviewdebugoverlays.h:820
// function calls: 13
void ISceneViewDebugOverlays::AddLineOverlayAlpha(const Vector& vOrigin, const Vector& dest, int r, int g, int b, int a, bool noDepthTest, float64 flTimeToLive)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 358
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 563
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 565
	CSceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 358
	ISceneViewDebugOverlays::Line(
		const Vector& vEndPoint0,
		const Vector& vEndPoint1,
		int r,
		int g,
		int b,
		int a,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 822
} /* size: 0, inline expansions: 13 (0 bytes) */

// <040B64C0> ../public/scenesystem/isceneviewdebugoverlays.h:825
// variables: 2
void ISceneViewDebugOverlays::AddTextOverlay(const Vector& vOrigin, float64 flDuration, const char* format, ...)
{
	char text; // 827
	va_list argptr; // 828
} /* size: 267, variables: 2 */

// <040B6399> ../public/scenesystem/isceneviewdebugoverlays.h:837
// variables: 2
void ISceneViewDebugOverlays::AddTextOverlay(const Vector& vOrigin, int nTextOffset, float64 flDuration, const char* format, ...)
{
	char text; // 839
	va_list argptr; // 840
} /* size: 274, variables: 2 */

// <040B6227> ../public/scenesystem/isceneviewdebugoverlays.h:849
// variable: 1
// function calls: 2
void ISceneViewDebugOverlays::AddTextOverlay(const Vector& vOrigin, int nTextOffset, float64 flDuration, float alpha, const char* pText)
{
	int a1; // 851
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 851
} /* size: 84, variables: 1, inline expansions: 2 (38 bytes) */

// <040B5D94> ../public/scenesystem/isceneviewdebugoverlays.h:855
// variables: 4
// function calls: 8
void ISceneViewDebugOverlays::AddTextOverlay(const Vector& vOrigin, int nTextOffset, float64 flDuration, float r, float g, float b, float alpha, const char* pText)
{
	int r1; // 857
	int g1; // 858
	int b1; // 859
	int a1; // 860
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 857
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 858
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 859
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 860
} /* size: 152, variables: 4, inline expansions: 8 (114 bytes) */

// <040B5C39> ../public/scenesystem/isceneviewdebugoverlays.h:865
// variable: 1
// function calls: 2
void ISceneViewDebugOverlays::AddTextOverlay(const Vector& vOrigin, float64 flDuration, float alpha, const char* pText)
{
	int a1; // 867
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 867
} /* size: 78, variables: 1, inline expansions: 2 (38 bytes) */

// <040B5745> ../public/scenesystem/isceneviewdebugoverlays.h:871
// variables: 6
// function calls: 8
void ISceneViewDebugOverlays::AddTextOverlayRGB(const Vector& vOrigin, int nTextOffset, float64 flDuration, float r, float g, float b, float alpha, const char* format, ...)
{
	char text; // 873
	va_list argptr; // 874
	int r1; // 880
	int g1; // 881
	int b1; // 882
	int a1; // 883
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 880
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 881
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 882
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 883
} /* size: 398, variables: 6, inline expansions: 8 (104 bytes) */

// <040B5301> ../public/scenesystem/isceneviewdebugoverlays.h:888
// variables: 7
// function calls: 9
void ISceneViewDebugOverlays::AddTextPrettyOverlayRGB(const Vector& vOrigin, int nTextOffset, float64 flDuration, float r, float g, float b, float alpha, FontHandle_t fontHandle, bool bOutlineFont, const char* format, ...)
{
	char text; // 890
	va_list argptr; // 891
	uint8 r1; // 897
	uint8 g1; // 898
	uint8 b1; // 899
	uint8 a1; // 900
	VertexColor_t color; // 902
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 897
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 898
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 899
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 900
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 902
} /* size: 463, variables: 7, inline expansions: 9 (186 bytes) */

// <040B5177> ../public/scenesystem/isceneviewdebugoverlays.h:907
// variables: 2
void ISceneViewDebugOverlays::AddTextOverlayRGB(const Vector& vOrigin, int nTextOffset, float64 flDuration, int r, int g, int b, int a, const char* format, ...)
{
	char text; // 909
	va_list argptr; // 910
} /* size: 284, variables: 2 */

// <040B4F8A> ../public/scenesystem/isceneviewdebugoverlays.h:919
// function calls: 3
void ISceneViewDebugOverlays::AddScreenTextOverlay(float flXPos, float flYPos, float64 flDuration, int r, int g, int b, int a, const char* pText)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 555
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 555
	ISceneViewDebugOverlays::ScreenText(
			float fXpos,
			float fYpos,
			const char* pText,
			int r,
			int g,
			int b,
			int a,
			float64 flTimeToLive);  // 921
} /* size: 127, inline expansions: 3 (139 bytes) */

// <03178692> ../public/scenesystem/isceneviewdebugoverlays.h:919
// function calls: 5
void ISceneViewDebugOverlays::AddScreenTextOverlay(float flXPos, float flYPos, float64 flDuration, int r, int g, int b, int a, const char* pText)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 555
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 555
	ConVar::GetInt(); // 671
	CSceneViewDebugOverlays::Text(
		const Vector2D& vPos,
		int nTextLineOffsetY,
		const char* pStr,
		float flScale,
		const VertexColor_t& color,
		float64 flTimeToLive);  // 555
	ISceneViewDebugOverlays::ScreenText(
			float fXpos,
			float fYpos,
			const char* pText,
			int r,
			int g,
			int b,
			int a,
			float64 flTimeToLive);  // 921
} /* size: 0, inline expansions: 5 (0 bytes) */

// <040B4D86> ../public/scenesystem/isceneviewdebugoverlays.h:924
// function calls: 3
void ISceneViewDebugOverlays::AddScreenTextOverlay(float flXPos, float flYPos, int nTextOffset, float64 flDuration, int r, int g, int b, int a, const char* pText)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 560
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 560
	ISceneViewDebugOverlays::ScreenTextOffset(
			float fXpos,
			float fYpos,
			int nTextLineOffsetY,
			const char* pText,
			int r,
			int g,
			int b,
			int a,
			float64 flTimeToLive);  // 926
} /* size: 128, inline expansions: 3 (140 bytes) */

// <0317834C> ../public/scenesystem/isceneviewdebugoverlays.h:924
// function calls: 5
void ISceneViewDebugOverlays::AddScreenTextOverlay(float flXPos, float flYPos, int nTextOffset, float64 flDuration, int r, int g, int b, int a, const char* pText)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 560
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 560
	ConVar::GetInt(); // 671
	CSceneViewDebugOverlays::Text(
		const Vector2D& vPos,
		int nTextLineOffsetY,
		const char* pStr,
		float flScale,
		const VertexColor_t& color,
		float64 flTimeToLive);  // 560
	ISceneViewDebugOverlays::ScreenTextOffset(
			float fXpos,
			float fYpos,
			int nTextLineOffsetY,
			const char* pText,
			int r,
			int g,
			int b,
			int a,
			float64 flTimeToLive);  // 926
} /* size: 0, inline expansions: 5 (0 bytes) */

// <040B4B82> ../public/scenesystem/isceneviewdebugoverlays.h:929
// function calls: 3
void ISceneViewDebugOverlays::AddScreenTextOverlayOffset(float flXPos, float flYPos, int nTextOffset, float64 flDuration, int r, int g, int b, int a, const char* pText)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 560
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 560
	ISceneViewDebugOverlays::ScreenTextOffset(
			float fXpos,
			float fYpos,
			int nTextLineOffsetY,
			const char* pText,
			int r,
			int g,
			int b,
			int a,
			float64 flTimeToLive);  // 931
} /* size: 128, inline expansions: 3 (140 bytes) */

// <03178006> ../public/scenesystem/isceneviewdebugoverlays.h:929
// function calls: 5
void ISceneViewDebugOverlays::AddScreenTextOverlayOffset(float flXPos, float flYPos, int nTextOffset, float64 flDuration, int r, int g, int b, int a, const char* pText)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 560
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 560
	ConVar::GetInt(); // 671
	CSceneViewDebugOverlays::Text(
		const Vector2D& vPos,
		int nTextLineOffsetY,
		const char* pStr,
		float flScale,
		const VertexColor_t& color,
		float64 flTimeToLive);  // 560
	ISceneViewDebugOverlays::ScreenTextOffset(
			float fXpos,
			float fYpos,
			int nTextLineOffsetY,
			const char* pText,
			int r,
			int g,
			int b,
			int a,
			float64 flTimeToLive);  // 931
} /* size: 0, inline expansions: 5 (0 bytes) */

// <040B496B> ../public/scenesystem/isceneviewdebugoverlays.h:935
// function calls: 2
void ISceneViewDebugOverlays::AddSweptBoxOverlay(const Vector& startPos, const Vector& endPos, const Vector& mins, const Vector& maxs, const QAngle& angles, int r, int g, int b, int a, float64 flDuration)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 752
	ISceneViewDebugOverlays::SweptBox(
		const Vector& startPos,
		const Vector& endPos,
		const Vector& mins,
		const Vector& maxs,
		const QAngle& angles,
		int r,
		int g,
		int b,
		int a,
		float64 flTimeToLive);  // 937
} /* size: 182, inline expansions: 2 (143 bytes) */

// <040B4908> ../public/scenesystem/isceneviewdebugoverlays.h:941
void ISceneViewDebugOverlays::AddGridOverlay(const Vector& vPos)
{
} /* size: 13 */

// <031779B1> ../public/scenesystem/isceneviewdebugoverlays.h:941
// function calls: 14
void ISceneViewDebugOverlays::AddGridOverlay(const Vector& vPos)
{
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 553
	Vector::operator[](
			int i);  // 554
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 558
	Vector::operator[](
			int i);  // 555
	Vector::operator[](
			int i);  // 556
	CSceneViewDebugOverlays::Grid(
		const Vector& vPos);  // 943
} /* size: 0, inline expansions: 14 (0 bytes) */

// <040B45C9> ../public/scenesystem/isceneviewdebugoverlays.h:947
// variables: 4
// function calls: 7
void ISceneViewDebugOverlays::AddCoordFrameOverlay(const matrix3x4_t& frame, float flScale, int* vColorTable)
{
	int s_defaultColorTable; // 949
	Vector startPt; // 961
	Vector endPt; // 961
	{
		int k; // 964
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 970
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 962
	Vector::Vector(); // 961
	Vector::Vector(); // 961
	Vector::operator=(
			const Vector& vOther);  // 962
} /* size: 323, variables: 3, inline expansions: 5 (41 bytes) */

// <031772E3> ../public/scenesystem/isceneviewdebugoverlays.h:947
// variables: 4
// function calls: 18
void ISceneViewDebugOverlays::AddCoordFrameOverlay(const matrix3x4_t& frame, float flScale, int* vColorTable)
{
	int s_defaultColorTable; // 949
	Vector startPt; // 961
	Vector endPt; // 961
	{
		int k; // 964
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 563
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 565
		CSceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			const VertexColor_t& color,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 358
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 970
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 962
	Vector::Vector(); // 961
	Vector::Vector(); // 961
	Vector::operator=(
			const Vector& vOther);  // 962
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <040B4450> ../public/scenesystem/isceneviewdebugoverlays.h:974
// function call: 1
void ISceneViewDebugOverlays::AddCircleOverlay(const Vector& vPosition, float radius, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 977
} /* size: 103, inline expansions: 1 (39 bytes) */

// <0317710E> ../public/scenesystem/isceneviewdebugoverlays.h:974
// function calls: 2
void ISceneViewDebugOverlays::AddCircleOverlay(const Vector& vPosition, float radius, int r, int g, int b, int a, bool bNoDepthTest, float64 flTimeToLive)
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 977
	CSceneViewDebugOverlays::Circle(
		const Vector& position,
		float radius,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 977
} /* size: 0, inline expansions: 2 (0 bytes) */

// <040B43A6> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 49980
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <04018434> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 46696
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <03F3AA83> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 9830
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <03DA668A> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 24817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <03A539AB> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 12077
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <039358E4> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 62061
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <03884596> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 6416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <037E54CB> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 40372
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <0374F6C3> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 13971
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <0347772F> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 27500
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <033C7131> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 54171
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <0330B17F> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 64645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <03177067> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 38963
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <02CCB47A> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 46571
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <02C402E8> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 18613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <02B83F09> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 9122
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <027D305F> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 33993
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <0261A036> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 23305
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <01F53E6F> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 34562
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <01E8574A> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 58937
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <0171BC2C> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 8383
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <01657C01> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 9918
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <014D8012> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 9561
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <00A0A1A1> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 57662
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <00062723> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 4090
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 29, variables: 1 */

// <00094175> ../public/scenesystem/isceneviewdebugoverlays.h:981
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(const Vector& point, Vector& screen)
{
	const char   __FUNCTION__; // 48489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 984
	}
} /* size: 0, variables: 1 */

// <040B42E7> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 49980
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <04018375> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 46696
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <03F3A9C4> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 9830
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <03DA65CB> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 24817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <03A538EC> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 12077
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <03935825> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 62061
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <038844D7> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 6416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <037E540C> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 40372
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <0374F606> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 13971
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <03477670> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 27500
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <033C7074> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 54171
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <0330B0C0> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 64645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <03176FAB> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 38963
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <02CCB3BB> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 46571
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <02C40229> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 18613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <02B83E4A> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 9122
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <027D2FA0> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 33993
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <02619F77> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 23305
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <01F53DB0> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 34562
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <01E8568B> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 58937
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <0171BB6D> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 8383
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <01657B42> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 9918
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <014D7F53> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 9561
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <00A0A0E2> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 57662
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <00062664> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 4090
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 29, variables: 1 */

// <000940B7> ../public/scenesystem/isceneviewdebugoverlays.h:989
// variables: 2
void ISceneViewDebugOverlays::ScreenPosition(float flXPos, float flYPos, Vector& screen)
{
	const char   __FUNCTION__; // 48489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
} /* size: 0, variables: 1 */


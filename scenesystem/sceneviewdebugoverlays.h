
//
// scenesystem/sceneviewdebugoverlays.h
//
//	referenced by: libengine2.so
//
//	functions: 132
//	classes: 2
//	structs: 15
//

// <03175658> ../scenesystem/sceneviewdebugoverlays.h:32
inline void DebugBase_t::operator=(const DebugBase_t &)
{
} /* size: 0 */

// <031221C2> ../scenesystem/sceneviewdebugoverlays.h:32
void DebugBase_t::DebugBase_t(const DebugBase_t &)
{
} /* size: 0 */

// <031221A1> ../scenesystem/sceneviewdebugoverlays.h:32
inline void DebugBase_t::DebugBase_t(const DebugBase_t &)
{
} /* size: 0 */

// <030F0EB5> ../scenesystem/sceneviewdebugoverlays.h:32
// member functions: 12
// member variables: 6
// struct size: 24
struct DebugBase_t {
	/* ../scenesystem/sceneviewdebugoverlays.h:34 */
	void DebugBase_t(DebugBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:35 */
	void Init(DebugBase_t* , float, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:36 */
	void Age(DebugBase_t* , float);
	/* ../scenesystem/sceneviewdebugoverlays.h:38 */
	float GetStartTime(const DebugBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:39 */
	float GetEndTime(const DebugBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:40 */
	bool HasExpired(const DebugBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:41 */
	bool HasExpired(const DebugBase_t* , float);
	/* ../scenesystem/sceneviewdebugoverlays.h:43 */
	bool IsOneFrameNode(const DebugBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:44 */
	bool HasInfiniteLifetime(const DebugBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:45 */
	bool HasAgedOnce(const DebugBase_t* );
	VertexColor_t m_color; /* 0 4 */
	CUtlStringToken m_scopeId; /* 4 4 */
	DebugRenderType_t m_RenderType; /* 8 4 */
private:
	float m_flStartAbsTime; /* 12 4 */
	float m_flTimeToLive; /* 16 4 */
	bool m_bAgedOnce; /* 20 1 */
	void DebugBase_t(DebugBase_t* , const DebugBase_t& );
	DebugBase_t& operator=(DebugBase_t* , const DebugBase_t& );
};

// <030F10D4> ../scenesystem/sceneviewdebugoverlays.h:58
// member functions: 5
// member variables: 2
// struct size: 32
struct DebugTextBase_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	/* ../scenesystem/sceneviewdebugoverlays.h:60 */
	void DebugTextBase_t(DebugTextBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:65 */
	void ~DebugTextBase_t(DebugTextBase_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:71 */
	void DebugTextBase_t(DebugTextBase_t* , const DebugTextBase_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:73 */
	DebugTextBase_t& operator=(DebugTextBase_t* , const DebugTextBase_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:83 */
	void SetText(DebugTextBase_t* , const char* );
	char * m_pText; /* 24 8 */
};

// <031756C2> ../scenesystem/sceneviewdebugoverlays.h:60
void DebugTextBase_t::DebugTextBase_t()
{
} /* size: 0 */

// <031756A9> ../scenesystem/sceneviewdebugoverlays.h:60
inline void DebugTextBase_t::DebugTextBase_t()
{
} /* size: 0 */

// <03175692> ../scenesystem/sceneviewdebugoverlays.h:65
void DebugTextBase_t::~DebugTextBase_t()
{
} /* size: 0 */

// <03175679> ../scenesystem/sceneviewdebugoverlays.h:65
inline void DebugTextBase_t::~DebugTextBase_t()
{
} /* size: 0 */

// <03175635> ../scenesystem/sceneviewdebugoverlays.h:73
inline void DebugTextBase_t::operator=(const DebugTextBase_t& p)
{
} /* size: 0 */

// <03175604> ../scenesystem/sceneviewdebugoverlays.h:83
// variable: 1
inline void DebugTextBase_t::SetText(const char* pText)
{
	size_t len; // 90
} /* size: 0, variables: 1 */

// <03139880> ../scenesystem/sceneviewdebugoverlays.h:98
void DebugSphere_t::DebugSphere_t()
{
} /* size: 0 */

// <03139864> ../scenesystem/sceneviewdebugoverlays.h:98
inline void DebugSphere_t::DebugSphere_t()
{
} /* size: 0 */

// <0311E4D2> ../scenesystem/sceneviewdebugoverlays.h:98
void DebugSphere_t::DebugSphere_t(const DebugSphere_t &)
{
} /* size: 0 */

// <0311E4B1> ../scenesystem/sceneviewdebugoverlays.h:98
inline void DebugSphere_t::DebugSphere_t(const DebugSphere_t &)
{
} /* size: 0 */

// <030F11BA> ../scenesystem/sceneviewdebugoverlays.h:98
// member functions: 2
// member variables: 3
// struct size: 40
struct DebugSphere_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector m_vPos; /* 24 12 */
	float m_flRadius; /* 36 4 */
	void DebugSphere_t(DebugSphere_t* , const DebugSphere_t& );
	void DebugSphere_t(DebugSphere_t* );
};

// <031591B3> ../scenesystem/sceneviewdebugoverlays.h:106
void DebugLineSegment3D_t::DebugLineSegment3D_t()
{
} /* size: 0 */

// <03126AAE> ../scenesystem/sceneviewdebugoverlays.h:106
inline void DebugLineSegment3D_t::operator=(const DebugLineSegment3D_t &)
{
} /* size: 0 */

// <0312217F> ../scenesystem/sceneviewdebugoverlays.h:106
void DebugLineSegment3D_t::DebugLineSegment3D_t(const DebugLineSegment3D_t &)
{
} /* size: 0 */

// <0312215E> ../scenesystem/sceneviewdebugoverlays.h:106
inline void DebugLineSegment3D_t::DebugLineSegment3D_t(const DebugLineSegment3D_t &)
{
} /* size: 0 */

// <030F122C> ../scenesystem/sceneviewdebugoverlays.h:106
// member functions: 3
// member variables: 3
// struct size: 48
struct DebugLineSegment3D_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector m_vecP0; /* 24 12 */
	Vector m_vecP1; /* 36 12 */
	void DebugLineSegment3D_t(DebugLineSegment3D_t* , const DebugLineSegment3D_t& );
	DebugLineSegment3D_t& operator=(DebugLineSegment3D_t* , const DebugLineSegment3D_t& );
	void DebugLineSegment3D_t(DebugLineSegment3D_t* );
};

// <03157D0A> ../scenesystem/sceneviewdebugoverlays.h:112
void DebugLineSegment2D_t::DebugLineSegment2D_t()
{
} /* size: 0 */

// <03157CEE> ../scenesystem/sceneviewdebugoverlays.h:112
inline void DebugLineSegment2D_t::DebugLineSegment2D_t()
{
} /* size: 0 */

// <03126979> ../scenesystem/sceneviewdebugoverlays.h:112
inline void DebugLineSegment2D_t::operator=(const DebugLineSegment2D_t &)
{
} /* size: 0 */

// <03121F4F> ../scenesystem/sceneviewdebugoverlays.h:112
void DebugLineSegment2D_t::DebugLineSegment2D_t(const DebugLineSegment2D_t &)
{
} /* size: 0 */

// <03121F2E> ../scenesystem/sceneviewdebugoverlays.h:112
inline void DebugLineSegment2D_t::DebugLineSegment2D_t(const DebugLineSegment2D_t &)
{
} /* size: 0 */

// <030F12C3> ../scenesystem/sceneviewdebugoverlays.h:112
// member functions: 3
// member variables: 3
// struct size: 40
struct DebugLineSegment2D_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector2D m_vecP0; /* 24 8 */
	Vector2D m_vecP1; /* 32 8 */
	void DebugLineSegment2D_t(DebugLineSegment2D_t* , const DebugLineSegment2D_t& );
	DebugLineSegment2D_t& operator=(DebugLineSegment2D_t* , const DebugLineSegment2D_t& );
	void DebugLineSegment2D_t(DebugLineSegment2D_t* );
};

// <03121E3C> ../scenesystem/sceneviewdebugoverlays.h:118
void DebugTextureDisplay_t::DebugTextureDisplay_t()
{
} /* size: 0 */

// <03121E20> ../scenesystem/sceneviewdebugoverlays.h:118
inline void DebugTextureDisplay_t::DebugTextureDisplay_t()
{
} /* size: 0 */

// <0311EB6A> ../scenesystem/sceneviewdebugoverlays.h:118
void DebugTextureDisplay_t::~DebugTextureDisplay_t()
{
} /* size: 0 */

// <0311EB4E> ../scenesystem/sceneviewdebugoverlays.h:118
inline void DebugTextureDisplay_t::~DebugTextureDisplay_t()
{
} /* size: 0 */

// <0311E887> ../scenesystem/sceneviewdebugoverlays.h:118
void DebugTextureDisplay_t::DebugTextureDisplay_t(const DebugTextureDisplay_t &)
{
} /* size: 0 */

// <0311E866> ../scenesystem/sceneviewdebugoverlays.h:118
inline void DebugTextureDisplay_t::DebugTextureDisplay_t(const DebugTextureDisplay_t &)
{
} /* size: 0 */

// <030F135A> ../scenesystem/sceneviewdebugoverlays.h:118
// member functions: 3
// member variables: 5
// struct size: 64
struct DebugTextureDisplay_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	HRenderTextureStrongCopyable m_hTexture; /* 24 8 */
	Rect_t m_destRect; /* 32 16 */
	Vector2D m_vTopLeftUV; /* 48 8 */
	Vector2D m_vBottomRightUV; /* 56 8 */
	void DebugTextureDisplay_t(DebugTextureDisplay_t* , const DebugTextureDisplay_t& );
	void ~DebugTextureDisplay_t(DebugTextureDisplay_t* );
	void DebugTextureDisplay_t(DebugTextureDisplay_t* );
};

// <0311EB0F> ../scenesystem/sceneviewdebugoverlays.h:126
void Debug3DVectorText_t::~Debug3DVectorText_t()
{
} /* size: 0 */

// <0311EAF3> ../scenesystem/sceneviewdebugoverlays.h:126
inline void Debug3DVectorText_t::~Debug3DVectorText_t()
{
} /* size: 0 */

// <030F1405> ../scenesystem/sceneviewdebugoverlays.h:126
// member functions: 4
// member variables: 5
// struct size: 72
struct Debug3DVectorText_t : public DebugTextBase_t {
public:
	/* struct DebugTextBase_t <ancestor>; */ /* 0 32 */
	/* ../scenesystem/sceneviewdebugoverlays.h:128 */
	void Debug3DVectorText_t(Debug3DVectorText_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:129 */
	void Debug3DVectorText_t(Debug3DVectorText_t* , const Debug3DVectorText_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:131 */
	Debug3DVectorText_t& operator=(Debug3DVectorText_t* , const Debug3DVectorText_t& );
	Vector m_vPos; /* 32 12 */
	Vector m_vUp; /* 44 12 */
	Vector m_vLeft; /* 56 12 */
	bool m_bCenter; /* 68 1 */
	void ~Debug3DVectorText_t(Debug3DVectorText_t* );
};

// <031755ED> ../scenesystem/sceneviewdebugoverlays.h:128
void Debug3DVectorText_t::Debug3DVectorText_t()
{
} /* size: 0 */

// <031755D4> ../scenesystem/sceneviewdebugoverlays.h:128
inline void Debug3DVectorText_t::Debug3DVectorText_t()
{
} /* size: 0 */

// <031755B8> ../scenesystem/sceneviewdebugoverlays.h:129
void Debug3DVectorText_t::Debug3DVectorText_t(const Debug3DVectorText_t& p)
{
} /* size: 0 */

// <03175595> ../scenesystem/sceneviewdebugoverlays.h:129
inline void Debug3DVectorText_t::Debug3DVectorText_t(const Debug3DVectorText_t& p)
{
} /* size: 0 */

// <03175572> ../scenesystem/sceneviewdebugoverlays.h:131
inline void Debug3DVectorText_t::operator=(const Debug3DVectorText_t& p)
{
} /* size: 0 */

// <03141F40> ../scenesystem/sceneviewdebugoverlays.h:150
void Debug2DText_t::~Debug2DText_t()
{
} /* size: 0 */

// <03141F24> ../scenesystem/sceneviewdebugoverlays.h:150
inline void Debug2DText_t::~Debug2DText_t()
{
} /* size: 0 */

// <030F14F1> ../scenesystem/sceneviewdebugoverlays.h:150
// member functions: 4
// member variables: 7
// struct size: 56
struct Debug2DText_t : public DebugTextBase_t {
public:
	/* struct DebugTextBase_t <ancestor>; */ /* 0 32 */
	/* ../scenesystem/sceneviewdebugoverlays.h:152 */
	void Debug2DText_t(Debug2DText_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:153 */
	void Debug2DText_t(Debug2DText_t* , const Debug2DText_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:155 */
	Debug2DText_t& operator=(Debug2DText_t* , const Debug2DText_t& );
	Vector2D m_vPos; /* 32 8 */
	float m_flScale; /* 40 4 */
	int m_nTextLineOffsetY; /* 44 4 */
	bool m_bOutline; /* 48 1 */
	bool m_bFractional; /* 49 1 */
	FontHandle_t m_Font; /* 52 4 */
	void ~Debug2DText_t(Debug2DText_t* );
};

// <0317555B> ../scenesystem/sceneviewdebugoverlays.h:152
void Debug2DText_t::Debug2DText_t()
{
} /* size: 0 */

// <03175542> ../scenesystem/sceneviewdebugoverlays.h:152
inline void Debug2DText_t::Debug2DText_t()
{
} /* size: 0 */

// <03175526> ../scenesystem/sceneviewdebugoverlays.h:153
void Debug2DText_t::Debug2DText_t(const Debug2DText_t& p)
{
} /* size: 0 */

// <03175503> ../scenesystem/sceneviewdebugoverlays.h:153
inline void Debug2DText_t::Debug2DText_t(const Debug2DText_t& p)
{
} /* size: 0 */

// <031754E0> ../scenesystem/sceneviewdebugoverlays.h:155
inline void Debug2DText_t::operator=(const Debug2DText_t& p)
{
} /* size: 0 */

// <0311EA8C> ../scenesystem/sceneviewdebugoverlays.h:178
void Debug3DText_t::~Debug3DText_t()
{
} /* size: 0 */

// <0311EA70> ../scenesystem/sceneviewdebugoverlays.h:178
inline void Debug3DText_t::~Debug3DText_t()
{
} /* size: 0 */

// <030F15FB> ../scenesystem/sceneviewdebugoverlays.h:178
// member functions: 4
// member variables: 7
// struct size: 64
struct Debug3DText_t : public DebugTextBase_t {
public:
	/* struct DebugTextBase_t <ancestor>; */ /* 0 32 */
	/* ../scenesystem/sceneviewdebugoverlays.h:180 */
	void Debug3DText_t(Debug3DText_t* );
	/* ../scenesystem/sceneviewdebugoverlays.h:181 */
	void Debug3DText_t(Debug3DText_t* , const Debug3DText_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:183 */
	Debug3DText_t& operator=(Debug3DText_t* , const Debug3DText_t& );
	Vector m_vPos; /* 32 12 */
	float m_flScale; /* 44 4 */
	float m_flMaxDistToDisplaySqr; /* 48 4 */
	int m_nTextLineOffsetY; /* 52 4 */
	bool m_bOutline; /* 56 1 */
	FontHandle_t m_Font; /* 60 4 */
	void ~Debug3DText_t(Debug3DText_t* );
};

// <031754C9> ../scenesystem/sceneviewdebugoverlays.h:180
void Debug3DText_t::Debug3DText_t()
{
} /* size: 0 */

// <031754B0> ../scenesystem/sceneviewdebugoverlays.h:180
inline void Debug3DText_t::Debug3DText_t()
{
} /* size: 0 */

// <03175494> ../scenesystem/sceneviewdebugoverlays.h:181
void Debug3DText_t::Debug3DText_t(const Debug3DText_t& p)
{
} /* size: 0 */

// <03175471> ../scenesystem/sceneviewdebugoverlays.h:181
inline void Debug3DText_t::Debug3DText_t(const Debug3DText_t& p)
{
} /* size: 0 */

// <0317544E> ../scenesystem/sceneviewdebugoverlays.h:183
inline void Debug3DText_t::operator=(const Debug3DText_t& p)
{
} /* size: 0 */

// <03121D3B> ../scenesystem/sceneviewdebugoverlays.h:206
void DebugSceneObject_t::DebugSceneObject_t()
{
} /* size: 0 */

// <03121D1F> ../scenesystem/sceneviewdebugoverlays.h:206
inline void DebugSceneObject_t::DebugSceneObject_t()
{
} /* size: 0 */

// <030F1705> ../scenesystem/sceneviewdebugoverlays.h:206
// member function: 1
// member variables: 3
// struct size: 40
struct DebugSceneObject_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	CSceneObject * m_pSceneObject; /* 24 8 */
	bool m_bHasBeenAdded; /* 32 1 */
	void DebugSceneObject_t(DebugSceneObject_t* );
};

// <031588D1> ../scenesystem/sceneviewdebugoverlays.h:212
void DebugTriangle3D_t::DebugTriangle3D_t()
{
} /* size: 0 */

// <031588B5> ../scenesystem/sceneviewdebugoverlays.h:212
inline void DebugTriangle3D_t::DebugTriangle3D_t()
{
} /* size: 0 */

// <03122067> ../scenesystem/sceneviewdebugoverlays.h:212
void DebugTriangle3D_t::DebugTriangle3D_t(const DebugTriangle3D_t &)
{
} /* size: 0 */

// <03122046> ../scenesystem/sceneviewdebugoverlays.h:212
inline void DebugTriangle3D_t::DebugTriangle3D_t(const DebugTriangle3D_t &)
{
} /* size: 0 */

// <030F1757> ../scenesystem/sceneviewdebugoverlays.h:212
// member functions: 2
// member variables: 4
// struct size: 60
struct DebugTriangle3D_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector m_vPos1; /* 24 12 */
	Vector m_vPos2; /* 36 12 */
	Vector m_vPos3; /* 48 12 */
	void DebugTriangle3D_t(DebugTriangle3D_t* , const DebugTriangle3D_t& );
	void DebugTriangle3D_t(DebugTriangle3D_t* );
};

// <030F17D8> ../scenesystem/sceneviewdebugoverlays.h:219
// member variables: 4
// struct size: 48
struct DebugTriangle2D_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector2D m_vPos1; /* 24 8 */
	Vector2D m_vPos2; /* 32 8 */
	Vector2D m_vPos3; /* 40 8 */
};

// <0313AFCC> ../scenesystem/sceneviewdebugoverlays.h:227
void DebugCircle3D_t::DebugCircle3D_t()
{
} /* size: 0 */

// <0313AFB0> ../scenesystem/sceneviewdebugoverlays.h:227
inline void DebugCircle3D_t::DebugCircle3D_t()
{
} /* size: 0 */

// <03121099> ../scenesystem/sceneviewdebugoverlays.h:227
void DebugCircle3D_t::DebugCircle3D_t(const DebugCircle3D_t &)
{
} /* size: 0 */

// <03121078> ../scenesystem/sceneviewdebugoverlays.h:227
inline void DebugCircle3D_t::DebugCircle3D_t(const DebugCircle3D_t &)
{
} /* size: 0 */

// <030F1821> ../scenesystem/sceneviewdebugoverlays.h:227
// member functions: 2
// member variables: 5
// struct size: 48
struct DebugCircle3D_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector m_vPos; /* 24 12 */
	float m_flRadius; /* 36 4 */
	int m_nSegments; /* 40 4 */
	bool m_bNoDepthTest; /* 44 1 */
	void DebugCircle3D_t(DebugCircle3D_t* , const DebugCircle3D_t& );
	void DebugCircle3D_t(DebugCircle3D_t* );
};

// <0313CC91> ../scenesystem/sceneviewdebugoverlays.h:236
void DebugCross3D_t::DebugCross3D_t()
{
} /* size: 0 */

// <0313CC75> ../scenesystem/sceneviewdebugoverlays.h:236
inline void DebugCross3D_t::DebugCross3D_t()
{
} /* size: 0 */

// <031211B1> ../scenesystem/sceneviewdebugoverlays.h:236
void DebugCross3D_t::DebugCross3D_t(const DebugCross3D_t &)
{
} /* size: 0 */

// <03121190> ../scenesystem/sceneviewdebugoverlays.h:236
inline void DebugCross3D_t::DebugCross3D_t(const DebugCross3D_t &)
{
} /* size: 0 */

// <030F18B1> ../scenesystem/sceneviewdebugoverlays.h:236
// member functions: 2
// member variables: 4
// struct size: 44
struct DebugCross3D_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector m_vPos; /* 24 12 */
	float m_flRadius; /* 36 4 */
	bool m_bNoDepthTest; /* 40 1 */
	void DebugCross3D_t(DebugCross3D_t* , const DebugCross3D_t& );
	void DebugCross3D_t(DebugCross3D_t* );
};

// <0312D5B9> ../scenesystem/sceneviewdebugoverlays.h:244
void DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t()
{
} /* size: 0 */

// <0312D59D> ../scenesystem/sceneviewdebugoverlays.h:244
inline void DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t()
{
} /* size: 0 */

// <03120D4C> ../scenesystem/sceneviewdebugoverlays.h:244
void DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t(const DebugTickMarkedLine3D_t &)
{
} /* size: 0 */

// <03120D2B> ../scenesystem/sceneviewdebugoverlays.h:244
inline void DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t(const DebugTickMarkedLine3D_t &)
{
} /* size: 0 */

// <030F1932> ../scenesystem/sceneviewdebugoverlays.h:244
// member functions: 2
// member variables: 6
// struct size: 60
struct DebugTickMarkedLine3D_t : public DebugBase_t {
public:
	/* struct DebugBase_t <ancestor>; */ /* 0 24 */
	Vector m_vStartPos; /* 24 12 */
	Vector m_vEndPos; /* 36 12 */
	int m_TickDist; /* 48 4 */
	int m_TickTextDist; /* 52 4 */
	bool m_bNoDepthTest; /* 56 1 */
	void DebugTickMarkedLine3D_t(DebugTickMarkedLine3D_t* , const DebugTickMarkedLine3D_t& );
	void DebugTickMarkedLine3D_t(DebugTickMarkedLine3D_t* );
};

// <0316DAF5> ../scenesystem/sceneviewdebugoverlays.h:260
void CDebugNodeList<DebugSphere_t>::CDebugNodeList()
{
} /* size: 0 */

// <0316DAD8> ../scenesystem/sceneviewdebugoverlays.h:260
inline void CDebugNodeList<DebugSphere_t>::CDebugNodeList()
{
} /* size: 0 */

// <0316DAC1> ../scenesystem/sceneviewdebugoverlays.h:260
void CDebugNodeList<DebugSphere_t>::~CDebugNodeList()
{
} /* size: 0 */

// <0316DAA4> ../scenesystem/sceneviewdebugoverlays.h:260
inline void CDebugNodeList<DebugSphere_t>::~CDebugNodeList()
{
} /* size: 0 */

// <031034D8> ../scenesystem/sceneviewdebugoverlays.h:260
// member functions: 8
// member variables: 2
// class size: 64
class CDebugNodeList<DebugSphere_t> {
	CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> > m_oneFrameNodes; /* 0 32 */
	CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> > m_persistentNodes; /* 32 32 */
	/* ../scenesystem/sceneviewdebugoverlays.h:266 */
	void AddToTail(CDebugNodeList<DebugSphere_t>* , const DebugSphere_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:278 */
	bool IsEmpty(const CDebugNodeList<DebugSphere_t>* );
	void ~CDebugNodeList(CDebugNodeList<DebugSphere_t>* );
	void CDebugNodeList(CDebugNodeList<DebugSphere_t>* );
	void AddToTail(class CDebugNodeList<DebugSphere_t> *, const class DebugSphere_t  &); /* linkage=_ZN14CDebugNodeListI13DebugSphere_tE9AddToTailERKS0_ */
	bool IsEmpty(const class CDebugNodeList<DebugSphere_t>  *); /* linkage=_ZNK14CDebugNodeListI13DebugSphere_tE7IsEmptyEv */
	void ~CDebugNodeList(class CDebugNodeList<DebugSphere_t> *); /* linkage=_ZN14CDebugNodeListI13DebugSphere_tED4Ev */
	void CDebugNodeList(class CDebugNodeList<DebugSphere_t> *); /* linkage=_ZN14CDebugNodeListI13DebugSphere_tEC4Ev */
};

// <03126B88> ../scenesystem/sceneviewdebugoverlays.h:266
inline void CDebugNodeList<DebugSphere_t>::AddToTail(const DebugSphere_t& node)
{
} /* size: 0 */

// <03128F7F> ../scenesystem/sceneviewdebugoverlays.h:278
inline void CDebugNodeList<DebugSphere_t>::IsEmpty()
{
} /* size: 0 */

// <031173D1> ../scenesystem/sceneviewdebugoverlays.h:284
// member functions: 308
// member variables: 34
// vtable entries: 57
// class size: 808
class CSceneViewDebugOverlays : public ISceneViewDebugOverlays {
public:
	/* class ISceneViewDebugOverlays <ancestor>; */ /* 0 24 */
	void CSceneViewDebugOverlays(CSceneViewDebugOverlays* , CSceneViewDebugOverlays& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:211 */
	void CSceneViewDebugOverlays(CSceneViewDebugOverlays* , SceneViewDebugOverlayTimingType_t);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:230 */
	virtual void ~CSceneViewDebugOverlays(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:236 */
	void Init(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:241 */
	virtual bool IsEmpty(const CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:339 */
	virtual void Clear(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:277 */
	virtual void SetOverlayStartTime(CSceneViewDebugOverlays* , float);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:282 */
	virtual float GetOverlayStartTime(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:442 */
	virtual void AddToViewAndAgeList(CSceneViewDebugOverlays* , ISceneView* , float, float);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:257 */
	virtual void SetMinimumOverlayLifetime(CSceneViewDebugOverlays* , float);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:262 */
	virtual float GetMinimumOverlayLifetime(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:267 */
	virtual void SetDefaultColor(CSceneViewDebugOverlays* , const VertexColor_t& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:452 */
	virtual void SetDebugOverlayRenderType(CSceneViewDebugOverlays* , DebugRenderType_t);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:457 */
	virtual DebugRenderType_t GetDebugOverlayRenderType(const CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:462 */
	virtual void UnitTestCycleOverlayRenderType(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2891 */
	virtual void AddDebugOverlaysBegin(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2895 */
	virtual void AddDebugOverlaysEnd(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:561 */
	virtual void Line(CSceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:567 */
	virtual void Line2D(CSceneViewDebugOverlays* , const Vector2D& , const Vector2D& , const VertexColor_t& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2003 */
	virtual void BoxAngles(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2026 */
	virtual void SolidBoxAngles(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1936 */
	virtual void Frustum(CSceneViewDebugOverlays* , const CFrustum& , const VertexColor_t& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2226 */
	virtual void Sphere(CSceneViewDebugOverlays* , const matrix3x4_t& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2341 */
	virtual void Capsule(CSceneViewDebugOverlays* , const matrix3x4_t& , float, float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2317 */
	virtual void Capsule(CSceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:604 */
	virtual void Texture(CSceneViewDebugOverlays* , HRenderTexture, const Rect_t& , const VertexColor_t& , const Vector2D& , const Vector2D& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:650 */
	virtual void VectorText3D(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const char* , const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:669 */
	virtual void Text(CSceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:696 */
	virtual void Text(CSceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:675 */
	virtual void TextWithFont(CSceneViewDebugOverlays* , const Vector2D& , int, const char* , float, const VertexColor_t& , bool, bool, FontHandle_t, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:722 */
	virtual void TextPretty(CSceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , float64, FontHandle_t, bool);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2053 */
	virtual void Axis(CSceneViewDebugOverlays* , const matrix3x4_t& , float, bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:628 */
	virtual void FilledRect2D(CSceneViewDebugOverlays* , const Rect_t& , const VertexColor_t& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2074 */
	virtual void Cross(CSceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2093 */
	virtual void Cross3D(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2118 */
	virtual void Cross3DOriented(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , const VertexColor_t& , const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2138 */
	virtual void Triangle(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2149 */
	virtual void Circle(CSceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2215 */
	virtual void Circle(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2402 */
	virtual void HorzArrow(CSceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2447 */
	virtual void YawArrow(CSceneViewDebugOverlays* , const Vector& , float, float, float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2459 */
	virtual void VertArrow(CSceneViewDebugOverlays* , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2501 */
	virtual void TwistArrow(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2547 */
	virtual void Cone(CSceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2594 */
	virtual void SolidCone(CSceneViewDebugOverlays* , const Vector& , const Vector& , float, float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2645 */
	virtual void ScreenMessage(CSceneViewDebugOverlays* , const char* , float64, VertexColor_t);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:287 */
	virtual void PushDebugOverlayScope(CSceneViewDebugOverlays* , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:293 */
	virtual void PopDebugOverlayScope(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:306 */
	virtual void RemoveAllInScope(CSceneViewDebugOverlays* , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:551 */
	virtual void Grid(CSceneViewDebugOverlays* , const Vector& );
	/* ../scenesystem/sceneviewdebugoverlays.h:344 */
	virtual bool IsGridVisible(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.h:345 */
	virtual void HideGrid(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:388 */
	virtual void AddToView(CSceneViewDebugOverlays* , ISceneView* , float);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:345 */
	virtual void AgeList(CSceneViewDebugOverlays* , float, float);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2763 */
	virtual void DrawTickMarkedLine(CSceneViewDebugOverlays* , const Vector& , const Vector& , float, int, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2820 */
	virtual void SweptBox(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const Vector& , const Quaternion& , const VertexColor_t& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:633 */
	virtual void AddDebugSceneObject(CSceneViewDebugOverlays* , CSceneObject* , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1884 */
	virtual ISceneWorld* GetDebugSceneWorld(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:272 */
	virtual VertexColor_t GetDefaultColor(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1823 */
	void ProcessTickMarkedLinesOverlay(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:984 */
	void Render3DLineOverlays(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1273 */
	void Render3DVectorTextOverlays(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1415 */
	void Render2DLineOverlays(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1520 */
	void RenderTextureOverlays(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1738 */
	void Render2DTextOverlays(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1137 */
	void Render3DTriangleOverlays(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.h:366 */
	void Render2DTriangleOverlays(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1153 */
	void RenderGridOverlay(CSceneViewDebugOverlays* , IRenderContext* );
	/* ../scenesystem/sceneviewdebugoverlays.h:368 */
	void DisableNonInstantaneousOverlays(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.h:369 */
	ISceneWorld* GetSceneWorldForRendering(CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1894 */
	void CommitNewSceneObjects(CSceneViewDebugOverlays* , float);
private:
	/* ../scenesystem/sceneviewdebugoverlays.cpp:481 */
	void Add3DLine(CSceneViewDebugOverlays* , const Vector& , const Vector& , const VertexColor_t& , float64, bool, DebugRenderType_t);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:514 */
	void AddTriangle(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , const VertexColor_t& , float64, bool, DebugRenderType_t);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1525 */
	void Render2DTextOverlaysOutputQuad(CSceneViewDebugOverlays* , IRenderContext* , IMaterialMode* , CDynamicVertexData<VertexDebugUI_t>* & , const Vector2D& , const Vector2D& , const Vector2D& , const Vector2D& , const VertexColor_t& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1238 */
	void Render3DVectorTextOverlaysOutputLine(CSceneViewDebugOverlays* , IRenderContext* , IMaterialMode* , CDynamicVertexData<VertexWireFrame_t>* & , const Vector& , const Vector& , const VertexColor_t& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1446 */
	void Render2DLineOverlay(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* , const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:743 */
	void Render3DLineOverlay(CSceneViewDebugOverlays* , IRenderContext* , int, DebugLineSegment3D_t* , bool);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:953 */
	void Render3DLineBatches(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* , const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& , bool);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:824 */
	void Render3DSphereBatches(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* , const CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& , bool);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1669 */
	void Render2DTextOverlay(CSceneViewDebugOverlays* , IRenderContext* , const Debug2DText_t& , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1598 */
	void Render2DTextOverlayNoFont(CSceneViewDebugOverlays* , IRenderContext* , IMaterialMode* , CDynamicVertexData<VertexDebugUI_t>* & , const Debug2DText_t& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1026 */
	void Render3DTriangleOverlay(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , int, DebugTriangle3D_t* , bool);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1100 */
	void Render3DTrangleBatches(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* , const CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& , bool);
	/* ../scenesystem/sceneviewdebugoverlays.h:385 */
	void Render2DTriangleOverlay(CSceneViewDebugOverlays* , IRenderContext* , int, DebugTriangle3D_t* , bool);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1792 */
	void Process3DCircleOverlay(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:1806 */
	void Process3DCrossOverlay(CSceneViewDebugOverlays* , IRenderContext* , const CFrustum* , ISceneLayer* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2718 */
	void ProcessScreenMessages(CSceneViewDebugOverlays* , float);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:472 */
	void Init(CSceneViewDebugOverlays* , DebugBase_t& , float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:586 */
	void Add2DLineToRenderLists(CSceneViewDebugOverlays* , const Vector2D& , const Vector2D& , const VertexColor_t& , DebugRenderType_t);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2180 */
	void AddCircleToRenderLists(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , int, bool, float64, DebugRenderType_t);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:702 */
	void Text(CSceneViewDebugOverlays* , const Vector& , int, const char* , float, const VertexColor_t& , bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2786 */
	void AddAxes(CSceneViewDebugOverlays* , const Vector& , Vector* , int, VertexColor_t, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2803 */
	void AddExtrusionFace(CSceneViewDebugOverlays* , const Vector& , const Vector& , Vector* , int, int, VertexColor_t, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2158 */
	void Circle(CSceneViewDebugOverlays* , const Vector& , float, const VertexColor_t& , int, bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2220 */
	void Circle(CSceneViewDebugOverlays* , const Vector& , const Vector& , const Vector& , float, const VertexColor_t& , int, bool, float64);
	/* ../scenesystem/sceneviewdebugoverlays.h:628 */
	void ChangeFlags(CSceneViewDebugOverlays* , EDebugOverlayFlags, EDebugOverlayFlags);
	/* ../scenesystem/sceneviewdebugoverlays.h:635 */
	void SetFlags(CSceneViewDebugOverlays* , EDebugOverlayFlags);
	/* ../scenesystem/sceneviewdebugoverlays.h:640 */
	EDebugOverlayFlags GetFlags(const CSceneViewDebugOverlays* );
	/* ../scenesystem/sceneviewdebugoverlays.h:646 */
	bool HasFlags(const CSceneViewDebugOverlays* , EDebugOverlayFlags);
	/* ../scenesystem/sceneviewdebugoverlays.h:651 */
	void ClearFlags(CSceneViewDebugOverlays* , EDebugOverlayFlags);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2279 */
	virtual void RecordSnapshot(CSceneViewDebugOverlays* , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >* , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2302 */
	virtual void RestoreSnapshot(CSceneViewDebugOverlays* , const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2354 */
	void Capsule(CSceneViewDebugOverlays* , const matrix3x4_t& , const matrix3x4_t& , float, const VertexColor_t& , bool, float64);
	uint64 m_nFlags; /* 24 8 */
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_debugOverlayScope; /* 32 32 */
	CUtlStringToken m_currScopeId; /* 64 4 */
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > m_debugLines3D; /* 72 32 */
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > m_debugLines3DNoDepthTest; /* 104 32 */
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> > m_debugLines2D; /* 136 32 */
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > m_debugTriangles3D; /* 168 32 */
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > m_debugTriangles3DNoDepthTest; /* 200 32 */
	CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> > m_debugTriangles2D; /* 232 32 */
	CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> > m_debugTextures; /* 264 32 */
	CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> > m_debug3DVectorText; /* 296 32 */
	CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> > m_debug2DText; /* 328 32 */
	CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> > m_debug3DText; /* 360 32 */
	CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> > m_debugSceneObjects; /* 392 32 */
	CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> > m_debugCircles3D; /* 424 32 */
	CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> > m_debugCrosses3D; /* 456 32 */
	CDebugNodeList<DebugSphere_t> m_debugSpheres; /* 488 64 */
	CDebugNodeList<DebugSphere_t> m_debugSpheresNoDepthTest; /* 552 64 */
	CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> > m_debugTickMarkedLines3D; /* 616 32 */
	CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> > m_ScrollingScreenMessageList; /* 648 32 */
	SceneViewDebugOverlayTimingType_t m_timingType; /* 680 4 */
	Vector m_vGridPosition; /* 684 12 */
	bool m_bDrawGrid; /* 696 1 */
	CThreadFastMutex m_debugRenderLock; /* 704 24 */
	float m_flMinOverlayLifetime; /* 728 4 */
	float m_flOverlayStartTime; /* 732 4 */
	Vector4D m_vScale; /* 736 16 */
	VertexColor_t m_defaultColor; /* 752 4 */
	DebugRenderType_t m_RenderType; /* 756 4 */
	ISceneWorld * m_pSceneWorld; /* 760 8 */
	CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > m_queuedDeletions; /* 768 32 */
	bool m_bDisableNonInstantenousOverlays; /* 800 1 */
	FontHandle_t m_ScreenMessageFont; /* 804 4 */
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugTextBase_t>(CSceneViewDebugOverlays* , DebugTextBase_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugSphere_t>(CSceneViewDebugOverlays* , DebugSphere_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugTickMarkedLine3D_t>(CSceneViewDebugOverlays* , DebugTickMarkedLine3D_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugCross3D_t>(CSceneViewDebugOverlays* , DebugCross3D_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugCircle3D_t>(CSceneViewDebugOverlays* , DebugCircle3D_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<Debug3DText_t>(CSceneViewDebugOverlays* , Debug3DText_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<Debug2DText_t>(CSceneViewDebugOverlays* , Debug2DText_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<Debug3DVectorText_t>(CSceneViewDebugOverlays* , Debug3DVectorText_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugTextureDisplay_t>(CSceneViewDebugOverlays* , DebugTextureDisplay_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugTriangle2D_t>(CSceneViewDebugOverlays* , DebugTriangle2D_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugTriangle3D_t>(CSceneViewDebugOverlays* , DebugTriangle3D_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugLineSegment2D_t>(CSceneViewDebugOverlays* , DebugLineSegment2D_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:460 */
	void CleanupListEntry<DebugLineSegment3D_t>(CSceneViewDebugOverlays* , DebugLineSegment3D_t& );
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugSphere_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& , const CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugTickMarkedLine3D_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& , const CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugCross3D_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& , const CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugCircle3D_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& , const CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugTriangle3D_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& , const CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<Debug3DText_t>(const CSceneViewDebugOverlays* , CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& , const CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<Debug2DText_t>(const CSceneViewDebugOverlays* , CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& , const CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<Debug3DVectorText_t>(const CSceneViewDebugOverlays* , CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& , const CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugTextureDisplay_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& , const CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugLineSegment2D_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& , const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:577 */
	void AddListToView<DebugLineSegment3D_t>(const CSceneViewDebugOverlays* , CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& , const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugSceneObject_t>(CSceneViewDebugOverlays* , CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugTickMarkedLine3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugCross3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugCircle3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugTriangle2D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugTriangle3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<Debug3DText_t>(CSceneViewDebugOverlays* , CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<Debug2DText_t>(CSceneViewDebugOverlays* , CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<Debug3DVectorText_t>(CSceneViewDebugOverlays* , CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugTextureDisplay_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugLineSegment2D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugSphere_t>(CSceneViewDebugOverlays* , CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:473 */
	void AgeSingleList<DebugLineSegment3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:524 */
	void AgeSingleListPreserveOrder<DebugTextBase_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >& , SceneViewDebugOverlayTimingType_t, float, float);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugSphere_t>(CSceneViewDebugOverlays* , CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugTickMarkedLine3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugCross3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugCircle3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<Debug3DText_t>(CSceneViewDebugOverlays* , CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<Debug2DText_t>(CSceneViewDebugOverlays* , CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<Debug3DVectorText_t>(CSceneViewDebugOverlays* , CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugTextureDisplay_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugTriangle2D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugTriangle3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugLineSegment2D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:610 */
	void RemoveAllInScope<DebugLineSegment3D_t>(CSceneViewDebugOverlays* , CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& , CUtlStringToken);
	/* ../scenesystem/sceneviewdebugoverlays.h:465 */
	void CleanupListEntry<DebugSceneObject_t>(CSceneViewDebugOverlays* , DebugSceneObject_t& );
	class ISceneWorld * GetSceneWorldForRendering(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays25GetSceneWorldForRenderingEv */
	void CSceneViewDebugOverlays(class CSceneViewDebugOverlays *, class CSceneViewDebugOverlays &); /* linkage=_ZN23CSceneViewDebugOverlaysC4ERS_ */
	void CSceneViewDebugOverlays(class CSceneViewDebugOverlays *, enum SceneViewDebugOverlayTimingType_t); /* linkage=_ZN23CSceneViewDebugOverlaysC4E33SceneViewDebugOverlayTimingType_t */
	virtual void ~CSceneViewDebugOverlays(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlaysD4Ev */
	/* <318520f> ../scenesystem/sceneviewdebugoverlays.cpp:236 */
	void Init(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays4InitEv */
	virtual bool IsEmpty(const class CSceneViewDebugOverlays  *); /* linkage=_ZNK23CSceneViewDebugOverlays7IsEmptyEv */
	virtual void Clear(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays5ClearEv */
	virtual void SetOverlayStartTime(class CSceneViewDebugOverlays *, float); /* linkage=_ZN23CSceneViewDebugOverlays19SetOverlayStartTimeEf */
	virtual float GetOverlayStartTime(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays19GetOverlayStartTimeEv */
	virtual void AddToViewAndAgeList(class CSceneViewDebugOverlays *, class ISceneView *, float, float); /* linkage=_ZN23CSceneViewDebugOverlays19AddToViewAndAgeListEP10ISceneViewff */
	virtual void SetMinimumOverlayLifetime(class CSceneViewDebugOverlays *, float); /* linkage=_ZN23CSceneViewDebugOverlays25SetMinimumOverlayLifetimeEf */
	virtual float GetMinimumOverlayLifetime(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays25GetMinimumOverlayLifetimeEv */
	virtual void SetDefaultColor(class CSceneViewDebugOverlays *, const class VertexColor_t  &); /* linkage=_ZN23CSceneViewDebugOverlays15SetDefaultColorERK13VertexColor_t */
	virtual void SetDebugOverlayRenderType(class CSceneViewDebugOverlays *, enum DebugRenderType_t); /* linkage=_ZN23CSceneViewDebugOverlays25SetDebugOverlayRenderTypeE17DebugRenderType_t */
	virtual enum DebugRenderType_t GetDebugOverlayRenderType(const class CSceneViewDebugOverlays  *); /* linkage=_ZNK23CSceneViewDebugOverlays25GetDebugOverlayRenderTypeEv */
	virtual void UnitTestCycleOverlayRenderType(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays30UnitTestCycleOverlayRenderTypeEv */
	virtual void AddDebugOverlaysBegin(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays21AddDebugOverlaysBeginEv */
	virtual void AddDebugOverlaysEnd(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays19AddDebugOverlaysEndEv */
	/* <3185fb2> ../scenesystem/sceneviewdebugoverlays.cpp:561 */
	virtual void Line(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays4LineERK6VectorS2_RK13VertexColor_tbd */
	virtual void Line2D(class CSceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, const class VertexColor_t  &, float64); /* linkage=_ZN23CSceneViewDebugOverlays6Line2DERK8Vector2DS2_RK13VertexColor_td */
	virtual void BoxAngles(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays9BoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	virtual void SolidBoxAngles(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays14SolidBoxAnglesERK6VectorS2_S2_RK10QuaternionRK13VertexColor_tbd */
	virtual void Frustum(class CSceneViewDebugOverlays *, const class CFrustum  &, const class VertexColor_t  &, float64); /* linkage=_ZN23CSceneViewDebugOverlays7FrustumERK8CFrustumRK13VertexColor_td */
	virtual void Sphere(class CSceneViewDebugOverlays *, const class matrix3x4_t  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays6SphereERK11matrix3x4_tfRK13VertexColor_tbd */
	virtual void Capsule(class CSceneViewDebugOverlays *, const class matrix3x4_t  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays7CapsuleERK11matrix3x4_tffRK13VertexColor_tbd */
	virtual void Capsule(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays7CapsuleERK6VectorS2_fRK13VertexColor_tbd */
	virtual void Texture(class CSceneViewDebugOverlays *, HRenderTexture, const class Rect_t  &, const class VertexColor_t  &, const class Vector2D  &, const class Vector2D  &, float64); /* linkage=_ZN23CSceneViewDebugOverlays7TextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseERK6Rect_tRK13VertexColor_tRK8Vector2DSB_d */
	virtual void VectorText3D(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const char  *, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays12VectorText3DERK6VectorS2_S2_PKcRK13VertexColor_tbd */
	/* <3187277> ../scenesystem/sceneviewdebugoverlays.cpp:669 */
	virtual void Text(class CSceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23CSceneViewDebugOverlays4TextERK8Vector2DiPKcfRK13VertexColor_td */
	/* <318736f> ../scenesystem/sceneviewdebugoverlays.cpp:696 */
	virtual void Text(class CSceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64); /* linkage=_ZN23CSceneViewDebugOverlays4TextERK6VectoriPKcfRK13VertexColor_td */
	virtual void TextWithFont(class CSceneViewDebugOverlays *, const class Vector2D  &, int, const char  *, float, const class VertexColor_t  &, bool, bool, FontHandle_t, float64); /* linkage=_ZN23CSceneViewDebugOverlays12TextWithFontERK8Vector2DiPKcfRK13VertexColor_tbbjd */
	virtual void TextPretty(class CSceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, float64, FontHandle_t, bool); /* linkage=_ZN23CSceneViewDebugOverlays10TextPrettyERK6VectoriPKcfRK13VertexColor_tdjb */
	virtual void Axis(class CSceneViewDebugOverlays *, const class matrix3x4_t  &, float, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays4AxisERK11matrix3x4_tfbd */
	virtual void FilledRect2D(class CSceneViewDebugOverlays *, const class Rect_t  &, const class VertexColor_t  &, float64); /* linkage=_ZN23CSceneViewDebugOverlays12FilledRect2DERK6Rect_tRK13VertexColor_td */
	virtual void Cross(class CSceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays5CrossERK6VectorfRK13VertexColor_tbd */
	virtual void Cross3D(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays7Cross3DERK6VectorS2_S2_RK13VertexColor_tbd */
	virtual void Cross3DOriented(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, const class VertexColor_t  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays15Cross3DOrientedERK6VectorS2_S2_S2_fRK13VertexColor_tS5_S5_bd */
	/* <3186340> ../scenesystem/sceneviewdebugoverlays.cpp:2138 */
	virtual void Triangle(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays8TriangleERK6VectorS2_S2_RK13VertexColor_tbd */
	/* <3187468> ../scenesystem/sceneviewdebugoverlays.cpp:2149 */
	virtual void Circle(class CSceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays6CircleERK6VectorfRK13VertexColor_tbd */
	virtual void Circle(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays6CircleERK6VectorS2_S2_fRK13VertexColor_tbd */
	virtual void HorzArrow(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays9HorzArrowERK6VectorS2_fRK13VertexColor_tbd */
	virtual void YawArrow(class CSceneViewDebugOverlays *, const class Vector  &, float, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays8YawArrowERK6VectorfffRK13VertexColor_tbd */
	virtual void VertArrow(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays9VertArrowERK6VectorS2_fRK13VertexColor_tbd */
	virtual void TwistArrow(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays10TwistArrowERK6VectorS2_S2_fRK13VertexColor_tbd */
	virtual void Cone(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays4ConeERK6VectorS2_ffRK13VertexColor_tbd */
	virtual void SolidCone(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays9SolidConeERK6VectorS2_ffRK13VertexColor_tbd */
	virtual void ScreenMessage(class CSceneViewDebugOverlays *, const char  *, float64, class VertexColor_t); /* linkage=_ZN23CSceneViewDebugOverlays13ScreenMessageEPKcd13VertexColor_t */
	virtual void PushDebugOverlayScope(class CSceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays21PushDebugOverlayScopeE15CUtlStringToken */
	virtual void PopDebugOverlayScope(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays20PopDebugOverlayScopeEv */
	virtual void RemoveAllInScope(class CSceneViewDebugOverlays *, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeE15CUtlStringToken */
	/* <3183c15> ../scenesystem/sceneviewdebugoverlays.cpp:551 */
	virtual void Grid(class CSceneViewDebugOverlays *, const class Vector  &); /* linkage=_ZN23CSceneViewDebugOverlays4GridERK6Vector */
	virtual bool IsGridVisible(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays13IsGridVisibleEv */
	virtual void HideGrid(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays8HideGridEv */
	virtual void AddToView(class CSceneViewDebugOverlays *, class ISceneView *, float); /* linkage=_ZN23CSceneViewDebugOverlays9AddToViewEP10ISceneViewf */
	virtual void AgeList(class CSceneViewDebugOverlays *, float, float); /* linkage=_ZN23CSceneViewDebugOverlays7AgeListEff */
	virtual void DrawTickMarkedLine(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, float, int, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays18DrawTickMarkedLineERK6VectorS2_fiRK13VertexColor_tbd */
	virtual void SweptBox(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class Vector  &, const class Quaternion  &, const class VertexColor_t  &, float64); /* linkage=_ZN23CSceneViewDebugOverlays8SweptBoxERK6VectorS2_S2_S2_RK10QuaternionRK13VertexColor_td */
	virtual void AddDebugSceneObject(class CSceneViewDebugOverlays *, class CSceneObject *, float64); /* linkage=_ZN23CSceneViewDebugOverlays19AddDebugSceneObjectEP12CSceneObjectd */
	virtual class ISceneWorld * GetDebugSceneWorld(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays18GetDebugSceneWorldEv */
	virtual class VertexColor_t GetDefaultColor(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays15GetDefaultColorEv */
	void ProcessTickMarkedLinesOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays29ProcessTickMarkedLinesOverlayEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void Render3DLineOverlays(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays20Render3DLineOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void Render3DVectorTextOverlays(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays26Render3DVectorTextOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void Render2DLineOverlays(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays20Render2DLineOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayer */
	/* <31853c2> ../scenesystem/sceneviewdebugoverlays.cpp:1520 */
	void RenderTextureOverlays(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays21RenderTextureOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void Render2DTextOverlays(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays20Render2DTextOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayer */
	/* <31867bb> ../scenesystem/sceneviewdebugoverlays.cpp:1137 */
	void Render3DTriangleOverlays(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays24Render3DTriangleOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void Render2DTriangleOverlays(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays24Render2DTriangleOverlaysEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void RenderGridOverlay(class CSceneViewDebugOverlays *, class IRenderContext *); /* linkage=_ZN23CSceneViewDebugOverlays17RenderGridOverlayEP14IRenderContext */
	void DisableNonInstantaneousOverlays(class CSceneViewDebugOverlays *); /* linkage=_ZN23CSceneViewDebugOverlays31DisableNonInstantaneousOverlaysEv */
	/* <3187ec0> ../scenesystem/sceneviewdebugoverlays.cpp:1894 */
	void CommitNewSceneObjects(class CSceneViewDebugOverlays *, float); /* linkage=_ZN23CSceneViewDebugOverlays21CommitNewSceneObjectsEf */
	void Add3DLine(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class VertexColor_t  &, float64, bool, enum DebugRenderType_t); /* linkage=_ZN23CSceneViewDebugOverlays9Add3DLineERK6VectorS2_RK13VertexColor_tdb17DebugRenderType_t */
	void AddTriangle(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, const class VertexColor_t  &, float64, bool, enum DebugRenderType_t); /* linkage=_ZN23CSceneViewDebugOverlays11AddTriangleERK6VectorS2_S2_RK13VertexColor_tdb17DebugRenderType_t */
	void Render2DTextOverlaysOutputQuad(class CSceneViewDebugOverlays *, class IRenderContext *, class IMaterialMode *, class CDynamicVertexData<VertexDebugUI_t> * &, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class Vector2D  &, const class VertexColor_t  &); /* linkage=_ZN23CSceneViewDebugOverlays30Render2DTextOverlaysOutputQuadEP14IRenderContextP13IMaterialModeRP18CDynamicVertexDataI15VertexDebugUI_tERK8Vector2DSB_SB_SB_RK13VertexColor_t */
	void Render3DVectorTextOverlaysOutputLine(class CSceneViewDebugOverlays *, class IRenderContext *, class IMaterialMode *, class CDynamicVertexData<VertexWireFrame_t> * &, const class Vector  &, const class Vector  &, const class VertexColor_t  &); /* linkage=_ZN23CSceneViewDebugOverlays36Render3DVectorTextOverlaysOutputLineEP14IRenderContextP13IMaterialModeRP18CDynamicVertexDataI17VertexWireFrame_tERK6VectorSB_RK13VertexColor_t */
	void Render2DLineOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *, const class CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >  &); /* linkage=_ZN23CSceneViewDebugOverlays19Render2DLineOverlayEP14IRenderContextPK8CFrustumP11ISceneLayerRK10CUtlVectorI20DebugLineSegment2D_t10CUtlMemoryIS8_iEE */
	void Render3DLineOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, int, class DebugLineSegment3D_t *, bool); /* linkage=_ZN23CSceneViewDebugOverlays19Render3DLineOverlayEP14IRenderContextiP20DebugLineSegment3D_tb */
	void Render3DLineBatches(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *, const class CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >  &, bool); /* linkage=_ZN23CSceneViewDebugOverlays19Render3DLineBatchesEP14IRenderContextPK8CFrustumP11ISceneLayerRK10CUtlVectorI20DebugLineSegment3D_t10CUtlMemoryIS8_iEEb */
	void Render3DSphereBatches(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *, const class CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >  &, bool); /* linkage=_ZN23CSceneViewDebugOverlays21Render3DSphereBatchesEP14IRenderContextPK8CFrustumP11ISceneLayerRK10CUtlVectorI13DebugSphere_t10CUtlMemoryIS8_iEEb */
	void Render2DTextOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, const class Debug2DText_t  &, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome); /* linkage=_ZN23CSceneViewDebugOverlays19Render2DTextOverlayEP14IRenderContextRK13Debug2DText_tP10CUtlVectorIS5_I19CCharRenderGeometry10CUtlMemoryIS6_iEES7_IS9_iEE */
	void Render2DTextOverlayNoFont(class CSceneViewDebugOverlays *, class IRenderContext *, class IMaterialMode *, class CDynamicVertexData<VertexDebugUI_t> * &, const class Debug2DText_t  &); /* linkage=_ZN23CSceneViewDebugOverlays25Render2DTextOverlayNoFontEP14IRenderContextP13IMaterialModeRP18CDynamicVertexDataI15VertexDebugUI_tERK13Debug2DText_t */
	/* <3185304> ../scenesystem/sceneviewdebugoverlays.cpp:1026 */
	void Render3DTriangleOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, int, class DebugTriangle3D_t *, bool); /* linkage=_ZN23CSceneViewDebugOverlays23Render3DTriangleOverlayEP14IRenderContextPK8CFrustumiP17DebugTriangle3D_tb */
	void Render3DTrangleBatches(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *, const class CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >  &, bool); /* linkage=_ZN23CSceneViewDebugOverlays22Render3DTrangleBatchesEP14IRenderContextPK8CFrustumP11ISceneLayerRK10CUtlVectorI17DebugTriangle3D_t10CUtlMemoryIS8_iEEb */
	void Render2DTriangleOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, int, class DebugTriangle3D_t *, bool); /* linkage=_ZN23CSceneViewDebugOverlays23Render2DTriangleOverlayEP14IRenderContextiP17DebugTriangle3D_tb */
	void Process3DCircleOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays22Process3DCircleOverlayEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void Process3DCrossOverlay(class CSceneViewDebugOverlays *, class IRenderContext *, const class CFrustum  *, class ISceneLayer *); /* linkage=_ZN23CSceneViewDebugOverlays21Process3DCrossOverlayEP14IRenderContextPK8CFrustumP11ISceneLayer */
	void ProcessScreenMessages(class CSceneViewDebugOverlays *, float); /* linkage=_ZN23CSceneViewDebugOverlays21ProcessScreenMessagesEf */
	/* <3185257> ../scenesystem/sceneviewdebugoverlays.cpp:472 */
	void Init(class CSceneViewDebugOverlays *, class DebugBase_t &, float64); /* linkage=_ZN23CSceneViewDebugOverlays4InitER11DebugBase_td */
	void Add2DLineToRenderLists(class CSceneViewDebugOverlays *, const class Vector2D  &, const class Vector2D  &, const class VertexColor_t  &, enum DebugRenderType_t); /* linkage=_ZN23CSceneViewDebugOverlays22Add2DLineToRenderListsERK8Vector2DS2_RK13VertexColor_t17DebugRenderType_t */
	void AddCircleToRenderLists(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, int, bool, float64, enum DebugRenderType_t); /* linkage=_ZN23CSceneViewDebugOverlays22AddCircleToRenderListsERK6VectorS2_S2_fRK13VertexColor_tibd17DebugRenderType_t */
	void Text(class CSceneViewDebugOverlays *, const class Vector  &, int, const char  *, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays4TextERK6VectoriPKcfRK13VertexColor_tbd */
	void AddAxes(class CSceneViewDebugOverlays *, const class Vector  &, class Vector *, int, class VertexColor_t, float64); /* linkage=_ZN23CSceneViewDebugOverlays7AddAxesERK6VectorPS0_i13VertexColor_td */
	void AddExtrusionFace(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, class Vector *, int, int, class VertexColor_t, float64); /* linkage=_ZN23CSceneViewDebugOverlays16AddExtrusionFaceERK6VectorS2_PS0_ii13VertexColor_td */
	void Circle(class CSceneViewDebugOverlays *, const class Vector  &, float, const class VertexColor_t  &, int, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays6CircleERK6VectorfRK13VertexColor_tibd */
	/* <31866dd> ../scenesystem/sceneviewdebugoverlays.cpp:2220 */
	void Circle(class CSceneViewDebugOverlays *, const class Vector  &, const class Vector  &, const class Vector  &, float, const class VertexColor_t  &, int, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays6CircleERK6VectorS2_S2_fRK13VertexColor_tibd */
	void ChangeFlags(class CSceneViewDebugOverlays *, EDebugOverlayFlags, EDebugOverlayFlags); /* linkage=_ZN23CSceneViewDebugOverlays11ChangeFlagsEyy */
	void SetFlags(class CSceneViewDebugOverlays *, EDebugOverlayFlags); /* linkage=_ZN23CSceneViewDebugOverlays8SetFlagsEy */
	EDebugOverlayFlags GetFlags(const class CSceneViewDebugOverlays  *); /* linkage=_ZNK23CSceneViewDebugOverlays8GetFlagsEv */
	bool HasFlags(const class CSceneViewDebugOverlays  *, EDebugOverlayFlags); /* linkage=_ZNK23CSceneViewDebugOverlays8HasFlagsEy */
	void ClearFlags(class CSceneViewDebugOverlays *, EDebugOverlayFlags); /* linkage=_ZN23CSceneViewDebugOverlays10ClearFlagsEy */
	virtual void RecordSnapshot(class CSceneViewDebugOverlays *, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > *, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays14RecordSnapshotEP10CUtlVectorIh10CUtlMemoryIhiEE15CUtlStringToken */
	virtual void RestoreSnapshot(class CSceneViewDebugOverlays *, const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  &); /* linkage=_ZN23CSceneViewDebugOverlays15RestoreSnapshotERK10CUtlVectorIh10CUtlMemoryIhiEE */
	void Capsule(class CSceneViewDebugOverlays *, const class matrix3x4_t  &, const class matrix3x4_t  &, float, const class VertexColor_t  &, bool, float64); /* linkage=_ZN23CSceneViewDebugOverlays7CapsuleERK11matrix3x4_tS2_fRK13VertexColor_tbd */
	void CleanupListEntry<DebugTextBase_t>(class CSceneViewDebugOverlays *, class DebugTextBase_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI15DebugTextBase_tEEvRT_ */
	void CleanupListEntry<DebugSphere_t>(class CSceneViewDebugOverlays *, class DebugSphere_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI13DebugSphere_tEEvRT_ */
	void CleanupListEntry<DebugTickMarkedLine3D_t>(class CSceneViewDebugOverlays *, class DebugTickMarkedLine3D_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI23DebugTickMarkedLine3D_tEEvRT_ */
	void CleanupListEntry<DebugCross3D_t>(class CSceneViewDebugOverlays *, class DebugCross3D_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI14DebugCross3D_tEEvRT_ */
	void CleanupListEntry<DebugCircle3D_t>(class CSceneViewDebugOverlays *, class DebugCircle3D_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI15DebugCircle3D_tEEvRT_ */
	void CleanupListEntry<Debug3DText_t>(class CSceneViewDebugOverlays *, class Debug3DText_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI13Debug3DText_tEEvRT_ */
	void CleanupListEntry<Debug2DText_t>(class CSceneViewDebugOverlays *, class Debug2DText_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI13Debug2DText_tEEvRT_ */
	void CleanupListEntry<Debug3DVectorText_t>(class CSceneViewDebugOverlays *, class Debug3DVectorText_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI19Debug3DVectorText_tEEvRT_ */
	void CleanupListEntry<DebugTextureDisplay_t>(class CSceneViewDebugOverlays *, class DebugTextureDisplay_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI21DebugTextureDisplay_tEEvRT_ */
	void CleanupListEntry<DebugTriangle2D_t>(class CSceneViewDebugOverlays *, class DebugTriangle2D_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI17DebugTriangle2D_tEEvRT_ */
	void CleanupListEntry<DebugTriangle3D_t>(class CSceneViewDebugOverlays *, class DebugTriangle3D_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI17DebugTriangle3D_tEEvRT_ */
	void CleanupListEntry<DebugLineSegment2D_t>(class CSceneViewDebugOverlays *, class DebugLineSegment2D_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI20DebugLineSegment2D_tEEvRT_ */
	void CleanupListEntry<DebugLineSegment3D_t>(class CSceneViewDebugOverlays *, class DebugLineSegment3D_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI20DebugLineSegment3D_tEEvRT_ */
	void AddListToView<DebugSphere_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> > &, const class CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI13DebugSphere_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<DebugTickMarkedLine3D_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> > &, const class CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI23DebugTickMarkedLine3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<DebugCross3D_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> > &, const class CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI14DebugCross3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<DebugCircle3D_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> > &, const class CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI15DebugCircle3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<DebugTriangle3D_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > &, const class CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI17DebugTriangle3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<Debug3DText_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> > &, const class CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI13Debug3DText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<Debug2DText_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> > &, const class CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI13Debug2DText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<Debug3DVectorText_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> > &, const class CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI19Debug3DVectorText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<DebugTextureDisplay_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> > &, const class CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI21DebugTextureDisplay_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<DebugLineSegment2D_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> > &, const class CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI20DebugLineSegment2D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AddListToView<DebugLineSegment3D_t>(const class CSceneViewDebugOverlays  *, class CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > &, const class CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >  &, enum SceneViewDebugOverlayTimingType_t, float); /* linkage=_ZNK23CSceneViewDebugOverlays13AddListToViewI20DebugLineSegment3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEERKS6_33SceneViewDebugOverlayTimingType_tf */
	void AgeSingleList<DebugSceneObject_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI18DebugSceneObject_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugTickMarkedLine3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI23DebugTickMarkedLine3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugCross3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI14DebugCross3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugCircle3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI15DebugCircle3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugTriangle2D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI17DebugTriangle2D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugTriangle3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI17DebugTriangle3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<Debug3DText_t>(class CSceneViewDebugOverlays *, class CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI13Debug3DText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<Debug2DText_t>(class CSceneViewDebugOverlays *, class CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI13Debug2DText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<Debug3DVectorText_t>(class CSceneViewDebugOverlays *, class CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI19Debug3DVectorText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugTextureDisplay_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI21DebugTextureDisplay_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugLineSegment2D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI20DebugLineSegment2D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugSphere_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI13DebugSphere_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleList<DebugLineSegment3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays13AgeSingleListI20DebugLineSegment3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void AgeSingleListPreserveOrder<DebugTextBase_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> > &, enum SceneViewDebugOverlayTimingType_t, float, float); /* linkage=_ZN23CSceneViewDebugOverlays26AgeSingleListPreserveOrderI15DebugTextBase_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE33SceneViewDebugOverlayTimingType_tff */
	void RemoveAllInScope<DebugSphere_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI13DebugSphere_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugTickMarkedLine3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI23DebugTickMarkedLine3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugCross3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI14DebugCross3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugCircle3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI15DebugCircle3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<Debug3DText_t>(class CSceneViewDebugOverlays *, class CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI13Debug3DText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<Debug2DText_t>(class CSceneViewDebugOverlays *, class CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI13Debug2DText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<Debug3DVectorText_t>(class CSceneViewDebugOverlays *, class CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI19Debug3DVectorText_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugTextureDisplay_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI21DebugTextureDisplay_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugTriangle2D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI17DebugTriangle2D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugTriangle3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI17DebugTriangle3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugLineSegment2D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI20DebugLineSegment2D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void RemoveAllInScope<DebugLineSegment3D_t>(class CSceneViewDebugOverlays *, class CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > &, class CUtlStringToken); /* linkage=_ZN23CSceneViewDebugOverlays16RemoveAllInScopeI20DebugLineSegment3D_tEEvR10CUtlVectorIT_10CUtlMemoryIS3_iEE15CUtlStringToken */
	void CleanupListEntry<DebugSceneObject_t>(class CSceneViewDebugOverlays *, class DebugSceneObject_t &); /* linkage=_ZN23CSceneViewDebugOverlays16CleanupListEntryI18DebugSceneObject_tEEvRT_ */
};

// <0321C3B1> ../scenesystem/sceneviewdebugoverlays.h:287
void CSceneViewDebugOverlays::CSceneViewDebugOverlays(SceneViewDebugOverlayTimingType_t type)
{
} /* size: 0 */

// <03175420> ../scenesystem/sceneviewdebugoverlays.h:344
void CSceneViewDebugOverlays::IsGridVisible()
{
} /* size: 12 */

// <031753F2> ../scenesystem/sceneviewdebugoverlays.h:345
void CSceneViewDebugOverlays::HideGrid()
{
} /* size: 12 */

// <0323BD3F> ../scenesystem/sceneviewdebugoverlays.h:368
inline void CSceneViewDebugOverlays::DisableNonInstantaneousOverlays()
{
} /* size: 0 */

// <031753D9> ../scenesystem/sceneviewdebugoverlays.h:369
inline void CSceneViewDebugOverlays::GetSceneWorldForRendering()
{
} /* size: 0 */

// <03124581> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugLineSegment3D_t>(DebugLineSegment3D_t& entry)
{
} /* size: 0 */

// <0312434E> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugLineSegment2D_t>(DebugLineSegment2D_t& entry)
{
} /* size: 0 */

// <031240DF> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugTriangle3D_t>(DebugTriangle3D_t& entry)
{
} /* size: 0 */

// <03123E6F> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugTriangle2D_t>(DebugTriangle2D_t& entry)
{
} /* size: 0 */

// <03123C18> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugTextureDisplay_t>(DebugTextureDisplay_t& entry)
{
} /* size: 0 */

// <031238DC> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<Debug3DVectorText_t>(Debug3DVectorText_t& entry)
{
} /* size: 0 */

// <031235F0> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<Debug2DText_t>(Debug2DText_t& entry)
{
} /* size: 0 */

// <03123314> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<Debug3DText_t>(Debug3DText_t& entry)
{
} /* size: 0 */

// <03123028> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugCircle3D_t>(DebugCircle3D_t& entry)
{
} /* size: 0 */

// <03122DF5> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugCross3D_t>(DebugCross3D_t& entry)
{
} /* size: 0 */

// <03122BC2> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugTickMarkedLine3D_t>(DebugTickMarkedLine3D_t& entry)
{
} /* size: 0 */

// <0312296B> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugSphere_t>(DebugSphere_t& entry)
{
} /* size: 0 */

// <03122875> ../scenesystem/sceneviewdebugoverlays.h:460
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugTextBase_t>(DebugTextBase_t& entry)
{
} /* size: 0 */

// <031753AC> ../scenesystem/sceneviewdebugoverlays.h:465
inline void CSceneViewDebugOverlays::CleanupListEntry<DebugSceneObject_t>(DebugSceneObject_t& entry)
{
} /* size: 0 */

// <0312870E> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment3D_t>(CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugLineSegment3D_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugLineSegment3D_t& item; // 504
		}
	}
} /* size: 0 */

// <0312867E> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugSphere_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugSphere_t& item; // 504
		}
	}
} /* size: 0 */

// <031285EE> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment2D_t>(CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugLineSegment2D_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugLineSegment2D_t& item; // 504
		}
	}
} /* size: 0 */

// <0312855E> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugTextureDisplay_t>(CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugTextureDisplay_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugTextureDisplay_t& item; // 504
		}
	}
} /* size: 0 */

// <031284CE> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<Debug3DVectorText_t>(CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			Debug3DVectorText_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			Debug3DVectorText_t& item; // 504
		}
	}
} /* size: 0 */

// <0312843E> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<Debug2DText_t>(CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			Debug2DText_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			Debug2DText_t& item; // 504
		}
	}
} /* size: 0 */

// <031283AE> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<Debug3DText_t>(CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			Debug3DText_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			Debug3DText_t& item; // 504
		}
	}
} /* size: 0 */

// <0312831E> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugTriangle3D_t>(CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugTriangle3D_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugTriangle3D_t& item; // 504
		}
	}
} /* size: 0 */

// <0312828E> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugTriangle2D_t>(CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugTriangle2D_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugTriangle2D_t& item; // 504
		}
	}
} /* size: 0 */

// <031281F8> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugCircle3D_t>(CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugCircle3D_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugCircle3D_t& item; // 504
		}
	}
} /* size: 0 */

// <03128168> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugCross3D_t>(CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugCross3D_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugCross3D_t& item; // 504
		}
	}
} /* size: 0 */

// <031280D8> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugTickMarkedLine3D_t>(CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugTickMarkedLine3D_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugTickMarkedLine3D_t& item; // 504
		}
	}
} /* size: 0 */

// <03128048> ../scenesystem/sceneviewdebugoverlays.h:473
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleList<DebugSceneObject_t>(CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 480
		{
			DebugSceneObject_t& item; // 482
		}
	}
	{
		int i; // 502
		{
			DebugSceneObject_t& item; // 504
		}
	}
} /* size: 0 */

// <031287A4> ../scenesystem/sceneviewdebugoverlays.h:524
// variables: 4
inline void CSceneViewDebugOverlays::AgeSingleListPreserveOrder<DebugTextBase_t>(CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >& list, SceneViewDebugOverlayTimingType_t type, float flDelta, float flAbsTime)
{
	{
		int i; // 531
		{
			DebugTextBase_t& item; // 533
		}
	}
	{
		int i; // 554
		{
			DebugTextBase_t& item; // 556
		}
	}
} /* size: 0 */

// <0318751F> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
// function calls: 42
void CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list, const CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime, const CSceneViewDebugOverlays::AddListToView<DebugSphere_t>()
{
	{
		int i; // 589
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 589
		{
			const DebugSphere_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugSphere_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 98
			DebugSphere_t::DebugSphere_t(
					const DebugSphere_t  &);  // 1520
			CopyConstruct<DebugSphere_t>(DebugSphere_t* pMemory,
							const DebugSphere_t& src);  // 1201
			CUtlMemory<DebugSphere_t, int>::Base(); // 112
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Base(); // 368
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::AddToTail(
					const DebugSphere_t& src);  // 601
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 1369
	CUtlMemory<DebugSphere_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugSphere_t, int>::Base(); // 112
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Base(); // 368
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugSphere_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugSphere_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 98
		DebugSphere_t::DebugSphere_t(
				const DebugSphere_t  &);  // 1520
		CopyConstruct<DebugSphere_t>(DebugSphere_t* pMemory,
						const DebugSphere_t& src);  // 1378
	}
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::AddVectorToTail<CUtlMemory<DebugSphere_t, int> >(
							const CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& src);  // 584
} /* size: 717, inline expansions: 9 (273 bytes) */

// <031868AE> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
// function calls: 42
void CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list, const CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime, const CSceneViewDebugOverlays::AddListToView<DebugTriangle3D_t>()
{
	{
		int i; // 589
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 589
		{
			const DebugTriangle3D_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugTriangle3D_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugTriangle3D_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 212
			DebugTriangle3D_t::DebugTriangle3D_t(
						const DebugTriangle3D_t  &);  // 1520
			CopyConstruct<DebugTriangle3D_t>(DebugTriangle3D_t* pMemory,
							const DebugTriangle3D_t& src);  // 1201
			CUtlMemory<DebugTriangle3D_t, int>::Base(); // 112
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Base(); // 368
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::AddToTail(
					const DebugTriangle3D_t& src);  // 601
			CUtlMemory<DebugTriangle3D_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 1369
	CUtlMemory<DebugTriangle3D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugTriangle3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugTriangle3D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugTriangle3D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 212
		DebugTriangle3D_t::DebugTriangle3D_t(
					const DebugTriangle3D_t  &);  // 1520
		CopyConstruct<DebugTriangle3D_t>(DebugTriangle3D_t* pMemory,
						const DebugTriangle3D_t& src);  // 1378
	}
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::AddVectorToTail<CUtlMemory<DebugTriangle3D_t, int> >(
								const CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& src);  // 584
} /* size: 731, inline expansions: 9 (281 bytes) */

// <031855E9> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
// function calls: 42
void CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list, const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime, const CSceneViewDebugOverlays::AddListToView<DebugLineSegment3D_t>()
{
	{
		int i; // 589
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 589
		{
			const DebugLineSegment3D_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugLineSegment3D_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugLineSegment3D_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 106
			DebugLineSegment3D_t::DebugLineSegment3D_t(
						const DebugLineSegment3D_t  &);  // 1520
			CopyConstruct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory,
								const DebugLineSegment3D_t& src);  // 1201
			CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 112
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 368
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddToTail(
					const DebugLineSegment3D_t& src);  // 601
			CUtlMemory<DebugLineSegment3D_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 1369
	CUtlMemory<DebugLineSegment3D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugLineSegment3D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugLineSegment3D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 106
		DebugLineSegment3D_t::DebugLineSegment3D_t(
					const DebugLineSegment3D_t  &);  // 1520
		CopyConstruct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory,
							const DebugLineSegment3D_t& src);  // 1378
	}
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddVectorToTail<CUtlMemory<DebugLineSegment3D_t, int> >(
								const CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& src);  // 584
} /* size: 715, inline expansions: 9 (267 bytes) */

// <03127FA9> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugLineSegment3D_t>(CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list, const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugLineSegment3D_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127F0A> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugLineSegment2D_t>(CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& list, const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugLineSegment2D_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127E6B> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugTextureDisplay_t>(CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& list, const CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugTextureDisplay_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127DCC> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<Debug3DVectorText_t>(CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& list, const CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const Debug3DVectorText_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127D2D> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<Debug2DText_t>(CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& list, const CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const Debug2DText_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127C8E> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<Debug3DText_t>(CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& list, const CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const Debug3DText_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127BEF> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugTriangle3D_t>(CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list, const CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugTriangle3D_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127B50> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugCircle3D_t>(CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& list, const CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugCircle3D_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127AB1> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugCross3D_t>(CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& list, const CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugCross3D_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127A12> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugTickMarkedLine3D_t>(CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& list, const CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugTickMarkedLine3D_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03127973> ../scenesystem/sceneviewdebugoverlays.h:577
// variables: 4
inline void CSceneViewDebugOverlays::AddListToView<DebugSphere_t>(CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list, const CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& srcList, SceneViewDebugOverlayTimingType_t type, float flAbsTime)
{
	ConVarRef debugoverlay_draw_currentRef; // 579
	{
		int i; // 589
		{
			const DebugSphere_t& item; // 591
			bool bHasNotAgedOut; // 593
		}
	}
} /* size: 0, variables: 1 */

// <03128DCE> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugLineSegment3D_t>(CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128D88> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugLineSegment2D_t>(CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128D42> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugTriangle3D_t>(CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128CFC> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugTriangle2D_t>(CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128CB6> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugTextureDisplay_t>(CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128C70> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<Debug3DVectorText_t>(CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128C2A> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<Debug2DText_t>(CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128BE4> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<Debug3DText_t>(CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128B9E> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugCircle3D_t>(CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128B58> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugCross3D_t>(CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128B12> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugTickMarkedLine3D_t>(CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */

// <03128ACC> ../scenesystem/sceneviewdebugoverlays.h:610
// variable: 1
inline void CSceneViewDebugOverlays::RemoveAllInScope<DebugSphere_t>(CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list, CUtlStringToken id)
{
	{
		int i; // 618
	}
} /* size: 0 */


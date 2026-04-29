
//
// public/materialsystem2/itextlayout.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 17
//	classes: 3
//	structs: 2
//

// <000FD40E> ../public/materialsystem2/itextlayout.h:49
// member functions: 28
// member variables: 14
// class size: 128
class CTextLayoutInfo {
	/* ../public/materialsystem2/itextlayout.h:53 */
	void CTextLayoutInfo(CTextLayoutInfo* );
	/* ../public/materialsystem2/itextlayout.h:54 */
	void ~CTextLayoutInfo(CTextLayoutInfo* );
	/* ../public/materialsystem2/itextlayout.h:55 */
	void CTextLayoutInfo(CTextLayoutInfo* , const CTextLayoutInfo& );
	/* ../public/materialsystem2/itextlayout.h:56 */
	CTextLayoutInfo& operator=(CTextLayoutInfo* , const CTextLayoutInfo& );
	/* ../public/materialsystem2/itextlayout.h:58 */
	void SetText(CTextLayoutInfo* , const char* );
	/* ../public/materialsystem2/itextlayout.h:62 */
	void SetText(CTextLayoutInfo* , const uchar16* );
	/* ../public/materialsystem2/itextlayout.h:66 */
	void SetText(CTextLayoutInfo* , const uchar32* );
	/* ../public/materialsystem2/itextlayout.h:75 */
	void SetTextAsUTF32(CTextLayoutInfo* , const char* );
	/* ../public/materialsystem2/itextlayout.h:79 */
	void SetTextAsUTF32(CTextLayoutInfo* , const uchar16* );
	/* ../public/materialsystem2/itextlayout.h:84 */
	const char* GetTextAsUTF8(const CTextLayoutInfo* );
	/* ../public/materialsystem2/itextlayout.h:88 */
	const uchar16* GetTextAsUTF16(const CTextLayoutInfo* );
	/* ../public/materialsystem2/itextlayout.h:92 */
	const uchar32* GetTextAsUTF32(const CTextLayoutInfo* );
	/* ../public/materialsystem2/itextlayout.h:97 */
	bool IsTextEmpty(const CTextLayoutInfo* );
	/* ../public/materialsystem2/itextlayout.h:102 */
	void SetColor(CTextLayoutInfo* , const Color& );
	Vector2D m_TextPos; /* 0 8 */
	LayoutPositionType_e m_PositionType; /* 8 4 */
	HorizJustification_e m_viewportHorizJust; /* 12 4 */
	VertJustification_e m_viewportVertJust; /* 16 4 */
	FontHandle_t m_FontID; /* 20 4 */
	bool m_bHorizGradient; /* 24 1 */
	Color m_TopColor; /* 25 4 */
	Color m_BottomColor; /* 29 4 */
	bool m_bAllCaps; /* 33 1 */
	HorizJustification_e m_HorizJust; /* 36 4 */
	bool m_bIsProportional; /* 40 1 */
	float m_flFontScaleFactor; /* 44 4 */
	matrix3x4_t m_RenderToScreen; /* 48 48 */
protected:
	CStrAutoEncode m_text; /* 96 32 */
	void CTextLayoutInfo(class CTextLayoutInfo *); /* linkage=_ZN15CTextLayoutInfoC4Ev */
	void ~CTextLayoutInfo(class CTextLayoutInfo *); /* linkage=_ZN15CTextLayoutInfoD4Ev */
	void CTextLayoutInfo(class CTextLayoutInfo *, const class CTextLayoutInfo  &); /* linkage=_ZN15CTextLayoutInfoC4ERKS_ */
	class CTextLayoutInfo & operator=(class CTextLayoutInfo *, const class CTextLayoutInfo  &); /* linkage=_ZN15CTextLayoutInfoaSERKS_ */
	void SetText(class CTextLayoutInfo *, const char  *); /* linkage=_ZN15CTextLayoutInfo7SetTextEPKc */
	void SetText(class CTextLayoutInfo *, const uchar16  *); /* linkage=_ZN15CTextLayoutInfo7SetTextEPKt */
	void SetText(class CTextLayoutInfo *, const uchar32  *); /* linkage=_ZN15CTextLayoutInfo7SetTextEPKw */
	void SetTextAsUTF32(class CTextLayoutInfo *, const char  *); /* linkage=_ZN15CTextLayoutInfo14SetTextAsUTF32EPKc */
	void SetTextAsUTF32(class CTextLayoutInfo *, const uchar16  *); /* linkage=_ZN15CTextLayoutInfo14SetTextAsUTF32EPKt */
	const char  * GetTextAsUTF8(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo13GetTextAsUTF8Ev */
	const uchar16  * GetTextAsUTF16(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo14GetTextAsUTF16Ev */
	const uchar32  * GetTextAsUTF32(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo14GetTextAsUTF32Ev */
	bool IsTextEmpty(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo11IsTextEmptyEv */
	void SetColor(class CTextLayoutInfo *, const class Color  &); /* linkage=_ZN15CTextLayoutInfo8SetColorERK5Color */
};

// <058D50C0> ../../public/materialsystem2/itextlayout.h:49
// member functions: 28
// member variables: 14
// class size: 128
class CTextLayoutInfo {
	/* ../../public/materialsystem2/itextlayout.h:53 */
	void CTextLayoutInfo(CTextLayoutInfo* );
	/* ../../public/materialsystem2/itextlayout.h:54 */
	void ~CTextLayoutInfo(CTextLayoutInfo* );
	/* ../../public/materialsystem2/itextlayout.h:55 */
	void CTextLayoutInfo(CTextLayoutInfo* , const CTextLayoutInfo& );
	/* ../../public/materialsystem2/itextlayout.h:56 */
	CTextLayoutInfo& operator=(CTextLayoutInfo* , const CTextLayoutInfo& );
	/* ../../public/materialsystem2/itextlayout.h:58 */
	void SetText(CTextLayoutInfo* , const char* );
	/* ../../public/materialsystem2/itextlayout.h:62 */
	void SetText(CTextLayoutInfo* , const uchar16* );
	/* ../../public/materialsystem2/itextlayout.h:66 */
	void SetText(CTextLayoutInfo* , const uchar32* );
	/* ../../public/materialsystem2/itextlayout.h:75 */
	void SetTextAsUTF32(CTextLayoutInfo* , const char* );
	/* ../../public/materialsystem2/itextlayout.h:79 */
	void SetTextAsUTF32(CTextLayoutInfo* , const uchar16* );
	/* ../../public/materialsystem2/itextlayout.h:84 */
	const char* GetTextAsUTF8(const CTextLayoutInfo* );
	/* ../../public/materialsystem2/itextlayout.h:88 */
	const uchar16* GetTextAsUTF16(const CTextLayoutInfo* );
	/* ../../public/materialsystem2/itextlayout.h:92 */
	const uchar32* GetTextAsUTF32(const CTextLayoutInfo* );
	/* ../../public/materialsystem2/itextlayout.h:97 */
	bool IsTextEmpty(const CTextLayoutInfo* );
	/* ../../public/materialsystem2/itextlayout.h:102 */
	void SetColor(CTextLayoutInfo* , const Color& );
	Vector2D m_TextPos; /* 0 8 */
	LayoutPositionType_e m_PositionType; /* 8 4 */
	HorizJustification_e m_viewportHorizJust; /* 12 4 */
	VertJustification_e m_viewportVertJust; /* 16 4 */
	FontHandle_t m_FontID; /* 20 4 */
	bool m_bHorizGradient; /* 24 1 */
	Color m_TopColor; /* 25 4 */
	Color m_BottomColor; /* 29 4 */
	bool m_bAllCaps; /* 33 1 */
	HorizJustification_e m_HorizJust; /* 36 4 */
	bool m_bIsProportional; /* 40 1 */
	float m_flFontScaleFactor; /* 44 4 */
	matrix3x4_t m_RenderToScreen; /* 48 48 */
protected:
	CStrAutoEncode m_text; /* 96 32 */
	void CTextLayoutInfo(class CTextLayoutInfo *); /* linkage=_ZN15CTextLayoutInfoC4Ev */
	void ~CTextLayoutInfo(class CTextLayoutInfo *); /* linkage=_ZN15CTextLayoutInfoD4Ev */
	void CTextLayoutInfo(class CTextLayoutInfo *, const class CTextLayoutInfo  &); /* linkage=_ZN15CTextLayoutInfoC4ERKS_ */
	class CTextLayoutInfo & operator=(class CTextLayoutInfo *, const class CTextLayoutInfo  &); /* linkage=_ZN15CTextLayoutInfoaSERKS_ */
	void SetText(class CTextLayoutInfo *, const char  *); /* linkage=_ZN15CTextLayoutInfo7SetTextEPKc */
	void SetText(class CTextLayoutInfo *, const uchar16  *); /* linkage=_ZN15CTextLayoutInfo7SetTextEPKt */
	void SetText(class CTextLayoutInfo *, const uchar32  *); /* linkage=_ZN15CTextLayoutInfo7SetTextEPKw */
	void SetTextAsUTF32(class CTextLayoutInfo *, const char  *); /* linkage=_ZN15CTextLayoutInfo14SetTextAsUTF32EPKc */
	void SetTextAsUTF32(class CTextLayoutInfo *, const uchar16  *); /* linkage=_ZN15CTextLayoutInfo14SetTextAsUTF32EPKt */
	const char  * GetTextAsUTF8(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo13GetTextAsUTF8Ev */
	const uchar16  * GetTextAsUTF16(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo14GetTextAsUTF16Ev */
	const uchar32  * GetTextAsUTF32(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo14GetTextAsUTF32Ev */
	bool IsTextEmpty(const class CTextLayoutInfo  *); /* linkage=_ZNK15CTextLayoutInfo11IsTextEmptyEv */
	void SetColor(class CTextLayoutInfo *, const class Color  &); /* linkage=_ZN15CTextLayoutInfo8SetColorERK5Color */
};

// <0317CF0E> ../public/materialsystem2/itextlayout.h:58
inline void CTextLayoutInfo::SetText(const char* pText)
{
} /* size: 0 */

// <0049EA4F> ../public/materialsystem2/itextlayout.h:62
inline void CTextLayoutInfo::SetText(const uchar16* pText)
{
} /* size: 0 */

// <005F3BF3> ../public/materialsystem2/itextlayout.h:66
inline void CTextLayoutInfo::SetText(const uchar32* pText)
{
} /* size: 0 */

// <005F3BCE> ../public/materialsystem2/itextlayout.h:75
inline void CTextLayoutInfo::SetTextAsUTF32(const char* pText)
{
} /* size: 0 */

// <005F3BA9> ../public/materialsystem2/itextlayout.h:79
inline void CTextLayoutInfo::SetTextAsUTF32(const uchar16* pText)
{
} /* size: 0 */

// <005F3B90> ../public/materialsystem2/itextlayout.h:92
inline void CTextLayoutInfo::GetTextAsUTF32()
{
} /* size: 0 */

// <005F3B77> ../public/materialsystem2/itextlayout.h:97
inline void CTextLayoutInfo::IsTextEmpty()
{
} /* size: 0 */

// <005ED002> ../public/materialsystem2/itextlayout.h:131
void CCharRenderGeometry::CCharRenderGeometry()
{
} /* size: 0 */

// <005ECFE6> ../public/materialsystem2/itextlayout.h:131
inline void CCharRenderGeometry::CCharRenderGeometry()
{
} /* size: 0 */

// <000FD702> ../public/materialsystem2/itextlayout.h:131
// member variables: 4
// struct size: 100
struct CCharRenderGeometry {
	Vector m_Positions[4]; /* 0 48 */
	Vector2D m_TextureCoords[4]; /* 48 32 */
	Color m_VertexColors[4]; /* 80 16 */
	FontTextureHandle_t m_FontTextureID; /* 96 4 */
};

// <005D9CD8> ../public/materialsystem2/itextlayout.h:143
// member variables: 13
// struct size: 64
struct CharRenderInfo {
	float x; /* 0 4 */
	float y; /* 4 4 */
	FontVertex_t * verts; /* 8 8 */
	FontTextureHandle_t textureId; /* 16 4 */
	float * pTexCoords; /* 24 8 */
	float abcA; /* 32 4 */
	float abcB; /* 36 4 */
	float abcC; /* 40 4 */
	float fontTall; /* 44 4 */
	FontHandle_t currentFont; /* 48 4 */
	FontDrawType_t drawType; /* 52 4 */
	uchar32 uniChar; /* 56 4 */
	bool valid; /* 60 1 */
};

// <005ED583> ../public/materialsystem2/itextlayout.h:170
void ITextLayout::ITextLayout()
{
} /* size: 0 */

// <005ED567> ../public/materialsystem2/itextlayout.h:170
inline void ITextLayout::ITextLayout()
{
} /* size: 0 */

// <005BD10B> ../public/materialsystem2/itextlayout.h:170
// member functions: 26
// member variable: 1
// vtable entries: 9
// class size: 8
class ITextLayout : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ITextLayout(ITextLayout* , ITextLayout& );
	void ITextLayout(ITextLayout* , const ITextLayout& );
	void ITextLayout(ITextLayout* );
	void ~ITextLayout(ITextLayout* );
	/* ../public/materialsystem2/itextlayout.h:173 */
	virtual Vector2D SetupPrintTextRenderGeometry(ITextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const char* , const Vector2D& , Color, FontHandle_t);
	/* ../public/materialsystem2/itextlayout.h:174 */
	virtual Vector2D SetupPrintTextRenderGeometry(ITextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar16* , const Vector2D& , Color, FontHandle_t);
	/* ../public/materialsystem2/itextlayout.h:175 */
	virtual Vector2D SetupPrintTextRenderGeometry(ITextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar32* , const Vector2D& , Color, FontHandle_t);
	/* ../public/materialsystem2/itextlayout.h:178 */
	virtual void UpdateTextRenderGeometryColor(ITextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, Color);
	/* ../public/materialsystem2/itextlayout.h:181 */
	virtual Vector2D SetupTextLayoutRenderGeometry(ITextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, CTextLayoutInfo* , const RenderViewport_t* , float);
	/* ../public/materialsystem2/itextlayout.h:185 */
	virtual bool RenderTextGeometry(ITextLayout* , IRenderContext* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const Vector2D& , const CRenderAttributes* );
	/* ../public/materialsystem2/itextlayout.h:188 */
	virtual void GetBounds(ITextLayout* , IRenderContext* , CTextLayoutInfo* , Vector2D* , Vector2D* );
	/* ../public/materialsystem2/itextlayout.h:191 */
	virtual void GetWBounds(ITextLayout* , CTextLayoutInfo* , Vector2D* , Vector2D* );
	/* ../public/materialsystem2/itextlayout.h:194 */
	virtual Vector2D GetWSize(ITextLayout* , CTextLayoutInfo* );
	void ITextLayout(class ITextLayout *, class ITextLayout &); /* linkage=_ZN11ITextLayoutC4EOS_ */
	void ITextLayout(class ITextLayout *, const class ITextLayout  &); /* linkage=_ZN11ITextLayoutC4ERKS_ */
	void ITextLayout(class ITextLayout *); /* linkage=_ZN11ITextLayoutC4Ev */
	void ~ITextLayout(class ITextLayout *); /* linkage=_ZN11ITextLayoutD4Ev */
	virtual class Vector2D SetupPrintTextRenderGeometry(class ITextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const char  *, const class Vector2D  &, class Color, FontHandle_t); /* linkage=_ZN11ITextLayout28SetupPrintTextRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEPKcRK8Vector2D5Colorj */
	virtual class Vector2D SetupPrintTextRenderGeometry(class ITextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar16  *, const class Vector2D  &, class Color, FontHandle_t); /* linkage=_ZN11ITextLayout28SetupPrintTextRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEPKtRK8Vector2D5Colorj */
	virtual class Vector2D SetupPrintTextRenderGeometry(class ITextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar32  *, const class Vector2D  &, class Color, FontHandle_t); /* linkage=_ZN11ITextLayout28SetupPrintTextRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEPKwRK8Vector2D5Colorj */
	virtual void UpdateTextRenderGeometryColor(class ITextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, class Color); /* linkage=_ZN11ITextLayout29UpdateTextRenderGeometryColorEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEE5Color */
	virtual class Vector2D SetupTextLayoutRenderGeometry(class ITextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, class CTextLayoutInfo *, const class RenderViewport_t  *, float); /* linkage=_ZN11ITextLayout29SetupTextLayoutRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEP15CTextLayoutInfoPK16RenderViewport_tf */
	virtual bool RenderTextGeometry(class ITextLayout *, class IRenderContext *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const class Vector2D  &, const class CRenderAttributes  *); /* linkage=_ZN11ITextLayout18RenderTextGeometryEP14IRenderContextR10CUtlVectorIS2_I19CCharRenderGeometry10CUtlMemoryIS3_iEES4_IS6_iEERK8Vector2DPK17CRenderAttributes */
	virtual void GetBounds(class ITextLayout *, class IRenderContext *, class CTextLayoutInfo *, class Vector2D *, class Vector2D *); /* linkage=_ZN11ITextLayout9GetBoundsEP14IRenderContextP15CTextLayoutInfoP8Vector2DS5_ */
	virtual void GetWBounds(class ITextLayout *, class CTextLayoutInfo *, class Vector2D *, class Vector2D *); /* linkage=_ZN11ITextLayout10GetWBoundsEP15CTextLayoutInfoP8Vector2DS3_ */
	virtual class Vector2D GetWSize(class ITextLayout *, class CTextLayoutInfo *); /* linkage=_ZN11ITextLayout8GetWSizeEP15CTextLayoutInfo */
};

// <0317CEF7> ../public/materialsystem2/itextlayout.h:203
void CTextLayoutInfo::CTextLayoutInfo()
{
} /* size: 0 */

// <0317CEDB> ../public/materialsystem2/itextlayout.h:203
inline void CTextLayoutInfo::CTextLayoutInfo()
{
} /* size: 0 */

// <06E2A105> ../../public/materialsystem2/itextlayout.h:223
void CTextLayoutInfo::~CTextLayoutInfo()
{
} /* size: 0 */

// <06E2A0E9> ../../public/materialsystem2/itextlayout.h:223
inline void CTextLayoutInfo::~CTextLayoutInfo()
{
} /* size: 0 */

// <02FC4647> ../public/materialsystem2/itextlayout.h:248
inline void CTextLayoutInfo::operator=(const CTextLayoutInfo& info)
{
} /* size: 0 */

// <0317CE7F> ../public/materialsystem2/itextlayout.h:267
inline void CTextLayoutInfo::SetColor(const Color& drawColor)
{
} /* size: 0 */


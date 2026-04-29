
//
// textlayout/textlayout.h
//
//	referenced by: libmaterialsystem2.so
//
//	class: 1
//

// <005E4E3D> textlayout/textlayout.h:17
// member functions: 64
// member variable: 1
// vtable entries: 12
// class size: 48
class CTextLayout : public CTier2AppSystem<ITextLayout, 0> {
public:
	/* class CTier2AppSystem<ITextLayout, 0> <ancestor>; */ /* 0 48 */
	void CTextLayout(CTextLayout* , const CTextLayout& );
	/* textlayout/textlayout.cpp:92 */
	virtual InitReturnVal_t Init(CTextLayout* );
	/* textlayout/textlayout.cpp:102 */
	virtual void Shutdown(CTextLayout* );
	/* textlayout/textlayout.cpp:83 */
	virtual const AppSystemInfo_t* GetDependencies(CTextLayout* );
	/* textlayout/textlayout.cpp:110 */
	virtual Vector2D SetupPrintTextRenderGeometry(CTextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const char* , const Vector2D& , Color, FontHandle_t);
	/* textlayout/textlayout.cpp:130 */
	virtual Vector2D SetupPrintTextRenderGeometry(CTextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar16* , const Vector2D& , Color, FontHandle_t);
	/* textlayout/textlayout.cpp:150 */
	virtual Vector2D SetupPrintTextRenderGeometry(CTextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar32* , const Vector2D& , Color, FontHandle_t);
	/* textlayout/textlayout.cpp:167 */
	virtual void UpdateTextRenderGeometryColor(CTextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, Color);
	/* textlayout/textlayout.cpp:436 */
	virtual Vector2D SetupTextLayoutRenderGeometry(CTextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, CTextLayoutInfo* , const RenderViewport_t* , float);
	/* textlayout/textlayout.cpp:735 */
	virtual bool RenderTextGeometry(CTextLayout* , IRenderContext* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const Vector2D& , const CRenderAttributes* );
	/* textlayout/textlayout.cpp:747 */
	virtual void GetBounds(CTextLayout* , IRenderContext* , CTextLayoutInfo* , Vector2D* , Vector2D* );
	/* textlayout/textlayout.cpp:243 */
	virtual void GetWBounds(CTextLayout* , CTextLayoutInfo* , Vector2D* , Vector2D* );
	/* textlayout/textlayout.cpp:258 */
	virtual Vector2D GetWSize(CTextLayout* , CTextLayoutInfo* );
	/* textlayout/textlayout.cpp:64 */
	void CTextLayout(CTextLayout* );
	/* textlayout/textlayout.cpp:68 */
	virtual void ~CTextLayout(CTextLayout* );
	/* textlayout/textlayout.cpp:715 */
	Vector2D RenderLayoutText(CTextLayout* , IRenderContext* , CTextLayoutInfo* , const CRenderAttributes* );
	/* textlayout/textlayout.cpp:982 */
	void CacheFontTextures(CTextLayout* , const CTextLayoutInfo* );
	/* textlayout/textlayout.cpp:185 */
	Vector2D GetRawSize(CTextLayout* , CTextLayoutInfo* , const RenderViewport_t* , float);
	/* textlayout/textlayout.h:62 */
	uchar32* ConvertTextToUTF32(CTextLayout* , const char* );
	/* textlayout/textlayout.h:63 */
	uchar32* ConvertTextToUTF32(CTextLayout* , const uchar16* );
private:
	/* textlayout/textlayout.cpp:495 */
	Vector2D SetupTextLayoutRenderData(CTextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, CTextLayoutInfo* , int* , const Vector2D& , const RenderViewport_t* , float);
	/* textlayout/textlayout.cpp:326 */
	Vector2D ViewportAnchorPosition(CTextLayout* , const Vector2D& , CTextLayoutInfo* , const RenderViewport_t* );
	/* textlayout/textlayout.cpp:420 */
	Vector2D ViewportUnAnchorPosition(CTextLayout* , const Vector2D& , CTextLayoutInfo* , const RenderViewport_t* );
	/* textlayout/textlayout.cpp:875 */
	HRenderTexture GetTextureForChar(CTextLayout* , CharRenderInfo* );
	/* textlayout/textlayout.cpp:791 */
	CCharRenderGeometry* GetCharGeometryEntry(CTextLayout* , CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, int);
	/* textlayout/textlayout.cpp:892 */
	float GetTextRenderWidth(CTextLayout* , const CTextLayoutInfo& , int);
	/* textlayout/textlayout.cpp:930 */
	void GetStartingOffset(CTextLayout* , float& , float& , const CTextLayoutInfo& , int);
	/* textlayout/textlayout.cpp:678 */
	Color GetVertexColor(CTextLayout* , int, int, float, const CTextLayoutInfo& );
	/* textlayout/textlayout.cpp:825 */
	bool GetUnicodeCharRenderPositions(CTextLayout* , const CTextLayoutInfo& , CharRenderInfo& , Vector2D* );
	/* textlayout/textlayout.cpp:956 */
	float GetFontTall(CTextLayout* , const CTextLayoutInfo& );
	/* textlayout/textlayout.cpp:963 */
	float GetCharacterWidth(CTextLayout* , const CTextLayoutInfo& , int);
	/* textlayout/textlayout.cpp:969 */
	void GetCharABCwide(CTextLayout* , const CTextLayoutInfo& , int, float* , float* , float* );
	void CTextLayout(class CTextLayout *, const class CTextLayout  &); /* linkage=_ZN11CTextLayoutC4ERKS_ */
	virtual enum InitReturnVal_t Init(class CTextLayout *); /* linkage=_ZN11CTextLayout4InitEv */
	virtual void Shutdown(class CTextLayout *); /* linkage=_ZN11CTextLayout8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CTextLayout *); /* linkage=_ZN11CTextLayout15GetDependenciesEv */
	virtual class Vector2D SetupPrintTextRenderGeometry(class CTextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const char  *, const class Vector2D  &, class Color, FontHandle_t); /* linkage=_ZN11CTextLayout28SetupPrintTextRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEPKcRK8Vector2D5Colorj */
	virtual class Vector2D SetupPrintTextRenderGeometry(class CTextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar16  *, const class Vector2D  &, class Color, FontHandle_t); /* linkage=_ZN11CTextLayout28SetupPrintTextRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEPKtRK8Vector2D5Colorj */
	virtual class Vector2D SetupPrintTextRenderGeometry(class CTextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const uchar32  *, const class Vector2D  &, class Color, FontHandle_t); /* linkage=_ZN11CTextLayout28SetupPrintTextRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEPKwRK8Vector2D5Colorj */
	virtual void UpdateTextRenderGeometryColor(class CTextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, class Color); /* linkage=_ZN11CTextLayout29UpdateTextRenderGeometryColorEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEE5Color */
	virtual class Vector2D SetupTextLayoutRenderGeometry(class CTextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, class CTextLayoutInfo *, const class RenderViewport_t  *, float); /* linkage=_ZN11CTextLayout29SetupTextLayoutRenderGeometryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEP15CTextLayoutInfoPK16RenderViewport_tf */
	/* <5f44f4> textlayout/textlayout.cpp:735 */
	virtual bool RenderTextGeometry(class CTextLayout *, class IRenderContext *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, const class Vector2D  &, const class CRenderAttributes  *); /* linkage=_ZN11CTextLayout18RenderTextGeometryEP14IRenderContextR10CUtlVectorIS2_I19CCharRenderGeometry10CUtlMemoryIS3_iEES4_IS6_iEERK8Vector2DPK17CRenderAttributes */
	virtual void GetBounds(class CTextLayout *, class IRenderContext *, class CTextLayoutInfo *, class Vector2D *, class Vector2D *); /* linkage=_ZN11CTextLayout9GetBoundsEP14IRenderContextP15CTextLayoutInfoP8Vector2DS5_ */
	virtual void GetWBounds(class CTextLayout *, class CTextLayoutInfo *, class Vector2D *, class Vector2D *); /* linkage=_ZN11CTextLayout10GetWBoundsEP15CTextLayoutInfoP8Vector2DS3_ */
	virtual class Vector2D GetWSize(class CTextLayout *, class CTextLayoutInfo *); /* linkage=_ZN11CTextLayout8GetWSizeEP15CTextLayoutInfo */
	void CTextLayout(class CTextLayout *); /* linkage=_ZN11CTextLayoutC4Ev */
	virtual void ~CTextLayout(class CTextLayout *); /* linkage=_ZN11CTextLayoutD4Ev */
	class Vector2D RenderLayoutText(class CTextLayout *, class IRenderContext *, class CTextLayoutInfo *, const class CRenderAttributes  *); /* linkage=_ZN11CTextLayout16RenderLayoutTextEP14IRenderContextP15CTextLayoutInfoPK17CRenderAttributes */
	void CacheFontTextures(class CTextLayout *, const class CTextLayoutInfo  *); /* linkage=_ZN11CTextLayout17CacheFontTexturesEPK15CTextLayoutInfo */
	class Vector2D GetRawSize(class CTextLayout *, class CTextLayoutInfo *, const class RenderViewport_t  *, float); /* linkage=_ZN11CTextLayout10GetRawSizeEP15CTextLayoutInfoPK16RenderViewport_tf */
	uchar32 * ConvertTextToUTF32(class CTextLayout *, const char  *); /* linkage=_ZN11CTextLayout18ConvertTextToUTF32EPKc */
	uchar32 * ConvertTextToUTF32(class CTextLayout *, const uchar16  *); /* linkage=_ZN11CTextLayout18ConvertTextToUTF32EPKt */
	class Vector2D SetupTextLayoutRenderData(class CTextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, class CTextLayoutInfo *, int *, const class Vector2D  &, const class RenderViewport_t  *, float); /* linkage=_ZN11CTextLayout25SetupTextLayoutRenderDataEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEP15CTextLayoutInfoPiRK8Vector2DPK16RenderViewport_tf */
	class Vector2D ViewportAnchorPosition(class CTextLayout *, const class Vector2D  &, class CTextLayoutInfo *, const class RenderViewport_t  *); /* linkage=_ZN11CTextLayout22ViewportAnchorPositionERK8Vector2DP15CTextLayoutInfoPK16RenderViewport_t */
	class Vector2D ViewportUnAnchorPosition(class CTextLayout *, const class Vector2D  &, class CTextLayoutInfo *, const class RenderViewport_t  *); /* linkage=_ZN11CTextLayout24ViewportUnAnchorPositionERK8Vector2DP15CTextLayoutInfoPK16RenderViewport_t */
	HRenderTexture GetTextureForChar(class CTextLayout *, class CharRenderInfo *); /* linkage=_ZN11CTextLayout17GetTextureForCharEP14CharRenderInfo */
	class CCharRenderGeometry * GetCharGeometryEntry(class CTextLayout *, class CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome, int); /* linkage=_ZN11CTextLayout20GetCharGeometryEntryEP10CUtlVectorIS0_I19CCharRenderGeometry10CUtlMemoryIS1_iEES2_IS4_iEEi */
	float GetTextRenderWidth(class CTextLayout *, const class CTextLayoutInfo  &, int); /* linkage=_ZN11CTextLayout18GetTextRenderWidthERK15CTextLayoutInfoi */
	void GetStartingOffset(class CTextLayout *, float &, float &, const class CTextLayoutInfo  &, int); /* linkage=_ZN11CTextLayout17GetStartingOffsetERfS0_RK15CTextLayoutInfoi */
	/* <5f466a> textlayout/textlayout.cpp:678 */
	class Color GetVertexColor(class CTextLayout *, int, int, float, const class CTextLayoutInfo  &); /* linkage=_ZN11CTextLayout14GetVertexColorEiifRK15CTextLayoutInfo */
	/* <5f4a7b> textlayout/textlayout.cpp:825 */
	bool GetUnicodeCharRenderPositions(class CTextLayout *, const class CTextLayoutInfo  &, class CharRenderInfo &, class Vector2D *); /* linkage=_ZN11CTextLayout29GetUnicodeCharRenderPositionsERK15CTextLayoutInfoR14CharRenderInfoP8Vector2D */
	/* <5f47ef> textlayout/textlayout.cpp:956 */
	float GetFontTall(class CTextLayout *, const class CTextLayoutInfo  &); /* linkage=_ZN11CTextLayout11GetFontTallERK15CTextLayoutInfo */
	/* <5f483a> textlayout/textlayout.cpp:963 */
	float GetCharacterWidth(class CTextLayout *, const class CTextLayoutInfo  &, int); /* linkage=_ZN11CTextLayout17GetCharacterWidthERK15CTextLayoutInfoi */
	void GetCharABCwide(class CTextLayout *, const class CTextLayoutInfo  &, int, float *, float *, float *); /* linkage=_ZN11CTextLayout14GetCharABCwideERK15CTextLayoutInfoiPfS3_S3_ */
};


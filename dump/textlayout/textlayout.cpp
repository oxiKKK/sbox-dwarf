
//
// textlayout/textlayout.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 37
//	struct: 1
//

// <005F3ACC> textlayout/textlayout.cpp:21
void* __CreateCTextLayoutITextLayout_interface(void)
{
} /* size: 12 */

// <005E5A19> textlayout/textlayout.cpp:29
// member variables: 3
// struct size: 24
struct MaterialUtilsVertex_t {
	Vector m_vecPosition; /* 0 12 */
	VertexColor_t m_color; /* 12 4 */
	Vector2D m_vecTexCoord; /* 16 8 */
};

// <005F3A68> textlayout/textlayout.cpp:47
void ColorLerp(const Color& topColor, const Color& bottomColor, float t, Color& dest)
{
} /* size: 169 */

// <005F37B1> textlayout/textlayout.cpp:64
// function calls: 11
void CTextLayout::CTextLayout()
{
	IAppSystem::IAppSystem(); // 170
	ITextLayout::ITextLayout(); // 120
	CBaseAppSystem<ITextLayout>::CBaseAppSystem(); // 171
	CTier0AppSystem<ITextLayout, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<ITextLayout, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<ITextLayout, 0>::CTier2AppSystem(); // 64
} /* size: 0, inline expansions: 11 (0 bytes) */

// <005F3798> textlayout/textlayout.cpp:64
void CTextLayout::CTextLayout()
{
} /* size: 0 */

// <005F3603> textlayout/textlayout.cpp:68
// function calls: 8
void CTextLayout::~CTextLayout()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<ITextLayout, 0>::~CTier2AppSystem(); // 70
} /* size: 49, inline expansions: 8 (198 bytes) */

// <005F3397> textlayout/textlayout.cpp:68
// function calls: 12
void CTextLayout::~CTextLayout()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	ValidateAlignment<ResourceManifestDesc_t*>(void); // 508
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 510
	CUtlMemory<ResourceManifestDesc_t::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<ITextLayout, 0>::~CTier2AppSystem(); // 70
	CTextLayout::~CTextLayout(); // 70
} /* size: 93, inline expansions: 12 (242 bytes) */

// <005F337E> textlayout/textlayout.cpp:68
void CTextLayout::~CTextLayout()
{
} /* size: 0 */

// <005F3350> textlayout/textlayout.cpp:83
void CTextLayout::GetDependencies()
{
} /* size: 12 */

// <005F328F> textlayout/textlayout.cpp:92
// variable: 1
// function calls: 2
void CTextLayout::Init()
{
	InitReturnVal_t nRetVal; // 94
	CTier0AppSystem<ITextLayout, 0>::Init(); // 71
	CTier2AppSystem<ITextLayout, 0>::Init(); // 94
} /* size: 42, variables: 1, inline expansions: 2 (44 bytes) */

// <005F31EC> textlayout/textlayout.cpp:102
// function calls: 2
void CTextLayout::Shutdown()
{
	CTier0AppSystem<ITextLayout, 0>::Shutdown(); // 85
	CTier2AppSystem<ITextLayout, 0>::Shutdown(); // 104
} /* size: 33, inline expansions: 2 (56 bytes) */

// <005F2C7F> textlayout/textlayout.cpp:110
// variable: 1
// function calls: 15
void CTextLayout::SetupPrintTextRenderGeometry(CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists, const char* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID)
{
	CTextLayoutInfo textInfo; // 113
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 113
	CTextLayoutInfo::SetTextAsUTF32(
			const char* pText);  // 114
	Vector2D::operator=(
			const Vector2D& vOther);  // 115
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 121
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 124
} /* size: 393, variables: 1, inline expansions: 15 (270 bytes) */

// <005F2712> textlayout/textlayout.cpp:130
// variable: 1
// function calls: 15
void CTextLayout::SetupPrintTextRenderGeometry(CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists, const uchar16* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID)
{
	CTextLayoutInfo textInfo; // 133
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 133
	CTextLayoutInfo::SetTextAsUTF32(
			const uchar16* pText);  // 134
	Vector2D::operator=(
			const Vector2D& vOther);  // 135
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 141
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 144
} /* size: 393, variables: 1, inline expansions: 15 (270 bytes) */

// <005F219F> textlayout/textlayout.cpp:150
// variable: 1
// function calls: 15
void CTextLayout::SetupPrintTextRenderGeometry(CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists, const uchar32* pText, const Vector2D& textPos, Color drawColor, FontHandle_t fontID)
{
	CTextLayoutInfo textInfo; // 153
	CStrAutoEncode::Set(
		const char* pch);  // 479
	CStrAutoEncode::CStrAutoEncode(
			const char* pch);  // 204
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 205
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 211
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 212
	matrix3x4_t::matrix3x4_t(); // 216
	CTextLayoutInfo::CTextLayoutInfo(); // 153
	CTextLayoutInfo::SetText(
		const uchar32* pText);  // 154
	Vector2D::operator=(
			const Vector2D& vOther);  // 155
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 161
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 164
} /* size: 393, variables: 1, inline expansions: 15 (275 bytes) */

// <005F1EE1> textlayout/textlayout.cpp:167
// variables: 5
// function calls: 9
void CTextLayout::UpdateTextRenderGeometryColor(CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists, Color c)
{
	{
		int listIndex; // 169
		{
			CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >& textGeo; // 171
			{
				int i; // 172
				{
					CCharRenderGeometry& charGeo; // 174
					{
						int j; // 175
						Color::GetRawColor(); // 147
						Color::SetRawColor(
								int32 Color);  // 147
						Color::operator=(
								const Color& rhs);  // 177
					}
					CUtlMemory<CCharRenderGeometry, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
							int i);  // 174
				}
				CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Count(); // 172
			}
			CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
					int i);  // 171
		}
		Count(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector< this); // 169
	}
} /* size: 96 */

// <005F16EE> textlayout/textlayout.cpp:185
// variables: 17
// function calls: 24
void CTextLayout::GetRawSize(CTextLayoutInfo* pTextLayoutInfo, const RenderViewport_t* pViewport, float proportionalBaseHeight)
{
	const char   __FUNCTION__; // 55684
	Vector2D rawSize; // 189
	const uchar32* pUnicodeText; // 201
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> > renderGeometryLists; // 205
	int currentIndex; // 206
	Vector2D testPos; // 207
	float fulltextHeight; // 214
	float minX; // 218
	float maxX; // 219
	float fulltextWidth; // 237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 187
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 188
	}
	{
		int listIndex; // 220
		{
			const CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >& renderGeometry; // 222
			{
				int j; // 223
				{
					int k; // 225
					{
						float posX; // 227
						CUtlMemory<CCharRenderGeometry, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
								int i);  // 227
					}
				}
				CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Count(); // 223
			}
		}
	}
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 189
	CStrAutoEncode::IsEmpty(); // 99
	CTextLayoutInfo::IsTextEmpty(); // 196
	CStrAutoEncode::ToUTF32(); // 94
	CTextLayoutInfo::GetTextAsUTF32(); // 201
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 205
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 207
	Vector2D::operator=(
			const Vector2D& vOther);  // 210
	CTextLayout::GetFontTall(
			const CTextLayoutInfo& textLayoutInfo);  // 214
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 241
} /* size: 0, variables: 10, inline expansions: 21 (523 bytes) */

// <005F1627> textlayout/textlayout.cpp:243
// variables: 2
void CTextLayout::GetWBounds(CTextLayoutInfo* pTextLayoutInfo, Vector2D* pMins, Vector2D* pMaxs)
{
	Vector2D size; // 245
	float lineHeight; // 247
} /* size: 220, variables: 2 */

// <005F1359> textlayout/textlayout.cpp:258
// variables: 11
// function calls: 5
void CTextLayout::GetWSize(CTextLayoutInfo* pTextLayoutInfo)
{
	const char   __FUNCTION__; // 55635
	Vector2D rawSize; // 261
	const uchar32* pUnicodeText; // 268
	float charWidth; // 277
	int x; // 279
	int y; // 279
	int nMaxWidth; // 280
	float lineHeight; // 313
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 260
	}
	{
		int i; // 281
		{
			uchar32 uniChar; // 283
		}
	}
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 261
	CStrAutoEncode::ToUTF32(); // 94
	CTextLayoutInfo::GetTextAsUTF32(); // 268
	CTextLayout::GetCharacterWidth(
				const CTextLayoutInfo& textLayoutInfo,
				int ch);  // 277
	CTextLayout::GetFontTall(
			const CTextLayoutInfo& textLayoutInfo);  // 313
} /* size: 0, variables: 8, inline expansions: 5 (119 bytes) */

// <005F116E> textlayout/textlayout.cpp:326
// variables: 7
// function calls: 2
void CTextLayout::ViewportAnchorPosition(const Vector2D& rawSize, CTextLayoutInfo* pTextLayoutInfo, const RenderViewport_t* pViewport)
{
	const char   __FUNCTION__; // 55958
	Vector2D curPos; // 331
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 329
	}
	{
		int viewportX; // 359
	}
	{
		int viewportX; // 376
	}
	{
		int viewportX; // 393
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 331
	CTextLayout::GetFontTall(
			const CTextLayoutInfo& textLayoutInfo);  // 341
} /* size: 0, variables: 2, inline expansions: 2 (55 bytes) */

// <005F1024> textlayout/textlayout.cpp:420
// variables: 4
// function call: 1
void CTextLayout::ViewportUnAnchorPosition(const Vector2D& pos, CTextLayoutInfo* pTextLayoutInfo, const RenderViewport_t* pViewport)
{
	const char   __FUNCTION__; // 56007
	Vector2D truePos; // 425
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
	}
	Vector2D::Vector2D(); // 425
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <005F0BD8> textlayout/textlayout.cpp:436
// variables: 4
// function calls: 10
void CTextLayout::SetupTextLayoutRenderGeometry(CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists, CTextLayoutInfo* pTextLayoutInfo, const RenderViewport_t* pViewport, float proportionalBaseHeight)
{
	Vector2D curPos; // 439
	int currentIndex; // 470
	const uchar32* pUnicodeText; // 471
	{
		Vector2D rawSize; // 458
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 458
		Vector2D::operator=(
				const Vector2D& vOther);  // 462
		Vector2D::operator=(
				const Vector2D& vOther);  // 465
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 439
	CStrAutoEncode::IsEmpty(); // 99
	CTextLayoutInfo::IsTextEmpty(); // 451
	CStrAutoEncode::ToUTF32(); // 94
	CTextLayoutInfo::GetTextAsUTF32(); // 471
	Vector2D::operator=(
			const Vector2D& vOther);  // 474
	Vector2D::operator=(
			const Vector2D& vOther);  // 483
} /* size: 492, variables: 3, inline expansions: 7 (64 bytes) */

// <005EF6A5> textlayout/textlayout.cpp:495
// variables: 26
// function calls: 63
void CTextLayout::SetupTextLayoutRenderData(CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists, CTextLayoutInfo* pTextLayoutInfo, int* pCurrentIndex, const Vector2D& currentPos, const RenderViewport_t* pViewport, float proportionalBaseHeight)
{
	int& currentIndex; // 499
	float proportionalScaleY; // 501
	const char   __FUNCTION__; // 56034
	const uchar32* pUnicodeText; // 508
	float startingOffsetX; // 523
	float startingOffsetY; // 523
	float x; // 525
	float y; // 525
	float lineHeight; // 529
	matrix3x4_t renderToScreen; // 530
	float s_dummyTexCoords; // 558
	float flSubpixelOffset; // 559
	Vector vecSubpixelOffset; // 560
	CharRenderInfo info; // 565
	int startingIndex; // 569
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
	}
	{
		Vector position; // 539
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 539
		matrix3x4_t::SetColumn(
				const Vector& vColumn,
				MatrixAxisType_t nColumn);  // 647
		MatrixSetColumn(const Vector& in,
				MatrixAxisType_t nColumn,
				matrix3x4_t& out);  // 1211
		PositionMatrix(const Vector& position,
				matrix3x4_t& mat);  // 541
	}
	{
		Vector position; // 548
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 548
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 550
		SetScaleMatrix(const Vector& scale,
				matrix3x4_t& dst);  // 550
		matrix3x4_t::SetColumn(
				const Vector& vColumn,
				MatrixAxisType_t nColumn);  // 647
		MatrixSetColumn(const Vector& in,
				MatrixAxisType_t nColumn,
				matrix3x4_t& out);  // 1211
		PositionMatrix(const Vector& position,
				matrix3x4_t& mat);  // 551
		MatrixMultiply(const matrix3x4_t& in1,
				const matrix3x4_t& in2,
				matrix3x4_t& out);  // 554
	}
	{
		Vector2D relPositions; // 603
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 610
		}
		{
			CCharRenderGeometry* pRenderGeometry; // 621
			float* texCoords; // 626
			Vector screenPosition; // 628
			Vector relativePosition; // 629
			Color color; // 635
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 622
			}
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 633
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 632
			Vector::Vector(); // 628
			Vector::Vector(); // 629
			Vector::operator+=(
					const Vector& v);  // 634
			Vector::operator=(
					const Vector& vOther);  // 636
			Color::SetRawColor(
					int32 Color);  // 147
			Color::operator=(
					const Color& rhs);  // 637
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 642
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 638
			Vector2D::operator=(
					const Vector2D& vOther);  // 638
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 641
			Vector::operator+=(
					const Vector& v);  // 643
			Color::GetRawColor(); // 147
			Color::operator=(
					const Color& rhs);  // 644
			Vector::operator=(
					const Vector& vOther);  // 645
			Color::SetRawColor(
					int32 Color);  // 147
			Color::operator=(
					const Color& rhs);  // 646
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 651
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 647
			Vector2D::operator=(
					const Vector2D& vOther);  // 647
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 650
			Vector::operator+=(
					const Vector& v);  // 652
			Color::GetRawColor(); // 147
			Color::operator=(
					const Color& rhs);  // 653
			Vector::operator=(
					const Vector& vOther);  // 654
			Color::SetRawColor(
					int32 Color);  // 147
			Color::operator=(
					const Color& rhs);  // 655
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 661
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 656
			Vector2D::operator=(
					const Vector2D& vOther);  // 656
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 660
			Vector::operator+=(
					const Vector& v);  // 662
			Color::GetRawColor(); // 147
			Color::operator=(
					const Color& rhs);  // 663
			Vector::operator=(
					const Vector& vOther);  // 664
			Color::SetRawColor(
					int32 Color);  // 147
			Color::operator=(
					const Color& rhs);  // 665
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 666
			Vector2D::operator=(
					const Vector2D& vOther);  // 666
		}
		CTextLayout::GetCharacterWidth(
					const CTextLayoutInfo& textLayoutInfo,
					int ch);  // 596
		CTextLayout::GetUnicodeCharRenderPositions(
						const CTextLayoutInfo& textLayoutInfo,
						CharRenderInfo& info,
						Vector2D* pPositions);  // 604
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 607
	}
	CStrAutoEncode::ToUTF32(); // 94
	CTextLayoutInfo::GetTextAsUTF32(); // 508
	V_strlen32(const uchar32* puc32); // 512
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 513
	CTextLayout::GetFontTall(
			const CTextLayoutInfo& textLayoutInfo);  // 529
	matrix3x4_t::matrix3x4_t(); // 530
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 560
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 671
} /* size: 0, variables: 15, inline expansions: 8 (152 bytes) */

// <005F466A> textlayout/textlayout.cpp:678
// variables: 3
// function calls: 2
void CTextLayout::GetVertexColor(int positionIndex, int startingIndex, float relX, const CTextLayoutInfo& textLayoutInfo)
{
	{
		float textWidth; // 686
		float t; // 692
		Color result; // 693
		Color::Color(); // 693
	}
	CTextLayout::GetVertexColor(
			int positionIndex,
			int startingIndex,
			float relX,
			const CTextLayoutInfo& textLayoutInfo);  // 678
} /* size: 146, inline expansions: 1 (77 bytes) */

// <005EF62F> textlayout/textlayout.cpp:678
// variables: 3
void CTextLayout::GetVertexColor(int positionIndex, int startingIndex, float relX, const CTextLayoutInfo& textLayoutInfo)
{
	{
		float textWidth; // 686
		float t; // 692
		Color result; // 693
	}
} /* size: 0 */

// <005EF081> textlayout/textlayout.cpp:715
// variables: 3
// function calls: 19
void CTextLayout::RenderLayoutText(IRenderContext* pRenderContext, CTextLayoutInfo* pTextLayoutInfo, const CRenderAttributes* pAttributes)
{
	RenderViewport_t viewport; // 717
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> > renderGeometryLists; // 724
	Vector2D endPos; // 725
	RenderViewport_t::RenderViewport_t(); // 717
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 721
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 724
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 727
	CTextLayout::RenderTextGeometry(
				IRenderContext* pRenderContext,
				CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome renderGeometryLists,
				const Vector2D& vOffset,
				const CRenderAttributes* pAttributes);  // 727
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 728
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 729
} /* size: 441, variables: 3, inline expansions: 19 (351 bytes) */

// <005F44F4> textlayout/textlayout.cpp:735
void CTextLayout::RenderTextGeometry(IRenderContext* pRenderContext, CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome renderGeometryLists, const Vector2D& vOffset, const CRenderAttributes* pAttributes)
{
} /* size: 23 */

// <005EEC55> textlayout/textlayout.cpp:747
// variables: 7
// function calls: 10
void CTextLayout::GetBounds(IRenderContext* pRenderContext, CTextLayoutInfo* pTextLayoutInfo, Vector2D* pMins, Vector2D* pMaxs)
{
	{
		RenderViewport_t viewport; // 751
		Vector2D textSize; // 754
		Vector2D textPos; // 759
		RenderViewport_t::RenderViewport_t(); // 751
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 759
		CTextLayout::GetFontTall(
				const CTextLayoutInfo& textLayoutInfo);  // 761
	}
	{
		RenderViewport_t viewport; // 766
		Vector2D textSize; // 771
		Vector2D textPos; // 779
		float lineHeight; // 781
		RenderViewport_t::RenderViewport_t(); // 766
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 779
		CTextLayout::GetFontTall(
				const CTextLayoutInfo& textLayoutInfo);  // 781
		Vector2DAdd(const Vector2D& a,
				const Vector2D& b,
				Vector2D& c);  // 688
		Vector2D::Vector2D(); // 687
		Vector2D::operator+(
				const Vector2D& v);  // 783
		Vector2D::operator=(
				const Vector2D& vOther);  // 783
	}
} /* size: 425 */

// <005EDF99> textlayout/textlayout.cpp:791
// variables: 6
// function calls: 62
void CTextLayout::GetCharGeometryEntry(CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists, int fontTextureID)
{
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> >& renderGeometryLists; // 793
	CCharRenderGeometry* pRenderGeometry; // 794
	{
		int i; // 796
		{
			int index; // 800
			CUtlMemory<CCharRenderGeometry, int>::NumAllocated(); // 1143
			Color::Color(); // 131
			CCharRenderGeometry::CCharRenderGeometry(); // 1479
			Construct<CCharRenderGeometry>(CCharRenderGeometry* pMemory); // 1148
			CUtlMemory<CCharRenderGeometry, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Element(
				int i);  // 1148
			CUtlMemory<CCharRenderGeometry, int>::Base(); // 112
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Base(); // 368
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::AddToTail(); // 800
			CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
					int i);  // 801
			CUtlMemory<CCharRenderGeometry, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
					int i);  // 801
		}
		Count(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector< this); // 796
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
				int i);  // 798
		CUtlMemory<CCharRenderGeometry, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
				int i);  // 798
	}
	{
		int newListIndex; // 809
		int index; // 814
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 824
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsGrowable(); // 823
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
				int num);  // 1145
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1148
		CUtlMemory<CCharRenderGeometry, int>::ValidateGrowSize(); // 475
		CUtlMemory<CCharRenderGeometry, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1148
		AddToTail(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 809
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
				int i);  // 813
		CUtlMemory<CCharRenderGeometry, int>::IsGrowable(); // 881
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 888
		CUtlMemory<CCharRenderGeometry, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::EnsureCapacity(
				int num);  // 813
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
				int i);  // 814
		CUtlMemory<CCharRenderGeometry, int>::NumAllocated(); // 1143
		CUtlMemory<CCharRenderGeometry, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Element(
			int i);  // 1148
		Color::Color(); // 131
		CCharRenderGeometry::CCharRenderGeometry(); // 1479
		Construct<CCharRenderGeometry>(CCharRenderGeometry* pMemory); // 1148
		CUtlMemory<CCharRenderGeometry, int>::Base(); // 112
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Base(); // 368
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::AddToTail(); // 814
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
				int i);  // 815
		CUtlMemory<CCharRenderGeometry, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::operator[](
				int i);  // 815
	}
} /* size: 763, variables: 2 */

// <005F4A7B> textlayout/textlayout.cpp:825
// variable: 1
void CTextLayout::GetUnicodeCharRenderPositions(const CTextLayoutInfo& textLayoutInfo, CharRenderInfo& info, Vector2D* pPositions)
{
	bool bUnderlined; // 839
} /* size: 0, variables: 1 */

// <005F48A4> textlayout/textlayout.cpp:825
// variables: 2
// function calls: 5
void CTextLayout::GetUnicodeCharRenderPositions(const CTextLayoutInfo& textLayoutInfo, CharRenderInfo& info, Vector2D* pPositions)
{
	bool bUnderlined; // 839
	CTextLayout::GetFontTall(
			const CTextLayoutInfo& textLayoutInfo);  // 835
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 848
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 848
	{
		float fontWide; // 850
	}
} /* size: 395, variables: 1, inline expansions: 5 (36 bytes) */

// <005EDF3C> textlayout/textlayout.cpp:825
// variables: 2
void CTextLayout::GetUnicodeCharRenderPositions(const CTextLayoutInfo& textLayoutInfo, CharRenderInfo& info, Vector2D* pPositions)
{
	bool bUnderlined; // 839
	{
		float fontWide; // 850
	}
} /* size: 0, variables: 1 */

// <005EDDD3> textlayout/textlayout.cpp:875
// variable: 1
// function calls: 4
void CTextLayout::GetTextureForChar(CharRenderInfo* pInfo)
{
	bool bSuccess; // 879
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 882
} /* size: 160, variables: 1, inline expansions: 4 (24 bytes) */

// <005EDAA2> textlayout/textlayout.cpp:892
// variables: 6
// function calls: 10
void CTextLayout::GetTextRenderWidth(const CTextLayoutInfo& textLayoutInfo, int currentIndex)
{
	float wordWidth; // 894
	const uchar32* pUnicodeText; // 895
	int textLen; // 896
	CUtlVector<float, CUtlMemory<float, int> > lineWidth; // 898
	{
		int i; // 899
		{
			uchar32 uniChar; // 901
			CTextLayout::GetCharacterWidth(
						const CTextLayoutInfo& textLayoutInfo,
						int ch);  // 918
		}
	}
	CStrAutoEncode::ToUTF32(); // 94
	CTextLayoutInfo::GetTextAsUTF32(); // 895
	V_strlen32(const uchar32* puc32); // 896
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 922
} /* size: 236, variables: 4, inline expansions: 9 (49 bytes) */

// <005ED939> textlayout/textlayout.cpp:930
// variables: 3
// function call: 1
void CTextLayout::GetStartingOffset(float& x, float& y, const CTextLayoutInfo& textLayoutInfo, int currentIndex)
{
	float fontTall; // 933
	const char   __FUNCTION__; // 55843
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 947
	}
	CTextLayout::GetFontTall(
			const CTextLayoutInfo& textLayoutInfo);  // 933
} /* size: 0, variables: 2, inline expansions: 1 (36 bytes) */

// <005F47EF> textlayout/textlayout.cpp:956
// variable: 1
void CTextLayout::GetFontTall(const CTextLayoutInfo& textLayoutInfo)
{
	int tall; // 958
} /* size: 0, variables: 1 */

// <005F483A> textlayout/textlayout.cpp:963
// variable: 1
void CTextLayout::GetCharacterWidth(const CTextLayoutInfo& textLayoutInfo, int ch)
{
	int charWidth; // 965
} /* size: 0, variables: 1 */

// <005ED7CA> textlayout/textlayout.cpp:969
// variables: 3
void CTextLayout::GetCharABCwide(const CTextLayoutInfo& textLayoutInfo, int ch, float* a, float* b, float* c)
{
	int fontA; // 971
	int fontB; // 971
	int fontC; // 971
} /* size: 170, variables: 3 */

// <005ED62A> textlayout/textlayout.cpp:982
// variables: 3
// function calls: 4
void CTextLayout::CacheFontTextures(const CTextLayoutInfo* pTextLayoutInfo)
{
	FontHandle_t nFontID; // 984
	const char   __FUNCTION__; // 55843
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
	CStrAutoEncode::IsEmpty(); // 99
	CTextLayoutInfo::IsTextEmpty(); // 996
	CStrAutoEncode::ToUTF32(); // 94
	CTextLayoutInfo::GetTextAsUTF32(); // 999
} /* size: 0, variables: 2, inline expansions: 4 (20 bytes) */


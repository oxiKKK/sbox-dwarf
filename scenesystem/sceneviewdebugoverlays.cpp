
//
// scenesystem/sceneviewdebugoverlays.cpp
//
//	referenced by: libengine2.so
//
//	functions: 137
//	class: 1
//	struct: 1
//

// <03174BC8> ../scenesystem/sceneviewdebugoverlays.cpp:31
// function calls: 3
void DebugBase_t::DebugBase_t()
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
} /* size: 0, inline expansions: 3 (0 bytes) */

// <03174BAC> ../scenesystem/sceneviewdebugoverlays.cpp:31
void DebugBase_t::DebugBase_t()
{
} /* size: 0 */

// <03183FC0> ../scenesystem/sceneviewdebugoverlays.cpp:41
void DebugBase_t::Init(float flStartTime, float flTimeToLive, float flMinimumTimeToLive)
{
} /* size: 0 */

// <03184011> ../scenesystem/sceneviewdebugoverlays.cpp:58
// function call: 1
void DebugBase_t::Age(float flDeltaTime)
{
	DebugBase_t::HasInfiniteLifetime(); // 60
} /* size: 0, inline expansions: 1 (0 bytes) */

// <03174B44> ../scenesystem/sceneviewdebugoverlays.cpp:58
void DebugBase_t::Age(float flDeltaTime)
{
} /* size: 0 */

// <0318406C> ../scenesystem/sceneviewdebugoverlays.cpp:67
void DebugBase_t::GetStartTime()
{
} /* size: 0 */

// <03184096> ../scenesystem/sceneviewdebugoverlays.cpp:72
// function call: 1
void DebugBase_t::GetEndTime()
{
	DebugBase_t::HasInfiniteLifetime(); // 74
} /* size: 0, inline expansions: 1 (0 bytes) */

// <03174B0C> ../scenesystem/sceneviewdebugoverlays.cpp:72
void DebugBase_t::GetEndTime()
{
} /* size: 0 */

// <031840F0> ../scenesystem/sceneviewdebugoverlays.cpp:80
// function call: 1
void DebugBase_t::HasExpired()
{
	DebugBase_t::HasInfiniteLifetime(); // 82
} /* size: 0, inline expansions: 1 (0 bytes) */

// <03174AF0> ../scenesystem/sceneviewdebugoverlays.cpp:80
void DebugBase_t::HasExpired()
{
} /* size: 0 */

// <0318414A> ../scenesystem/sceneviewdebugoverlays.cpp:88
// function calls: 2
void DebugBase_t::HasExpired(float flAbsTime)
{
	DebugBase_t::HasInfiniteLifetime(); // 90
	DebugBase_t::GetEndTime(); // 93
} /* size: 0, inline expansions: 2 (0 bytes) */

// <03174AC8> ../scenesystem/sceneviewdebugoverlays.cpp:88
void DebugBase_t::HasExpired(float flAbsTime)
{
} /* size: 0 */

// <031841D9> ../scenesystem/sceneviewdebugoverlays.cpp:96
void DebugBase_t::IsOneFrameNode()
{
} /* size: 0 */

// <03184203> ../scenesystem/sceneviewdebugoverlays.cpp:101
void DebugBase_t::HasInfiniteLifetime()
{
} /* size: 0 */

// <0311B282> ../scenesystem/sceneviewdebugoverlays.cpp:106
// function call: 1
void CDebugLayerRenderer::~CDebugLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 106
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0311B1CE> ../scenesystem/sceneviewdebugoverlays.cpp:106
// function calls: 2
void CDebugLayerRenderer::~CDebugLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 106
	CDebugLayerRenderer::~CDebugLayerRenderer(); // 106
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0311B1B2> ../scenesystem/sceneviewdebugoverlays.cpp:106
inline void CDebugLayerRenderer::~CDebugLayerRenderer()
{
} /* size: 0 */

// <03119606> ../scenesystem/sceneviewdebugoverlays.cpp:106
// member functions: 12
// member variables: 2
// vtable entry: 1
// class size: 16
class CDebugLayerRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CDebugLayerRenderer(CDebugLayerRenderer* , CDebugLayerRenderer& );
	void CDebugLayerRenderer(CDebugLayerRenderer* , const CDebugLayerRenderer& );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:109 */
	void CDebugLayerRenderer(CDebugLayerRenderer* , uint);
	/* ../scenesystem/sceneviewdebugoverlays.cpp:126 */
	virtual void Render(CDebugLayerRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	/* ../scenesystem/sceneviewdebugoverlays.cpp:134 */
	void ShowRenderTargets(CDebugLayerRenderer* , ISceneView* , IRenderContext* , ISceneLayer* );
	uint m_nDebugInfoLayerFlags; /* 8 4 */
	virtual void ~CDebugLayerRenderer(CDebugLayerRenderer* );
	void CDebugLayerRenderer(class CDebugLayerRenderer *, class CDebugLayerRenderer &); /* linkage=_ZN19CDebugLayerRendererC4EOS_ */
	void CDebugLayerRenderer(class CDebugLayerRenderer *, const class CDebugLayerRenderer  &); /* linkage=_ZN19CDebugLayerRendererC4ERKS_ */
	void CDebugLayerRenderer(class CDebugLayerRenderer *, uint); /* linkage=_ZN19CDebugLayerRendererC4Ej */
	virtual void Render(class CDebugLayerRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN19CDebugLayerRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	void ShowRenderTargets(class CDebugLayerRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *); /* linkage=_ZN19CDebugLayerRenderer17ShowRenderTargetsEP10ISceneViewP14IRenderContextP11ISceneLayer */
	virtual void ~CDebugLayerRenderer(class CDebugLayerRenderer *); /* linkage=_ZN19CDebugLayerRendererD4Ev */
};

// <03174A74> ../scenesystem/sceneviewdebugoverlays.cpp:109
void CDebugLayerRenderer::CDebugLayerRenderer(uint nDebugInfoLayerFlags)
{
} /* size: 0 */

// <03174A4F> ../scenesystem/sceneviewdebugoverlays.cpp:109
inline void CDebugLayerRenderer::CDebugLayerRenderer(uint nDebugInfoLayerFlags)
{
} /* size: 0 */

// <031748C4> ../scenesystem/sceneviewdebugoverlays.cpp:118
// variable: 1
// function calls: 3
void CSceneView::AddDebugInfoLayer(const char* pDebugName, const RenderViewport_t& viewport, uint nDebugInfoLayerFlags)
{
	ISceneLayer* pRet; // 120
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 109
	CDebugLayerRenderer::CDebugLayerRenderer(
				uint nDebugInfoLayerFlags);  // 120
	CSceneView::AddFlags(
		SceneViewFlags_t nFlags);  // 121
} /* size: 168, variables: 1, inline expansions: 3 (21 bytes) */

// <0317482E> ../scenesystem/sceneviewdebugoverlays.cpp:126
void CDebugLayerRenderer::Render(ISceneView* pV, IRenderContext* pCtx, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
} /* size: 21 */

// <0316FB58> ../scenesystem/sceneviewdebugoverlays.cpp:134
// variables: 68
// function calls: 302
void CDebugLayerRenderer::ShowRenderTargets(ISceneView* pV, IRenderContext* pCtx, ISceneLayer* pLayer)
{
	CSceneView* pView; // 136
	const IMaterial2* pMat; // 139
	IMaterialMode* pMode; // 143
	CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 64> texturesToShow; // 150
	int nXOut; // 168
	int nYOut; // 169
	{
		ISceneLayer* pCheckLayer; // 152
		CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short unsigned int>, int> >& __for_range; // 57360
		iterator __for_begin; // 49128
		iterator __for_end; // 49128
		{
			{
				const OverflowChunk_t& p; // 433
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 12206
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 12216
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 12226
				{
					int i; // 95
					{
						HRenderTexture hTexture; // 157
						CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
						Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 368
						ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 824
						GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
								int num);  // 1198
						CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
						CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
								int i);  // 602
						Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
							int i);  // 1201
						CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
						CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
														const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
						AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 162
						CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 157
						CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 158
						{
							int i; // 1531
							Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this); // 1531
							CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
									int i);  // 609
							Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this,
								int i);  // 1533
							CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1533
						}
						Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this,
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 160
					}
					operator()(const class* __closure,
							uint32 nAttributeKey,
							const TextureAttr_t& txtr); // 99
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						ResourceHandleTyped_t hResource);  // 266
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							ResourceHandleTyped_t hResource);  // 993
					TextureAttr_t::TextureAttr_t(
							const TextureAttrForStorage_t& other);  // 99
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CDebugLayerRenderer::ShowRenderTargets(
																 f);  // 435
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
			}
			{
				int i; // 95
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					ResourceHandleTyped_t hResource);  // 266
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						ResourceHandleTyped_t hResource);  // 993
				TextureAttr_t::TextureAttr_t(
						const TextureAttrForStorage_t& other);  // 99
				{
					HRenderTexture hTexture; // 157
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 157
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 158
					{
						int i; // 1531
						Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this); // 1531
						CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
								int i);  // 609
						Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this,
							int i);  // 1533
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1533
					}
					Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this,
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 160
					CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
					CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
						int i);  // 1201
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
					CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
													const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
					CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
					Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 368
					ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 824
					GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
							int num);  // 1198
					AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 162
				}
				operator()(const class* __closure,
						uint32 nAttributeKey,
						const TextureAttr_t& txtr); // 99
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CDebugLayerRenderer::ShowRenderTargets(
																 f);  // 432
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CDebugLayerRenderer::ShowRenderTargets(
																 f);  // 154
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 482
			CUtlLinkedList<CSceneLayer::Element(
				int i);  // 317
			_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator*(); // 152
		}
		CUtlLinkedList<CSceneLayer::Head(); // 334
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 334
		CUtlLinkedList<CSceneLayer::begin(); // 152
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 343
		CUtlLinkedList<CSceneLayer::end(); // 152
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 550
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 272
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator++(); // 152
	}
	{
		HRenderTexture hTexture; // 173
		CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 64>& __for_range; // 59797
		iterator __for_begin; // 53829
		iterator __for_end; // 53829
		{
			CRenderAttributes attributes; // 175
			const float  flZPos; // 178
			int nWidth; // 179
			int nHeight; // 180
			float flTexCoordMinX; // 182
			float flTexCoordMinY; // 183
			float flTexCoordMaxX; // 184
			float flTexCoordMaxY; // 185
			int nDispWidth; // 187
			int nDispHeight; // 188
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 210
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 205
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 455
			RenderViewport_t::NormalizedYCoordRelative(
						int nScrY);  // 193
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 173
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 176
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
			TextureAttr_t::TextureAttr_t(
					HRenderTexture hT,
					int32 nMip);  // 619
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 571
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 24983
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 24993
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 25003
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1151
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 317
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
								OverflowChunk_t* pNode);  // 1156
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 317
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 322
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					TextureAttrForStorage_t** pValueOut);  // 309
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 314
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					TextureAttrForStorage_t** pValueOut);  // 356
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					uint32 nKey,
					TextureAttrForStorage_t** pValueOut);  // 547
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 551
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 62318
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 62328
				CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 62338
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 343
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 328
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 334
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						TextureAttrForStorage_t** pValueOut);  // 556
			{
				OverflowChunk_t* pNew; // 559
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 76
				TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 45
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 46
				SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
			TextureAttrForStorage_t::operator=(
					const TextureAttr_t& other);  // 566
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				uint32 nKey,
				TextureAttr_t nValue);  // 571
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
				const CUtlStringToken& nTok,
				TextureAttr_t nValue);  // 619
			CRenderAttributes::SetTextureValue(
					CUtlStringToken nTokenID,
					HRenderTexture txtr,
					int32 nSingleMipLevelToBind);  // 176
			{
				const uint32  m; // 123
				uint32 h; // 124
				uint32 k; // 125
				const int  r; // 126
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 190
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 210
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 205
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 450
			RenderViewport_t::NormalizedXCoordRelative(
						int nScrX);  // 193
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 210
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 205
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 450
			RenderViewport_t::NormalizedXCoordRelative(
						int nScrX);  // 192
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 193
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 210
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 205
			RemapValClamped(float val,
					float A,
					float B,
					float C,
					float D);  // 455
			RenderViewport_t::NormalizedYCoordRelative(
						int nScrY);  // 192
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 192
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 191
			CDynamicVertexData<VertexUVPos_t>::Lock(
				int nVertexCount);  // 680
			Vector::Vector(); // 103
			VertexPos_t::VertexPos_t(); // 257
			Vector2D::Vector2D(); // 257
			VertexUVPos_t::VertexUVPos_t(); // 165
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 180
			CVertexDataBase<VertexUVPos_t>::ClearVertexFields(); // 171
			CVertexDataBase<VertexUVPos_t>::CVertexDataBase(); // 673
			CDynamicVertexData<VertexUVPos_t>::CDynamicVertexData(
						IRenderContext* pRenderContext,
						int nVertexCount,
						const char* pDebugName,
						const char* pBudgetGroup);  // 40
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 41
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 42
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 355
			{
			}
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 46
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 43
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 44
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 355
			{
			}
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 51
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 48
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 49
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 355
			{
			}
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 56
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 53
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 53
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 53
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 54
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 355
			{
			}
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 61
			Vector::operator=(
					const Vector& vOther);  // 111
			VertexPos_t::Position(
				const Vector& vecPos);  // 58
			VertexUVPos_t::SetUV0(
				float flU,
				float flV);  // 59
			CDynamicVertexData<VertexUVPos_t>::Unlock(); // 760
			CDynamicVertexData<VertexUVPos_t>::Unlock(); // 639
			CDynamicVertexData<VertexUVPos_t>::Bind(
				int nSlot,
				int nOffset,
				int nStride);  // 640
			CDynamicVertexData<VertexUVPos_t>::UnlockAndBind(
					int nSlot,
					int nOffset,
					int nStride);  // 63
			CThreadSyncValue<bool>::Load(); // 34
			CTSInputLayoutCreator::IsInitialized(); // 352
			CThreadSyncValue<bool>::Load(); // 60
			{
			}
			CTSInputLayoutCreator::GetLayout(); // 364
			{
				RenderInputLayoutField_t uvTestLayout; // 354
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
						int nLineNumber);  // 39
				CThreadSyncValue<bool>::Load(); // 34
				CTSInputLayoutCreator::IsInitialized(); // 40
				CThreadSyncValue<bool>::Store(
					bool value);  // 43
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
				CTSInputLayoutCreator::CreateLayout(
						const char* pLayoutName,
						int nFieldCount,
						const RenderInputLayoutField_t* pFieldDescs);  // 360
			}
			GetLayout(void); // 348
			CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
			CTSInputLayoutCreator::CTSInputLayoutCreator(); // 350
			GetLayout(void); // 77
			CDynamicVertexData<VertexUVPos_t>::Unlock(); // 760
			CDynamicVertexData<VertexUVPos_t>::Unlock(); // 710
			{
			}
			{
			}
			CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 194
			CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 711
			CDynamicVertexData<VertexUVPos_t>::~CDynamicVertexData(); // 81
			CUtlStringToken::MaybeGetOriginalString(); // 69
			CDynamicVertexData<VertexUVPos_t>::Unlock(); // 760
			CDynamicVertexData<VertexUVPos_t>::Unlock(); // 710
			{
			}
			{
			}
			CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 194
			CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 711
			CDynamicVertexData<VertexUVPos_t>::~CDynamicVertexData(); // 81
			DrawMaterialQuad<VertexUVPos_t, DrawMaterialQuad<VertexUVPos_t>(IRenderContext*, CRenderAttributes*, const IMaterial2*, const Vector&, const Vector&, const Vector&, float, float, float, float, const CUtlStringToken&, const RsStencilStateOverride_t*, int, int, int, int)::<lambda(VertexUVPos_t*, int, int)> >(IRenderContext* pContext,
																CRenderAttributes* pAttributes,
																const IMaterial2* pMaterial,
																 f,
																const Vector& vecULCornerPos,
																const Vector& vecURCornerPos,
																const Vector& vecLLCornerPos,
																float flUMin,
																float flUMax,
																float flVMin,
																float flVMax,
																const CUtlStringToken& shaderMode,
																const RsStencilStateOverride_t* pOverridestate,
																int nRed,
																int nGreen,
																int nBlue,
																int nAlpha); // 90
			DrawMaterialQuad<VertexUVPos_t>(IRenderContext* pContext,
							CRenderAttributes* pAttributes,
							const IMaterial2* pMaterial,
							const Vector& vecULCornerPos,
							const Vector& vecURCornerPos,
							const Vector& vecLLCornerPos,
							float flUMin,
							float flUMax,
							float flVMin,
							float flVMax,
							const CUtlStringToken& shaderMode,
							const RsStencilStateOverride_t* pOverridestate,
							int nRed,
							int nGreen,
							int nBlue,
							int nAlpha);  // 190
		}
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
		Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 102
		begin(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 173
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this); // 104
		end(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 173
	}
	CUtlStringToken::CUtlStringToken(); // 143
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemoryFixedGrowable_Base(
					CWeakHandle<InfoForResourceTypeCTextureBase>* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 150
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ConvertToExternalMemory(
				CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge_FixedGrowable(
				CWeakHandle<InfoForResourceTypeCTextureBase>* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge_FixedGrowable(
				CWeakHandle<InfoForResourceTypeCTextureBase>* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<64, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 64, int>::Purge(
		int numElements);  // 1799
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 1800
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 64, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 478
	CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 64>::~CUtlVectorFixedGrowable(); // 197
} /* size: 0, variables: 6, inline expansions: 30 (803 bytes) */

// <0316EC6A> ../scenesystem/sceneviewdebugoverlays.cpp:201
// variables: 25
// function calls: 63
void SetDashedLine(CRenderAttributes* pRenderAttributes)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 203
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 25474
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 25484
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 25494
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 551
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 63022
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 63032
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 63042
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	CRenderAttributes::SetFloatValue(
			CUtlStringToken nTokenID,
			float flValue);  // 203
} /* size: 469, inline expansions: 18 (2243 bytes) */

// <0316DD7C> ../scenesystem/sceneviewdebugoverlays.cpp:206
// variables: 25
// function calls: 63
void SetDottedLine(CRenderAttributes* pRenderAttributes)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 208
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 25474
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 25484
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 25494
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 551
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 63022
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 63032
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 63042
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	CRenderAttributes::SetFloatValue(
			CUtlStringToken nTokenID,
			float flValue);  // 208
} /* size: 469, inline expansions: 18 (2243 bytes) */

// <0316C1CA> ../scenesystem/sceneviewdebugoverlays.cpp:211
// function calls: 116
void CSceneViewDebugOverlays::CSceneViewDebugOverlays(SceneViewDebugOverlayTimingType_t type)
{
	{
		{
		}
	}
	{
		memset(void* __dest,
			int __ch,
			size_t __len);  // 60
		ISceneViewDebugOverlays::ISceneViewDebugOverlays(); // 211
		CUtlMemory<DebugTextBase_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugTextBase_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::CUtlVector(); // 211
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 216
		VertexColor_t::Init(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 217
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 220
		{
		}
		VertexColor_t::VertexColor_t(); // 211
		CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlStringToken, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 106
		CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 108
		CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlStack(
				int growSize,
				int initSize);  // 211
		CUtlStringToken::CUtlStringToken(); // 211
		CUtlMemory<DebugLineSegment3D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugLineSegment3D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugLineSegment3D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugLineSegment3D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugLineSegment2D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugLineSegment2D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugTriangle3D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugTriangle3D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugTriangle3D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugTriangle3D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugTriangle2D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugTriangle2D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugTextureDisplay_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugTextureDisplay_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::CUtlVector(); // 211
		CUtlMemory<Debug3DVectorText_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<Debug3DVectorText_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::CUtlVector(); // 211
		CUtlMemory<Debug2DText_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<Debug2DText_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::CUtlVector(); // 211
		CUtlMemory<Debug3DText_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<Debug3DText_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugSceneObject_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugSceneObject_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugCircle3D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugCircle3D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugCross3D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugCross3D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::CUtlVector(); // 211
		CUtlMemory<DebugSphere_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugSphere_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVector(); // 260
		CUtlMemory<DebugSphere_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugSphere_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVector(); // 260
		CDebugNodeList<DebugSphere_t>::CDebugNodeList(); // 211
		CUtlMemory<DebugSphere_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugSphere_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVector(); // 260
		CUtlMemory<DebugSphere_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugSphere_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::CUtlVector(); // 260
		CDebugNodeList<DebugSphere_t>::CDebugNodeList(); // 211
		CUtlMemory<DebugTickMarkedLine3D_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<DebugTickMarkedLine3D_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::CUtlVector(); // 211
		Vector::Vector(); // 211
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 211
		Vector4D::Vector4D(); // 211
		CUtlMemory<CSceneObject::ValidateGrowSize(); // 475
		CUtlMemory<CSceneObject::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 530
		CUtlVectorBase<CSceneObject::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSceneObject::CUtlVector(); // 211
	}
} /* size: 0 */

// <0316C181> ../scenesystem/sceneviewdebugoverlays.cpp:211
// variables: 2
void CSceneViewDebugOverlays::CSceneViewDebugOverlays(SceneViewDebugOverlayTimingType_t type)
{
	const char   __FUNCTION__; // 39191
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
} /* size: 0, variables: 1 */

// <031694B3> ../scenesystem/sceneviewdebugoverlays.cpp:230
// variables: 5
// function calls: 233
void CSceneViewDebugOverlays::~CSceneViewDebugOverlays()
{
	CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
	CUtlMemory<CSceneObject::IsExternallyAllocated(); // 905
	CUtlMemory<CSceneObject::Purge(); // 903
	CUtlMemory<CSceneObject::Purge(); // 1799
	CUtlVectorBase<CSceneObject::Purge(); // 560
	ValidateAlignment<CSceneObject*>(void); // 508
	CUtlMemory<CSceneObject::Purge(); // 510
	CUtlMemory<CSceneObject::~CUtlMemory(); // 562
	CUtlVectorBase<CSceneObject::~CUtlVectorBase(); // 410
	CUtlVector<CSceneObject::~CUtlVector(); // 234
	{
		int i; // 1721
		CUtlMemory<DebugTextBase_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Element(
			int i);  // 1723
		DebugTextBase_t::~DebugTextBase_t(); // 1526
		Destruct<DebugTextBase_t>(DebugTextBase_t* pMemory); // 1723
	}
	CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugTextBase_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugTextBase_t, int>::Purge(); // 903
	CUtlMemory<DebugTextBase_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTextBase_t>(void); // 508
	CUtlMemory<DebugTextBase_t, int>::Purge(); // 510
	CUtlMemory<DebugTextBase_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugTickMarkedLine3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugTickMarkedLine3D_t, int>::Purge(); // 903
	CUtlMemory<DebugTickMarkedLine3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTickMarkedLine3D_t>(void); // 508
	CUtlMemory<DebugTickMarkedLine3D_t, int>::Purge(); // 510
	CUtlMemory<DebugTickMarkedLine3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugSphere_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugSphere_t, int>::Purge(); // 903
	CUtlMemory<DebugSphere_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Purge(); // 560
	ValidateAlignment<DebugSphere_t>(void); // 508
	CUtlMemory<DebugSphere_t, int>::Purge(); // 510
	CUtlMemory<DebugSphere_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVector(); // 260
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugSphere_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugSphere_t, int>::Purge(); // 903
	CUtlMemory<DebugSphere_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Purge(); // 560
	ValidateAlignment<DebugSphere_t>(void); // 508
	CUtlMemory<DebugSphere_t, int>::Purge(); // 510
	CUtlMemory<DebugSphere_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVector(); // 260
	CDebugNodeList<DebugSphere_t>::~CDebugNodeList(); // 234
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugSphere_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugSphere_t, int>::Purge(); // 903
	CUtlMemory<DebugSphere_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Purge(); // 560
	ValidateAlignment<DebugSphere_t>(void); // 508
	CUtlMemory<DebugSphere_t, int>::Purge(); // 510
	CUtlMemory<DebugSphere_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVector(); // 260
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugSphere_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugSphere_t, int>::Purge(); // 903
	CUtlMemory<DebugSphere_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Purge(); // 560
	ValidateAlignment<DebugSphere_t>(void); // 508
	CUtlMemory<DebugSphere_t, int>::Purge(); // 510
	CUtlMemory<DebugSphere_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::~CUtlVector(); // 260
	CDebugNodeList<DebugSphere_t>::~CDebugNodeList(); // 234
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugCross3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugCross3D_t, int>::Purge(); // 903
	CUtlMemory<DebugCross3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugCross3D_t>(void); // 508
	CUtlMemory<DebugCross3D_t, int>::Purge(); // 510
	CUtlMemory<DebugCross3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugCircle3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugCircle3D_t, int>::Purge(); // 903
	CUtlMemory<DebugCircle3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugCircle3D_t>(void); // 508
	CUtlMemory<DebugCircle3D_t, int>::Purge(); // 510
	CUtlMemory<DebugCircle3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugSceneObject_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugSceneObject_t, int>::Purge(); // 903
	CUtlMemory<DebugSceneObject_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Purge(); // 560
	ValidateAlignment<DebugSceneObject_t>(void); // 508
	CUtlMemory<DebugSceneObject_t, int>::Purge(); // 510
	CUtlMemory<DebugSceneObject_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::~CUtlVector(); // 234
	{
		int i; // 1721
		CUtlMemory<Debug3DText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Element(
			int i);  // 1723
		DebugTextBase_t::~DebugTextBase_t(); // 178
		Debug3DText_t::~Debug3DText_t(); // 1526
		Destruct<Debug3DText_t>(Debug3DText_t* pMemory); // 1723
	}
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::RemoveAll(); // 1798
	CUtlMemory<Debug3DText_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Debug3DText_t, int>::Purge(); // 903
	CUtlMemory<Debug3DText_t, int>::Purge(); // 1799
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Purge(); // 560
	ValidateAlignment<Debug3DText_t>(void); // 508
	CUtlMemory<Debug3DText_t, int>::Purge(); // 510
	CUtlMemory<Debug3DText_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::~CUtlVector(); // 234
	{
		int i; // 1721
		CUtlMemory<Debug2DText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Element(
			int i);  // 1723
		DebugTextBase_t::~DebugTextBase_t(); // 150
		Debug2DText_t::~Debug2DText_t(); // 1526
		Destruct<Debug2DText_t>(Debug2DText_t* pMemory); // 1723
	}
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::RemoveAll(); // 1798
	CUtlMemory<Debug2DText_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Debug2DText_t, int>::Purge(); // 903
	CUtlMemory<Debug2DText_t, int>::Purge(); // 1799
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Purge(); // 560
	ValidateAlignment<Debug2DText_t>(void); // 508
	CUtlMemory<Debug2DText_t, int>::Purge(); // 510
	CUtlMemory<Debug2DText_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::~CUtlVector(); // 234
	{
		int i; // 1721
		CUtlMemory<Debug3DVectorText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Element(
			int i);  // 1723
		DebugTextBase_t::~DebugTextBase_t(); // 126
		Debug3DVectorText_t::~Debug3DVectorText_t(); // 1526
		Destruct<Debug3DVectorText_t>(Debug3DVectorText_t* pMemory); // 1723
	}
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::RemoveAll(); // 1798
	CUtlMemory<Debug3DVectorText_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Debug3DVectorText_t, int>::Purge(); // 903
	CUtlMemory<Debug3DVectorText_t, int>::Purge(); // 1799
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Purge(); // 560
	ValidateAlignment<Debug3DVectorText_t>(void); // 508
	CUtlMemory<Debug3DVectorText_t, int>::Purge(); // 510
	CUtlMemory<Debug3DVectorText_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::~CUtlVector(); // 234
	{
		int i; // 1721
		CUtlMemory<DebugTextureDisplay_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 118
		DebugTextureDisplay_t::~DebugTextureDisplay_t(); // 1526
		Destruct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory); // 1723
	}
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugTextureDisplay_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugTextureDisplay_t, int>::Purge(); // 903
	CUtlMemory<DebugTextureDisplay_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTextureDisplay_t>(void); // 508
	CUtlMemory<DebugTextureDisplay_t, int>::Purge(); // 510
	CUtlMemory<DebugTextureDisplay_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugTriangle2D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugTriangle2D_t, int>::Purge(); // 903
	CUtlMemory<DebugTriangle2D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTriangle2D_t>(void); // 508
	CUtlMemory<DebugTriangle2D_t, int>::Purge(); // 510
	CUtlMemory<DebugTriangle2D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugTriangle3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 903
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTriangle3D_t>(void); // 508
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 510
	CUtlMemory<DebugTriangle3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugTriangle3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 903
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTriangle3D_t>(void); // 508
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 510
	CUtlMemory<DebugTriangle3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugLineSegment2D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment2D_t>(void); // 508
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment2D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugLineSegment3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment3D_t>(void); // 508
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugLineSegment3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment3D_t>(void); // 508
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVector(); // 234
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Clear(); // 324
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 325
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 114
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlStack(); // 234
} /* size: 1235, inline expansions: 208 (5138 bytes) */

// <0316944B> ../scenesystem/sceneviewdebugoverlays.cpp:230
void CSceneViewDebugOverlays::~CSceneViewDebugOverlays()
{
} /* size: 36 */

// <0318520F> ../scenesystem/sceneviewdebugoverlays.cpp:236
void CSceneViewDebugOverlays::Init()
{
} /* size: 0 */

// <03168A18> ../scenesystem/sceneviewdebugoverlays.cpp:241
// variable: 1
// function calls: 46
void CSceneViewDebugOverlays::IsEmpty()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_243; // 243
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
			int nLineNumber);  // 243
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::IsEmpty(); // 244
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 255
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::IsEmpty(); // 244
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 135
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::IsEmpty(); // 278
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 135
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::IsEmpty(); // 278
	CDebugNodeList<DebugSphere_t>::IsEmpty(); // 245
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 135
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::IsEmpty(); // 278
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 135
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::IsEmpty(); // 278
	CDebugNodeList<DebugSphere_t>::IsEmpty(); // 245
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::IsEmpty(); // 246
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::IsEmpty(); // 246
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::IsEmpty(); // 247
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::IsEmpty(); // 248
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::IsEmpty(); // 249
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::IsEmpty(); // 250
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::IsEmpty(); // 251
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Count(); // 135
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::IsEmpty(); // 252
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::IsEmpty(); // 253
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::IsEmpty(); // 253
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::IsEmpty(); // 253
} /* size: 397, variables: 1, inline expansions: 46 (446 bytes) */

// <031689DB> ../scenesystem/sceneviewdebugoverlays.cpp:257
void CSceneViewDebugOverlays::SetMinimumOverlayLifetime(float flMinTime)
{
} /* size: 13 */

// <031689AD> ../scenesystem/sceneviewdebugoverlays.cpp:262
void CSceneViewDebugOverlays::GetMinimumOverlayLifetime()
{
} /* size: 13 */

// <03168902> ../scenesystem/sceneviewdebugoverlays.cpp:267
// function calls: 2
void CSceneViewDebugOverlays::SetDefaultColor(const VertexColor_t& defaultColor)
{
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 269
} /* size: 13, inline expansions: 2 (10 bytes) */

// <0316883E> ../scenesystem/sceneviewdebugoverlays.cpp:272
// function calls: 3
void CSceneViewDebugOverlays::GetDefaultColor()
{
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 274
} /* size: 16, inline expansions: 3 (8 bytes) */

// <03168801> ../scenesystem/sceneviewdebugoverlays.cpp:277
void CSceneViewDebugOverlays::SetOverlayStartTime(float flAbsTime)
{
} /* size: 13 */

// <031687D3> ../scenesystem/sceneviewdebugoverlays.cpp:282
void CSceneViewDebugOverlays::GetOverlayStartTime()
{
} /* size: 13 */

// <031684EF> ../scenesystem/sceneviewdebugoverlays.cpp:287
// function calls: 12
void CSceneViewDebugOverlays::PushDebugOverlayScope(CUtlStringToken id)
{
	CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 228
	CUtlMemory<CUtlStringToken, int>::Base(); // 97
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 233
	CUtlMemory<CUtlStringToken, int>::IsGrowable(); // 823
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlStringToken, int>::Grow(
		int num);  // 229
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowStack(); // 267
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 155
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
		int i);  // 268
	CopyConstruct<CUtlStringToken>(CUtlStringToken* pMemory,
					const CUtlStringToken& src);  // 268
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Push(
		const CUtlStringToken& src);  // 289
} /* size: 279, inline expansions: 12 (759 bytes) */

// <03168411> ../scenesystem/sceneviewdebugoverlays.cpp:293
// function calls: 4
void CSceneViewDebugOverlays::PopDebugOverlayScope()
{
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Pop(); // 295
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 155
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
		int i);  // 190
	CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Top(); // 302
} /* size: 48, inline expansions: 4 (18 bytes) */

// <03166053> ../scenesystem/sceneviewdebugoverlays.cpp:306
// variables: 25
// function calls: 134
void CSceneViewDebugOverlays::RemoveAllInScope(CUtlStringToken id)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_308; // 308
	int nCount; // 328
	{
		int i; // 329
		CUtlMemory<CSceneObject::Base(); // 112
		CUtlVectorBase<CSceneObject::Base(); // 368
		CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
		CUtlVectorBase<CSceneObject::GrowMemory(
				int num);  // 1198
		CUtlMemory<CSceneObject::NumAllocated(); // 1196
		CUtlMemory<CSceneObject::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneObject::Element(
			int i);  // 1201
		CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
						CSceneObject* const& src);  // 1201
		CUtlVectorBase<CSceneObject::AddToTail(
				CSceneObject* const& src);  // 333
		CUtlMemory<DebugSceneObject_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::operator[](
				int i);  // 331
	}
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
			int nLineNumber);  // 308
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 618
		CUtlMemory<DebugLineSegment3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugLineSegment3D_t>(
						CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list,
						CUtlStringToken id);  // 310
	{
		int i; // 1721
		CUtlMemory<DebugTextureDisplay_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 118
		DebugTextureDisplay_t::~DebugTextureDisplay_t(); // 1526
		Destruct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory); // 1723
	}
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 618
		CUtlMemory<DebugTextureDisplay_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugTextureDisplay_t>(
						CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& list,
						CUtlStringToken id);  // 316
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 618
		CUtlMemory<DebugLineSegment3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugLineSegment3D_t>(
						CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list,
						CUtlStringToken id);  // 311
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 618
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugLineSegment2D_t>(
						CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& list,
						CUtlStringToken id);  // 312
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 618
		CUtlMemory<DebugTriangle3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugTriangle3D_t>(
						CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list,
						CUtlStringToken id);  // 313
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 618
		CUtlMemory<DebugTriangle3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugTriangle3D_t>(
						CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list,
						CUtlStringToken id);  // 314
	CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::Count(); // 618
		CUtlMemory<DebugTriangle2D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugTriangle2D_t>(
						CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >& list,
						CUtlStringToken id);  // 315
	{
		int i; // 1721
		CUtlMemory<Debug3DVectorText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Element(
			int i);  // 1723
		DebugTextBase_t::~DebugTextBase_t(); // 126
		Debug3DVectorText_t::~Debug3DVectorText_t(); // 1526
		Destruct<Debug3DVectorText_t>(Debug3DVectorText_t* pMemory); // 1723
	}
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 618
		CUtlMemory<Debug3DVectorText_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<Debug3DVectorText_t>(
						CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& list,
						CUtlStringToken id);  // 317
	{
		int i; // 1721
		CUtlMemory<Debug2DText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Element(
			int i);  // 1723
		DebugTextBase_t::~DebugTextBase_t(); // 150
		Debug2DText_t::~Debug2DText_t(); // 1526
		Destruct<Debug2DText_t>(Debug2DText_t* pMemory); // 1723
	}
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 618
		CUtlMemory<Debug2DText_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<Debug2DText_t>(
					CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& list,
					CUtlStringToken id);  // 318
	{
		int i; // 1721
		CUtlMemory<Debug3DText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Element(
			int i);  // 1723
		DebugTextBase_t::~DebugTextBase_t(); // 178
		Debug3DText_t::~Debug3DText_t(); // 1526
		Destruct<Debug3DText_t>(Debug3DText_t* pMemory); // 1723
	}
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 618
		CUtlMemory<Debug3DText_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<Debug3DText_t>(
					CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& list,
					CUtlStringToken id);  // 319
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 618
		CUtlMemory<DebugCircle3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugCircle3D_t>(
						CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& list,
						CUtlStringToken id);  // 320
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 618
		CUtlMemory<DebugCross3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugCross3D_t>(
					CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& list,
					CUtlStringToken id);  // 321
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 618
		CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugTickMarkedLine3D_t>(
							CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& list,
							CUtlStringToken id);  // 322
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 618
		CUtlMemory<DebugSphere_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					CUtlStringToken id);  // 323
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 618
		CUtlMemory<DebugSphere_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					CUtlStringToken id);  // 324
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 618
		CUtlMemory<DebugSphere_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
				int i);  // 620
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					CUtlStringToken id);  // 325
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::RemoveAll(); // 614
	{
		int i; // 618
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 618
		CUtlMemory<DebugSphere_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
				int i);  // 620
		Destruct<DebugSphere_t>(DebugSphere_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::FastRemove(
				int elem);  // 623
	}
	CSceneViewDebugOverlays::RemoveAllInScope<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					CUtlStringToken id);  // 326
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Count(); // 328
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 337
} /* size: 3013, variables: 2, inline expansions: 45 (3490 bytes) */

// <03165FDA> ../scenesystem/sceneviewdebugoverlays.cpp:339
// function call: 1
void CSceneViewDebugOverlays::Clear()
{
	CUtlStringToken::CUtlStringToken(); // 341
} /* size: 18, inline expansions: 1 (0 bytes) */

// <0316032D> ../scenesystem/sceneviewdebugoverlays.cpp:345
// variables: 80
// function calls: 320
void CSceneViewDebugOverlays::AgeList(float flDelta, float flAbsTime)
{
	const char   __FUNCTION__; // 38784
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_353; // 353
	int nCount; // 357
	{
		int i; // 358
		CUtlMemory<CSceneObject::operator[](
				int i);  // 588
		CUtlVectorBase<CSceneObject::operator[](
				int i);  // 360
	}
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
			int nLineNumber);  // 353
	CUtlVectorBase<CSceneObject::Count(); // 357
	CUtlVectorBase<CSceneObject::RemoveAll(); // 362
	{
		int i; // 554
		CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Count(); // 554
		{
			DebugTextBase_t& item; // 556
			DebugBase_t::Age(
				float flDeltaTime);  // 568
			CUtlMemory<DebugTextBase_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::operator[](
					int i);  // 556
			DebugBase_t::HasInfiniteLifetime(); // 558
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 561
		}
	}
	{
		int i; // 531
		CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Count(); // 531
		{
			DebugTextBase_t& item; // 533
			DebugBase_t::Age(
				float flDeltaTime);  // 546
			CUtlMemory<DebugTextBase_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::operator[](
					int i);  // 533
			DebugBase_t::HasInfiniteLifetime(); // 535
			DebugBase_t::HasExpired(); // 539
		}
	}
	CSceneViewDebugOverlays::AgeSingleListPreserveOrder<DebugTextBase_t>(
							CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >& list,
							SceneViewDebugOverlayTimingType_t type,
							float flDelta,
							float flAbsTime);  // 524
	CSceneViewDebugOverlays::AgeSingleListPreserveOrder<DebugTextBase_t>(
							CUtlVector<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >& list,
							SceneViewDebugOverlayTimingType_t type,
							float flDelta,
							float flAbsTime);  // 364
	{
		int i; // 502
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 502
		{
			DebugLineSegment3D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugLineSegment3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 480
		{
			DebugLineSegment3D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugLineSegment3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment3D_t>(
						CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment3D_t>(
						CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 365
	{
		int i; // 502
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 502
		{
			DebugSphere_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 480
		{
			DebugSphere_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 366
	{
		int i; // 502
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 502
		{
			DebugSphere_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 480
		{
			DebugSphere_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 367
	{
		int i; // 502
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 502
		{
			DebugSphere_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 480
		{
			DebugSphere_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 368
	{
		int i; // 502
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 502
		{
			DebugSphere_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 480
		{
			DebugSphere_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugSphere_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugSphere_t>(
					CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 369
	{
		int i; // 502
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 502
		{
			DebugLineSegment3D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugLineSegment3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 480
		{
			DebugLineSegment3D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugLineSegment3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment3D_t>(
						CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment3D_t>(
						CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 370
	{
		int i; // 502
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 502
		{
			DebugLineSegment2D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugLineSegment2D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 480
		{
			DebugLineSegment2D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugLineSegment2D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment2D_t>(
						CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugLineSegment2D_t>(
						CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 371
	{
		int i; // 502
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 502
		{
			DebugTextureDisplay_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugTextureDisplay_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 480
		{
			DebugTextureDisplay_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugTextureDisplay_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugTextureDisplay_t>(
						CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugTextureDisplay_t>(
						CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 372
	{
		int i; // 502
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 502
		{
			Debug3DVectorText_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<Debug3DVectorText_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 480
		{
			Debug3DVectorText_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<Debug3DVectorText_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<Debug3DVectorText_t>(
						CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<Debug3DVectorText_t>(
						CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 373
	{
		int i; // 502
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 502
		{
			Debug2DText_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<Debug2DText_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 480
		{
			Debug2DText_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<Debug2DText_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<Debug2DText_t>(
					CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<Debug2DText_t>(
					CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 374
	{
		int i; // 502
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 502
		{
			Debug3DText_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<Debug3DText_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 480
		{
			Debug3DText_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<Debug3DText_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<Debug3DText_t>(
					CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<Debug3DText_t>(
					CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 375
	{
		int i; // 502
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 502
		{
			DebugTriangle3D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugTriangle3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 480
		{
			DebugTriangle3D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugTriangle3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugTriangle3D_t>(
					CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugTriangle3D_t>(
					CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 376
	{
		int i; // 502
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 502
		{
			DebugTriangle3D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugTriangle3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 480
		{
			DebugTriangle3D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugTriangle3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugTriangle3D_t>(
					CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugTriangle3D_t>(
					CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 377
	{
		int i; // 502
		CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::Count(); // 502
		{
			DebugTriangle2D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugTriangle2D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::Count(); // 480
		{
			DebugTriangle2D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugTriangle2D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugTriangle2D_t>(
					CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugTriangle2D_t>(
					CUtlVector<DebugTriangle2D_t, CUtlMemory<DebugTriangle2D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 378
	{
		int i; // 502
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 502
		{
			DebugCircle3D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugCircle3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 480
		{
			DebugCircle3D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugCircle3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugCircle3D_t>(
					CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugCircle3D_t>(
					CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 379
	{
		int i; // 502
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 502
		{
			DebugCross3D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugCross3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 480
		{
			DebugCross3D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugCross3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugCross3D_t>(
					CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugCross3D_t>(
					CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& list,
					SceneViewDebugOverlayTimingType_t type,
					float flDelta,
					float flAbsTime);  // 380
	{
		int i; // 502
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 502
		{
			DebugTickMarkedLine3D_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 480
		{
			DebugTickMarkedLine3D_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugTickMarkedLine3D_t>(
						CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugTickMarkedLine3D_t>(
						CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 381
	{
		int i; // 502
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Count(); // 502
		{
			DebugSceneObject_t& item; // 504
			DebugBase_t::Age(
				float flDeltaTime);  // 515
			CUtlMemory<DebugSceneObject_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::operator[](
					int i);  // 504
			DebugBase_t::HasInfiniteLifetime(); // 505
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 508
			CUtlMemory<CSceneObject::NumAllocated(); // 1196
			CUtlMemory<CSceneObject::operator[](
					int i);  // 602
			CUtlVectorBase<CSceneObject::Element(
				int i);  // 1201
			CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
							CSceneObject* const& src);  // 1201
			CUtlMemory<CSceneObject::Base(); // 112
			CUtlVectorBase<CSceneObject::Base(); // 368
			CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
			CUtlVectorBase<CSceneObject::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CSceneObject::AddToTail(
					CSceneObject* const& src);  // 468
			CSceneViewDebugOverlays::CleanupListEntry<DebugSceneObject_t>(
								DebugSceneObject_t& entry);  // 510
		}
	}
	{
		int i; // 480
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Count(); // 480
		{
			DebugSceneObject_t& item; // 482
			DebugBase_t::Age(
				float flDeltaTime);  // 494
			CUtlMemory<DebugSceneObject_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::operator[](
					int i);  // 482
			DebugBase_t::HasInfiniteLifetime(); // 483
			DebugBase_t::HasExpired(); // 487
			CUtlMemory<CSceneObject::NumAllocated(); // 1196
			CUtlMemory<CSceneObject::operator[](
					int i);  // 602
			CUtlVectorBase<CSceneObject::Element(
				int i);  // 1201
			CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
							CSceneObject* const& src);  // 1201
			CUtlMemory<CSceneObject::Base(); // 112
			CUtlVectorBase<CSceneObject::Base(); // 368
			CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
			CUtlVectorBase<CSceneObject::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CSceneObject::AddToTail(
					CSceneObject* const& src);  // 468
			CSceneViewDebugOverlays::CleanupListEntry<DebugSceneObject_t>(
								DebugSceneObject_t& entry);  // 489
		}
	}
	CSceneViewDebugOverlays::AgeSingleList<DebugSceneObject_t>(
						CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 473
	CSceneViewDebugOverlays::AgeSingleList<DebugSceneObject_t>(
						CUtlVector<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >& list,
						SceneViewDebugOverlayTimingType_t type,
						float flDelta,
						float flAbsTime);  // 384
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 385
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 349
} /* size: 6279, variables: 3, inline expansions: 51 (8905 bytes) */

// <031593B7> ../scenesystem/sceneviewdebugoverlays.cpp:388
// variables: 36
// function calls: 467
void CSceneViewDebugOverlays::AddToView(ISceneView* pView, float flAbsTime)
{
	const char   __FUNCTION__; // 38838
	CSceneViewDebugOverlays* pViewList; // 402
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_409; // 409
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_410; // 410
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
			int nLineNumber);  // 409
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
			int nLineNumber);  // 410
	{
		int i; // 589
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 589
		{
			const DebugLineSegment2D_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugLineSegment2D_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugLineSegment2D_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 112
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 112
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 112
			DebugLineSegment2D_t::DebugLineSegment2D_t(
						const DebugLineSegment2D_t  &);  // 1520
			CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
								const DebugLineSegment2D_t& src);  // 1201
			CUtlMemory<DebugLineSegment2D_t, int>::Base(); // 112
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Base(); // 368
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddToTail(
					const DebugLineSegment2D_t& src);  // 601
			CUtlMemory<DebugLineSegment2D_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 1369
	CUtlMemory<DebugLineSegment2D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugLineSegment2D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		DebugLineSegment2D_t::DebugLineSegment2D_t(
					const DebugLineSegment2D_t  &);  // 1520
		CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
							const DebugLineSegment2D_t& src);  // 1378
	}
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddVectorToTail<CUtlMemory<DebugLineSegment2D_t, int> >(
								const CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<DebugLineSegment2D_t>(
						CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& list,
						const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& srcList,
						SceneViewDebugOverlayTimingType_t type,
						float flAbsTime);  // 414
	{
		int i; // 589
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 589
		{
			const DebugTextureDisplay_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugTextureDisplay_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugTextureDisplay_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 118
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 221
			CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
					ResourceHandleTyped_t hResource);  // 221
			CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
						const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& src);  // 118
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 118
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 118
			DebugTextureDisplay_t::DebugTextureDisplay_t(
						const DebugTextureDisplay_t  &);  // 1520
			CopyConstruct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory,
								const DebugTextureDisplay_t& src);  // 1201
			CUtlMemory<DebugTextureDisplay_t, int>::Base(); // 112
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Base(); // 368
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::AddToTail(
					const DebugTextureDisplay_t& src);  // 601
			CUtlMemory<DebugTextureDisplay_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 1369
	CUtlMemory<DebugTextureDisplay_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugTextureDisplay_t, int>::Base(); // 112
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Base(); // 368
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugTextureDisplay_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugTextureDisplay_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 118
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 221
		CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
				ResourceHandleTyped_t hResource);  // 221
		CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(
					const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& src);  // 118
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 118
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 118
		DebugTextureDisplay_t::DebugTextureDisplay_t(
					const DebugTextureDisplay_t  &);  // 1520
		CopyConstruct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory,
							const DebugTextureDisplay_t& src);  // 1378
	}
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::AddVectorToTail<CUtlMemory<DebugTextureDisplay_t, int> >(
								const CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<DebugTextureDisplay_t>(
						CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& list,
						const CUtlVector<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >& srcList,
						SceneViewDebugOverlayTimingType_t type,
						float flAbsTime);  // 415
	{
		int i; // 589
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 589
		{
			const Debug3DVectorText_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<Debug3DVectorText_t, int>::NumAllocated(); // 1196
			CUtlMemory<Debug3DVectorText_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 32
			CUtlStringToken::CUtlStringToken(); // 36
			DebugBase_t::Init(
				float flStartTime,
				float flTimeToLive,
				float flMinimumTimeToLive);  // 38
			DebugBase_t::DebugBase_t(); // 61
			DebugTextBase_t::DebugTextBase_t(); // 129
			Vector::Vector(); // 129
			Vector::Vector(); // 129
			Vector::Vector(); // 129
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 32
			DebugBase_t::operator=(
					const DebugBase_t  &);  // 78
			V_strlen(const char* str); // 90
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 92
			DebugTextBase_t::SetText(
				const char* pText);  // 79
			DebugTextBase_t::operator=(
					const DebugTextBase_t& p);  // 73
			DebugTextBase_t::operator=(
					const DebugTextBase_t& p);  // 136
			Vector::operator=(
					const Vector& vOther);  // 137
			Vector::operator=(
					const Vector& vOther);  // 138
			Vector::operator=(
					const Vector& vOther);  // 139
			Debug3DVectorText_t::operator=(
					const Debug3DVectorText_t& p);  // 129
			Debug3DVectorText_t::Debug3DVectorText_t(
						const Debug3DVectorText_t& p);  // 1520
			CopyConstruct<Debug3DVectorText_t>(Debug3DVectorText_t* pMemory,
								const Debug3DVectorText_t& src);  // 1201
			CUtlMemory<Debug3DVectorText_t, int>::Base(); // 112
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Base(); // 368
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::AddToTail(
					const Debug3DVectorText_t& src);  // 601
			CUtlMemory<Debug3DVectorText_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 1366
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 1369
	CUtlMemory<Debug3DVectorText_t, int>::NumAllocated(); // 782
	CUtlMemory<Debug3DVectorText_t, int>::Base(); // 112
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Base(); // 368
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<Debug3DVectorText_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<Debug3DVectorText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 32
		CUtlStringToken::CUtlStringToken(); // 36
		DebugBase_t::Init(
			float flStartTime,
			float flTimeToLive,
			float flMinimumTimeToLive);  // 38
		DebugBase_t::DebugBase_t(); // 61
		DebugTextBase_t::DebugTextBase_t(); // 129
		Vector::Vector(); // 129
		Vector::Vector(); // 129
		Vector::Vector(); // 129
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 32
		DebugBase_t::operator=(
				const DebugBase_t  &);  // 78
		V_strlen(const char* str); // 90
		strcpy(char* __dest,
			const char* __src);  // 124
		V_strcpy(char* dest,
			const char* src);  // 92
		DebugTextBase_t::SetText(
			const char* pText);  // 79
		DebugTextBase_t::operator=(
				const DebugTextBase_t& p);  // 73
		DebugTextBase_t::operator=(
				const DebugTextBase_t& p);  // 136
		Vector::operator=(
				const Vector& vOther);  // 137
		Vector::operator=(
				const Vector& vOther);  // 138
		Vector::operator=(
				const Vector& vOther);  // 139
		Debug3DVectorText_t::operator=(
				const Debug3DVectorText_t& p);  // 129
		Debug3DVectorText_t::Debug3DVectorText_t(
					const Debug3DVectorText_t& p);  // 1520
		CopyConstruct<Debug3DVectorText_t>(Debug3DVectorText_t* pMemory,
							const Debug3DVectorText_t& src);  // 1378
	}
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::AddVectorToTail<CUtlMemory<Debug3DVectorText_t, int> >(
								const CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<Debug3DVectorText_t>(
						CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& list,
						const CUtlVector<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >& srcList,
						SceneViewDebugOverlayTimingType_t type,
						float flAbsTime);  // 416
	{
		int i; // 589
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 589
		{
			const Debug2DText_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<Debug2DText_t, int>::NumAllocated(); // 1196
			CUtlMemory<Debug2DText_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 32
			CUtlStringToken::CUtlStringToken(); // 36
			DebugBase_t::Init(
				float flStartTime,
				float flTimeToLive,
				float flMinimumTimeToLive);  // 38
			DebugBase_t::DebugBase_t(); // 61
			DebugTextBase_t::DebugTextBase_t(); // 153
			Vector2D::Vector2D(); // 153
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 32
			DebugBase_t::operator=(
					const DebugBase_t  &);  // 78
			V_strlen(const char* str); // 90
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 92
			DebugTextBase_t::SetText(
				const char* pText);  // 79
			DebugTextBase_t::operator=(
					const DebugTextBase_t& p);  // 73
			DebugTextBase_t::operator=(
					const DebugTextBase_t& p);  // 160
			Vector2D::operator=(
					const Vector2D& vOther);  // 161
			Debug2DText_t::operator=(
					const Debug2DText_t& p);  // 153
			Debug2DText_t::Debug2DText_t(
					const Debug2DText_t& p);  // 1520
			CopyConstruct<Debug2DText_t>(Debug2DText_t* pMemory,
							const Debug2DText_t& src);  // 1201
			CUtlMemory<Debug2DText_t, int>::Base(); // 112
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Base(); // 368
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::AddToTail(
					const Debug2DText_t& src);  // 601
			CUtlMemory<Debug2DText_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 1366
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 1369
	CUtlMemory<Debug2DText_t, int>::NumAllocated(); // 782
	CUtlMemory<Debug2DText_t, int>::Base(); // 112
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Base(); // 368
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<Debug2DText_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<Debug2DText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 32
		CUtlStringToken::CUtlStringToken(); // 36
		DebugBase_t::Init(
			float flStartTime,
			float flTimeToLive,
			float flMinimumTimeToLive);  // 38
		DebugBase_t::DebugBase_t(); // 61
		DebugTextBase_t::DebugTextBase_t(); // 153
		Vector2D::Vector2D(); // 153
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 32
		DebugBase_t::operator=(
				const DebugBase_t  &);  // 78
		V_strlen(const char* str); // 90
		strcpy(char* __dest,
			const char* __src);  // 124
		V_strcpy(char* dest,
			const char* src);  // 92
		DebugTextBase_t::SetText(
			const char* pText);  // 79
		DebugTextBase_t::operator=(
				const DebugTextBase_t& p);  // 73
		DebugTextBase_t::operator=(
				const DebugTextBase_t& p);  // 160
		Vector2D::operator=(
				const Vector2D& vOther);  // 161
		Debug2DText_t::operator=(
				const Debug2DText_t& p);  // 153
		Debug2DText_t::Debug2DText_t(
				const Debug2DText_t& p);  // 1520
		CopyConstruct<Debug2DText_t>(Debug2DText_t* pMemory,
						const Debug2DText_t& src);  // 1378
	}
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::AddVectorToTail<CUtlMemory<Debug2DText_t, int> >(
							const CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<Debug2DText_t>(
					CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& list,
					const CUtlVector<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >& srcList,
					SceneViewDebugOverlayTimingType_t type,
					float flAbsTime);  // 417
	{
		int i; // 589
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 589
		{
			const Debug3DText_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<Debug3DText_t, int>::NumAllocated(); // 1196
			CUtlMemory<Debug3DText_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 32
			CUtlStringToken::CUtlStringToken(); // 36
			DebugBase_t::Init(
				float flStartTime,
				float flTimeToLive,
				float flMinimumTimeToLive);  // 38
			DebugBase_t::DebugBase_t(); // 61
			DebugTextBase_t::DebugTextBase_t(); // 181
			Vector::Vector(); // 181
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 32
			DebugBase_t::operator=(
					const DebugBase_t  &);  // 78
			V_strlen(const char* str); // 90
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 92
			DebugTextBase_t::SetText(
				const char* pText);  // 79
			DebugTextBase_t::operator=(
					const DebugTextBase_t& p);  // 73
			DebugTextBase_t::operator=(
					const DebugTextBase_t& p);  // 188
			Vector::operator=(
					const Vector& vOther);  // 189
			Debug3DText_t::operator=(
					const Debug3DText_t& p);  // 181
			Debug3DText_t::Debug3DText_t(
					const Debug3DText_t& p);  // 1520
			CopyConstruct<Debug3DText_t>(Debug3DText_t* pMemory,
							const Debug3DText_t& src);  // 1201
			CUtlMemory<Debug3DText_t, int>::Base(); // 112
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Base(); // 368
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::AddToTail(
					const Debug3DText_t& src);  // 601
			CUtlMemory<Debug3DText_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 1366
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 1369
	CUtlMemory<Debug3DText_t, int>::NumAllocated(); // 782
	CUtlMemory<Debug3DText_t, int>::Base(); // 112
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Base(); // 368
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<Debug3DText_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<Debug3DText_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 32
		CUtlStringToken::CUtlStringToken(); // 36
		DebugBase_t::Init(
			float flStartTime,
			float flTimeToLive,
			float flMinimumTimeToLive);  // 38
		DebugBase_t::DebugBase_t(); // 61
		DebugTextBase_t::DebugTextBase_t(); // 181
		Vector::Vector(); // 181
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 32
		DebugBase_t::operator=(
				const DebugBase_t  &);  // 78
		V_strlen(const char* str); // 90
		strcpy(char* __dest,
			const char* __src);  // 124
		V_strcpy(char* dest,
			const char* src);  // 92
		DebugTextBase_t::SetText(
			const char* pText);  // 79
		DebugTextBase_t::operator=(
				const DebugTextBase_t& p);  // 73
		DebugTextBase_t::operator=(
				const DebugTextBase_t& p);  // 188
		Vector::operator=(
				const Vector& vOther);  // 189
		Debug3DText_t::operator=(
				const Debug3DText_t& p);  // 181
		Debug3DText_t::Debug3DText_t(
				const Debug3DText_t& p);  // 1520
		CopyConstruct<Debug3DText_t>(Debug3DText_t* pMemory,
						const Debug3DText_t& src);  // 1378
	}
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::AddVectorToTail<CUtlMemory<Debug3DText_t, int> >(
							const CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<Debug3DText_t>(
					CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& list,
					const CUtlVector<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >& srcList,
					SceneViewDebugOverlayTimingType_t type,
					float flAbsTime);  // 418
	{
		int i; // 589
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 589
		{
			const DebugCircle3D_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugCircle3D_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugCircle3D_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 227
			DebugCircle3D_t::DebugCircle3D_t(
					const DebugCircle3D_t  &);  // 1520
			CopyConstruct<DebugCircle3D_t>(DebugCircle3D_t* pMemory,
							const DebugCircle3D_t& src);  // 1201
			CUtlMemory<DebugCircle3D_t, int>::Base(); // 112
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Base(); // 368
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::AddToTail(
					const DebugCircle3D_t& src);  // 601
			CUtlMemory<DebugCircle3D_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 1369
	CUtlMemory<DebugCircle3D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugCircle3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugCircle3D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugCircle3D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 227
		DebugCircle3D_t::DebugCircle3D_t(
				const DebugCircle3D_t  &);  // 1520
		CopyConstruct<DebugCircle3D_t>(DebugCircle3D_t* pMemory,
						const DebugCircle3D_t& src);  // 1378
	}
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::AddVectorToTail<CUtlMemory<DebugCircle3D_t, int> >(
								const CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<DebugCircle3D_t>(
					CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& list,
					const CUtlVector<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >& srcList,
					SceneViewDebugOverlayTimingType_t type,
					float flAbsTime);  // 421
	{
		int i; // 589
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 589
		{
			const DebugCross3D_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugCross3D_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugCross3D_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 236
			DebugCross3D_t::DebugCross3D_t(
					const DebugCross3D_t  &);  // 1520
			CopyConstruct<DebugCross3D_t>(DebugCross3D_t* pMemory,
							const DebugCross3D_t& src);  // 1201
			CUtlMemory<DebugCross3D_t, int>::Base(); // 112
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Base(); // 368
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::AddToTail(
					const DebugCross3D_t& src);  // 601
			CUtlMemory<DebugCross3D_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 1369
	CUtlMemory<DebugCross3D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugCross3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugCross3D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugCross3D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 236
		DebugCross3D_t::DebugCross3D_t(
				const DebugCross3D_t  &);  // 1520
		CopyConstruct<DebugCross3D_t>(DebugCross3D_t* pMemory,
						const DebugCross3D_t& src);  // 1378
	}
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::AddVectorToTail<CUtlMemory<DebugCross3D_t, int> >(
								const CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<DebugCross3D_t>(
					CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& list,
					const CUtlVector<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >& srcList,
					SceneViewDebugOverlayTimingType_t type,
					float flAbsTime);  // 422
	{
		int i; // 589
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 589
		{
			const DebugTickMarkedLine3D_t& item; // 591
			bool bHasNotAgedOut; // 593
			DebugBase_t::GetStartTime(); // 599
			CUtlMemory<DebugTickMarkedLine3D_t, int>::NumAllocated(); // 1196
			CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Element(
				int i);  // 1201
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 32
			DebugBase_t::DebugBase_t(
					const DebugBase_t  &);  // 244
			DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t(
						const DebugTickMarkedLine3D_t  &);  // 1520
			CopyConstruct<DebugTickMarkedLine3D_t>(DebugTickMarkedLine3D_t* pMemory,
								const DebugTickMarkedLine3D_t& src);  // 1201
			CUtlMemory<DebugTickMarkedLine3D_t, int>::Base(); // 112
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Base(); // 368
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::AddToTail(
					const DebugTickMarkedLine3D_t& src);  // 601
			CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::operator[](
					int i);  // 591
			ConVarRef::CheckAccess(); // 129
			ConVarRef::GetInt(); // 594
			DebugBase_t::HasInfiniteLifetime(); // 90
			DebugBase_t::GetEndTime(); // 93
			DebugBase_t::HasExpired(
					float flAbsTime);  // 596
		}
	}
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 1366
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 1369
	CUtlMemory<DebugTickMarkedLine3D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugTickMarkedLine3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Element(
			int i);  // 1378
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 244
		DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t(
					const DebugTickMarkedLine3D_t  &);  // 1520
		CopyConstruct<DebugTickMarkedLine3D_t>(DebugTickMarkedLine3D_t* pMemory,
							const DebugTickMarkedLine3D_t& src);  // 1378
	}
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::AddVectorToTail<CUtlMemory<DebugTickMarkedLine3D_t, int> >(
									const CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& src);  // 584
	CSceneViewDebugOverlays::AddListToView<DebugTickMarkedLine3D_t>(
						CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& list,
						const CUtlVector<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >& srcList,
						SceneViewDebugOverlayTimingType_t type,
						float flAbsTime);  // 423
	Vector::operator=(
			const Vector& vOther);  // 431
	CSceneViewDebugOverlays::GetSceneWorldForRendering(); // 438
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 439
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 439
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 392
} /* size: 8511, variables: 4, inline expansions: 103 (12496 bytes) */

// <031592D5> ../scenesystem/sceneviewdebugoverlays.cpp:442
void CSceneViewDebugOverlays::AddToViewAndAgeList(ISceneView* pView, float flDelta, float flAbsTime)
{
} /* size: 181 */

// <03159298> ../scenesystem/sceneviewdebugoverlays.cpp:452
void CSceneViewDebugOverlays::SetDebugOverlayRenderType(DebugRenderType_t renderType)
{
} /* size: 11 */

// <0315926A> ../scenesystem/sceneviewdebugoverlays.cpp:457
void CSceneViewDebugOverlays::GetDebugOverlayRenderType()
{
} /* size: 11 */

// <0315923C> ../scenesystem/sceneviewdebugoverlays.cpp:462
void CSceneViewDebugOverlays::UnitTestCycleOverlayRenderType()
{
} /* size: 31 */

// <03185257> ../scenesystem/sceneviewdebugoverlays.cpp:472
// function call: 1
void CSceneViewDebugOverlays::Init(DebugBase_t& base, float64 flTimeToLive)
{
	{
	}
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 478
} /* size: 0, inline expansions: 1 (62 bytes) */

// <031591CA> ../scenesystem/sceneviewdebugoverlays.cpp:472
// variables: 2
void CSceneViewDebugOverlays::Init(DebugBase_t& base, float64 flTimeToLive)
{
	const char   __FUNCTION__; // 38713
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 474
	}
} /* size: 0, variables: 1 */

// <031588E8> ../scenesystem/sceneviewdebugoverlays.cpp:481
// variable: 1
// function calls: 41
void CSceneViewDebugOverlays::Add3DLine(const Vector& vEndPoint0, const Vector& vEndPoint1, const VertexColor_t& color, float64 flTimeToLive, bool bNoDepthTest, DebugRenderType_t type)
{
	DebugLineSegment3D_t newLine; // 483
	DebugBase_t::DebugBase_t(
			const DebugBase_t  &);  // 106
	DebugLineSegment3D_t::DebugLineSegment3D_t(
				const DebugLineSegment3D_t  &);  // 1520
	CopyConstruct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory,
						const DebugLineSegment3D_t& src);  // 1201
	CUtlMemory<DebugLineSegment3D_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Element(
		int i);  // 1201
	CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddToTail(
			const DebugLineSegment3D_t& src);  // 502
	Vector::operator=(
			const Vector& vOther);  // 492
	Vector::operator=(
			const Vector& vOther);  // 493
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 494
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::IsEmpty(); // 498
	CUtlMemory<DebugLineSegment3D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugLineSegment3D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugLineSegment3D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::EnsureCapacity(
			int num);  // 500
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::IsEmpty(); // 506
	CUtlMemory<DebugLineSegment3D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugLineSegment3D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugLineSegment3D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::EnsureCapacity(
			int num);  // 508
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
			const DebugLineSegment3D_t& src);  // 510
} /* size: 790, variables: 1, inline expansions: 41 (1430 bytes) */

// <03157DBB> ../scenesystem/sceneviewdebugoverlays.cpp:514
// variable: 1
// function calls: 50
void CSceneViewDebugOverlays::AddTriangle(const Vector& vPoint1, const Vector& vPoint2, const Vector& vPoint3, const VertexColor_t& color, float64 flTimeToLive, bool bNoDepthTest, DebugRenderType_t type)
{
	DebugTriangle3D_t newTriangle; // 516
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 212
	Vector::Vector(); // 212
	Vector::Vector(); // 212
	Vector::Vector(); // 212
	DebugTriangle3D_t::DebugTriangle3D_t(); // 516
	Vector::operator=(
			const Vector& vOther);  // 518
	Vector::operator=(
			const Vector& vOther);  // 519
	Vector::operator=(
			const Vector& vOther);  // 520
	DebugBase_t::DebugBase_t(
			const DebugBase_t  &);  // 212
	DebugTriangle3D_t::DebugTriangle3D_t(
				const DebugTriangle3D_t  &);  // 1520
	CopyConstruct<DebugTriangle3D_t>(DebugTriangle3D_t* pMemory,
					const DebugTriangle3D_t& src);  // 1201
	CUtlMemory<DebugTriangle3D_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Element(
		int i);  // 1201
	CUtlMemory<DebugTriangle3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::AddToTail(
			const DebugTriangle3D_t& src);  // 534
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 521
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::IsEmpty(); // 530
	CUtlMemory<DebugTriangle3D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugTriangle3D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugTriangle3D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::EnsureCapacity(
			int num);  // 532
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::IsEmpty(); // 538
	CUtlMemory<DebugTriangle3D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugTriangle3D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugTriangle3D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::EnsureCapacity(
			int num);  // 540
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
			const DebugTriangle3D_t& src);  // 542
} /* size: 930, variables: 1, inline expansions: 50 (1683 bytes) */

// <03183C15> ../scenesystem/sceneviewdebugoverlays.cpp:551
// variable: 1
// function calls: 13
void CSceneViewDebugOverlays::Grid(const Vector& vPos)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_553; // 553
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
} /* size: 210, variables: 1, inline expansions: 13 (439 bytes) */

// <03157D88> ../scenesystem/sceneviewdebugoverlays.cpp:551
// variable: 1
void CSceneViewDebugOverlays::Grid(const Vector& vPos)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_553; // 553
} /* size: 0, variables: 1 */

// <03185FB2> ../scenesystem/sceneviewdebugoverlays.cpp:561
// variable: 1
// function calls: 10
void CSceneViewDebugOverlays::Line(const Vector& vEndPoint0, const Vector& vEndPoint1, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_563; // 563
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
} /* size: 222, variables: 1, inline expansions: 10 (439 bytes) */

// <03157D21> ../scenesystem/sceneviewdebugoverlays.cpp:561
// variable: 1
void CSceneViewDebugOverlays::Line(const Vector& vEndPoint0, const Vector& vEndPoint1, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_563; // 563
} /* size: 0, variables: 1 */

// <03157287> ../scenesystem/sceneviewdebugoverlays.cpp:567
// variables: 2
// function calls: 43
void CSceneViewDebugOverlays::Line2D(const Vector2D& vecP0, const Vector2D& vecP1, const VertexColor_t& color, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_569; // 569
	DebugLineSegment2D_t newLine; // 571
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
			int nLineNumber);  // 569
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 112
	Vector2D::Vector2D(); // 112
	Vector2D::Vector2D(); // 112
	DebugLineSegment2D_t::DebugLineSegment2D_t(); // 571
	CUtlMemory<DebugLineSegment2D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugLineSegment2D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugLineSegment2D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::EnsureCapacity(
			int num);  // 581
	Vector2D::operator=(
			const Vector2D& vOther);  // 575
	Vector2D::operator=(
			const Vector2D& vOther);  // 576
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::IsEmpty(); // 579
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 577
	CUtlMemory<DebugLineSegment2D_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 32
	DebugBase_t::DebugBase_t(
			const DebugBase_t  &);  // 112
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 112
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 112
	DebugLineSegment2D_t::DebugLineSegment2D_t(
				const DebugLineSegment2D_t  &);  // 1520
	CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
						const DebugLineSegment2D_t& src);  // 1201
	CUtlMemory<DebugLineSegment2D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddToTail(
			const DebugLineSegment2D_t& src);  // 583
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 584
} /* size: 681, variables: 2, inline expansions: 43 (1362 bytes) */

// <031567FB> ../scenesystem/sceneviewdebugoverlays.cpp:586
// variables: 2
// function calls: 45
void CSceneViewDebugOverlays::Add2DLineToRenderLists(const Vector2D& vecP0, const Vector2D& vecP1, const VertexColor_t& color, DebugRenderType_t renderType)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_588; // 588
	DebugLineSegment2D_t newLine; // 590
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
			int nLineNumber);  // 588
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 112
	Vector2D::Vector2D(); // 112
	Vector2D::Vector2D(); // 112
	DebugLineSegment2D_t::DebugLineSegment2D_t(); // 590
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 478
	CSceneViewDebugOverlays::Init(
		DebugBase_t& base,
		float64 flTimeToLive);  // 591
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 595
	CUtlMemory<DebugLineSegment2D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugLineSegment2D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugLineSegment2D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::EnsureCapacity(
			int num);  // 599
	Vector2D::operator=(
			const Vector2D& vOther);  // 593
	Vector2D::operator=(
			const Vector2D& vOther);  // 594
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::IsEmpty(); // 597
	CUtlMemory<DebugLineSegment2D_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 32
	DebugBase_t::DebugBase_t(
			const DebugBase_t  &);  // 112
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 112
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 112
	DebugLineSegment2D_t::DebugLineSegment2D_t(
				const DebugLineSegment2D_t  &);  // 1520
	CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
						const DebugLineSegment2D_t& src);  // 1201
	CUtlMemory<DebugLineSegment2D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddToTail(
			const DebugLineSegment2D_t& src);  // 601
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 602
} /* size: 652, variables: 2, inline expansions: 45 (1424 bytes) */

// <03155952> ../scenesystem/sceneviewdebugoverlays.cpp:604
// variables: 2
// function calls: 55
void CSceneViewDebugOverlays::Texture(HRenderTexture hTexture, const Rect_t& destRect, const VertexColor_t& color, const Vector2D& vTopLeftUV, const Vector2D& vBottomRightUV, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_606; // 606
	DebugTextureDisplay_t& newTex; // 613
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
			int nLineNumber);  // 606
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::IsEmpty(); // 608
	CUtlMemory<DebugTextureDisplay_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugTextureDisplay_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugTextureDisplay_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::EnsureCapacity(
			int num);  // 610
	CUtlMemory<DebugTextureDisplay_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Element(
		int i);  // 1148
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 118
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(); // 118
	Vector2D::Vector2D(); // 118
	Vector2D::Vector2D(); // 118
	DebugTextureDisplay_t::DebugTextureDisplay_t(); // 1479
	Construct<DebugTextureDisplay_t>(DebugTextureDisplay_t* pMemory); // 1148
	CUtlMemory<DebugTextureDisplay_t, int>::Base(); // 112
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Base(); // 368
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::AddToTail(); // 612
	CUtlMemory<DebugTextureDisplay_t, int>::operator[](
			int i);  // 630
	CUtlVectorBase<DebugTextureDisplay_t, CUtlMemory<DebugTextureDisplay_t, int> >::Tail(); // 613
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 615
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 617
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 622
	Vector2D::operator=(
			const Vector2D& vOther);  // 618
	Vector2D::operator=(
			const Vector2D& vOther);  // 619
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 622
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 622
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 623
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 623
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 623
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 624
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 624
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 624
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 625
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 625
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 625
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 626
} /* size: 1041, variables: 2, inline expansions: 55 (1439 bytes) */

// <031557E1> ../scenesystem/sceneviewdebugoverlays.cpp:628
// function calls: 2
void CSceneViewDebugOverlays::FilledRect2D(const Rect_t& destRect, const VertexColor_t& color, float64 flTimeToLive)
{
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 630
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 630
} /* size: 186, inline expansions: 2 (19 bytes) */

// <031551C5> ../scenesystem/sceneviewdebugoverlays.cpp:633
// variable: 1
// function calls: 27
void CSceneViewDebugOverlays::AddDebugSceneObject(CSceneObject* pSceneObject, float64 flTimeToLive)
{
	DebugSceneObject_t& newSceneObject; // 644
	CSceneObject::SetLayerMatchID(
			CUtlStringToken nTok);  // 637
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Count(); // 135
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::IsEmpty(); // 639
	CUtlMemory<DebugSceneObject_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugSceneObject_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugSceneObject_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::EnsureCapacity(
			int num);  // 641
	CUtlMemory<DebugSceneObject_t, int>::Base(); // 112
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Base(); // 368
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<DebugSceneObject_t, int>::IsGrowable(); // 823
	CUtlMemory<DebugSceneObject_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<DebugSceneObject_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<DebugSceneObject_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<DebugSceneObject_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Element(
		int i);  // 1148
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 206
	DebugSceneObject_t::DebugSceneObject_t(); // 1479
	Construct<DebugSceneObject_t>(DebugSceneObject_t* pMemory); // 1148
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::AddToTail(); // 643
	CUtlMemory<DebugSceneObject_t, int>::operator[](
			int i);  // 630
	CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Tail(); // 644
} /* size: 729, variables: 1, inline expansions: 27 (1603 bytes) */

// <031546B3> ../scenesystem/sceneviewdebugoverlays.cpp:650
// variables: 2
// function calls: 45
void CSceneViewDebugOverlays::VectorText3D(const Vector& vPos, const Vector& vUp, const Vector& vLeft, const char* pStr, const VertexColor_t& color, bool bCenter, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_652; // 652
	Debug3DVectorText_t& newVectorText; // 659
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
			int nLineNumber);  // 652
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::IsEmpty(); // 654
	CUtlMemory<Debug3DVectorText_t, int>::IsGrowable(); // 881
	CUtlMemory<Debug3DVectorText_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Debug3DVectorText_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::EnsureCapacity(
			int num);  // 656
	CUtlMemory<Debug3DVectorText_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Element(
		int i);  // 1148
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 61
	DebugTextBase_t::DebugTextBase_t(); // 128
	Vector::Vector(); // 128
	Vector::Vector(); // 128
	Vector::Vector(); // 128
	Debug3DVectorText_t::Debug3DVectorText_t(); // 1479
	Construct<Debug3DVectorText_t>(Debug3DVectorText_t* pMemory); // 1148
	CUtlMemory<Debug3DVectorText_t, int>::Base(); // 112
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Base(); // 368
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::AddToTail(); // 658
	CUtlMemory<Debug3DVectorText_t, int>::operator[](
			int i);  // 630
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Tail(); // 659
	V_strlen(const char* str); // 90
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 92
	DebugTextBase_t::SetText(
		const char* pText);  // 661
	Vector::operator=(
			const Vector& vOther);  // 662
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 665
	Vector::operator=(
			const Vector& vOther);  // 663
	Vector::operator=(
			const Vector& vOther);  // 664
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 667
} /* size: 796, variables: 2, inline expansions: 45 (1506 bytes) */

// <03187277> ../scenesystem/sceneviewdebugoverlays.cpp:669
// variable: 1
// function call: 1
void CSceneViewDebugOverlays::Text(const Vector2D& vPos, int nTextLineOffsetY, const char* pStr, float flScale, const VertexColor_t& color, float64 flTimeToLive)
{
	bool bOutline; // 671
	ConVar::GetInt(); // 671
} /* size: 82, variables: 1, inline expansions: 1 (7 bytes) */

// <0315463F> ../scenesystem/sceneviewdebugoverlays.cpp:669
// variable: 1
void CSceneViewDebugOverlays::Text(const Vector2D& vPos, int nTextLineOffsetY, const char* pStr, float flScale, const VertexColor_t& color, float64 flTimeToLive)
{
	bool bOutline; // 671
} /* size: 0, variables: 1 */

// <03153BD2> ../scenesystem/sceneviewdebugoverlays.cpp:675
// variables: 2
// function calls: 41
void CSceneViewDebugOverlays::TextWithFont(const Vector2D& vPos, int nTextLineOffsetY, const char* pStr, float flScale, const VertexColor_t& color, bool bOutline, bool bFractional, FontHandle_t font, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_677; // 677
	Debug2DText_t& newDebugText; // 684
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
			int nLineNumber);  // 677
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::IsEmpty(); // 679
	CUtlMemory<Debug2DText_t, int>::IsGrowable(); // 881
	CUtlMemory<Debug2DText_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Debug2DText_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::EnsureCapacity(
			int num);  // 681
	CUtlMemory<Debug2DText_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Element(
		int i);  // 1148
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 61
	DebugTextBase_t::DebugTextBase_t(); // 152
	Vector2D::Vector2D(); // 152
	Debug2DText_t::Debug2DText_t(); // 1479
	Construct<Debug2DText_t>(Debug2DText_t* pMemory); // 1148
	CUtlMemory<Debug2DText_t, int>::Base(); // 112
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Base(); // 368
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::AddToTail(); // 683
	CUtlMemory<Debug2DText_t, int>::operator[](
			int i);  // 630
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Tail(); // 684
	V_strlen(const char* str); // 90
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 92
	DebugTextBase_t::SetText(
		const char* pText);  // 686
	Vector2D::operator=(
			const Vector2D& vOther);  // 687
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 690
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 694
} /* size: 764, variables: 2, inline expansions: 41 (1478 bytes) */

// <0318736F> ../scenesystem/sceneviewdebugoverlays.cpp:696
// variable: 1
// function call: 1
void CSceneViewDebugOverlays::Text(const Vector& vOrigin, int nTextLineOffsetY, const char* pText, float flMaxDistToDisplay, const VertexColor_t& color, float64 flTimeToLive)
{
	bool bOutline; // 698
	ConVar::GetInt(); // 698
} /* size: 28, variables: 1, inline expansions: 1 (7 bytes) */

// <03153B5E> ../scenesystem/sceneviewdebugoverlays.cpp:696
// variable: 1
void CSceneViewDebugOverlays::Text(const Vector& vOrigin, int nTextLineOffsetY, const char* pText, float flMaxDistToDisplay, const VertexColor_t& color, float64 flTimeToLive)
{
	bool bOutline; // 698
} /* size: 0, variables: 1 */

// <031530F9> ../scenesystem/sceneviewdebugoverlays.cpp:702
// variables: 2
// function calls: 41
void CSceneViewDebugOverlays::Text(const Vector& vOrigin, int nTextLineOffsetY, const char* pText, float flMaxDistToDisplay, const VertexColor_t& color, bool bOutline, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_704; // 704
	Debug3DText_t& newDebugText; // 711
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
			int nLineNumber);  // 704
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::IsEmpty(); // 706
	CUtlMemory<Debug3DText_t, int>::IsGrowable(); // 881
	CUtlMemory<Debug3DText_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Debug3DText_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::EnsureCapacity(
			int num);  // 708
	CUtlMemory<Debug3DText_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Element(
		int i);  // 1148
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 61
	DebugTextBase_t::DebugTextBase_t(); // 180
	Vector::Vector(); // 180
	Debug3DText_t::Debug3DText_t(); // 1479
	Construct<Debug3DText_t>(Debug3DText_t* pMemory); // 1148
	CUtlMemory<Debug3DText_t, int>::Base(); // 112
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Base(); // 368
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::AddToTail(); // 710
	CUtlMemory<Debug3DText_t, int>::operator[](
			int i);  // 630
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Tail(); // 711
	V_strlen(const char* str); // 90
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 92
	DebugTextBase_t::SetText(
		const char* pText);  // 713
	Vector::operator=(
			const Vector& vOther);  // 714
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 718
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 720
} /* size: 812, variables: 2, inline expansions: 41 (1509 bytes) */

// <03152686> ../scenesystem/sceneviewdebugoverlays.cpp:722
// variables: 2
// function calls: 41
void CSceneViewDebugOverlays::TextPretty(const Vector& vOrigin, int nTextLineOffsetY, const char* pText, float flMaxDistToDisplay, const VertexColor_t& c, float64 flTimeToLive, FontHandle_t fontHandle, bool bOutlineFont)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_724; // 724
	Debug3DText_t& newDebugText; // 731
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
			int nLineNumber);  // 724
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::IsEmpty(); // 726
	CUtlMemory<Debug3DText_t, int>::IsGrowable(); // 881
	CUtlMemory<Debug3DText_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Debug3DText_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::EnsureCapacity(
			int num);  // 728
	CUtlMemory<Debug3DText_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Element(
		int i);  // 1148
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 61
	DebugTextBase_t::DebugTextBase_t(); // 180
	Vector::Vector(); // 180
	Debug3DText_t::Debug3DText_t(); // 1479
	Construct<Debug3DText_t>(Debug3DText_t* pMemory); // 1148
	CUtlMemory<Debug3DText_t, int>::Base(); // 112
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Base(); // 368
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::AddToTail(); // 730
	CUtlMemory<Debug3DText_t, int>::operator[](
			int i);  // 630
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Tail(); // 731
	V_strlen(const char* str); // 90
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 92
	DebugTextBase_t::SetText(
		const char* pText);  // 733
	Vector::operator=(
			const Vector& vOther);  // 734
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 738
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 741
} /* size: 812, variables: 2, inline expansions: 41 (1491 bytes) */

// <03151787> ../scenesystem/sceneviewdebugoverlays.cpp:743
// variables: 9
// function calls: 48
void CSceneViewDebugOverlays::Render3DLineOverlay(IRenderContext* pCtx, int nCount, DebugLineSegment3D_t* pLines, bool bNoDepthTest)
{
	const IMaterial2* pMat; // 746
	IMaterialMode* pMode; // 751
	const char   __FUNCTION__; // 39083
	{
		int nToDo; // 760
		DebugRenderType_t renderType; // 762
		CDynamicVertexData<VertexWireFrame_t> lineVB; // 763
		CRenderAttributes renderAttributes; // 783
		{
			int i; // 764
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 766
			}
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 751
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			VertexWireFrame_t::operator=(
					const VertexWireFrame_t  &);  // 355
			{
			}
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 771
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 775
			Vector::operator=(
					const Vector& vOther);  // 773
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 774
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 751
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			VertexWireFrame_t::operator=(
					const VertexWireFrame_t  &);  // 355
			{
			}
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 776
			Vector::operator=(
					const Vector& vOther);  // 767
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 769
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 770
			Vector::operator=(
					const Vector& vOther);  // 839
			VertexWireFrame_t::StartPoint(
					const Vector& vecStartPoint);  // 768
		}
		CDynamicVertexData<VertexWireFrame_t>::Lock(
			int nVertexCount);  // 680
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexWireFrame_t>::ClearVertexFields(); // 171
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 751
		VertexColor_t::VertexColor_t(); // 751
		Vector::Vector(); // 751
		Vector::Vector(); // 751
		VertexWireFrame_t::VertexWireFrame_t(); // 165
		CVertexDataBase<VertexWireFrame_t>::CVertexDataBase(); // 673
		CDynamicVertexData<VertexWireFrame_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 763
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 639
		CDynamicVertexData<VertexWireFrame_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 640
		CDynamicVertexData<VertexWireFrame_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 780
		ConVar::GetInt(); // 791
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexWireFrame_t>::~CDynamicVertexData(); // 815
	}
	CUtlStringToken::CUtlStringToken(); // 751
} /* size: 0, variables: 3, inline expansions: 1 (10 bytes) */

// <0315173F> ../scenesystem/sceneviewdebugoverlays.cpp:818
// variable: 1
inline Vector SpherePos(float flPhi, float flTheta, float flRadius)
{
	float flRSinTheta; // 820
} /* size: 0, variables: 1 */

// <0314E0D9> ../scenesystem/sceneviewdebugoverlays.cpp:824
// variables: 61
// function calls: 204
void CSceneViewDebugOverlays::Render3DSphereBatches(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer, const CUtlVector<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >& debugList, bool bNoDepthTest)
{
	int nCount; // 826
	const DebugSphere_t* pSpheres; // 827
	const IMaterial2* pMat; // 829
	IMaterialMode* pMode; // 834
	CRenderAttributes renderAttributes; // 841
	CUtlVectorFixedGrowable<const DebugSphere_t*, 1024> spheresToRender; // 849
	const DebugSphere_t ** ppSpheres; // 863
	const int  NUM_LAYERS; // 865
	const int  NUM_SLICES; // 866
	const int  MAX_NUM_LINES_PER_SPHERE; // 868
	const char   __FUNCTION__; // 39137
	{
		int i; // 850
		{
			float flRad; // 852
			VectorAligned vMins; // 853
			VectorAligned vMaxs; // 854
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 853
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 853
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 853
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 854
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 854
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 854
			{
				fltx4 retVal; // 602
				_mm_load_ps(const float* __P); // 603
			}
			LoadAlignedSIMD<>(const void* pSIMD); // 669
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 670
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 671
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 673
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 674
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 675
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 676
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 677
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 678
			{
				int i; // 682
				{
					fltx4 xTotalBack; // 684
					fltx4 yTotalBack; // 685
					fltx4 zTotalBack; // 686
					fltx4 dotBack; // 687
					fltx4 isOut; // 693
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 684
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 685
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 686
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 685
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 686
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 684
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 687
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 687
					{
						fltx4 retVal; // 2067
						_mm_cmplt_ps(__m128 __A,
								__m128 __B);  // 2068
					}
					CmpLtSIMD<>(const fltx4& a,
							const fltx4& b);  // 693
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 1842
					IsAnyNegative<>(const fltx4& a); // 694
				}
			}
			CFrustum::CheckBoxInline(
					const VectorAligned& mins,
					const VectorAligned& maxs);  // 856
			CUtlMemory<const DebugSphere_t::NumAllocated(); // 1196
			CUtlMemory<const DebugSphere_t::operator[](
					int i);  // 602
			CUtlVectorBase<const DebugSphere_t::Element(
				int i);  // 1201
			CopyConstruct<const DebugSphere_t*>(const DebugSphere_t ** pMemory,
								const DebugSphere_t* const& src);  // 1201
			CUtlMemory<const DebugSphere_t::IsGrowable(); // 823
			CUtlMemory<const DebugSphere_t::IsExternallyAllocated(); // 859
			CUtlMemory<const DebugSphere_t::IsExternallyAllocated(); // 861
			CUtlMemory<const DebugSphere_t::Grow(
				int num);  // 806
			CUtlVectorBase<const DebugSphere_t::ResetDbgInfo(); // 824
			CUtlVectorBase<const DebugSphere_t::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const DebugSphere_t::AddToTail(
					const DebugSphere_t* const& src);  // 859
		}
	}
	{
		int nToDo; // 871
		int nNumLinesOutput; // 872
		DebugRenderType_t renderType; // 874
		CDynamicVertexData<VertexWireFrame_t> lineVB; // 875
		{
			int i; // 877
			{
				float flRad; // 882
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 880
				}
				{
					int nSlice; // 885
					{
						float flUAng; // 887
						float flUAng1; // 888
						{
							int nLayer; // 889
							{
								float flVAng; // 891
								float flVAng1; // 892
								Vector vPt1; // 897
								{
								}
								Vector::operator=(
										const Vector& vOther);  // 103
								VertexPos_t::operator=(
										const VertexPos_t  &);  // 751
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								VertexWireFrame_t::operator=(
										const VertexWireFrame_t  &);  // 355
								{
								}
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 901
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 821
								SpherePos(float flPhi,
										float flTheta,
										float flRadius);  // 903
								Vector::Vector(); // 1436
								VectorAdd(const Vector& a,
										const Vector& b,
										Vector& c);  // 1437
								Vector::operator+(
										const Vector& v);  // 903
								{
								}
								Vector::operator=(
										const Vector& vOther);  // 103
								VertexPos_t::operator=(
										const VertexPos_t  &);  // 751
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								VertexWireFrame_t::operator=(
										const VertexWireFrame_t  &);  // 355
								{
								}
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 905
								Vector::operator=(
										const Vector& vOther);  // 903
								Vector::operator=(
										const Vector& vOther);  // 839
								VertexWireFrame_t::StartPoint(
										const Vector& vecStartPoint);  // 904
								Vector::operator=(
										const Vector& vOther);  // 908
								Vector::operator=(
										const Vector& vOther);  // 839
								VertexWireFrame_t::StartPoint(
										const Vector& vecStartPoint);  // 909
								{
								}
								Vector::operator=(
										const Vector& vOther);  // 103
								VertexPos_t::operator=(
										const VertexPos_t  &);  // 751
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								VertexWireFrame_t::operator=(
										const VertexWireFrame_t  &);  // 355
								{
								}
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 910
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 821
								SpherePos(float flPhi,
										float flTheta,
										float flRadius);  // 912
								Vector::Vector(); // 1436
								VectorAdd(const Vector& a,
										const Vector& b,
										Vector& c);  // 1437
								Vector::operator+(
										const Vector& v);  // 912
								{
								}
								Vector::operator=(
										const Vector& vOther);  // 103
								VertexPos_t::operator=(
										const VertexPos_t  &);  // 751
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								Vector::operator=(
										const Vector& vOther);  // 751
								VertexWireFrame_t::operator=(
										const VertexWireFrame_t  &);  // 355
								{
								}
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
								CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 914
								Vector::operator=(
										const Vector& vOther);  // 912
								Vector::operator=(
										const Vector& vOther);  // 839
								VertexWireFrame_t::StartPoint(
										const Vector& vecStartPoint);  // 913
								Vector::Init(
									vec_t ix,
									vec_t iy,
									vec_t iz);  // 894
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 895
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 821
								SpherePos(float flPhi,
										float flTheta,
										float flRadius);  // 897
								Vector::Vector(); // 1436
								VectorAdd(const Vector& a,
										const Vector& b,
										Vector& c);  // 1437
								Vector::operator+(
										const Vector& v);  // 897
								Vector::operator=(
										const Vector& vOther);  // 899
								Vector::operator=(
										const Vector& vOther);  // 839
								VertexWireFrame_t::StartPoint(
										const Vector& vecStartPoint);  // 900
							}
						}
					}
				}
			}
		}
		CDynamicVertexData<VertexWireFrame_t>::Lock(
			int nVertexCount);  // 680
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexWireFrame_t>::ClearVertexFields(); // 171
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 751
		VertexColor_t::VertexColor_t(); // 751
		Vector::Vector(); // 751
		Vector::Vector(); // 751
		VertexWireFrame_t::VertexWireFrame_t(); // 165
		CVertexDataBase<VertexWireFrame_t>::CVertexDataBase(); // 673
		CDynamicVertexData<VertexWireFrame_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 876
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 639
		CDynamicVertexData<VertexWireFrame_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 640
		CDynamicVertexData<VertexWireFrame_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 920
		ConVar::GetInt(); // 926
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexWireFrame_t>::~CDynamicVertexData(); // 950
	}
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Count(); // 826
	CUtlMemory<DebugSphere_t, int>::Base(); // 113
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Base(); // 827
	CUtlStringToken::CUtlStringToken(); // 834
	CUtlMemory<const DebugSphere_t::CUtlMemory(
			const DebugSphere_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const DebugSphere_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const DebugSphere_t::CUtlMemoryFixedGrowable_Base(
					const DebugSphere_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1024, const DebugSphere_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1024, const DebugSphere_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1024, const DebugSphere_t::Base(); // 231
	CUtlMemoryFixedGrowable<const DebugSphere_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const DebugSphere_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const DebugSphere_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const DebugSphere_t::CUtlVectorFixedGrowable(
				int growSize);  // 849
	CUtlMemory<const DebugSphere_t::Base(); // 112
	CUtlVectorBase<const DebugSphere_t::Base(); // 863
	CUtlVectorBase<const DebugSphere_t::Count(); // 862
	CUtlMemory<const DebugSphere_t::IsExternallyAllocated(); // 577
	CUtlMemory<const DebugSphere_t::ConvertToExternalMemory(
				const DebugSphere_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const DebugSphere_t::Purge_FixedGrowable(
				const DebugSphere_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const DebugSphere_t::Purge_FixedGrowable(
				const DebugSphere_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1024, const DebugSphere_t::Base(); // 237
	CUtlMemoryFixedGrowable<const DebugSphere_t::Purge(
		int numElements);  // 1799
	CUtlVectorBase<const DebugSphere_t::RemoveAll(); // 1798
	CUtlMemory<const DebugSphere_t::Base(); // 112
	CUtlVectorBase<const DebugSphere_t::Base(); // 368
	CUtlVectorBase<const DebugSphere_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const DebugSphere_t::Purge(); // 560
	CUtlMemory<const DebugSphere_t::Purge(); // 903
	CUtlMemory<const DebugSphere_t::Purge(); // 510
	ValidateAlignment<const DebugSphere_t*>(void); // 508
	CUtlMemory<const DebugSphere_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const DebugSphere_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const DebugSphere_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const DebugSphere_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const DebugSphere_t::~CUtlVectorFixedGrowable(); // 951
} /* size: 0, variables: 11, inline expansions: 36 (1104 bytes) */

// <0314D091> ../scenesystem/sceneviewdebugoverlays.cpp:953
// variables: 6
// function calls: 72
void CSceneViewDebugOverlays::Render3DLineBatches(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer, const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& debugList, bool bNoDepthTest)
{
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > debugClientBatch; // 955
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > debugServerBatch; // 956
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > debugInterpolatedBatch; // 957
	const char   __FUNCTION__; // 39083
	{
		int i; // 959
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
		}
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 959
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
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddToTail(
				const DebugLineSegment3D_t& src);  // 971
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
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddToTail(
				const DebugLineSegment3D_t& src);  // 967
		CUtlMemory<DebugLineSegment3D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::operator[](
				int i);  // 961
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
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddToTail(
				const DebugLineSegment3D_t& src);  // 963
	}
	CUtlMemory<DebugLineSegment3D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugLineSegment3D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVector(); // 955
	CUtlMemory<DebugLineSegment3D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugLineSegment3D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVector(); // 956
	CUtlMemory<DebugLineSegment3D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugLineSegment3D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVector(); // 957
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment3D_t>(void); // 508
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVector(); // 982
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment3D_t>(void); // 508
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVector(); // 982
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Purge(); // 560
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVector(); // 982
} /* size: 0, variables: 4, inline expansions: 36 (1006 bytes) */

// <0314CEAA> ../scenesystem/sceneviewdebugoverlays.cpp:984
void CSceneViewDebugOverlays::Render3DLineOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
} /* size: 205 */

// <0314CE21> ../scenesystem/sceneviewdebugoverlays.cpp:999
// variables: 6
bool ClipTriangle(const DebugTriangle3D_t* pTri, const Vector& vecCameraPosition, const Vector& vecCameraForward)
{
	Vector to1; // 1002
	Vector to2; // 1003
	Vector to3; // 1004
	float dot1; // 1014
	float dot2; // 1015
	float dot3; // 1016
} /* size: 0, variables: 6 */

// <03185304> ../scenesystem/sceneviewdebugoverlays.cpp:1026
// variables: 2
void CSceneViewDebugOverlays::Render3DTriangleOverlay(IRenderContext* pCtx, const CFrustum* pFrustum, int nCount, DebugTriangle3D_t* pTris, bool bNoDepthTest)
{
	const IMaterial2* pMat; // 1031
	IMaterialMode* pMode; // 1035
} /* size: 0, variables: 2 */

// <0318422D> ../scenesystem/sceneviewdebugoverlays.cpp:1026
// variables: 7
// function calls: 55
void IRenderContext::Render3DTriangleOverlay()
{
	const IMaterial2* pMat; // 1031
	IMaterialMode* pMode; // 1035
	CUtlStringToken::CUtlStringToken(); // 1035
	{
		int nToDo; // 1044
		DebugRenderType_t renderType; // 1046
		CDynamicVertexData<VertexWireFrame_t> triVB; // 1047
		CRenderAttributes renderAttributes; // 1068
		CDynamicVertexData<VertexWireFrame_t>::Lock(
			int nVertexCount);  // 680
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexWireFrame_t>::ClearVertexFields(); // 171
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 751
		VertexColor_t::VertexColor_t(); // 751
		Vector::Vector(); // 751
		Vector::Vector(); // 751
		VertexWireFrame_t::VertexWireFrame_t(); // 165
		CVertexDataBase<VertexWireFrame_t>::CVertexDataBase(); // 673
		CDynamicVertexData<VertexWireFrame_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 1047
		{
			int i; // 1048
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 751
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			VertexWireFrame_t::operator=(
					const VertexWireFrame_t  &);  // 355
			{
			}
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 1053
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 1056
			Vector::operator=(
					const Vector& vOther);  // 1055
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 751
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			VertexWireFrame_t::operator=(
					const VertexWireFrame_t  &);  // 355
			{
			}
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 1057
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 1060
			Vector::operator=(
					const Vector& vOther);  // 1059
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 751
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			Vector::operator=(
					const Vector& vOther);  // 751
			VertexWireFrame_t::operator=(
					const VertexWireFrame_t  &);  // 355
			{
			}
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 1061
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 1051
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 1052
		}
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 639
		CDynamicVertexData<VertexWireFrame_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 640
		CDynamicVertexData<VertexWireFrame_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 1066
		ConVar::GetInt(); // 1075
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexWireFrame_t>::~CDynamicVertexData(); // 1097
	}
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <0314CD46> ../scenesystem/sceneviewdebugoverlays.cpp:1026
// variables: 9
void CSceneViewDebugOverlays::Render3DTriangleOverlay(IRenderContext* pCtx, const CFrustum* pFrustum, int nCount, DebugTriangle3D_t* pTris, bool bNoDepthTest)
{
	const IMaterial2* pMat; // 1031
	IMaterialMode* pMode; // 1035
	const char   __FUNCTION__; // 39191
	{
		int nToDo; // 1044
		DebugRenderType_t renderType; // 1046
		CDynamicVertexData<VertexWireFrame_t> triVB; // 1047
		CRenderAttributes renderAttributes; // 1068
		{
			int i; // 1048
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1050
			}
		}
	}
} /* size: 0, variables: 3 */

// <0314B61D> ../scenesystem/sceneviewdebugoverlays.cpp:1100
// variables: 8
// function calls: 100
void CSceneViewDebugOverlays::Render3DTrangleBatches(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer, const CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >& debugList, bool bNoDepthTest)
{
	Vector vecCameraPosition; // 1102
	Vector vecCameraForward; // 1102
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > debugClientBatch; // 1106
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > debugServerBatch; // 1107
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> > debugInterpolatedBatch; // 1108
	const char   __FUNCTION__; // 39164
	{
		int i; // 1109
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1129
		}
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Count(); // 1109
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 1002
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1003
		Vector::LengthSqr(); // 1006
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 1004
		Vector::LengthSqr(); // 1007
		Vector::LengthSqr(); // 1008
		DotProduct(const Vector& a,
				const Vector& b);  // 1014
		DotProduct(const Vector& a,
				const Vector& b);  // 1015
		DotProduct(const Vector& a,
				const Vector& b);  // 1016
		ClipTriangle(const DebugTriangle3D_t* pTri,
				const Vector& vecCameraPosition,
				const Vector& vecCameraForward);  // 1112
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
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::AddToTail(
				const DebugTriangle3D_t& src);  // 1125
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
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::AddToTail(
				const DebugTriangle3D_t& src);  // 1121
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
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::AddToTail(
				const DebugTriangle3D_t& src);  // 1117
		CUtlMemory<DebugTriangle3D_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::operator[](
				int i);  // 1112
	}
	matrix3x4_t::GetRow(
		int nRow);  // 629
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 631
	CFrustum::ViewForward(
			Vector& vViewForward);  // 1104
	Vector::operator=(
			const Vector& vOther);  // 1103
	Vector::Vector(); // 1102
	Vector::Vector(); // 1102
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<DebugTriangle3D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugTriangle3D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVector(); // 1106
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<DebugTriangle3D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugTriangle3D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVector(); // 1107
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<DebugTriangle3D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugTriangle3D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::CUtlVector(); // 1108
	CSceneViewDebugOverlays::Render3DTriangleOverlay(
				IRenderContext* pCtx,
				const CFrustum* pFrustum,
				int nCount,
				DebugTriangle3D_t* pTris,
				bool bNoDepthTest);  // 1132
	CUtlMemory<DebugTriangle3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Base(); // 1132
	CSceneViewDebugOverlays::Render3DTriangleOverlay(
				IRenderContext* pCtx,
				const CFrustum* pFrustum,
				int nCount,
				DebugTriangle3D_t* pTris,
				bool bNoDepthTest);  // 1133
	CSceneViewDebugOverlays::Render3DTriangleOverlay(
				IRenderContext* pCtx,
				const CFrustum* pFrustum,
				int nCount,
				DebugTriangle3D_t* pTris,
				bool bNoDepthTest);  // 1134
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 903
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTriangle3D_t>(void); // 508
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 510
	CUtlMemory<DebugTriangle3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVector(); // 1135
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 903
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugTriangle3D_t>(void); // 508
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 510
	CUtlMemory<DebugTriangle3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVector(); // 1135
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 903
	CUtlMemory<DebugTriangle3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::Purge(); // 560
	CUtlVectorBase<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugTriangle3D_t, CUtlMemory<DebugTriangle3D_t, int> >::~CUtlVector(); // 1135
} /* size: 0, variables: 6, inline expansions: 48 (1365 bytes) */

// <031867BB> ../scenesystem/sceneviewdebugoverlays.cpp:1137
void CSceneViewDebugOverlays::Render3DTriangleOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
} /* size: 0 */

// <03149E6A> ../scenesystem/sceneviewdebugoverlays.cpp:1153
// variables: 17
// function calls: 100
void CSceneViewDebugOverlays::RenderGridOverlay(IRenderContext* pCtx)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1155; // 1155
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> > gridLines; // 1160
	int gridSpacing; // 1162
	int numHorzSpaces; // 1163
	int numVertSpaces; // 1164
	Vector startGrid; // 1166
	DebugLineSegment3D_t gridLine; // 1175
	Vector color; // 1176
	{
		int i; // 1177
		{
			Vector startLine; // 1180
			{
				int j; // 1182
				{
					Vector endLine; // 1184
					Vector bottomStartLine; // 1195
					{
						int k; // 1197
						{
							Vector bottomEndLine; // 1199
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
							CUtlMemory<DebugLineSegment3D_t, int>::NumAllocated(); // 1196
							CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 112
							CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 368
							CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
							CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddToTail(
									const DebugLineSegment3D_t& src);  // 1207
							Vector::Vector(); // 1199
							Color::SetColor(
								int _r,
								int _g,
								int _b,
								int _a);  // 50
							Color::Color(
								int _r,
								int _g,
								int _b,
								int _a);  // 1205
							VertexColor_t::operator=(
									const Color& src);  // 1205
							CUtlStringToken::CUtlStringToken(); // 1206
						}
					}
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
					CUtlMemory<DebugLineSegment3D_t, int>::NumAllocated(); // 1196
					CUtlMemory<DebugLineSegment3D_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Element(
						int i);  // 1201
					CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddToTail(
							const DebugLineSegment3D_t& src);  // 1192
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1190
					VertexColor_t::operator=(
							const Color& src);  // 1190
					Vector::Vector(); // 1184
					CUtlStringToken::CUtlStringToken(); // 1191
					VectorCopy(const Vector& src,
							Vector& dst);  // 1196
					Vector::Vector(); // 1195
				}
			}
			{
				int j; // 1216
				{
					Vector endLine; // 1218
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
							const DebugLineSegment3D_t& src);  // 1227
					Vector::Vector(); // 1218
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1225
					VertexColor_t::operator=(
							const Color& src);  // 1225
					CUtlStringToken::CUtlStringToken(); // 1226
				}
			}
			VectorCopy(const Vector& src,
					Vector& dst);  // 1181
			VectorCopy(const Vector& src,
					Vector& dst);  // 1215
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1101
			VectorScale(const Vector& vIn,
					float flScale,
					Vector& vResult);  // 1231
		}
	}
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
			int nLineNumber);  // 1155
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1236
	CUtlMemory<DebugLineSegment3D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugLineSegment3D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::CUtlVector(); // 1160
	Vector::Vector(); // 1166
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1176
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 106
	Vector::Vector(); // 106
	Vector::Vector(); // 106
	DebugLineSegment3D_t::DebugLineSegment3D_t(); // 1175
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 1235
	CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 1235
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::RemoveAll(); // 1798
	CUtlMemory<DebugLineSegment3D_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment3D_t>(void); // 508
	CUtlMemory<DebugLineSegment3D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment3D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::~CUtlVector(); // 1236
} /* size: 1555, variables: 8, inline expansions: 37 (760 bytes) */

// <0314909C> ../scenesystem/sceneviewdebugoverlays.cpp:1238
// variables: 2
// function calls: 48
void CSceneViewDebugOverlays::Render3DVectorTextOverlaysOutputLine(IRenderContext* pCtx, IMaterialMode* pMode, CDynamicVertexData<VertexWireFrame_t> *& pVB, const Vector& vStart, const Vector& vEnd, const VertexColor_t& vColor)
{
	int nMaxVertsPerLock; // 1240
	{
		int nCurVertexCount; // 1246
		CVertexDataBase<VertexWireFrame_t>::VertexCount(); // 1246
		CVertexDataBase<VertexWireFrame_t>::GetBufferVertexCount(); // 1247
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 639
		CDynamicVertexData<VertexWireFrame_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 640
		CDynamicVertexData<VertexWireFrame_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 1249
		IRenderDevice::IsUsingReverseDepth(); // 1253
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexWireFrame_t>::~CDynamicVertexData(); // 1256
	}
	Vector::operator=(
			const Vector& vOther);  // 1264
	Vector::operator=(
			const Vector& vOther);  // 1265
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1266
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 1267
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 751
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 751
	Vector::operator=(
			const Vector& vOther);  // 751
	Vector::operator=(
			const Vector& vOther);  // 751
	VertexWireFrame_t::operator=(
			const VertexWireFrame_t  &);  // 355
	{
	}
	CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 1268
	Vector::operator=(
			const Vector& vOther);  // 1269
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 751
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 751
	Vector::operator=(
			const Vector& vOther);  // 751
	Vector::operator=(
			const Vector& vOther);  // 751
	VertexWireFrame_t::operator=(
			const VertexWireFrame_t  &);  // 355
	{
	}
	CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexWireFrame_t>::AdvanceVertex(); // 1270
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexWireFrame_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 751
	VertexColor_t::VertexColor_t(); // 751
	Vector::Vector(); // 751
	Vector::Vector(); // 751
	VertexWireFrame_t::VertexWireFrame_t(); // 165
	CVertexDataBase<VertexWireFrame_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexWireFrame_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexWireFrame_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1262
} /* size: 0, variables: 1, inline expansions: 36 (1833 bytes) */

// <03147F51> ../scenesystem/sceneviewdebugoverlays.cpp:1273
// variables: 34
// function calls: 58
void CSceneViewDebugOverlays::Render3DVectorTextOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
	const Debug3DVectorText_t* pText; // 1275
	const int  nLineCount; // 1276
	const IMaterial2* pMat; // 1280
	IMaterialMode* pMode; // 1284
	CDynamicVertexData<VertexWireFrame_t>* pVB; // 1291
	const float  flLineHeight; // 1293
	const float  flFontScale; // 1294
	{
		int i; // 1296
		{
			const char* pStr; // 1298
			const Vector  vLeft; // 1300
			const Vector  vUp; // 1301
			const VertexColor_t  vColor; // 1302
			char lineBuf; // 1304
			int nLineBufPos; // 1305
			Vector vCurLinePos; // 1307
			int nTotalLineWidth; // 1322
			int c; // 1324
			{
				int nTotalLines; // 1310
				const char* pScanStr; // 1311
				{
					int c; // 1314
				}
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1319
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1319
				Vector::operator+=(
						const Vector& v);  // 1319
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1319
			}
			{
				Vector vCurPos; // 1330
				{
					int x; // 1336
					{
						const char* pStrokes; // 1338
						const int  nStrokeCount; // 1339
						const int  nCharStride; // 1340
						bool bPenDown; // 1342
						Vector vPenPos; // 1343
						{
							int s; // 1345
							{
								const int  nXOfs; // 1347
								{
									const int  nYOfs; // 1354
									Vector vNewPenPos; // 1356
									VectorSubtract(const Vector& a,
											const Vector& b,
											Vector& c);  // 1444
									Vector::Vector(); // 1443
									Vector::operator-(
											const Vector& v);  // 1356
									VectorMultiply(const Vector& a,
											vec_t b,
											Vector& c);  // 1451
									Vector::Vector(); // 1450
									Vector::operator*(
											float fl);  // 1356
									VectorMultiply(const Vector& a,
											vec_t b,
											Vector& c);  // 1451
									Vector::Vector(); // 1450
									Vector::operator*(
											float fl);  // 1356
									VectorAdd(const Vector& a,
											const Vector& b,
											Vector& c);  // 1437
									Vector::Vector(); // 1436
									Vector::operator+(
											const Vector& v);  // 1356
									Vector::operator=(
											const Vector& vOther);  // 1363
								}
							}
						}
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 1478
						operator*(float fl,
								const Vector& v);  // 1368
						Vector::operator-=(
								const Vector& v);  // 1368
					}
				}
				Vector::operator+=(
						const Vector& v);  // 1333
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1333
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1371
				Vector::operator-=(
						const Vector& v);  // 1371
			}
			{
				const char* pStrokes; // 1384
			}
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1300
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1301
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 1302
		}
	}
	{
		int nCurVertexCount; // 1392
		{
			CRenderAttributes renderAttributes; // 1397
			CDynamicVertexData<VertexWireFrame_t>::Bind(
				int nSlot,
				int nOffset,
				int nStride);  // 1396
			IRenderDevice::IsUsingReverseDepth(); // 1403
		}
		CVertexDataBase<VertexWireFrame_t>::VertexCount(); // 1392
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 1409
		CDynamicVertexData<VertexWireFrame_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexWireFrame_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexWireFrame_t>::~CDynamicVertexData(); // 1410
	}
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Count(); // 1276
	CUtlMemory<Debug3DVectorText_t, int>::Base(); // 112
	CUtlVectorBase<Debug3DVectorText_t, CUtlMemory<Debug3DVectorText_t, int> >::Base(); // 1275
	CUtlStringToken::CUtlStringToken(); // 1284
} /* size: 0, variables: 7, inline expansions: 4 (58 bytes) */

// <03146DAC> ../scenesystem/sceneviewdebugoverlays.cpp:1415
// variables: 6
// function calls: 78
void CSceneViewDebugOverlays::Render2DLineOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> > debugClientBatch; // 1417
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> > debugServerBatch; // 1418
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> > debugInterpolatedBatch; // 1419
	const char   __FUNCTION__; // 39110
	{
		int i; // 1421
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1437
		}
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 1421
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
			int i);  // 1201
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		DebugLineSegment2D_t::DebugLineSegment2D_t(
					const DebugLineSegment2D_t  &);  // 1520
		CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
							const DebugLineSegment2D_t& src);  // 1201
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddToTail(
				const DebugLineSegment2D_t& src);  // 1433
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
			int i);  // 1201
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		DebugLineSegment2D_t::DebugLineSegment2D_t(
					const DebugLineSegment2D_t  &);  // 1520
		CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
							const DebugLineSegment2D_t& src);  // 1201
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddToTail(
				const DebugLineSegment2D_t& src);  // 1429
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::operator[](
				int i);  // 1423
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
			int i);  // 1201
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		DebugLineSegment2D_t::DebugLineSegment2D_t(
					const DebugLineSegment2D_t  &);  // 1520
		CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
							const DebugLineSegment2D_t& src);  // 1201
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddToTail(
				const DebugLineSegment2D_t& src);  // 1425
	}
	CUtlMemory<DebugLineSegment2D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugLineSegment2D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVector(); // 1417
	CUtlMemory<DebugLineSegment2D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugLineSegment2D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVector(); // 1418
	CUtlMemory<DebugLineSegment2D_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<DebugLineSegment2D_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::CUtlVector(); // 1419
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment2D_t>(void); // 508
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment2D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVector(); // 1444
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Purge(); // 560
	ValidateAlignment<DebugLineSegment2D_t>(void); // 508
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 510
	CUtlMemory<DebugLineSegment2D_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVector(); // 1444
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 903
	CUtlMemory<DebugLineSegment2D_t, int>::Purge(); // 1799
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Purge(); // 560
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::~CUtlVector(); // 1444
} /* size: 0, variables: 4, inline expansions: 36 (1004 bytes) */

// <03145931> ../scenesystem/sceneviewdebugoverlays.cpp:1446
// variables: 15
// function calls: 69
void CSceneViewDebugOverlays::Render2DLineOverlay(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer, const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& debugList)
{
	const DebugLineSegment2D_t* pLines; // 1449
	int nCount; // 1450
	const IMaterial2* pMat; // 1454
	IMaterialMode* pMode; // 1458
	RenderViewport_t curViewport; // 1465
	const float  flXScale; // 1467
	const float  flYScale; // 1468
	const char   __FUNCTION__; // 39083
	{
		int nToDo; // 1472
		CDynamicVertexData<VertexWireFrame2D_t> lineVB; // 1474
		DebugRenderType_t renderType; // 1476
		CRenderAttributes renderAttributes; // 1492
		{
			int i; // 1477
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
			}
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 647
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 647
			Vector::operator=(
					const Vector& vOther);  // 647
			VertexWireFrame2D_t::operator=(
					const VertexWireFrame2D_t  &);  // 355
			{
			}
			CVertexDataBase<VertexWireFrame2D_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexWireFrame2D_t>::AdvanceVertex(); // 1483
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 647
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 647
			Vector::operator=(
					const Vector& vOther);  // 647
			VertexWireFrame2D_t::operator=(
					const VertexWireFrame2D_t  &);  // 355
			{
			}
			CVertexDataBase<VertexWireFrame2D_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexWireFrame2D_t>::AdvanceVertex(); // 1486
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 1485
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 1480
			Vector::operator=(
					const Vector& vOther);  // 715
			VertexWireFrame2D_t::StartPoint(
					const Vector& vecStartPoint);  // 1481
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 1482
		}
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 728
		{
			RenderInputLayoutField_t wireframe2DLayout; // 730
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
					int nLineNumber);  // 39
			CThreadSyncValue<bool>::Load(); // 34
			CTSInputLayoutCreator::IsInitialized(); // 40
			CThreadSyncValue<bool>::Store(
				bool value);  // 43
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
			CTSInputLayoutCreator::CreateLayout(
					const char* pLayoutName,
					int nFieldCount,
					const RenderInputLayoutField_t* pFieldDescs);  // 737
		}
		CThreadSyncValue<bool>::Load(); // 60
		{
		}
		CTSInputLayoutCreator::GetLayout(); // 741
		CThreadSyncValue<bool>::CThreadSyncValue<>(); // 24
		CTSInputLayoutCreator::CTSInputLayoutCreator(); // 726
		GetLayout(void); // 1510
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexWireFrame2D_t>::ClearVertexFields(); // 171
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 647
		VertexColor_t::VertexColor_t(); // 647
		Vector::Vector(); // 647
		VertexWireFrame2D_t::VertexWireFrame2D_t(); // 165
		CVertexDataBase<VertexWireFrame2D_t>::CVertexDataBase(); // 673
		CDynamicVertexData<VertexWireFrame2D_t>::Lock(
			int nVertexCount);  // 680
		CDynamicVertexData<VertexWireFrame2D_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 1474
		CDynamicVertexData<VertexWireFrame2D_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame2D_t>::Unlock(); // 639
		CDynamicVertexData<VertexWireFrame2D_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 640
		CDynamicVertexData<VertexWireFrame2D_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 1490
		ConVar::GetInt(); // 1495
		CDynamicVertexData<VertexWireFrame2D_t>::Unlock(); // 760
		CDynamicVertexData<VertexWireFrame2D_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexWireFrame2D_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexWireFrame2D_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexWireFrame2D_t>::~CDynamicVertexData(); // 1517
	}
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 1450
	CUtlMemory<DebugLineSegment2D_t, int>::Base(); // 113
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Base(); // 1449
	CUtlStringToken::CUtlStringToken(); // 1458
	RenderViewport_t::RenderViewport_t(); // 1465
} /* size: 0, variables: 8, inline expansions: 5 (38 bytes) */

// <031853C2> ../scenesystem/sceneviewdebugoverlays.cpp:1520
void CSceneViewDebugOverlays::RenderTextureOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
} /* size: 0 */

// <0314317C> ../scenesystem/sceneviewdebugoverlays.cpp:1525
// variables: 7
// function calls: 149
void CSceneViewDebugOverlays::Render2DTextOverlaysOutputQuad(IRenderContext* pCtx, IMaterialMode* pMode, CDynamicVertexData<VertexDebugUI_t> *& pVB, const Vector2D& vUpLeft, const Vector2D& vBottomRight, const Vector2D& vUpLeftUV, const Vector2D& vBottomRightUV, const VertexColor_t& vColor)
{
	Vector2D vPosB; // 1555
	Vector2D vUVB; // 1556
	Vector2D vPosC; // 1558
	Vector2D vUVC; // 1559
	{
		int nCurVertexCount; // 1533
		CVertexDataBase<VertexDebugUI_t>::VertexCount(); // 1533
		CVertexDataBase<VertexDebugUI_t>::GetBufferVertexCount(); // 1534
		CDynamicVertexData<VertexDebugUI_t>::Unlock(); // 760
		CDynamicVertexData<VertexDebugUI_t>::Unlock(); // 639
		CDynamicVertexData<VertexDebugUI_t>::Bind(
			int nSlot,
			int nOffset,
			int nStride);  // 640
		CDynamicVertexData<VertexDebugUI_t>::UnlockAndBind(
				int nSlot,
				int nOffset,
				int nStride);  // 1536
		CThreadSyncValue<bool>::Load(); // 34
		CTSInputLayoutCreator::IsInitialized(); // 446
		CThreadSyncValue<bool>::Load(); // 60
		{
		}
		CTSInputLayoutCreator::GetLayout(); // 459
		{
			RenderInputLayoutField_t colorUVTestLayout; // 448
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
					int nLineNumber);  // 39
			CThreadSyncValue<bool>::Load(); // 34
			CTSInputLayoutCreator::IsInitialized(); // 40
			CThreadSyncValue<bool>::Store(
				bool value);  // 43
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 46
			CTSInputLayoutCreator::CreateLayout(
					const char* pLayoutName,
					int nFieldCount,
					const RenderInputLayoutField_t* pFieldDescs);  // 455
		}
		GetLayout(void); // 1537
		CDynamicVertexData<VertexDebugUI_t>::Unlock(); // 760
		CDynamicVertexData<VertexDebugUI_t>::Unlock(); // 710
		{
		}
		{
		}
		CVertexDataBase<VertexDebugUI_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexDebugUI_t>::~CVertexDataBase(); // 711
		CDynamicVertexData<VertexDebugUI_t>::~CDynamicVertexData(); // 1541
	}
	{
		const int  nMaxVertsPerLock; // 1547
		CDynamicVertexData<VertexDebugUI_t>::Lock(
			int nVertexCount);  // 680
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexDebugUI_t>::ClearVertexFields(); // 171
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 257
		Vector2D::Vector2D(); // 257
		VertexUVPos_t::VertexUVPos_t(); // 372
		VertexColor_t::VertexColor_t(); // 372
		VertexColorUVPos_t::VertexColorUVPos_t(); // 476
		VertexDebugUI_t::VertexDebugUI_t(); // 165
		CVertexDataBase<VertexDebugUI_t>::CVertexDataBase(); // 673
		CDynamicVertexData<VertexDebugUI_t>::CDynamicVertexData(
					IRenderContext* pRenderContext,
					int nVertexCount,
					const char* pDebugName,
					const char* pBudgetGroup);  // 1548
	}
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1555
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1556
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1558
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 480
	VertexDebugUI_t::Position(
		const Vector2D& vecPos);  // 1562
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1563
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1559
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
	VertexUVPos_t::SetUV0(
		const Vector2D& vecUV);  // 1564
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 476
	VertexDebugUI_t::operator=(
			const VertexDebugUI_t  &);  // 355
	{
	}
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 1565
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 480
	VertexDebugUI_t::Position(
		const Vector2D& vecPos);  // 1567
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1568
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
	VertexUVPos_t::SetUV0(
		const Vector2D& vecUV);  // 1569
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 476
	VertexDebugUI_t::operator=(
			const VertexDebugUI_t  &);  // 355
	{
	}
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 1570
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 480
	VertexDebugUI_t::Position(
		const Vector2D& vecPos);  // 1572
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1573
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
	VertexUVPos_t::SetUV0(
		const Vector2D& vecUV);  // 1574
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 476
	VertexDebugUI_t::operator=(
			const VertexDebugUI_t  &);  // 355
	{
	}
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 1575
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 480
	VertexDebugUI_t::Position(
		const Vector2D& vecPos);  // 1578
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1579
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
	VertexUVPos_t::SetUV0(
		const Vector2D& vecUV);  // 1580
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 476
	VertexDebugUI_t::operator=(
			const VertexDebugUI_t  &);  // 355
	{
	}
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 1581
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 480
	VertexDebugUI_t::Position(
		const Vector2D& vecPos);  // 1583
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1584
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
	VertexUVPos_t::SetUV0(
		const Vector2D& vecUV);  // 1585
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 476
	VertexDebugUI_t::operator=(
			const VertexDebugUI_t  &);  // 355
	{
	}
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 1586
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 480
	VertexDebugUI_t::Position(
		const Vector2D& vecPos);  // 1588
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 378
	VertexColorUVPos_t::Color(
		const VertexColor_t& vertexColor);  // 1589
	Vector2D::operator=(
			const Vector2D& vOther);  // 263
	VertexUVPos_t::SetUV0(
		const Vector2D& vecUV);  // 1590
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 372
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 372
	VertexColorUVPos_t::operator=(
			const VertexColorUVPos_t  &);  // 476
	VertexDebugUI_t::operator=(
			const VertexDebugUI_t  &);  // 355
	{
	}
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexDebugUI_t>::AdvanceVertex(); // 1591
} /* size: 0, variables: 4, inline expansions: 106 (0 bytes) */

// <03142995> ../scenesystem/sceneviewdebugoverlays.cpp:1598
// variables: 19
// function calls: 22
void CSceneViewDebugOverlays::Render2DTextOverlayNoFont(IRenderContext* pCtx, IMaterialMode* pMode, CDynamicVertexData<VertexDebugUI_t> *& pVB, const Debug2DText_t& text)
{
	float flNormCharWidth; // 1601
	float flNormCharHeight; // 1602
	const int  nNumCharsPerRow; // 1603
	const int  len; // 1605
	const char* pStr; // 1606
	VertexColor_t vColor; // 1608
	Vector2D vLinePos; // 1610
	Vector2D vCurPos; // 1612
	Vector2D vScreenWidthHeight; // 1613
	Vector2D vStartPos; // 1615
	Vector2D topLeft; // 1616
	Vector2D bottomRight; // 1617
	{
		int l; // 1618
		{
			int c; // 1620
			int nRowIndex; // 1633
			int nColIndex; // 1634
			Vector2D vUV; // 1636
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 1640
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 1636
			Vector2DAdd(const Vector2D& a,
					const Vector2D& b,
					Vector2D& c);  // 688
			Vector2D::Vector2D(); // 687
			Vector2D::operator+(
					const Vector2D& v);  // 1639
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 1640
			Vector2DMax(const Vector2D& a,
					const Vector2D& b,
					Vector2D& result);  // 1644
			Vector2D::operator=(
					const Vector2D& vOther);  // 1624
		}
	}
	{
		Vector2D topRight; // 1649
		Vector2D bottomLeft; // 1652
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 1649
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 1652
	}
	V_strlen(const char* str); // 1605
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1608
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1610
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1612
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1613
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1615
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1616
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 1617
} /* size: 0, variables: 12, inline expansions: 10 (0 bytes) */

// <03141F57> ../scenesystem/sceneviewdebugoverlays.cpp:1669
// variables: 10
// function calls: 29
void CSceneViewDebugOverlays::Render2DTextOverlay(IRenderContext* pCtx, const Debug2DText_t& text, CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeome pRenderGeometryLists)
{
	RenderViewport_t viewport; // 1671
	VertexColor_t vColor; // 1674
	CTextLayoutInfo texinfo; // 1676
	{
		float normalizedLineHeight; // 1696
		float offset; // 1697
	}
	{
		Vector2D topLeft; // 1712
		Vector2D bottomRight; // 1713
		Vector2D viewportSize; // 1716
		Vector2D topRight; // 1726
		Vector2D bottomLeft; // 1728
		Vector2D::Vector2D(); // 1712
		Vector2D::Vector2D(); // 1713
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 1716
		Vector2D::operator*=(
				const Vector2D& v);  // 1717
		Vector2D::operator*=(
				const Vector2D& v);  // 1718
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 1726
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 1728
	}
	RenderViewport_t::RenderViewport_t(); // 1671
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 1674
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
	CTextLayoutInfo::CTextLayoutInfo(); // 1676
	CTextLayoutInfo::SetText(
		const char* pText);  // 1677
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1678
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 269
	CTextLayoutInfo::SetColor(
		const Color& drawColor);  // 1678
	Vector2D::operator=(
			const Vector2D& vOther);  // 1679
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 1736
} /* size: 945, variables: 3, inline expansions: 22 (332 bytes) */

// <03140FBC> ../scenesystem/sceneviewdebugoverlays.cpp:1738
// variables: 9
// function calls: 63
void CSceneViewDebugOverlays::Render2DTextOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> > renderGeometryLists; // 1745
	const Vector& vCameraPos; // 1752
	{
		int i; // 1747
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 1747
		CUtlMemory<Debug2DText_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::operator[](
				int i);  // 1749
	}
	{
		int i; // 1753
		{
			Debug3DText_t& text3D; // 1755
			float flMaxDistToDisplaySqr; // 1759
			Vector4D vOriginPs; // 1764
			Debug2DText_t text2D; // 1772
			CUtlMemory<Debug3DText_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::operator[](
					int i);  // 1755
			V_strlen(const char* str); // 1756
			Vector::Vector(); // 194
			Vector::LengthSqr(); // 198
			Vector::DistToSqr(
					const Vector& vOther);  // 1760
			Vector4D::Vector4D(); // 622
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 623
			VMatrix::V4Mul(
				const Vector4D& vIn,
				Vector4D& vOut);  // 623
			CFrustum::TransformPointToHomogenousViewCoordinates(
									const Vector& pnt);  // 1764
			V_strlen(const char* str); // 90
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 92
			DebugTextBase_t::SetText(
				const char* pText);  // 1776
			CUtlStringToken::CUtlStringToken(); // 36
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 32
			DebugBase_t::Init(
				float flStartTime,
				float flTimeToLive,
				float flMinimumTimeToLive);  // 38
			DebugBase_t::DebugBase_t(); // 61
			DebugTextBase_t::DebugTextBase_t(); // 152
			Vector2D::Vector2D(); // 152
			Debug2DText_t::Debug2DText_t(); // 1772
			Vector2D::Init(
				vec_t ix,
				vec_t iy);  // 1775
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 1777
			DebugTextBase_t::~DebugTextBase_t(); // 150
			Debug2DText_t::~Debug2DText_t(); // 1785
		}
		CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 1753
	}
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug2DText_t, CUtlMemory<Debug2DText_t, int> >::IsEmpty(); // 1740
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::Count(); // 135
	CUtlVectorBase<Debug3DText_t, CUtlMemory<Debug3DText_t, int> >::IsEmpty(); // 1740
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 1745
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1787
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1723
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::RemoveAll(); // 1798
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 903
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 1799
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Purge(); // 560
		ValidateAlignment<CCharRenderGeometry>(void); // 508
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 510
		CUtlMemory<CCharRenderGeometry, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 1798
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 1790
} /* size: 1093, variables: 2, inline expansions: 20 (597 bytes) */

// <03140BC4> ../scenesystem/sceneviewdebugoverlays.cpp:1792
// variables: 4
// function calls: 13
void CSceneViewDebugOverlays::Process3DCircleOverlay(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
	Vector xAxis; // 1794
	Vector yAxis; // 1794
	{
		int i; // 1798
		{
			const DebugCircle3D_t& circle; // 1801
			CUtlMemory<DebugCircle3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::operator[](
					int i);  // 1801
		}
		CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 1798
	}
	matrix3x4_t::GetRow(
		int nRow);  // 644
	Vector::operator=(
			const Vector& vOther);  // 646
	CFrustum::ViewUp(
		Vector& vViewUp);  // 1795
	Vector::Vector(); // 1794
	Vector::Vector(); // 1794
	matrix3x4_t::GetRow(
		int nRow);  // 637
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 639
	Vector::operator=(
			const Vector& vOther);  // 639
	CFrustum::ViewLeft(
		Vector& vViewLeft);  // 1796
} /* size: 285, variables: 2, inline expansions: 10 (206 bytes) */

// <0313FF22> ../scenesystem/sceneviewdebugoverlays.cpp:1806
// variables: 5
// function calls: 48
void CSceneViewDebugOverlays::Process3DCrossOverlay(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1808; // 1808
	Vector clientLeft; // 1810
	Vector clientUp; // 1810
	{
		int i; // 1814
		{
			const DebugCross3D_t& cross; // 1817
			CUtlMemory<DebugCross3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::operator[](
					int i);  // 1817
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 1818
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 1818
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1818
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 1818
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 1819
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 1819
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1819
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 1819
		}
		CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 1814
	}
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
			int nLineNumber);  // 1808
	Vector::Vector(); // 1810
	Vector::Vector(); // 1810
	matrix3x4_t::GetRow(
		int nRow);  // 637
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 639
	CFrustum::ViewLeft(
		Vector& vViewLeft);  // 1811
	matrix3x4_t::GetRow(
		int nRow);  // 644
	Vector::operator=(
			const Vector& vOther);  // 646
	CFrustum::ViewUp(
		Vector& vViewUp);  // 1812
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1821
} /* size: 640, variables: 3, inline expansions: 19 (749 bytes) */

// <0313F127> ../scenesystem/sceneviewdebugoverlays.cpp:1823
// variables: 21
// function calls: 41
void CSceneViewDebugOverlays::ProcessTickMarkedLinesOverlay(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1825; // 1825
	{
		int j; // 1827
		{
			Vector startPos; // 1829
			Vector endPos; // 1830
			VertexColor_t color; // 1831
			bool bNoDepthTest; // 1832
			int tickDist; // 1833
			int tickTextDist; // 1834
			DebugRenderType_t renderType; // 1835
			Vector lineDir; // 1837
			float lineDist; // 1838
			int numTicks; // 1839
			Vector vWorldUp; // 1841
			Vector sideDir; // 1843
			Vector tickPos; // 1846
			int tickTextCnt; // 1847
			{
				int i; // 1855
				{
					Vector tickLeft; // 1858
					Vector tickRight; // 1859
					{
						char pText; // 1864
						Vector textPos; // 1866
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 1866
						VertexColor_t::VertexColor_t(
								uint8 ir,
								uint8 ig,
								uint8 ib,
								uint8 ia);  // 1867
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 1866
						VertexColor_t::VertexColor_t(
								uint8 ir,
								uint8 ig,
								uint8 ib,
								uint8 ia);  // 1868
					}
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 1478
					operator*(float fl,
							const Vector& v);  // 1878
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 1878
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 1858
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 1859
				}
			}
			CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::operator[](
					int i);  // 1829
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1837
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 1831
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1844
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1841
			Vector::Vector(); // 1843
		}
		CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 1827
	}
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
			int nLineNumber);  // 1825
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1881
} /* size: 1226, variables: 1, inline expansions: 10 (408 bytes) */

// <0313F0B6> ../scenesystem/sceneviewdebugoverlays.cpp:1884
// function call: 1
void CSceneViewDebugOverlays::GetDebugSceneWorld()
{
	CSceneViewDebugOverlays::Init(); // 1888
} /* size: 75, inline expansions: 1 (33 bytes) */

// <03187EC0> ../scenesystem/sceneviewdebugoverlays.cpp:1894
// variable: 1
// function calls: 7
void CSceneViewDebugOverlays::CommitNewSceneObjects(float flAbsTime)
{
	{
		int i; // 1904
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::Count(); // 1904
		CUtlMemory<DebugSceneObject_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::operator[](
				int i);  // 1906
		DebugBase_t::GetStartTime(); // 1909
		CUtlMemory<DebugSceneObject_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<DebugSceneObject_t, CUtlMemory<DebugSceneObject_t, int> >::operator[](
				int i);  // 1912
	}
	CSceneViewDebugOverlays::CommitNewSceneObjects(
				float flAbsTime);  // 1894
} /* size: 257, inline expansions: 1 (214 bytes) */

// <0313F083> ../scenesystem/sceneviewdebugoverlays.cpp:1894
// variable: 1
void CSceneViewDebugOverlays::CommitNewSceneObjects(float flAbsTime)
{
	{
		int i; // 1904
	}
} /* size: 0 */

// <0313EE77> ../scenesystem/sceneviewdebugoverlays.cpp:1920
// function call: 1
void CSceneSystem::Render3DDebugOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer, CSceneViewDebugOverlays* pDebugList)
{
	CSceneViewDebugOverlays::Render3DTriangleOverlays(
				IRenderContext* pCtx,
				const CFrustum* pFrustum,
				ISceneLayer* pLayer);  // 1927
} /* size: 162, inline expansions: 1 (74 bytes) */

// <0313ED95> ../scenesystem/sceneviewdebugoverlays.cpp:1930
void CSceneSystem::Render2DDebugOverlays(IRenderContext* pCtx, const CFrustum* pFrustum, ISceneLayer* pLayer, CSceneViewDebugOverlays* pDebugList)
{
} /* size: 61 */

// <0313E71B> ../scenesystem/sceneviewdebugoverlays.cpp:1936
// variables: 3
// function calls: 11
void CSceneViewDebugOverlays::Frustum(const CFrustum& frustum, const VertexColor_t& vecColor, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1938; // 1938
	Vector pnts; // 1940
	{
		int i; // 1944
	}
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
			int nLineNumber);  // 1938
	CFrustum::ComputeGeometry(
			Vector* pVertsOut8);  // 1942
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1958
} /* size: 648, variables: 2, inline expansions: 11 (517 bytes) */

// <0313E386> ../scenesystem/sceneviewdebugoverlays.cpp:1984
// variables: 3
// function calls: 10
void GenerateBoxVertices(const Vector& vOrigin, const Quaternion& vOrientation, const Vector& vMins, const Vector& vMaxs, Vector* pVerts)
{
	matrix3x4_t fRotateMatrix; // 1987
	Vector vecPos; // 1990
	{
		int i; // 1991
		Vector::operator[](
				int i);  // 1993
		Vector::operator[](
				int i);  // 1994
		Vector::operator[](
				int i);  // 1995
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1997
		Vector::operator+=(
				const Vector& v);  // 1998
		Vector::operator[](
				int i);  // 1993
		Vector::operator[](
				int i);  // 1994
		Vector::operator[](
				int i);  // 1995
	}
	matrix3x4_t::matrix3x4_t(); // 1987
	Vector::Vector(); // 1990
} /* size: 331, variables: 2, inline expansions: 2 (0 bytes) */

// <0313DE7C> ../scenesystem/sceneviewdebugoverlays.cpp:2003
// variables: 7
// function calls: 10
void CSceneViewDebugOverlays::BoxAngles(const Vector& vOrigin, const Vector& vLocalMins, const Vector& vLocalMaxs, const Quaternion& vOrientation, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2005; // 2005
	Vector p; // 2007
	{
		int i; // 2011
		{
			int* pFaceIndex; // 2013
			{
				int j; // 2014
				{
					int nIdxA; // 2016
					int nIdxB; // 2017
				}
			}
		}
	}
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
			int nLineNumber);  // 2005
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2024
} /* size: 498, variables: 2, inline expansions: 10 (475 bytes) */

// <0313D917> ../scenesystem/sceneviewdebugoverlays.cpp:2026
// variables: 7
// function calls: 10
void CSceneViewDebugOverlays::SolidBoxAngles(const Vector& vOrigin, const Vector& vLocalMins, const Vector& vLocalMaxs, const Quaternion& vOrientation, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2028; // 2028
	Vector p; // 2030
	{
		int i; // 2034
		{
			int* pFaceIndex; // 2036
			{
				int j; // 2037
				{
					int nIdxA; // 2039
					int nIdxB; // 2040
				}
			}
		}
	}
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
			int nLineNumber);  // 2028
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2050
} /* size: 634, variables: 2, inline expansions: 10 (478 bytes) */

// <0313CCA8> ../scenesystem/sceneviewdebugoverlays.cpp:2053
// variables: 5
// function calls: 42
void CSceneViewDebugOverlays::Axis(const matrix3x4_t& t, float flAxisLen, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2055; // 2055
	Vector x; // 2057
	Vector y; // 2058
	Vector z; // 2059
	Vector o; // 2060
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
			int nLineNumber);  // 2055
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 2057
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 2058
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 2059
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 2060
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2062
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2062
	Vector::operator=(
			const Vector& vOther);  // 2062
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2063
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2063
	Vector::operator=(
			const Vector& vOther);  // 2063
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2064
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2064
	Vector::operator=(
			const Vector& vOther);  // 2064
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 2066
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 2067
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 2068
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2069
} /* size: 603, variables: 5, inline expansions: 42 (911 bytes) */

// <0313C236> ../scenesystem/sceneviewdebugoverlays.cpp:2074
// variables: 2
// function calls: 40
void CSceneViewDebugOverlays::Cross(const Vector& position, float radius, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2076; // 2076
	DebugCross3D_t cross; // 2083
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
			int nLineNumber);  // 2076
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::IsEmpty(); // 2078
	CUtlMemory<DebugCross3D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugCross3D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugCross3D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::EnsureCapacity(
			int num);  // 2080
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 236
	Vector::Vector(); // 236
	DebugCross3D_t::DebugCross3D_t(); // 2083
	Vector::operator=(
			const Vector& vOther);  // 2084
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 2086
	CUtlMemory<DebugCross3D_t, int>::NumAllocated(); // 1196
	CUtlMemory<DebugCross3D_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 32
	DebugBase_t::DebugBase_t(
			const DebugBase_t  &);  // 236
	DebugCross3D_t::DebugCross3D_t(
			const DebugCross3D_t  &);  // 1520
	CopyConstruct<DebugCross3D_t>(DebugCross3D_t* pMemory,
					const DebugCross3D_t& src);  // 1201
	CUtlMemory<DebugCross3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugCross3D_t, CUtlMemory<DebugCross3D_t, int> >::AddToTail(
			const DebugCross3D_t& src);  // 2089
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2090
} /* size: 686, variables: 2, inline expansions: 40 (1381 bytes) */

// <0313BBCD> ../scenesystem/sceneviewdebugoverlays.cpp:2093
// variables: 3
// function calls: 16
void CSceneViewDebugOverlays::Cross3D(const Vector& position, const Vector& mins, const Vector& maxs, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2095; // 2095
	Vector start; // 2097
	Vector end; // 2098
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
			int nLineNumber);  // 2095
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2097
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2098
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2112
} /* size: 623, variables: 3, inline expansions: 16 (586 bytes) */

// <0313B0AE> ../scenesystem/sceneviewdebugoverlays.cpp:2118
// variables: 4
// function calls: 37
void CSceneViewDebugOverlays::Cross3DOriented(const Vector& vPosition, const Vector& vForward, const Vector& vLeft, const Vector& vUp, float flSize, const VertexColor_t& forwardcolor, const VertexColor_t& leftcolor, const VertexColor_t& upcolor, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2123; // 2123
	Vector forward; // 2125
	Vector left; // 2126
	Vector up; // 2127
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
			int nLineNumber);  // 2123
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2125
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2127
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2126
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2129
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2129
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2130
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2130
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2131
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2131
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2132
} /* size: 738, variables: 4, inline expansions: 37 (1052 bytes) */

// <03186340> ../scenesystem/sceneviewdebugoverlays.cpp:2138
// variable: 1
// function calls: 10
void CSceneViewDebugOverlays::Triangle(const Vector& p1, const Vector& p2, const Vector& p3, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2140; // 2140
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
} /* size: 236, variables: 1, inline expansions: 10 (457 bytes) */

// <0313B03D> ../scenesystem/sceneviewdebugoverlays.cpp:2138
// variable: 1
void CSceneViewDebugOverlays::Triangle(const Vector& p1, const Vector& p2, const Vector& p3, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2140; // 2140
} /* size: 0, variables: 1 */

// <03187468> ../scenesystem/sceneviewdebugoverlays.cpp:2149
void CSceneViewDebugOverlays::Circle(const Vector& position, float radius, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 18 */

// <0313A55C> ../scenesystem/sceneviewdebugoverlays.cpp:2158
// variables: 2
// function calls: 40
void CSceneViewDebugOverlays::Circle(const Vector& position, float radius, const VertexColor_t& color, int nSegments, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2160; // 2160
	DebugCircle3D_t circle; // 2167
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
			int nLineNumber);  // 2160
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::IsEmpty(); // 2162
	CUtlMemory<DebugCircle3D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugCircle3D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugCircle3D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::EnsureCapacity(
			int num);  // 2164
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 227
	Vector::Vector(); // 227
	DebugCircle3D_t::DebugCircle3D_t(); // 2167
	Vector::operator=(
			const Vector& vOther);  // 2168
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 2170
	CUtlMemory<DebugCircle3D_t, int>::NumAllocated(); // 1196
	CUtlMemory<DebugCircle3D_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 32
	DebugBase_t::DebugBase_t(
			const DebugBase_t  &);  // 227
	DebugCircle3D_t::DebugCircle3D_t(
			const DebugCircle3D_t  &);  // 1520
	CopyConstruct<DebugCircle3D_t>(DebugCircle3D_t* pMemory,
					const DebugCircle3D_t& src);  // 1201
	CUtlMemory<DebugCircle3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugCircle3D_t, CUtlMemory<DebugCircle3D_t, int> >::AddToTail(
			const DebugCircle3D_t& src);  // 2174
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2175
} /* size: 710, variables: 2, inline expansions: 40 (1411 bytes) */

// <03139A28> ../scenesystem/sceneviewdebugoverlays.cpp:2180
// variables: 8
// function calls: 38
void CSceneViewDebugOverlays::AddCircleToRenderLists(const Vector& position, const Vector& xAxis, const Vector& yAxis, float radius, const VertexColor_t& color, int nSegments, bool bNoDepthTest, float64 flTimeToLive, DebugRenderType_t type)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2182; // 2182
	const float  flRadStep; // 2184
	Vector vecLastPosition; // 2186
	Vector vecStart; // 2190
	Vector vecPosition; // 2191
	{
		int i; // 2194
		{
			float flSin; // 2200
			float flCos; // 2200
			Vector::operator=(
					const Vector& vOther);  // 2197
			SinCos(float radians,
				float* sine,
				float* cosine);  // 2201
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2202
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2202
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2202
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2202
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2202
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2202
			Vector::operator=(
					const Vector& vOther);  // 2202
		}
	}
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
			int nLineNumber);  // 2182
	Vector::Vector(); // 2186
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2190
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2190
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2213
} /* size: 832, variables: 5, inline expansions: 17 (647 bytes) */

// <03139918> ../scenesystem/sceneviewdebugoverlays.cpp:2215
void CSceneViewDebugOverlays::Circle(const Vector& position, const Vector& xAxis, const Vector& yAxis, float radius, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 31 */

// <031866DD> ../scenesystem/sceneviewdebugoverlays.cpp:2220
void CSceneViewDebugOverlays::Circle(const Vector& position, const Vector& xAxis, const Vector& yAxis, float radius, const VertexColor_t& color, int nSegments, bool bNoDepthTest, float64 flTimeToLive)
{
} /* size: 0 */

// <03138936> ../scenesystem/sceneviewdebugoverlays.cpp:2226
// variables: 2
// function calls: 62
void CSceneViewDebugOverlays::Sphere(const matrix3x4_t& transform, float flRadius, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2228; // 2228
	DebugSphere_t newSphere; // 2229
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
			int nLineNumber);  // 2228
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 98
	Vector::Vector(); // 98
	DebugSphere_t::DebugSphere_t(); // 2229
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 2231
	Vector::operator=(
			const Vector& vOther);  // 2231
	DebugBase_t::IsOneFrameNode(); // 268
	CUtlMemory<DebugSphere_t, int>::NumAllocated(); // 1196
	CUtlMemory<DebugSphere_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Element(
		int i);  // 1201
	CUtlMemory<DebugSphere_t, int>::Base(); // 112
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Base(); // 368
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::AddToTail(
			const DebugSphere_t& src);  // 270
	CUtlMemory<DebugSphere_t, int>::NumAllocated(); // 1196
	CUtlMemory<DebugSphere_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Element(
		int i);  // 1201
	CUtlMemory<DebugSphere_t, int>::Base(); // 112
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Base(); // 368
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::AddToTail(
			const DebugSphere_t& src);  // 274
	CDebugNodeList<DebugSphere_t>::AddToTail(
			const DebugSphere_t& node);  // 2240
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 2236
	CUtlMemory<DebugSphere_t, int>::NumAllocated(); // 1196
	CUtlMemory<DebugSphere_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Element(
		int i);  // 1201
	CUtlMemory<DebugSphere_t, int>::Base(); // 112
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::Base(); // 368
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugSphere_t, CUtlMemory<DebugSphere_t, int> >::AddToTail(
			const DebugSphere_t& src);  // 270
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
			const DebugSphere_t& src);  // 274
	CDebugNodeList<DebugSphere_t>::AddToTail(
			const DebugSphere_t& node);  // 2244
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2246
} /* size: 800, variables: 2, inline expansions: 62 (2018 bytes) */

// <03116C76> ../scenesystem/sceneviewdebugoverlays.cpp:2249
// member variables: 4
// struct size: 16
struct DebugOverlaySnapshotHeader_t {
	/* ../scenesystem/sceneviewdebugoverlays.cpp:2251 */
	enum {
		VERSION = 1,
	};
	int m_nVersion; /* 0 4 */
	int m_nDebugLines3D; /* 4 4 */
	int m_nDebugLines3DNoDepthTest; /* 8 4 */
	int m_nDebugLines2D; /* 12 4 */
};

// <03126B5C> ../scenesystem/sceneviewdebugoverlays.cpp:2259
inline int SizeOf<DebugLineSegment3D_t>(const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& arr)
{
} /* size: 0 */

// <03126B30> ../scenesystem/sceneviewdebugoverlays.cpp:2259
inline int SizeOf<DebugLineSegment2D_t>(const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& arr)
{
} /* size: 0 */

// <03126A24> ../scenesystem/sceneviewdebugoverlays.cpp:2265
// variables: 5
inline int Record<DebugLineSegment3D_t, CSceneViewDebugOverlays::RecordSnapshot(CUtlVector<unsigned char>*, CUtlStringToken)::<lambda(const DebugLineSegment3D_t&)> >(const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& arr, CBufferStrider& buf, const class& fnPred)
{
	int nCount; // 2267
	{
		const DebugLineSegment3D_t& elem; // 2268
		const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& __for_range; // 52421
		const_iterator __for_begin; // 48926
		const_iterator __for_end; // 48926
	}
} /* size: 0, variables: 1 */

// <031268E9> ../scenesystem/sceneviewdebugoverlays.cpp:2265
// variables: 5
inline int Record<DebugLineSegment2D_t, CSceneViewDebugOverlays::RecordSnapshot(CUtlVector<unsigned char>*, CUtlStringToken)::<lambda(const DebugLineSegment2D_t&)> >(const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& arr, CBufferStrider& buf, const class& fnPred)
{
	int nCount; // 2267
	{
		const DebugLineSegment2D_t& elem; // 2268
		const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& __for_range; // 58397
		const_iterator __for_begin; // 54902
		const_iterator __for_end; // 54902
	}
} /* size: 0, variables: 1 */

// <03137762> ../scenesystem/sceneviewdebugoverlays.cpp:2279
// variables: 21
// function calls: 74
void CSceneViewDebugOverlays::RecordSnapshot(CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >* pOut, CUtlStringToken exclude)
{
	int nReserveSize; // 2281
	CBufferStrider buf; // 2290
	DebugOverlaySnapshotHeader_t* pHeader; // 2291
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 2261
	SizeOf<DebugLineSegment3D_t>(const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& arr); // 2282
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 2261
	SizeOf<DebugLineSegment3D_t>(const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& arr); // 2283
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 2261
	SizeOf<DebugLineSegment2D_t>(const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& arr); // 2284
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 2290
	CBufferStrider::CBufferStrider(
			void* pBuffer,
			int nBufferSize);  // 2290
	CBufferStrider::Stride<DebugOverlaySnapshotHeader_t>(
						int nCount);  // 2291
	{
		const DebugLineSegment3D_t& elem; // 2268
		const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& __for_range; // 682
		const_iterator __for_begin; // 692
		const_iterator __for_end; // 702
		CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 113
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 103
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::begin(); // 2268
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 105
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::end(); // 2268
		CBufferStrider::Validate(
			int nAmountToValidate);  // 49
		CBufferStrider::Stride<DebugLineSegment3D_t>(
						int nCount);  // 2272
		CUtlStringToken::operator!=(
				const CUtlStringToken& other);  // 2295
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 2295
		Vector::LengthSqr(); // 2295
		operator()(const class* __closure,
				const DebugLineSegment3D_t& line); // 2270
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 32
		DebugBase_t::operator=(
				const DebugBase_t  &);  // 106
		Vector::operator=(
				const Vector& vOther);  // 106
		Vector::operator=(
				const Vector& vOther);  // 106
		DebugLineSegment3D_t::operator=(
				const DebugLineSegment3D_t  &);  // 2272
	}
	Record<DebugLineSegment3D_t, CSceneViewDebugOverlays::RecordSnapshot(CUtlVector<unsigned char>*, CUtlStringToken)::<lambda(const DebugLineSegment3D_t&)> >(const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& arr,
																CBufferStrider& buf,
																const class& fnPred); // 2295
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2292
	{
		const DebugLineSegment3D_t& elem; // 2268
		const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& __for_range; // 544
		const_iterator __for_begin; // 554
		const_iterator __for_end; // 564
		CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 113
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 103
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::begin(); // 2268
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Count(); // 105
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::end(); // 2268
		CBufferStrider::Validate(
			int nAmountToValidate);  // 49
		CBufferStrider::Stride<DebugLineSegment3D_t>(
						int nCount);  // 2272
		CUtlStringToken::operator!=(
				const CUtlStringToken& other);  // 2295
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 2295
		Vector::LengthSqr(); // 2295
		operator()(const class* __closure,
				const DebugLineSegment3D_t& line); // 2270
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 32
		DebugBase_t::operator=(
				const DebugBase_t  &);  // 106
		Vector::operator=(
				const Vector& vOther);  // 106
		Vector::operator=(
				const Vector& vOther);  // 106
		DebugLineSegment3D_t::operator=(
				const DebugLineSegment3D_t  &);  // 2272
	}
	Record<DebugLineSegment3D_t, CSceneViewDebugOverlays::RecordSnapshot(CUtlVector<unsigned char>*, CUtlStringToken)::<lambda(const DebugLineSegment3D_t&)> >(const CUtlVector<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >& arr,
																CBufferStrider& buf,
																const class& fnPred); // 2296
	{
		const DebugLineSegment2D_t& elem; // 2268
		const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& __for_range; // 367
		const_iterator __for_begin; // 377
		const_iterator __for_end; // 387
		CUtlMemory<DebugLineSegment2D_t, int>::Base(); // 113
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Base(); // 103
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::begin(); // 2268
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Count(); // 105
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::end(); // 2268
		CBufferStrider::Validate(
			int nAmountToValidate);  // 49
		CBufferStrider::Stride<DebugLineSegment2D_t>(
						int nCount);  // 2272
		CUtlStringToken::operator!=(
				const CUtlStringToken& other);  // 2297
		Vector2D::Vector2D(); // 694
		Vector2DSubtract(const Vector2D& a,
				const Vector2D& b,
				Vector2D& c);  // 695
		Vector2D::operator-(
				const Vector2D& v);  // 2297
		Vector2D::LengthSqr(); // 2297
		operator()(const class* __closure,
				const DebugLineSegment2D_t& line); // 2270
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 32
		DebugBase_t::operator=(
				const DebugBase_t  &);  // 112
		Vector2D::operator=(
				const Vector2D& vOther);  // 112
		Vector2D::operator=(
				const Vector2D& vOther);  // 112
		DebugLineSegment2D_t::operator=(
				const DebugLineSegment2D_t  &);  // 2272
	}
	Record<DebugLineSegment2D_t, CSceneViewDebugOverlays::RecordSnapshot(CUtlVector<unsigned char>*, CUtlStringToken)::<lambda(const DebugLineSegment2D_t&)> >(const CUtlVector<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >& arr,
																CBufferStrider& buf,
																const class& fnPred); // 2297
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 2299
} /* size: 0, variables: 3, inline expansions: 17 (923 bytes) */

// <03136A78> ../scenesystem/sceneviewdebugoverlays.cpp:2302
// variables: 5
// function calls: 61
void CSceneViewDebugOverlays::RestoreSnapshot(const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& in)
{
	const DebugOverlaySnapshotHeader_t* pHeader; // 2304
	CBufferStrider buf; // 2307
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 2305
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 2307
	CBufferStrider::CBufferStrider(
			void* pBuffer,
			int nBufferSize);  // 2307
	CBufferStrider::Validate(
		int nAmountToValidate);  // 49
	CBufferStrider::Stride<DebugOverlaySnapshotHeader_t>(
						int nCount);  // 2308
	CBufferStrider::Stride<DebugLineSegment3D_t>(
					int nCount);  // 2312
	CUtlMemory<DebugLineSegment3D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<DebugLineSegment3D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Element(
			int i);  // 1502
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 106
		DebugLineSegment3D_t::DebugLineSegment3D_t(
					const DebugLineSegment3D_t  &);  // 1520
		CopyConstruct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory,
							const DebugLineSegment3D_t& src);  // 1502
	}
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const DebugLineSegment3D_t* pToInsert);  // 1303
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddMultipleToTail(
				int num,
				const DebugLineSegment3D_t* pToCopy);  // 2312
	CBufferStrider::Validate(
		int nAmountToValidate);  // 49
	CBufferStrider::Stride<DebugLineSegment3D_t>(
					int nCount);  // 2313
	CUtlMemory<DebugLineSegment3D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugLineSegment3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<DebugLineSegment3D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::Element(
			int i);  // 1502
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 106
		DebugLineSegment3D_t::DebugLineSegment3D_t(
					const DebugLineSegment3D_t  &);  // 1520
		CopyConstruct<DebugLineSegment3D_t>(DebugLineSegment3D_t* pMemory,
							const DebugLineSegment3D_t& src);  // 1502
	}
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const DebugLineSegment3D_t* pToInsert);  // 1303
	CUtlVectorBase<DebugLineSegment3D_t, CUtlMemory<DebugLineSegment3D_t, int> >::AddMultipleToTail(
				int num,
				const DebugLineSegment3D_t* pToCopy);  // 2313
	CBufferStrider::Validate(
		int nAmountToValidate);  // 49
	CBufferStrider::Stride<DebugLineSegment2D_t>(
					int nCount);  // 2314
	CUtlMemory<DebugLineSegment2D_t, int>::NumAllocated(); // 782
	CUtlMemory<DebugLineSegment2D_t, int>::Base(); // 112
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<DebugLineSegment2D_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::Element(
			int i);  // 1502
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 32
		DebugBase_t::DebugBase_t(
				const DebugBase_t  &);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 112
		DebugLineSegment2D_t::DebugLineSegment2D_t(
					const DebugLineSegment2D_t  &);  // 1520
		CopyConstruct<DebugLineSegment2D_t>(DebugLineSegment2D_t* pMemory,
							const DebugLineSegment2D_t& src);  // 1502
	}
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const DebugLineSegment2D_t* pToInsert);  // 1303
	CUtlVectorBase<DebugLineSegment2D_t, CUtlMemory<DebugLineSegment2D_t, int> >::AddMultipleToTail(
				int num,
				const DebugLineSegment2D_t* pToCopy);  // 2314
} /* size: 0, variables: 2, inline expansions: 35 (2613 bytes) */

// <031364CD> ../scenesystem/sceneviewdebugoverlays.cpp:2317
// variables: 6
// function calls: 15
void CSceneViewDebugOverlays::Capsule(const Vector& vCenter1, const Vector& vCenter2, float flRadius, const VertexColor_t& vecColor, bool bNoDepthTest, float64 flTimeToLive)
{
	Vector vAxisZ; // 2319
	float flLength; // 2320
	{
		matrix3x4_t mTransform; // 2324
		matrix3x4_t::matrix3x4_t(); // 2324
		matrix3x4_t::InitFromQAngles(
				const QAngle& angles,
				const Vector& vPosition);  // 2325
	}
	{
		Quaternion qBasis; // 2330
		Vector vOrigin; // 2331
		matrix3x4_t mBottom; // 2333
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 2330
		matrix3x4_t::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition);  // 2334
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2331
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 2331
		matrix3x4_t::matrix3x4_t(); // 2333
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2319
} /* size: 529, variables: 2, inline expansions: 3 (48 bytes) */

// <03135F0C> ../scenesystem/sceneviewdebugoverlays.cpp:2341
// variables: 3
// function calls: 20
void CSceneViewDebugOverlays::Capsule(const matrix3x4_t& mBottomTransform, float flLength, float flRadius, const VertexColor_t& vecColor, bool bNoDepthTest, float64 flTimeToLive)
{
	Vector zAxis; // 2343
	matrix3x4_t mTopCenterTransform; // 2345
	matrix3x4_t mBottomCenterTransform; // 2348
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 2343
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 2346
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2346
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2349
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2346
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2349
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 2346
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 2349
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 2349
} /* size: 282, variables: 3, inline expansions: 20 (178 bytes) */

// <03134D9A> ../scenesystem/sceneviewdebugoverlays.cpp:2354
// variables: 16
// function calls: 35
void CSceneViewDebugOverlays::Capsule(const matrix3x4_t& mTopCenterTransform, const matrix3x4_t& mBottomCenterTransform, float flRadius, const VertexColor_t& vecColor, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2356; // 2356
	const int  NUM_LAYERS; // 2358
	const int  NUM_SLICES; // 2359
	Vector a1; // 2361
	Vector b1; // 2361
	Vector c1; // 2361
	{
		int nSlice; // 2362
		{
			Vector a; // 2392
			{
				int nLayer; // 2364
				{
					Vector a; // 2366
					Vector b; // 2367
					Vector c; // 2368
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 821
					SpherePos(float flPhi,
							float flTheta,
							float flRadius);  // 2366
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 821
					SpherePos(float flPhi,
							float flTheta,
							float flRadius);  // 2367
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 821
					SpherePos(float flPhi,
							float flTheta,
							float flRadius);  // 2368
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 2370
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 2371
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 2372
				}
			}
			{
				int nLayer; // 2378
				{
					Vector a; // 2380
					Vector b; // 2381
					Vector c; // 2382
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 821
					SpherePos(float flPhi,
							float flTheta,
							float flRadius);  // 2380
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 821
					SpherePos(float flPhi,
							float flTheta,
							float flRadius);  // 2381
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 821
					SpherePos(float flPhi,
							float flTheta,
							float flRadius);  // 2382
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 2384
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 2385
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 2386
				}
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 821
			SpherePos(float flPhi,
					float flTheta,
					float flRadius);  // 2392
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 2393
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 2394
		}
	}
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
			int nLineNumber);  // 2356
	Vector::Vector(); // 2361
	Vector::Vector(); // 2361
	Vector::Vector(); // 2361
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2397
} /* size: 2007, variables: 6, inline expansions: 13 (474 bytes) */

// <0313396E> ../scenesystem/sceneviewdebugoverlays.cpp:2402
// variables: 12
// function calls: 66
void CSceneViewDebugOverlays::HorzArrow(const Vector& startPos, const Vector& endPos, float width, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2404; // 2404
	Vector lineDir; // 2406
	Vector upVec; // 2409
	Vector sideDir; // 2412
	float radius; // 2413
	Vector vP1; // 2417
	Vector vP2; // 2418
	Vector vP3; // 2419
	Vector vP4; // 2420
	Vector vP5; // 2421
	Vector vP6; // 2422
	Vector vP7; // 2423
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
			int nLineNumber);  // 2404
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2406
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2409
	Vector::Vector(); // 2412
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 2415
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2418
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2419
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2417
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2417
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2418
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2419
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2423
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2418
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2418
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2421
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2422
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2419
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2419
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2421
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2421
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2421
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2422
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2422
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2422
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2423
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2445
} /* size: 1265, variables: 12, inline expansions: 66 (944 bytes) */

// <031335D4> ../scenesystem/sceneviewdebugoverlays.cpp:2447
// variables: 2
// function calls: 10
void CSceneViewDebugOverlays::YawArrow(const Vector& startPos, float yaw, float length, float width, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	Vector forward; // 2449
	float angle; // 2450
	Vector::Vector(); // 2449
	DEG2RAD(float flDegrees); // 2450
	SinCos(float radians,
		float* sine,
		float* cosine);  // 2452
	Vector::operator[](
			int i);  // 2452
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2453
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2453
} /* size: 249, variables: 2, inline expansions: 10 (113 bytes) */

// <031321E1> ../scenesystem/sceneviewdebugoverlays.cpp:2459
// variables: 12
// function calls: 65
void CSceneViewDebugOverlays::VertArrow(const Vector& startPos, const Vector& endPos, float width, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2461; // 2461
	Vector lineDir; // 2463
	Vector upVec; // 2465
	Vector sideDir; // 2466
	float radius; // 2467
	Vector vP1; // 2471
	Vector vP2; // 2472
	Vector vP3; // 2473
	Vector vP4; // 2474
	Vector vP5; // 2475
	Vector vP6; // 2476
	Vector vP7; // 2477
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
			int nLineNumber);  // 2461
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2463
	Vector::Vector(); // 2465
	Vector::Vector(); // 2466
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2471
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2471
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2473
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2472
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2473
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2477
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2472
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2472
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2472
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2473
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2473
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2475
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2476
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2475
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2475
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2475
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2476
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2476
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2476
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2477
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2499
} /* size: 1281, variables: 12, inline expansions: 65 (940 bytes) */

// <03130E44> ../scenesystem/sceneviewdebugoverlays.cpp:2501
// variables: 11
// function calls: 65
void CSceneViewDebugOverlays::TwistArrow(const Vector& startPos, const Vector& endPos, const Vector& upVec, float width, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2503; // 2503
	Vector lineDir; // 2505
	Vector sideDir; // 2507
	float radius; // 2508
	Vector p1; // 2512
	Vector p2; // 2513
	Vector p3; // 2514
	Vector p4; // 2515
	Vector p5; // 2516
	Vector p6; // 2517
	Vector p7; // 2518
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
			int nLineNumber);  // 2503
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2505
	Vector::Vector(); // 2507
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 2510
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2512
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2513
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2514
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2518
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2513
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2513
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2516
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2517
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2514
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2514
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2516
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2516
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2516
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2517
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2517
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2517
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2518
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2540
} /* size: 1323, variables: 11, inline expansions: 65 (1004 bytes) */

// <0312FD8D> ../scenesystem/sceneviewdebugoverlays.cpp:2547
// variables: 20
// function calls: 56
void CSceneViewDebugOverlays::Cone(const Vector& position, const Vector& axis, float angleRadians, float length, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2549; // 2549
	float radiusStep; // 2552
	float tanHalfAngle; // 2553
	float finalRadius; // 2554
	QAngle vecAngles; // 2556
	matrix3x4_t xform; // 2559
	Vector sideAxis; // 2562
	Vector upAxis; // 2563
	Vector coneEnd; // 2565
	VertexColor_t lineColor; // 2567
	float lengthStep; // 2578
	VertexColor_t circleColor; // 2580
	{
		int lineNum; // 2569
		{
			float flSin; // 2571
			float flCos; // 2571
			Vector circlePos; // 2573
			SinCos(float radians,
				float* sine,
				float* cosine);  // 2572
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2573
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2573
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2573
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2573
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2573
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2573
		}
	}
	{
		int circNum; // 2582
		{
			float segLength; // 2584
			Vector circPos; // 2585
			float circRad; // 2586
			CSceneViewDebugOverlays::Circle(
				const Vector& position,
				const Vector& xAxis,
				const Vector& yAxis,
				float radius,
				const VertexColor_t& color,
				int nSegments,
				bool bNoDepthTest,
				float64 flTimeToLive);  // 2587
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 2585
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2585
		}
	}
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
			int nLineNumber);  // 2549
	QAngle::QAngle(); // 2556
	matrix3x4_t::matrix3x4_t(); // 2559
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 257
	matrix3x4_t::GetUp(); // 2562
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 256
	matrix3x4_t::GetLeft(); // 2563
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2565
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2565
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 2567
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 2580
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2589
} /* size: 1163, variables: 12, inline expansions: 30 (796 bytes) */

// <0312EA76> ../scenesystem/sceneviewdebugoverlays.cpp:2594
// variables: 18
// function calls: 67
void CSceneViewDebugOverlays::SolidCone(const Vector& position, const Vector& axis, float angleRadians, float length, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2596; // 2596
	float radiusStep; // 2599
	float sinHalfAngle; // 2600
	float finalRadius; // 2601
	QAngle vecAngles; // 2603
	matrix3x4_t xform; // 2606
	Vector sideAxis; // 2609
	Vector upAxis; // 2610
	Vector coneEnd; // 2612
	float flSinStart; // 2614
	float flCosStart; // 2614
	Vector pStart; // 2616
	Vector p1; // 2617
	{
		int lineNum; // 2618
		{
			float flSin; // 2620
			float flCos; // 2620
			Vector p2; // 2622
			SinCos(float radians,
				float* sine,
				float* cosine);  // 2621
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2622
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2622
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 2622
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 2622
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 2622
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 2622
			Vector::operator=(
					const Vector& vOther);  // 2624
		}
	}
	{
		VertexColor_t circleColor; // 2631
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 2631
		CSceneViewDebugOverlays::Circle(
			const Vector& position,
			const Vector& xAxis,
			const Vector& yAxis,
			float radius,
			const VertexColor_t& color,
			int nSegments,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 2636
	}
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
			int nLineNumber);  // 2596
	QAngle::QAngle(); // 2603
	matrix3x4_t::matrix3x4_t(); // 2606
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 257
	matrix3x4_t::GetUp(); // 2609
	SinCos(float radians,
		float* sine,
		float* cosine);  // 2615
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 256
	matrix3x4_t::GetLeft(); // 2610
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2612
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2612
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2616
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2616
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2616
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2616
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2616
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2616
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2638
} /* size: 1376, variables: 13, inline expansions: 43 (1049 bytes) */

// <0312DC9A> ../scenesystem/sceneviewdebugoverlays.cpp:2645
// variables: 10
// function calls: 45
void CSceneViewDebugOverlays::ScreenMessage(const char* msg, float64 flTimeToLive, VertexColor_t color)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2647; // 2647
	int maxMessages; // 2649
	{
		int len; // 2659
		char* pTempString; // 2660
		size_t templen; // 2681
		{
			int i; // 2662
			{
				char* pTempString2; // 2667
				VertexColor_t::AsUint32(); // 93
				VertexColor_t::AsUint32Ptr(); // 93
				VertexColor_t::VertexColor_t(
						const VertexColor_t& src);  // 2675
			}
		}
		{
			DebugTextBase_t& newDebugText; // 2690
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Count(); // 2684
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::AddToHead(); // 2689
			CUtlMemory<DebugTextBase_t, int>::operator[](
					int i);  // 616
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Head(); // 2690
			V_strlen(const char* str); // 90
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 92
			DebugTextBase_t::SetText(
				const char* pText);  // 2692
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 2693
		}
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 2661
		V_strlen(const char* str); // 2681
	}
	{
		size_t len; // 2698
		{
			DebugTextBase_t& newDebugText; // 2707
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Count(); // 2701
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::AddToHead(); // 2706
			CUtlMemory<DebugTextBase_t, int>::operator[](
					int i);  // 616
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Head(); // 2707
			V_strlen(const char* str); // 90
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 92
			DebugTextBase_t::SetText(
				const char* pText);  // 2709
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 2710
		}
		V_strlen(const char* str); // 2698
	}
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
			int nLineNumber);  // 2647
	CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::IsEmpty(); // 2651
	CUtlMemory<DebugTextBase_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugTextBase_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugTextBase_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::EnsureCapacity(
			int num);  // 2653
	strchr(const char* __s,
		int __c);  // 2656
	strchr(const char* __s,
		int __c);  // 2656
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2713
} /* size: 1071, variables: 2, inline expansions: 19 (803 bytes) */

// <0312D5D0> ../scenesystem/sceneviewdebugoverlays.cpp:2718
// variables: 10
// function calls: 20
void CSceneViewDebugOverlays::ProcessScreenMessages(float flAbsTime)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2723; // 2723
	int nLineOffset; // 2725
	{
		int i; // 2726
		{
			DebugTextBase_t& debugText; // 2728
			int nAlpha; // 2730
			float timeleft; // 2731
			VertexColor_t color; // 2743
			float fontHeight; // 2752
			Vector2D pos; // 2753
			{
				float f; // 2734
			}
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 2743
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 2753
			CUtlMemory<DebugTextBase_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::operator[](
					int i);  // 2728
			DebugBase_t::HasInfiniteLifetime(); // 74
			DebugBase_t::GetEndTime(); // 2731
		}
		CUtlVectorBase<DebugTextBase_t, CUtlMemory<DebugTextBase_t, int> >::Count(); // 2726
	}
	ConVar::GetInt(); // 2720
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
			int nLineNumber);  // 2723
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2757
} /* size: 747, variables: 2, inline expansions: 11 (536 bytes) */

// <0312CB00> ../scenesystem/sceneviewdebugoverlays.cpp:2763
// variables: 2
// function calls: 42
void CSceneViewDebugOverlays::DrawTickMarkedLine(const Vector& startPos, const Vector& endPos, float tickDist, int tickTextDist, const VertexColor_t& color, bool bNoDepthTest, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2765; // 2765
	DebugTickMarkedLine3D_t tickLine; // 2772
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
			int nLineNumber);  // 2765
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Count(); // 135
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::IsEmpty(); // 2767
	CUtlMemory<DebugTickMarkedLine3D_t, int>::IsGrowable(); // 881
	CUtlMemory<DebugTickMarkedLine3D_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<DebugTickMarkedLine3D_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::EnsureCapacity(
			int num);  // 2769
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 32
	CUtlStringToken::CUtlStringToken(); // 36
	DebugBase_t::Init(
		float flStartTime,
		float flTimeToLive,
		float flMinimumTimeToLive);  // 38
	DebugBase_t::DebugBase_t(); // 244
	Vector::Vector(); // 244
	Vector::Vector(); // 244
	DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t(); // 2772
	Vector::operator=(
			const Vector& vOther);  // 2773
	Vector::operator=(
			const Vector& vOther);  // 2774
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 2777
	CUtlMemory<DebugTickMarkedLine3D_t, int>::NumAllocated(); // 1196
	CUtlMemory<DebugTickMarkedLine3D_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 32
	DebugBase_t::DebugBase_t(
			const DebugBase_t  &);  // 244
	DebugTickMarkedLine3D_t::DebugTickMarkedLine3D_t(
				const DebugTickMarkedLine3D_t  &);  // 1520
	CopyConstruct<DebugTickMarkedLine3D_t>(DebugTickMarkedLine3D_t* pMemory,
						const DebugTickMarkedLine3D_t& src);  // 1201
	CUtlMemory<DebugTickMarkedLine3D_t, int>::Base(); // 112
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::Base(); // 368
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DebugTickMarkedLine3D_t, CUtlMemory<DebugTickMarkedLine3D_t, int> >::AddToTail(
			const DebugTickMarkedLine3D_t& src);  // 2780
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2781
} /* size: 798, variables: 2, inline expansions: 42 (1609 bytes) */

// <0312C84A> ../scenesystem/sceneviewdebugoverlays.cpp:2786
// variables: 3
// function calls: 4
void CSceneViewDebugOverlays::AddAxes(const Vector& origin, Vector* pts, int idx, VertexColor_t c, float64 flTimeToLive)
{
	Vector start; // 2788
	Vector temp; // 2788
	int endidx; // 2790
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2789
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2791
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2795
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2799
} /* size: 403, variables: 3, inline expansions: 4 (143 bytes) */

// <0312C497> ../scenesystem/sceneviewdebugoverlays.cpp:2803
// variables: 2
// function calls: 7
void CSceneViewDebugOverlays::AddExtrusionFace(const Vector& start, const Vector& end, Vector* pts, int idx1, int idx2, VertexColor_t c, float64 flTimeToLive)
{
	Vector temp; // 2805
	Vector temp2; // 2805
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2806
	Vector::Vector(); // 2805
	Vector::Vector(); // 2805
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2807
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2810
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2813
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 2816
} /* size: 417, variables: 2, inline expansions: 7 (174 bytes) */

// <0312B8E6> ../scenesystem/sceneviewdebugoverlays.cpp:2820
// variables: 15
// function calls: 34
void CSceneViewDebugOverlays::SweptBox(const Vector& startPos, const Vector& endPos, const Vector& mins, const Vector& maxs, const Quaternion& q, const VertexColor_t& color, float64 flTimeToLive)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2822; // 2822
	matrix3x4_t fRotateMatrix; // 2828
	Vector vDelta; // 2831
	Vector temp; // 2835
	Vector pts; // 2836
	float dot; // 2837
	int minidx; // 2838
	int maxidx; // 2857
	{
		int i; // 2839
		Vector::operator[](
				int i);  // 2841
		Vector::operator[](
				int i);  // 2842
		Vector::operator[](
				int i);  // 2843
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 2846
		DotProduct(const Vector& a,
				const Vector& b);  // 2849
		Vector::operator[](
				int i);  // 2841
		Vector::operator[](
				int i);  // 2842
		Vector::operator[](
				int i);  // 2843
	}
	{
		int j; // 2864
		{
			int dirflag1; // 2866
			int dirflag2; // 2867
			int idx1; // 2869
			int idx2; // 2869
			int idx3; // 2869
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 2874
			VertexColor_t::AsUint32(); // 93
			VertexColor_t::AsUint32Ptr(); // 93
			VertexColor_t::VertexColor_t(
					const VertexColor_t& src);  // 2875
		}
	}
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
			int nLineNumber);  // 2822
	matrix3x4_t::matrix3x4_t(); // 2828
	Vector::Vector(); // 2835
	Vector::Vector(); // 2831
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 2832
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 2860
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 2861
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2877
} /* size: 1120, variables: 8, inline expansions: 20 (705 bytes) */

// <0312B80A> ../scenesystem/sceneviewdebugoverlays.cpp:2879
// variable: 1
// function call: 1
void CSceneSystem::CreateSceneViewDebugOverlayList(SceneViewDebugOverlayTimingType_t type)
{
	CSceneViewDebugOverlays* pOut; // 2881
	CSceneViewDebugOverlays::Init(); // 2882
} /* size: 82, variables: 1, inline expansions: 1 (33 bytes) */

// <0312B751> ../scenesystem/sceneviewdebugoverlays.cpp:2886
// function call: 1
void CSceneSystem::DestroySceneViewDebugOverlayList(ISceneViewDebugOverlays* pOverlayList)
{
	CSceneViewDebugOverlays::~CSceneViewDebugOverlays(); // 2888
} /* size: 85, inline expansions: 1 (37 bytes) */

// <0312B723> ../scenesystem/sceneviewdebugoverlays.cpp:2891
void CSceneViewDebugOverlays::AddDebugOverlaysBegin()
{
} /* size: 5 */

// <0312B70A> ../scenesystem/sceneviewdebugoverlays.cpp:2895
void CSceneViewDebugOverlays::AddDebugOverlaysEnd()
{
} /* size: 0 */


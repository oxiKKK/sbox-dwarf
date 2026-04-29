
//
// scenesystem/renderbatchlist.cpp
//
//	referenced by: libengine2.so
//
//	functions: 21
//

// <03300EE2> ../scenesystem/renderbatchlist.cpp:19
// function calls: 6
void CRenderBatchList::CRenderBatchList()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 110
	SceneSystemPerFrameStats_t::SceneSystemPerFrameStats_t(); // 19
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 175
	SceneSystemPerFrameStats_t::Zero(); // 44
	CRenderBatchList::Init(); // 21
} /* size: 58, inline expansions: 6 (105 bytes) */

// <03300EC6> ../scenesystem/renderbatchlist.cpp:19
void CRenderBatchList::CRenderBatchList()
{
} /* size: 0 */

// <03300E98> ../scenesystem/renderbatchlist.cpp:24
void CRenderBatchList::~CRenderBatchList()
{
} /* size: 5 */

// <03313D6E> ../scenesystem/renderbatchlist.cpp:30
// function calls: 3
void CRenderBatchList::Init()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 175
	SceneSystemPerFrameStats_t::Zero(); // 44
} /* size: 0, inline expansions: 3 (0 bytes) */

// <03300E60> ../scenesystem/renderbatchlist.cpp:30
void CRenderBatchList::Init()
{
} /* size: 0 */

// <03300648> ../scenesystem/renderbatchlist.cpp:51
// variables: 8
// function calls: 28
void CRenderBatchList::Start(CSceneView* pView, CSceneLayer* pLayer, EBatchStartFlags_t nFlags)
{
	bool bSkipClear; // 62
	bool bUseSecondary; // 69
	uint nCtxFlags; // 73
	const char   __FUNCTION__; // 64427
	bool bSetViewportAndScissor; // 102
	CRenderAttributes& attributes; // 128
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 100
	}
	RenderPassHandle_t::operator==(
			const RenderPassHandle_t& other);  // 122
	CSceneLayer::UseSecondaryContext(); // 69
	CSceneSystem::GetFinishRenderingViewsCounter(); // 94
	ISceneLayer::GetDebugName(); // 94
	CSceneView::GetDebugName(); // 94
	IRenderContext::IsSecondaryContext(); // 105
	CSceneLayer::GetRenderTargetDesc(); // 108
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 233
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 233
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 234
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 234
	RenderTargetDesc_t::IsValid(); // 108
	IRenderContext::IsSecondaryContext(); // 114
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 866
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 867
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 868
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 869
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 870
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 871
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 872
	CUtlAttributeList<void::SetParent(
			const ThisType_t* pParent);  // 873
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetParent(
			const ThisType_t* pParent);  // 874
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 129
	CSceneSystem::PerLayerViewConstantsChangeDuringSubmit(); // 74
} /* size: 0, variables: 6, inline expansions: 28 (237 bytes) */

// <033005D4> ../scenesystem/renderbatchlist.cpp:163
// variable: 1
void CRenderBatchList::StartRenderingFromPreviousBatchList(CRenderBatchList* pPrevious)
{
	EBatchStartFlags_t nFlags; // 166
} /* size: 21, variables: 1 */

// <03300456> ../scenesystem/renderbatchlist.cpp:170
// variable: 1
// function calls: 4
void CRenderBatchList::AddPrimitive(CMeshDrawPrimitive_t* pPrimitive)
{
	bool bOverflow; // 183
	CRenderBatchList::CanBatchWithPrevousPrimitive(
					CMeshDrawPrimitive_t* pPrimitive);  // 190
	Max<short unsigned int>(const short unsigned int& val1,
				const short unsigned int& val2);  // 214
	CSceneObject::GetDesc(); // 201
	CRenderBatchList::SetDrewAnything(
			bool bDrew);  // 220
} /* size: 257, variables: 1, inline expansions: 4 (48 bytes) */

// <03300409> ../scenesystem/renderbatchlist.cpp:227
void CRenderBatchList::End()
{
} /* size: 125 */

// <033003BA> ../scenesystem/renderbatchlist.cpp:275
void CRenderBatchList::ForceNewBatch()
{
} /* size: 9 */

// <03300378> ../scenesystem/renderbatchlist.cpp:289
void CRenderBatchList::AddViewToSubmitBeforeISubmit(CSceneView* pView)
{
} /* size: 9 */

// <0330026F> ../scenesystem/renderbatchlist.cpp:294
// function calls: 2
void CRenderBatchList::SubmitCommandList(IRenderContext* pPrimaryContext)
{
	DisplayListToSubmit_t::DisplayListToSubmit_t(
				CDisplayList* pList,
				bool bPersist);  // 533
	IRenderDevice::SubmitDisplayList(
				CDisplayList* pCommandList);  // 317
} /* size: 239, inline expansions: 2 (28 bytes) */

// <032FFE94> ../scenesystem/renderbatchlist.cpp:325
// variables: 4
// function calls: 14
void CRenderBatchList::DiscardCommandList()
{
	{
		CSceneLayer* pLayer; // 329
		CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short unsigned int>, int> >& __for_range; // 39557
		iterator __for_begin; // 63043
		iterator __for_end; // 63043
		CUtlLinkedList<CSceneLayer::Head(); // 334
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 334
		CUtlLinkedList<CSceneLayer::begin(); // 329
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
						IndexType_t index);  // 343
		CUtlLinkedList<CSceneLayer::end(); // 329
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 482
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 317
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator*(); // 329
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 550
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 272
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator++(); // 329
	}
} /* size: 213 */

// <032FFE61> ../scenesystem/renderbatchlist.cpp:352
void CRenderBatchList::GetRenderContext()
{
} /* size: 9 */

// <032FFE2E> ../scenesystem/renderbatchlist.cpp:357
void CRenderBatchList::GetStats()
{
} /* size: 9 */

// <03313E26> ../scenesystem/renderbatchlist.cpp:362
void CRenderBatchList::SetDrewAnything(bool bDrew)
{
} /* size: 29 */

// <032FFDD1> ../scenesystem/renderbatchlist.cpp:367
void CRenderBatchList::GetDrewAnything()
{
} /* size: 0 */

// <032FFD8F> ../scenesystem/renderbatchlist.cpp:372
void CRenderBatchList::MakeFrameBufferCopy(bool bSetupParamsOnly)
{
} /* size: 0 */

// <032FFADE> ../scenesystem/renderbatchlist.cpp:376
// variables: 8
// function calls: 4
void CRenderBatchList::DrawCurrentPrimitives()
{
	const char   __FUNCTION__; // 64819
	{
		ImageFormat colorFormat; // 396
		RenderMultisampleType_t msaaLevel; // 397
		ManagedRenderSetup_t setup; // 398
		ManagedRenderSetup_t::ManagedRenderSetup_t(
					IRenderContext* renderContext,
					ISceneView* sceneView,
					ISceneLayer* sceneLayer,
					ImageFormat colorFormat,
					RenderMultisampleType_t msaaLevel,
					SceneSystemPerFrameStats_t* stats);  // 398
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 409
	}
	{
		ImageFormat colorFormat; // 419
		RenderMultisampleType_t msaaLevel; // 420
		ManagedRenderSetup_t setup; // 421
		ManagedRenderSetup_t::ManagedRenderSetup_t(
					IRenderContext* renderContext,
					ISceneView* sceneView,
					ISceneLayer* sceneLayer,
					ImageFormat colorFormat,
					RenderMultisampleType_t msaaLevel,
					SceneSystemPerFrameStats_t* stats);  // 421
	}
	CSceneObject::HasFlags(
		ESceneObjectFlags nFlags);  // 394
	CSceneObject::HasFlags(
		ESceneObjectFlags nFlags);  // 417
} /* size: 0, variables: 1, inline expansions: 2 (8 bytes) */

// <03313E5D> ../scenesystem/renderbatchlist.cpp:454
// variables: 3
void CRenderBatchList::CanBatchWithPrevousPrimitive(CMeshDrawPrimitive_t* pPrimitive)
{
	int nCurrentBatchFlags; // 483
	int nPrimBatchFlags; // 484
	bool bShadowFastPath; // 486
} /* size: 0, variables: 3 */

// <033125D9> ../scenesystem/renderbatchlist.cpp:454
// variables: 3
// function calls: 2
void CRenderBatchList::CanBatchWithPrevousPrimitive(CMeshDrawPrimitive_t* pPrimitive)
{
	int nCurrentBatchFlags; // 483
	int nPrimBatchFlags; // 484
	bool bShadowFastPath; // 486
	CSceneObject::GetDesc(); // 466
	ConVar::GetInt(); // 594
} /* size: 327, variables: 3, inline expansions: 2 (15 bytes) */


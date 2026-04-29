
//
// scenesystem/sceneview.cpp
//
//	referenced by: libengine2.so
//
//	functions: 108
//	classes: 4
//

// <03239229> ../scenesystem/sceneview.cpp:28
// variables: 4
// function calls: 104
void CSceneView::CSceneView()
{
	{
		{
			int i; // 35
		}
		{
			int i; // 44
		}
	}
	{
		{
		}
		AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, ISceneView::WorldList_t>::AlignedByteArray_t(); // 228
		CUtlMemory<ISceneView::WorldList_t, int>::CUtlMemory(
				WorldList_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<ISceneView::WorldList_t, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<ISceneView::WorldList_t, int>::CUtlMemoryFixedGrowable_Base(
						WorldList_t* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>::Base(); // 231
		CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<ISceneView::WorldList_t, 16>::CUtlVectorFixedGrowable(
					int growSize);  // 188
		RenderViewport_t::RenderViewport_t(); // 188
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 178
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 178
		QAngle::QAngle(
			vec_t flPitchDegrees,
			vec_t flYawDegrees,
			vec_t flRollDegrees);  // 178
		SceneVieweSettings::SceneVieweSettings(); // 188
		ISceneView::ISceneView(); // 28
		{
		}
		AlignedByteArrayExplicit_t<8, ISceneView::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<8, ISceneView::AlignedByteArray_t(); // 228
		CUtlMemory<ISceneView::CUtlMemory(
				ISceneView** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<ISceneView::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<ISceneView::CUtlMemoryFixedGrowable_Base(
						ISceneView** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<8, ISceneView::Base(); // 231
		CUtlMemoryFixedGrowable<ISceneView::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<ISceneView::ResetDbgInfo(); // 530
		CUtlVectorBase<ISceneView::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<ISceneView::CUtlVectorFixedGrowable(
					int growSize);  // 28
		CUtlLinkedList<CSceneLayer::ResetDbgInfo(); // 455
		CUtlLinkedList<CSceneLayer::ConstructList(); // 454
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::InvalidIterator(); // 448
		CUtlLinkedList<CSceneLayer::CUtlLinkedList(
				int growSize,
				int initSize);  // 28
		CVolumeCuller::Clear(); // 17
		CVolumeCuller::CVolumeCuller(); // 28
		CUtlMemory<CFrustum, int>::ValidateGrowSize(); // 475
		CUtlMemory<CFrustum, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CFrustum, CUtlMemory<CFrustum, int> >::CUtlVector(); // 28
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 28
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 28
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 28
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 110
		SceneSystemPerFrameStats_t::SceneSystemPerFrameStats_t(); // 28
		{
		}
		AlignedByteArrayExplicit_t<16, ISceneView::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, ISceneView::AlignedByteArray_t(); // 228
		CUtlMemory<ISceneView::CUtlMemory(
				ISceneView** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<ISceneView::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<ISceneView::CUtlMemoryFixedGrowable_Base(
						ISceneView** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<16, ISceneView::Base(); // 231
		CUtlMemoryFixedGrowable<ISceneView::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<ISceneView::ResetDbgInfo(); // 530
		CUtlVectorBase<ISceneView::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<ISceneView::CUtlVectorFixedGrowable(
					int growSize);  // 28
		{
		}
		AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t>::AlignedByteArray_t(); // 228
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::CUtlMemory(
				RenderTargetInfo_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::CUtlMemoryFixedGrowable_Base(
						RenderTargetInfo_t* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>::Base(); // 231
		CUtlMemoryFixedGrowable<CScratchRenderTargetSystem::RenderTargetInfo_t, 35, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		ResetDbgInfo(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 530
		CUtlVectorBase(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CScratchRenderTargetSystem::RenderTargetInfo_t, 35>::CUtlVectorFixedGrowable(
					int growSize);  // 50
		RenderTargetId_t::RenderTargetId_t(); // 50
		CScratchRenderTargetSystem::CScratchRenderTargetSystem(); // 28
		TonemapState_t::TonemapState_t(); // 28
		{
		}
		AlignedByteArrayExplicit_t<16, CPVSBits, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, CPVSBits>::AlignedByteArray_t(); // 228
		CUtlMemory<CPVSBits, int>::CUtlMemory(
				CPVSBits* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CPVSBits, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CPVSBits, int>::CUtlMemoryFixedGrowable_Base(
						CPVSBits* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<16, CPVSBits, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<CPVSBits, 16, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CPVSBits, 16>::CUtlVectorFixedGrowable(
					int growSize);  // 28
		CUtlMemory<SceneObjectCullingBox_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<SceneObjectCullingBox_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::CUtlVector(); // 28
		CUtlMemory<SceneVolumetricFogVolume_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<SceneVolumetricFogVolume_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::CUtlVector(); // 28
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
		CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				int minimumSize);  // 28
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
		CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				int minimumSize);  // 28
		{
			int i; // 35
			Vector::operator=(
					const Vector& vOther);  // 106
			VPlane::Init(
				const Vector& vNormal,
				vec_t dist);  // 37
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 37
		}
		{
			int i; // 44
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			SceneSystemPerFrameStats_t::Zero(); // 46
		}
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 66
	}
} /* size: 1378 */

// <032391D5> ../scenesystem/sceneview.cpp:28
// variables: 4
void CSceneView::CSceneView()
{
	const char   __FUNCTION__; // 39558
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 31
	}
	{
		int i; // 35
	}
	{
		int i; // 44
	}
} /* size: 0, variables: 1 */

// <03236F3F> ../scenesystem/sceneview.cpp:69
// variables: 6
// function calls: 174
void CSceneView::~CSceneView()
{
	{
		int i; // 72
	}
	{
		int nIndex; // 78
	}
	{
		int i; // 72
		CUtlVectorBase<ISceneView::Count(); // 72
		CUtlMemoryPool<CSceneView>::Free(
			CSceneView* pMem);  // 250
		operator delete(void* pMem); // 93
		CSceneView::~CSceneView(); // 74
		CUtlMemory<ISceneView::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneView::operator[](
				int i);  // 74
	}
	CUtlVectorBase<ISceneView::RemoveAll(); // 76
	{
		int nIndex; // 78
		CUtlLinkedList<CSceneLayer::Head(); // 78
		InvalidIndex(void); // 78
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 494
		CUtlLinkedList<CSceneLayer::operator[](
				int i);  // 80
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 550
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 78
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 92
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 93
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 93
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::RemoveAll(); // 1798
	CUtlMemory<CPVSBits, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CPVSBits, int>::ConvertToExternalMemory(
				CPVSBits* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CPVSBits, int>::Purge_FixedGrowable(
				CPVSBits* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CPVSBits, int>::Purge_FixedGrowable(
				CPVSBits* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, CPVSBits, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<CPVSBits, 16, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::Purge(); // 560
	ValidateAlignment<CPVSBits>(void); // 508
	CUtlMemory<CPVSBits, int>::Purge(); // 903
	CUtlMemory<CPVSBits, int>::Purge(); // 510
	CUtlMemory<CPVSBits, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CPVSBits, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CPVSBits, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CPVSBits, 16>::~CUtlVectorFixedGrowable(); // 93
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SceneVolumetricFogVolume_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SceneVolumetricFogVolume_t, int>::Purge(); // 903
	CUtlMemory<SceneVolumetricFogVolume_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::Purge(); // 560
	ValidateAlignment<SceneVolumetricFogVolume_t>(void); // 508
	CUtlMemory<SceneVolumetricFogVolume_t, int>::Purge(); // 510
	CUtlMemory<SceneVolumetricFogVolume_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::~CUtlVector(); // 93
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SceneObjectCullingBox_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SceneObjectCullingBox_t, int>::Purge(); // 903
	CUtlMemory<SceneObjectCullingBox_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Purge(); // 560
	ValidateAlignment<SceneObjectCullingBox_t>(void); // 508
	CUtlMemory<SceneObjectCullingBox_t, int>::Purge(); // 510
	CUtlMemory<SceneObjectCullingBox_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::~CUtlVector(); // 93
	RenderTargetId_t::~RenderTargetId_t(); // 50
	{
		int i; // 1721
		CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this,
			int i);  // 1723
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::RemoveAll(); // 1798
		CUtlMemory<ImageFormat, int>::IsExternallyAllocated(); // 905
		CUtlMemory<ImageFormat, int>::Purge(); // 903
		CUtlMemory<ImageFormat, int>::Purge(); // 1799
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Purge(); // 560
		ValidateAlignment<ImageFormat>(void); // 508
		CUtlMemory<ImageFormat, int>::Purge(); // 510
		CUtlMemory<ImageFormat, int>::~CUtlMemory(); // 562
		CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::~CUtlVectorBase(); // 410
		CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >::~CUtlVector(); // 135
		RenderTargetId_t::~RenderTargetId_t(); // 135
		RenderTargetInfo_t::~RenderTargetInfo_t(); // 1526
		Destruct<CScratchRenderTargetSystem::RenderTargetInfo_t>(RenderTargetInfo_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 1798
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::ConvertToExternalMemory(
				RenderTargetInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Purge_FixedGrowable(
				RenderTargetInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Purge_FixedGrowable(
				RenderTargetInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<35, CScratchRenderTargetSystem::RenderTargetInfo_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<CScratchRenderTargetSystem::RenderTargetInfo_t, 35, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 1800
	Purge(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 560
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Purge(); // 903
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::Purge(); // 510
	ValidateAlignment<CScratchRenderTargetSystem::RenderTargetInfo_t>(void); // 508
	CUtlMemory<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CScratchRenderTargetSystem::RenderTargetInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CScratchRenderTargetSystem::RenderTargetInfo_t, 35, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CScratchRenderTargetSystem::RenderTargetInfo_t, CUtlMemoryFixedGrowable<CScratchRenderTargetSystem:: this); // 478
	CUtlVectorFixedGrowable<CScratchRenderTargetSystem::RenderTargetInfo_t, 35>::~CUtlVectorFixedGrowable(); // 50
	CScratchRenderTargetSystem::~CScratchRenderTargetSystem(); // 93
	CUtlVectorBase<ISceneView::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<ISceneView::Purge_FixedGrowable(
				ISceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneView::Purge_FixedGrowable(
				ISceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, ISceneView::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneView::Purge(
		int numElements);  // 1799
	CUtlMemory<ISceneView::Base(); // 112
	CUtlVectorBase<ISceneView::Base(); // 368
	CUtlVectorBase<ISceneView::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneView::Purge(); // 560
	CUtlMemory<ISceneView::IsExternallyAllocated(); // 905
	CUtlMemory<ISceneView::Purge(); // 903
	CUtlMemory<ISceneView::Purge(); // 510
	ValidateAlignment<ISceneView*>(void); // 508
	CUtlMemory<ISceneView::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneView::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneView::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneView::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneView::~CUtlVectorFixedGrowable(); // 93
	CUtlVectorBase<ISceneView::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<ISceneView::Purge_FixedGrowable(
				ISceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneView::Purge_FixedGrowable(
				ISceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, ISceneView::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneView::Purge(
		int numElements);  // 1799
	CUtlMemory<ISceneView::Base(); // 112
	CUtlVectorBase<ISceneView::Base(); // 368
	CUtlVectorBase<ISceneView::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneView::Purge(); // 560
	CUtlMemory<ISceneView::IsExternallyAllocated(); // 905
	CUtlMemory<ISceneView::Purge(); // 903
	CUtlMemory<ISceneView::Purge(); // 510
	ValidateAlignment<ISceneView*>(void); // 508
	CUtlMemory<ISceneView::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneView::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneView::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneView::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneView::~CUtlVectorFixedGrowable(); // 93
	{
		int i; // 1721
	}
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::RemoveAll(); // 1798
	CUtlMemory<CFrustum, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFrustum, int>::Purge(); // 903
	CUtlMemory<CFrustum, int>::Purge(); // 1799
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::Purge(); // 560
	ValidateAlignment<CFrustum>(void); // 508
	CUtlMemory<CFrustum, int>::Purge(); // 510
	CUtlMemory<CFrustum, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFrustum, CUtlMemory<CFrustum, int> >::~CUtlVector(); // 93
	ValidateAlignment<UtlLinkedListElem_t<CSceneLayer*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::~CUtlMemory(); // 462
	CUtlLinkedList<CSceneLayer::~CUtlLinkedList(); // 93
	CUtlMemory<ISceneView::WorldList_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneView::WorldList_t, int>::ConvertToExternalMemory(
				WorldList_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneView::WorldList_t, int>::Purge_FixedGrowable(
				WorldList_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneView::WorldList_t, int>::Purge_FixedGrowable(
				WorldList_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, ISceneView::WorldList_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::RemoveAll(); // 1798
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::Purge(); // 560
	ValidateAlignment<ISceneView::WorldList_t>(void); // 508
	CUtlMemory<ISceneView::WorldList_t, int>::Purge(); // 903
	CUtlMemory<ISceneView::WorldList_t, int>::Purge(); // 510
	CUtlMemory<ISceneView::WorldList_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneView::WorldList_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneView::WorldList_t, 16>::~CUtlVectorFixedGrowable(); // 257
	CFrustum::~CFrustum(); // 11
	SkyboxRenderSetup::~SkyboxRenderSetup(); // 178
	SceneVieweSettings::~SceneVieweSettings(); // 257
	ISceneView::~ISceneView(); // 93
} /* size: 1447, inline expansions: 146 (5553 bytes) */

// <03236E7B> ../scenesystem/sceneview.cpp:69
// function calls: 2
void CSceneView::~CSceneView()
{
	CUtlMemoryPool<CSceneView>::Free(
		CSceneView* pMem);  // 250
	operator delete(void* pMem); // 93
} /* size: 41, inline expansions: 2 (30 bytes) */

// <03236E43> ../scenesystem/sceneview.cpp:69
// variables: 2
void CSceneView::~CSceneView()
{
	{
		int i; // 72
	}
	{
		int nIndex; // 78
	}
} /* size: 0 */

// <03236DA7> ../scenesystem/sceneview.cpp:95
// function call: 1
void CSceneView::GetDebugOverlayList()
{
	CSceneViewDebugOverlays::DisableNonInstantaneousOverlays(); // 100
} /* size: 84, inline expansions: 1 (7 bytes) */

// <03236D65> ../scenesystem/sceneview.cpp:106
void CSceneView::SetDistanceScaleForLODAndCulling(float flScaleValue)
{
} /* size: 17 */

// <03236D37> ../scenesystem/sceneview.cpp:111
void CSceneView::GetSquaredDistanceScaleForLODAndCulling()
{
} /* size: 13 */

// <03236C5A> ../scenesystem/sceneview.cpp:116
// function calls: 3
void CSceneView::GetFirstAuxilaryRenderCamera()
{
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::Count(); // 118
	CUtlMemory<CFrustum, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::operator[](
			int i);  // 119
} /* size: 24, inline expansions: 3 (14 bytes) */

// <0323689A> ../scenesystem/sceneview.cpp:131
// variables: 3
// function calls: 10
void CSceneView::CopyWorldsAndVisFrom(ISceneView* pParentView, const Vector& vCameraPos, vis_type_t visType)
{
	{
		int i; // 134
		{
			CPVSBits parentPVS; // 136
			ISceneWorld* pWorld; // 137
			CSceneWorld::IsFreed(); // 340
			{
			}
			CSceneWorld::GetPVS(); // 144
			CPVSBits::CPVSBits(); // 136
			CUtlMemory<ISceneView::WorldList_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::operator[](
					int i);  // 449
			ISceneView::GetWorldToRender(
					int nIndex);  // 137
			CSceneWorld::IsFreed(); // 340
			{
			}
			CSceneWorld::GetPVS(); // 140
		}
		CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::Count(); // 446
		ISceneView::NumWorldsToRender(); // 134
	}
} /* size: 0 */

// <032366F7> ../scenesystem/sceneview.cpp:150
// variables: 2
// function calls: 5
void CSceneView::CopyWorldsFrom(ISceneView* pParentView)
{
	{
		int i; // 153
		{
			ISceneWorld* pWorld; // 155
			CUtlMemory<ISceneView::WorldList_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::operator[](
					int i);  // 449
			ISceneView::GetWorldToRender(
					int nIndex);  // 155
		}
		CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::Count(); // 446
		ISceneView::NumWorldsToRender(); // 153
	}
} /* size: 137 */

// <032366AA> ../scenesystem/sceneview.cpp:160
void CSceneView::GetViewId()
{
} /* size: 16 */

// <03246EF1> ../scenesystem/sceneview.cpp:165
// function calls: 3
void CSceneView::SetUserClipPlane(int nPlaneIdx, const VPlane& plane)
{
	Vector::operator=(
			const Vector& vOther);  // 124
	VPlane::operator=(
			const VPlane& thePlane);  // 170
	{
	}
	CSceneView::SetUserClipPlane(
			int nPlaneIdx,
			const VPlane& plane);  // 165
} /* size: 0, inline expansions: 3 (107 bytes) */

// <03236655> ../scenesystem/sceneview.cpp:165
// variables: 2
void CSceneView::SetUserClipPlane(int nPlaneIdx, const VPlane& plane)
{
	const char   __FUNCTION__; // 39715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
} /* size: 0, variables: 1 */

// <032352B3> ../scenesystem/sceneview.cpp:174
// variables: 5
// function calls: 81
void CSceneView::AddWorldToRenderList(ISceneWorld* pWorld, const CPVSBits* pVis, bool bAddCullingBoxes)
{
	const char   __FUNCTION__; // 39808
	WorldList_t list; // 177
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	CPVSBits::IsEmpty(); // 181
	CUtlMemory<ISceneView::WorldList_t, int>::NumAllocated(); // 1196
	CUtlMemory<ISceneView::WorldList_t, int>::Base(); // 112
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::Base(); // 368
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::ResetDbgInfo(); // 824
	CUtlMemory<ISceneView::WorldList_t, int>::IsGrowable(); // 823
	CUtlMemory<ISceneView::WorldList_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ISceneView::WorldList_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ISceneView::WorldList_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<ISceneView::WorldList_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::Element(
		int i);  // 1201
	CopyConstruct<ISceneView::WorldList_t>(WorldList_t* pMemory,
						const WorldList_t& src);  // 1201
	CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::AddToTail(
			const WorldList_t& src);  // 186
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 188
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
		unsigned int nSpinSleepTime);  // 897
	CThreadFastMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 196
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::Count(); // 1366
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::Count(); // 1369
	CUtlMemory<SceneVolumetricFogVolume_t, int>::NumAllocated(); // 782
	CUtlMemory<SceneVolumetricFogVolume_t, int>::IsGrowable(); // 823
	CUtlMemory<SceneVolumetricFogVolume_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<SceneVolumetricFogVolume_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<SceneVolumetricFogVolume_t, int>::Grow(
		int num);  // 806
	CUtlMemory<SceneVolumetricFogVolume_t, int>::Base(); // 112
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::Base(); // 368
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<SceneVolumetricFogVolume_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<SceneVolumetricFogVolume_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<SceneVolumetricFogVolume_t>(SceneVolumetricFogVolume_t* pMemory,
								const SceneVolumetricFogVolume_t& src);  // 1378
	}
	CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::AddVectorToTail<CUtlMemory<SceneVolumetricFogVolume_t, int> >(
									const CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >& src);  // 197
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 897
	CThreadFastMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 198
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 188
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
		unsigned int nSpinSleepTime);  // 897
	CThreadFastMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 190
	CUtlMemory<CPVSBits, int>::NumAllocated(); // 1196
	CUtlMemory<CPVSBits, int>::Base(); // 112
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::Base(); // 368
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CPVSBits, int>::IsGrowable(); // 823
	CUtlMemory<CPVSBits, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CPVSBits, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CPVSBits, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPVSBits, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::Element(
		int i);  // 1201
	CopyConstruct<CPVSBits>(CPVSBits* pMemory,
				const CPVSBits& src);  // 1201
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::AddToTail(
			const CPVSBits& src);  // 183
	CUtlMemory<CPVSBits, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CPVSBits, CUtlMemoryFixedGrowable<CPVSBits, 16, int> >::operator[](
			int i);  // 183
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Count(); // 1366
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Count(); // 1369
	CUtlMemory<SceneObjectCullingBox_t, int>::NumAllocated(); // 782
	CUtlMemory<SceneObjectCullingBox_t, int>::Base(); // 112
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Base(); // 368
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<SceneObjectCullingBox_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<SceneObjectCullingBox_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<SceneObjectCullingBox_t>(SceneObjectCullingBox_t* pMemory,
							const SceneObjectCullingBox_t& src);  // 1378
	}
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::AddVectorToTail<CUtlMemory<SceneObjectCullingBox_t, int> >(
									const CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >& src);  // 191
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 897
	CThreadFastMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 192
} /* size: 0, variables: 2, inline expansions: 71 (4518 bytes) */

// <03235276> ../scenesystem/sceneview.cpp:202
void CSceneView::SetUserDataPtr(void* pUserData)
{
} /* size: 12 */

// <03235243> ../scenesystem/sceneview.cpp:207
void* CSceneView::GetUserDataPtr()
{
} /* size: 12 */

// <03235206> ../scenesystem/sceneview.cpp:212
void CSceneView::SetNextPtr(ISceneView* pNext)
{
} /* size: 12 */

// <032351D8> ../scenesystem/sceneview.cpp:217
void CSceneView::GetNextPtr()
{
} /* size: 12 */

// <03235170> ../scenesystem/sceneview.cpp:222
void CSceneView::PushNamedRenderTargetScope(const char* pName)
{
} /* size: 16 */

// <03235123> ../scenesystem/sceneview.cpp:227
void CSceneView::PopNamedRenderTargetScope()
{
} /* size: 16 */

// <03235040> ../scenesystem/sceneview.cpp:232
// function calls: 2
void CSceneView::FindOrCreateRenderTarget(const char* pName, HRenderTexture hTexture, SceneViewRenderTargetFlags_t nFlags)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 234
} /* size: 70, inline expansions: 2 (40 bytes) */

// <03234F87> ../scenesystem/sceneview.cpp:237
void CSceneView::FindOrCreateRenderTarget(const char* pName, SwapChainHandle_t hSwapChain, SwapChainBuffer_t nType, SceneViewRenderTargetFlags_t nFlags)
{
} /* size: 16 */

// <03234EE9> ../scenesystem/sceneview.cpp:242
void CSceneView::FindOrCreateRenderTarget(const char* pName, const SceneViewRenderTargetInfo_t& rtInfo, SceneViewRenderTargetFlags_t nFlags)
{
} /* size: 16 */

// <03234E66> ../scenesystem/sceneview.cpp:247
void CSceneView::FindOrCreateRenderTarget(const char* pName, const char* pOtherName)
{
} /* size: 16 */

// <03234DE1> ../scenesystem/sceneview.cpp:256
void CSceneView::FindOrCreateRenderTarget(const char* pName, HSceneViewRenderTarget hOtherTarget)
{
} /* size: 16 */

// <03234D24> ../scenesystem/sceneview.cpp:265
void CSceneView::FindOrCreateRenderTarget(const char* pName, ISceneView* pIOtherView, HSceneViewRenderTarget hOtherTarget, SceneViewRenderTargetUsageFlags_t nUsageFlags)
{
} /* size: 16 */

// <03234CBB> ../scenesystem/sceneview.cpp:274
void CSceneView::MarkRenderTargetRead(HSceneViewRenderTarget hTarget)
{
} /* size: 16 */

// <03234C3B> ../scenesystem/sceneview.cpp:283
void CSceneView::GetRenderTargetTexture(HSceneViewRenderTarget hTarget)
{
} /* size: 70 */

// <03234BB2> ../scenesystem/sceneview.cpp:291
// function call: 1
void CSceneView::ComputeScreenCorners(Vector* pOutScreenCorners)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 293
} /* size: 49, inline expansions: 1 (44 bytes) */

// <03234A5F> ../scenesystem/sceneview.cpp:303
// variable: 1
// function calls: 3
void CSceneView::ComputeEyeRays(Vector* pOutEyeRays)
{
	{
		uint i; // 308
		Vector::NormalizeInPlace(); // 310
	}
	ISceneView::GetFrustum(); // 306
	CFrustum::GetCameraFarPlane(); // 306
} /* size: 76, inline expansions: 2 (4 bytes) */

// <032349F6> ../scenesystem/sceneview.cpp:317
void CSceneView::FindRenderTarget(const char* pName)
{
} /* size: 16 */

// <03234971> ../scenesystem/sceneview.cpp:322
void CSceneView::GetRenderTargetInfo(HSceneViewRenderTarget hTarget, SceneViewRenderTargetInfo_t* pInfo)
{
} /* size: 16 */

// <03234924> ../scenesystem/sceneview.cpp:327
void CSceneView::ComputeRenderTargetAllocations()
{
} /* size: 16 */

// <03246E4B> ../scenesystem/sceneview.cpp:332
void CSceneView::GetSwapChain()
{
} /* size: 12 */

// <0323425B> ../scenesystem/sceneview.cpp:337
// variables: 3
// function calls: 23
void CSceneView::CreateLayer(const char* pszDebugName, const RenderViewport_t& viewport, ELayerType eType)
{
	CSceneLayer* pNew; // 339
	const char   __FUNCTION__; // 39585
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 343
	}
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
			const CRenderAttributes* pParent);  // 341
	RenderViewport_t::IsValid(); // 343
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 344
	CSceneView::GetSwapChain(); // 354
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 989
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 990
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 999
	RenderTargetDesc_t::Init(
		SwapChainHandle_t hSwapChain,
		bool bUseColorBuffer,
		bool bUseDepthBuffer,
		RenderColorSpace_t allowSrgbWrites);  // 354
	CSceneSystem::AllocateUniqueSceneLayerIndex(); // 356
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 364
} /* size: 0, variables: 2, inline expansions: 23 (364 bytes) */

// <03247E91> ../scenesystem/sceneview.cpp:373
// variables: 3
// function calls: 6
void CSceneView::AddLayer(const char* pszDebugName, const RenderViewport_t& viewport, ELayerType eType, ISceneLayer* pAddBefore)
{
	CSceneLayer* pNew; // 375
	{
		int nIdx; // 379
		{
			int i; // 867
			CUtlLinkedList<CSceneLayer::Head(); // 867
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 488
			CUtlLinkedList<CSceneLayer::Element(
				int i);  // 869
			CUtlLinkedList<CSceneLayer::Next(
				int i);  // 867
		}
		CUtlLinkedList<CSceneLayer::Find(
			CSceneLayer* const& src);  // 379
		CUtlLinkedList<CSceneLayer::AddToTail(
				CSceneLayer* const& src);  // 386
	}
} /* size: 220, variables: 1 */

// <032341D7> ../scenesystem/sceneview.cpp:373
// variables: 2
void CSceneView::AddLayer(const char* pszDebugName, const RenderViewport_t& viewport, ELayerType eType, ISceneLayer* pAddBefore)
{
	CSceneLayer* pNew; // 375
	{
		int nIdx; // 379
	}
} /* size: 0, variables: 1 */

// <03233EB9> ../scenesystem/sceneview.cpp:401
// variables: 3
// function calls: 7
void CSceneView::AddLabelLayer(const char* pLabelName)
{
	char layerName; // 403
	RenderViewport_t vp; // 406
	CSceneLayer* pNew; // 408
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 404
	RenderViewport_t::RenderViewport_t(); // 406
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 409
	ISceneLayer::SetLabel(
		CUtlStringToken nTok);  // 409
	CUtlLinkedList<CSceneLayer::AddToTail(
			CSceneLayer* const& src);  // 410
} /* size: 0, variables: 3, inline expansions: 7 (250 bytes) */

// <03233C72> ../scenesystem/sceneview.cpp:414
// variables: 3
// function calls: 7
void CSceneView::HasLabelLayer(CUtlStringToken nLabel)
{
	int nIndex; // 416
	{
		int i; // 894
		CUtlLinkedList<CSceneLayer::Head(); // 894
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 896
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 894
		ISceneLayer::GetLabel(); // 416
		operator()(const class* __closure,
				const CSceneLayer* l); // 896
	}
	CUtlLinkedList<CSceneLayer::FindFirstMatching<CSceneView::HasLabelLayer(
													 test);  // 416
} /* size: 75, variables: 1, inline expansions: 1 (65 bytes) */

// <03233760> ../scenesystem/sceneview.cpp:420
// variables: 8
// function calls: 13
void CSceneView::MoveLayerToBeAfterLabel(CUtlStringToken nLabel, ISceneLayer* pLayer, bool bAddFirst)
{
	int nOurIndex; // 428
	const char   __FUNCTION__; // 39879
	int nIndex; // 434
	{
		int* _pCrash; // 431
	}
	{
		int* _pCrash; // 436
	}
	{
		int i; // 867
		CUtlLinkedList<CSceneLayer::Head(); // 867
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 869
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 867
	}
	CUtlLinkedList<CSceneLayer::Find(
		CSceneLayer* const& src);  // 428
	{
		int i; // 894
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 894
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 896
		ISceneLayer::GetLabel(); // 434
		operator()(const class* __closure,
				const CSceneLayer* l); // 896
	}
	CUtlLinkedList<CSceneLayer::FindFirstMatching<CSceneView::MoveLayerToBeAfterLabel(
																 test);  // 434
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 431
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 436
} /* size: 357, variables: 3, inline expansions: 4 (192 bytes) */

// <03233288> ../scenesystem/sceneview.cpp:441
// variables: 7
// function calls: 13
void CSceneView::MoveLayerToBeAfterLayer(ISceneLayer* pLayerToMove, ISceneLayer* pAnchorLayer)
{
	int nOurIndex; // 443
	const char   __FUNCTION__; // 39879
	int nTheirIndex; // 449
	{
		int* _pCrash; // 446
	}
	{
		int* _pCrash; // 452
	}
	{
		int i; // 867
		CUtlLinkedList<CSceneLayer::Head(); // 867
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 869
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 867
	}
	CUtlLinkedList<CSceneLayer::Find(
		CSceneLayer* const& src);  // 443
	{
		int i; // 867
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 867
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 869
	}
	CUtlLinkedList<CSceneLayer::Find(
		CSceneLayer* const& src);  // 449
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 446
	ISceneLayer::GetDebugName(); // 452
	ISceneLayer::GetDebugName(); // 452
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 452
} /* size: 379, variables: 3, inline expansions: 6 (153 bytes) */

// <03232EE3> ../scenesystem/sceneview.cpp:459
// variables: 7
// function calls: 11
void CSceneView::CopyRenderTargetOutputsAndViewportFromPreviousLayer(ISceneLayer* pLayer)
{
	int nOurIndex; // 462
	const char   __FUNCTION__; // 40505
	int nPrevIndex; // 464
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 463
	}
	{
		CSceneLayer* pPrev; // 472
		{
			int* _pCrash; // 470
		}
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 368
		CUtlLinkedList<CSceneLayer::InternalElement(
				int i);  // 543
		CUtlLinkedList<CSceneLayer::Previous(
			int i);  // 467
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 470
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 500
		CUtlLinkedList<CSceneLayer::operator[](
				int i);  // 472
	}
	{
		int i; // 867
		CUtlLinkedList<CSceneLayer::Head(); // 867
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 869
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 867
	}
	CUtlLinkedList<CSceneLayer::Find(
		CSceneLayer* const& src);  // 462
} /* size: 0, variables: 3, inline expansions: 1 (102 bytes) */

// <03232E7F> ../scenesystem/sceneview.cpp:484
// variables: 4
inline bool ShouldBreakRenderPass(CSceneLayer* pLayer, CSceneLayer* pPrevLayer)
{
	HRenderTexture hCurLayerTexture; // 514
	HRenderTexture hPrevLayerTexture; // 515
	{
		const CTextureDesc* pCurDesc; // 534
		const CTextureDesc* pPrevDesc; // 535
	}
} /* size: 0, variables: 2 */

// <032318FD> ../scenesystem/sceneview.cpp:565
// variables: 19
// function calls: 94
void CSceneView::CreateRenderPasses()
{
	uint32 nUniqueRenderPassId; // 567
	int nMaxLayerCount; // 571
	const bool  bOmitSingleLayerPasses; // 587
	int nLayerIdx; // 594
	{
		int nStartIdx; // 620
		int nPassIdx; // 621
		int nLayerCount; // 622
		CRenderPassDesc* pRenderPass; // 623
		CSceneLayer* pPrevLayer; // 624
		bool bUsePass; // 680
		RenderPassHandle_t hRenderPass; // 692
		{
			CSceneLayer* pLayer; // 600
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 600
			CSceneLayer::CanBenefitFromRenderPass(); // 601
			CUtlLinkedList<CSceneLayer::Next(
				int i);  // 606
		}
		{
			CSceneLayer* pLayer; // 628
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 628
			CSceneLayer::CanBenefitFromRenderPass(); // 633
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 368
			CUtlLinkedList<CSceneLayer::InternalElement(
					int i);  // 550
			CUtlLinkedList<CSceneLayer::Next(
				int i);  // 668
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 514
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 515
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 518
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 526
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 532
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 532
			{
				const CTextureDesc* pCurDesc; // 534
				const CTextureDesc* pPrevDesc; // 535
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 534
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 535
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 528
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 528
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 520
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 520
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 550
			ShouldBreakRenderPass(CSceneLayer* pLayer,
						CSceneLayer* pPrevLayer);  // 629
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 368
			CUtlLinkedList<CSceneLayer::InternalElement(
					int i);  // 550
			CUtlLinkedList<CSceneLayer::Next(
				int i);  // 636
		}
		{
			CSceneLayer* pLayer; // 683
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 683
			CSceneSystem::GetNumSpatialPartitions(); // 686
		}
		{
			CSceneLayer* pLayer; // 717
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 494
			CUtlLinkedList<CSceneLayer::operator[](
					int i);  // 717
			CSceneLayer::CanBenefitFromRenderPass(); // 722
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 368
			CUtlLinkedList<CSceneLayer::InternalElement(
					int i);  // 550
			CUtlLinkedList<CSceneLayer::Next(
				int i);  // 746
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 514
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 515
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 518
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 526
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 532
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 532
			{
				const CTextureDesc* pCurDesc; // 534
				const CTextureDesc* pPrevDesc; // 535
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 534
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 535
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 520
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 520
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 528
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 528
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 550
			ShouldBreakRenderPass(CSceneLayer* pLayer,
						CSceneLayer* pPrevLayer);  // 718
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 368
			CUtlLinkedList<CSceneLayer::InternalElement(
					int i);  // 550
			CUtlLinkedList<CSceneLayer::Next(
				int i);  // 725
		}
	}
	CUtlLinkedList<CSceneLayer::Head(); // 594
} /* size: 1505, variables: 4, inline expansions: 1 (8 bytes) */

// <032318C0> ../scenesystem/sceneview.cpp:759
void CSceneView::SetIssueSortIndex(int nIndex)
{
} /* size: 11 */

// <03231892> ../scenesystem/sceneview.cpp:764
void CSceneView::GetIssueSortIndex()
{
} /* size: 11 */

// <03231476> ../scenesystem/sceneview.cpp:770
// variables: 4
// function calls: 11
void CSceneView::AddSemaphoreDependencyForLabelLayer(CUtlStringToken nLabel, ISceneLayer* pLayer)
{
	int nIndex; // 772
	{
		const char* pLabelName; // 775
		CUtlStringToken::CanGetOriginalString(); // 775
		CUtlStringToken::MaybeGetOriginalString(); // 775
	}
	{
		int i; // 894
		CUtlLinkedList<CSceneLayer::Head(); // 894
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 896
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 894
		ISceneLayer::GetLabel(); // 772
		operator()(const class* __closure,
				const CSceneLayer* l); // 896
	}
	CUtlLinkedList<CSceneLayer::FindFirstMatching<CSceneView::AddSemaphoreDependencyForLabelLayer(
																 test);  // 772
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
			int i);  // 494
	CUtlLinkedList<CSceneLayer::operator[](
			int i);  // 781
} /* size: 341, variables: 1, inline expansions: 3 (86 bytes) */

// <032313A9> ../scenesystem/sceneview.cpp:785
// variable: 1
void CSceneView::AddRenderLayer(const char* pszDebugName, const RenderViewport_t& viewport, const CUtlStringToken& eShaderMode, ISceneLayer* pAddBefore)
{
	ISceneLayer* pRet; // 787
} /* size: 34, variables: 1 */

// <032480FA> ../scenesystem/sceneview.cpp:792
// variable: 1
void CSceneView::AddProceduralLayer(const char* pszDebugName, const RenderViewport_t& viewport, IProceduralLayerRenderer* pFnToRender, ISceneLayer* pAddBefore, bool bDeleteWhenDone)
{
	ISceneLayer* pRet; // 794
} /* size: 45, variables: 1 */

// <03231275> ../scenesystem/sceneview.cpp:800
// variable: 1
void CSceneView::AddClearLayer(const char* pszDebugName, const RenderViewport_t& viewport, int nClearFlags, ISceneLayer* pAddBefore)
{
	ISceneLayer* pRet; // 802
} /* size: 34, variables: 1 */

// <0321B21F> ../scenesystem/sceneview.cpp:807
// member functions: 8
// member variables: 2
// vtable entry: 1
// class size: 32
class CManagedProceduralLayerRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CManagedProceduralLayerRenderer(CManagedProceduralLayerRenderer* , const CManagedProceduralLayerRenderer& );
	/* ../scenesystem/sceneview.cpp:810 */
	void CManagedProceduralLayerRenderer(CManagedProceduralLayerRenderer* , SboxProceduralLayerCallback);
	/* ../scenesystem/sceneview.cpp:811 */
	virtual void ~CManagedProceduralLayerRenderer(CManagedProceduralLayerRenderer* );
	/* ../scenesystem/sceneview.cpp:813 */
	virtual void Render(CManagedProceduralLayerRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	SboxProceduralLayerCallback m_callback; /* 8 24 */
	void CManagedProceduralLayerRenderer(class CManagedProceduralLayerRenderer *, const class CManagedProceduralLayerRenderer  &); /* linkage=_ZN31CManagedProceduralLayerRendererC4ERKS_ */
	void CManagedProceduralLayerRenderer(class CManagedProceduralLayerRenderer *, SboxProceduralLayerCallback); /* linkage=_ZN31CManagedProceduralLayerRendererC4E12CUtlDelegateIFv20ManagedRenderSetup_tEE */
	virtual void ~CManagedProceduralLayerRenderer(class CManagedProceduralLayerRenderer *); /* linkage=_ZN31CManagedProceduralLayerRendererD4Ev */
	virtual void Render(class CManagedProceduralLayerRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN31CManagedProceduralLayerRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
};

// <032311E2> ../scenesystem/sceneview.cpp:810
void CManagedProceduralLayerRenderer::CManagedProceduralLayerRenderer(SboxProceduralLayerCallback callback)
{
} /* size: 0 */

// <032311BC> ../scenesystem/sceneview.cpp:810
inline void CManagedProceduralLayerRenderer::CManagedProceduralLayerRenderer(SboxProceduralLayerCallback callback)
{
} /* size: 0 */

// <0323115D> ../scenesystem/sceneview.cpp:811
// function call: 1
void CManagedProceduralLayerRenderer::~CManagedProceduralLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 811
} /* size: 5, inline expansions: 1 (0 bytes) */

// <032310A7> ../scenesystem/sceneview.cpp:811
// function calls: 2
void CManagedProceduralLayerRenderer::~CManagedProceduralLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 811
	CManagedProceduralLayerRenderer::~CManagedProceduralLayerRenderer(); // 811
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0323108E> ../scenesystem/sceneview.cpp:811
inline void CManagedProceduralLayerRenderer::~CManagedProceduralLayerRenderer()
{
} /* size: 0 */

// <03230E03> ../scenesystem/sceneview.cpp:813
// variables: 3
// function calls: 6
void CManagedProceduralLayerRenderer::Render(ISceneView* pView, IRenderContext* pCtx, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	ImageFormat colorFormat; // 822
	RenderMultisampleType_t msaaLevel; // 823
	ManagedRenderSetup_t setup; // 828
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<ManagedRenderSetup_t, void>::IsEmpty(); // 815
	ManagedRenderSetup_t::ManagedRenderSetup_t(
				IRenderContext* renderContext,
				ISceneView* sceneView,
				ISceneLayer* sceneLayer,
				ImageFormat colorFormat,
				RenderMultisampleType_t msaaLevel,
				SceneSystemPerFrameStats_t* stats);  // 828
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(ManagedRenderSetup_t), void (*)(ManagedRenderSetup_t), void (*)(Man this); // 1150
	ClosurePtr<void (detail::GenericClass::::GetClosureThis()(ManagedRenderSetup_t), void (*)(ManagedRenderSetup_t), void (*)(Man this); // 1150
	FastDelegate1<ManagedRenderSetup_t, void>::operator(
			ManagedRenderSetup_t p1);  // 833
} /* size: 249, variables: 3, inline expansions: 6 (172 bytes) */

// <03230A54> ../scenesystem/sceneview.cpp:839
// variable: 1
// function calls: 16
void CSceneView::AddManagedProceduralLayer(const char* pszDebugName, const RenderViewport_t& viewport, SboxProceduralLayerCallback callback, ISceneLayer* pAddBefore, bool bDeleteWhenDone)
{
	ISceneLayer* pRet; // 841
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(ManagedRenderSetup_t), void (*)(ManagedRenderSetup_t), void (*)(ManagedRe this); // 1086
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 843
	ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<ManagedRenderSetup_t, void> >(
								FastDelegate1<ManagedRenderSetup_t, void>* pParent,
								const CUtlAbstractDelegate& right);  // 1087
	FastDelegate1<ManagedRenderSetup_t, void>::FastDelegate1(
			const FastDelegate1<ManagedRenderSetup_t, void>& x);  // 2148
	CUtlDelegate<void(ManagedRenderSetup_t)>::CUtlDelegate(
			const CUtlDelegate<void(ManagedRenderSetup_t)> &); // 842
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 810
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(ManagedRenderSetup_t), void (*)(ManagedRenderSetup_t), void (*)(ManagedRe this); // 1086
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 843
	ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate1<ManagedRenderSetup_t, void> >(
								FastDelegate1<ManagedRenderSetup_t, void>* pParent,
								const CUtlAbstractDelegate& right);  // 1087
	FastDelegate1<ManagedRenderSetup_t, void>::FastDelegate1(
			const FastDelegate1<ManagedRenderSetup_t, void>& x);  // 2148
	CUtlDelegate<void(ManagedRenderSetup_t)>::CUtlDelegate(
			const CUtlDelegate<void(ManagedRenderSetup_t)> &); // 810
	CManagedProceduralLayerRenderer::CManagedProceduralLayerRenderer(
					SboxProceduralLayerCallback callback);  // 842
} /* size: 110, variables: 1, inline expansions: 14 (126 bytes) */

// <03230A26> ../scenesystem/sceneview.cpp:847
void CSceneView::CaptureRenderDocForView()
{
} /* size: 12 */

// <0321B125> ../scenesystem/sceneview.cpp:853
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 24
class CSimplePostProcessingLayerRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CSimplePostProcessingLayerRenderer(CSimplePostProcessingLayerRenderer* , const CSimplePostProcessingLayerRenderer& );
	/* ../scenesystem/sceneview.cpp:856 */
	void CSimplePostProcessingLayerRenderer(CSimplePostProcessingLayerRenderer* , const IMaterial2* , bool);
	/* ../scenesystem/sceneview.cpp:861 */
	virtual void ~CSimplePostProcessingLayerRenderer(CSimplePostProcessingLayerRenderer* );
	/* ../scenesystem/sceneview.cpp:863 */
	virtual void Render(CSimplePostProcessingLayerRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	bool m_bHandleCustomClipSpace; /* 8 1 */
private:
	const class IMaterial2 * m_pMaterial; /* 16 8 */
	void CSimplePostProcessingLayerRenderer(class CSimplePostProcessingLayerRenderer *, const class CSimplePostProcessingLayerRenderer  &); /* linkage=_ZN34CSimplePostProcessingLayerRendererC4ERKS_ */
	void CSimplePostProcessingLayerRenderer(class CSimplePostProcessingLayerRenderer *, const class IMaterial2  *, bool); /* linkage=_ZN34CSimplePostProcessingLayerRendererC4EPK10IMaterial2b */
	virtual void ~CSimplePostProcessingLayerRenderer(class CSimplePostProcessingLayerRenderer *); /* linkage=_ZN34CSimplePostProcessingLayerRendererD4Ev */
	virtual void Render(class CSimplePostProcessingLayerRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN34CSimplePostProcessingLayerRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
};

// <03230A05> ../scenesystem/sceneview.cpp:856
void CSimplePostProcessingLayerRenderer::CSimplePostProcessingLayerRenderer(const IMaterial2* pMaterial, bool bTakeClipSpaceIntoAccount)
{
} /* size: 0 */

// <032309D2> ../scenesystem/sceneview.cpp:856
inline void CSimplePostProcessingLayerRenderer::CSimplePostProcessingLayerRenderer(const IMaterial2* pMaterial, bool bTakeClipSpaceIntoAccount)
{
} /* size: 0 */

// <03230973> ../scenesystem/sceneview.cpp:861
// function call: 1
void CSimplePostProcessingLayerRenderer::~CSimplePostProcessingLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 861
} /* size: 5, inline expansions: 1 (0 bytes) */

// <032308BE> ../scenesystem/sceneview.cpp:861
// function calls: 2
void CSimplePostProcessingLayerRenderer::~CSimplePostProcessingLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 861
	CSimplePostProcessingLayerRenderer::~CSimplePostProcessingLayerRenderer(); // 861
} /* size: 14, inline expansions: 2 (0 bytes) */

// <032308A5> ../scenesystem/sceneview.cpp:861
inline void CSimplePostProcessingLayerRenderer::~CSimplePostProcessingLayerRenderer()
{
} /* size: 0 */

// <0322DCB1> ../scenesystem/sceneview.cpp:863
// variables: 67
// function calls: 169
void CSimplePostProcessingLayerRenderer::Render(ISceneView* pView, IRenderContext* pCtx, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	const char   __FUNCTION__; // 39455
	IMaterialMode* pMode; // 869
	Vector2D quadVerts; // 876
	Vector vEyeRays; // 877
	Vector vNearPlaneEyeRays; // 878
	CDynamicVertexData<VertexPostProcess_t> vb; // 900
	int nRenderTargetWidth; // 910
	int nRenderTargetHeight; // 911
	CRenderAttributes attrs; // 920
	Vector4D vInvRtSize; // 922
	Vector4D relativeViewport; // 928
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 865
	}
	{
		int i; // 882
		{
			Vector vTmp; // 884
			Vector::Vector(); // 884
			ISceneView::GetFrustum(); // 885
			Vector::operator=(
					const Vector& vOther);  // 886
			Vector::operator*=(
					float fl);  // 887
			CFrustum::GetCameraFarPlane(); // 887
		}
	}
	{
		int i; // 901
		Vector2D::operator=(
				const Vector2D& vOther);  // 903
		Vector::operator=(
				const Vector& vOther);  // 904
		{
		}
		Vector2D::operator=(
				const Vector2D& vOther);  // 910
		VertexPostProcess_t::operator=(
				const VertexPostProcess_t  &);  // 355
		{
		}
		CVertexDataBase<VertexPostProcess_t>::AdvanceVertex(); // 270
		CVertexDataBase<VertexPostProcess_t>::AdvanceVertex(); // 906
		Vector::operator=(
				const Vector& vOther);  // 905
	}
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 876
	ISceneView::GetFrustum(); // 892
	CFrustum::GetCameraFarPlane(); // 892
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 876
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 876
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 876
	CDynamicVertexData<VertexPostProcess_t>::Lock(
		int nVertexCount);  // 680
	Vector2D::Vector2D(); // 910
	Vector::Vector(); // 910
	Vector::Vector(); // 910
	VertexPostProcess_t::VertexPostProcess_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexPostProcess_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexPostProcess_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexPostProcess_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 900
	CDynamicVertexData<VertexPostProcess_t>::Unlock(); // 760
	CDynamicVertexData<VertexPostProcess_t>::Unlock(); // 639
	CDynamicVertexData<VertexPostProcess_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<VertexPostProcess_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 908
	CSceneLayer::GetRenderTargetDesc(); // 912
	Vector4D::Vector4D(); // 922
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 926
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
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
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34637
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34647
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34657
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
			const Vector4D& vOther);  // 566
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
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 59815
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 59825
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 59835
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
		Vector4D nValue);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 926
	Vector4D::Vector4D(); // 928
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 933
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
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
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34637
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34647
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34657
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
			const Vector4D& vOther);  // 566
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
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 59815
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 59825
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 59835
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
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 933
	CDynamicVertexData<VertexPostProcess_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexPostProcess_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexPostProcess_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexPostProcess_t>::~CDynamicVertexData(); // 942
} /* size: 2834, variables: 11, inline expansions: 63 (6219 bytes) */

// <0321CD8C> ../scenesystem/sceneview.cpp:950
// function call: 1
void CSimpleQuadRenderer::~CSimpleQuadRenderer()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 950
} /* size: 24, inline expansions: 1 (5 bytes) */

// <0321CCA0> ../scenesystem/sceneview.cpp:950
// function calls: 3
void CSimpleQuadRenderer::~CSimpleQuadRenderer()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 950
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 950
	CSimpleQuadRenderer::~CSimpleQuadRenderer(); // 950
} /* size: 54, inline expansions: 3 (25 bytes) */

// <0321CC83> ../scenesystem/sceneview.cpp:950
inline void CSimpleQuadRenderer::~CSimpleQuadRenderer()
{
} /* size: 0 */

// <0321AFB1> ../scenesystem/sceneview.cpp:950
// member functions: 10
// member variables: 7
// vtable entry: 1
// class size: 88
class CSimpleQuadRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CSimpleQuadRenderer(CSimpleQuadRenderer* , CSimpleQuadRenderer& );
	void CSimpleQuadRenderer(CSimpleQuadRenderer* , const CSimpleQuadRenderer& );
	/* ../scenesystem/sceneview.cpp:953 */
	void CSimpleQuadRenderer(CSimpleQuadRenderer* , const CUtlStringToken& , HMaterial, int, int, const RenderViewport_t& , const RenderViewport_t& );
	/* ../scenesystem/sceneview.cpp:963 */
	virtual void Render(CSimpleQuadRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
private:
	CUtlStringToken m_shaderMode; /* 8 4 */
	HMaterialStrong m_hMaterial; /* 16 8 */
	RenderViewport_t m_srcViewport; /* 24 28 */
	RenderViewport_t m_destViewport; /* 52 28 */
	int m_nSrcTextureWidth; /* 80 4 */
	int m_nSrcTextureHeight; /* 84 4 */
	virtual void ~CSimpleQuadRenderer(CSimpleQuadRenderer* );
	void CSimpleQuadRenderer(class CSimpleQuadRenderer *, class CSimpleQuadRenderer &); /* linkage=_ZN19CSimpleQuadRendererC4EOS_ */
	void CSimpleQuadRenderer(class CSimpleQuadRenderer *, const class CSimpleQuadRenderer  &); /* linkage=_ZN19CSimpleQuadRendererC4ERKS_ */
	void CSimpleQuadRenderer(class CSimpleQuadRenderer *, const class CUtlStringToken  &, HMaterial, int, int, const class RenderViewport_t  &, const class RenderViewport_t  &); /* linkage=_ZN19CSimpleQuadRendererC4ERK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2EiiRK16RenderViewport_tS8_ */
	virtual void Render(class CSimpleQuadRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN19CSimpleQuadRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CSimpleQuadRenderer(class CSimpleQuadRenderer *); /* linkage=_ZN19CSimpleQuadRendererD4Ev */
};

// <0322DC7C> ../scenesystem/sceneview.cpp:953
void CSimpleQuadRenderer::CSimpleQuadRenderer(const CUtlStringToken& shaderMode, HMaterial hMaterial, int nSrcWidth, int nSrcHeight, const RenderViewport_t& srcViewport, const RenderViewport_t& destViewport)
{
} /* size: 0 */

// <0322DC15> ../scenesystem/sceneview.cpp:953
inline void CSimpleQuadRenderer::CSimpleQuadRenderer(const CUtlStringToken& shaderMode, HMaterial hMaterial, int nSrcWidth, int nSrcHeight, const RenderViewport_t& srcViewport, const RenderViewport_t& destViewport)
{
} /* size: 0 */

// <0322CFD0> ../scenesystem/sceneview.cpp:963
// variables: 3
// function calls: 38
void CSimpleQuadRenderer::Render(ISceneView* pView, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	IMaterialMode* pMode; // 974
	ScreenSpaceVertex_t ssVerts; // 979
	CDynamicVertexData<VertexPos2DTex2D_t> vb; // 982
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 970
	ISceneUtils::ComputeScreenSpaceVertices(
					const RenderViewport_t& viewport,
					const RenderViewport_t& destViewport,
					const RenderViewport_t& srcViewport,
					int nSrcTextureWidth,
					int nSrcTextureHeight,
					ScreenSpaceVertex_t* pVertices);  // 980
	Vector2D::Vector2D(); // 73
	Vector2D::Vector2D(); // 73
	VertexPos2DTex2D_t::VertexPos2DTex2D_t(); // 165
	CVertexDataBase<VertexPos2DTex2D_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexPos2DTex2D_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexPos2DTex2D_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexPos2DTex2D_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 982
	Vector2D::operator=(
			const Vector2D& vOther);  // 984
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 986
	Vector2D::operator=(
			const Vector2D& vOther);  // 988
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 990
	Vector2D::operator=(
			const Vector2D& vOther);  // 992
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 994
	Vector2D::operator=(
			const Vector2D& vOther);  // 996
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VertexPos2DTex2D_t::operator=(
			const VertexPos2DTex2D_t  &);  // 355
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexPos2DTex2D_t>::AdvanceVertex(); // 998
	CDynamicVertexData<VertexPos2DTex2D_t>::Unlock(); // 760
	CDynamicVertexData<VertexPos2DTex2D_t>::Unlock(); // 639
	CDynamicVertexData<VertexPos2DTex2D_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<VertexPos2DTex2D_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1000
	GetLayout(void); // 1003
	CDynamicVertexData<VertexPos2DTex2D_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexPos2DTex2D_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexPos2DTex2D_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexPos2DTex2D_t>::~CDynamicVertexData(); // 1007
} /* size: 1381, variables: 3, inline expansions: 38 (1843 bytes) */

// <0322CC49> ../scenesystem/sceneview.cpp:1018
// variable: 1
// function calls: 8
void CSceneView::AddSimplePostProcessingLayer(const char* pszDebugName, const RenderViewport_t& viewport, const IMaterial2* pMaterial, const RenderTargetDesc_t& hRenderTargetBinding, ISceneLayer* pAddBefore, bool bTakeClipSpaceIntoAccount)
{
	ISceneLayer* pRet; // 1023
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 856
	CSimplePostProcessingLayerRenderer::CSimplePostProcessingLayerRenderer(
						const IMaterial2* pMaterial,
						bool bTakeClipSpaceIntoAccount);  // 1023
	CSceneView::AddProceduralLayer(
				const char* pszDebugName,
				const RenderViewport_t& viewport,
				IProceduralLayerRenderer* pFnToRender,
				ISceneLayer* pAddBefore,
				bool bDeleteWhenDone);  // 1023
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 228
	RenderTargetDesc_t::Init(
		const RenderTargetDesc_t& desc);  // 266
	CSceneLayer::SetRenderTargetDesc(
				const RenderTargetDesc_t& desc);  // 1024
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1025
} /* size: 402, variables: 1, inline expansions: 8 (740 bytes) */

// <0322C9F2> ../scenesystem/sceneview.cpp:1029
// variable: 1
// function calls: 4
void CSceneView::AddSimplePostProcessingLayer(const char* pszDebugName, const RenderViewport_t& viewport, const IMaterial2* pMaterial, const SceneLayerOutputs_t& outputs, ISceneLayer* pAddBefore, bool bTakeClipSpaceIntoAccount)
{
	ISceneLayer* pRet; // 1035
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 856
	CSimplePostProcessingLayerRenderer::CSimplePostProcessingLayerRenderer(
						const IMaterial2* pMaterial,
						bool bTakeClipSpaceIntoAccount);  // 1035
	CSceneView::AddProceduralLayer(
				const char* pszDebugName,
				const RenderViewport_t& viewport,
				IProceduralLayerRenderer* pFnToRender,
				ISceneLayer* pAddBefore,
				bool bDeleteWhenDone);  // 1035
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1037
} /* size: 340, variables: 1, inline expansions: 4 (84 bytes) */

// <0322C531> ../scenesystem/sceneview.cpp:1041
// variable: 1
// function calls: 12
void CSceneView::AddSimpleQuadRendererLayer(const char* pszDebugName, const RenderViewport_t& layerViewport, const CUtlStringToken& shaderMode, HMaterial hMaterial, int nSrcWidth, int nSrcHeight, const RenderViewport_t& srcViewport, const RenderViewport_t& destViewport)
{
	ISceneLayer* pLayer; // 1050
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1050
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 959
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 955
	CSimpleQuadRenderer::CSimpleQuadRenderer(
				const CUtlStringToken& shaderMode,
				HMaterial hMaterial,
				int nSrcWidth,
				int nSrcHeight,
				const RenderViewport_t& srcViewport,
				const RenderViewport_t& destViewport);  // 1050
	CUtlLinkedList<CSceneLayer::AddToTail(
			CSceneLayer* const& src);  // 391
	CSceneView::AddLayer(
		const char* pszDebugName,
		const RenderViewport_t& viewport,
		ELayerType eType,
		ISceneLayer* pAddBefore);  // 794
	CSceneView::AddProceduralLayer(
				const char* pszDebugName,
				const RenderViewport_t& viewport,
				IProceduralLayerRenderer* pFnToRender,
				ISceneLayer* pAddBefore,
				bool bDeleteWhenDone);  // 1050
} /* size: 462, variables: 1, inline expansions: 12 (483 bytes) */

// <0322C503> ../scenesystem/sceneview.cpp:1054
void CSceneView::GetTonemapState()
{
} /* size: 12 */

// <0322C4C6> ../scenesystem/sceneview.cpp:1059
void CSceneView::SetTonemapState(const TonemapState_t& state)
{
} /* size: 17 */

// <0322C489> ../scenesystem/sceneview.cpp:1064
void CSceneView::SetDefaultLayerObjectRequiredFlags(ESceneObjectFlags nFlags)
{
} /* size: 12 */

// <0322C44C> ../scenesystem/sceneview.cpp:1069
void CSceneView::SetDefaultLayerObjectExcludedFlags(ESceneObjectFlags nFlags)
{
} /* size: 12 */

// <0322C41E> ../scenesystem/sceneview.cpp:1074
void CSceneView::GetDefaultLayerObjectRequiredFlags()
{
} /* size: 12 */

// <0322C3F0> ../scenesystem/sceneview.cpp:1079
void CSceneView::GetDefaultLayerObjectExcludedFlags()
{
} /* size: 12 */

// <0321CED3> ../scenesystem/sceneview.cpp:1084
// function call: 1
void CResolveLayerRenderer::~CResolveLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 1084
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0321CE1E> ../scenesystem/sceneview.cpp:1084
// function calls: 2
void CResolveLayerRenderer::~CResolveLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 1084
	CResolveLayerRenderer::~CResolveLayerRenderer(); // 1084
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0321CE01> ../scenesystem/sceneview.cpp:1084
inline void CResolveLayerRenderer::~CResolveLayerRenderer()
{
} /* size: 0 */

// <0321ADC8> ../scenesystem/sceneview.cpp:1084
// member functions: 10
// member variables: 4
// vtable entry: 1
// class size: 24
class CResolveLayerRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CResolveLayerRenderer(CResolveLayerRenderer* , CResolveLayerRenderer& );
	void CResolveLayerRenderer(CResolveLayerRenderer* , const CResolveLayerRenderer& );
	/* ../scenesystem/sceneview.cpp:1087 */
	void CResolveLayerRenderer(CResolveLayerRenderer* , int, int, int);
	/* ../scenesystem/sceneview.cpp:1094 */
	virtual void Render(CResolveLayerRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
private:
	int m_nSourceIndex; /* 8 4 */
	int m_nDestX; /* 12 4 */
	int m_nDestY; /* 16 4 */
	virtual void ~CResolveLayerRenderer(CResolveLayerRenderer* );
	void CResolveLayerRenderer(class CResolveLayerRenderer *, class CResolveLayerRenderer &); /* linkage=_ZN21CResolveLayerRendererC4EOS_ */
	void CResolveLayerRenderer(class CResolveLayerRenderer *, const class CResolveLayerRenderer  &); /* linkage=_ZN21CResolveLayerRendererC4ERKS_ */
	void CResolveLayerRenderer(class CResolveLayerRenderer *, int, int, int); /* linkage=_ZN21CResolveLayerRendererC4Eiii */
	virtual void Render(class CResolveLayerRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN21CResolveLayerRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CResolveLayerRenderer(class CResolveLayerRenderer *); /* linkage=_ZN21CResolveLayerRendererD4Ev */
};

// <0322C3CA> ../scenesystem/sceneview.cpp:1087
void CResolveLayerRenderer::CResolveLayerRenderer(int nSourceIndex, int nDestX, int nDestY)
{
} /* size: 0 */

// <0322C38A> ../scenesystem/sceneview.cpp:1087
inline void CResolveLayerRenderer::CResolveLayerRenderer(int nSourceIndex, int nDestX, int nDestY)
{
} /* size: 0 */

// <0322B5EE> ../scenesystem/sceneview.cpp:1094
// variables: 19
// function calls: 53
void CResolveLayerRenderer::Render(ISceneView* pView, IRenderContext* pCtx, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	const RenderViewport_t& viewport; // 1099
	Rect_t srcRect; // 1100
	int nActualDestX; // 1102
	int nActualDestY; // 1103
	HRenderTexture hDestTexture; // 1105
	Rect_t::Rect_t(
		int nX,
		int nY,
		int nWidth,
		int nHeight);  // 1100
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1105
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 624
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
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
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 59091
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 59101
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 59111
			Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1160
			begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
			CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
							const OverflowChunk_t* pNode);  // 1165
			end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
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
					i32x4 i4KMatch);  // 281
			operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
				i32x4 n4Key,
				const TextureAttrForStorage_t ** pValueOut);  // 381
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 383
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				uint32 k,
				TextureAttr_t nDefault);  // 393
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 393
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
				CUtlStringToken nTok,
				TextureAttr_t nDefault);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 625
	CRenderAttributes::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture defaultTxtr);  // 1105
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1112
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1108
} /* size: 445, variables: 5, inline expansions: 25 (767 bytes) */

// <0322B315> ../scenesystem/sceneview.cpp:1122
// variables: 2
// function calls: 11
void CSceneView::ComputePreviousLayer(CSceneLayer* pBefore)
{
	int nIdx; // 1124
	{
		int i; // 867
		CUtlLinkedList<CSceneLayer::Head(); // 867
		CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
				int i);  // 488
		CUtlLinkedList<CSceneLayer::Element(
			int i);  // 869
		CUtlLinkedList<CSceneLayer::Next(
			int i);  // 867
	}
	CUtlLinkedList<CSceneLayer::Find(
		CSceneLayer* const& src);  // 1131
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
			int i);  // 368
	CUtlLinkedList<CSceneLayer::InternalElement(
			int i);  // 543
	CUtlLinkedList<CSceneLayer::Previous(
		int i);  // 1134
	CUtlLinkedList<CSceneLayer::Tail(); // 1127
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
			int i);  // 494
	CUtlLinkedList<CSceneLayer::operator[](
			int i);  // 1143
} /* size: 101, variables: 1, inline expansions: 7 (57 bytes) */

// <0322AF1E> ../scenesystem/sceneview.cpp:1147
// variables: 5
// function calls: 3
void CSceneView::AddResolveRenderTargetLayer(const char* pszDebugName, const RenderViewport_t& viewport, int nDestX, int nDestY, int nSourceIndex, HSceneViewRenderTarget hDestTexture, ISceneLayer* pAddBefore)
{
	CSceneLayer* pPreviousLayer; // 1149
	ISceneLayer* pRet; // 1175
	const char   __FUNCTION__; // 39972
	{
		int i; // 1158
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 1090
	CResolveLayerRenderer::CResolveLayerRenderer(
				int nSourceIndex,
				int nDestX,
				int nDestY);  // 1175
	CSceneView::AddProceduralLayer(
				const char* pszDebugName,
				const RenderViewport_t& viewport,
				IProceduralLayerRenderer* pFnToRender,
				ISceneLayer* pAddBefore,
				bool bDeleteWhenDone);  // 1175
} /* size: 0, variables: 3, inline expansions: 3 (90 bytes) */

// <0322AB2D> ../scenesystem/sceneview.cpp:1185
// variables: 6
// function calls: 4
void CSceneView::AddResolveDepthStencilLayer(const char* pszDebugName, const RenderViewport_t& viewport, int nDestX, int nDestY, HSceneViewRenderTarget hDestTexture, ISceneLayer* pAddBefore)
{
	CSceneLayer* pPreviousLayer; // 1187
	ISceneLayer* pRet; // 1209
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 1090
	CResolveLayerRenderer::CResolveLayerRenderer(
				int nSourceIndex,
				int nDestX,
				int nDestY);  // 1209
	CSceneView::AddProceduralLayer(
				const char* pszDebugName,
				const RenderViewport_t& viewport,
				IProceduralLayerRenderer* pFnToRender,
				ISceneLayer* pAddBefore,
				bool bDeleteWhenDone);  // 1209
	{
		const uint32  m; // 226
		uint32 h; // 227
		uint32 k; // 228
		const int  r; // 229
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1210
} /* size: 680, variables: 2, inline expansions: 4 (106 bytes) */

// <0322AA4E> ../scenesystem/sceneview.cpp:1217
// function calls: 3
void CSceneView::GetFinalOutputLayer()
{
	CUtlLinkedList<CSceneLayer::Tail(); // 1219
	CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
			int i);  // 500
	CUtlLinkedList<CSceneLayer::operator[](
			int i);  // 1219
} /* size: 26, inline expansions: 3 (14 bytes) */

// <0322AA20> ../scenesystem/sceneview.cpp:1222
void CSceneView::GetShadowsEnabled()
{
} /* size: 12 */

// <0322A9E3> ../scenesystem/sceneview.cpp:1227
void CSceneView::SetShadowsEnabled(bool bShadowsEnabled)
{
} /* size: 12 */

// <0322977D> ../scenesystem/sceneview.cpp:1233
// variables: 29
// function calls: 66
void CSceneView::AddBlitTextureToTargetLayer(const char* pDebugName, HSceneViewRenderTarget hSource, const RenderViewport_t& sourceViewport, const RenderViewport_t& destViewport, const SceneLayerOutputs_t& outputs, BlitSetup_t* setup)
{
	ISceneLayer* pNewLayer; // 1235
	SceneViewRenderTargetInfo_t renderTargetInfo; // 1238
	SceneViewRenderTargetInfo_t renderTargetInfoDest; // 1241
	bool bWantsMSAASampling; // 1265
	CUtlLinkedList<CSceneLayer::AddToTail(
			CSceneLayer* const& src);  // 391
	CSceneView::AddLayer(
		const char* pszDebugName,
		const RenderViewport_t& viewport,
		ELayerType eType,
		ISceneLayer* pAddBefore);  // 794
	CSceneView::AddProceduralLayer(
				const char* pszDebugName,
				const RenderViewport_t& viewport,
				IProceduralLayerRenderer* pFnToRender,
				ISceneLayer* pAddBefore,
				bool bDeleteWhenDone);  // 1235
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 101
	SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(); // 1238
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 101
	SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(); // 1241
	IsDepthFormat(ImageFormat fmt); // 1265
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 1267
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
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 34473
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 34483
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34493
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
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
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
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
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 59425
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 59435
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 59445
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
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 254
	ISceneLayer::SetComboAttr(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 1267
} /* size: 1266, variables: 4, inline expansions: 25 (3217 bytes) */

// <0322973F> ../scenesystem/sceneview.cpp:1274
void CSceneView::SetViewIdInternal(CViewIdInternal viewId)
{
} /* size: 15 */

// <032478B4> ../scenesystem/sceneview.cpp:1279
void CSceneView::GetViewIdInternal()
{
} /* size: 0 */

// <03229638> ../scenesystem/sceneview.cpp:1284
// variable: 1
// function call: 1
void CSceneView::SetViewIdInternal(const ISceneView* pParentView, int nProducerIndex)
{
	CViewIdInternal nParentId; // 1289
	CSceneView::GetViewIdInternal(); // 1289
} /* size: 148, variables: 1, inline expansions: 1 (19 bytes) */

// <032295F5> ../scenesystem/sceneview.cpp:1298
void CSceneView::SetBoundingVolumeSizeCullThresholdInPercent(float flPercent)
{
} /* size: 21 */

// <03228E75> ../scenesystem/sceneview.cpp:1303
// variables: 2
// function calls: 33
void CSceneView::GetCullBoxListForView(CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >* pOutIncluders, CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >* pOutExcluders)
{
	const int  nNumBoxes; // 1308
	{
		int iBox; // 1313
		CUtlMemory<SceneObjectCullingBox_t, int>::NumAllocated(); // 1196
		CUtlMemory<SceneObjectCullingBox_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Element(
			int i);  // 1201
		CopyConstruct<SceneObjectCullingBox_t>(SceneObjectCullingBox_t* pMemory,
							const SceneObjectCullingBox_t& src);  // 1201
		CUtlMemory<SceneObjectCullingBox_t, int>::Base(); // 112
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Base(); // 368
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::AddToTail(
				const SceneObjectCullingBox_t& src);  // 1317
		CUtlMemory<SceneObjectCullingBox_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Element(
			int i);  // 1201
		CopyConstruct<SceneObjectCullingBox_t>(SceneObjectCullingBox_t* pMemory,
							const SceneObjectCullingBox_t& src);  // 1201
		CUtlMemory<SceneObjectCullingBox_t, int>::NumAllocated(); // 1196
		CUtlMemory<SceneObjectCullingBox_t, int>::Base(); // 112
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Base(); // 368
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::AddToTail(
				const SceneObjectCullingBox_t& src);  // 1321
		CUtlMemory<SceneObjectCullingBox_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::operator[](
				int i);  // 1315
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1305
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::Count(); // 1308
	CUtlMemory<SceneObjectCullingBox_t, int>::IsGrowable(); // 881
	CUtlMemory<SceneObjectCullingBox_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<SceneObjectCullingBox_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::EnsureCapacity(
			int num);  // 1310
	CUtlMemory<SceneObjectCullingBox_t, int>::IsGrowable(); // 881
	CUtlMemory<SceneObjectCullingBox_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<SceneObjectCullingBox_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::EnsureCapacity(
			int num);  // 1311
} /* size: 686, variables: 1, inline expansions: 13 (667 bytes) */

// <03228E16> ../scenesystem/sceneview.cpp:1326
// function call: 1
void CSceneView::RemoveCullBoxes()
{
	CUtlVectorBase<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >::RemoveAll(); // 1328
} /* size: 15, inline expansions: 1 (10 bytes) */

// <03228570> ../scenesystem/sceneview.cpp:1331
// variable: 1
// function calls: 38
void CViewList::MoveTo(CViewList& dest)
{
	CUtlVectorBase<CSceneView::Count(); // 1333
	CUtlVectorBase<CSceneView::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CSceneView::NumAllocated(); // 782
	CUtlMemory<CSceneView::IsGrowable(); // 823
	CUtlMemory<CSceneView::IsExternallyAllocated(); // 859
	CUtlMemory<CSceneView::IsExternallyAllocated(); // 861
	CUtlMemory<CSceneView::Grow(
		int num);  // 806
	CUtlVectorBase<CSceneView::ResetDbgInfo(); // 824
	CUtlVectorBase<CSceneView::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CSceneView::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CSceneView::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CSceneView::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CSceneView::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CSceneView::SetCount(
		int count);  // 1333
	CUtlMemory<CSceneView::Base(); // 112
	CUtlVectorBase<CSceneView::Base(); // 102
	CUtlVectorBase<CSceneView::begin(); // 56
	begin<CUtlVectorFixedGrowable<CSceneView*, 16> >(CUtlVectorFixedGrowable<CSceneView*, 16>& __cont); // 33
	CUtlMemory<CSceneView::Base(); // 113
	CUtlVectorBase<CSceneView::Base(); // 105
	CUtlVectorBase<CSceneView::Count(); // 105
	CUtlVectorBase<CSceneView::end(); // 92
	end<CUtlVectorFixedGrowable<CSceneView*, 16> >(const CUtlVectorFixedGrowable<CSceneView*, 16>& __cont); // 33
	{
		ptrdiff_t __n; // 423
		__assign_one<false, CSceneView**, CSceneView* const*>(CSceneView* *& __out,
									CSceneView* const *& __in);  // 433
	}
	__copy_move_a2<false, CSceneView* const*, CSceneView* const*, CSceneView**>(CSceneView* const* __first,
											CSceneView* const* __last,
											CSceneView** __result);  // 492
	__copy_move_a1<false, CSceneView* const*, CSceneView**>(CSceneView* const* __first,
								CSceneView* const* __last,
								CSceneView** __result);  // 500
	__copy_move_a<false, CSceneView* const*, CSceneView**>(CSceneView* const* __first,
								CSceneView* const* __last,
								CSceneView** __result);  // 642
	copy<CSceneView* const*, CSceneView**>(CSceneView* const* __first,
						CSceneView* const* __last,
						CSceneView** __result);  // 33
	copy<CUtlVectorFixedGrowable<CSceneView*, 16>, CUtlVectorFixedGrowable<CSceneView*, 16> >(const CUtlVectorFixedGrowable<CSceneView*, 16>& src,
													CUtlVectorFixedGrowable<CSceneView*, 16>& dst);  // 1334
	CUtlMemory<CSceneView::IsExternallyAllocated(); // 577
	CUtlMemory<CSceneView::ConvertToExternalMemory(
				CSceneView** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CSceneView::Purge_FixedGrowable(
				CSceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CSceneView::Purge_FixedGrowable(
				CSceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, CSceneView::Base(); // 237
	CUtlMemoryFixedGrowable<CSceneView::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CSceneView::RemoveAll(); // 1798
	CUtlVectorBase<CSceneView::ResetDbgInfo(); // 1800
	CUtlVectorBase<CSceneView::Purge(); // 1335
} /* size: 472, inline expansions: 37 (2495 bytes) */

// <03228500> ../scenesystem/sceneview.cpp:1338
void CSceneView::SetVolumeCuller(const CVolumeCuller& volumeCuller)
{
} /* size: 27 */

// <032284D2> ../scenesystem/sceneview.cpp:1343
void CSceneView::GetVolumetricFogVolumes()
{
} /* size: 12 */

// <03247691> ../scenesystem/sceneview.cpp:1348
// function calls: 11
void CSceneView::GetRenderTags()
{
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 215
	IsEmpty(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 1350
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 215
	IsEmpty(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 1350
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 215
	IsEmpty(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 1350
	CSceneView::GetRenderTags(); // 1348
	CSceneView::GetRenderTags(); // 1357
	CSceneView::GetRenderTags(); // 1348
	CSceneView::GetRenderTags(); // 1357
	CSceneView::GetRenderTags(); // 1348
} /* size: 173, inline expansions: 11 (377 bytes) */

// <032284B9> ../scenesystem/sceneview.cpp:1348
void CSceneView::GetRenderTags()
{
} /* size: 0 */

// <0324746E> ../scenesystem/sceneview.cpp:1363
// function calls: 11
void CSceneView::GetExcludeTags()
{
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 215
	IsEmpty(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 1365
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 215
	IsEmpty(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 1365
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 215
	IsEmpty(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 1365
	CSceneView::GetExcludeTags(); // 1363
	CSceneView::GetExcludeTags(); // 1372
	CSceneView::GetExcludeTags(); // 1363
	CSceneView::GetExcludeTags(); // 1372
	CSceneView::GetExcludeTags(); // 1363
} /* size: 173, inline expansions: 11 (377 bytes) */

// <032284A0> ../scenesystem/sceneview.cpp:1363
void CSceneView::GetExcludeTags()
{
} /* size: 0 */

// <03228422> ../scenesystem/sceneview.cpp:1378
void CSceneView::SetRenderTags(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined pTags)
{
} /* size: 29 */

// <032283A4> ../scenesystem/sceneview.cpp:1390
void CSceneView::SetExcludeTags(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined pTags)
{
} /* size: 29 */


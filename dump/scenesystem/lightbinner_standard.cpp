
//
// scenesystem/lightbinner_standard.cpp
//
//	referenced by: libengine2.so
//
//	functions: 23
//

// <02C3F0E6> ../scenesystem/lightbinner_standard.cpp:31
// function calls: 40
void CLightBinnerStandard::CLightBinnerStandard()
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 31
	CUtlVectorBase<const CSceneLightObjectInternal::ResetDbgInfo(); // 530
	CUtlMemory<const CSceneLightObjectInternal::ValidateGrowSize(); // 475
	CUtlMemory<const CSceneLightObjectInternal::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CSceneLightObjectInternal::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CSceneLightObjectInternal::CUtlVector(); // 31
	CUtlMemory<const CDecalSceneObject::ValidateGrowSize(); // 475
	CUtlMemory<const CDecalSceneObject::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CDecalSceneObject::ResetDbgInfo(); // 530
	CUtlVectorBase<const CDecalSceneObject::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CDecalSceneObject::CUtlVector(); // 31
	CThreadMutex::CThreadMutex(
			const char* pName);  // 31
	CUtlMemory<const CSceneLightObjectInternal::ValidateGrowSize(); // 475
	CUtlMemory<const CSceneLightObjectInternal::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CSceneLightObjectInternal::ResetDbgInfo(); // 530
	CUtlVectorBase<const CSceneLightObjectInternal::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CSceneLightObjectInternal::CUtlVector(); // 31
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 31
	CUtlMemory<GPULight, int>::ValidateGrowSize(); // 475
	CUtlMemory<GPULight, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<GPULight, CUtlMemory<GPULight, int> >::CUtlVector(); // 31
	CUtlMemory<EnvironmentMapConstants, int>::ValidateGrowSize(); // 475
	CUtlMemory<EnvironmentMapConstants, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::CUtlVector(); // 31
	CUtlMemory<GPUDecal, int>::ValidateGrowSize(); // 475
	CUtlMemory<GPUDecal, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<GPUDecal, CUtlMemory<GPUDecal, int> >::CUtlVector(); // 31
	CUtlMemory<GPUDecalExtraData, int>::ValidateGrowSize(); // 475
	CUtlMemory<GPUDecalExtraData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::CUtlVector(); // 31
	Vector4D::Vector4D(); // 47
	ViewLightingConfig::ViewLightingConfig(); // 31
} /* size: 611, inline expansions: 40 (965 bytes) */

// <02C3F0CD> ../scenesystem/lightbinner_standard.cpp:31
void CLightBinnerStandard::CLightBinnerStandard()
{
} /* size: 0 */

// <02C3E2C8> ../scenesystem/lightbinner_standard.cpp:43
// function calls: 72
void CLightBinnerStandard::~CLightBinnerStandard()
{
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::RemoveAll(); // 1798
	CUtlMemory<GPUDecalExtraData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<GPUDecalExtraData, int>::Purge(); // 903
	CUtlMemory<GPUDecalExtraData, int>::Purge(); // 1799
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::Purge(); // 560
	ValidateAlignment<GPUDecalExtraData>(void); // 508
	CUtlMemory<GPUDecalExtraData, int>::Purge(); // 510
	CUtlMemory<GPUDecalExtraData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::~CUtlVector(); // 74
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::RemoveAll(); // 1798
	CUtlMemory<GPUDecal, int>::IsExternallyAllocated(); // 905
	CUtlMemory<GPUDecal, int>::Purge(); // 903
	CUtlMemory<GPUDecal, int>::Purge(); // 1799
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Purge(); // 560
	ValidateAlignment<GPUDecal>(void); // 508
	CUtlMemory<GPUDecal, int>::Purge(); // 510
	CUtlMemory<GPUDecal, int>::~CUtlMemory(); // 562
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::~CUtlVectorBase(); // 410
	CUtlVector<GPUDecal, CUtlMemory<GPUDecal, int> >::~CUtlVector(); // 74
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::RemoveAll(); // 1798
	CUtlMemory<EnvironmentMapConstants, int>::IsExternallyAllocated(); // 905
	CUtlMemory<EnvironmentMapConstants, int>::Purge(); // 903
	CUtlMemory<EnvironmentMapConstants, int>::Purge(); // 1799
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::Purge(); // 560
	ValidateAlignment<EnvironmentMapConstants>(void); // 508
	CUtlMemory<EnvironmentMapConstants, int>::Purge(); // 510
	CUtlMemory<EnvironmentMapConstants, int>::~CUtlMemory(); // 562
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::~CUtlVectorBase(); // 410
	CUtlVector<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::~CUtlVector(); // 74
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::RemoveAll(); // 1798
	CUtlMemory<GPULight, int>::IsExternallyAllocated(); // 905
	CUtlMemory<GPULight, int>::Purge(); // 903
	CUtlMemory<GPULight, int>::Purge(); // 1799
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Purge(); // 560
	ValidateAlignment<GPULight>(void); // 508
	CUtlMemory<GPULight, int>::Purge(); // 510
	CUtlMemory<GPULight, int>::~CUtlMemory(); // 562
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::~CUtlVectorBase(); // 410
	CUtlVector<GPULight, CUtlMemory<GPULight, int> >::~CUtlVector(); // 74
	CUtlVectorBase<const CSceneLightObjectInternal::RemoveAll(); // 1798
	CUtlMemory<const CSceneLightObjectInternal::IsExternallyAllocated(); // 905
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 903
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 1799
	CUtlVectorBase<const CSceneLightObjectInternal::Purge(); // 560
	ValidateAlignment<const CSceneLightObjectInternal*>(void); // 508
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 510
	CUtlMemory<const CSceneLightObjectInternal::~CUtlMemory(); // 562
	CUtlVectorBase<const CSceneLightObjectInternal::~CUtlVectorBase(); // 410
	CUtlVector<const CSceneLightObjectInternal::~CUtlVector(); // 74
	CThreadMutex::~CThreadMutex(); // 74
	CUtlVectorBase<const CDecalSceneObject::RemoveAll(); // 1798
	CUtlMemory<const CDecalSceneObject::IsExternallyAllocated(); // 905
	CUtlMemory<const CDecalSceneObject::Purge(); // 903
	CUtlMemory<const CDecalSceneObject::Purge(); // 1799
	CUtlVectorBase<const CDecalSceneObject::Purge(); // 560
	ValidateAlignment<const CDecalSceneObject*>(void); // 508
	CUtlMemory<const CDecalSceneObject::Purge(); // 510
	CUtlMemory<const CDecalSceneObject::~CUtlMemory(); // 562
	CUtlVectorBase<const CDecalSceneObject::~CUtlVectorBase(); // 410
	CUtlVector<const CDecalSceneObject::~CUtlVector(); // 74
	CThreadMutex::~CThreadMutex(); // 74
	CUtlVectorBase<const CSceneLightObjectInternal::RemoveAll(); // 1798
	CUtlMemory<const CSceneLightObjectInternal::IsExternallyAllocated(); // 905
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 903
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 1799
	CUtlVectorBase<const CSceneLightObjectInternal::Purge(); // 560
	ValidateAlignment<const CSceneLightObjectInternal*>(void); // 508
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 510
	CUtlMemory<const CSceneLightObjectInternal::~CUtlMemory(); // 562
	CUtlVectorBase<const CSceneLightObjectInternal::~CUtlVectorBase(); // 410
	CUtlVector<const CSceneLightObjectInternal::~CUtlVector(); // 74
} /* size: 563, inline expansions: 72 (1235 bytes) */

// <02C3E2AF> ../scenesystem/lightbinner_standard.cpp:43
void CLightBinnerStandard::~CLightBinnerStandard()
{
} /* size: 0 */

// <02C3DC53> ../scenesystem/lightbinner_standard.cpp:76
// variables: 2
// function calls: 25
void CLightBinnerStandard::AddDecal(const CDecalSceneObject* pDecal, const VisibleSceneObject_t& visible)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_79; // 79
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 79
		{
			int i; // 1531
			CUtlVectorBase<const CDecalSceneObject::Count(); // 1531
			CUtlMemory<const CDecalSceneObject::operator[](
					int i);  // 609
			CUtlVectorBase<const CDecalSceneObject::Element(
				int i);  // 1533
		}
		CUtlVectorBase<const CDecalSceneObject::Find(
			const CDecalSceneObject* const& src);  // 1563
		CUtlVectorBase<const CDecalSceneObject::HasElement(
				const CDecalSceneObject* const& src);  // 80
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 87
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 87
		CUtlMemory<const CDecalSceneObject::NumAllocated(); // 1196
		CUtlMemory<const CDecalSceneObject::operator[](
				int i);  // 602
		CUtlVectorBase<const CDecalSceneObject::Element(
			int i);  // 1201
		CopyConstruct<const CDecalSceneObject*>(const CDecalSceneObject ** pMemory,
							const CDecalSceneObject* const& src);  // 1201
		CUtlMemory<const CDecalSceneObject::IsGrowable(); // 823
		CUtlMemory<const CDecalSceneObject::IsExternallyAllocated(); // 859
		CUtlMemory<const CDecalSceneObject::IsExternallyAllocated(); // 861
		CUtlMemory<const CDecalSceneObject::Grow(
			int num);  // 806
		CUtlVectorBase<const CDecalSceneObject::ResetDbgInfo(); // 824
		CUtlVectorBase<const CDecalSceneObject::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<const CDecalSceneObject::AddToTail(
				const CDecalSceneObject* const& src);  // 86
	}
} /* size: 464 */

// <02C3D4B9> ../scenesystem/lightbinner_standard.cpp:90
// variables: 6
// function calls: 32
void CLightBinnerStandard::AddLight(CSceneLightObjectInternal* pLightObject, const VisibleSceneObject_t& visible)
{
	const LightDesc_t& pLightDesc; // 97
	CSceneWorld* pLightSceneWorld; // 102
	int nWorldToRenderIndex; // 103
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_108; // 108
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 108
		{
			int i; // 1531
			CUtlVectorBase<const CSceneLightObjectInternal::Count(); // 1531
			CUtlMemory<const CSceneLightObjectInternal::operator[](
					int i);  // 609
			CUtlVectorBase<const CSceneLightObjectInternal::Element(
				int i);  // 1533
		}
		CUtlVectorBase<const CSceneLightObjectInternal::Find(
			const CSceneLightObjectInternal* const& src);  // 1563
		CUtlVectorBase<const CSceneLightObjectInternal::HasElement(
				const CSceneLightObjectInternal* const& src);  // 109
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 114
		CUtlMemory<const CSceneLightObjectInternal::NumAllocated(); // 1196
		CUtlMemory<const CSceneLightObjectInternal::operator[](
				int i);  // 602
		CUtlVectorBase<const CSceneLightObjectInternal::Element(
			int i);  // 1201
		CopyConstruct<const CSceneLightObjectInternal*>(const CSceneLightObjectInternal ** pMemory,
								const CSceneLightObjectInternal* const& src);  // 1201
		CUtlMemory<const CSceneLightObjectInternal::Base(); // 112
		CUtlVectorBase<const CSceneLightObjectInternal::Base(); // 368
		CUtlVectorBase<const CSceneLightObjectInternal::ResetDbgInfo(); // 824
		CUtlVectorBase<const CSceneLightObjectInternal::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<const CSceneLightObjectInternal::AddToTail(
				const CSceneLightObjectInternal* const& src);  // 113
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 114
	}
	CSceneObject::IsRenderingEnabled(); // 92
	Vector::IsZeroFast(); // 99
	CSceneObject::GetWorld(); // 102
	{
		int i; // 473
		CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::Count(); // 446
		ISceneView::NumWorldsToRender(); // 473
		CUtlMemory<ISceneView::WorldList_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16, int> >::operator[](
				int i);  // 449
		ISceneView::GetWorldToRender(
				int nIndex);  // 475
	}
	ISceneView::IndexOfWorldToRender(
				ISceneWorld* pSceneWorld);  // 103
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <02C4ADAE> ../scenesystem/lightbinner_standard.cpp:117
// function calls: 4
void CLightBinnerStandard::ShadowSetup_ResetLightAllocations()
{
	CUtlVectorBase<const CDecalSceneObject::RemoveAll(); // 119
	CUtlVectorBase<const CSceneLightObjectInternal::RemoveAll(); // 120
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::RemoveAll(); // 125
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::RemoveAll(); // 126
} /* size: 0, inline expansions: 4 (0 bytes) */

// <02C3D4A0> ../scenesystem/lightbinner_standard.cpp:117
void CLightBinnerStandard::ShadowSetup_ResetLightAllocations()
{
} /* size: 0 */

// <02C3BAD2> ../scenesystem/lightbinner_standard.cpp:135
// variables: 16
// function calls: 98
void CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> >& pVisibleLights, CSceneView* pView, const CFrustum& frustum, ESceneObjectFlags nForwardLightSetupRequiredMask, ESceneObjectFlags nForwardLightSetupExcludedMask)
{
	const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CU* renderTags; // 144
	const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CU* excludeTags; // 145
	CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> > bakedLights; // 147
	{
		const CFrustum& sortFrustum; // 259
		const Vector& vCameraPos; // 260
		ISceneView::GetFrustum(); // 259
		CUtlMemory<const CSceneLightObjectInternal::Base(); // 112
		CUtlVectorBase<const CSceneLightObjectInternal::Base(); // 973
		CUtlVectorBase<const CSceneLightObjectInternal::Count(); // 973
		{
			const CSceneLightObjectInternal ** __i; // 1776
			{
				value_type __val; // 1781
				{
					ptrdiff_t __n; // 700
					__distance<const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
											const CSceneLightObjectInternal ** __last,
											random_access_iterator_tag);  // 153
					distance<const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
											const CSceneLightObjectInternal ** __last);  // 700
					__advance<const CSceneLightObjectInternal**, long int>(const CSceneLightObjectInternal* *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
					__advance<const CSceneLightObjectInternal**, long int>(const CSceneLightObjectInternal* *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
					advance<const CSceneLightObjectInternal**, long int>(const CSceneLightObjectInternal* *& __i,
												long int __n);  // 701
					__assign_one<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal* *& __out,
																const CSceneLightObjectInternal* *& __in);  // 709
				}
				__copy_move_backward_a2<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																const CSceneLightObjectInternal ** __result);  // 753
				__copy_move_backward_a1<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																const CSceneLightObjectInternal ** __result);  // 783
				__copy_move_backward_a<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																const CSceneLightObjectInternal ** __result);  // 882
				move_backward<const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
															const CSceneLightObjectInternal ** __last,
															const CSceneLightObjectInternal ** __result);  // 1782
			}
			_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::operator(
													const CSceneLightObjectInternal ** __it1,
													const CSceneLightObjectInternal ** __it2);  // 1778
			_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::_Val_comp_iter(
					_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp);  // 253
			__val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> >(_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 1786
			_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::operator(
													const CSceneLightObjectInternal  *& __val,
													const CSceneLightObjectInternal ** __it);  // 1758
			__unguarded_linear_insert<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __last,
																_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, cons __comp); // 1786
		}
		__insertion_sort<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 1818
		{
			const CSceneLightObjectInternal ** __i; // 1798
			_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::_Val_comp_iter(
					_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp);  // 253
			__val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> >(_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 1799
			_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::operator(
													const CSceneLightObjectInternal  *& __val,
													const CSceneLightObjectInternal ** __it);  // 1758
			__unguarded_linear_insert<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __last,
																_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, cons __comp); // 1799
		}
		__unguarded_insertion_sort<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 1819
		{
			const CSceneLightObjectInternal ** __i; // 1776
			{
				value_type __val; // 1781
				{
					ptrdiff_t __n; // 700
					__distance<const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
											const CSceneLightObjectInternal ** __last,
											random_access_iterator_tag);  // 153
					distance<const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
											const CSceneLightObjectInternal ** __last);  // 700
					__advance<const CSceneLightObjectInternal**, long int>(const CSceneLightObjectInternal* *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
					__advance<const CSceneLightObjectInternal**, long int>(const CSceneLightObjectInternal* *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
					advance<const CSceneLightObjectInternal**, long int>(const CSceneLightObjectInternal* *& __i,
												long int __n);  // 701
					__assign_one<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal* *& __out,
																const CSceneLightObjectInternal* *& __in);  // 709
				}
				__copy_move_backward_a2<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																const CSceneLightObjectInternal ** __result);  // 753
				__copy_move_backward_a1<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																const CSceneLightObjectInternal ** __result);  // 783
				__copy_move_backward_a<true, const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																const CSceneLightObjectInternal ** __result);  // 882
				move_backward<const CSceneLightObjectInternal**, const CSceneLightObjectInternal**>(const CSceneLightObjectInternal ** __first,
															const CSceneLightObjectInternal ** __last,
															const CSceneLightObjectInternal ** __result);  // 1782
			}
			_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::operator(
													const CSceneLightObjectInternal ** __it1,
													const CSceneLightObjectInternal ** __it2);  // 1778
			_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::_Val_comp_iter(
					_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp);  // 253
			__val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> >(_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 1786
			_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::operator(
													const CSceneLightObjectInternal  *& __val,
													const CSceneLightObjectInternal ** __it);  // 1758
			__unguarded_linear_insert<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __last,
																_Val_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, cons __comp); // 1786
		}
		__insertion_sort<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 1823
		__final_insertion_sort<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 1909
		__countl_zero<long unsigned int>(long unsigned int __x); // 388
		__bit_width<long unsigned int>(long unsigned int __x); // 1555
		__lg<long int>(long int __n); // 1907
		__sort<const CSceneLightObjectInternal**, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> > >(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, con __comp); // 4874
		_Iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal::_Iter_comp_iter(
				 __comp);  // 165
		__iter_comp_iter<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> >(__comp); // 4874
		sort<const CSceneLightObjectInternal**, CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(const CSceneLightObjectInternal*, const CSceneLightObjectInternal*)> >(const CSceneLightObjectInternal ** __first,
																const CSceneLightObjectInternal ** __last,
																 __comp); // 973
		CUtlVectorBase<const CSceneLightObjectInternal::SortPredicate<CLightBinnerStandard::GatherVisibleLights(
																class& predicate);  // 261
	}
	CUtlVectorBase<const CSceneLightObjectInternal::RemoveAll(); // 142
	CUtlVectorBase<const CSceneLightObjectInternal::ResetDbgInfo(); // 530
	CUtlMemory<const CSceneLightObjectInternal::ValidateGrowSize(); // 475
	CUtlMemory<const CSceneLightObjectInternal::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CSceneLightObjectInternal::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CSceneLightObjectInternal::CUtlVector(); // 147
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 149
	{
		_M_create<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(CSceneLightObjectInternal*)> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
		_M_init_functor<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(CSceneLightObjectInternal*)> >(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<CLightBinnerStandard::GatherVisibleLights(CUtlVector<const CSceneLightObjectInternal*>&, CSceneView*, const CFrustum&, ESceneObjectFlags, ESceneObjectFlags)::<lambda(CSceneLightObjectInternal*)> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void(CSceneLightObjectInternal::function<CLightBinnerStandard::GatherVisibleLights(
																class& __f);  // 152
	_Function_base::~_Function_base(); // 336
	function<void(CSceneLightObjectInternal::~function()>* this); // 152
	CUtlMemory<const CSceneLightObjectInternal::NumAllocated(); // 782
	CUtlMemory<const CSceneLightObjectInternal::Base(); // 112
	CUtlVectorBase<const CSceneLightObjectInternal::Base(); // 368
	CUtlVectorBase<const CSceneLightObjectInternal::ResetDbgInfo(); // 824
	CUtlVectorBase<const CSceneLightObjectInternal::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const CSceneLightObjectInternal::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<const CSceneLightObjectInternal::operator[](
				int i);  // 602
		CUtlVectorBase<const CSceneLightObjectInternal::Element(
			int i);  // 1502
		CopyConstruct<const CSceneLightObjectInternal*>(const CSceneLightObjectInternal ** pMemory,
								const CSceneLightObjectInternal* const& src);  // 1502
	}
	CUtlVectorBase<const CSceneLightObjectInternal::InsertMultipleBefore(
				int elem,
				int num,
				const CSceneLightObjectInternal* const* pToInsert);  // 1476
	CUtlVectorBase<const CSceneLightObjectInternal::InsertMultipleBefore(
				int elem,
				int num,
				const CSceneLightObjectInternal* const* pToInsert);  // 1303
	CUtlVectorBase<const CSceneLightObjectInternal::AddMultipleToTail(
				int num,
				const CSceneLightObjectInternal* const* pToCopy);  // 280
	CUtlMemory<const CSceneLightObjectInternal::Base(); // 112
	CUtlVectorBase<const CSceneLightObjectInternal::Base(); // 280
	CUtlVectorBase<const CSceneLightObjectInternal::Count(); // 280
	CUtlMemory<const CSceneLightObjectInternal::IsExternallyAllocated(); // 905
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 903
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 1799
	CUtlVectorBase<const CSceneLightObjectInternal::RemoveAll(); // 1798
	CUtlVectorBase<const CSceneLightObjectInternal::Purge(); // 560
	ValidateAlignment<const CSceneLightObjectInternal*>(void); // 508
	CUtlMemory<const CSceneLightObjectInternal::Purge(); // 510
	CUtlMemory<const CSceneLightObjectInternal::~CUtlMemory(); // 562
	CUtlVectorBase<const CSceneLightObjectInternal::~CUtlVectorBase(); // 410
	CUtlVector<const CSceneLightObjectInternal::~CUtlVector(); // 283
} /* size: 1345, variables: 3, inline expansions: 34 (1026 bytes) */

// <02C3BA37> ../scenesystem/lightbinner_standard.cpp:287
// variables: 6
inline void CLightBinnerStandard::SetupShadowsForLight(const CSceneLightObjectInternal* pLight, CSceneView* pView, GPULight* gpuLight, SceneSystemPerFrameStats_t& perFrameStats)
{
	Scope s; // 289
	const LightDesc_t* desc; // 291
	const bool  bBakedLight; // 293
	bool bCastShadows; // 295
	{
		float flScreenSize; // 308
		int index; // 311
	}
} /* size: 0, variables: 4 */

// <02C3A567> ../scenesystem/lightbinner_standard.cpp:322
// variables: 19
// function calls: 73
void CLightBinnerStandard::AddLight(const CSceneLightObjectInternal* pLight, CSceneView* pView, SceneSystemPerFrameStats_t& perFrameStats)
{
	Scope s; // 324
	const LightDesc_t* desc; // 326
	GPULight d; // 340
	const char   __FUNCTION__; // 18471
	Vector vFwd; // 349
	Vector vUp; // 350
	Vector vLeft; // 351
	int nLightCookieTexture; // 355
	const float  flRadius; // 365
	float flShadowNearPlane; // 366
	float flShadowFarPlane; // 367
	uint32_t flags; // 370
	bool bBaked; // 477
	{
		int __executeCount; // 336
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 343
	}
	{
		float flFogScale; // 442
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 465
	}
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 324
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Count(); // 334
	Scope::~Scope(); // 482
	VMatrix::VMatrix(); // 94
	Vector::Vector(); // 94
	Vector2D::Vector2D(); // 94
	Vector4D::Vector4D(); // 94
	GPULight::GPULight(); // 340
	memset(void* __dest,
		int __ch,
		size_t __len);  // 341
	Vector::Normalized(); // 349
	Vector::Normalized(); // 350
	Vector::Normalized(); // 351
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 351
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsLoaded(); // 356
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsError(); // 356
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 358
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 360
	Vector::operator=(
			const Vector& vOther);  // 384
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 399
	Vector2D::operator=(
			const Vector2D& vOther);  // 399
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 416
	Vector::operator=(
			const Vector& vOther);  // 416
	Vector::operator=(
			const Vector& vOther);  // 422
	Vector::operator=(
			const Vector& vOther);  // 423
	Vector::operator=(
			const Vector& vOther);  // 421
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 509
	VMatrix::VMatrix(
		const Vector& xAxis,
		const Vector& yAxis,
		const Vector& zAxis);  // 435
	VMatrix::SetTranslation(
			const Vector& vTrans);  // 436
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 289
	{
		float flScreenSize; // 308
		int index; // 311
		ISceneView::GetFrustum(); // 308
		Vector::Vector(); // 2024
		Vector::Vector(); // 2025
		CSceneObject::GetBounds(
				Vector& vecWorldMins,
				Vector& vecWorldMaxes);  // 2026
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 2027
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 2027
		CSceneObject::GetBoundingSphereRadius(); // 308
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 308
	}
	Scope::~Scope(); // 314
	Scope::~Scope(); // 314
	CLightBinnerStandard::SetupShadowsForLight(
				const CSceneLightObjectInternal* pLight,
				CSceneView* pView,
				GPULight* gpuLight,
				SceneSystemPerFrameStats_t& perFrameStats);  // 287
	CLightBinnerStandard::SetupShadowsForLight(
				const CSceneLightObjectInternal* pLight,
				CSceneView* pView,
				GPULight* gpuLight,
				SceneSystemPerFrameStats_t& perFrameStats);  // 457
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Count(); // 466
	CUtlMemory<GPULight, int>::NumAllocated(); // 1196
	CUtlMemory<GPULight, int>::operator[](
			int i);  // 602
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Element(
		int i);  // 1201
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 94
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 94
	GPULight::GPULight(
		const GPULight  &);  // 1520
	CopyConstruct<GPULight>(GPULight* pMemory,
				const GPULight& src);  // 1201
	CUtlMemory<GPULight, int>::Base(); // 112
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Base(); // 368
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::AddToTail(
			const GPULight& src);  // 472
	Vector::operator*=(
			float fl);  // 388
	DEG2RAD(float flDegrees); // 428
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 428
	Vector4D::operator=(
			const Vector4D& vOther);  // 428
} /* size: 2489, variables: 13, inline expansions: 57 (2383 bytes) */

// <02C39464> ../scenesystem/lightbinner_standard.cpp:484
// variables: 16
// function calls: 63
void CLightBinnerStandard::AllocateLights(const CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> >& pVisibleLights, CSceneView* pView, SceneSystemPerFrameStats_t& perFrameStats)
{
	ViewLightingConfig& lightingConfig; // 489
	GPULight dummyLight; // 550
	int nDummyIndex; // 552
	{
		const CSceneLightObjectInternal* const& pLightDesc; // 503
		const CUtlVector<const CSceneLightObjectInternal*, CUtlMemory<const CSceneLightObjectInternal*, int> >& __for_range; // 14242
		const_iterator __for_begin; // 10757
		const_iterator __for_end; // 10757
		CUtlMemory<const CSceneLightObjectInternal::Base(); // 113
		CUtlVectorBase<const CSceneLightObjectInternal::Base(); // 103
		CUtlVectorBase<const CSceneLightObjectInternal::begin(); // 503
		CUtlVectorBase<const CSceneLightObjectInternal::Count(); // 105
		CUtlVectorBase<const CSceneLightObjectInternal::end(); // 503
	}
	{
		const LightDesc_t* desc; // 515
		{
			GPULight d; // 518
			Vector vFwd; // 534
			Vector vUp; // 535
			Vector vLeft; // 536
			VMatrix::VMatrix(); // 94
			Vector::Vector(); // 94
			Vector2D::Vector2D(); // 94
			Vector4D::Vector4D(); // 94
			GPULight::GPULight(); // 518
			memset(void* __dest,
				int __ch,
				size_t __len);  // 519
			Vector::operator=(
					const Vector& vOther);  // 523
			Vector::Normalized(); // 534
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 532
			Vector4D::operator=(
					const Vector4D& vOther);  // 532
			Vector::Normalized(); // 535
			Vector::Normalized(); // 536
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 536
			VMatrix::Init(
				vec_t m00,
				vec_t m01,
				vec_t m02,
				vec_t m03,
				vec_t m10,
				vec_t m11,
				vec_t m12,
				vec_t m13,
				vec_t m20,
				vec_t m21,
				vec_t m22,
				vec_t m23,
				vec_t m30,
				vec_t m31,
				vec_t m32,
				vec_t m33);  // 509
			VMatrix::VMatrix(
				const Vector& xAxis,
				const Vector& yAxis,
				const Vector& zAxis);  // 537
			VMatrix::SetTranslation(
					const Vector& vTrans);  // 538
			CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Count(); // 541
			CUtlMemory<GPULight, int>::NumAllocated(); // 1196
			CUtlMemory<GPULight, int>::operator[](
					int i);  // 602
			CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Element(
				int i);  // 1201
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 94
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 94
			GPULight::GPULight(
				const GPULight  &);  // 1520
			CopyConstruct<GPULight>(GPULight* pMemory,
						const GPULight& src);  // 1201
			CUtlMemory<GPULight, int>::Base(); // 112
			CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Base(); // 368
			CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::AddToTail(
					const GPULight& src);  // 542
			Vector::operator*=(
					float fl);  // 527
		}
	}
	{
		LightIndexMapping& mapping; // 554
		LightIndexMapping& __for_range; // 15735
		LightIndexMapping* __for_begin; // 15741
		LightIndexMapping* __for_end; // 15741
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 495
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::RemoveAll(); // 497
	CUtlMemory<GPULight, int>::IsGrowable(); // 881
	CUtlMemory<GPULight, int>::IsExternallyAllocated(); // 888
	CUtlMemory<GPULight, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::EnsureCapacity(
			int num);  // 498
	CUtlVectorBase<const CSceneLightObjectInternal::Count(); // 498
	VMatrix::VMatrix(); // 94
	Vector::Vector(); // 94
	Vector2D::Vector2D(); // 94
	Vector4D::Vector4D(); // 94
	GPULight::GPULight(); // 550
	memset(void* __dest,
		int __ch,
		size_t __len);  // 551
	CUtlMemory<GPULight, int>::NumAllocated(); // 1196
	CUtlMemory<GPULight, int>::operator[](
			int i);  // 602
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Element(
		int i);  // 1201
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 94
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 94
	GPULight::GPULight(
		const GPULight  &);  // 1520
	CopyConstruct<GPULight>(GPULight* pMemory,
				const GPULight& src);  // 1201
	CUtlMemory<GPULight, int>::Base(); // 112
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Base(); // 368
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::AddToTail(
			const GPULight& src);  // 552
} /* size: 1810, variables: 3, inline expansions: 27 (1310 bytes) */

// <02C38CB4> ../scenesystem/lightbinner_standard.cpp:562
// variables: 5
// function calls: 21
void CLightBinnerStandard::InitForView(CSceneView* pView, ESceneObjectFlags nForwardLightSetupRequiredMask, ESceneObjectFlags nForwardLightSetupExcludedMask, SceneSystemPerFrameStats_t& perFrameStats)
{
	Scope s; // 568
	const CFrustum& frustum; // 570
	const char   __FUNCTION__; // 18542
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 579
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_598; // 598
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
				int nLineNumber);  // 598
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 600
	}
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 568
	ISceneView::GetFrustum(); // 570
	ConVar::GetInt(); // 577
	CSceneView::GetLightBinnerStandard(); // 579
	CSceneView::SetLightBinner(
			CLightBinnerStandard* pBinner);  // 584
	CUtlVectorBase<const CDecalSceneObject::RemoveAll(); // 119
	CUtlVectorBase<const CSceneLightObjectInternal::RemoveAll(); // 120
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::RemoveAll(); // 125
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::RemoveAll(); // 126
	CLightBinnerStandard::ShadowSetup_ResetLightAllocations(); // 591
	Scope::~Scope(); // 634
} /* size: 0, variables: 3, inline expansions: 11 (128 bytes) */

// <02C36B32> ../scenesystem/lightbinner_standard.cpp:638
// variables: 52
// function calls: 130
void CLightBinnerStandard::SetShaderAttributes(CRenderAttributes& attributes)
{
	CUtlAttributeList<void::SetValue(
		const CUtlStringToken& nTok,
		void* nValue);  // 349
	CRenderAttributes::SetPtrValue(
			CUtlStringToken nTokenID,
			void* pValue);  // 641
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				ConstantBufferHandle_t hBuf,
				uint32 nV);  // 732
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				const ConstantBufferAttr_t& other);  // 571
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 311
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 826
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 836
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 846
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 322
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 317
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 309
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			uint32 nKey,
			ConstantBufferAttr_t** pValueOut);  // 547
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 566
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 29362
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 29372
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 29382
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 337
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 328
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		uint32 nKey,
		ConstantBufferAttr_t nValue);  // 571
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		const CUtlStringToken& nTok,
		ConstantBufferAttr_t nValue);  // 732
	CRenderAttributes::SetConstantBufferValue(
				CUtlStringToken nTokenID,
				ConstantBufferHandle_t cb,
				uint32 nView);  // 642
	CUtlAttributeList<void::SetValue(
		const CUtlStringToken& nTok,
		void* nValue);  // 349
	CRenderAttributes::SetPtrValue(
			CUtlStringToken nTokenID,
			void* pValue);  // 645
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				ConstantBufferHandle_t hBuf,
				uint32 nV);  // 732
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				const ConstantBufferAttr_t& other);  // 571
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 311
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 826
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 836
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 846
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 322
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 317
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 309
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			uint32 nKey,
			ConstantBufferAttr_t** pValueOut);  // 547
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 566
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 29362
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 29372
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 29382
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 337
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 328
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		uint32 nKey,
		ConstantBufferAttr_t nValue);  // 571
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		const CUtlStringToken& nTok,
		ConstantBufferAttr_t nValue);  // 732
	CRenderAttributes::SetConstantBufferValue(
				CUtlStringToken nTokenID,
				ConstantBufferHandle_t cb,
				uint32 nView);  // 646
	CUtlAttributeList<void::SetValue(
		const CUtlStringToken& nTok,
		void* nValue);  // 349
	CRenderAttributes::SetPtrValue(
			CUtlStringToken nTokenID,
			void* pValue);  // 648
	CUtlAttributeList<void::SetValue(
		const CUtlStringToken& nTok,
		void* nValue);  // 349
	CRenderAttributes::SetPtrValue(
			CUtlStringToken nTokenID,
			void* pValue);  // 650
	CUtlAttributeList<void::SetValue(
		const CUtlStringToken& nTok,
		void* nValue);  // 349
	CRenderAttributes::SetPtrValue(
			CUtlStringToken nTokenID,
			void* pValue);  // 651
} /* size: 1290, inline expansions: 44 (4695 bytes) */

// <02C36416> ../scenesystem/lightbinner_standard.cpp:658
// variables: 4
// function calls: 26
void CSceneSystem::GetOrCreatePooledLightBinnerStandard()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_660; // 660
	int nLightBinners; // 662
	CLightBinnerStandard* pRetBinner; // 671
	{
		CLightBinnerStandard* pBinner; // 667
		CUtlMemory<CLightBinnerStandard::NumAllocated(); // 1196
		CUtlMemory<CLightBinnerStandard::Base(); // 112
		CUtlVectorBase<CLightBinnerStandard::Base(); // 368
		CUtlVectorBase<CLightBinnerStandard::ResetDbgInfo(); // 824
		CUtlMemory<CLightBinnerStandard::IsGrowable(); // 823
		CUtlMemory<CLightBinnerStandard::IsExternallyAllocated(); // 859
		CUtlMemory<CLightBinnerStandard::IsExternallyAllocated(); // 861
		CUtlMemory<CLightBinnerStandard::Grow(
			int num);  // 806
		CUtlVectorBase<CLightBinnerStandard::GrowMemory(
				int num);  // 1198
		CUtlMemory<CLightBinnerStandard::operator[](
				int i);  // 602
		CUtlVectorBase<CLightBinnerStandard::Element(
			int i);  // 1201
		CopyConstruct<CLightBinnerStandard*>(CLightBinnerStandard** pMemory,
							CLightBinnerStandard* const& src);  // 1201
		CUtlVectorBase<CLightBinnerStandard::AddToTail(
				CLightBinnerStandard* const& src);  // 668
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
			int nLineNumber);  // 660
	CUtlVectorBase<CLightBinnerStandard::Count(); // 662
	CUtlMemory<CLightBinnerStandard::operator[](
			int i);  // 588
	CUtlVectorBase<CLightBinnerStandard::operator[](
			int i);  // 671
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 675
} /* size: 539, variables: 3, inline expansions: 13 (416 bytes) */

// <02C35271> ../scenesystem/lightbinner_standard.cpp:680
// variables: 29
// function calls: 70
void CLightBinnerStandard::SetRenderAttributesForLightProbeVolume(LightProbeVolumeBinding_t lpvBinding, CRenderAttributes& attrs)
{
	int nIdx; // 682
	const int  nLightProbeVolumes; // 685
	const LightProbeVolumeData_t& lpvData; // 691
	Count(const CUtlVectorBase<CLightBinner2::LightProbeVolumeData_t, CUtlMemory<CLightBinner2::LightProbeVolumeData_t, int> this); // 685
	CUtlMemory<CLightBinner2::LightProbeVolumeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLightBinner2::LightProbeVolumeData_t, CUtlMemory<CLightBinner2::LightProbeVolumeData_t, int> >::operator[](
			int i);  // 691
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				ConstantBufferHandle_t hBuf,
				uint32 nV);  // 732
	ConstantBufferAttr_t::ConstantBufferAttr_t(
				const ConstantBufferAttr_t& other);  // 571
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 311
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 826
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 836
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 846
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 317
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 322
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 317
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 309
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			ConstantBufferAttr_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexOfMatch(
			uint32 nKey,
			ConstantBufferAttr_t** pValueOut);  // 547
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 551
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
	FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
			i32x4 i4KMatch);  // 330
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 29362
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 29372
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 29382
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
		FindIndexOfMatch(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 337
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 328
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				ConstantBufferAttr_t** pValueOut);  // 556
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 566
	{
		OverflowChunk_t* pNew; // 559
		ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		uint32 nKey,
		ConstantBufferAttr_t nValue);  // 571
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
		const CUtlStringToken& nTok,
		ConstantBufferAttr_t nValue);  // 732
	CRenderAttributes::SetConstantBufferValue(
				CUtlStringToken nTokenID,
				ConstantBufferHandle_t cb,
				uint32 nView);  // 692
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 694
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 695
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 696
} /* size: 692, variables: 3, inline expansions: 27 (2222 bytes) */

// <02C350BC> ../scenesystem/lightbinner_standard.cpp:699
// variables: 5
void CLightBinnerStandard::InitializeGfxResources()
{
	{
		BufferDesc_t bufferDesc; // 705
	}
	{
		BufferDesc_t bufferDesc; // 725
	}
	{
		BufferDesc_t bufferDesc; // 745
	}
	{
		BufferDesc_t bufferDesc; // 762
	}
	{
		BufferDesc_t bufferDesc; // 779
	}
} /* size: 467 */

// <02C4AEA4> ../scenesystem/lightbinner_standard.cpp:801
// function calls: 3
void CLightBinnerStandard::UploadLightingToGPU(IRenderContext* pCtx)
{
	CLightBinnerStandard::DidUpdateConstantBuffers(); // 804
	CLightBinnerStandard::SetUpdatedConstantBuffers(
					bool bUpdated);  // 808
	CLightBinnerStandard::UploadLightingToGPU(
				IRenderContext* pCtx);  // 801
} /* size: 56, inline expansions: 3 (37 bytes) */

// <02C35096> ../scenesystem/lightbinner_standard.cpp:801
void CLightBinnerStandard::UploadLightingToGPU(IRenderContext* pCtx)
{
} /* size: 0 */

// <02C34799> ../scenesystem/lightbinner_standard.cpp:824
// variables: 14
// function calls: 34
void CLightBinnerStandard::FillLightingConfigConstants(const CSceneView* pView, ViewLightingConfig& lightingConfig)
{
	CSceneView::GetRenderAttributes(); // 829
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 829
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
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 33337
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 33347
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 33357
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
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
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const Vector4D ** pValueOut);  // 381
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 383
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				uint32 k,
				Vector4D nDefault);  // 393
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 393
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				Vector4D nDefault);  // 282
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 282
	CRenderAttributes::GetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vDefaultValue);  // 829
	Vector4D::operator=(
			const Vector4D& vOther);  // 829
} /* size: 344, inline expansions: 9 (628 bytes) */

// <02C33F88> ../scenesystem/lightbinner_standard.cpp:832
// variables: 5
// function calls: 9
void CLightBinnerStandard::AddEnvironmentMapsForView(CSceneView* pView)
{
	CUtlVector<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >& pEnvMapDataList; // 842
	const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CU* renderTags; // 845
	const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CU* excludeTags; // 846
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::RemoveAll(); // 843
	{
		_M_create<CLightBinnerStandard::AddEnvironmentMapsForView(CSceneView*)::<lambda(CEnvMapSceneObject*)> >(union _Any_data& __dest,
															class& __f,
															false_type); // 217
		_M_init_functor<CLightBinnerStandard::AddEnvironmentMapsForView(CSceneView*)::<lambda(CEnvMapSceneObject*)> >(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<CLightBinnerStandard::AddEnvironmentMapsForView(CSceneView*)::<lambda(CEnvMapSceneObject*)> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void(CEnvMapSceneObject::function<CLightBinnerStandard::AddEnvironmentMapsForView(
														class& __f);  // 848
	_Function_base::~_Function_base(); // 336
	function<void(CEnvMapSceneObject::~function()>* this); // 848
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::Count(); // 898
} /* size: 325, variables: 3, inline expansions: 6 (152 bytes) */

// <02C33EF8> ../scenesystem/lightbinner_standard.cpp:901
// variables: 2
inline void VectorToRGBE(const Vector& vVector, int8* pOutRGBE)
{
	int nE; // 904
	float flV; // 905
} /* size: 0, variables: 2 */

// <02C31662> ../scenesystem/lightbinner_standard.cpp:920
// variables: 30
// function calls: 170
void CLightBinnerStandard::UploadLightingBuffers(IRenderContext* pCtx)
{
	int binnedEnvMapsCount; // 922
	int binnedLightsCount; // 923
	ViewLightingConfigV1 v1Stub; // 1076
	{
		int __executeCount; // 928
	}
	{
		{
			int i; // 936
			{
				const CDecalSceneObject* pDecal; // 938
				CDecalSceneObject* pDecalNon; // 939
				CTransformUnaligned transform; // 940
				GPUDecal d; // 942
				int8 rgbe; // 947
				uint8_t alpha; // 950
				uint32 colorIdx; // 961
				uint32 normalIdx; // 962
				uint32 rmoIdx; // 963
				uint32 heightIdx; // 964
				uint32 emissionIdx; // 965
				uint8_t attAngleNormalized; // 967
				uint8_t colorExponent; // 968
				uint64_t packed; // 973
				array<texture_use_info_t, 5> texturesUsed; // 983
				bool bHasExtraData; // 993
				GPUDecalExtraData extraData; // 994
				{
					Vector2D vSheetSequenceDataUVCoords; // 1020
					HRenderTexture hSequenceDataTexture; // 1021
					int nSequenceCount; // 1022
					{
						Vector4D data; // 1025
						const CTextureDesc* pTexHeader; // 1027
						Vector4D::Vector4D(
							vec_t X,
							vec_t Y,
							vec_t Z,
							vec_t W);  // 1025
						CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1027
					}
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
								ResourceHandle_t hUntypedResource);  // 227
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
					CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 1023
					Vector2D::Vector2D(); // 1020
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 1021
				}
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1018
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 1018
				CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::Count(); // 1056
				CUtlMemory<GPUDecalExtraData, int>::NumAllocated(); // 1196
				CUtlMemory<GPUDecalExtraData, int>::Base(); // 112
				CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::Base(); // 368
				CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::ResetDbgInfo(); // 824
				CUtlMemory<GPUDecalExtraData, int>::IsGrowable(); // 823
				CUtlMemory<GPUDecalExtraData, int>::IsExternallyAllocated(); // 859
				CUtlMemory<GPUDecalExtraData, int>::IsExternallyAllocated(); // 861
				CUtlMemory<GPUDecalExtraData, int>::Grow(
					int num);  // 806
				CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::GrowMemory(
						int num);  // 1198
				Vector4D::Vector4D(
					const Vector4D& vOther);  // 145
				GPUDecalExtraData::GPUDecalExtraData(
							const GPUDecalExtraData  &);  // 1520
				CopyConstruct<GPUDecalExtraData>(GPUDecalExtraData* pMemory,
								const GPUDecalExtraData& src);  // 1201
				CUtlMemory<GPUDecalExtraData, int>::operator[](
						int i);  // 602
				CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::AddToTail(
						const GPUDecalExtraData& src);  // 1057
				CUtlMemory<GPUDecal, int>::NumAllocated(); // 1196
				CUtlMemory<GPUDecal, int>::Base(); // 112
				CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Base(); // 368
				CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::ResetDbgInfo(); // 824
				CUtlMemory<GPUDecal, int>::IsGrowable(); // 823
				CUtlMemory<GPUDecal, int>::IsExternallyAllocated(); // 859
				CUtlMemory<GPUDecal, int>::IsExternallyAllocated(); // 861
				CUtlMemory<GPUDecal, int>::Grow(
					int num);  // 806
				CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<GPUDecal>(GPUDecal* pMemory,
							const GPUDecal& src);  // 1201
				CUtlMemory<GPUDecal, int>::operator[](
						int i);  // 602
				CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::AddToTail(
						const GPUDecal& src);  // 1060
				CUtlMemory<const CDecalSceneObject::operator[](
						int i);  // 588
				CUtlVectorBase<const CDecalSceneObject::operator[](
						int i);  // 938
				Vector::Vector(); // 125
				Vector::Vector(); // 125
				Quaternion::Quaternion(); // 125
				CTransformUnaligned::CTransformUnaligned(); // 2125
				Quaternion::Quaternion(); // 315
				Vector::Vector(); // 316
				matrix3x4_t::matrix3x4_t(); // 317
				matrix3x4_t::matrix3x4_t(); // 753
				MatrixPosition(const matrix3x4_t& matrix,
						Vector& position);  // 757
				MatrixQuaternion(const matrix3x4_t& mat,
						Quaternion& q,
						Vector& o,
						float& flScale);  // 320
				Vector::operator=(
						const Vector& vOther);  // 323
				CTransformUnaligned::InitFromMatrix(
						const matrix3x4_t& xform);  // 2126
				CSceneObject::GetCTransformUnaligned(); // 940
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1431
				Vector::operator-(); // 943
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 1872
				Conjugate(const Quaternion& q); // 944
				Floor2Int(float a); // 913
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 913
				Floor2Int(float a); // 914
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 914
				Floor2Int(float a); // 915
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 915
				Clamp<int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 916
				VectorToRGBE(const Vector& vVector,
						int8* pOutRGBE);  // 948
				Vector::Vector(); // 129
				Quaternion::Quaternion(); // 129
				Vector::Vector(); // 129
				GPUDecal::GPUDecal(); // 942
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 945
				Vector4D::operator[](
						int i);  // 950
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 961
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 962
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 963
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 964
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 965
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 989
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 989
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 989
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 989
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 989
				array<texture_use_info_t, 5>::data(); // 991
				Vector4D::Vector4D(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 1002
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 1004
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1004
				CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1011
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 1011
				Max<float>(const float& val1,
						const float& val2);  // 1014
			}
			CUtlVectorBase<const CDecalSceneObject::Count(); // 936
		}
		CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Count(); // 973
		CUtlMemory<GPUDecal, int>::Base(); // 112
		CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Base(); // 973
		__countl_zero<long unsigned int>(long unsigned int __x); // 388
		__bit_width<long unsigned int>(long unsigned int __x); // 1555
		__lg<long int>(long int __n); // 1907
		{
			GPUDecal* __i; // 1798
			operator()(const class* __closure,
					const GPUDecal& lhs,
					const GPUDecal& rhs); // 240
			_Val_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext::operator(
							GPUDecal& __val,
							GPUDecal* __it);  // 1758
			Vector::operator=(
					const Vector& vOther);  // 129
			Vector::operator=(
					const Vector& vOther);  // 129
			GPUDecal::operator=(
					GPUDecal &);  // 1760
			Vector::operator=(
					const Vector& vOther);  // 129
			Vector::operator=(
					const Vector& vOther);  // 129
			GPUDecal::operator=(
					GPUDecal &);  // 1764
			__unguarded_linear_insert<GPUDecal*, __gnu_cxx::__ops::_Val_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> > >(GPUDecal* __last,
																_Val_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> > __comp); // 1799
		}
		__unguarded_insertion_sort<GPUDecal*, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> > >(GPUDecal* __first,
																GPUDecal* __last,
																_Iter_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> __comp); // 1819
		__final_insertion_sort<GPUDecal*, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> > >(GPUDecal* __first,
																GPUDecal* __last,
																_Iter_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> __comp); // 1909
		__sort<GPUDecal*, __gnu_cxx::__ops::_Iter_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> > >(GPUDecal* __first,
																GPUDecal* __last,
																_Iter_comp_iter<CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> __comp); // 4874
		sort<GPUDecal*, CLightBinnerStandard::UploadLightingBuffers(IRenderContext*)::<lambda(const GPUDecal&, const GPUDecal&)> >(GPUDecal* __first,
																GPUDecal* __last,
																 __comp); // 973
		CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::SortPredicate<CLightBinnerStandard::UploadLightingBuffers(
																class& predicate);  // 1065
	}
	Min<int>(const int& val1,
		const int& val2);  // 922
	Min<int>(const int& val1,
		const int& val2);  // 923
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::Count(); // 922
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Count(); // 923
	CUtlMemory<EnvironmentMapConstants, int>::Base(); // 112
	CUtlVectorBase<EnvironmentMapConstants, CUtlMemory<EnvironmentMapConstants, int> >::Base(); // 931
	CUtlMemory<GPULight, int>::Base(); // 112
	CUtlVectorBase<GPULight, CUtlMemory<GPULight, int> >::Base(); // 932
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 934
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Count(); // 1071
	CUtlMemory<GPUDecal, int>::Base(); // 112
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Base(); // 1071
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::Count(); // 1072
	CUtlMemory<GPUDecalExtraData, int>::Base(); // 112
	CUtlVectorBase<GPUDecalExtraData, CUtlMemory<GPUDecalExtraData, int> >::Base(); // 1072
	CUtlVectorBase<GPUDecal, CUtlMemory<GPUDecal, int> >::Count(); // 1073
	Vector4D::Vector4D(); // 1076
	Vector4D::Vector4D(); // 1076
} /* size: 4109, variables: 3, inline expansions: 19 (94 bytes) */


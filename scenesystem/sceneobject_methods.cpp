
//
// scenesystem/sceneobject_methods.cpp
//
//	referenced by: libengine2.so
//
//	functions: 85
//

// <03557E1C> ../scenesystem/sceneobject_methods.cpp:35
// variables: 3
// function calls: 20
void CSceneSystem::SceneObject_ScheduleDirtyUpdate(CSceneObject* pObject)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_37; // 37
	const char   __FUNCTION__; // 20887
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 39
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
			int nLineNumber);  // 37
	CSceneObject::HasFlags(
		ESceneObjectFlags nFlags);  // 39
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
			CSceneObject* const& src);  // 42
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 43
} /* size: 0, variables: 2, inline expansions: 20 (590 bytes) */

// <035577FA> ../scenesystem/sceneobject_methods.cpp:46
// variables: 5
// function calls: 22
void CSceneSystem::SceneObject_UnscheduleDirtyUpdate(CSceneObject* pObject)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_48; // 48
	int i; // 50
	const char   __FUNCTION__; // 20936
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
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
			int nLineNumber);  // 48
	{
		int i; // 1531
		CUtlVectorBase<CSceneObject::Count(); // 1531
		CUtlMemory<CSceneObject::operator[](
				int i);  // 609
		CUtlVectorBase<CSceneObject::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CSceneObject::Find(
		CSceneObject* const& src);  // 50
	CUtlMemory<CSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneObject::Element(
		int i);  // 1114
	CUtlMemory<CSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneObject::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CSceneObject::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CSceneObject::Remove(
		int elem);  // 57
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 59
} /* size: 0, variables: 3, inline expansions: 19 (648 bytes) */

// <0356766A> ../scenesystem/sceneobject_methods.cpp:62
void CSceneSystem::SceneObject_AttachExtraData(CSceneObject* pObject)
{
} /* size: 64 */

// <03566DB9> ../scenesystem/sceneobject_methods.cpp:70
// function calls: 5
void CSceneSystem::SceneObject_AttachLightingCache(CSceneObject* pObject)
{
	LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 221
	Vector::Vector(); // 221
	CUtlStringToken::CUtlStringToken(); // 221
	CSceneObjectLightingCache_t::Invalidate(); // 222
	CSceneObjectLightingCache_t::CSceneObjectLightingCache_t(); // 74
} /* size: 79, inline expansions: 5 (48 bytes) */

// <035577B0> ../scenesystem/sceneobject_methods.cpp:70
void CSceneSystem::SceneObject_AttachLightingCache(CSceneObject* pObject)
{
} /* size: 0 */

// <0355652E> ../scenesystem/sceneobject_methods.cpp:78
// variables: 10
// function calls: 80
void CSceneSystem::SceneObject_SetMaterialOverride(CSceneObject* pObj, HMaterial hOverridestate, CUtlStringToken nLayerAttrMatchID, int nLayerAttrMatchValue)
{
	CSceneObjectMaterialOverrideEntry newStateBlock; // 80
	int nIndex; // 110
	int nCount; // 111
	{
		int i; // 92
		{
			const CSceneObjectMaterialOverrideEntry& test; // 94
			CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
				int i);  // 1114
			CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			ShiftElementsLeft(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
						int elem,
						int num);  // 1608
			CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
			CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 167
			CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::~CSceneObjectStateOverideEntry(); // 1526
			Destruct<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory); // 1607
			Remove(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
				int elem);  // 98
			CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
					int i);  // 94
			CUtlStringToken::operator!=(
					const CUtlStringToken& other);  // 95
		}
		Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 92
	}
	{
		const CSceneObjectMaterialOverrideEntry& test; // 114
		CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
				int i);  // 114
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 115
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 83
	CUtlStringToken::CUtlStringToken(); // 167
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(); // 167
	CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::CSceneObjectStateOverideEntry(); // 80
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 85
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 85
	{
		function<void(CSceneObject*)>* fn; // 279
		CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16>& __for_range; // 53067
		iterator __for_begin; // 53077
		iterator __for_end; // 53087
		CUtlMemory<std::function<void(CSceneObject::Base()>*, int>* this); // 112
		CUtlVectorBase<std::function<void(CSceneObject::Base()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 102
		CUtlVectorBase<std::function<void(CSceneObject::begin()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		CUtlVectorBase<std::function<void(CSceneObject::Count()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*) this); // 104
		CUtlVectorBase<std::function<void(CSceneObject::end()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		_Function_base::_M_empty(); // 591
		function<void(CSceneObject::operator(
				CSceneObject* __args#0);  // 281
	}
	CSceneSystem::SceneObject_UpdateFlagsBasedOnMaterial(
						CSceneObject* pObject);  // 1734
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 103
	CSceneSystem::SceneObject_AttachExtraData(
					CSceneObject* pObject);  // 2293
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 109
	Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 111
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
			int i);  // 122
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t(); // 244
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			ResourceHandleTyped_t hResource);  // 244
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& src);  // 167
	CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::operator=(
			const CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >  &);  // 122
	{
		function<void(CSceneObject*)>* fn; // 279
		CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16>& __for_range; // 53067
		iterator __for_begin; // 53077
		iterator __for_end; // 53087
		CUtlMemory<std::function<void(CSceneObject::Base()>*, int>* this); // 112
		CUtlVectorBase<std::function<void(CSceneObject::Base()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 102
		CUtlVectorBase<std::function<void(CSceneObject::begin()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		CUtlVectorBase<std::function<void(CSceneObject::Count()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*) this); // 104
		CUtlVectorBase<std::function<void(CSceneObject::end()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		_Function_base::_M_empty(); // 591
		function<void(CSceneObject::operator(
				CSceneObject* __args#0);  // 281
	}
	CSceneSystem::SceneObject_UpdateFlagsBasedOnMaterial(
						CSceneObject* pObject);  // 1734
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 125
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 167
	CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::~CSceneObjectStateOverideEntry(); // 126
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
		int i);  // 1148
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::NumAllocated(); // 1143
	CUtlStringToken::CUtlStringToken(); // 167
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 217
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(); // 167
	CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::CSceneObjectStateOverideEntry(); // 1479
	Construct<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory); // 1148
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::IsGrowable(); // 823
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::Grow(
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 824
	GrowMemory(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 120
} /* size: 0, variables: 3, inline expansions: 43 (1523 bytes) */

// <03555112> ../scenesystem/sceneobject_methods.cpp:128
// variables: 13
// function calls: 86
void CSceneSystem::SceneObject_GetMaterialsForObject(CSceneObject* pObject, CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& materials, CUtlVectorFixedGrowable<int, 2>& drawFlags)
{
	CSceneObjectExtraData_t* pExtraData; // 136
	CMeshInstance* pCurrentMeshInstance; // 155
	const char   __FUNCTION__; // 20936
	{
		int nOverrides; // 139
		{
			int i; // 140
			{
				HMaterial hMat; // 144
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 144
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1196
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this,
					int i);  // 1201
				CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1520
				CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory,
												const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1201
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
				Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this); // 368
				ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this); // 824
				GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this,
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 145
				CUtlMemory<int, int>::NumAllocated(); // 1247
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::Element(
					int i);  // 1252
				Construct<int, int>(int* pMemory); // 1252
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::AddToTail(
						int& src);  // 146
			}
			CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
					int i);  // 142
		}
		Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 139
	}
	{
		const CMaterialDrawDescriptor* pDrawOp; // 158
		int nCount; // 159
		{
			int c; // 160
			CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this); // 368
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this,
					int num);  // 1249
			CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this,
				int i);  // 1252
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1514
			Construct<CWeakHandle<InfoForResourceTypeIMaterial2>, CWeakHandle<InfoForResourceTypeIMaterial2> >(CWeakHandle<InfoForResourceTypeIMaterial2>* pMemory); // 1252
			CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 1247
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this,
					CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 162
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<int, int>::NumAllocated(); // 1247
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::Element(
				int i);  // 1252
			Construct<int, int>(int* pMemory); // 1252
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::AddToTail(
					int& src);  // 163
		}
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
		CUtlMemory<CSceneObjectData, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
				int i);  // 305
		CMeshInstance::GetSceneObjectData(); // 332
		CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 113
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 335
		CMeshInstance::GetDrawCallsPtr(); // 158
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
		CUtlMemory<CSceneObjectData, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
				int i);  // 305
		CMeshInstance::GetSceneObjectData(); // 322
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 325
		CMeshInstance::GetNumDrawCalls(); // 159
		CMeshInstance::GetNext(); // 168
	}
	{
		int nOverrides; // 176
		{
			int i; // 177
			{
				HMaterial entry; // 179
				CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
						int i);  // 179
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 179
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 182
				CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeI this,
						int i);  // 184
				CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 331
				CWeakHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 184
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::operator[](
						int i);  // 185
			}
		}
		Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoFor this); // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
	}
	CSceneObject::HasMeshInstanceData(); // 130
	CSceneObject::GetExtraData(); // 136
	CSceneObject::GetMeshInstanceData(); // 155
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourc this); // 190
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 2, int> >::Count(); // 190
} /* size: 0, variables: 3, inline expansions: 5 (30 bytes) */

// <03566EFF> ../scenesystem/sceneobject_methods.cpp:277
// variables: 2
// function calls: 9
void CSceneSystem::SceneObject_UpdateFlagsBasedOnMaterial(CSceneObject* pObject)
{
	{
		function<void(CSceneObject*)>* fn; // 279
		CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16>& __for_range; // 53067
		iterator __for_begin; // 53077
		iterator __for_end; // 53087
		CUtlVectorBase<std::function<void(CSceneObject::Count()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*) this); // 104
		CUtlVectorBase<std::function<void(CSceneObject::end()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		CUtlMemory<std::function<void(CSceneObject::Base()>*, int>* this); // 112
		CUtlVectorBase<std::function<void(CSceneObject::Base()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 102
		CUtlVectorBase<std::function<void(CSceneObject::begin()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		_Function_base::_M_empty(); // 591
		function<void(CSceneObject::operator(
				CSceneObject* __args#0);  // 281
	}
} /* size: 0 */

// <035536FD> ../scenesystem/sceneobject_methods.cpp:277
// variables: 2
// function calls: 2
void CSceneSystem::SceneObject_UpdateFlagsBasedOnMaterial(CSceneObject* pObject)
{
	{
		function<void(CSceneObject*)>* fn; // 279
		CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16>& __for_range; // 53099
		iterator __for_begin; // 52838
		iterator __for_end; // 52838
	}
} /* size: 0 */

// <035532C5> ../scenesystem/sceneobject_methods.cpp:285
// function calls: 17
void CSceneSystem::InstallMaterialDependentSceneObjectUpdater(const function<void(CSceneObject*)>& updater)
{
	_Function_base::_Function_base(); // 389
	_Function_base::_M_empty(); // 576
	function<void(CSceneObject::operator bool()>* this); // 391
	function<void(CSceneObject::function(
		const function<void(CSceneObject*)>& __x);  // 287
	CUtlMemory<std::function<void(CSceneObject::NumAllocated()>*, int>* this); // 1247
	CUtlMemory<std::function<void(CSceneObject::Base()>*, int>* this); // 112
	CUtlVectorBase<std::function<void(CSceneObject::Base()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 368
	CUtlVectorBase<std::function<void(CSceneObject::ResetDbgInfo()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 824
	CUtlMemory<std::function<void(CSceneObject::IsGrowable()>*, int>* this); // 823
	CUtlMemory<std::function<void(CSceneObject::IsExternallyAllocated()>*, int>* this); // 859
	CUtlMemory<std::function<void(CSceneObject::IsExternallyAllocated()>*, int>* this); // 861
	CUtlMemory<std::function<void(CSceneObject::Grow(
		int num);  // 806
	CUtlVectorBase<std::function<void(CSceneObject::GrowMemory(
			int num);  // 1249
	CUtlMemory<std::function<void(CSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<std::function<void(CSceneObject::Element(
		int i);  // 1252
	Construct<std::function<void(CSceneObject*)>*, std::function<void(CSceneObject*)>*>(function<void(CSceneObject*)>** pMemory); // 1252
	CUtlVectorBase<std::function<void(CSceneObject::AddToTail(
			function<void(CSceneObject*)> *& src);  // 287
} /* size: 447, inline expansions: 17 (1058 bytes) */

// <03552F71> ../scenesystem/sceneobject_methods.cpp:290
// variables: 7
// function calls: 11
void CSceneWorldObjectList::Check(int nPartition, CSceneWorld* pWorld)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_292; // 292
	int nNumObjects; // 294
	int nNumChunks; // 295
	{
		CSceneWorldObjectListChunk* pList; // 296
		const CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& __for_range; // 15274
		const_iterator __for_begin; // 11771
		const_iterator __for_end; // 11771
		CUtlMemory<CSceneWorldObjectListChunk::Base(); // 113
		CUtlVectorBase<CSceneWorldObjectListChunk::Base(); // 103
		CUtlVectorBase<CSceneWorldObjectListChunk::begin(); // 296
		CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 105
		CUtlVectorBase<CSceneWorldObjectListChunk::end(); // 296
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 292
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 302
} /* size: 208, variables: 3, inline expansions: 6 (285 bytes) */

// <03552BB5> ../scenesystem/sceneobject_methods.cpp:304
// variables: 2
// function calls: 15
void CSceneWorldObjectList::Purge()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_306; // 306
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 306
	{
		int i; // 1807
		CUtlMemory<CSceneWorldObjectListChunk::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneWorldObjectListChunk::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CSceneWorldObjectListChunk::RemoveAll(); // 1798
	CUtlMemory<CSceneWorldObjectListChunk::Purge(); // 903
	CUtlMemory<CSceneWorldObjectListChunk::IsExternallyAllocated(); // 905
	CUtlMemory<CSceneWorldObjectListChunk::Purge(); // 1799
	CUtlVectorBase<CSceneWorldObjectListChunk::ResetDbgInfo(); // 1800
	CUtlVectorBase<CSceneWorldObjectListChunk::Purge(); // 1811
	CUtlVectorBase<CSceneWorldObjectListChunk::PurgeAndDeleteElements(); // 307
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 308
} /* size: 223, variables: 1, inline expansions: 13 (539 bytes) */

// <03552703> ../scenesystem/sceneobject_methods.cpp:310
// variables: 3
// function calls: 18
void CSceneWorldObjectList::FreeUnusedObjectChunks()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_312; // 312
	{
		int i; // 313
		CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 313
		CUtlMemory<CSceneWorldObjectListChunk::operator[](
				int i);  // 588
		CUtlVectorBase<CSceneWorldObjectListChunk::operator[](
				int i);  // 315
		CSceneWorldObjectListChunk::NumObjects(); // 315
		CUtlMemory<CSceneWorldObjectListChunk::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneWorldObjectListChunk::Element(
			int i);  // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CSceneWorldObjectListChunk::operator[](
					int i);  // 602
			CUtlVectorBase<CSceneWorldObjectListChunk::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		Destruct<CSceneWorldObjectListChunk*>(CSceneWorldObjectListChunk** pMemory); // 1575
		CUtlVectorBase<CSceneWorldObjectListChunk::FastRemove(
				int elem);  // 318
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 312
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 321
} /* size: 288, variables: 1, inline expansions: 6 (282 bytes) */

// <03552209> ../scenesystem/sceneobject_methods.cpp:323
// variables: 6
// function calls: 20
void CSceneWorldObjectList::GetAllSceneObjects(CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& objectsOut)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_325; // 325
	{
		CSceneWorldObjectListChunk* pList; // 327
		CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& __for_range; // 44671
		iterator __for_begin; // 11726
		iterator __for_end; // 11726
		{
			int i; // 329
			CUtlMemory<CSceneObject::Base(); // 112
			CUtlVectorBase<CSceneObject::Base(); // 368
			CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
			CUtlVectorBase<CSceneObject::GrowMemory(
					int num);  // 1198
			CUtlMemory<CSceneObject::operator[](
					int i);  // 602
			CUtlVectorBase<CSceneObject::Element(
				int i);  // 1201
			CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
							CSceneObject* const& src);  // 1201
			CUtlMemory<CSceneObject::NumAllocated(); // 1196
			CUtlVectorBase<CSceneObject::AddToTail(
					CSceneObject* const& src);  // 331
		}
		CUtlMemory<CSceneWorldObjectListChunk::Base(); // 112
		CUtlVectorBase<CSceneWorldObjectListChunk::Base(); // 102
		CUtlVectorBase<CSceneWorldObjectListChunk::begin(); // 327
		CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 104
		CUtlVectorBase<CSceneWorldObjectListChunk::end(); // 327
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 325
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 334
} /* size: 338, variables: 1, inline expansions: 6 (324 bytes) */

// <03551F14> ../scenesystem/sceneobject_methods.cpp:336
// variables: 6
// function calls: 11
void CSceneWorldObjectList::GetSceneObjectCount()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_338; // 338
	int nCount; // 340
	{
		CSceneWorldObjectListChunk* pList; // 341
		const CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& __for_range; // 15274
		const_iterator __for_begin; // 11771
		const_iterator __for_end; // 11771
		CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 105
		CUtlVectorBase<CSceneWorldObjectListChunk::end(); // 341
		CUtlMemory<CSceneWorldObjectListChunk::Base(); // 113
		CUtlVectorBase<CSceneWorldObjectListChunk::Base(); // 103
		CUtlVectorBase<CSceneWorldObjectListChunk::begin(); // 341
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 338
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 347
} /* size: 178, variables: 2, inline expansions: 6 (252 bytes) */

// <03551669> ../scenesystem/sceneobject_methods.cpp:349
// variables: 6
// function calls: 31
void CSceneWorldObjectList::FindChunkForObject(const CSceneObject* pObj)
{
	const int  nBoundsGroupIndex; // 351
	CSceneWorldObjectListChunk* pList; // 354
	{
		{
			int i; // 981
			CSceneWorldObjectListChunk::NumObjects(); // 366
			operator()(const class* __closure,
					CSceneWorldObjectListChunk* pNode); // 983
		}
		CUtlVectorBase<CSceneWorldObjectListChunk::FindMatchingElement<CSceneWorldObjectList::FindChunkForObject(
																class& f);  // 365
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 215
		CSceneWorldObjectListChunk::CSceneWorldObjectListChunk(); // 372
		CUtlMemory<CSceneWorldObjectListChunk::NumAllocated(); // 782
		CUtlMemory<CSceneWorldObjectListChunk::IsGrowable(); // 823
		CUtlMemory<CSceneWorldObjectListChunk::IsExternallyAllocated(); // 859
		CUtlMemory<CSceneWorldObjectListChunk::IsExternallyAllocated(); // 861
		CUtlMemory<CSceneWorldObjectListChunk::Grow(
			int num);  // 806
		CUtlVectorBase<CSceneWorldObjectListChunk::ResetDbgInfo(); // 824
		CUtlVectorBase<CSceneWorldObjectListChunk::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CSceneWorldObjectListChunk::GrowVector(
				int num);  // 1223
		CUtlMemory<CSceneWorldObjectListChunk::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneWorldObjectListChunk::Element(
			int i);  // 1097
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1097
		CUtlVectorBase<CSceneWorldObjectListChunk::ShiftElementsRight(
					int elem,
					int num);  // 1224
		CUtlMemory<CSceneWorldObjectListChunk::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneWorldObjectListChunk::Element(
			int i);  // 1225
		CopyConstruct<CSceneWorldObjectListChunk*>(CSceneWorldObjectListChunk** pMemory,
								CSceneWorldObjectListChunk* const& src);  // 1225
		CUtlVectorBase<CSceneWorldObjectListChunk::InsertBefore(
				int elem,
				CSceneWorldObjectListChunk* const& src);  // 1187
		CUtlVectorBase<CSceneWorldObjectListChunk::AddToHead(
				CSceneWorldObjectListChunk* const& src);  // 373
	}
	CSceneObject::GetBoundsGroupIndex(); // 351
	{
		int i; // 981
		CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 981
		CUtlMemory<CSceneWorldObjectListChunk::operator[](
				int i);  // 609
		CUtlVectorBase<CSceneWorldObjectListChunk::Element(
			int i);  // 983
		CSceneWorldObjectListChunk::IsFull(); // 356
		operator()(const class* __closure,
				const CSceneWorldObjectListChunk* pNode); // 983
	}
	CUtlVectorBase<CSceneWorldObjectListChunk::FindMatchingElement<CSceneWorldObjectList::FindChunkForObject(
																class& f);  // 354
} /* size: 603, variables: 2, inline expansions: 2 (73 bytes) */

// <035676D2> ../scenesystem/sceneobject_methods.cpp:382
// variables: 6
// function calls: 5
void CSceneWorldObjectList::FindOwningChunk(const CSceneObject* pObj, int& nIndex)
{
	const int  nBoundsGroupIndex; // 384
	const CSceneObjectReference_t* pRef; // 385
	{
		CSceneWorldObjectListChunk* pList; // 387
		CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& __for_range; // 44639
		iterator __for_begin; // 44649
		iterator __for_end; // 44659
		CUtlMemory<CSceneWorldObjectListChunk::Base(); // 112
		CUtlVectorBase<CSceneWorldObjectListChunk::Base(); // 102
		CUtlVectorBase<CSceneWorldObjectListChunk::begin(); // 387
		CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 104
		CUtlVectorBase<CSceneWorldObjectListChunk::end(); // 387
	}
} /* size: 0, variables: 2 */

// <035515E5> ../scenesystem/sceneobject_methods.cpp:382
// variables: 6
void CSceneWorldObjectList::FindOwningChunk(const CSceneObject* pObj, int& nIndex)
{
	const int  nBoundsGroupIndex; // 384
	const CSceneObjectReference_t* pRef; // 385
	{
		CSceneWorldObjectListChunk* pList; // 387
		CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& __for_range; // 44671
		iterator __for_begin; // 11726
		iterator __for_end; // 11726
	}
} /* size: 0, variables: 2 */

// <035512CB> ../scenesystem/sceneobject_methods.cpp:400
// variables: 5
// function calls: 9
void CSceneWorldObjectList::AddObjectToList(CSceneObject* pObj)
{
	const char   __FUNCTION__; // 20510
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_404; // 404
	CSceneWorldObjectListChunk* pChunk; // 411
	CSceneObjectReference_t* pRef; // 412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 402
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 404
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 417
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 417
} /* size: 0, variables: 4, inline expansions: 9 (285 bytes) */

// <03550E49> ../scenesystem/sceneobject_methods.cpp:419
// variables: 9
// function calls: 15
void CSceneWorldObjectList::RemoveObjectFromList(CSceneObject* pObj)
{
	const char   __FUNCTION__; // 20635
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_423; // 423
	int nIndex; // 430
	CSceneWorldObjectListChunk* pChunk; // 431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 421
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 423
	{
		CSceneWorldObjectListChunk* pList; // 387
		CUtlVector<CSceneWorldObjectListChunk*, CUtlMemory<CSceneWorldObjectListChunk*, int> >& __for_range; // 44639
		iterator __for_begin; // 44649
		iterator __for_end; // 44659
		CUtlMemory<CSceneWorldObjectListChunk::Base(); // 112
		CUtlVectorBase<CSceneWorldObjectListChunk::Base(); // 102
		CUtlVectorBase<CSceneWorldObjectListChunk::begin(); // 387
		CUtlVectorBase<CSceneWorldObjectListChunk::Count(); // 104
		CUtlVectorBase<CSceneWorldObjectListChunk::end(); // 387
	}
	CSceneWorldObjectList::FindOwningChunk(
			const CSceneObject* pObj,
			int& nIndex);  // 431
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 445
	VectorAligned::operator=(
			const VectorAligned& src);  // 67
	VectorAligned::operator=(
			const VectorAligned& src);  // 67
	CSceneObjectReference_t::operator=(
			const CSceneObjectReference_t  &);  // 437
} /* size: 0, variables: 4, inline expansions: 10 (450 bytes) */

// <035A5B59> ../scenesystem/sceneobject_methods.cpp:447
// variables: 2
// function calls: 3
void CSceneSystem::AddObjectToWorld(CSceneObject* pObject)
{
	const int  nPartition; // 452
	const CSceneWorld* pWorld; // 453
	CSceneObject::IsDeleted(); // 1039
	{
	}
	GetPartition(const CSceneObject* pObj); // 452
	CSceneSystem::AddObjectToWorld(
			CSceneObject* pObject);  // 447
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <03550E09> ../scenesystem/sceneobject_methods.cpp:447
// variables: 2
void CSceneSystem::AddObjectToWorld(CSceneObject* pObject)
{
	const int  nPartition; // 452
	const CSceneWorld* pWorld; // 453
} /* size: 0, variables: 2 */

// <03550758> ../scenesystem/sceneobject_methods.cpp:458
// variables: 3
// function calls: 22
void CSceneSystem::MoveObjectToWorld(CSceneObject* pObject, ISceneWorld* pNewWorld)
{
	CSceneObjectReference_t oldRef; // 466
	{
		const CSceneWorld* pWorld; // 472
		VectorAligned::operator=(
				const VectorAligned& src);  // 67
		VectorAligned::operator=(
				const VectorAligned& src);  // 67
		CSceneObjectReference_t::operator=(
				const CSceneObjectReference_t  &);  // 476
		CSceneObject::IsDeleted(); // 1039
		{
		}
		GetPartition(const CSceneObject* pObj); // 479
		CSceneWorld::IsFreed(); // 357
		CSceneWorld::VerifyWorld(); // 480
	}
	{
		CSceneWorld* pWorld; // 487
		{
		}
		GetPartition(const CSceneObject* pObj); // 497
		VectorAligned::operator=(
				const VectorAligned& src);  // 499
		VectorAligned::operator=(
				const VectorAligned& src);  // 500
		CSceneWorld::IsFreed(); // 357
		CSceneWorld::VerifyWorld(); // 502
	}
	VectorAligned::VectorAligned(); // 67
	VectorAligned::VectorAligned(); // 67
	CSceneObjectReference_t::CSceneObjectReference_t(); // 466
	CSceneWorld::IsFreed(); // 340
	{
	}
	CSceneWorld::GetPVS(); // 506
	Vector::Vector(); // 1462
	Vector::Vector(); // 1462
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 1463
	CSceneObject::RecomputePVS(
			IPVS* pPVS);  // 1453
	CSceneObject::RecomputePVS(
			IPVS* pPVS);  // 506
} /* size: 0, variables: 1, inline expansions: 10 (331 bytes) */

// <0355052E> ../scenesystem/sceneobject_methods.cpp:514
// variables: 2
// function calls: 6
void CSceneSystem::InitObject(CSceneObject* pNew, ESceneObjectFlags nFlags, ISceneWorld* pWorld)
{
	const char   __FUNCTION__; // 20380
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 517
	}
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
	CSceneSystem::SceneObject_PostFlagsUpdate(
					CSceneObject* pObj);  // 1908
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 522
} /* size: 0, variables: 1, inline expansions: 6 (350 bytes) */

// <0354FBE9> ../scenesystem/sceneobject_methods.cpp:528
// variables: 9
// function calls: 39
void CSceneSystem::SetObjectBoundsInfinite(CSceneObject* pObj)
{
	Vector vecWorldMins; // 532
	Vector vecWorldMaxes; // 533
	CSceneObjectReference_t* pRef; // 551
	const CSceneObjectExtraData_t* pExtra; // 555
	{
		bool bUpdate; // 537
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 540
		Vector::operator==(
				const Vector& src);  // 540
		CSceneWorld::IsFreed(); // 340
		{
		}
		CSceneWorld::GetPVS(); // 547
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 540
		Vector::operator==(
				const Vector& src);  // 540
	}
	{
		const ChildSceneObjectReference_t& childRef; // 559
		const CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1>& __for_range; // 13705
		const_iterator __for_begin; // 5771
		const_iterator __for_end; // 5771
		CUtlMemory<ChildSceneObjectReference_t, int>::Base(); // 113
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Base(); // 103
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::begin(); // 559
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 105
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::end(); // 559
	}
	CSceneObject::IsDeleted(); // 1039
	{
	}
	GetPartition(const CSceneObject* pObj); // 452
	CSceneSystem::AddObjectToWorld(
			CSceneObject* pObject);  // 447
	CSceneSystem::AddObjectToWorld(
			CSceneObject* pObject);  // 530
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 532
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 533
	VectorAligned::operator=(
			const Vector& src);  // 552
	VectorAligned::operator=(
			const Vector& src);  // 553
} /* size: 0, variables: 4, inline expansions: 8 (249 bytes) */

// <0354DE67> ../scenesystem/sceneobject_methods.cpp:569
// variables: 36
// function calls: 114
void CSceneSystem::SetObjectBounds(CSceneObject* pObj, const Vector& vecWorldMins, const Vector& vecWorldMaxes)
{
	const VectorAligned  vQuantizedBoundsMin; // 579
	const VectorAligned  vQuantizedBoundsMax; // 580
	bool bBoundsChanged; // 584
	const char   __FUNCTION__; // 20510
	const CSceneObjectExtraData_t* pExtra; // 622
	{
		CSceneWorld* pWorld; // 590
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 593
		}
		CSceneWorld::IsFreed(); // 328
		{
		}
		CSceneWorld::IsBusy(); // 593
		CSceneWorld::IsFreed(); // 357
		CSceneWorld::VerifyWorld(); // 594
		VectorAligned::operator=(
				const VectorAligned& src);  // 612
		VectorAligned::operator=(
				const VectorAligned& src);  // 613
		LightProbeVolumeBinding_t::Invalidate(); // 231
		CSceneObjectLightingCache_t::Invalidate(); // 617
		CSceneWorld::IsFreed(); // 340
		{
		}
		CSceneWorld::GetPVS(); // 609
		CSceneObject::IsDeleted(); // 1039
		{
		}
		GetPartition(const CSceneObject* pObj); // 452
		CSceneSystem::AddObjectToWorld(
				CSceneObject* pObject);  // 447
		CSceneSystem::AddObjectToWorld(
				CSceneObject* pObject);  // 599
		CSceneWorld::IsFreed(); // 357
		CSceneWorld::VerifyWorld(); // 604
	}
	{
		const ChildSceneObjectReference_t& childRef; // 626
		const CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1>& __for_range; // 13705
		const_iterator __for_begin; // 5771
		const_iterator __for_end; // 5771
		CUtlMemory<ChildSceneObjectReference_t, int>::Base(); // 113
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Base(); // 103
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::begin(); // 626
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 105
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::end(); // 626
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 630
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 630
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 630
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 571
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 574
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
			const Vector& rhs);  // 579
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
			const fltx4& b);  // 2287
	{
		fltx4 retVal; // 2039
		_mm_cmpge_ps(__m128 __A,
				__m128 __B);  // 2040
	}
	CmpGeSIMD<>(const fltx4& a,
			const fltx4& b);  // 2287
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2288
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2290
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2288
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 2291
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
			const fltx4& b);  // 2291
	FloorSIMD<>(const fltx4& val); // 579
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
			const Vector& rhs);  // 580
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 579
	{
		fltx4 retVal; // 2039
		_mm_cmpge_ps(__m128 __A,
				__m128 __B);  // 2040
	}
	CmpGeSIMD<>(const fltx4& a,
			const fltx4& b);  // 2256
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
			const fltx4& b);  // 2256
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2257
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2257
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2259
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 2260
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
			const fltx4& b);  // 2261
	CeilSIMD<>(const fltx4& val); // 580
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 580
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 202
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 202
	VectorAligned::operator!=(
			const VectorAligned& src);  // 585
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 202
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 202
	VectorAligned::operator!=(
			const VectorAligned& src);  // 586
} /* size: 0, variables: 5, inline expansions: 57 (627 bytes) */

// <0354DDD7> ../scenesystem/sceneobject_methods.cpp:635
void CSceneSystem::SetPVSFromClusterMembership(CSceneObject* pObj, const uint32* pClusters, int nClusterCount)
{
} /* size: 33 */

// <0354D953> ../scenesystem/sceneobject_methods.cpp:643
// variables: 3
// function calls: 15
void CSceneSystem::GetObjectBounds(const CSceneObject* pObj, Vector& vecMins, Vector& vecMaxes)
{
	const char   __FUNCTION__; // 20510
	CSceneWorld* pWorld; // 647
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 645
	}
	{
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 652
		Vector::operator=(
				const Vector& vOther);  // 652
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 653
		Vector::operator=(
				const Vector& vOther);  // 653
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 657
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 658
		_DebuggerBreakInlineExpressionWrapper(void); // 648
	}
} /* size: 0, variables: 2 */

// <0354D16C> ../scenesystem/sceneobject_methods.cpp:663
// variables: 3
// function calls: 28
void CSceneSystem::CreateSceneObject(ESceneObjectFlags nFlags, ISceneWorld* pWorld, SceneObjectCreationFlags_t nCreationFlags)
{
	const char   __FUNCTION__; // 20559
	CSceneObject* pNew; // 667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 665
	}
	CSceneWorld::IsFreed(); // 328
	{
	}
	CSceneWorld::IsBusy(); // 665
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneSystem::ConstructSceneObject(
				CSceneObject* pObj);  // 1430
	CSceneObject::CSceneObject(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CSceneObject>::GetObject(); // 667
	CSceneObject::InitObject(
			ISceneWorld* pWorld,
			ESceneObjectFlags nFlags);  // 671
	CSceneObject::SetIsFromPool(); // 672
	{
	}
	CSceneObject::CreateDefaultPVSNode(); // 675
} /* size: 0, variables: 2, inline expansions: 28 (1395 bytes) */

// <0354CEEF> ../scenesystem/sceneobject_methods.cpp:680
// variables: 3
// function calls: 4
void CSceneSystem::CreateSceneObject(ISceneObjectDesc* pDesc, ESceneObjectFlags nFlags, ISceneWorld* pWorld, SceneObjectCreationFlags_t nCreationFlags)
{
	const char   __FUNCTION__; // 20559
	CSceneObject* pNew; // 684
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 682
	}
	CSceneWorld::IsFreed(); // 328
	{
	}
	CSceneWorld::IsBusy(); // 682
	CSceneObject::InitObject(
			ISceneWorld* pWorld,
			ESceneObjectFlags nFlags);  // 687
	{
	}
	CSceneObject::CreateDefaultPVSNode(); // 692
} /* size: 0, variables: 2, inline expansions: 4 (153 bytes) */

// <0354C5D9> ../scenesystem/sceneobject_methods.cpp:698
// variables: 8
// function calls: 29
void CSceneSystem::CreateSceneObjectFromBuffersInternal(ESceneObjectFlags nFlags, ISceneWorld* pWorld, VertexBufferHandle_t hVB, IndexBufferHandle_t hIB, HMaterial hMaterial, int nVertices, int nIndices, const Vector& vBoundsMin, const Vector& vBoundsMax, RenderPrimitiveType_t nPrimitiveType, RenderMeshDrawPrimitiveFlags_t nRenderMeshDrawPrimitiveFlags, const char* pDescName, bool bOwnVBAndIB)
{
	ISceneObjectDesc* pDesc; // 713
	const char   __FUNCTION__; // 21007
	CSceneObject* pSceneObject; // 719
	CMeshInstance* pMeshInstance; // 725
	bool bAlphaBlendedMaterial; // 731
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 714
	}
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 722
	CSceneSystem::GetFinishRenderingViewsCounter(); // 725
	{
	}
	CSceneObject::SetMeshInstanceData(
				CMeshInstance* pMeshInstance,
				MeshInstanceOwnership_t nOwnership);  // 726
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 732
	{
		function<void(CSceneObject*)>* fn; // 279
		CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16>& __for_range; // 53067
		iterator __for_begin; // 53077
		iterator __for_end; // 53087
		CUtlMemory<std::function<void(CSceneObject::Base()>*, int>* this); // 112
		CUtlVectorBase<std::function<void(CSceneObject::Base()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 102
		CUtlVectorBase<std::function<void(CSceneObject::begin()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		CUtlVectorBase<std::function<void(CSceneObject::Count()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*) this); // 104
		CUtlVectorBase<std::function<void(CSceneObject::end()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		_Function_base::_M_empty(); // 591
		function<void(CSceneObject::operator(
				CSceneObject* __args#0);  // 281
	}
	CSceneSystem::SceneObject_UpdateFlagsBasedOnMaterial(
						CSceneObject* pObject);  // 1734
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 745
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
	CSceneSystem::SceneObject_PostFlagsUpdate(
					CSceneObject* pObj);  // 1908
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 746
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
	CSceneSystem::SceneObject_PostFlagsUpdate(
					CSceneObject* pObj);  // 1908
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1981
	CSceneObject::EnableRendering(); // 747
} /* size: 0, variables: 5, inline expansions: 20 (1253 bytes) */

// <035A5E18> ../scenesystem/sceneobject_methods.cpp:752
// variable: 1
// function calls: 2
void CSceneSystem::CreateSceneObjectFromBuffers(ESceneObjectFlags nFlags, ISceneWorld* pWorld, VertexBufferHandle_t hVB, IndexBufferHandle_t hIB, HMaterial hMaterial, int nVertices, int nIndices, const Vector& vBoundsMin, const Vector& vBoundsMax, RenderPrimitiveType_t nPrimitiveType, RenderMeshDrawPrimitiveFlags_t nRenderMeshDrawPrimitiveFlags, const char* pDescName, bool bOwnVBAndIB)
{
	CSceneObject* pSceneObject; // 770
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 770
} /* size: 93, variables: 1, inline expansions: 2 (40 bytes) */

// <0354C50A> ../scenesystem/sceneobject_methods.cpp:752
// variable: 1
void CSceneSystem::CreateSceneObjectFromBuffers(ESceneObjectFlags nFlags, ISceneWorld* pWorld, VertexBufferHandle_t hVB, IndexBufferHandle_t hIB, HMaterial hMaterial, int nVertices, int nIndices, const Vector& vBoundsMin, const Vector& vBoundsMax, RenderPrimitiveType_t nPrimitiveType, RenderMeshDrawPrimitiveFlags_t nRenderMeshDrawPrimitiveFlags, const char* pDescName, bool bOwnVBAndIB)
{
	CSceneObject* pSceneObject; // 770
} /* size: 0, variables: 1 */

// <0354BF36> ../scenesystem/sceneobject_methods.cpp:787
// variables: 3
// function calls: 17
void CSceneSystem::CreateSceneObjectFromBuffers(ISceneWorld* pWorld, VertexBufferHandle_t hVB, IndexBufferHandle_t hIB, HMaterial hMaterial, int nVertices, int nIndices, const Vector& vBoundsMin, const Vector& vBoundsMax, RenderPrimitiveType_t nPrimitiveType, const char* pDescName, bool bOwnVBAndIB)
{
	CSceneObject* pSceneObject; // 794
	bool bTranslucent; // 809
	bool bDoNotCastShadows; // 810
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 794
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator->(); // 809
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 809
	IMaterial2::GetIntAttributeOrDefault(
				CUtlStringToken name,
				int nDefault);  // 809
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator->(); // 810
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 810
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 817
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
	CSceneSystem::SceneObject_PostFlagsUpdate(
					CSceneObject* pObj);  // 1908
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 821
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1934
	CSceneObject::ChangeFlags(
			ESceneObjectFlags nNewFlags,
			ESceneObjectFlags nNewFlagsMask);  // 813
} /* size: 0, variables: 3, inline expansions: 17 (597 bytes) */

// <0354BC37> ../scenesystem/sceneobject_methods.cpp:827
// variable: 1
// function calls: 10
void CSceneSystem::CreateSceneObjectFromStaticBuffers(SceneObjectCreationInfo_t& creationInfo)
{
	CMeshBuilderSceneObject* pNew; // 829
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 830
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 836
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
	CSceneSystem::SceneObject_PostFlagsUpdate(
					CSceneObject* pObj);  // 1908
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 837
} /* size: 423, variables: 1, inline expansions: 10 (547 bytes) */

// <0354B83F> ../scenesystem/sceneobject_methods.cpp:847
// variable: 1
// function calls: 11
void CSceneSystem::CreateAnimatableSceneObjectFromBuffers(ISceneWorld* pSceneWorld, HMaterial hMaterial, SceneObjectBuffers_t& data, ESceneObjectFlags nFlags, bool bOwnVBAndIB)
{
	CSceneAnimatableObject* pSceneObject; // 849
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 849
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 770
	CSceneSystem::CreateSceneObjectFromBuffers(
					ESceneObjectFlags nFlags,
					ISceneWorld* pWorld,
					VertexBufferHandle_t hVB,
					IndexBufferHandle_t hIB,
					HMaterial hMaterial,
					int nVertices,
					int nIndices,
					const Vector& vBoundsMin,
					const Vector& vBoundsMax,
					RenderPrimitiveType_t nPrimitiveType,
					RenderMeshDrawPrimitiveFlags_t nRenderMeshDrawPrimitiveFlags,
					const char* pDescName,
					bool bOwnVBAndIB);  // 849
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
	CSceneSystem::SceneObject_PostFlagsUpdate(
					CSceneObject* pObj);  // 1908
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1981
	CSceneObject::EnableRendering(); // 865
} /* size: 380, variables: 1, inline expansions: 11 (485 bytes) */

// <0354B150> ../scenesystem/sceneobject_methods.cpp:872
// variables: 4
// function calls: 21
void CSceneSystem::DeleteObjectForReal(CSceneObject* pObj)
{
	const char   __FUNCTION__; // 20608
	CSceneWorld* pWorld; // 894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 883
	}
	{
		CSceneWorld::IsFreed(); // 357
		CSceneWorld::VerifyWorld(); // 897
		CSceneObject::IsDeleted(); // 1039
		{
		}
		GetPartition(const CSceneObject* pObj); // 898
		CSceneWorld::IsFreed(); // 357
		CSceneWorld::VerifyWorld(); // 899
		_DebuggerBreakInlineExpressionWrapper(void); // 898
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 874
	CSceneObject::IsDeleted(); // 883
	CSceneObject::GetOwnsMeshInstanceData(); // 884
	CSceneObject::DestroyRayTraceInstance(); // 889
	CSceneObjectLightingCache_t::~CSceneObjectLightingCache_t(); // 906
	CSceneObject::GetIsFromPool(); // 909
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CSceneObject>::PutObject(
			CSceneObject* pInfo);  // 913
	{
	}
	{
		CMeshInstance* pMeshInstanceToDelete; // 1795
		CSceneObject::GetMeshInstanceData(); // 1795
	}
	{
	}
	CSceneObject::DestroyMeshInstanceData(); // 886
} /* size: 0, variables: 2, inline expansions: 13 (418 bytes) */

// <035A6118> ../scenesystem/sceneobject_methods.cpp:930
// variable: 1
// function calls: 3
void CSceneSystem::PerformQueuedDeletesForPartition(const PartitionDeletionList_t* pListOfObjectsInTheSamePartition)
{
	{
		int j; // 932
		CUtlVectorBase<CSceneObject::Count(); // 932
		CUtlMemory<CSceneObject::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneObject::operator[](
				int i);  // 934
	}
} /* size: 0 */

// <0354B109> ../scenesystem/sceneobject_methods.cpp:930
// variable: 1
void CSceneSystem::PerformQueuedDeletesForPartition(const PartitionDeletionList_t* pListOfObjectsInTheSamePartition)
{
	{
		int j; // 932
	}
} /* size: 0 */

// <035A60D2> ../scenesystem/sceneobject_methods.cpp:938
void CSceneSystem::PerformPreDeletionWork()
{
} /* size: 9 */

// <0354A8BD> ../scenesystem/sceneobject_methods.cpp:945
// variables: 2
// function calls: 25
void CSceneSystem::DeleteSceneObjectAtFrameEnd(CSceneObject* pObject)
{
	CSceneWorld* pWorld; // 950
	CSceneObject::GetWorld(); // 950
	CSceneWorld::IsFreed(); // 357
	CSceneWorld::VerifyWorld(); // 954
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
					CSceneObject* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CSceneObject::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CSceneObject::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CSceneObject::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CSceneObject::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CSceneObject::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CSceneObject::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<CSceneObject::PushItem(
		CSceneObject* const& init);  // 955
} /* size: 0, variables: 1, inline expansions: 18 (1078 bytes) */

// <03548DEF> ../scenesystem/sceneobject_methods.cpp:962
// variables: 9
// function calls: 117
void CSceneSystem::PerformQueuedDeletes(CSceneWorld* pWorldMatch)
{
	bool bDidSomething; // 972
	{
		PartitionDeletionList_t objectsToDelete; // 980
		{
			int i; // 982
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_984; // 984
				{
					CUtlVectorFixedGrowable<CSceneObject*, 64> objectsToNotDelete; // 987
					{
						int n; // 988
						CUtlVectorBase<CSceneObject::Count(); // 988
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
								CSceneObject* const& src);  // 992
						CUtlMemory<CSceneObject::operator[](
								int i);  // 588
						CUtlVectorBase<CSceneObject::operator[](
								int i);  // 990
						CSceneObject::GetWorld(); // 990
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
								CSceneObject* const& src);  // 997
					}
					{
						int n; // 1002
						CUtlVectorBase<CSceneObject::Count(); // 1002
						CUtlMemory<CSceneObject::operator[](
								int i);  // 602
						CUtlVectorBase<CSceneObject::Element(
							int i);  // 1201
						CopyConstruct<CSceneObject*>(CSceneObject** pMemory,
										CSceneObject* const& src);  // 1201
						CUtlMemory<CSceneObject::NumAllocated(); // 1196
						CUtlMemory<CSceneObject::Base(); // 112
						CUtlVectorBase<CSceneObject::Base(); // 368
						CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 824
						CUtlVectorBase<CSceneObject::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<CSceneObject::AddToTail(
								CSceneObject* const& src);  // 1004
						CUtlMemory<CSceneObject::operator[](
								int i);  // 588
						CUtlVectorBase<CSceneObject::operator[](
								int i);  // 1004
					}
					CUtlMemory<CSceneObject::CUtlMemory(
							CSceneObject** pMemory,
							int numElements,
							bool bGrowable,
							uint32 nGrowable_GrowSize);  // 197
					CUtlMemory<CSceneObject::EnsureCapacity(
							int num);  // 199
					CUtlMemoryFixedGrowable_Base<CSceneObject::CUtlMemoryFixedGrowable_Base(
									CSceneObject** pFixedMemory,
									int nFixedElements,
									int nGrowSize,
									int nInitAllocationCount);  // 228
					AlignedByteArrayExplicit_t<64, CSceneObject::AlignedByteArrayExplicit_t(); // 1597
					AlignedByteArray_t<64, CSceneObject::AlignedByteArray_t(); // 228
					AlignedByteArrayExplicit_t<64, CSceneObject::Base(); // 231
					CUtlMemoryFixedGrowable<CSceneObject::CUtlMemoryFixedGrowable(
								int nGrowSize,
								int nInitSize);  // 527
					CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 530
					CUtlVectorBase<CSceneObject::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 484
					CUtlVectorFixedGrowable<CSceneObject::CUtlVectorFixedGrowable(
								int growSize);  // 987
					CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
					AlignedByteArrayExplicit_t<64, CSceneObject::Base(); // 237
					CUtlMemoryFixedGrowable_Base<CSceneObject::Purge_FixedGrowable(
								CSceneObject** pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 203
					CUtlMemoryFixedGrowable_Base<CSceneObject::Purge_FixedGrowable(
								CSceneObject** pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 237
					CUtlMemoryFixedGrowable<CSceneObject::Purge(
						int numElements);  // 1799
					CUtlMemory<CSceneObject::Base(); // 112
					CUtlVectorBase<CSceneObject::Base(); // 368
					CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 1800
					CUtlVectorBase<CSceneObject::Purge(); // 1001
					CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
					AlignedByteArrayExplicit_t<64, CSceneObject::Base(); // 237
					CUtlMemory<CSceneObject::IsExternallyAllocated(); // 577
					CUtlMemory<CSceneObject::ConvertToExternalMemory(
								CSceneObject** pMemory,
								int numElements,
								int nCopyElements,
								bool bSetGrowable,
								uint32 nGrowable_GrowSize);  // 207
					CUtlMemoryFixedGrowable_Base<CSceneObject::Purge_FixedGrowable(
								CSceneObject** pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 203
					CUtlMemoryFixedGrowable_Base<CSceneObject::Purge_FixedGrowable(
								CSceneObject** pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 237
					CUtlMemoryFixedGrowable<CSceneObject::Purge(
						int numElements);  // 1799
					CUtlMemory<CSceneObject::Base(); // 112
					CUtlVectorBase<CSceneObject::Base(); // 368
					CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 1800
					CUtlVectorBase<CSceneObject::Purge(); // 560
					ValidateAlignment<CSceneObject*>(void); // 508
					CUtlMemory<CSceneObject::Purge(); // 903
					CUtlMemory<CSceneObject::Purge(); // 510
					CUtlMemory<CSceneObject::~CUtlMemory(); // 191
					CUtlMemoryFixedGrowable_Base<CSceneObject::~CUtlMemoryFixedGrowable_Base(); // 223
					CUtlMemoryFixedGrowable<CSceneObject::~CUtlMemoryFixedGrowable(); // 562
					CUtlVectorBase<CSceneObject::~CUtlVectorBase(); // 478
					CUtlVectorFixedGrowable<CSceneObject::~CUtlVectorFixedGrowable(); // 1006
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
						int nLineNumber);  // 984
				CUtlVectorBase<CSceneObject::Count(); // 985
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1007
			}
		}
		{
			int i; // 1020
			CUtlVectorBase<CSceneObject::Count(); // 1022
			{
				int j; // 932
				CUtlVectorBase<CSceneObject::Count(); // 932
				CUtlMemory<CSceneObject::operator[](
						int i);  // 595
				CUtlVectorBase<CSceneObject::operator[](
						int i);  // 934
			}
			CSceneSystem::PerformQueuedDeletesForPartition(
							const PartitionDeletionList_t* pListOfObjectsInTheSamePartition);  // 1024
		}
		AlignedByteArrayExplicit_t<64, CSceneObject::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<64, CSceneObject::AlignedByteArray_t(); // 228
		CUtlMemory<CSceneObject::CUtlMemory(
				CSceneObject** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CSceneObject::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CSceneObject::CUtlMemoryFixedGrowable_Base(
						CSceneObject** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<64, CSceneObject::Base(); // 231
		CUtlMemoryFixedGrowable<CSceneObject::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 530
		CUtlVectorBase<CSceneObject::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CSceneObject::CUtlVectorFixedGrowable(
					int growSize);  // 980
		CUtlVectorBase<CSceneObject::RemoveAll(); // 1798
		CUtlMemoryFixedGrowable_Base<CSceneObject::Purge_FixedGrowable(
					CSceneObject** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CSceneObject::Purge_FixedGrowable(
					CSceneObject** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<64, CSceneObject::Base(); // 237
		CUtlMemoryFixedGrowable<CSceneObject::Purge(
			int numElements);  // 1799
		CUtlMemory<CSceneObject::Base(); // 112
		CUtlVectorBase<CSceneObject::Base(); // 368
		CUtlVectorBase<CSceneObject::ResetDbgInfo(); // 1800
		CUtlVectorBase<CSceneObject::Purge(); // 560
		CUtlMemory<CSceneObject::IsExternallyAllocated(); // 905
		CUtlMemory<CSceneObject::Purge(); // 903
		CUtlMemory<CSceneObject::Purge(); // 510
		ValidateAlignment<CSceneObject*>(void); // 508
		CUtlMemory<CSceneObject::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CSceneObject::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CSceneObject::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CSceneObject::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CSceneObject::~CUtlVectorFixedGrowable(); // 980
	}
	CSceneSystem::PerformPreDeletionWork(); // 964
} /* size: 1560, variables: 1, inline expansions: 1 (12 bytes) */

// <03547E1C> ../scenesystem/sceneobject_methods.cpp:1031
// variables: 11
// function calls: 58
void CSceneSystem::DeleteSceneObject(CSceneObject* pObj)
{
	CSceneObjectExtraData_t* pExtra; // 1039
	int nSettings; // 1063
	const char   __FUNCTION__; // 20559
	CSceneWorld* pWorld; // 1074
	{
		CSceneObject* pParent; // 1056
		{
			int i; // 1042
			{
				CSceneObject* pChild; // 1044
				CUtlMemory<ChildSceneObjectReference_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::operator[](
						int i);  // 1044
			}
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 1042
		}
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::RemoveAll(); // 1798
		CUtlMemory<ChildSceneObjectReference_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<ChildSceneObjectReference_t, int>::ConvertToExternalMemory(
					ChildSceneObjectReference_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<ChildSceneObjectReference_t, int>::Purge_FixedGrowable(
					ChildSceneObjectReference_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<ChildSceneObjectReference_t, int>::Purge_FixedGrowable(
					ChildSceneObjectReference_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>::Base(); // 237
		CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Purge(); // 1054
		CSceneObject::RemoveChild(
				CSceneObject* pChild);  // 1059
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1070
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1084
	}
	{
		int nNumSubPartition; // 1105
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1106; // 1106
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
		CSceneSystem::SceneObject_PostFlagsUpdate(
						CSceneObject* pObj);  // 1908
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 2152
		CSceneObject::UnscheduleDirtyUpdate(); // 2150
		CSceneObject::UnscheduleDirtyUpdate(); // 1101
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
		CSceneSystem::SceneObject_PostFlagsUpdate(
						CSceneObject* pObj);  // 1908
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1940
		CSceneObject::SetFlags(
			ESceneObjectFlags nFlagsToOR);  // 1103
		CSceneObject::IsDeleted(); // 1039
		{
		}
		GetPartition(const CSceneObject* pObj); // 1105
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
				int nLineNumber);  // 1106
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
				CSceneObject* const& src);  // 1107
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1108
	}
	CSceneSystem::GetObjectSettings(
				const CSceneObject* pObj);  // 1063
	CSceneObject::IsDeleted(); // 1070
	CSceneWorld::IsFreed(); // 357
	CSceneWorld::VerifyWorld(); // 1077
	CSceneObject::DestroyRayTraceInstance(); // 1080
	CSceneObject::HasFlags(
		ESceneObjectFlags nFlags);  // 1084
	CSceneWorld::IsFreed(); // 357
	CSceneWorld::VerifyWorld(); // 1087
	CSceneWorld::IsFreed(); // 357
	CSceneWorld::VerifyWorld(); // 1092
	Plat_IsInDebugSession(void); // 1067
} /* size: 0, variables: 4, inline expansions: 11 (129 bytes) */

// <03547819> ../scenesystem/sceneobject_methods.cpp:1114
// variables: 2
// function calls: 20
void CSceneSystem::GetSceneObjectDesc(const char* pName)
{
	UtlHashHandle_t nHashHandle; // 1116
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 249
	}
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 254
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 255
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 609
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	CUtlHash<CUtlHashDict<ISceneObjectDesc::DoFind(
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 280
	CUtlHash<CUtlHashDict<ISceneObjectDesc::Find(
		const Entry_t& src);  // 330
	CUtlHashDict<ISceneObjectDesc::Find(
		const char* pName);  // 1116
	CUtlHash<CUtlHashDict<ISceneObjectDesc::GetBucketIndex(
			UtlHashHandle_t handle);  // 403
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 406
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 406
	CUtlHash<CUtlHashDict<ISceneObjectDesc::operator[](
			UtlHashHandle_t handle);  // 127
	CUtlHashDict<ISceneObjectDesc::Element(
		UtlHashHandle_t handle);  // 1123
} /* size: 0, variables: 1, inline expansions: 19 (1068 bytes) */

// <03546F87> ../scenesystem/sceneobject_methods.cpp:1128
// variable: 1
// function calls: 29
void CSceneSystem::AddSceneObjectType(const char* pName, ISceneObjectDesc* pDescriptor)
{
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 249
	}
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 254
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 255
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 609
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	CUtlHash<CUtlHashDict<ISceneObjectDesc::DoFind(
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 312
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 315
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 319
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::NumAllocated(); // 1196
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::Base(); // 112
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Base(); // 368
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::ResetDbgInfo(); // 824
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsGrowable(); // 823
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::GrowMemory(
			int num);  // 1198
	CopyConstruct<CUtlHashDict<ISceneObjectDesc*>::Entry_t>(Entry_t* pMemory,
								const Entry_t& src);  // 1201
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 1201
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::AddToTail(
			const Entry_t& src);  // 319
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 321
	CUtlHash<CUtlHashDict<ISceneObjectDesc::Insert(
		const Entry_t& src,
		bool* pDidInsert);  // 286
	CUtlHashDict<ISceneObjectDesc::Insert(
		const char* pName,
		ISceneObjectDesc* const& element);  // 1135
} /* size: 0, inline expansions: 28 (2383 bytes) */

// <035463F9> ../scenesystem/sceneobject_methods.cpp:1139
// variables: 3
// function calls: 39
void CSceneSystem::RemoveSceneObjectType(const char* pName)
{
	UtlHashHandle_t handle; // 1141
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 249
	}
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 254
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 255
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 609
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	CUtlHash<CUtlHashDict<ISceneObjectDesc::DoFind(
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 280
	CUtlHash<CUtlHashDict<ISceneObjectDesc::Find(
		const Entry_t& src);  // 330
	CUtlHashDict<ISceneObjectDesc::Find(
		const char* pName);  // 1141
	CUtlHash<CUtlHashDict<ISceneObjectDesc::GetBucketIndex(
			UtlHashHandle_t handle);  // 155
	CUtlHash<CUtlHashDict<ISceneObjectDesc::GetKeyDataIndex(
			UtlHashHandle_t handle);  // 156
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 162
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 164
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 164
	CUtlHash<CUtlHashDict<ISceneObjectDesc::IsValidHandle(
			UtlHashHandle_t handle);  // 174
	CUtlHashDict<ISceneObjectDesc::IsValidHandle(
			UtlHashHandle_t handle);  // 1142
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 406
	CUtlHash<CUtlHashDict<ISceneObjectDesc::operator[](
			UtlHashHandle_t handle);  // 127
	CUtlHashDict<ISceneObjectDesc::Element(
		UtlHashHandle_t handle);  // 1144
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 249
	}
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 254
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 255
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 609
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	CUtlHash<CUtlHashDict<ISceneObjectDesc::DoFind(
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 280
	CUtlHash<CUtlHashDict<ISceneObjectDesc::Find(
		const Entry_t& src);  // 330
	CUtlHashDict<ISceneObjectDesc::Find(
		const char* pName);  // 208
	CUtlHashDict<ISceneObjectDesc::Remove(
		const char* search);  // 1145
} /* size: 0, variables: 1, inline expansions: 37 (2490 bytes) */

// <035A5C73> ../scenesystem/sceneobject_methods.cpp:1151
// function calls: 4
void CSceneObject::Init()
{
	CUtlStringToken::CUtlStringToken(); // 1170
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 1178
	matrix3x4_t::SetToIdentity(); // 1182
} /* size: 152, inline expansions: 4 (35 bytes) */

// <035463E0> ../scenesystem/sceneobject_methods.cpp:1151
void CSceneObject::Init()
{
} /* size: 0 */

// <035462C9> ../scenesystem/sceneobject_methods.cpp:1185
// function call: 1
void CSceneObject::Term()
{
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 1209
} /* size: 239, inline expansions: 1 (9 bytes) */

// <03567530> ../scenesystem/sceneobject_methods.cpp:1216
// function calls: 5
void CSceneSystem::ConstructSceneObject(CSceneObject* pObj)
{
	CUtlStringToken::CUtlStringToken(); // 1170
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 1178
	matrix3x4_t::SetToIdentity(); // 1182
	CSceneObject::Init(); // 1218
} /* size: 152, inline expansions: 5 (183 bytes) */

// <035462A3> ../scenesystem/sceneobject_methods.cpp:1216
void CSceneSystem::ConstructSceneObject(CSceneObject* pObj)
{
} /* size: 0 */

// <035A6212> ../scenesystem/sceneobject_methods.cpp:1221
void CSceneSystem::DestructSceneObject(CSceneObject* pObj)
{
} /* size: 12 */

// <0352A3DE> ../scenesystem/sceneobject_methods.cpp:1228
inline fltx4 ConditionalProduct<true, true, true, true>(fltx4 fl4A, fltx4 fl4B)
{
} /* size: 0 */

// <0352A384> ../scenesystem/sceneobject_methods.cpp:1228
inline fltx4 ConditionalProduct<true, true, true, false>(fltx4 fl4A, fltx4 fl4B)
{
} /* size: 0 */

// <0352A2D0> ../scenesystem/sceneobject_methods.cpp:1228
inline fltx4 ConditionalProduct<true, false, true, false>(fltx4 fl4A, fltx4 fl4B)
{
} /* size: 0 */

// <0352A10E> ../scenesystem/sceneobject_methods.cpp:1228
inline fltx4 ConditionalProduct<false, false, true, false>(fltx4 fl4A, fltx4 fl4B)
{
} /* size: 0 */

// <03529E98> ../scenesystem/sceneobject_methods.cpp:1228
inline fltx4 ConditionalProduct<false, false, false, false>(fltx4 fl4A, fltx4 fl4B)
{
} /* size: 0 */

// <0352EC99> ../scenesystem/sceneobject_methods.cpp:1246
// variables: 24
void SetSceneObjectTransformsFastInternal<true, true, true, true, true>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
	int nNumToDo; // 1252
	fltx4 fl4RadiusScale; // 1253
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
	}
} /* size: 0, variables: 2 */

// <0352EA79> ../scenesystem/sceneobject_methods.cpp:1246
// variables: 24
void SetSceneObjectTransformsFastInternal<true, true, true, true, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
	int nNumToDo; // 1252
	fltx4 fl4RadiusScale; // 1253
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
	}
} /* size: 0, variables: 2 */

// <0352E639> ../scenesystem/sceneobject_methods.cpp:1246
// variables: 24
void SetSceneObjectTransformsFastInternal<true, true, false, true, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
	int nNumToDo; // 1252
	fltx4 fl4RadiusScale; // 1253
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
	}
} /* size: 0, variables: 2 */

// <0352E1F9> ../scenesystem/sceneobject_methods.cpp:1246
// variables: 24
void SetSceneObjectTransformsFastInternal<true, true, false, false, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
	int nNumToDo; // 1252
	fltx4 fl4RadiusScale; // 1253
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
	}
} /* size: 0, variables: 2 */

// <0352D539> ../scenesystem/sceneobject_methods.cpp:1246
// variables: 24
void SetSceneObjectTransformsFastInternal<true, false, false, false, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
	int nNumToDo; // 1252
	fltx4 fl4RadiusScale; // 1253
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
	}
} /* size: 0, variables: 2 */

// <0352BBB3> ../scenesystem/sceneobject_methods.cpp:1246
// variables: 24
void SetSceneObjectTransformsFastInternal<false, false, false, false, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
	int nNumToDo; // 1252
	fltx4 fl4RadiusScale; // 1253
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
	}
} /* size: 0, variables: 2 */

// <03531979> ../scenesystem/sceneobject_methods.cpp:1392
void SetSceneObjectTransformsFastInternal<true, true, true, true>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
} /* size: 0 */

// <035318A1> ../scenesystem/sceneobject_methods.cpp:1392
void SetSceneObjectTransformsFastInternal<true, true, false, true>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
} /* size: 0 */

// <035317C9> ../scenesystem/sceneobject_methods.cpp:1392
void SetSceneObjectTransformsFastInternal<true, true, false, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
} /* size: 0 */

// <03531541> ../scenesystem/sceneobject_methods.cpp:1392
void SetSceneObjectTransformsFastInternal<true, false, false, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
} /* size: 0 */

// <03531031> ../scenesystem/sceneobject_methods.cpp:1392
void SetSceneObjectTransformsFastInternal<false, false, false, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXScale, const fltx4* pYScale, const fltx4* pZScale)
{
} /* size: 0 */

// <0353483B> ../scenesystem/sceneobject_methods.cpp:1414
void SetSceneObjectTransformsFastInternal<true, true>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXAxisScale, const fltx4* pYAxisScale, const fltx4* pZAxisScale)
{
} /* size: 0 */

// <03534777> ../scenesystem/sceneobject_methods.cpp:1414
void SetSceneObjectTransformsFastInternal<true, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXAxisScale, const fltx4* pYAxisScale, const fltx4* pZAxisScale)
{
} /* size: 0 */

// <035345EF> ../scenesystem/sceneobject_methods.cpp:1414
void SetSceneObjectTransformsFastInternal<false, false>(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXAxisScale, const fltx4* pYAxisScale, const fltx4* pZAxisScale)
{
} /* size: 0 */

// <0353B34B> ../scenesystem/sceneobject_methods.cpp:1446
// variables: 483
// function calls: 648
void CSceneSystem::SetSceneObjectTransformsFast(CSceneObject** pObjectList, int nNumObjects, const FourVectors* pXYZOrigins, const fltx4* pRadii, const FourVectors* pTints, const fltx4* pRotations, const fltx4* pYaws, const fltx4* pPitches, float flRadiusScale, const fltx4* pXAxisScale, const fltx4* pYAxisScale, const fltx4* pZAxisScale)
{
	SetSceneObjectTransformsFastInternal<true, true, true, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1425
	SetSceneObjectTransformsFastInternal<true, true, false, false>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1437
	SetSceneObjectTransformsFastInternal<true, true, false, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1431
	SetSceneObjectTransformsFastInternal<true, true>(CSceneObject** pObjectList,
							int nNumObjects,
							const FourVectors* pXYZOrigins,
							const fltx4* pRadii,
							const FourVectors* pTints,
							const fltx4* pRotations,
							const fltx4* pYaws,
							const fltx4* pPitches,
							float flRadiusScale,
							const fltx4* pXAxisScale,
							const fltx4* pYAxisScale,
							const fltx4* pZAxisScale);  // 1457
	SetSceneObjectTransformsFastInternal<true, false, true, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1425
	SetSceneObjectTransformsFastInternal<true, false, false, false>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1437
	SetSceneObjectTransformsFastInternal<true, false, false, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1431
	SetSceneObjectTransformsFastInternal<true, false>(CSceneObject** pObjectList,
								int nNumObjects,
								const FourVectors* pXYZOrigins,
								const fltx4* pRadii,
								const FourVectors* pTints,
								const fltx4* pRotations,
								const fltx4* pYaws,
								const fltx4* pPitches,
								float flRadiusScale,
								const fltx4* pXAxisScale,
								const fltx4* pYAxisScale,
								const fltx4* pZAxisScale);  // 1462
	SetSceneObjectTransformsFastInternal<false, true, true, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1425
	SetSceneObjectTransformsFastInternal<false, true, false, false>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1437
	SetSceneObjectTransformsFastInternal<false, true, false, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1431
	SetSceneObjectTransformsFastInternal<false, true>(CSceneObject** pObjectList,
								int nNumObjects,
								const FourVectors* pXYZOrigins,
								const fltx4* pRadii,
								const FourVectors* pTints,
								const fltx4* pRotations,
								const fltx4* pYaws,
								const fltx4* pPitches,
								float flRadiusScale,
								const fltx4* pXAxisScale,
								const fltx4* pYAxisScale,
								const fltx4* pZAxisScale);  // 1470
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 1253
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3397
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3394
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3386
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
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
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3388
		Mod2SIMDPositiveInput<>(const fltx4& val); // 3396
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		_Sin01SIMD<>(const fltx4& val); // 3399
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 2095
			_mm_cmple_ps(__m128 __A,
					__m128 __B);  // 2096
		}
		CmpLeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		fabs<>(const fltx4& x); // 3395
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 3401
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3403
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3406
		SinCosSIMD<>(fltx4& sine,
				fltx4& cosine,
				const fltx4& radians);  // 1269
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1289
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1333
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1336
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1339
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1343
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1344
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1345
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1353
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1354
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1355
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1363
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1364
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1365
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1373
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1374
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1375
	}
	SetSceneObjectTransformsFastInternal<false, false, true, true, true>(CSceneObject** pObjectList,
										int nNumObjects,
										const FourVectors* pXYZOrigins,
										const fltx4* pRadii,
										const FourVectors* pTints,
										const fltx4* pRotations,
										const fltx4* pYaws,
										const fltx4* pPitches,
										float flRadiusScale,
										const fltx4* pXScale,
										const fltx4* pYScale,
										const fltx4* pZScale);  // 1400
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
		}
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3394
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3386
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
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
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3388
		Mod2SIMDPositiveInput<>(const fltx4& val); // 3396
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		fabs<>(const fltx4& x); // 3395
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		_Sin01SIMD<>(const fltx4& val); // 3399
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3397
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 3401
		{
			fltx4 retVal; // 2095
			_mm_cmple_ps(__m128 __A,
					__m128 __B);  // 2096
		}
		CmpLeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3403
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3406
		SinCosSIMD<>(fltx4& sine,
				fltx4& cosine,
				const fltx4& radians);  // 1269
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1289
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1339
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1333
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1336
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1343
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1344
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1345
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1353
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1354
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1355
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1363
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1364
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1365
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1373
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1374
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1375
	}
	SetSceneObjectTransformsFastInternal<false, false, true, true, false>(CSceneObject** pObjectList,
										int nNumObjects,
										const FourVectors* pXYZOrigins,
										const fltx4* pRadii,
										const FourVectors* pTints,
										const fltx4* pRotations,
										const fltx4* pYaws,
										const fltx4* pPitches,
										float flRadiusScale,
										const fltx4* pXScale,
										const fltx4* pYScale,
										const fltx4* pZScale);  // 1406
	SetSceneObjectTransformsFastInternal<false, false, true, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1425
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
		}
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1333
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3394
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3386
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
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
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3388
		Mod2SIMDPositiveInput<>(const fltx4& val); // 3396
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		fabs<>(const fltx4& x); // 3395
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3397
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		_Sin01SIMD<>(const fltx4& val); // 3399
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 3401
		{
			fltx4 retVal; // 2095
			_mm_cmple_ps(__m128 __A,
					__m128 __B);  // 2096
		}
		CmpLeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3403
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3406
		SinCosSIMD<>(fltx4& sine,
				fltx4& cosine,
				const fltx4& radians);  // 1269
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1336
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1339
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1289
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1343
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1344
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1345
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1353
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1354
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1355
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1363
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1364
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1365
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1373
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1374
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1375
	}
	SetSceneObjectTransformsFastInternal<false, false, false, true, false>(CSceneObject** pObjectList,
										int nNumObjects,
										const FourVectors* pXYZOrigins,
										const fltx4* pRadii,
										const FourVectors* pTints,
										const fltx4* pRotations,
										const fltx4* pYaws,
										const fltx4* pPitches,
										float flRadiusScale,
										const fltx4* pXScale,
										const fltx4* pYScale,
										const fltx4* pZScale);  // 1406
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3394
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3386
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
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
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3388
		Mod2SIMDPositiveInput<>(const fltx4& val); // 3396
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		fabs<>(const fltx4& x); // 3395
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3397
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		_Sin01SIMD<>(const fltx4& val); // 3399
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 2095
			_mm_cmple_ps(__m128 __A,
					__m128 __B);  // 2096
		}
		CmpLeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 3401
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3403
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3406
		SinCosSIMD<>(fltx4& sine,
				fltx4& cosine,
				const fltx4& radians);  // 1269
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1289
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1339
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1333
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1336
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1343
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1344
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1345
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1353
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1354
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1355
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1363
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1364
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1365
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1373
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1374
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1375
	}
	SetSceneObjectTransformsFastInternal<false, false, false, true, true>(CSceneObject** pObjectList,
										int nNumObjects,
										const FourVectors* pXYZOrigins,
										const fltx4* pRadii,
										const FourVectors* pTints,
										const fltx4* pRotations,
										const fltx4* pYaws,
										const fltx4* pPitches,
										float flRadiusScale,
										const fltx4* pXScale,
										const fltx4* pYScale,
										const fltx4* pZScale);  // 1400
	SetSceneObjectTransformsFastInternal<false, false, false, true>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1431
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1333
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3394
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3386
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
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
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3388
		Mod2SIMDPositiveInput<>(const fltx4& val); // 3396
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		fabs<>(const fltx4& x); // 3395
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3397
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		_Sin01SIMD<>(const fltx4& val); // 3399
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 3401
		{
			fltx4 retVal; // 2095
			_mm_cmple_ps(__m128 __A,
					__m128 __B);  // 2096
		}
		CmpLeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3403
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3406
		SinCosSIMD<>(fltx4& sine,
				fltx4& cosine,
				const fltx4& radians);  // 1269
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1336
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1339
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1289
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1343
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1344
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1345
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1353
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1354
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1355
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1363
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1364
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1365
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1373
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1374
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1375
	}
	SetSceneObjectTransformsFastInternal<false, false, false, false, false>(CSceneObject** pObjectList,
										int nNumObjects,
										const FourVectors* pXYZOrigins,
										const fltx4* pRadii,
										const FourVectors* pTints,
										const fltx4* pRotations,
										const fltx4* pYaws,
										const fltx4* pPitches,
										float flRadiusScale,
										const fltx4* pXScale,
										const fltx4* pYScale,
										const fltx4* pZScale);  // 1406
	{
		fltx4 fl4SinPitch; // 1256
		fltx4 fl4CosPitch; // 1256
		fltx4 fl4SinYaw; // 1262
		fltx4 fl4CosYaw; // 1262
		fltx4 fl4SinRot; // 1268
		fltx4 fl4CosRot; // 1268
		fltx4 fl4M00; // 1271
		fltx4 fl4M10; // 1272
		fltx4 fl4M20; // 1273
		fltx4 fl4M01; // 1275
		fltx4 fl4M11; // 1281
		fltx4 fl4M21; // 1284
		fltx4 fl4M02; // 1286
		fltx4 fl4M12; // 1289
		fltx4 fl4M22; // 1292
		fltx4 fl4M03; // 1331
		fltx4 fl4M13; // 1335
		fltx4 fl4M23; // 1338
		{
			fltx4 fl4Scale; // 1296
			{
				fltx4 fl4XScale; // 1313
				fltx4 fl4YScale; // 1317
				fltx4 fl4ZScale; // 1321
			}
		}
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3394
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3386
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3386
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3387
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
				const fltx4& b);  // 3387
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3388
		Mod2SIMDPositiveInput<>(const fltx4& val); // 3396
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		fabs<>(const fltx4& x); // 3395
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3369
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 3370
		_Sin01SIMD<>(const fltx4& val); // 3399
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3397
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3398
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3400
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3401
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 3401
		{
			fltx4 retVal; // 2095
			_mm_cmple_ps(__m128 __A,
					__m128 __B);  // 2096
		}
		CmpLeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 2039
			_mm_cmpge_ps(__m128 __A,
					__m128 __B);  // 2040
		}
		CmpGeSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3404
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 3403
		{
			fltx4 retVal; // 826
			_mm_xor_ps(__m128 __A,
					__m128 __B);  // 827
		}
		XorSIMD<>(const fltx4& a,
				const fltx4& b);  // 3406
		SinCosSIMD<>(fltx4& sine,
				fltx4& cosine,
				const fltx4& radians);  // 1269
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1289
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1333
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1336
		{
			__v4sf __r0; // 2491
			__v4sf __r1; // 2491
			__v4sf __r2; // 2491
			__v4sf __r3; // 2491
			__v4sf __t0; // 2491
			__v4sf __t1; // 2491
			__v4sf __t2; // 2491
			__v4sf __t3; // 2491
		}
		TransposeSIMD<>(fltx4& x,
				fltx4& y,
				fltx4& z,
				fltx4& w);  // 1339
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1343
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1344
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1345
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1353
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1354
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1355
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1363
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1364
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1365
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1373
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1374
		_mm_store_ps(float* __P,
				__m128 __A);  // 273
		StoreAlignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 1375
	}
	SetSceneObjectTransformsFastInternal<false, false, false, false, true>(CSceneObject** pObjectList,
										int nNumObjects,
										const FourVectors* pXYZOrigins,
										const fltx4* pRadii,
										const FourVectors* pTints,
										const fltx4* pRotations,
										const fltx4* pYaws,
										const fltx4* pPitches,
										float flRadiusScale,
										const fltx4* pXScale,
										const fltx4* pYScale,
										const fltx4* pZScale);  // 1400
	SetSceneObjectTransformsFastInternal<false, false, false, false>(CSceneObject** pObjectList,
									int nNumObjects,
									const FourVectors* pXYZOrigins,
									const fltx4* pRadii,
									const FourVectors* pTints,
									const fltx4* pRotations,
									const fltx4* pYaws,
									const fltx4* pPitches,
									float flRadiusScale,
									const fltx4* pXScale,
									const fltx4* pYScale,
									const fltx4* pZScale);  // 1437
	SetSceneObjectTransformsFastInternal<false, false>(CSceneObject** pObjectList,
								int nNumObjects,
								const FourVectors* pXYZOrigins,
								const fltx4* pRadii,
								const FourVectors* pTints,
								const fltx4* pRotations,
								const fltx4* pYaws,
								const fltx4* pPitches,
								float flRadiusScale,
								const fltx4* pXAxisScale,
								const fltx4* pYAxisScale,
								const fltx4* pZAxisScale);  // 1475
} /* size: 9086, inline expansions: 23 (25173 bytes) */

// <0353ADB4> ../scenesystem/sceneobject_methods.cpp:1481
// variables: 3
// function calls: 21
void CSceneSystem::SceneObject_AddChild(CSceneObject* pParent, CUtlStringToken nID, CSceneObject* pChild, uint32 nChildUpdateFlags)
{
	const char   __FUNCTION__; // 20635
	ChildSceneObjectReference_t ref; // 1488
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1487
	}
	CSceneSystem::SceneObject_AttachExtraData(
					CSceneObject* pObject);  // 2293
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1485
	CSceneSystem::SceneObject_AttachExtraData(
					CSceneObject* pObject);  // 2293
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1486
	CUtlStringToken::CUtlStringToken(); // 185
	ChildSceneObjectReference_t::ChildSceneObjectReference_t(); // 1488
	CUtlMemory<ChildSceneObjectReference_t, int>::NumAllocated(); // 1196
	CUtlMemory<ChildSceneObjectReference_t, int>::Base(); // 112
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Base(); // 368
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::ResetDbgInfo(); // 824
	CUtlMemory<ChildSceneObjectReference_t, int>::IsGrowable(); // 823
	CUtlMemory<ChildSceneObjectReference_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ChildSceneObjectReference_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ChildSceneObjectReference_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<ChildSceneObjectReference_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Element(
		int i);  // 1201
	CopyConstruct<ChildSceneObjectReference_t>(ChildSceneObjectReference_t* pMemory,
							const ChildSceneObjectReference_t& src);  // 1201
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::AddToTail(
			const ChildSceneObjectReference_t& src);  // 1492
} /* size: 0, variables: 2, inline expansions: 21 (1618 bytes) */

// <0353A9D6> ../scenesystem/sceneobject_methods.cpp:1503
// variables: 6
// function calls: 11
void CSceneSystem::SceneObject_RemoveChild(CSceneObject* pParent, CSceneObject* pChild)
{
	CSceneObjectExtraData_t* pExtra; // 1505
	const char   __FUNCTION__; // 20706
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1506
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1507
	}
	{
		{
			int i; // 257
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 257
			CUtlMemory<ChildSceneObjectReference_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Remove(
				int elem);  // 261
			CUtlMemory<ChildSceneObjectReference_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Element(
				int i);  // 259
			operator()(const class* __closure,
					ChildSceneObjectReference_t& elem); // 259
		}
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::RemoveElementsPassingTest<CSceneSystem::SceneObject_RemoveChild(
																class& f);  // 1510
	}
} /* size: 0, variables: 2 */

// <0353A781> ../scenesystem/sceneobject_methods.cpp:1515
// variables: 3
// function calls: 7
void CSceneSystem::SceneObject_FindChild(const CSceneObject* pParent, CUtlStringToken nID)
{
	const CSceneObjectExtraData_t* pExtra; // 1517
	{
		int nIdx; // 1520
		{
			int i; // 208
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 208
			CUtlMemory<ChildSceneObjectReference_t, int>::operator[](
					int i);  // 609
			CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Element(
				int i);  // 210
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 210
		}
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::FindByField<CUtlStringToken, ChildSceneObjectReference_t>(
										CUtlStringToken ChildSceneObjectReference_t::* pField,
										CUtlStringToken matchValue);  // 1520
		CUtlMemory<ChildSceneObjectReference_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::operator[](
				int i);  // 1522
	}
} /* size: 83, variables: 1 */

// <0353A311> ../scenesystem/sceneobject_methods.cpp:1528
// variables: 5
// function calls: 16
void CSceneSystem::SceneObject_MirrorTransformToChildSceneObjects(const CSceneObject* pParent)
{
	const CSceneObjectExtraData_t* pExtra; // 1530
	{
		const ChildSceneObjectReference_t& childRef; // 1534
		const CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1>& __for_range; // 13705
		const_iterator __for_begin; // 5771
		const_iterator __for_end; // 5771
		CUtlMemory<ChildSceneObjectReference_t, int>::Base(); // 113
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Base(); // 103
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::begin(); // 1534
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 105
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::end(); // 1534
		CSceneObject::GetTransform(); // 1538
		CSceneObject::GetTransform(); // 1538
		matrix3x4_t::matrix3x4_t(); // 1019
		operator*(const matrix3x4_t& in1,
				const matrix3x4_t& in2);  // 1538
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 2082
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
		CSceneObject::SetTransform(
				const matrix3x4_t& mTransform);  // 1538
	}
} /* size: 461, variables: 1 */

// <03539D73> ../scenesystem/sceneobject_methods.cpp:1543
// variables: 5
// function calls: 20
void CSceneSystem::SceneObject_MirrorTransformToChildSceneObjectsRelative(const matrix3x4_t& mPreviousTransform, const CSceneObject* pParent)
{
	const CSceneObjectExtraData_t* pExtra; // 1545
	{
		const ChildSceneObjectReference_t& childRef; // 1549
		const CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1>& __for_range; // 13705
		const_iterator __for_begin; // 5771
		const_iterator __for_end; // 5771
		CUtlMemory<ChildSceneObjectReference_t, int>::Base(); // 113
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Base(); // 103
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::begin(); // 1549
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 105
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::end(); // 1549
		matrix3x4_t::matrix3x4_t(); // 2793
		matrix3x4_t::InverseTR(); // 1553
		matrix3x4_t::matrix3x4_t(); // 1019
		operator*(const matrix3x4_t& in1,
				const matrix3x4_t& in2);  // 1553
		CSceneObject::GetTransform(); // 1553
		CSceneObject::GetTransform(); // 1553
		matrix3x4_t::matrix3x4_t(); // 1019
		operator*(const matrix3x4_t& in1,
				const matrix3x4_t& in2);  // 1553
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 2082
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
		CSceneObject::SetTransform(
				const matrix3x4_t& mTransform);  // 1553
	}
} /* size: 557, variables: 1 */

// <03539A4A> ../scenesystem/sceneobject_methods.cpp:1558
// variables: 6
// function calls: 12
void CSceneSystem::SceneObject_MirrorVisibilityToChildSceneObjects(const CSceneObject* pParent)
{
	const CSceneObjectExtraData_t* pExtra; // 1560
	const bool  bRenderingEnabled; // 1564
	{
		const ChildSceneObjectReference_t& childRef; // 1565
		const CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1>& __for_range; // 13705
		const_iterator __for_begin; // 5771
		const_iterator __for_end; // 5771
		CUtlMemory<ChildSceneObjectReference_t, int>::Base(); // 113
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Base(); // 103
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::begin(); // 1565
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 105
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::end(); // 1565
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
		CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
		CSceneSystem::SceneObject_PostFlagsUpdate(
						CSceneObject* pObj);  // 1908
		CSceneObject::MirrorFlags(); // 1901
		CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
							ESceneObjectFlags flags);  // 1988
		CSceneObject::SetRenderingEnabled(
					bool bEnabled);  // 1569
	}
	CSceneObject::IsRenderingEnabled(); // 1564
} /* size: 273, variables: 2, inline expansions: 1 (0 bytes) */

// <0353992C> ../scenesystem/sceneobject_methods.cpp:1574
// function calls: 3
void CSceneSystem::SceneObject_SetForceLayerID(CSceneObject* pObj, CUtlStringToken nTok)
{
	CSceneSystem::SceneObject_AttachExtraData(
					CSceneObject* pObject);  // 2293
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1577
} /* size: 142, inline expansions: 3 (203 bytes) */

// <035A5D67> ../scenesystem/sceneobject_methods.cpp:1581
// function calls: 2
void CSceneSystem::SceneObject_PostFlagsUpdate(CSceneObject* pObj)
{
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 1588
} /* size: 53, inline expansions: 2 (0 bytes) */

// <03539906> ../scenesystem/sceneobject_methods.cpp:1581
void CSceneSystem::SceneObject_PostFlagsUpdate(CSceneObject* pObj)
{
} /* size: 0 */

// <03539338> ../scenesystem/sceneobject_methods.cpp:1594
// variables: 2
// function calls: 22
void CSceneSystem::SceneObject_UpdateRayTraceObject(CSceneObject* pObject)
{
	CModel* model; // 1597
	CSceneWorld* world; // 1600
	CSceneObject::GetModel(); // 1597
	CSceneObject::GetWorld(); // 1600
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
			int nLineNumber);  // 428
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
			CSceneObject* const& src);  // 430
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 431
	CSceneWorld::AddDirtyRayTrace(
			CSceneObject* object);  // 1605
} /* size: 362, variables: 2, inline expansions: 22 (1073 bytes) */

// <035388CB> ../scenesystem/sceneobject_methods.cpp:1608
// variables: 6
// function calls: 38
void CSceneSystem::SceneObject_DestroyRayTraceInstance(CSceneObject* pObject)
{
	CSceneWorld* world; // 1610
	Scope s; // 1618
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1622; // 1622
	RayTracingEnvironment* env; // 1624
	CSceneObject::GetWorld(); // 1610
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 1618
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
			int nLineNumber);  // 441
	{
		int i; // 1531
		CUtlVectorBase<CSceneObject::Count(); // 1531
		CUtlMemory<CSceneObject::operator[](
				int i);  // 609
		CUtlVectorBase<CSceneObject::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CSceneObject::Find(
		CSceneObject* const& src);  // 1629
	CUtlMemory<CSceneObject::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneObject::Element(
		int i);  // 1575
	Destruct<CSceneObject*>(CSceneObject** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CSceneObject::operator[](
				int i);  // 602
		CUtlVectorBase<CSceneObject::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CSceneObject::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<CSceneObject::FindAndFastRemove(
				CSceneObject* const& src);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 444
	CSceneWorld::RemoveDirtyRayTrace(
				CSceneObject* object);  // 1620
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
			int nLineNumber);  // 1622
	CSceneWorld::GetRayTracingEnvironment(); // 1624
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1632
	Scope::~Scope(); // 1632
} /* size: 583, variables: 4, inline expansions: 31 (1380 bytes) */

// <03538067> ../scenesystem/sceneobject_methods.cpp:1634
// variables: 3
// function calls: 39
void CSceneObject::SetMaterialOverrideByIndex(int index, HMaterial material)
{
	CSceneSystem::SceneObject_AttachExtraData(
					CSceneObject* pObject);  // 2293
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1636
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoFor this); // 1069
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::NumAllocated(); // 782
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
	Base(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 368
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 824
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::IsGrowable(); // 823
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int i);  // 1453
		CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 217
		CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(); // 1479
		Construct<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* pMemory); // 1453
	}
	InsertMultipleBefore(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
				int num);  // 1071
	EnsureCount(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int num);  // 1638
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int i);  // 1639
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 239
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1639
	{
		function<void(CSceneObject*)>* fn; // 279
		CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16>& __for_range; // 53067
		iterator __for_begin; // 53077
		iterator __for_end; // 53087
		CUtlMemory<std::function<void(CSceneObject::Base()>*, int>* this); // 112
		CUtlVectorBase<std::function<void(CSceneObject::Base()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 102
		CUtlVectorBase<std::function<void(CSceneObject::begin()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		CUtlVectorBase<std::function<void(CSceneObject::Count()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*) this); // 104
		CUtlVectorBase<std::function<void(CSceneObject::end()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		_Function_base::_M_empty(); // 591
		function<void(CSceneObject::operator(
				CSceneObject* __args#0);  // 281
	}
	CSceneSystem::SceneObject_UpdateFlagsBasedOnMaterial(
						CSceneObject* pObject);  // 1734
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 1642
} /* size: 0, inline expansions: 25 (3026 bytes) */

// <03537BF5> ../scenesystem/sceneobject_methods.cpp:1645
// variables: 3
// function calls: 22
void CSceneObject::ClearIndexedMaterialOverrides()
{
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 1800
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 1651
	{
		function<void(CSceneObject*)>* fn; // 279
		CUtlVectorFixedGrowable<std::function<void(CSceneObject*)>*, 16>& __for_range; // 53067
		iterator __for_begin; // 53077
		iterator __for_end; // 53087
		CUtlMemory<std::function<void(CSceneObject::Base()>*, int>* this); // 112
		CUtlVectorBase<std::function<void(CSceneObject::Base()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 102
		CUtlVectorBase<std::function<void(CSceneObject::begin()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		CUtlVectorBase<std::function<void(CSceneObject::Count()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*) this); // 104
		CUtlVectorBase<std::function<void(CSceneObject::end()>*, CUtlMemoryFixedGrowable<std::function<void(CSceneObject*)>*, 16 this); // 279
		_Function_base::_M_empty(); // 591
		function<void(CSceneObject::operator(
				CSceneObject* __args#0);  // 281
	}
	CSceneSystem::SceneObject_UpdateFlagsBasedOnMaterial(
						CSceneObject* pObject);  // 1734
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 1653
} /* size: 0, inline expansions: 8 (0 bytes) */



//
// scenesystem/decal.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <040B1718> ../scenesystem/decal.cpp:15
void StaticInitialize(void)
{
} /* size: 0 */

// <040B15C1> ../scenesystem/decal.cpp:21
// variable: 1
// function calls: 3
void CDecalSceneObjectDesc::OnSceneObjectVisibleInView(const ISceneView* pView, VisibleSceneObject_t* pVisible)
{
	CLightBinnerStandard* pLightBinner; // 23
	{
	}
	assert_cast<const CSceneView*, const ISceneView>(const ISceneView* pSource); // 462
	assert_cast<const CSceneView*, const ISceneView>(const ISceneView* pSource); // 23
	CSceneView::GetLightBinnerStandard(); // 23
} /* size: 0, variables: 1, inline expansions: 3 (97 bytes) */

// <040B136B> ../scenesystem/decal.cpp:32
// variables: 3
// function calls: 6
void CDecalSceneObjectDesc::UpdateBoundingBoxToMatchTransform(CSceneObject* pObject)
{
	CDecalSceneObject* pDecal; // 34
	Vector vNewMin; // 36
	Vector vNewMax; // 36
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 37
	Vector::Vector(); // 36
	Vector::Vector(); // 36
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 37
	CSceneObject::GetTransform(); // 37
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 38
} /* size: 155, variables: 3, inline expansions: 6 (70 bytes) */

// <040B06CC> ../scenesystem/decal.cpp:41
// variable: 1
// function calls: 59
void CDecalSceneObjectDesc::Create()
{
	CDecalSceneObject* pNew; // 43
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
	CSceneObject::CSceneObject(); // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 7
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 7
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 7
	CDecalSceneObject::CDecalSceneObject(); // 43
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 45
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 46
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 48
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 47
} /* size: 474, variables: 1, inline expansions: 59 (1154 bytes) */

// <040B0659> ../scenesystem/decal.cpp:53
void CSceneSystem::CreateDecal(ISceneWorld* pWorld)
{
} /* size: 38 */


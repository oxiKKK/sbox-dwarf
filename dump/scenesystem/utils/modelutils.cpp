
//
// scenesystem/utils/modelutils.cpp
//
//	referenced by: libengine2.so
//
//	functions: 53
//

// <03B96DBD> ../scenesystem/utils/modelutils.cpp:29
// function calls: 51
void CMDL::CMDL()
{
	IModelRenderHelper::IModelRenderHelper(); // 29
	ISceneAnimatableProceduralBoneTransforms::ISceneAnimatableProceduralBoneTransforms(); // 29
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CMDLAttachmentData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMDLAttachmentData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::CUtlVector(); // 29
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 29
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(); // 29
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 29
	Color::Color(); // 29
	CUtlStringToken::CUtlStringToken(); // 29
	HSequence::HSequence(); // 29
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<>(); // 29
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 29
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 29
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 29
	Vector::Vector(); // 29
	matrix3x4_t::matrix3x4_t(); // 29
	Vector4D::Vector4D(); // 29
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 29
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 31
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 32
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 32
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 33
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 33
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 34
	CUtlStringToken::CUtlStringToken(); // 35
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 43
	matrix3x4_t::SetToIdentity(); // 47
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 48
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>(); // 54
} /* size: 537, inline expansions: 51 (607 bytes) */

// <03B96DA4> ../scenesystem/utils/modelutils.cpp:29
void CMDL::CMDL()
{
} /* size: 0 */

// <03B96478> ../scenesystem/utils/modelutils.cpp:58
// function calls: 47
void CMDL::~CMDL()
{
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 130
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 130
	CMDL::UnreferenceMDL(); // 61
	CSceneObject::IsDeleted(); // 67
	CSceneObject::HasFlags(
		ESceneObjectFlags nFlags);  // 67
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 73
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 73
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 73
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 73
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 73
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::RemoveAll(); // 1798
	CUtlMemory<CMDLAttachmentData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMDLAttachmentData, int>::Purge(); // 903
	CUtlMemory<CMDLAttachmentData, int>::Purge(); // 1799
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::Purge(); // 560
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::~CUtlVector(); // 73
} /* size: 309, inline expansions: 47 (744 bytes) */

// <03B9645F> ../scenesystem/utils/modelutils.cpp:58
void CMDL::~CMDL()
{
} /* size: 0 */

// <03B95F56> ../scenesystem/utils/modelutils.cpp:75
// variables: 2
// function calls: 21
void CMDL::SetMDL(HModel h, ISceneWorld* pSceneWorld, ESceneObjectFlags nFlags, ModelRenderAnimationType_t nAnimType)
{
	{
		const CModel* pHdr; // 86
		{
			int i; // 94
			CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::Count(); // 94
			CUtlMemory<CMDLAttachmentData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::operator[](
					int i);  // 96
		}
		CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 86
		CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::Count(); // 89
		CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::SetSize(
			int size);  // 91
	}
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 130
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 130
	CMDL::UnreferenceMDL(); // 79
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 80
	CStrongHandle<InfoForResourceTypeCModel>::operator!=(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 84
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 84
} /* size: 320, inline expansions: 15 (285 bytes) */

// <03B95EC7> ../scenesystem/utils/modelutils.cpp:106
// function calls: 2
void CMDL::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 108
} /* size: 10, inline expansions: 2 (10 bytes) */

// <03B9E666> ../scenesystem/utils/modelutils.cpp:111
// function calls: 3
void CMDL::Release()
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 113
	CMDL::Release(); // 111
} /* size: 56, inline expansions: 3 (43 bytes) */

// <03B95EAE> ../scenesystem/utils/modelutils.cpp:111
void CMDL::Release()
{
} /* size: 0 */

// <03B95DCD> ../scenesystem/utils/modelutils.cpp:119
// function calls: 4
void CMDL::GetMDL()
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 121
} /* size: 15, inline expansions: 4 (13 bytes) */

// <03B9E542> ../scenesystem/utils/modelutils.cpp:128
// function calls: 5
void CMDL::UnreferenceMDL()
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 130
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCModel>::operator=(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 130
} /* size: 0, inline expansions: 5 (0 bytes) */

// <03B95DB4> ../scenesystem/utils/modelutils.cpp:128
void CMDL::UnreferenceMDL()
{
} /* size: 0 */

// <03B9D574> ../scenesystem/utils/modelutils.cpp:137
// function call: 1
void CMDL::GetModelData()
{
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 139
} /* size: 17, inline expansions: 1 (12 bytes) */

// <03B95D9B> ../scenesystem/utils/modelutils.cpp:137
void CMDL::GetModelData()
{
} /* size: 0 */

// <03B9D5CE> ../scenesystem/utils/modelutils.cpp:145
// function call: 1
void CMDL::SetSkin(CUtlStringToken nSkin)
{
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 147
} /* size: 20, inline expansions: 1 (0 bytes) */

// <03B95D76> ../scenesystem/utils/modelutils.cpp:145
void CMDL::SetSkin(CUtlStringToken nSkin)
{
} /* size: 0 */

// <03B95C2A> ../scenesystem/utils/modelutils.cpp:154
// function calls: 4
void CMDL::SetSkin(int nSkinIndex)
{
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 139
	CMDL::GetModelData(); // 156
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 147
	CMDL::SetSkin(
		CUtlStringToken nSkin);  // 156
} /* size: 130, inline expansions: 4 (39 bytes) */

// <03B95B1D> ../scenesystem/utils/modelutils.cpp:159
// function calls: 3
void CMDL::SetSequence(HSequence hSequence)
{
	HSequence::operator==(
			const HSequence& other);  // 161
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>(); // 282
	CMDL::MarkAnimationDirty(); // 164
} /* size: 41, inline expansions: 3 (22 bytes) */

// <03B95AEF> ../scenesystem/utils/modelutils.cpp:168
void CMDL::GetSequence()
{
} /* size: 8 */

// <03B95AB2> ../scenesystem/utils/modelutils.cpp:173
void CMDL::SetTime(float flTime)
{
} /* size: 10 */

// <03B95A75> ../scenesystem/utils/modelutils.cpp:178
void CMDL::SetPlaybackRate(float flRate)
{
} /* size: 10 */

// <03B9D666> ../scenesystem/utils/modelutils.cpp:183
// function call: 1
void CMDL::SetMeshGroupMask(MeshGroupMask_t nMask)
{
	CMDL::SetMeshGroupMask(
			MeshGroupMask_t nMask);  // 183
} /* size: 101, inline expansions: 1 (28 bytes) */

// <03B95A50> ../scenesystem/utils/modelutils.cpp:183
void CMDL::SetMeshGroupMask(MeshGroupMask_t nMask)
{
} /* size: 0 */

// <03B95A13> ../scenesystem/utils/modelutils.cpp:196
void CMDL::SetPruneUnusedMeshGroups(bool bPrune)
{
} /* size: 12 */

// <03B959E5> ../scenesystem/utils/modelutils.cpp:201
void CMDL::GetMeshGroupMask()
{
} /* size: 9 */

// <03B95879> ../scenesystem/utils/modelutils.cpp:206
// variables: 2
// function calls: 2
void CMDL::SetMeshGroupMaskFromBodyParts(int nBodyGroup, int nSubModel)
{
	const CModel* pModel; // 208
	{
		MeshGroupMask_t nMeshGroupMask; // 212
	}
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 139
	CMDL::GetModelData(); // 208
} /* size: 205, variables: 1, inline expansions: 2 (24 bytes) */

// <03B957FF> ../scenesystem/utils/modelutils.cpp:217
// function call: 1
void CMDL::SetTintRGBA_Gamma(const Vector4D& vTintRGBA)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 219
} /* size: 56, inline expansions: 1 (51 bytes) */

// <03B95746> ../scenesystem/utils/modelutils.cpp:222
void CMDL::SetTransform(const matrix3x4_t& rootToWorld, const matrix3x4a_t* pBoneToWorld, int nBones)
{
} /* size: 116 */

// <03B955FE> ../scenesystem/utils/modelutils.cpp:232
// variables: 4
// function calls: 3
void CMDL::SetTransform(const matrix3x4_t& rootToWorld)
{
	const char   __FUNCTION__; // 45315
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 234
	}
	{
		int i; // 180
		{
			int j; // 182
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 184
		}
	}
	matrix3x4_t::IsValid(); // 234
} /* size: 0, variables: 1, inline expansions: 1 (38 bytes) */

// <03B9504E> ../scenesystem/utils/modelutils.cpp:239
// variables: 2
// function calls: 24
void CMDL::SetPoseParameters(const float* pPoseParameters, int nPoseParams)
{
	const char   __FUNCTION__; // 45435
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 241
	}
	CUtlMemory<float, int>::NumAllocated(); // 782
	CUtlMemory<float, int>::IsGrowable(); // 823
	CUtlMemory<float, int>::IsExternallyAllocated(); // 859
	CUtlMemory<float, int>::IsExternallyAllocated(); // 861
	CUtlMemory<float, int>::Grow(
		int num);  // 806
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
		int count);  // 1341
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<matrix3x4a_t>(const matrix3x4a_t* pFrom,
					const matrix3x4a_t* pFromEnd,
					matrix3x4a_t* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 1344
	CUtlVectorBase<float, CUtlMemory<float, int> >::CopyArray(
			const float* pArray,
			int size);  // 242
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>(); // 282
	CMDL::MarkAnimationDirty(); // 243
} /* size: 0, variables: 1, inline expansions: 24 (2743 bytes) */

// <03B95011> ../scenesystem/utils/modelutils.cpp:246
void CMDL::SetLOD(int nLOD)
{
} /* size: 8 */

// <03B9E36B> ../scenesystem/utils/modelutils.cpp:251
// function calls: 7
void CMDL::SetMaterialOverride(HMaterial hMaterial)
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator!=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 253
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 256
	CMDL::SetMaterialOverride(
				HMaterial hMaterial);  // 251
} /* size: 137, inline expansions: 7 (310 bytes) */

// <03B94FEC> ../scenesystem/utils/modelutils.cpp:251
void CMDL::SetMaterialOverride(HMaterial hMaterial)
{
} /* size: 0 */

// <03B94FAF> ../scenesystem/utils/modelutils.cpp:260
void CMDL::SetModelRenderAnimationType(ModelRenderAnimationType_t nAnimType)
{
} /* size: 26 */

// <03B94E84> ../scenesystem/utils/modelutils.cpp:269
// variables: 3
void CMDL::SetBoneTransformsInSceneObject(CSceneAnimatableObject* pObject, uint8 nLodGroupMask)
{
	const char   __FUNCTION__; // 45746
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 271
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 1 */

// <03B9E240> ../scenesystem/utils/modelutils.cpp:280
// function call: 1
void CMDL::MarkAnimationDirty()
{
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>(); // 282
} /* size: 0, inline expansions: 1 (0 bytes) */

// <03B94E6B> ../scenesystem/utils/modelutils.cpp:280
void CMDL::MarkAnimationDirty()
{
} /* size: 0 */

// <03B9376B> ../scenesystem/utils/modelutils.cpp:286
// variables: 36
// function calls: 68
void CMDL::FinalizeForRendering(float flAnimRealTime)
{
	bool bNeedNewSceneObject; // 289
	{
		const HModel  hModel; // 307
		const char* pDesc; // 309
		ESceneObjectTypeFlags nTypeFlags; // 310
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 307
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 317
		CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>(); // 282
		CMDL::MarkAnimationDirty(); // 333
		CUtlStringToken::IsValid(); // 335
		CSceneObject::ResetMeshGroups(
				MeshGroupMask_t nMask);  // 344
		CSceneObject::GetMeshInstanceData(); // 346
		CStrongHandle<InfoForResourceTypeIMaterial2>::HasHandle(); // 335
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 330
		CSceneAnimatableObject::SetProceduralBoneTransforms(
						ISceneAnimatableProceduralBoneTransforms* pProceduralBoneTransforms);  // 331
	}
	{
		MeshGroupMask_t nMeshGroupMask; // 369
		HModel hModel; // 373
		const CModel* pModel; // 374
		const ISequence* pSeqDesc; // 375
		{
			const AnimEvent_t* pevent; // 378
			AnimEventIndex_t s_nCLEnableBodyGroup; // 380
			AnimEventIndex_t s_nCLDisableBodyGroup; // 381
			AnimEventIndex_t s_nCLBodyGroupSetValue; // 382
			AnimEventIndex_t s_nSVBodyGroupSetValue; // 383
			{
				int i; // 385
				{
					MeshGroupMask_t nGroupMask; // 387
					MeshGroupMask_t nModelMask; // 388
					{
						const char* szBodygroupName; // 394
						int iGroup; // 395
						{
							const uint32  m; // 61
							uint32 h; // 62
							uint32 k; // 63
							const int  r; // 64
						}
						CUtlStringToken::CUtlStringToken(
								const char& str);  // 13
						CKV3MemberName::CKV3MemberName<5>(
									const char& str);  // 394
					}
					{
						const char* szBodygroupName; // 404
						int iGroup; // 405
						{
							const uint32  m; // 61
							uint32 h; // 62
							uint32 k; // 63
							const int  r; // 64
						}
						CUtlStringToken::CUtlStringToken(
								const char& str);  // 13
						CKV3MemberName::CKV3MemberName<5>(
									const char& str);  // 404
					}
					{
						const char* szBodygroupName; // 415
						int nBodygroupValue; // 416
						int iGroup; // 417
						CKV3MemberName::CKV3MemberName<10>(
									const char& str);  // 415
						{
							const uint32  m; // 80
							uint32 h; // 81
							uint32 k; // 82
							const int  r; // 83
						}
						CUtlStringToken::CUtlStringToken(
								const char& str);  // 13
						CKV3MemberName::CKV3MemberName<6>(
									const char& str);  // 416
					}
					AnimEventIndex_t::GetRaw(); // 402
					AnimEventIndex_t::GetRaw(); // 412
					AnimEventIndex_t::GetRaw(); // 413
					AnimEventIndex_t::GetRaw(); // 392
				}
			}
			{
			}
			EventList_IndexForName(const char* pszEventName); // 383
			{
			}
			EventList_IndexForName(const char* pszEventName); // 382
			{
			}
			EventList_IndexForName(const char* pszEventName); // 381
			{
			}
			EventList_IndexForName(const char* pszEventName); // 380
		}
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 373
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 374
		CSceneObject::EnsureExtraData(); // 2289
		CSceneObject::EnsureExtraData(); // 2198
		CSceneObject::ResetMeshGroups(
				MeshGroupMask_t nMask);  // 2177
		CSceneObject::ResetMeshGroups(
				MeshGroupMask_t nMask);  // 429
	}
	{
		CSceneAnimatableObject* pSceneObject; // 449
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 450
		CUtlMemory<matrix3x4a_t, int>::Base(); // 112
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 450
	}
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 363
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 417
	Vector4D::Vector4D(); // 707
	Vector4DSubtract(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 708
	Vector4D::LengthSqr(); // 709
	Vector4D::DistToSqr(
			const Vector4D& vOther);  // 417
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 423
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 415
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2375
	CSceneObject::SetAlphaFade(
			float fAlpha);  // 431
	CSceneObject::SetTintRGBA_Gamma(
				const Vector4D& vTint);  // 364
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasHandle(); // 434
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 437
	CSceneObject::SetMaterialOverrideForMeshInstances(
						HMaterial hMaterial);  // 437
	matrix3x4_t::Base(); // 291
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
			const matrix3x4_t& mTransform);  // 361
	CSceneObject::GetMeshInstanceData(); // 441
} /* size: 0, variables: 1, inline expansions: 27 (1135 bytes) */

// <03B9373D> ../scenesystem/utils/modelutils.cpp:458
void CMDL::GetSceneObject()
{
} /* size: 12 */

// <03B9D63C> ../scenesystem/utils/modelutils.cpp:463
void CMDL::GetSceneAnimatableObject()
{
} /* size: 24 */

// <03B9206D> ../scenesystem/utils/modelutils.cpp:471
// variables: 13
// function calls: 95
void CMDL::AppendDrawPrimitives(CMeshPrimitiveOutputBuffer& opaquePrims, CMeshPrimitiveOutputBuffer& translucentPrims, const ISceneView* pView, ISceneLayer* pLayer)
{
	bool bAlphaFadeOnSceneObject; // 476
	bool bHasMaterialOverride; // 477
	bool bOverrideTranslucent; // 478
	CMeshPrimitiveOutputBuffer tempPrims; // 480
	GeneratePrimitivesArgs_t gpArgs; // 481
	CSceneObject::GetAlphaFade(); // 476
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator!=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 477
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 477
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 478
	IMaterial2::GetIntAttributeOrDefault(
				CUtlStringToken name,
				int nDefault);  // 478
	CUtlMemory<CMeshDrawPrimitive_t, int>::CUtlMemory(
			CMeshDrawPrimitive_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CMeshDrawPrimitive_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CMeshDrawPrimitive_t, int>::CUtlMemoryFixedGrowable_Base(
					CMeshDrawPrimitive_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<20, CMeshDrawPrimitive_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CMeshDrawPrimitive_t, 20>::CUtlVectorFixedGrowable(
				int growSize);  // 1351
	CMeshPrimitiveOutputBuffer::CMeshPrimitiveOutputBuffer(); // 480
	CSceneObject::GetAlphaFade(); // 484
	CSceneObject::GetDesc(); // 485
	{
		int i; // 1386
		{
			const CMaterialDrawDescriptor* pDrawCall; // 490
			bool bAlphaBlendedDraw; // 492
			CMaterialDrawDescriptor::IsAlphaBlended(); // 495
			CMeshDrawPrimitive_t::GetDrawCall(); // 490
			CUtlMemory<CMeshDrawPrimitive_t, int>::NumAllocated(); // 1143
			CUtlMemory<CMeshDrawPrimitive_t, int>::Base(); // 112
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Base(); // 368
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CMeshDrawPrimitive_t, int>::IsGrowable(); // 823
			CUtlMemory<CMeshDrawPrimitive_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CMeshDrawPrimitive_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CMeshDrawPrimitive_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Element(
				int i);  // 1148
			LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 1113
			Vector4D::Vector4D(); // 1113
			CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(); // 1479
			Construct<CMeshDrawPrimitive_t>(CMeshDrawPrimitive_t* pMemory); // 1148
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::AddToTail(); // 1380
			CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::operator[](
					int i);  // 1380
			CMeshPrimitiveOutputBuffer::Next(); // 1372
			CMeshPrimitiveOutputBuffer::Next(); // 508
			Vector4D::operator=(
					const Vector4D& vOther);  // 1113
			CMeshDrawPrimitive_t::operator=(
					const CMeshDrawPrimitive_t  &);  // 508
		}
		operator()(const class* __closure,
				CMeshDrawPrimitive_t& prim); // 1388
	}
	{
		int i; // 274
		CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Count(); // 274
		{
			const CMaterialDrawDescriptor* pDrawCall; // 490
			bool bAlphaBlendedDraw; // 492
			CMaterialDrawDescriptor::IsAlphaBlended(); // 495
			CMeshDrawPrimitive_t::GetDrawCall(); // 490
			CUtlMemory<CMeshDrawPrimitive_t, int>::NumAllocated(); // 1143
			CUtlMemory<CMeshDrawPrimitive_t, int>::Base(); // 112
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Base(); // 368
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CMeshDrawPrimitive_t, int>::IsGrowable(); // 823
			CUtlMemory<CMeshDrawPrimitive_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CMeshDrawPrimitive_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CMeshDrawPrimitive_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Element(
				int i);  // 1148
			LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 1113
			Vector4D::Vector4D(); // 1113
			CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(); // 1479
			Construct<CMeshDrawPrimitive_t>(CMeshDrawPrimitive_t* pMemory); // 1148
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::AddToTail(); // 1380
			CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::operator[](
					int i);  // 1380
			CMeshPrimitiveOutputBuffer::Next(); // 1372
			CMeshPrimitiveOutputBuffer::Next(); // 508
			Vector4D::operator=(
					const Vector4D& vOther);  // 1113
			CMeshDrawPrimitive_t::operator=(
					const CMeshDrawPrimitive_t  &);  // 508
		}
		operator()(const class* __closure,
				CMeshDrawPrimitive_t& prim); // 276
		CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Element(
			int i);  // 276
	}
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::ForEach<const CMDL::AppendDrawPrimitives(
																const class& f);  // 1390
	CMeshPrimitiveOutputBuffer::ForEach<CMDL::AppendDrawPrimitives(
																const class& f);  // 487
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<20, CMeshDrawPrimitive_t, 8>::Base(); // 237
	CUtlMemory<CMeshDrawPrimitive_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CMeshDrawPrimitive_t, int>::ConvertToExternalMemory(
				CMeshDrawPrimitive_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CMeshDrawPrimitive_t, int>::Purge_FixedGrowable(
				CMeshDrawPrimitive_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CMeshDrawPrimitive_t, int>::Purge_FixedGrowable(
				CMeshDrawPrimitive_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CMeshDrawPrimitive_t, int>::Base(); // 112
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Base(); // 368
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Purge(); // 560
	ValidateAlignment<CMeshDrawPrimitive_t>(void); // 508
	CUtlMemory<CMeshDrawPrimitive_t, int>::Purge(); // 903
	CUtlMemory<CMeshDrawPrimitive_t, int>::Purge(); // 510
	CUtlMemory<CMeshDrawPrimitive_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CMeshDrawPrimitive_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CMeshDrawPrimitive_t, 20>::~CUtlVectorFixedGrowable(); // 1351
	CMeshPrimitiveOutputBuffer::~CMeshPrimitiveOutputBuffer(); // 512
} /* size: 2060, variables: 5, inline expansions: 42 (3418 bytes) */

// <03B92020> ../scenesystem/utils/modelutils.cpp:515
void CMDL::SetupBones_AttachmentHelper(const CModel* hdr, matrix3x4_t* pBoneToWorld)
{
} /* size: 0 */

// <03B91EE0> ../scenesystem/utils/modelutils.cpp:552
// variable: 1
// function calls: 4
void CMDL::PutAttachment(AttachmentHandle_t number, const matrix3x4_t& attachmentToWorld)
{
	CMDLAttachmentData* pAtt; // 557
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 554
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::Count(); // 554
	CUtlMemory<CMDLAttachmentData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::operator[](
			int i);  // 557
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <03B91D57> ../scenesystem/utils/modelutils.cpp:564
// variables: 2
// function calls: 4
void CMDL::GetAttachment(AttachmentHandle_t number, matrix3x4_t& matrix)
{
	const char   __FUNCTION__; // 45342
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 566
	}
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 567
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::Count(); // 567
	CUtlMemory<CMDLAttachmentData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> >::operator[](
			int i);  // 570
} /* size: 101, variables: 1, inline expansions: 4 (22 bytes) */

// <03B91D1A> ../scenesystem/utils/modelutils.cpp:577
void CMDL::ForceLoopingAnimation(bool bEnable)
{
} /* size: 12 */

// <03B91CA8> ../scenesystem/utils/modelutils.cpp:583
// function call: 1
void CMDL::SetCycleOverride(float flCycle)
{
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 585
} /* size: 57, inline expansions: 1 (34 bytes) */

// <03B91C7A> ../scenesystem/utils/modelutils.cpp:589
void CMDL::ClearCycleOverride()
{
} /* size: 12 */

// <03B91B5D> ../scenesystem/utils/modelutils.cpp:594
// function calls: 3
void CMDL::SetRenderingEnabled(bool bEnabled)
{
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 599
} /* size: 95, inline expansions: 3 (115 bytes) */

// <03B915C9> ../scenesystem/utils/modelutils.cpp:603
// variables: 12
// function calls: 15
void CMDL::SetupSceneSystemAnimation(float flAnimRealTime)
{
	const char   __FUNCTION__; // 45626
	HModel hModel; // 611
	const CModel* pModel; // 612
	const ISequence* pSeqDesc; // 614
	Vector vLocalMins; // 618
	Vector vLocalMaxs; // 618
	Vector vMins; // 618
	Vector vMaxs; // 618
	float pDefaultPoseParams; // 623
	float* pPoseParams; // 624
	float flNewCycle; // 631
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 605
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 611
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 612
	Vector::Vector(); // 618
	Vector::Vector(); // 618
	Vector::Vector(); // 618
	Vector::Vector(); // 618
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 621
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 625
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>(); // 282
	CMDL::MarkAnimationDirty(); // 651
	IBaseSequence::CalculateCycleForFrame(
				float flFrame,
				const float* poseParameters);  // 638
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 645
} /* size: 0, variables: 11, inline expansions: 15 (194 bytes) */

// <03B9151E> ../scenesystem/utils/modelutils.cpp:655
// variables: 7
void ComputeBonesToSetup(const CModel* pModel, BoneFlags_t boneFlags, uint32* pBonesToSetUp)
{
	const char   __FUNCTION__; // 45484
	int nBoneCount; // 665
	int nDWords; // 667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 657
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 662
	}
	{
		int i; // 669
		{
			int iParent; // 680
		}
	}
} /* size: 0, variables: 3 */

// <03B90503> ../scenesystem/utils/modelutils.cpp:693
// variables: 18
// function calls: 49
void CMDL::PerformAnimationDecodeForLOD(int nLOD, BoneFlags_t extraBoneFlags)
{
	CUtlScratchMemoryPool animationOutputMemory; // 695
	CAnimationDecodeContext animationDecodeContext; // 696
	CSceneAnimatableObject* pSceneAnimatableObject; // 699
	BoneFlags_t boneFlags; // 703
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_711; // 711
	const CModel* pModel; // 717
	bool bHasAnimDrivenFlexes; // 718
	uint nTotalBones; // 730
	uint nNumDWords; // 731
	uint32* pBonesToSetUp; // 732
	const char   __FUNCTION__; // 45697
	float pDefaultPoseParams; // 749
	float* pPoseParams; // 750
	CAnimationDecodeOp op; // 757
	HAnimationDecodeDesc hAnimationDecodeDesc; // 762
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 746
	}
	CMDL::GetSceneAnimatableObject(); // 699
	operator|(BoneFlags_t a,
			BoneFlags_t b);  // 163
	operator|=(BoneFlags_t& a,
			BoneFlags_t b);  // 706
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::Load(); // 708
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 708
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
			int nLineNumber);  // 711
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::Load(); // 714
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 714
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 773
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 717
	CModel::GetModelFlags(); // 718
	operator&(ModelFlags_t a,
			ModelFlags_t b);  // 718
	CalcNumIntsForBits(int numBits); // 731
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::Load(); // 736
	operator~(BoneFlags_t a); // 736
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 736
	operator&(BoneFlags_t a,
			BoneFlags_t b);  // 662
	{
	}
	CalcNumIntsForBits(int numBits); // 667
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 668
	{
		int i; // 669
		{
			int iParent; // 680
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 672
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 675
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 678
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 684
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 687
		}
	}
	ComputeBonesToSetup(const CModel* pModel,
				BoneFlags_t boneFlags,
				uint32* pBonesToSetUp);  // 736
	BitVec_AndNot(uint32* pDst,
			const uint32* pSrc,
			const uint32* pAndNot,
			int nDWords);  // 737
	BitVec_IsAnySet(const uint32* pDst,
			int nDWords);  // 738
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 750
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 751
	CAnimationDecodeOp::CAnimationDecodeOp(); // 757
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 314
	CAnimationState::GetModel(); // 763
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::Load(); // 772
	operator|(BoneFlags_t a,
			BoneFlags_t b);  // 772
	CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>(); // 772
} /* size: 0, variables: 15, inline expansions: 44 (1221 bytes) */

// <03B8EC7F> ../scenesystem/utils/modelutils.cpp:775
// variables: 10
// function calls: 101
void CMDL::UpdateWorldSpaceTransforms()
{
	CSceneAnimatableObject* pSceneAnimatableObject; // 777
	const CModel* pModel; // 781
	int nBones; // 785
	CUtlVectorFixedGrowable<CTransform, 64> xBoneToWorld; // 786
	const float* pFlexControllers; // 796
	int nFlexCount; // 797
	{
		int i; // 789
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 793
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 793
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 793
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::operator[](
				int i);  // 793
	}
	CMDL::GetSceneAnimatableObject(); // 777
	CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 781
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 785
	Min<int>(const int& val1,
		const int& val2);  // 785
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CTransform, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 786
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTransform, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::SetCount(
		int count);  // 787
	CSceneObject::GetTransform(); // 788
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Base(); // 788
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
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
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 788
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 798
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 800
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 809
	Min<int>(const int& val1,
		const int& val2);  // 809
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 812
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 812
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<64, CTransform, 16>::Base(); // 237
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CTransform, int>::ConvertToExternalMemory(
				CTransform* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CTransform, int>::Purge_FixedGrowable(
				CTransform* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CTransform, 64, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 64, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CTransform, CUtlMemoryFixedGrowable<CTransform, 64, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CTransform, 64>::~CUtlVectorFixedGrowable(); // 814
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 805
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 608
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 611
	CAnimationState::GetAnimationDataCount<()1>(const CAnimationState* this); // 806
} /* size: 1440, variables: 6, inline expansions: 85 (3203 bytes) */

// <03B9E2C4> ../scenesystem/utils/modelutils.cpp:816
// function call: 1
void CMDL::PerformAnimationDecode(BoneFlags_t extraBoneFlags)
{
	CMDL::PerformAnimationDecode(
				BoneFlags_t extraBoneFlags);  // 816
} /* size: 48, inline expansions: 1 (21 bytes) */

// <03B8EC59> ../scenesystem/utils/modelutils.cpp:816
void CMDL::PerformAnimationDecode(BoneFlags_t extraBoneFlags)
{
} /* size: 0 */


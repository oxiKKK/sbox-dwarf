
//
// scenesystem/animatable.cpp
//
//	referenced by: libengine2.so
//
//	functions: 20
//

// <03E97E70> ../scenesystem/animatable.cpp:31
inline bool IsVertexCacheEnabled(bool bMorph, int nBlendWeightCount)
{
} /* size: 0 */

// <03E97DFD> ../scenesystem/animatable.cpp:38
// variable: 1
void CAnimatableSceneObjectDesc::Create()
{
	CSceneAnimatableObject* pNew; // 40
} /* size: 40, variables: 1 */

// <03E97A9B> ../scenesystem/animatable.cpp:44
// function calls: 14
void GetExtraShaderData(const CMeshDrawPrimitive_t* pDrawPrim, uint nBlendWeightCount)
{
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 46
	_mm_load_ss(const float* __P); // 1619
	_mm_cvtss_si32(__m128 __A); // 1619
	RoundFloatToUnsignedLong(float f); // 1642
	{
	}
	RoundFloatToByte(float f); // 1761
	_mm_load_ss(const float* __P); // 1619
	_mm_cvtss_si32(__m128 __A); // 1619
	RoundFloatToUnsignedLong(float f); // 1642
	{
	}
	RoundFloatToByte(float f); // 1762
	_mm_load_ss(const float* __P); // 1619
	_mm_cvtss_si32(__m128 __A); // 1619
	RoundFloatToUnsignedLong(float f); // 1642
	{
	}
	RoundFloatToByte(float f); // 1763
	CSceneSystem::CreateExtraShaderData_TintRGBA32(
					Vector4D vTint,
					float fAlphaScale,
					uint nBlendWeightCount);  // 46
} /* size: 0, inline expansions: 14 (767 bytes) */

// <03E9761A> ../scenesystem/animatable.cpp:53
// variables: 5
// function calls: 13
void CAnimatableSceneObjectDesc::AllocateTransforms(CSceneAnimatableObject* pObj, CMeshInstance* pMeshInstance, const CMeshDrawPrimitive_t* pDrawPrim, uint nBlendWeightCount, bool bMorph, uint32 nVertexCacheOffset, int& nTransformsAllocated)
{
	int nTransformSlotIndex; // 55
	int nTransformCount; // 56
	int nLocalBones; // 56
	{
		SceneSystemTransformEntry_t* pTransform; // 62
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 281
		CMeshInstance::GetRenderMesh(); // 59
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 402
		CMeshInstance::GetNumBones(); // 59
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 59
	}
	{
		SceneSystemTransformEntry_t* pTransform; // 79
		CSceneObject::HasFlags(
			ESceneObjectFlags nFlags);  // 81
		matrix3x4_t::Base(); // 291
		matrix3x4_t::Base(); // 291
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 291
		matrix3x4a_t::operator=(
				const matrix3x4_t& src);  // 97
	}
} /* size: 477, variables: 3 */

// <03E95572> ../scenesystem/animatable.cpp:116
// variables: 10
// function calls: 130
void CAnimatableSceneObjectDesc::BindMaterial(IRenderContext* pRenderContext, CMeshDrawPrimitive_t* pPrimitive, const IMaterial2* pMaterial, IMaterialMode* pMode, int nRenderPass, DrawValues_t& drawValues, bool bDepthMode, int nRequiredTextureSize, ISceneLayer* pLayer)
{
	CSceneAnimatableObject* pObj; // 118
	CRenderAttributes& attributes; // 121
	MaterialRenderablePass_t renderablePass; // 155
	int nPasses; // 156
	const RsDepthBiasStateOverride_t* pDepthBiasStateOverride; // 162
	const RsStencilStateOverride_t* pStencilStateOverride; // 163
	const RsFillModeOverride_t* pFillModeOverride; // 164
	{
		const CRenderAttributes* pPrimAttributes; // 130
	}
	{
		const CSceneObjectExtraData_t* pExtraData; // 136
		CSceneObject::GetExtraData(); // 136
		CRenderAttributes::GetParent(); // 138
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
				const CRenderAttributes* pParent);  // 140
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
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
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
	CRenderAttributes::CRenderAttributes(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CRenderAttributes>::GetObject(); // 121
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 123
	CSceneSystem::AppUsesBakedLighting(); // 125
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 145
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 146
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 147
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 150
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 150
	ConVar::GetInt(); // 1260
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1262; // 1262
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
				int nLineNumber);  // 1262
		Mix32HashFunctor::operator(
				uint32 n);  // 139
		PointerHashFunctor::operator(
				const void* s);  // 240
		CUtlMemory<CUtlHashtableEntry<const IMaterial2::Base(); // 650
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlMemory<CUtlHashtableEntry<const IMaterial2::Count(); // 651
		CUtlHashtableEntry<const IMaterial2::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<const IMaterial2::IdealIndex(
				uint32 slotmask);  // 667
		CUtlHashtable<const IMaterial2::DoLookup<const IMaterial2*>(
						const IMaterial2* x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
		CUtlMemory<CUtlHashtableEntry<const IMaterial2::operator[](
				int i);  // 706
		CUtlKeyValuePair<const IMaterial2::CUtlKeyValuePair<const IMaterial2*>(
							const IMaterial2* const& k);  // 1514
		Construct<CUtlKeyValuePair<const IMaterial2*, empty_t>, const IMaterial2*&>(CUtlKeyValuePair<const IMaterial2*, empty_t>* pMemory); // 706
		CUtlHashtable<const IMaterial2::DoInsert<const IMaterial2*>(
						const IMaterial2* k,
						unsigned int h,
						bool* pDidInsert);  // 695
		CUtlHashtable<const IMaterial2::DoInsert<const IMaterial2*>(
						const IMaterial2* k,
						unsigned int h,
						bool* pDidInsert);  // 240
		CUtlHashtable<const IMaterial2::Insert(
			KeyArg_t k);  // 1263
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1264
	}
	CSceneSystem::RegisterMaterialSeen(
				const IMaterial2* pMaterial);  // 1258
	CSceneSystem::RegisterMaterialSeen(
				const IMaterial2* pMaterial);  // 152
	ISceneLayer::GetDepthBiasStateOverride(); // 162
	ISceneLayer::GetStencilStateOverride(); // 163
	ISceneLayer::GetFillModeStateOverride(); // 164
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CRenderAttributes>::PutObject(
			CRenderAttributes* pInfo);  // 171
} /* size: 2021, variables: 7, inline expansions: 94 (3960 bytes) */

// <03EB1040> ../scenesystem/animatable.cpp:176
// variables: 3
// function call: 1
void CAnimatableSceneObjectDesc::BindCopyMaterial(IRenderContext* pRenderContext, CMeshDrawPrimitive_t* pPrimitive, DrawValues_t& drawValues, int nRequiredTextureSize)
{
	CSceneAnimatableObject* pObj; // 178
	const CRenderAttributes* pAttrs; // 180
	{
		const CSceneObjectExtraData_t* pExtraData; // 181
		CSceneObject::GetExtraData(); // 181
	}
} /* size: 0, variables: 2 */

// <03E954FD> ../scenesystem/animatable.cpp:176
// variables: 3
void CAnimatableSceneObjectDesc::BindCopyMaterial(IRenderContext* pRenderContext, CMeshDrawPrimitive_t* pPrimitive, DrawValues_t& drawValues, int nRequiredTextureSize)
{
	CSceneAnimatableObject* pObj; // 178
	const CRenderAttributes* pAttrs; // 180
	{
		const CSceneObjectExtraData_t* pExtraData; // 181
	}
} /* size: 0, variables: 2 */

// <03E94747> ../scenesystem/animatable.cpp:192
// variables: 27
// function calls: 42
void CAnimatableSceneObjectDesc::DrawPrimitive(IRenderContext* pRenderContext, const DrawViewParams_t& params, CMeshDrawPrimitive_t* pDrawPrim, const IMaterial2* pMaterial, IMaterialMode* pMode, int nRenderPass, DrawValues_t& prevDrawValues, bool bDepthMode, SceneSystemPerFrameStats_t& stats, int nInstancingScalar, ISceneLayer* pLayer)
{
	int nBlendWeightCount; // 195
	bool bMorphEnabled; // 196
	CMeshInstance* pCurrentMeshInstance; // 199
	CSceneAnimatableObject* pObj; // 200
	const CRenderSkeleton* pSkeleton; // 201
	bool bHasFlexControllerWeights; // 213
	int nTransformSlotIndex; // 221
	const char   __FUNCTION__; // 29965
	RenderInputLayout_t hInputLayout; // 226
	const CMaterialDrawDescriptor* pDrawDesc; // 229
	int nCurrentVB; // 230
	const bool  bVertexCacheEnabled; // 236
	int nNumTris; // 362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 223
	}
	{
		int nBaseVertex; // 243
		int nBaseVertexCache; // 255
		VertexBufferHandle_t hVB; // 256
		const CRenderMesh* pMesh; // 257
		{
			int d; // 244
			int nDrawCalls; // 244
			{
				const CMaterialDrawDescriptor* pDraw; // 246
				CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
				CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
				CUtlMemory<CSceneObjectData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
						int i);  // 305
				CMeshInstance::GetSceneObjectData(); // 342
				CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
						int i);  // 345
				CMeshInstance::GetDrawCall(
						int d);  // 246
				CMeshDrawPrimitive_t::GetDrawCall(); // 247
			}
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
			CMeshInstance::GetNumDrawCalls(); // 244
		}
		{
			int i; // 258
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 262
		}
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 281
		CMeshInstance::GetRenderMesh(); // 257
		CMeshDrawPrimitive_t::GetDrawCall(); // 256
	}
	{
		RenderInputLayout_t hPrevInputLayout; // 292
		int nRequiredTextureSize; // 299
		ConVar::GetInt(); // 321
		IMaterial2::GetBoolAttributeOrDefault(
						CUtlStringToken name,
						bool bDefault);  // 323
	}
	{
		int nRequiredTextureSize; // 347
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 343
		}
		{
			const CSceneObjectExtraData_t* pExtraData; // 181
			CSceneObject::GetExtraData(); // 181
		}
		CAnimatableSceneObjectDesc::BindCopyMaterial(
				IRenderContext* pRenderContext,
				CMeshDrawPrimitive_t* pPrimitive,
				DrawValues_t& drawValues,
				int nRequiredTextureSize);  // 348
	}
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 380
	CMeshInstance::GetRenderSkeleton(); // 201
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 204
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 206
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 214
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 216
	CMeshDrawPrimitive_t::GetDrawCall(); // 229
	CSceneSystem::IsSkinnedVertexCacheEnabled(); // 33
	IsVertexCacheEnabled(bool bMorph,
				int nBlendWeightCount);  // 236
} /* size: 0, variables: 13, inline expansions: 12 (237 bytes) */

// <03E9395E> ../scenesystem/animatable.cpp:369
// variables: 26
// function calls: 46
void CAnimatableSceneObjectDesc::DrawArrayExt(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats, const IMaterial2* pOverrideMaterial)
{
	bool bOverrideDepthMaterial; // 380
	const IMaterial2* pMaterial; // 381
	const CFrustum& frustum; // 390
	DrawViewParams_t drawViewParams; // 392
	CUtlStringToken shaderMode; // 398
	uint32 nToken; // 399
	IMaterialMode* pCurMode; // 405
	bool bDepthMode; // 415
	{
		int p; // 418
		{
			DrawValues_t prevDrawValues; // 420
			{
				int i; // 430
				{
					CMeshDrawPrimitive_t* pPrim; // 432
					CMeshDrawPrimitive_t::GetDrawCall(); // 438
				}
			}
		}
	}
	Vector::Vector(); // 7
	DrawViewParams_t::DrawViewParams_t(); // 392
	CUtlStringToken::CUtlStringToken(); // 398
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
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 64333
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 64343
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 64353
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
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
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 270
		CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 381
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				uint32 k,
				IntVector4D nDefault);  // 393
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				IntVector4D nDefault);  // 465
	CRenderAttributes::GetIntValue(
			CUtlStringToken nTokenID,
			int nDefaultValue);  // 399
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 413
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
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		const CUtlStringToken& nTok,
		TextureAttr_t nValue);  // 619
	CRenderAttributes::SetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture txtr,
			int32 nSingleMipLevelToBind);  // 413
	CMeshDrawPrimitive_t::GetDrawCall(); // 385
} /* size: 894, variables: 8, inline expansions: 21 (763 bytes) */

// <03E93872> ../scenesystem/animatable.cpp:453
void CAnimatableSceneObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats)
{
} /* size: 29 */

// <03EB111E> ../scenesystem/animatable.cpp:459
// variables: 6
void CAnimatableSceneObjectDesc::DebugObjectTransforms(CSceneAnimatableObject* pObj)
{
	bool bCaptureSnapshot; // 461
	AnimationSnapshot_t snapshot; // 468
	int nBoneCount; // 476
	int nFlexControllerCount; // 480
	CUtlString outErrorMessage; // 484
	CUtlBuffer buf; // 485
} /* size: 0, variables: 6 */

// <03E9348A> ../scenesystem/animatable.cpp:489
// variables: 4
// function calls: 3
void CAnimatableSceneObjectDesc::SetupAnimationForObject(CSceneView* pView, CSceneAnimatableObject* pObj)
{
	ISceneAnimatableProceduralBoneTransforms* pProceduralBoneTransforms; // 492
	{
		const CSceneView* pRootView; // 495
		int nLodLevel; // 501
		LODGroupMask_t lodGroupMask; // 502
		CSceneView::GetParent(); // 496
		CSceneView::GetParent(); // 498
	}
	CSceneAnimatableObject::GetProceduralBoneTransforms(); // 492
} /* size: 194, variables: 1, inline expansions: 1 (7 bytes) */

// <03E933AE> ../scenesystem/animatable.cpp:509
void CAnimatableSceneObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& args, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
} /* size: 58 */

// <03E91557> ../scenesystem/animatable.cpp:518
// variables: 11
// function calls: 109
void CAnimatableSceneObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
	const CSceneObject* pObject; // 520
	Vector vMins; // 521
	Vector vMaxs; // 521
	{
		Vector vLightingOrigin; // 529
		float flRadius; // 530
		float flLineStart; // 531
		float flLineEnd; // 532
		uint8 r; // 533
		uint8 g; // 533
		uint8 b; // 533
		uint8 a; // 533
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 435
		matrix3x4_t::SetToIdentity(); // 423
		matrix3x4_t::matrix3x4_t(); // 422
		matrix3x4_t::SetOrigin(
				const Vector& p);  // 424
		ISceneViewDebugOverlays::Sphere(
			const Vector& vCenter,
			float flRadius,
			const VertexColor_t& vecColor,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 435
		ISceneViewDebugOverlays::Sphere(
			const Vector& vCenter,
			float flRadius,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 534
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 535
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 535
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 535
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 535
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 535
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 536
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 536
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 536
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 536
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 536
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 537
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 537
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 537
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 537
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 537
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 538
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 538
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 538
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 538
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 538
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 539
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 539
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 539
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 539
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 539
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 540
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 358
		ISceneViewDebugOverlays::Line(
			const Vector& vEndPoint0,
			const Vector& vEndPoint1,
			int r,
			int g,
			int b,
			int a,
			bool bNoDepthTest,
			float64 flTimeToLive);  // 540
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 540
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 540
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 540
	}
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 522
	Vector::Vector(); // 521
	Vector::Vector(); // 521
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 523
	ISceneViewDebugOverlays::Box(
		const Vector& vWorldMins,
		const Vector& vWorldMaxs,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 523
	Vector::operator!=(
			const Vector& src);  // 2370
	CSceneObject::HasLightingOrigin(); // 527
} /* size: 1614, variables: 3, inline expansions: 7 (254 bytes) */

// <03E910FC> ../scenesystem/animatable.cpp:549
// variables: 8
// function calls: 13
void GetMorphCompositeSetForMeshInstance(CMorphSet* pMorphSet, CMorphCompositeSet** ppMorphCompositeSet, MorphCompositeSetTracker_t* MorphCompositeSetTrackers, int* pNumMorphCompositeSetTrackers)
{
	int nNumMorphCompositeSetTrackers; // 556
	const char   __FUNCTION__; // 30484
	MorphCompositeSetTracker_t* pMorphCompositeSetTracker; // 577
	CMorphCompositeSet* pMorphCompositeSet; // 582
	{
		int i; // 557
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 572
	}
	{
		CMorphCompositeSet* pCurHead; // 550
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 556
		ReadVolatileMemory<CMorphCompositeSet*>(CMorphCompositeSet* const* pPtr); // 550
	}
	RemoveHeadTS<CMorphCompositeSet>(CMorphCompositeSet *& pHead); // 970
	CUtlIntrusiveList<CMorphCompositeSet>::RemoveHeadTS(); // 582
	CUtlIntrusiveList<MorphCompositeDesc_t>::CUtlIntrusiveList(); // 24
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 24
	CMorphCompositeSet::CMorphCompositeSet(); // 586
	{
		CMorphCompositeSet* pCurHead; // 516
		ReadVolatileMemory<CMorphCompositeSet*>(CMorphCompositeSet* const* pPtr); // 516
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 519
	}
	AddToHeadTS<CMorphCompositeSet, CMorphCompositeSet>(CMorphCompositeSet *& pHead,
								CMorphCompositeSet* pNode);  // 965
	CUtlIntrusiveList<CMorphCompositeSet>::AddToHeadTS(
			CMorphCompositeSet* pNode);  // 592
} /* size: 0, variables: 4, inline expansions: 7 (174 bytes) */

// <03E91066> ../scenesystem/animatable.cpp:601
// function call: 1
void IsMorphing(const CRenderMesh* pMesh)
{
	CRenderMesh::GetMorphSet(); // 604
} /* size: 0, inline expansions: 1 (0 bytes) */

// <03E90DA8> ../scenesystem/animatable.cpp:616
// variables: 5
// function calls: 4
void SetupFlexWeights(const CRenderMesh* pMesh, float* pSrcFlexControllerWeights, int nSrcFlexControllerWeightsCount, const int16* pLocalToModelFlexControllerMapping, float* pFlexWeights, float* pFlexDelayedWeights, float* pFlexTimeLast)
{
	int nFlexWeights; // 624
	const float  flTimeCurrent; // 641
	{
		const float  flFlexTimeDelta; // 649
		const float  flDecay; // 650
		{
			int f; // 652
		}
		ExponentialDecay(float decayTo,
				float decayTime,
				float dt);  // 650
	}
	CRenderMesh::GetMorphSet(); // 638
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 645
} /* size: 300, variables: 2, inline expansions: 3 (37 bytes) */

// <03E903C7> ../scenesystem/animatable.cpp:661
// variables: 21
// function calls: 27
void SetupMorphCompositing(const CRenderMesh* pMesh, float* pFlexWeights, float* pFlexDelayedWeights, uint32 nSceneSystemFrameCounter, int nTransformSlotIndexForMorphInfo)
{
	const char   __FUNCTION__; // 30161
	MorphCompositeSetTracker_t morphCompositeSetTrackers; // 665
	int nNumMorphCompositeSetTrackers; // 666
	int nFlexWeights; // 668
	bool bAddedMorph; // 670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 663
	}
	{
		int nMorph; // 673
		{
			CMorphSet* pMorphSet; // 678
			const CMorphData* pMorphData; // 683
			uint nCurrentFrame; // 690
			CMorphCompositeSet* pMorphCompositeSet; // 705
			bool bNew; // 706
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 700
			}
			{
				MorphCompositeDesc_t* pMorphCompositeDesc; // 717
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 712
				}
				CUtlIntrusiveList<MorphCompositeDesc_t>::Head(); // 712
				CMorphCompositeSet::SetTransformSlotIndexForMorphInfo(
									int nTransformSlotIndexForMorphInfo);  // 713
				{
					MorphCompositeDesc_t* pCurHead; // 550
					ThreadInterlockedCompareExchange64(volatile int64* p,
										int64 value,
										int64 comparand);  // 417
					ThreadInterlockedAssignPointerIf(volatile void** p,
									void* value,
									void* comparand);  // 556
					ReadVolatileMemory<MorphCompositeDesc_t*>(MorphCompositeDesc_t* const* pPtr); // 550
				}
				RemoveHeadTS<MorphCompositeDesc_t>(MorphCompositeDesc_t *& pHead); // 970
				CUtlIntrusiveList<MorphCompositeDesc_t>::RemoveHeadTS(); // 717
				AddToHead<MorphCompositeDesc_t, MorphCompositeDesc_t>(MorphCompositeDesc_t *& head,
											MorphCompositeDesc_t* node);  // 960
				CUtlIntrusiveList<MorphCompositeDesc_t>::AddToHead(
						MorphCompositeDesc_t* node);  // 731
			}
			CRenderMesh::GetMorphSet(); // 678
			CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::IsValidIndex(
					int i);  // 209
			CUtlMemory<FlexDescMapping_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::operator[](
					int i);  // 212
			CMorphSet::FindMorphData(
					int nFlexDesc);  // 683
			ReadVolatileMemory<unsigned int>(const unsigned int* pPtr); // 141
			CMorphSet::GetFrame(); // 690
			ThreadInterlockedAssignIf(volatile int32* p,
							int32 value,
							int32 comparand);  // 433
			ThreadInterlockedAssignIf(volatile uint32* p,
							uint32 value,
							uint32 comparand);  // 146
			CMorphSet::UpdateFrameCountTS(
						int nNewFrameCount,
						int nCurrentFrameCount);  // 694
			{
				CMorphSet* pCurHead; // 516
				ReadVolatileMemory<CMorphSet*>(CMorphSet* const* pPtr); // 516
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 417
				ThreadInterlockedAssignPointerIf(volatile void** p,
								void* value,
								void* comparand);  // 519
			}
			AddToHeadTS<CMorphSet, CMorphSet>(CMorphSet *& pHead,
								CMorphSet* pNode);  // 965
			CUtlIntrusiveList<CMorphSet>::AddToHeadTS(
					CMorphSet* pNode);  // 696
			ReadVolatileMemory<unsigned int>(const unsigned int* pPtr); // 141
			CMorphSet::GetFrame(); // 700
		}
	}
	{
		SceneSystemTransformEntry_t* pMorphTransform; // 746
		const bool  bSM30; // 747
		float flURange; // 748
		float flVRange; // 749
		SetTransformTextureMorphSubrect(float flUOffset,
						float flURange,
						float flVOffset,
						float flVRange,
						matrix3x4a_t* pTransform);  // 756
	}
} /* size: 0, variables: 5 */

// <03E8FEF3> ../scenesystem/animatable.cpp:760
// variables: 13
// function calls: 12
void SetupBones(BoneSetupInfo_t* pBoneSetup)
{
	SceneSystemTransformEntry_t* pTransformBufferOutput; // 762
	matrix3x4a_t* pMasterBoneInput; // 766
	matrix3x4a_t* pMasterBoneInputPrevious; // 767
	int nNumMasterBoneInput; // 769
	const CRenderSkeleton* pRenderSkeleton; // 771
	const CRenderMesh* pMesh; // 772
	int nBones; // 777
	const char   __FUNCTION__; // 29894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 782
	}
	{
		int b; // 787
		{
			const int  nIndex; // 790
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 791
			}
			matrix3x4_t::matrix3x4_t(); // 290
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 290
			matrix3x4a_t::matrix3x4a_t(
					const matrix3x4_t& src);  // 795
		}
	}
	{
		int i; // 803
	}
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 766
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 772
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 769
} /* size: 0, variables: 8, inline expansions: 5 (81 bytes) */

// <03E8D672> ../scenesystem/animatable.cpp:810
// variables: 45
// function calls: 155
void CAnimatableSceneObjectDesc::FindOrAllocateTransforms(CSceneAnimatableObject* pObj, CMeshInstance* pMeshInstance, const CRenderSkeleton* pSkeleton, const CMeshDrawPrimitive_t* pDrawPrim, uint nBlendWeightCount, bool& bMorphInOut)
{
	const char   __FUNCTION__; // 30237
	const ExtraShaderData_t  extraShaderData; // 818
	const bool  bIsDefaultExtraShaderData; // 819
	const uint32  nSceneSystemFrameCounter; // 820
	union CachedSlotInfo_t* pCache; // 822
	union CachedSlotInfo_t originalCachedSlotInfo; // 824
	bool bHit; // 825
	uint32 nOriginalCachedFrameCounter; // 871
	FlexDescSetupInfo_t* pFlexSetupJob; // 885
	const bool  bUseVertexCache; // 954
	const CRenderMesh* pMesh; // 956
	int nVertexCacheOffset; // 959
	int nTransformsOut; // 970
	int nTransformSlotIndex; // 971
	int nTransformSlotIndexForMorphInfo; // 1024
	SceneSystemTransformEntry_t* pTranslucencyTransform; // 1025
	SceneSystemTransformEntry_t* pMorphTransform; // 1026
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 816
	}
	{
		CachedSlotAndExtraData_t new1; // 856
		{
			int i; // 831
			CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Count(); // 831
			CUtlMemory<CachedSlotAndExtraData_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::operator[](
					int i);  // 834
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 280
			ExtraShaderData_t::operator==(
					const ExtraShaderData_t& rhs);  // 835
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
			unsigned int nSpinSleepTime);  // 828
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 845
		CUtlMemory<CachedSlotAndExtraData_t, int>::NumAllocated(); // 1196
		CUtlMemory<CachedSlotAndExtraData_t, int>::Base(); // 112
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Base(); // 368
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CachedSlotAndExtraData_t, int>::IsGrowable(); // 823
		CUtlMemory<CachedSlotAndExtraData_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CachedSlotAndExtraData_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CachedSlotAndExtraData_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::GrowMemory(
				int num);  // 1198
		CopyConstruct<CachedSlotAndExtraData_t>(CachedSlotAndExtraData_t* pMemory,
							const CachedSlotAndExtraData_t& src);  // 1201
		CUtlMemory<CachedSlotAndExtraData_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Element(
			int i);  // 1201
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::AddToTail(
				const CachedSlotAndExtraData_t& src);  // 861
		CUtlMemory<CachedSlotAndExtraData_t, int>::operator[](
				int i);  // 630
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Tail(); // 862
		ReadVolatileMemory<long long unsigned int>(const long long unsigned int* pPtr); // 426
		CMeshInstance::GetCachedSlotInfo(); // 864
		{
			int i; // 257
			CUtlMemory<CachedSlotAndExtraData_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Remove(
				int elem);  // 261
			CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Count(); // 257
			CUtlMemory<CachedSlotAndExtraData_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::Element(
				int i);  // 259
			operator()(const class* __closure,
					const CachedSlotAndExtraData_t& val); // 259
		}
		CUtlVectorBase<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> >::RemoveElementsPassingTest<CAnimatableSceneObjectDesc::FindOrAllocateTransforms(
																class& f);  // 851
	}
	{
		const CRenderMesh* pMesh; // 888
		int nFlexWeights; // 889
		{
			float flFlexTimeLastFallback; // 904
			float* pFlexWeights; // 906
			float* pFlexDelayedWeights; // 907
			float* pFlexTimeLast; // 908
			CMeshInstanceAnimatableData* pMeshInstanceAnimatableData; // 910
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 911
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 926
			}
			{
				int f; // 940
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 913
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 916
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 919
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 930
			CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
			CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 402
			CMeshInstance::GetNumBones(); // 396
			CMeshInstance::GetFlexControllerLocalToMasterTable(); // 936
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 936
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 936
		}
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 888
		{
			FlexDescSetupInfo_t* pCurHead; // 550
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 556
			ReadVolatileMemory<FlexDescSetupInfo_t*>(FlexDescSetupInfo_t* const* pPtr); // 550
		}
		RemoveHeadTS<FlexDescSetupInfo_t>(FlexDescSetupInfo_t *& pHead); // 970
		CUtlIntrusiveList<FlexDescSetupInfo_t>::RemoveHeadTS(); // 630
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 55
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Clear(); // 595
		FlexDescSetupInfo_t::Init(); // 590
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 128
		CModelMeshHandle::CModelMeshHandle(); // 589
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 589
		FlexDescSetupInfo_t::FlexDescSetupInfo_t(); // 634
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 55
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
		CWeakHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 55
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Clear(); // 595
		FlexDescSetupInfo_t::Init(); // 636
		CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::GetFreeSetupJob(); // 893
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 38
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase(); // 142
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 100
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelHandle(); // 188
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetMeshIndex(); // 189
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(
			const CModelMeshHandleStrong& h);  // 143
		CModelMeshHandle::CModelMeshHandle(
				const CModelMeshHandleStrong& h);  // 894
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
		CWeakHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 38
		CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::operator=(
				const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &);  // 124
		CModelMeshHandle::operator=(
				const CModelMeshHandle  &);  // 894
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 402
		CMeshInstance::GetNumBones(); // 396
		CMeshInstance::GetFlexControllerLocalToMasterTable(); // 896
		CSceneObject::GetMeshInstanceData(); // 902
		{
			FlexDescSetupInfo_t* pCurHead; // 516
			ReadVolatileMemory<FlexDescSetupInfo_t*>(FlexDescSetupInfo_t* const* pPtr); // 516
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 519
		}
		AddToHeadTS<FlexDescSetupInfo_t, FlexDescSetupInfo_t>(FlexDescSetupInfo_t *& pHead,
									FlexDescSetupInfo_t* pNode);  // 965
		CUtlIntrusiveList<FlexDescSetupInfo_t>::AddToHeadTS(
				FlexDescSetupInfo_t* pNode);  // 624
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 625
		CPreRenderSubmissionSetupList<FlexDescSetupInfo_t>::AddSetup(
			FlexDescSetupInfo_t* pSetup);  // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		int i; // 983
		{
			VertexBufferHandle_t hVB; // 985
			VertexBufferLayout_t layout; // 986
			int nVertCount; // 987
			CUtlMemory<VertexBufferLayout_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::operator[](
					int i);  // 986
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 987
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 987
		}
	}
	{
		union CachedSlotInfo_t cachedSlotInfo; // 1000
		{
		}
		ReadVolatileMemory<long long unsigned int>(const long long unsigned int* pPtr); // 426
		CMeshInstance::GetCachedSlotInfo(); // 1000
	}
	{
		SceneSystemTransformEntry_t* pTransformBuffer; // 1033
		BoneSetupInfo_t* pBoneSetupJob; // 1038
		{
			BoneSetupInfo_t* pCurHead; // 550
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 556
			ReadVolatileMemory<BoneSetupInfo_t*>(BoneSetupInfo_t* const* pPtr); // 550
		}
		RemoveHeadTS<BoneSetupInfo_t>(BoneSetupInfo_t *& pHead); // 970
		CUtlIntrusiveList<BoneSetupInfo_t>::RemoveHeadTS(); // 630
		BoneSetupInfo_t::BoneSetupInfo_t(); // 634
		CPreRenderSubmissionSetupList<BoneSetupInfo_t>::GetFreeSetupJob(); // 1038
		CMeshInstance::GetBoneLocalToMasterTable(); // 1042
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 402
		CMeshInstance::GetNumBones(); // 1043
		{
			BoneSetupInfo_t* pCurHead; // 516
			ReadVolatileMemory<BoneSetupInfo_t*>(BoneSetupInfo_t* const* pPtr); // 516
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 519
		}
		AddToHeadTS<BoneSetupInfo_t, BoneSetupInfo_t>(BoneSetupInfo_t *& pHead,
								BoneSetupInfo_t* pNode);  // 965
		CUtlIntrusiveList<BoneSetupInfo_t>::AddToHeadTS(
				BoneSetupInfo_t* pNode);  // 624
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 625
		CPreRenderSubmissionSetupList<BoneSetupInfo_t>::AddSetup(
			BoneSetupInfo_t* pSetup);  // 1045
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 1043
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 280
	ExtraShaderData_t::operator==(
			const ExtraShaderData_t& rhs);  // 819
	CSceneSystem::GetFinishRenderingViewsCounter(); // 820
	{
	}
	ReadVolatileMemory<long long unsigned int>(const long long unsigned int* pPtr); // 426
	CMeshInstance::GetCachedSlotInfo(); // 869
	CSceneSystem::IsSkinnedVertexCacheEnabled(); // 33
	IsVertexCacheEnabled(bool bMorph,
				int nBlendWeightCount);  // 954
	CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 281
	CMeshInstance::GetRenderMesh(); // 956
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 963
	{
		union CachedSlotInfo_t t; // 412
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 417
	}
	CMeshInstance::SetCachedSlotInfo(
				uint nFrame,
				uint m_nTransformSlotIndex,
				bool bMorphing,
				union CachedSlotInfo_t originalCachedSlotInfo);  // 998
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1017
	MarkTransformTextureMorphingUnused(matrix3x4a_t* pTransform); // 1055
} /* size: 0, variables: 17, inline expansions: 16 (584 bytes) */


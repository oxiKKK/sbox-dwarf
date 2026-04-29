
//
// scenesystem/sceneobjectdescs.cpp
//
//	referenced by: libengine2.so
//
//	functions: 19
//

// <0400F95C> ../scenesystem/sceneobjectdescs.cpp:23
void MaterialBindState_t::MaterialBindState_t()
{
} /* size: 0 */

// <0400F940> ../scenesystem/sceneobjectdescs.cpp:23
inline void MaterialBindState_t::MaterialBindState_t()
{
} /* size: 0 */

// <0401774A> ../scenesystem/sceneobjectdescs.cpp:39
// variable: 1
// function calls: 23
void CBaseSceneObjectDesc::Create()
{
	CSceneObject* pNew; // 41
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
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
	IGenericInterface::IGenericInterface(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CSceneObject>::GetObject(); // 41
	CSceneObject::SetIsFromPool(); // 43
} /* size: 364, variables: 1, inline expansions: 23 (1113 bytes) */

// <040175C9> ../scenesystem/sceneobjectdescs.cpp:47
// variable: 1
// function calls: 4
void CalculateBatchFlags(const CMaterialDrawDescriptor* pDrawCall, ESceneObjectFlags nSceneObjectFlags, ESceneObjectTypeFlags nObjectTypeFlags, bool bHasMorphs)
{
	EBatchFlags nBatchFlags; // 49
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 50
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 55
	operator|=(EBatchFlags& a,
			EBatchFlags b);  // 57
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 64
} /* size: 165, variables: 1, inline expansions: 4 (6 bytes) */

// <0401749E> ../scenesystem/sceneobjectdescs.cpp:97
// variables: 4
// function calls: 2
void DebugColor(intp value)
{
	const uint32  nBits; // 100
	const uint32  nBitMask; // 101
	const uint32  nHash; // 103
	Vector vColor; // 105
	HashIntp(const intp key); // 103
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 107
} /* size: 190, variables: 4, inline expansions: 2 (19 bytes) */

// <0401248C> ../scenesystem/sceneobjectdescs.cpp:135
// variables: 109
// function calls: 317
void CBaseSceneObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& gpArgs, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
	const ISceneLayer* pLayer; // 141
	const IMaterial2* pOverrideMaterial; // 142
	uint8 nClassSettings; // 144
	bool bWantAlphaBlended; // 145
	bool bDepthLayer; // 146
	bool bSkipAlphaCheck; // 147
	bool bForceMaterialBatchable; // 149
	bool bVisualizeSceneObjects; // 150
	bool bVisualizeSceneObjectMaterials; // 151
	bool bVisualizeTextureSize; // 152
	bool bVisualizeBoundsGroup; // 153
	bool bVisualizeLOD; // 154
	bool bDisableWorldMaterials; // 155
	int nShowHiPolyDrawCalls; // 157
	const CSceneView* pSceneView; // 163
	CLightBinner2* pLightBinner2; // 164
	bool bCustomLightBinnerHasLPVorEnvMaps; // 165
	LightProbeVolumeBinding_t lpvBinding; // 168
	EBatchableInModeFlags_t nCanBatchWithDynamicShaderConstants; // 208
	Vector4D vObjectTintRGBA; // 214
	CMeshInstance* pCurrentMeshInstance; // 221
	const char   __FUNCTION__; // 46794
	{
		const CSceneObjectLightingCache_t* pCache; // 174
		{
			Vector vLightingOrigin; // 177
			CUtlStringToken lightGroup; // 178
			CUtlStringToken::CUtlStringToken(); // 450
			{
				int nLightGroupInt; // 453
				{
					__m128i retVal; // 1105
					_mm_set_epi32(int __q3,
							int __q2,
							int __q1,
							int __q0);  // 648
					_mm_set1_epi32(int __A); // 1106
				}
				ReplicateIX4<>(int nValue); // 461
				{
					int nIndex; // 465
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
						const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 55616
						CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 55626
						CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 55636
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
							const IntVector4D ** pValueOut);  // 465
				}
				CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
					IntVector4D* pOutputValue,
					const CUtlStringToken& attrName);  // 476
				CRenderAttributes::GetIntValue(
						int* pOutputValue,
						CUtlStringToken nTokenID);  // 454
				{
					uint32 nHashCode; // 456
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 457
					CUtlStringToken::SetHashCode(
							uint32 nCode);  // 458
				}
			}
			CSceneObject::GetLightGroup(); // 178
			ConVar::GetInt(); // 351
			ConVar::GetBool(); // 183
			LightProbeVolumeBinding_t::Invalidate(); // 231
			CSceneObjectLightingCache_t::Invalidate(); // 185
			CLightBinner2::GetLightProbeVolumeCacheFingerprint(); // 188
			Vector::operator!=(
					const Vector& src);  // 237
			CUtlStringToken::operator!=(
					const CUtlStringToken& other);  // 237
			Vector::operator=(
					const Vector& vOther);  // 240
			LightProbeVolumeBinding_t::Invalidate(); // 246
			CSceneObjectLightingCache_t::InvalidateIfChanged(
						uint32 lpvFingerprint,
						const Vector& vLightingOrigin,
						const CUtlStringToken& lightGroup);  // 188
			CSceneObject::HasFlags(
				ESceneObjectFlags nFlags);  // 193
			Vector::operator=(
					const Vector& vOther);  // 201
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 637
			CSceneObject::GetBounds(
					AABB_t& bounds);  // 638
			CSceneObject::GetBounds(); // 195
		}
		CSceneObject::GetLightingCache(); // 174
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 222
	}
	{
		bool bDrawMeshGroup; // 226
		bool bDrawLod; // 227
		const CSceneObjectData* pSceneObjectData; // 228
		const CRenderMesh* pMesh; // 237
		bool bHasMorphs; // 239
		bool bAllowMorphs; // 241
		const CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& drawCalls; // 246
		{
			int d; // 249
			int nDrawCalls; // 249
			{
				const CMaterialDrawDescriptor* pDrawOp; // 251
				bool bIsAlphaBlended; // 253
				Vector4DAligned vTintAndFade; // 293
				CMeshDrawPrimitive_t& out; // 347
				{
					const CFrustum& cullFrustum; // 262
					const CDrawCullingData& cullingData; // 263
					{
						bool bVisibleInAuxCamera; // 266
						{
							int32 nAuxCamera; // 271
							{
								const CFrustum& auxFrustum; // 273
								Vector::operator=(
										const Vector& vOther);  // 166
								DotProduct(const Vector& a,
										const Vector& b);  // 171
								VectorTransform(const Vector& in1,
										const matrix3x4_t& in2,
										Vector& out);  // 1307
								Vector::Vector(); // 1306
								VectorTransform(const Vector& in1,
										const matrix3x4_t& in2);  // 2707
								matrix3x4_t::TransformVector(
										const Vector& v0);  // 160
								VectorRotate(const Vector& in1,
										const matrix3x4_t& in2,
										Vector& out);  // 1315
								Vector::Vector(); // 1314
								VectorRotate(const Vector& in1,
										const matrix3x4_t& in2);  // 2742
								matrix3x4_t::RotateVector(
										const Vector& v0);  // 161
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 161
								Vector::Vector(); // 164
								Camera_t::IsOrthographic(); // 310
								CFrustum::IsOrthographic(); // 165
								VectorSubtract(const Vector& a,
										const Vector& b,
										Vector& c);  // 1444
								Vector::Vector(); // 1443
								Vector::operator-(
										const Vector& v);  // 168
								Vector::Normalized(); // 168
								Vector::operator=(
										const Vector& vOther);  // 168
								CDrawCullingData::IsVisible(
										const CFrustum& frustum,
										const matrix3x4_t& transform);  // 274
								CUtlMemory<CFrustum, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::operator[](
										int i);  // 273
							}
							CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::Count(); // 271
						}
					}
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1307
					Vector::Vector(); // 1306
					VectorTransform(const Vector& in1,
							const matrix3x4_t& in2);  // 2707
					matrix3x4_t::TransformVector(
							const Vector& v0);  // 160
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1315
					Vector::Vector(); // 1314
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2);  // 2742
					matrix3x4_t::RotateVector(
							const Vector& v0);  // 161
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 161
					Vector::Vector(); // 164
					Camera_t::IsOrthographic(); // 310
					CFrustum::IsOrthographic(); // 165
					Vector::operator=(
							const Vector& vOther);  // 166
					DotProduct(const Vector& a,
							const Vector& b);  // 171
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 168
					Vector::Normalized(); // 168
					Vector::operator=(
							const Vector& vOther);  // 168
					CDrawCullingData::IsVisible(
							const CFrustum& frustum,
							const matrix3x4_t& transform);  // 264
					CSceneObject::GetTransform(); // 264
					CUtlMemory<CDrawCullingData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::operator[](
							int i);  // 263
				}
				{
					float flSeverity; // 300
					Vector vColor; // 302
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 301
					Vector::Vector(); // 302
					Vector4DAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 27
					Vector4DAligned::Vector4DAligned(
							const Vector& vec3,
							vec_t w);  // 305
				}
				{
					const IMaterial2* pMaterialPtr; // 309
					float fObjectVariation; // 310
					Vector vHSL; // 313
					Vector vRGB; // 313
					HashIntp(const intp key); // 310
					HashIntp(const intp key); // 314
					Vector::Vector(); // 313
					Vector::Vector(); // 313
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 314
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 315
					Vector4DAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 27
					Vector4DAligned::Vector4DAligned(
							const Vector& vec3,
							vec_t w);  // 317
					CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 271
					CMaterialDrawDescriptor::GetMaterialPtr(); // 309
				}
				{
					int lodLevel; // 325
					Vector4DAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 27
					Vector4DAligned::Vector4DAligned(
							const Vector& vec3,
							vec_t w);  // 328
					CSceneObject::GetCurrentLODLevel(); // 325
					Min<int>(const int& val1,
						const int& val2);  // 332
					Vector4DAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 27
					Vector4DAligned::Vector4DAligned(
							const Vector& vec3,
							vec_t w);  // 332
				}
				{
					float flLerp; // 342
					{
						float flViewAreaScale; // 1267
						float flWorldAreaToScreenArea; // 1268
						Max<float>(const float& val1,
								const float& val2);  // 1268
					}
					GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 1263
					GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeForUVDensity(
										float fUVDensity);  // 1259
					GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeForUVDensity(
										float fUVDensity);  // 342
					Vector4DAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 27
					Vector4DAligned::Vector4DAligned(
							const Vector& vec3,
							vec_t w);  // 343
				}
				{
					const IMaterial2* pMaterialPtr; // 370
					CMeshDrawPrimitive_t::SetMaterial(
							const IMaterial2* pMaterial);  // 376
					CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 271
					CMaterialDrawDescriptor::GetMaterialPtr(); // 370
					CSceneObject::GetModel(); // 2419
					Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoFor this); // 2421
					{
						int index; // 2423
						Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoFor this); // 2424
						{
							HMaterial material; // 2426
							CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::operator[](
									int i);  // 588
							operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
									int i);  // 2426
							CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
							CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 2426
							CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
							StaticInvalidHandle(void); // 2427
							CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 2427
						}
					}
					{
						int i; // 2431
						Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 2431
						{
							const CSceneObjectMaterialOverrideEntry& entry; // 2433
							int value; // 2438
							CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
									int i);  // 588
							operator[](const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
									int i);  // 2433
							CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
							FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
							StaticInvalidHandle(void); // 2435
							CStrongHandle<InfoForResourceTypeIMaterial2>::operator==(
									const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 2435
							CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 2441
						}
					}
					CSceneObject::GetMaterialOverride(
								const ISceneLayer* pLayer,
								const IMaterial2* existingMaterial);  // 373
				}
				{
					EBatchableInModeFlags_t nFlags; // 381
					bool bMaterialIsBatchable; // 382
					operator&(RenderMeshDrawPrimitiveFlags_t a,
							RenderMeshDrawPrimitiveFlags_t b);  // 381
					ISceneLayer::GetShaderMode(); // 382
					ThreadInterlockedIncrement(volatile int32* p); // 576
					CInterlockedIntT<int, 4>::operator++(); // 582
					CInterlockedIntT<int, 4>::operator++(
							int);  // 385
					operator|=(EBatchFlags& a,
							EBatchFlags b);  // 386
				}
				{
					float flViewAreaScale; // 1267
					float flWorldAreaToScreenArea; // 1268
					Max<float>(const float& val1,
							const float& val2);  // 1268
				}
				GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 1263
				GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeForUVDensity(
									float fUVDensity);  // 1259
				GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeForUVDensity(
									float fUVDensity);  // 350
				Vector4DAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 27
				Vector4DAligned::Vector4DAligned(
						const Vector& vec3,
						vec_t w);  // 337
				CSceneObject::GetBoundsGroupIndex(); // 321
				Vector4DAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 27
				Vector4DAligned::Vector4DAligned(
						const Vector& vec3,
						vec_t w);  // 321
				CUtlMemory<CMeshDrawPrimitive_t, int>::NumAllocated(); // 1143
				CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Element(
					int i);  // 1148
				LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 1113
				Vector4D::Vector4D(); // 1113
				CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(); // 1479
				Construct<CMeshDrawPrimitive_t>(CMeshDrawPrimitive_t* pMemory); // 1148
				CUtlMemory<CMeshDrawPrimitive_t, int>::Base(); // 112
				CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Base(); // 368
				CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::AddToTail(); // 1380
				CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::operator[](
						int i);  // 1380
				CMeshPrimitiveOutputBuffer::Next(); // 1372
				CMeshPrimitiveOutputBuffer::Next(); // 347
				Vector4D::Vector4D(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 37
				Vector4DAligned::operator Vector4D(); // 348
				CMeshDrawPrimitive_t::SetMaterial(
						const IMaterial2* pMaterial);  // 2477
				Vector4D::operator=(
						const Vector4D& vOther);  // 2481
				CMeshDrawPrimitive_t::InitForObject(
						const CSceneObject* pObj,
						const Vector4D& vRGBAModulation,
						const ISceneLayer* pLayer,
						const LightProbeVolumeBinding_t& lpvBinding);  // 348
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
						int d);  // 1163
				CMeshDrawPrimitive_t::SetMeshAndDrawCall(
							CMeshInstance* pMeshInstance,
							int nDrawCall);  // 349
				CSceneObject::GetObjectTypeFlags(); // 351
				CSceneObject::GetFlags(); // 351
				operator&(RenderMeshDrawPrimitiveFlags_t a,
						RenderMeshDrawPrimitiveFlags_t b);  // 352
				CSceneObject::GetBakedLightingInfo(); // 352
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 362
				CInterlockedIntT<int, 4>::operator int(); // 294
				ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 362
				CMeshDrawPrimitive_t::SetMaterial(
						const IMaterial2* pMaterial);  // 362
				CMeshDrawPrimitive_t::SetMaterial(
						const IMaterial2* pMaterial);  // 366
				CSceneObject::GetTransform(); // 357
				CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
						int i);  // 251
				CMaterialDrawDescriptor::IsAlphaBlended(); // 253
				ConVar::GetInt(); // 351
				ConVar::GetBool(); // 260
				Vector4DAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 23
				Vector4DAligned::Vector4DAligned(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 296
			}
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 249
		}
		CMeshInstance::GetMeshGroupMask(); // 226
		CSceneObject::GetCurrentMeshGroupMask(); // 2204
		CSceneObject::GetCurrentMeshGroupMask(); // 226
		CMeshInstance::GetLODGroupMask(); // 227
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
		CUtlMemory<CSceneObjectData, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
				int i);  // 305
		CMeshInstance::GetSceneObjectData(); // 228
		CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
		CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 237
		CRenderMesh::GetMorphSet(); // 239
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 242
		CMeshInstance::GetNext(); // 403
	}
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 2389
	{
		int nCount; // 2392
		Count(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemo this); // 2392
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
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 55616
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 55626
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 55636
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
				int nDefaultValue);  // 256
		ISceneLayer::GetIntValue(
				CUtlStringToken nTokenID,
				int nDefaultValue);  // 2404
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 2405
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 2409
	CSceneObject::GetMaterialOverride(
				const ISceneLayer* pLayer);  // 142
	CSceneSystem::GetObjectSettings(
				const CSceneObject* pObj);  // 144
	ISceneLayer::GetObjectFlagsRequiredMask(); // 1240
	GeneratePrimitivesArgs_t::WantAlphaBlended(); // 145
	GeneratePrimitivesArgs_t::IsDepthRenderingPass(); // 146
	CSceneObject::IsPartiallyAlphaBlended(); // 147
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 149
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 150
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 155
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 155
	LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 168
	CSceneView::GetLightBinner2(); // 164
	CUtlVectorBase<CLightBinner2::EnvironmentMapData_t, CUtlMemory<CLightBinner2::EnvironmentMapData_t, int> >::Count(); // 29
	Count(const CUtlVectorBase<CLightBinner2::LightProbeVolumeData_t, CUtlMemory<CLightBinner2::LightProbeVolumeData_t, int> this); // 29
	CLightBinner2::HasLightProbesOrEnvMaps(); // 165
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 209
	CSceneObject::GetAlphaFade(); // 445
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 445
	CSceneObject::GetTintRGBA(); // 214
	CSceneObject::GetMeshInstanceData(); // 221
	CSceneObject::HasFlags(
		ESceneObjectFlags nFlags);  // 172
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
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 55616
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 55626
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 55636
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
			int nDefaultValue);  // 256
	ISceneLayer::GetIntValue(
			CUtlStringToken nTokenID,
			int nDefaultValue);  // 160
} /* size: 0, variables: 22, inline expansions: 34 (1679 bytes) */

// <040122EA> ../scenesystem/sceneobjectdescs.cpp:409
// variables: 4
// function calls: 4
void CBaseSceneObjectDesc::CanInstanceTogether(CMeshDrawPrimitive_t* pLeft, CMeshDrawPrimitive_t* pRight)
{
	const CMaterialDrawDescriptor* pLeftDrawCall; // 411
	const CMaterialDrawDescriptor* pRightDrawCall; // 412
	{
		const int  nNumBuffers; // 429
		{
			int i; // 430
		}
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 426
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 426
	}
	CMeshDrawPrimitive_t::GetDrawCall(); // 411
	CMeshDrawPrimitive_t::GetDrawCall(); // 412
} /* size: 145, variables: 2, inline expansions: 2 (8 bytes) */

// <04011EF5> ../scenesystem/sceneobjectdescs.cpp:446
// variables: 3
// function calls: 14
void CBaseSceneObjectDesc::AllocateTransforms(int nSlots, const PerInstanceParams_t* pParams)
{
	SceneSystemTransformEntry_t* pTransformData; // 449
	int nTransformSlotIndex; // 450
	{
		int s; // 454
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
						uint nBlendWeightCount);  // 457
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 457
	}
} /* size: 0, variables: 2 */

// <0402A934> ../scenesystem/sceneobjectdescs.cpp:466
// variable: 1
// function calls: 15
void CBaseSceneObjectDesc::FillTransforms(SceneSystemTransformEntry_t* pTransformData, int nSlots, const PerInstanceParams_t* pParams)
{
	{
		int s; // 472
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
						uint nBlendWeightCount);  // 475
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 475
	}
	CBaseSceneObjectDesc::FillTransforms(
			SceneSystemTransformEntry_t* pTransformData,
			int nSlots,
			const PerInstanceParams_t* pParams);  // 466
} /* size: 0, inline expansions: 1 (571 bytes) */

// <04011EA8> ../scenesystem/sceneobjectdescs.cpp:466
// variable: 1
void CBaseSceneObjectDesc::FillTransforms(SceneSystemTransformEntry_t* pTransformData, int nSlots, const PerInstanceParams_t* pParams)
{
	{
		int s; // 472
	}
} /* size: 0 */

// <04011CB8> ../scenesystem/sceneobjectdescs.cpp:482
// variables: 5
// function calls: 5
void CBaseSceneObjectDesc::BindDrawCall(IRenderContext* pRenderContext, const CMaterialDrawDescriptor* pDrawDesc, int& nCurrentVB)
{
	int nVertexBuffers; // 484
	IndexBufferHandle_t hIB; // 493
	int nIBBindOffset; // 494
	{
		VertexBufferHandle_t hVB; // 487
		int nVBBindOffset; // 488
		AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 269
		CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 273
		CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
				int i);  // 595
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::operator[](
				int i);  // 487
	}
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 484
} /* size: 146, variables: 3, inline expansions: 1 (3 bytes) */

// <04010BCC> ../scenesystem/sceneobjectdescs.cpp:498
// variables: 14
// function calls: 57
void CBaseSceneObjectDesc::BindMaterial(IRenderContext* pRenderContext, CMeshDrawPrimitive_t* pPrimitive, const IMaterial2* pMaterial, IMaterialMode* pMode, MaterialBindState_t* pBindState, RenderInputLayout_t hInputLayout, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	const char   __FUNCTION__; // 46642
	const CSceneObject* pSceneObject; // 512
	uint32 nShaderOverrides; // 513
	uint32 nStateToSet; // 514
	CRenderAttributes* pAttributes; // 517
	CSceneObjectExtraData_t* pExtraData; // 518
	const CRenderAttributes* pPrimAttributes; // 519
	RsStencilStateOverride_t stencilOverRide; // 571
	const RsDepthBiasStateOverride_t* pDepthBiasStateOverride; // 572
	const RsStencilStateOverride_t* pStencilStateOverride; // 573
	const RsFillModeOverride_t* pFillModeOverride; // 574
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 508
	}
	{
		int nPasses; // 535
	}
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
				const IMaterial2* pMaterial);  // 510
	CSceneObject::GetExtraData(); // 518
	CRenderAttributes::GetParent(); // 524
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
			const CRenderAttributes* pParent);  // 526
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 251
	RsStencilStateDesc_t::RsStencilStateDesc_t(); // 307
	RsStencilStateOverride_t::RsStencilStateOverride_t(); // 571
	ISceneLayer::GetFillModeStateOverride(); // 574
	ISceneLayer::GetDepthBiasStateOverride(); // 572
	ISceneLayer::GetStencilStateOverride(); // 573
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 878
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 879
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 880
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 881
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 882
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 883
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 884
	CUtlAttributeList<void::SetParent(
			const ThisType_t* pParent);  // 885
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetParent(
			const ThisType_t* pParent);  // 886
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 861
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 593
} /* size: 0, variables: 11, inline expansions: 33 (1459 bytes) */

// <040104FA> ../scenesystem/sceneobjectdescs.cpp:599
// variables: 9
// function calls: 10
void CBaseSceneObjectDesc::DrawInstances(IRenderContext* pRenderContext, const DrawViewParams_t& params, PerInstanceParams_t* pPerInstanceParams, int nInstances, CMeshDrawPrimitive_t* pPrimitiveToInstance, const IMaterial2* pMaterial, IMaterialMode* pMode, MaterialBindState_t* pBindState, bool bDepthMode, SceneSystemPerFrameStats_t& stats, bool bShadowMaterial, int nInstancingScalar, ISceneLayer* pLayer, SceneSystemTransformEntry_t* pPreallocatedEntries, int nTransformSlot)
{
	RenderInputLayout_t hInputLayout; // 627
	const CMaterialDrawDescriptor* pDrawDesc; // 630
	int nCurrentVB; // 631
	const char   __FUNCTION__; // 46669
	int nNumTris; // 718
	{
		Vector4D color; // 619
		{
			int i; // 620
			Vector4D::operator=(
					const Vector4D& vOther);  // 622
		}
		ISceneLayer::GetDebugName(); // 619
		Vector4D::Vector4D(
			const Vector& xyz,
			vec_t W);  // 619
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 635
	}
	{
		InputLayoutVariation_t inputLayoutVariation; // 649
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 617
	CMeshDrawPrimitive_t::GetDrawCall(); // 630
	ConVar::GetInt(); // 685
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 711
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 712
	IMaterial2::GetBoolAttributeOrDefault(
					CUtlStringToken name,
					bool bDefault);  // 687
} /* size: 0, variables: 5, inline expansions: 7 (135 bytes) */

// <0402ACEE> ../scenesystem/sceneobjectdescs.cpp:752
// variable: 1
// function calls: 9
void CBaseSceneObjectDesc::GetMaterialForDraw(const IMaterial2* pCurrentMaterial, const CMaterialDrawDescriptor* pDraw, ISceneLayer* pLayer, bool* pOverrideDepthMaterial)
{
	const IMaterial2* pOverrideMaterial; // 763
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 758
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 758
	CBaseSceneObjectDesc::GetMaterialForDraw(
				const IMaterial2* pCurrentMaterial,
				const CMaterialDrawDescriptor* pDraw,
				ISceneLayer* pLayer,
				bool* pOverrideDepthMaterial);  // 752
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 317
	ISceneLayer::GetOverrideMaterial(); // 763
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 763
} /* size: 156, variables: 1, inline expansions: 9 (96 bytes) */

// <040104A0> ../scenesystem/sceneobjectdescs.cpp:752
// variable: 1
void CBaseSceneObjectDesc::GetMaterialForDraw(const IMaterial2* pCurrentMaterial, const CMaterialDrawDescriptor* pDraw, ISceneLayer* pLayer, bool* pOverrideDepthMaterial)
{
	const IMaterial2* pOverrideMaterial; // 763
} /* size: 0, variables: 1 */

// <0400FAD0> ../scenesystem/sceneobjectdescs.cpp:770
// variables: 9
// function calls: 31
void CBaseSceneObjectDesc::SetBakedLightingAttributes(CMeshDrawPrimitive_t* pPrimitive, ISceneLayer* pLayer, CRenderAttributes& attributes)
{
	CLightBinner2* pLightBinner2; // 775
	const CSceneSystemBakedLightingInfo* pBakedLightingInfo; // 787
	int nBakedLightingFromProbe; // 789
	int nBakedLightingFromLightmap; // 790
	{
		const CSceneView* pView; // 779
		ISceneLayer::GetParentView(); // 779
		CSceneView::GetLightBinner2(); // 783
	}
	{
		int nTextureCount; // 806
		const HRenderTexture* pTextures; // 807
		const CUtlStringToken* pTextureBindings; // 808
		{
			int t; // 810
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 812
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
					int32 nSingleMipLevelToBind);  // 812
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 814
		}
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeC this); // 806
		Min<int>(const int& val1,
			const int& val2);  // 806
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					ConstantBufferHandle_t hBuf,
					uint32 nV);  // 732
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 571
		CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetValue(
			const CUtlStringToken& nTok,
			ConstantBufferAttr_t nValue);  // 732
		CRenderAttributes::SetConstantBufferValue(
					CUtlStringToken nTokenID,
					ConstantBufferHandle_t cb,
					uint32 nView);  // 817
	}
	LightProbeVolumeBinding_t::IsValid(); // 792
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 571
	CRenderAttributes::SetBoolValue(
			CUtlStringToken nTokenID,
			bool bValue);  // 821
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 571
	CRenderAttributes::SetBoolValue(
			CUtlStringToken nTokenID,
			bool bValue);  // 822
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 824
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 825
} /* size: 602, variables: 4, inline expansions: 9 (263 bytes) */

// <0400F9E4> ../scenesystem/sceneobjectdescs.cpp:828
void CBaseSceneObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats)
{
} /* size: 58 */

// <0400B9E8> ../scenesystem/sceneobjectdescs.cpp:834
// variables: 13
// function calls: 123
void CBaseSceneObjectDesc::DrawArrayExt(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats, const IMaterial2* pOverrideMaterial)
{
	bool bOverrideDepthMaterial; // 840
	const CUtlStringToken& shaderMode; // 841
	const IMaterial2* pMaterial; // 843
	IMaterialMode* pCurMode; // 848
	SceneSystemTransformEntry_t* pPreAllocatedTransformData; // 856
	int nPreAllocatedTransformIndex; // 857
	PerInstanceParams_t pParams; // 864
	bool bDepthMode; // 865
	const CFrustum& frustum; // 867
	DrawViewParams_t drawViewParams; // 869
	int nCurrentInstanceCount; // 875
	CMeshDrawPrimitive_t* pPrimToInstance; // 876
	MaterialBindState_t bindState; // 880
	const CScopeGuardLambdaImpl<CBaseSceneObjectDesc::DrawArrayExt(IRenderContext*, CMeshDrawPrimitive_t*, int, const ISceneView*,& generated_id_882; // 882
	{
		const CRenderAttributes* pPrimAttributes;                   // 897
	}
	{
		int i;                          // 919
		{
			CMeshDrawPrimitive_t* pNextPrim;                 // 921
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 42
			Vector4D::operator=(
					const Vector4D& vOther);  // 43
			PerInstanceParams_t::InitFromInstance(
					const CMeshDrawPrimitive_t* pPrim);  // 947
			CMeshDrawPrimitive_t::GetDrawCall(); // 951
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 758
			CInterlockedIntT<int, 4>::operator int(); // 294
			ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 758
			CBaseSceneObjectDesc::GetMaterialForDraw(
						const IMaterial2* pCurrentMaterial,
						const CMaterialDrawDescriptor* pDraw,
						ISceneLayer* pLayer,
						bool* pOverrideDepthMaterial);  // 752
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 317
			ISceneLayer::GetOverrideMaterial(); // 763
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 763
			CBaseSceneObjectDesc::GetMaterialForDraw(
						const IMaterial2* pCurrentMaterial,
						const CMaterialDrawDescriptor* pDraw,
						ISceneLayer* pLayer,
						bool* pOverrideDepthMaterial);  // 951
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 42
			Vector4D::operator=(
					const Vector4D& vOther);  // 43
			PerInstanceParams_t::InitFromInstance(
					const CMeshDrawPrimitive_t* pPrim);  // 928
		}
	}
	Vector4D::operator=(
			const Vector4D& vOther);  // 43
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 42
	PerInstanceParams_t::InitFromInstance(
			const CMeshDrawPrimitive_t* pPrim);  // 877
	MaterialBindState_t::MaterialBindState_t(); // 880
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
	CTSPool<CRenderAttributes>::GetObject(); // 881
	Vector::Vector(); // 7
	DrawViewParams_t::DrawViewParams_t(); // 869
	CScopeGuardLambdaImpl<CBaseSceneObjectDesc::DrawArrayExt(IRenderContext::CScopeGuardLambdaImpl(
				class& lambda);  // 39
	MakeScopeGuardLambda<CBaseSceneObjectDesc::DrawArrayExt(IRenderContext*, CMeshDrawPrimitive_t*, int, const ISceneView*, ISceneLayer*, SceneSystemPerFrameStats_t&, const IMaterial2*)::<lambda()> >(class& lambda); // 882
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 891
	CSceneSystem::AppUsesBakedLighting(); // 892
	CScopeGuardLambdaImpl<CBaseSceneObjectDesc::DrawArrayExt(IRenderContext::~CScopeGuardLambdaImpl(); // 967
	CMeshDrawPrimitive_t::GetDrawCall(); // 846
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 758
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 758
	CBaseSceneObjectDesc::GetMaterialForDraw(
				const IMaterial2* pCurrentMaterial,
				const CMaterialDrawDescriptor* pDraw,
				ISceneLayer* pLayer,
				bool* pOverrideDepthMaterial);  // 752
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 317
	ISceneLayer::GetOverrideMaterial(); // 763
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 763
	CBaseSceneObjectDesc::GetMaterialForDraw(
				const IMaterial2* pCurrentMaterial,
				const CMaterialDrawDescriptor* pDraw,
				ISceneLayer* pLayer,
				bool* pOverrideDepthMaterial);  // 846
} /* size: 2255, variables: 14, inline expansions: 98 (3158 bytes) */

// <0400A071> ../scenesystem/sceneobjectdescs.cpp:969
// variables: 22
// function calls: 97
void CBaseSceneObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
	ISceneViewDebugOverlays* pOverlay; // 971
	const CSceneObject* pObject; // 972
	Vector color; // 974
	Vector vMins; // 975
	Vector vMaxs; // 975
	{
		int meshCount; // 982
		{
			CMeshInstance* pMeshInstance; // 983
			{
				Vector meshMin; // 985
				Vector meshMax; // 985
				clamp<double, int>(const double& val,
							const int& minVal,
							const int& maxVal);  // 124
				clamp<double, int>(const double& val,
							const int& minVal,
							const int& maxVal);  // 125
				clamp<double, int>(const double& val,
							const int& minVal,
							const int& maxVal);  // 126
				VertexColor_t::VertexColor_t(
						const Vector& vecColor);  // 987
				CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 310
				Vector::operator=(
						const Vector& vOther);  // 313
				Vector::operator=(
						const Vector& vOther);  // 314
				CMeshInstance::GetBounds(
						Vector& vMinBounds,
						Vector& vMaxBounds);  // 308
				CMeshInstance::GetBounds(
						Vector& vMinBounds,
						Vector& vMaxBounds);  // 986
				ISceneViewDebugOverlays::Box(
					const Vector& vWorldMins,
					const Vector& vWorldMaxs,
					const VertexColor_t& color,
					bool bNoDepthTest,
					float64 flTimeToLive);  // 987
				Vector::Vector(); // 985
				Vector::Vector(); // 985
			}
			CSceneObject::GetMeshInstanceData(); // 983
			CMeshInstance::GetNext(); // 983
		}
		Vector::operator=(
				const Vector& vOther);  // 980
		Vector::operator*=(
				float fl);  // 991
	}
	{
		const float  flOffsetMagnitude; // 999
		CUniformRandomStream rstrm; // 1000
		Vector vRandomOffset; // 1002
		const ISceneView* pParentView; // 1008
		const ISceneView* pRootView; // 1009
		int nLodLevel; // 1010
		LODGroupMask_t lodGroupMask; // 1011
		int nDrawCalls; // 1014
		int nTriangles; // 1015
		CPathBufferString modelName; // 1032
		CPathBufferString sceneObjectText; // 1036
		{
			CMeshInstance* pMeshInstance; // 1016
			{
				int d; // 1024
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
				CMeshInstance::GetNumDrawCalls(); // 1024
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
						int d);  // 1026
			}
			CSceneObject::GetMeshInstanceData(); // 1016
			CSceneObject::GetCurrentMeshGroupMask(); // 2204
			CSceneObject::GetCurrentMeshGroupMask(); // 1018
			CMeshInstance::GetLODGroupMask(); // 1021
			CMeshInstance::GetMeshGroupMask(); // 1018
			CMeshInstance::GetNext(); // 1016
		}
		CSceneObject::GetID(); // 1001
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1005
		CSceneView::GetParent(); // 1008
		CSceneObject::GetMeshInstanceData(); // 1033
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1032
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 143
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CBufferString* pOutBuffer,
				bool bAppend);  // 168
		ResourceGetName(ResourceHandle_t hResource,
				CBufferString* pOutBuffer,
				bool bAppend);  // 164
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 143
		CUtlSymbolLarge::String(); // 148
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 148
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CBufferString* pOutBuffer,
				bool bAppend);  // 172
		ResourceGetName(ResourceHandle_t hResource,
				CBufferString* pOutBuffer,
				bool bAppend);  // 480
		CWeakHandle<InfoForResourceTypeCModel>::GetResourceName(
				CBufferString* pOutName,
				bool bAppend);  // 1033
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1036
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1037
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 1043
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1043
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1043
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1045
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1045
	}
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 976
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 974
	Vector::Vector(); // 975
	Vector::Vector(); // 975
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 978
	clamp<double, int>(const double& val,
				const int& minVal,
				const int& maxVal);  // 124
	clamp<double, int>(const double& val,
				const int& minVal,
				const int& maxVal);  // 125
	clamp<double, int>(const double& val,
				const int& minVal,
				const int& maxVal);  // 126
	VertexColor_t::VertexColor_t(
			const Vector& vecColor);  // 994
	ISceneViewDebugOverlays::Box(
		const Vector& vWorldMins,
		const Vector& vWorldMaxs,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 994
} /* size: 0, variables: 5, inline expansions: 11 (411 bytes) */


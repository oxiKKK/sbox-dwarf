
//
// scenesystem/meshbuilderdesc.cpp
//
//	referenced by: libengine2.so
//
//	functions: 14
//	class: 1
//

// <03F39F1A> ../scenesystem/meshbuilderdesc.cpp:21
// function calls: 18
void CMeshBuilderSceneObject::CMeshBuilderSceneObject()
{
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
	CSceneObject::CSceneObject(); // 21
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 21
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 23
} /* size: 306, inline expansions: 18 (477 bytes) */

// <03F39F01> ../scenesystem/meshbuilderdesc.cpp:21
void CMeshBuilderSceneObject::CMeshBuilderSceneObject()
{
} /* size: 0 */

// <03F39D14> ../scenesystem/meshbuilderdesc.cpp:35
// function calls: 5
void CMeshBuilderSceneObject::SetMeshbuilderData2(void* pVB, int nVertices, int nVertSize, uint16* pIB, int nIndices, RenderPrimitiveType_t primType, RenderInputLayout_t hInputLayout, HMaterial hMaterial)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 41
} /* size: 248, inline expansions: 5 (346 bytes) */

// <03F39C1D> ../scenesystem/meshbuilderdesc.cpp:54
// function calls: 2
void CMeshBuilderSceneObjectDesc::CMeshBuilderSceneObjectDesc()
{
	ISceneObjectDesc::ISceneObjectDesc(); // 15
	CBaseSceneObjectDesc::CBaseSceneObjectDesc(); // 54
} /* size: 0, inline expansions: 2 (0 bytes) */

// <03F39C04> ../scenesystem/meshbuilderdesc.cpp:54
void CMeshBuilderSceneObjectDesc::CMeshBuilderSceneObjectDesc()
{
} /* size: 0 */

// <03F39BA5> ../scenesystem/meshbuilderdesc.cpp:58
void CMeshBuilderSceneObjectDesc::Create()
{
} /* size: 40 */

// <03F328B2> ../scenesystem/meshbuilderdesc.cpp:63
// member functions: 2
// member variable: 1
// class size: 24
class CAutoFreeConcatInputLayouts {
	/* ../scenesystem/meshbuilderdesc.cpp:66 */
	void ~CAutoFreeConcatInputLayouts(CAutoFreeConcatInputLayouts* );
	RenderInputLayout_t hInputLayoutHandle[3]; /* 0 24 */
	void ~CAutoFreeConcatInputLayouts(class CAutoFreeConcatInputLayouts *); /* linkage=_ZN27CAutoFreeConcatInputLayoutsD4Ev */
};

// <03F39B82> ../scenesystem/meshbuilderdesc.cpp:66
// variable: 1
void CAutoFreeConcatInputLayouts::~CAutoFreeConcatInputLayouts()
{
	{
		int i; // 68
	}
} /* size: 0 */

// <03F39B5D> ../scenesystem/meshbuilderdesc.cpp:66
// variable: 1
inline void CAutoFreeConcatInputLayouts::~CAutoFreeConcatInputLayouts()
{
	{
		int i; // 68
	}
} /* size: 0 */

// <03F38B4A> ../scenesystem/meshbuilderdesc.cpp:81
// variables: 25
// function calls: 47
void CMeshBuilderSceneObjectDesc::DrawPrimitive(IRenderContext* pRenderContext, CMeshDrawPrimitive_t* pPrimitive, const IMaterial2* pMaterial, IMaterialMode* pCurMode, ISceneLayer* pLayer, bool bDepthMode, SceneSystemPerFrameStats_t& stats)
{
	CMeshBuilderSceneObject* pSceneObject; // 83
	const char   __FUNCTION__; // 9803
	CAutoFreeConcatInputLayouts concatLayouts; // 87
	InputLayoutVariation_t inputLayoutVariation; // 90
	RenderInputLayout_t hInputLayout; // 91
	DynamicVertexBufferHandle_t hVertexBuffer; // 93
	DynamicIndexBufferHandle_t hIndexBuffer; // 94
	int nCurrentVB; // 126
	PerInstanceParams_t params; // 129
	int nTransformSlot; // 133
	CRenderAttributes& attributes; // 137
	CSceneObjectExtraData_t* pExtraData; // 146
	MaterialRenderablePass_t renderablePass; // 157
	int nPasses; // 158
	const RsDepthBiasStateOverride_t* pOverrideDepthBiasState; // 163
	const RsStencilStateOverride_t* pOverrideStencilState; // 164
	const RsFillModeOverride_t* pOverrideFillMode; // 165
	int nNumTris; // 183
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 85
	}
	{
		BufferDesc_t vertexDesc; // 96
		DynamicLockDesc_t desc; // 101
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 106
	}
	{
		BufferDesc_t indexDesc; // 112
		DynamicLockDesc_t desc; // 117
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 122
	}
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 33
	Vector4D::Vector4D(); // 33
	PerInstanceParams_t::PerInstanceParams_t(); // 129
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 130
	CSceneObject::GetAlphaFade(); // 445
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 445
	CSceneObject::GetTintRGBA(); // 132
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 131
	Vector4D::operator=(
			const Vector4D& vOther);  // 132
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CRenderAttributes>::GetObject(); // 137
	CSceneSystem::AppUsesBakedLighting(); // 141
	CSceneObject::GetExtraData(); // 146
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
			const CRenderAttributes* pParent);  // 149
	ISceneLayer::GetDepthBiasStateOverride(); // 163
	ISceneLayer::GetStencilStateOverride(); // 164
	ISceneLayer::GetFillModeStateOverride(); // 165
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
			CRenderAttributes* pInfo);  // 169
	{
		int i; // 68
	}
	CAutoFreeConcatInputLayouts::~CAutoFreeConcatInputLayouts(); // 188
	{
		int i; // 68
	}
	CAutoFreeConcatInputLayouts::~CAutoFreeConcatInputLayouts(); // 188
} /* size: 0, variables: 18, inline expansions: 43 (1257 bytes) */

// <03F38A93> ../scenesystem/meshbuilderdesc.cpp:190
void CMeshBuilderSceneObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& args, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
} /* size: 9 */

// <03F389B2> ../scenesystem/meshbuilderdesc.cpp:199
void CMeshBuilderSceneObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats)
{
} /* size: 22 */

// <03F387E4> ../scenesystem/meshbuilderdesc.cpp:205
// variables: 7
// function call: 1
void CMeshBuilderSceneObjectDesc::DrawArrayExt(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats, const IMaterial2* pMaterialOverride)
{
	bool bDepthMode; // 208
	{
		int i; // 210
		{
			CMeshDrawPrimitive_t* pPrim; // 212
			CMeshBuilderSceneObject* pSceneObject; // 213
			const IMaterial2* pMaterial; // 215
			const CUtlStringToken& shaderMode; // 219
			IMaterialMode* pCurMode; // 220
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(); // 215
		}
	}
} /* size: 185, variables: 1 */

// <03F466D8> ../scenesystem/meshbuilderdesc.cpp:228
// variables: 4
// function calls: 9
void CMeshBuilderSceneObjectDesc::UpdateBoundingBoxToMatchTransform(CSceneObject* pObj)
{
	CSceneObject::GetBoundsType(); // 231
	{
		Vector vOldMin; // 233
		Vector vOldMax; // 234
		Vector vNewMin; // 238
		Vector vNewMax; // 239
		CSceneObject::GetBounds(
				Vector& vecWorldMins,
				Vector& vecWorldMaxes);  // 235
		Vector::Vector(); // 233
		Vector::Vector(); // 234
		Vector::Vector(); // 238
		Vector::Vector(); // 239
		CSceneObject::GetTransform(); // 240
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 241
	}
	CMeshBuilderSceneObjectDesc::UpdateBoundingBoxToMatchTransform(
						CSceneObject* pObj);  // 228
} /* size: 171, inline expansions: 2 (111 bytes) */

// <03F3878D> ../scenesystem/meshbuilderdesc.cpp:228
// variables: 4
void CMeshBuilderSceneObjectDesc::UpdateBoundingBoxToMatchTransform(CSceneObject* pObj)
{
	{
		Vector vOldMin; // 233
		Vector vOldMax; // 234
		Vector vNewMin; // 238
		Vector vNewMax; // 239
	}
} /* size: 0 */


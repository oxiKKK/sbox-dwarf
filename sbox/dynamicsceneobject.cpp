
//
// sbox/dynamicsceneobject.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//	class: 1
//

// <01B5AE8B> sbox/dynamicsceneobject.cpp:8
// variable: 1
// function calls: 12
void DrawMeshVertexBuffer(IRenderContext* pCtx, const SboxVertex_t* pMesh, int nOffsetFromVertexBufferStart, int nNumVertsToRender, RenderPrimitiveType_t renderPrimType)
{
	CRawDynamicVertexData vb; // 10
	CRawDynamicVertexData::Lock(
		int nVertexCount);  // 1037
	CRawDynamicVertexData::CRawDynamicVertexData(
				IRenderContext* pRenderContext,
				int nElementCount,
				int nElementSizeInBytes,
				const char* pDebugName,
				const char* pBudgetGroupName);  // 10
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 989
	CRawDynamicVertexData::CopyAndAdvance(
			const void* pData,
			int nNumVerts);  // 17
	CRawDynamicVertexData::Unlock(); // 1080
	CRawDynamicVertexData::Unlock(); // 1000
	CRawDynamicVertexData::Bind(
		int nSlot,
		int nOffset);  // 1001
	CRawDynamicVertexData::UnlockAndBind(
			int nSlot,
			int nOffset);  // 18
	CRawDynamicVertexData::Unlock(); // 1080
	CRawDynamicVertexData::Unlock(); // 1042
	CRawDynamicVertexData::~CRawDynamicVertexData(); // 21
} /* size: 411, variables: 1, inline expansions: 12 (475 bytes) */

// <01B53B61> sbox/dynamicsceneobject.cpp:23
// member functions: 18
// member variables: 2
// vtable entries: 4
// class size: 16
class CDynamicSceneObjectDesc : public ISceneObjectDescBase<CDynamicSceneObject> {
public:
	/* class ISceneObjectDescBase<CDynamicSceneObject> <ancestor>; */ /* 0 8 */
	void ~CDynamicSceneObjectDesc(CDynamicSceneObjectDesc* );
	void CDynamicSceneObjectDesc(CDynamicSceneObjectDesc* , CDynamicSceneObjectDesc& );
	void CDynamicSceneObjectDesc(CDynamicSceneObjectDesc* , const CDynamicSceneObjectDesc& );
	void CDynamicSceneObjectDesc(CDynamicSceneObjectDesc* );
	/* sbox/dynamicsceneobject.cpp:26 */
	virtual const char* GetTypeName(CDynamicSceneObjectDesc* );
	RenderInputLayout_t renderInputLayout; /* 8 8 */
	/* sbox/dynamicsceneobject.cpp:33 */
	void BuildLayout(CDynamicSceneObjectDesc* );
	/* sbox/dynamicsceneobject.cpp:54 */
	virtual void DrawDebug(CDynamicSceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	/* sbox/dynamicsceneobject.cpp:62 */
	virtual void DrawArray(CDynamicSceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
protected:
	/* sbox/dynamicsceneobject.cpp:133 */
	virtual CSceneObject* Create(CDynamicSceneObjectDesc* );
	void ~CDynamicSceneObjectDesc(class CDynamicSceneObjectDesc *); /* linkage=_ZN23CDynamicSceneObjectDescD4Ev */
	void CDynamicSceneObjectDesc(class CDynamicSceneObjectDesc *, class CDynamicSceneObjectDesc &); /* linkage=_ZN23CDynamicSceneObjectDescC4EOS_ */
	void CDynamicSceneObjectDesc(class CDynamicSceneObjectDesc *, const class CDynamicSceneObjectDesc  &); /* linkage=_ZN23CDynamicSceneObjectDescC4ERKS_ */
	void CDynamicSceneObjectDesc(class CDynamicSceneObjectDesc *); /* linkage=_ZN23CDynamicSceneObjectDescC4Ev */
	virtual const char  * GetTypeName(class CDynamicSceneObjectDesc *); /* linkage=_ZN23CDynamicSceneObjectDesc11GetTypeNameEv */
	void BuildLayout(class CDynamicSceneObjectDesc *); /* linkage=_ZN23CDynamicSceneObjectDesc11BuildLayoutEv */
	virtual void DrawDebug(class CDynamicSceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN23CDynamicSceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	virtual void DrawArray(class CDynamicSceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN23CDynamicSceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	virtual class CSceneObject * Create(class CDynamicSceneObjectDesc *); /* linkage=_ZN23CDynamicSceneObjectDesc6CreateEv */
};

// <01B5AE5D> sbox/dynamicsceneobject.cpp:26
void CDynamicSceneObjectDesc::GetTypeName()
{
} /* size: 12 */

// <01B5AE20> sbox/dynamicsceneobject.cpp:33
// variables: 3
inline void CDynamicSceneObjectDesc::BuildLayout()
{
	RenderInputLayout_t hInputLayoutHandle; // 39
	InputLayoutVariation_t inputLayoutVariation; // 42
	{
		int i; // 45
	}
} /* size: 0, variables: 2 */

// <01B5AB7E> sbox/dynamicsceneobject.cpp:54
// variables: 3
// function calls: 5
void CDynamicSceneObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
	const CSceneObject* pObject; // 56
	Vector vMins; // 57
	Vector vMaxs; // 57
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 58
	Vector::Vector(); // 57
	Vector::Vector(); // 57
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 59
	ISceneViewDebugOverlays::Box(
		const Vector& vWorldMins,
		const Vector& vWorldMaxs,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 59
} /* size: 163, variables: 3, inline expansions: 5 (80 bytes) */

// <01B5A340> sbox/dynamicsceneobject.cpp:62
// variables: 11
// function calls: 25
void CDynamicSceneObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	Scope scope; // 65
	int nFirstTransformSlotIndex; // 67
	SceneSystemTransformEntry_t* pTransforms; // 68
	{
		int i; // 71
		{
			CDynamicSceneObject* obj; // 73
			IMaterialMode* pMaterialMode; // 81
			const bool  bDepthMode; // 89
			int nMaxVertsPerLock; // 99
			int nCurVertexCount; // 112
			int nOffset; // 113
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 74
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator==(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 74
			CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Count(); // 75
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 77
			Vector4D::Vector4D(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 445
			CSceneObject::GetAlphaFade(); // 445
			CSceneObject::GetTintRGBA(); // 78
			CWeakHandle<InfoForResourceTypeIMaterial2>::operator->(); // 81
			ISceneLayer::GetShaderMode(); // 81
			CSceneObject::EnsureExtraData(); // 2289
			CSceneObject::EnsureExtraData(); // 2326
			CSceneObject::RenderAttributes(); // 85
			CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Count(); // 112
			CUtlMemory<SboxVertex_t, int>::Base(); // 112
			CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Base(); // 116
			CUtlMemory<SboxVertex_t, int>::Base(); // 112
			CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Base(); // 124
		}
	}
	{
		int i; // 45
	}
	CDynamicSceneObjectDesc::BuildLayout(); // 64
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 65
	Scope::~Scope(); // 129
} /* size: 1191, variables: 3, inline expansions: 3 (139 bytes) */

// <01B59D91> sbox/dynamicsceneobject.cpp:133
// function calls: 23
void CDynamicSceneObjectDesc::Create()
{
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
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 13
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 13
	CUtlMemory<SboxVertex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SboxVertex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::CUtlVector(); // 13
	CDynamicSceneObject::CDynamicSceneObject(); // 135
} /* size: 242, inline expansions: 23 (627 bytes) */

// <01B599FC> sbox/dynamicsceneobject.cpp:141
// variable: 1
// function calls: 13
void Create(ISceneWorld* pWorld)
{
	CDynamicSceneObject* pNew; // 143
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 145
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 146
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 148
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 147
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 149
	CSceneObject::UpdateFlagsBasedOnMaterial(); // 151
} /* size: 231, variables: 1, inline expansions: 13 (356 bytes) */

// <01B59981> sbox/dynamicsceneobject.cpp:157
// function call: 1
void CDynamicSceneObject::Begin(RenderPrimitiveType_t type, int vertexCount)
{
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::RemoveAll(); // 159
} /* size: 21, inline expansions: 1 (10 bytes) */

// <01B59953> sbox/dynamicsceneobject.cpp:163
void CDynamicSceneObject::End()
{
} /* size: 5 */

// <01B595AA> sbox/dynamicsceneobject.cpp:168
// function calls: 16
void CDynamicSceneObject::AddVertex(SboxVertex_t& vertex)
{
	CUtlMemory<SboxVertex_t, int>::NumAllocated(); // 1196
	CUtlMemory<SboxVertex_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Element(
		int i);  // 1201
	VertexColor_t::AsUint32(); // 93
	VertexColor_t::AsUint32Ptr(); // 93
	VertexColor_t::VertexColor_t(
			const VertexColor_t& src);  // 5
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 5
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 5
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 5
	SboxVertex_t::SboxVertex_t(
			const SboxVertex_t  &);  // 1520
	CopyConstruct<SboxVertex_t>(SboxVertex_t* pMemory,
					const SboxVertex_t& src);  // 1201
	CUtlMemory<SboxVertex_t, int>::Base(); // 112
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Base(); // 368
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::AddToTail(
			const SboxVertex_t& src);  // 170
} /* size: 210, inline expansions: 16 (516 bytes) */

// <01B59115> sbox/dynamicsceneobject.cpp:173
// variables: 2
// function calls: 19
void CDynamicSceneObject::AddVertexRange(void* data, int count)
{
	SboxVertex_t* pVerts; // 175
	CUtlMemory<SboxVertex_t, int>::NumAllocated(); // 782
	CUtlMemory<SboxVertex_t, int>::Base(); // 112
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Base(); // 368
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<SboxVertex_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::Element(
			int i);  // 1502
		VertexColor_t::AsUint32(); // 93
		VertexColor_t::AsUint32Ptr(); // 93
		VertexColor_t::VertexColor_t(
				const VertexColor_t& src);  // 5
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 5
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 5
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 5
		SboxVertex_t::SboxVertex_t(
				const SboxVertex_t  &);  // 1520
		CopyConstruct<SboxVertex_t>(SboxVertex_t* pMemory,
						const SboxVertex_t& src);  // 1502
	}
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const SboxVertex_t* pToInsert);  // 1476
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const SboxVertex_t* pToInsert);  // 1303
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::AddMultipleToTail(
				int num,
				const SboxVertex_t* pToCopy);  // 176
} /* size: 380, variables: 1, inline expansions: 9 (1120 bytes) */

// <01B590B8> sbox/dynamicsceneobject.cpp:179
// function call: 1
void CDynamicSceneObject::Reset()
{
	CUtlVectorBase<SboxVertex_t, CUtlMemory<SboxVertex_t, int> >::RemoveAll(); // 181
} /* size: 15, inline expansions: 1 (10 bytes) */


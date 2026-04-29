
//
// engine2/camerarenderer.cpp
//
//	referenced by: libengine2.so
//
//	functions: 49
//	classes: 3
//	struct: 1
//

// <01DB9434> engine2/camerarenderer.cpp:58
void ViewHistory::~ViewHistory()
{
} /* size: 0 */

// <01DB9418> engine2/camerarenderer.cpp:58
inline void ViewHistory::~ViewHistory()
{
} /* size: 0 */

// <01DB9401> engine2/camerarenderer.cpp:58
void ViewHistory::ViewHistory()
{
} /* size: 0 */

// <01DB93E5> engine2/camerarenderer.cpp:58
inline void ViewHistory::ViewHistory()
{
} /* size: 0 */

// <01D89577> engine2/camerarenderer.cpp:58
// member functions: 4
// member variables: 2
// static member variables: 2
// struct size: 1,152
struct ViewHistory {
	int ViewHash; /* 0 4 */
	CFrustum Frustum __attribute__((__aligned__(16))); /* 16 1136 */
	/* engine2/camerarenderer.cpp:66 */
	ViewHistory Get(int);
	/* engine2/camerarenderer.cpp:84 */
	void Store(ViewHistory);
private:
	static class CUtlVector<ViewHistory, CUtlMemory<ViewHistory, int> > _history; /* 0 0 */
	static class CThreadFastMutex _mutex; /* 0 0 */
	void ViewHistory(ViewHistory* );
	void ~ViewHistory(ViewHistory* );
} __attribute__((__aligned__(16)));

// <01DB93B6> engine2/camerarenderer.cpp:66
// variables: 2
inline void Get(int hash)
{
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> > generated_id_68; // 68
	{
		int i; // 70
	}
} /* size: 0, variables: 1 */

// <01DB8B74> engine2/camerarenderer.cpp:84
// variables: 2
// function calls: 31
void Store(ViewHistory entry)
{
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> > generated_id_86; // 86
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
	CThreadFastMutex::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 86
	CUtlMemory<ViewHistory, int>::NumAllocated(); // 782
	CUtlMemory<ViewHistory, int>::Base(); // 112
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::Base(); // 368
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::ResetDbgInfo(); // 824
	CUtlMemory<ViewHistory, int>::IsGrowable(); // 823
	CUtlMemory<ViewHistory, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ViewHistory, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ViewHistory, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::GrowVector(
			int num);  // 1223
	CUtlMemory<ViewHistory, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::Element(
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1224
	CopyConstruct<ViewHistory>(ViewHistory* pMemory,
					const ViewHistory& src);  // 1225
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::InsertBefore(
			int elem,
			const ViewHistory& src);  // 1187
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::AddToHead(
			const ViewHistory& src);  // 88
	{
		int i; // 1696
	}
	CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::RemoveMultipleFromTail(
				int num);  // 93
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 897
	CThreadFastMutex::UnlockWrite(
			const char* pFileName,
			int nLineNumber);  // 960
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >::~CAutoLockT(); // 95
} /* size: 541, variables: 1, inline expansions: 31 (2292 bytes) */

// <01DB85F4> engine2/camerarenderer.cpp:106
// variables: 2
// function calls: 16
void UpdateFrustumFromViewSetup(CFrustum* pFrustum, const CViewSetup* pViewSetup, SkyboxRenderSetup* skybox)
{
	{
		float flAspect; // 122
		float flFovX; // 123
		Vector::operator=(
				const Vector& vOther);  // 78
		QAngle::operator=(
				const QAngle& vOther);  // 79
		Camera_t::InitViewParameters(
					const Vector& vOrigin,
					const QAngle& vAngles);  // 63
		Camera_t::InitPerspectiveProjection(
						float flZNear,
						float flZFar,
						float flFOVX,
						float flAspect);  // 64
		Camera_t::Init(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flFOV,
			float flAspect);  // 285
		CFrustum::InitCamera(
				const Vector& origin,
				const QAngle& angles,
				float flNear,
				float flFar,
				float flFOV,
				float flAspect,
				float flClipSpaceBottomLeftX,
				float flClipSpaceBottomLeftY,
				float flClipSpaceTopRightX,
				float flClipSpaceTopRightY);  // 125
	}
	Vector::operator=(
			const Vector& vOther);  // 108
	QAngle::operator=(
			const QAngle& vOther);  // 109
	Vector4D::operator[](
			int i);  // 113
	Camera_t::InitOrthoProjection(
				float flZNear,
				float flZFar,
				float flWidth,
				float flHeight);  // 72
	Vector::operator=(
			const Vector& vOther);  // 78
	QAngle::operator=(
			const QAngle& vOther);  // 79
	Camera_t::InitViewParameters(
				const Vector& vOrigin,
				const QAngle& vAngles);  // 71
	Camera_t::InitOrtho(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flWidth,
			float flHeight);  // 299
	CFrustum::InitOrthoCamera(
			const Vector& origin,
			const QAngle& angles,
			float flNear,
			float flFar,
			float flWidth,
			float flHeight,
			float flClipSpaceBottomLeftX,
			float flClipSpaceBottomLeftY,
			float flClipSpaceTopRightX,
			float flClipSpaceTopRightY);  // 113
	CFrustum::SetWorldScale(
			float flWorldScale);  // 134
} /* size: 467, inline expansions: 10 (499 bytes) */

// <01DB73AA> engine2/camerarenderer.cpp:137
// function calls: 88
void CCameraRenderer::CCameraRenderer(const char* pName, int cameraId)
{
	ICameraRenderer::ICameraRenderer(); // 137
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
	CRenderAttributes::CRenderAttributes(); // 137
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 137
	CUtlString::CUtlString(); // 137
	Vector::Vector(); // 137
	QAngle::QAngle(); // 137
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 137
	Vector::Vector(); // 137
	QAngle::QAngle(); // 137
	VMatrix::VMatrix(); // 137
	Vector::Vector(); // 137
	CUtlMemory<ISceneWorld::ValidateGrowSize(); // 475
	CUtlMemory<ISceneWorld::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 530
	CUtlVectorBase<ISceneWorld::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ISceneWorld::CUtlVector(); // 137
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
			int minimumSize);  // 137
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
			int minimumSize);  // 137
} /* size: 745, inline expansions: 88 (1558 bytes) */

// <01DB7379> engine2/camerarenderer.cpp:137
void CCameraRenderer::CCameraRenderer(const char* pName, int cameraId)
{
} /* size: 0 */

// <01DB6E88> engine2/camerarenderer.cpp:143
// function calls: 24
void CCameraRenderer::~CCameraRenderer()
{
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 145
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 145
	CUtlVectorBase<ISceneWorld::RemoveAll(); // 1798
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 905
	CUtlMemory<ISceneWorld::Purge(); // 903
	CUtlMemory<ISceneWorld::Purge(); // 1799
	CUtlVectorBase<ISceneWorld::Purge(); // 560
	ValidateAlignment<ISceneWorld*>(void); // 508
	CUtlMemory<ISceneWorld::Purge(); // 510
	CUtlMemory<ISceneWorld::~CUtlMemory(); // 562
	CUtlVectorBase<ISceneWorld::~CUtlVectorBase(); // 410
	CUtlVector<ISceneWorld::~CUtlVector(); // 145
	CFrustum::~CFrustum(); // 145
	CUtlString::~CUtlString(); // 145
} /* size: 198, inline expansions: 24 (411 bytes) */

// <01DB6E6F> engine2/camerarenderer.cpp:143
void CCameraRenderer::~CCameraRenderer()
{
} /* size: 0 */

// <01DB6E11> engine2/camerarenderer.cpp:147
// function call: 1
void CCameraRenderer::ClearSceneWorlds()
{
	CUtlVectorBase<ISceneWorld::RemoveAll(); // 150
} /* size: 26, inline expansions: 1 (10 bytes) */

// <01DB6A9A> engine2/camerarenderer.cpp:153
// variable: 1
// function calls: 15
void CCameraRenderer::AddSceneWorld(ISceneWorld* pWorld)
{
	{
		int i; // 1531
		CUtlVectorBase<ISceneWorld::Count(); // 1531
		CUtlMemory<ISceneWorld::operator[](
				int i);  // 609
		CUtlVectorBase<ISceneWorld::Element(
			int i);  // 1533
	}
	CUtlVectorBase<ISceneWorld::Find(
		ISceneWorld* const& src);  // 156
	CUtlMemory<ISceneWorld::NumAllocated(); // 1196
	CUtlMemory<ISceneWorld::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneWorld::Element(
		int i);  // 1201
	CopyConstruct<ISceneWorld*>(ISceneWorld** pMemory,
					ISceneWorld* const& src);  // 1201
	CUtlMemory<ISceneWorld::IsGrowable(); // 823
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 859
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 861
	CUtlMemory<ISceneWorld::Grow(
		int num);  // 806
	CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 824
	CUtlVectorBase<ISceneWorld::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<ISceneWorld::AddToTail(
			ISceneWorld* const& src);  // 164
} /* size: 451, inline expansions: 12 (938 bytes) */

// <01DB6A32> engine2/camerarenderer.cpp:167
void CCameraRenderer::SetRenderAttributes(CRenderAttributes* attributes)
{
} /* size: 22 */

// <01DB4F5A> engine2/camerarenderer.cpp:174
// variables: 14
// function calls: 78
void CCameraRenderer::CreateView(const RenderViewport_t& viewport, SwapChainHandle_t swapChain, ISceneView* parentView)
{
	int subCamId; // 181
	CViewSetup viewSetup; // 183
	CPVSBits visInfo; // 224
	CViewId viewId; // 227
	ISceneView* pView; // 229
	ViewHistory previousRender; // 235
	ISceneWorld* p3DSkyboxWorld; // 263
	Vector v3DSkyboxOrigin; // 264
	QAngle a3DSkyboxAngles; // 265
	float f3DSkyboxScale; // 266
	{
		int i; // 254
		{
			CPVSBits extravis; // 256
			CPVSBits::CPVSBits(); // 256
			CUtlMemory<ISceneWorld::operator[](
					int i);  // 588
			CUtlVectorBase<ISceneWorld::operator[](
					int i);  // 257
			CPVSBits::GetPrecisePVS(
					ISceneWorld* pWorld,
					const Vector& vPos);  // 257
			CUtlMemory<ISceneWorld::operator[](
					int i);  // 588
			CUtlVectorBase<ISceneWorld::operator[](
					int i);  // 258
		}
		CUtlVectorBase<ISceneWorld::Count(); // 254
	}
	{
		ViewHistory previousRender; // 285
		Vector::operator=(
				const Vector& vOther);  // 27
		Camera_t::operator=(
				const Camera_t  &);  // 264
		Vector::operator=(
				const Vector& vOther);  // 264
		Vector::operator=(
				const Vector& vOther);  // 264
		CFrustum::operator=(
				const CFrustum  &);  // 287
		CFrustum::~CFrustum(); // 58
		ViewHistory::~ViewHistory(); // 289
		CFrustum::~CFrustum(); // 58
		ViewHistory::~ViewHistory(); // 290
	}
	CFrustum::SetOverrideProj(
			const VMatrix& overrideProj);  // 212
	Vector::Vector(); // 183
	QAngle::QAngle(); // 183
	Vector::Vector(); // 183
	QAngle::QAngle(); // 183
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 183
	Vector::operator=(
			const Vector& vOther);  // 184
	QAngle::operator=(
			const QAngle& vOther);  // 185
	Vector4D::operator=(
			const Vector4D& vOther);  // 205
	Vector::operator=(
			const Vector& vOther);  // 207
	QAngle::operator=(
			const QAngle& vOther);  // 208
	CFrustum::ClearOverrideProj(); // 216
	CCameraRenderer::UpdateFrustum(
			const CViewSetup* pViewSetup);  // 219
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 221
	CPVSBits::CPVSBits(); // 224
	CPVSBits::GetPrecisePVS(
			ISceneWorld* pWorld,
			const Vector& vPos);  // 225
	CUtlString::Get(); // 230
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
			int nLineNumber);  // 951
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 68
	{
		int i; // 70
		CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::Count(); // 70
		CUtlMemory<ViewHistory, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ViewHistory, CUtlMemory<ViewHistory, int> >::operator[](
				int i);  // 72
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 897
	CThreadFastMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >::~CAutoLockT(); // 79
	ViewHistory::ViewHistory(); // 78
	Get(int hash); // 235
	Vector::operator=(
			const Vector& vOther);  // 222
	Vector::operator=(
			const Vector& vOther);  // 27
	Camera_t::operator=(
			const Camera_t  &);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	CFrustum::operator=(
			const CFrustum  &);  // 442
	ISceneView::SetPreviousFrameFrustum(
				const CFrustum& prevFrameFrustum);  // 249
	ConVar::GetFloat(); // 261
	Vector::Vector(); // 264
	QAngle::QAngle(); // 265
	Vector::Vector(); // 1464
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::operator/(
			float fl);  // 271
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 271
	Vector::operator=(
			const Vector& vOther);  // 272
	Vector::operator=(
			const Vector& vOther);  // 271
	QAngle::operator=(
			const QAngle& vOther);  // 274
	CFrustum::~CFrustum(); // 58
	ViewHistory::~ViewHistory(); // 293
	CUtlString::Get(); // 231
	Vector::operator=(
			const Vector& vOther);  // 27
	Camera_t::operator=(
			const Camera_t  &);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	CFrustum::operator=(
			const CFrustum  &);  // 239
} /* size: 0, variables: 10, inline expansions: 59 (3832 bytes) */

// <01D94A54> engine2/camerarenderer.cpp:295
// function call: 1
void CDebugUIRenderLayer::~CDebugUIRenderLayer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 295
} /* size: 5, inline expansions: 1 (0 bytes) */

// <01D949A0> engine2/camerarenderer.cpp:295
// function calls: 2
void CDebugUIRenderLayer::~CDebugUIRenderLayer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 295
	CDebugUIRenderLayer::~CDebugUIRenderLayer(); // 295
} /* size: 14, inline expansions: 2 (0 bytes) */

// <01D94983> engine2/camerarenderer.cpp:295
inline void CDebugUIRenderLayer::~CDebugUIRenderLayer()
{
} /* size: 0 */

// <01D8B06E> engine2/camerarenderer.cpp:295
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 16
class CDebugUIRenderLayer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CDebugUIRenderLayer(CDebugUIRenderLayer* , CDebugUIRenderLayer& );
	void CDebugUIRenderLayer(CDebugUIRenderLayer* , const CDebugUIRenderLayer& );
	/* engine2/camerarenderer.cpp:298 */
	void CDebugUIRenderLayer(CDebugUIRenderLayer* , CUtlStringToken);
	/* engine2/camerarenderer.cpp:303 */
	virtual void Render(CDebugUIRenderLayer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
protected:
	CUtlStringToken m_viewportName; /* 8 4 */
	virtual void ~CDebugUIRenderLayer(CDebugUIRenderLayer* );
	void CDebugUIRenderLayer(class CDebugUIRenderLayer *, class CDebugUIRenderLayer &); /* linkage=_ZN19CDebugUIRenderLayerC4EOS_ */
	void CDebugUIRenderLayer(class CDebugUIRenderLayer *, const class CDebugUIRenderLayer  &); /* linkage=_ZN19CDebugUIRenderLayerC4ERKS_ */
	void CDebugUIRenderLayer(class CDebugUIRenderLayer *, class CUtlStringToken); /* linkage=_ZN19CDebugUIRenderLayerC4E15CUtlStringToken */
	virtual void Render(class CDebugUIRenderLayer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN19CDebugUIRenderLayer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CDebugUIRenderLayer(class CDebugUIRenderLayer *); /* linkage=_ZN19CDebugUIRenderLayerD4Ev */
};

// <01DB4F0B> engine2/camerarenderer.cpp:298
void CDebugUIRenderLayer::CDebugUIRenderLayer(CUtlStringToken viewportName)
{
} /* size: 0 */

// <01DB4EE5> engine2/camerarenderer.cpp:298
inline void CDebugUIRenderLayer::CDebugUIRenderLayer(CUtlStringToken viewportName)
{
} /* size: 0 */

// <01DB4E4A> engine2/camerarenderer.cpp:303
void CDebugUIRenderLayer::Render(ISceneView* pView, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
} /* size: 32 */

// <01DB4BFD> engine2/camerarenderer.cpp:314
// variables: 5
// function calls: 4
void CCameraRenderer::AddOverlaysToView(ISceneView* pView, HSceneViewRenderTarget hOutputColor, const RenderViewport_t& viewport)
{
	{
		ISceneLayer* pLayer; // 326
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 328
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 318
	{
		const uint32  m; // 123
		uint32 h; // 124
		uint32 k; // 125
		const int  r; // 126
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 324
} /* size: 290, inline expansions: 3 (22 bytes) */

// <01DAD787> engine2/camerarenderer.cpp:335
// variables: 153
// function calls: 403
void CCameraRenderer::AddLayersToView(ISceneView* pView, HSceneViewRenderTarget hOutputColor, HSceneViewRenderTarget hOutputDepth, const RenderViewport_t& viewport)
{
	const char   __FUNCTION__; // 45136
	IVolumetricFog* m_volumetricFog; // 341
	ITonemapSystem* m_tonemapSystem; // 342
	IRenderingPipeline* m_pGameRenderingPipeline; // 344
	float fTime; // 348
	RenderViewport_t screenViewport; // 353
	RenderViewport_t playerViewport; // 354
	const RenderViewport_t  untransformedViewport; // 365
	SceneViewRenderTargetInfo_t rtInfo; // 401
	RenderMultisampleType_t msaaType; // 403
	PipelineRenderTargetInfo_t outputRtInfo; // 417
	bool bHasDebugLayer; // 447
	int nMatWireframe; // 562
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 337
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 339
	}
	{
		TonemapState_t tonemapState; // 387
		TonemapState_t::TonemapState_t(); // 387
	}
	{
		SceneViewRenderTargetInfo_t svInfoColor; // 407
		SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(
						int nWidth,
						int nHeight,
						ImageFormat nFormat,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 407
	}
	{
		SceneViewRenderTargetInfo_t svInfoDepth; // 413
		SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(
						int nWidth,
						int nHeight,
						ImageFormat nFormat,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 413
	}
	{
		CSceneViewRenderTargetScope sg; // 450
		CRenderAttributes& pipelineAttributes; // 452
		int nToolsVisMode; // 474
		{
			IProceduralLayerRenderer* fog_renderer0; // 502
			CUtlAttributeList<void::SetValue(
				const CUtlStringToken& nTok,
				void* nValue);  // 349
			CRenderAttributes::SetPtrValue(
					CUtlStringToken nTokenID,
					void* pValue);  // 506
		}
		{
			CWeakHandle<InfoForResourceTypeCTextureBase> colorTexture; // 515
			CWeakHandle<InfoForResourceTypeCTextureBase> depthTexture; // 516
			HSceneViewRenderTarget__* colorTarget; // 518
			HSceneViewRenderTarget__* depthTarget; // 519
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 518
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 519
			CUtlAttributeList<void::SetValue(
				const CUtlStringToken& nTok,
				void* nValue);  // 349
			CRenderAttributes::SetPtrValue(
					CUtlStringToken nTokenID,
					void* pValue);  // 521
			CUtlAttributeList<void::SetValue(
				const CUtlStringToken& nTok,
				void* nValue);  // 349
			CRenderAttributes::SetPtrValue(
					CUtlStringToken nTokenID,
					void* pValue);  // 522
		}
		{
			Scope s; // 532
			Scope::Scope(
				const char* name,
				const char* data,
				uint32 color);  // 532
			CUtlStringToken::CUtlStringToken(); // 535
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
					const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 40062
					CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 40072
					CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 40082
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
						IntVector4D nDefault);  // 576
			CRenderAttributes::GetBoolValue(
					CUtlStringToken nTokenID,
					bool bDefaultValue);  // 538
			Scope::~Scope(); // 542
		}
		CSceneViewRenderTargetScope::Init(
			ISceneView* pView,
			const char* pScopeName);  // 585
		CSceneViewRenderTargetScope::CSceneViewRenderTargetScope(
						ISceneView* pView,
						const char* pScopeName);  // 450
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
		CTSPool<CRenderAttributes>::GetObject(); // 452
		CUtlAttributeList<void::SetValue(
			const CUtlStringToken& nTok,
			void* nValue);  // 349
		CRenderAttributes::SetPtrValue(
				CUtlStringToken nTokenID,
				void* pValue);  // 457
		ISceneView::GetRenderAttributesPtr(); // 459
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 459
		ISceneView::GetRenderAttributesPtr(); // 460
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 460
		ISceneView::GetRenderAttributesPtr(); // 461
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 461
		ISceneView::GetRenderAttributesPtr(); // 462
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 462
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 464
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 464
		CUtlAttributeList<void::SetValue(
			const CUtlStringToken& nTok,
			void* nValue);  // 349
		CRenderAttributes::SetPtrValue(
				CUtlStringToken nTokenID,
				void* pValue);  // 466
		CUtlAttributeList<void::SetValue(
			const CUtlStringToken& nTok,
			void* nValue);  // 349
		CRenderAttributes::SetPtrValue(
				CUtlStringToken nTokenID,
				void* pValue);  // 467
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
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 40062
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 40072
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 40082
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
				int nDefaultValue);  // 469
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 469
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 470
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
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 51950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 51960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 51970
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
				Vector4D vDefaultValue);  // 470
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 277
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 571
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			Vector4D nValue);  // 277
		CRenderAttributes::SetVector4DValue(
				CUtlStringToken nTokenID,
				Vector4D vValue);  // 470
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 472
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 472
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
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 40062
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 40072
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 40082
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
				int nDefaultValue);  // 474
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 477
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 478
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 475
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 479
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 479
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 480
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 480
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 482
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 483
		CUtlAttributeList<void::SetValue(
			const CUtlStringToken& nTok,
			void* nValue);  // 349
		CRenderAttributes::SetPtrValue(
				CUtlStringToken nTokenID,
				void* pValue);  // 497
		CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::Count(); // 135
		CUtlVectorBase<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >::IsEmpty(); // 500
		CUtlAttributeList<void::SetValue(
			const CUtlStringToken& nTok,
			void* nValue);  // 349
		CRenderAttributes::SetPtrValue(
				CUtlStringToken nTokenID,
				void* pValue);  // 528
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
				CRenderAttributes* pInfo);  // 546
		CSceneViewRenderTargetScope::Shutdown(); // 548
		CSceneViewRenderTargetScope::Shutdown(); // 590
		CSceneViewRenderTargetScope::~CSceneViewRenderTargetScope(); // 549
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 493
	}
	{
		ISceneLayer* pWireLayer; // 565
		{
			const uint32  m; // 123
			uint32 h; // 124
			uint32 k; // 125
			const int  r; // 126
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 565
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 568
		operator|=(ESceneObjectFlags& a,
				ESceneObjectFlags b);  // 605
		ISceneLayer::AddObjectFlagsRequiredMask(
						ESceneObjectFlags nRequiredFlags);  // 567
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 570
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 277
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 571
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			Vector4D nValue);  // 277
		CRenderAttributes::SetVector4DValue(
				CUtlStringToken nTokenID,
				Vector4D vValue);  // 570
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 571
		CRenderAttributes::SetBoolValue(
				CUtlStringToken nTokenID,
				bool bValue);  // 571
	}
	{
		ISceneLayer* pDebugDrawLayer; // 578
		uint nDebugInfoLayerFlags; // 591
		ISceneLayer* pDebugInfoLayer; // 602
		HSceneViewRenderTarget hDepthBuffer; // 604
		HSceneViewRenderTarget hGBufferNormalSpecExpTexture; // 605
		{
			ISceneLayer* pTranslucentDebugDrawLayer; // 596
			{
				const uint32  m; // 123
				uint32 h; // 124
				uint32 k; // 125
				const int  r; // 126
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 596
			operator|=(ESceneObjectFlags& a,
					ESceneObjectFlags b);  // 605
			ISceneLayer::AddObjectFlagsRequiredMask(
							ESceneObjectFlags nRequiredFlags);  // 597
			SceneLayerOutputs_t::Init(
				HSceneViewRenderTarget hColor0,
				HSceneViewRenderTarget hDepth,
				RenderColorSpace_t allowSrgbWrites);  // 598
		}
		{
			const uint32  m; // 123
			uint32 h; // 124
			uint32 k; // 125
			const int  r; // 126
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 578
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 579
		operator|=(ESceneObjectFlags& a,
				ESceneObjectFlags b);  // 605
		ISceneLayer::AddObjectFlagsRequiredMask(
						ESceneObjectFlags nRequiredFlags);  // 581
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 587
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 591
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 594
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 617
	}
	{
		ISceneLayer* pDebugLayer; // 629
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 44
		{
			const uint32  m; // 123
			uint32 h; // 124
			uint32 k; // 125
			const int  r; // 126
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 43
		operator|=(ESceneObjectFlags& a,
				ESceneObjectFlags b);  // 605
		ISceneLayer::AddObjectFlagsRequiredMask(
						ESceneObjectFlags nRequiredFlags);  // 45
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 48
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 49
		ISceneLayer::SetObjectMatchID(
				CUtlStringToken nTok);  // 50
		AddDebugOverlayLayers(ISceneView* pView,
					const RenderViewport_t& viewport,
					HSceneViewRenderTarget hColor,
					HSceneViewRenderTarget hDepth,
					ISceneLayer** ppDebugObjectLayerOut);  // 629
	}
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
		CUtlAttributeListChunk<void::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		CUtlAttributeListChunk<void::GetValuePtrFromIndex(
					int nIdx);  // 275
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 44430
			CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 44440
			CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 44450
			CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<void::end(); // 279
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
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 279
		}
		CUtlAttributeList<void::FindIndexOfMatch(
				i32x4 n4Key,
				void* const** pValueOut);  // 270
		CUtlAttributeList<void::FindIndexOfMatch(
				i32x4 n4Key,
				void* const** pValueOut);  // 381
	}
	CUtlAttributeList<void::GetValueOrDefault(
				uint32 k,
				void* nDefault);  // 393
	CUtlAttributeList<void::GetValueOrDefault(
				CUtlStringToken nTok,
				void* nDefault);  // 354
	CRenderAttributes::GetPtrValue(
			CUtlStringToken nTokenID,
			void* pDefaultValue);  // 341
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
		CUtlAttributeListChunk<void::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		CUtlAttributeListChunk<void::GetValuePtrFromIndex(
					int nIdx);  // 275
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 44430
			CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 44440
			CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 44450
			CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<void::end(); // 279
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
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 284
			CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 279
		}
		CUtlAttributeList<void::FindIndexOfMatch(
				i32x4 n4Key,
				void* const** pValueOut);  // 270
		CUtlAttributeList<void::FindIndexOfMatch(
				i32x4 n4Key,
				void* const** pValueOut);  // 381
	}
	CUtlAttributeList<void::GetValueOrDefault(
				uint32 k,
				void* nDefault);  // 393
	CUtlAttributeList<void::GetValueOrDefault(
				CUtlStringToken nTok,
				void* nDefault);  // 354
	CRenderAttributes::GetPtrValue(
			CUtlStringToken nTokenID,
			void* pDefaultValue);  // 342
	{
		const uint32  m; // 146
		uint32 h; // 147
		uint32 k; // 148
		const int  r; // 149
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 344
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 357
	RenderViewport_t::IsValid(); // 359
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 365
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 101
	SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(); // 401
	PipelineRenderTargetInfo_t::PipelineRenderTargetInfo_t(); // 417
	ConVar::GetInt(); // 562
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
			const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 40062
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 40072
			CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 40082
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
			int nDefaultValue);  // 562
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 575
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 575
} /* size: 0, variables: 13, inline expansions: 27 (2065 bytes) */

// <01DD3C19> engine2/camerarenderer.cpp:640
void CCameraRenderer::UpdateFrustum(const CViewSetup* pViewSetup)
{
} /* size: 0 */

// <01D8C829> engine2/camerarenderer.cpp:651
// member functions: 4
// member variables: 2
// class size: 2
class RenderViewScope {
	bool waitForRender; /* 0 1 */
	bool active; /* 1 1 */
	/* engine2/camerarenderer.cpp:658 */
	void RenderViewScope(RenderViewScope* , bool, ISceneView* );
	/* engine2/camerarenderer.cpp:669 */
	void ~RenderViewScope(RenderViewScope* );
	void RenderViewScope(class RenderViewScope *, bool, class ISceneView *); /* linkage=_ZN15RenderViewScopeC4EbP10ISceneView */
	void ~RenderViewScope(class RenderViewScope *); /* linkage=_ZN15RenderViewScopeD4Ev */
};

// <01DAD740> engine2/camerarenderer.cpp:658
void RenderViewScope::RenderViewScope(bool andWait, ISceneView* parentView)
{
} /* size: 0 */

// <01DAD70D> engine2/camerarenderer.cpp:658
inline void RenderViewScope::RenderViewScope(bool andWait, ISceneView* parentView)
{
} /* size: 0 */

// <01DAD6F6> engine2/camerarenderer.cpp:669
void RenderViewScope::~RenderViewScope()
{
} /* size: 0 */

// <01DAD6DD> engine2/camerarenderer.cpp:669
inline void RenderViewScope::~RenderViewScope()
{
} /* size: 0 */

// <01DAD1D0> engine2/camerarenderer.cpp:683
// variables: 9
// function calls: 9
void CCameraRenderer::Render(SwapChainHandle_t swapChain)
{
	Scope s; // 685
	RenderViewScope autoRenderScope; // 687
	const RenderDeviceInfo_t& deviceInfo; // 689
	int nBBWidth; // 691
	int nBBHeight; // 691
	RenderViewport_t viewport; // 694
	ISceneView* pView; // 697
	HSceneViewRenderTarget hColor; // 702
	HSceneViewRenderTarget hDepth; // 703
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 685
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 658
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 687
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 694
	RenderViewScope::~RenderViewScope(); // 669
	RenderViewScope::~RenderViewScope(); // 711
	Scope::~Scope(); // 711
	RenderViewScope::~RenderViewScope(); // 711
} /* size: 458, variables: 9, inline expansions: 9 (227 bytes) */

// <01DAC751> engine2/camerarenderer.cpp:713
// variables: 14
// function calls: 26
void CCameraRenderer::RenderToTexture(HRenderTexture hTexture, ISceneView* parentView)
{
	const CTextureDesc* pDesc; // 718
	RenderViewScope autoRenderScope; // 722
	Scope s; // 724
	RenderViewport_t viewport; // 729
	ISceneView* pView; // 732
	ImageFormat targetFormat; // 736
	HSceneViewRenderTarget hTextureTarget; // 737
	RenderViewport_t fullViewport; // 739
	SceneViewRenderTargetInfo_t rtInfo; // 741
	RenderMultisampleType_t msaaType; // 744
	SceneViewRenderTargetInfo_t svInfoColor; // 745
	HSceneViewRenderTarget__* rtColor; // 747
	{
		BlitSetup_t blit; // 751
		ISceneLayer* pCopyLayer; // 756
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 135
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 135
		SceneLayerOutputs_t::SceneLayerOutputs_t(
					HSceneViewRenderTarget hColor0,
					HSceneViewRenderTarget hDepth,
					RenderColorSpace_t allowSrgbWrites);  // 756
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 81
		BlitSetup_t::BlitSetup_t(); // 751
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 715
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 718
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 658
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 722
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 724
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 729
	IsFloatFormat(ImageFormat fmt); // 736
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 737
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 101
	SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(); // 741
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 739
	SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(
					int nWidth,
					int nHeight,
					ImageFormat nFormat,
					RenderMultisampleType_t nMultisampleType,
					RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 745
	Scope::~Scope(); // 764
	RenderViewScope::~RenderViewScope(); // 669
	RenderViewScope::~RenderViewScope(); // 764
} /* size: 967, variables: 12, inline expansions: 20 (500 bytes) */

// <01DAB78D> engine2/camerarenderer.cpp:766
// function calls: 3
void CConvertToBitmapProceduralLayer::~CConvertToBitmapProceduralLayer()
{
	IRenderReadCallback::~IRenderReadCallback(); // 178
	IReadTexturePixelsCallback::~IReadTexturePixelsCallback(); // 766
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 766
} /* size: 5, inline expansions: 3 (0 bytes) */

// <01DAB673> engine2/camerarenderer.cpp:766
// function calls: 4
void CConvertToBitmapProceduralLayer::~CConvertToBitmapProceduralLayer()
{
	IRenderReadCallback::~IRenderReadCallback(); // 178
	IReadTexturePixelsCallback::~IReadTexturePixelsCallback(); // 766
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 766
	CConvertToBitmapProceduralLayer::~CConvertToBitmapProceduralLayer(); // 766
} /* size: 14, inline expansions: 4 (0 bytes) */

// <01DAB656> engine2/camerarenderer.cpp:766
inline void CConvertToBitmapProceduralLayer::~CConvertToBitmapProceduralLayer()
{
} /* size: 0 */

// <01D8D489> engine2/camerarenderer.cpp:766
// member functions: 12
// member variables: 7
// vtable entries: 2
// class size: 40
class CConvertToBitmapProceduralLayer : public IProceduralLayerRenderer, IReadTexturePixelsCallback {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	/* class IReadTexturePixelsCallback <ancestor>; */ /* 8 8 */
	void CConvertToBitmapProceduralLayer(CConvertToBitmapProceduralLayer* , CConvertToBitmapProceduralLayer& );
	void CConvertToBitmapProceduralLayer(CConvertToBitmapProceduralLayer* , const CConvertToBitmapProceduralLayer& );
	void * data; /* 16 8 */
	int width; /* 24 4 */
	int height; /* 28 4 */
	int bytesPerPixel; /* 32 4 */
	bool wasRendered; /* 36 1 */
	/* engine2/camerarenderer.cpp:776 */
	void CConvertToBitmapProceduralLayer(CConvertToBitmapProceduralLayer* , void* , int, int, int);
	/* engine2/camerarenderer.cpp:785 */
	virtual void Render(CConvertToBitmapProceduralLayer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	/* engine2/camerarenderer.cpp:797 */
	virtual void OnReadTexturePixels(CConvertToBitmapProceduralLayer* , const uint8* , ImageFormat, int, int, int, int);
	virtual void ~CConvertToBitmapProceduralLayer(CConvertToBitmapProceduralLayer* );
	void CConvertToBitmapProceduralLayer(class CConvertToBitmapProceduralLayer *, class CConvertToBitmapProceduralLayer &); /* linkage=_ZN31CConvertToBitmapProceduralLayerC4EOS_ */
	void CConvertToBitmapProceduralLayer(class CConvertToBitmapProceduralLayer *, const class CConvertToBitmapProceduralLayer  &); /* linkage=_ZN31CConvertToBitmapProceduralLayerC4ERKS_ */
	void CConvertToBitmapProceduralLayer(class CConvertToBitmapProceduralLayer *, void *, int, int, int); /* linkage=_ZN31CConvertToBitmapProceduralLayerC4EPviii */
	virtual void Render(class CConvertToBitmapProceduralLayer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN31CConvertToBitmapProceduralLayer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	/* <1dd22fd> engine2/camerarenderer.cpp:797 */
	virtual void OnReadTexturePixels(class CConvertToBitmapProceduralLayer *, const uint8  *, enum ImageFormat, int, int, int, int); /* linkage=_ZN31CConvertToBitmapProceduralLayer19OnReadTexturePixelsEPKh11ImageFormatiiii */
	virtual void ~CConvertToBitmapProceduralLayer(class CConvertToBitmapProceduralLayer *); /* linkage=_ZN31CConvertToBitmapProceduralLayerD4Ev */
};

// <01DAC6C0> engine2/camerarenderer.cpp:776
void CConvertToBitmapProceduralLayer::CConvertToBitmapProceduralLayer(void* data, int width, int height, int bytesPerPixel)
{
} /* size: 0 */

// <01DAC673> engine2/camerarenderer.cpp:776
inline void CConvertToBitmapProceduralLayer::CConvertToBitmapProceduralLayer(void* data, int width, int height, int bytesPerPixel)
{
} /* size: 0 */

// <01DAB956> engine2/camerarenderer.cpp:785
// variables: 16
// function calls: 53
void CConvertToBitmapProceduralLayer::Render(ISceneView* pView, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	Rect_t srcRect; // 787
	HRenderTexture hSrcTexture; // 793
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 793
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 261
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
			const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 39315
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 39325
			CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 39335
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
			HRenderTexture defaultTxtr);  // 261
	ISceneLayer::GetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture nDefaultValue);  // 793
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 794
} /* size: 397, variables: 2, inline expansions: 25 (992 bytes) */

// <01DD22FD> engine2/camerarenderer.cpp:797
// variables: 2
// function calls: 2
void CConvertToBitmapProceduralLayer::OnReadTexturePixels(const uint8* pData, ImageFormat format, int nMipLevel, int nWidth, int nHeight, int nPitchInBytes)
{
	Scope scope; // 799
	ImageFormat destFormat; // 804
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 799
	{
	}
	{
	}
	Scope::~Scope(); // 808
} /* size: 199, variables: 2, inline expansions: 2 (26 bytes) */

// <01DAB850> engine2/camerarenderer.cpp:797
// variables: 5
inline void CConvertToBitmapProceduralLayer::OnReadTexturePixels(const uint8* pData, ImageFormat format, int nMipLevel, int nWidth, int nHeight, int nPitchInBytes)
{
	Scope scope; // 799
	const char   __FUNCTION__; // 45234
	ImageFormat destFormat; // 804
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 801
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 802
	}
} /* size: 0, variables: 3 */

// <01DAB04F> engine2/camerarenderer.cpp:811
// variables: 8
// function calls: 14
void CCameraRenderer::RenderToBitmap(void* pixels, int width, int height, int bytesPerPixel)
{
	Scope scope; // 813
	Rect_t readRect; // 815
	CConvertToBitmapProceduralLayer pixmapLayer; // 832
	const char   __FUNCTION__; // 45109
	{
		int w; // 818
		int h; // 819
	}
	{
		Scope scope; // 841
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 841
		Scope::~Scope(); // 845
		Scope::~Scope(); // 845
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 852
	}
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 813
	Rect_t::Rect_t(
		int nX,
		int nY,
		int nWidth,
		int nHeight);  // 815
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 777
	IRenderReadCallback::IRenderReadCallback(); // 173
	IReadTexturePixelsCallback::IReadTexturePixelsCallback(); // 777
	CConvertToBitmapProceduralLayer::CConvertToBitmapProceduralLayer(
					void* data,
					int width,
					int height,
					int bytesPerPixel);  // 832
	Scope::~Scope(); // 862
	IRenderReadCallback::~IRenderReadCallback(); // 178
	IReadTexturePixelsCallback::~IReadTexturePixelsCallback(); // 766
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 766
	CConvertToBitmapProceduralLayer::~CConvertToBitmapProceduralLayer(); // 862
} /* size: 0, variables: 4, inline expansions: 11 (98 bytes) */

// <01DAAA17> engine2/camerarenderer.cpp:864
// variables: 8
// function calls: 15
void CCameraRenderer::RenderToCubeTexture(HRenderTexture hTexture, int nArraySliceTarget)
{
	const CTextureDesc* pDesc; // 869
	Scope s; // 873
	RenderViewScope autoRenderScope; // 875
	RenderViewport_t viewport; // 880
	ISceneView* pView; // 883
	bool bDepth; // 889
	HSceneViewRenderTarget hColor; // 891
	HSceneViewRenderTarget hDepth; // 892
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 866
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 869
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 873
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 658
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 875
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 880
	ISceneView::SetOverrideRenderTargetArrayIndex(
						int colorIndex,
						int depthIndex);  // 887
	IsDepthFormat(ImageFormat fmt); // 889
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 892
	RenderViewScope::~RenderViewScope(); // 669
	RenderViewScope::~RenderViewScope(); // 895
	Scope::~Scope(); // 895
} /* size: 584, variables: 8, inline expansions: 15 (369 bytes) */

// <01DAA012> engine2/camerarenderer.cpp:897
// variables: 14
// function calls: 20
void CCameraRenderer::RenderStereo(int eye, int eyeWidth, int eyeHeight, bool bSubmitStereo)
{
	Scope s; // 899
	RenderViewScope autoRenderScope; // 901
	RenderViewport_t eyeViewport; // 908
	RenderViewport_t fullViewport; // 909
	ISceneView* pView; // 911
	HSceneViewRenderTarget hColor; // 916
	HSceneViewRenderTarget hDepth; // 917
	const char   __FUNCTION__; // 45055
	CWeakHandle<InfoForResourceTypeCTextureBase> colorTexture; // 932
	CWeakHandle<InfoForResourceTypeCTextureBase> depthTexture; // 933
	RenderViewport_t srcViewport; // 938
	RenderViewport_t dstViewport; // 939
	ISceneLayer* pCopyLayer; // 947
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 923
	}
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 899
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 658
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 901
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 908
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 909
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 571
	CRenderAttributes::SetBoolValue(
			CUtlStringToken nTokenID,
			bool bValue);  // 926
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 935
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 936
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 135
	SceneLayerOutputs_t::Init(
		HSceneViewRenderTarget hColor0,
		HSceneViewRenderTarget hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 135
	SceneLayerOutputs_t::SceneLayerOutputs_t(
				HSceneViewRenderTarget hColor0,
				HSceneViewRenderTarget hDepth,
				RenderColorSpace_t allowSrgbWrites);  // 952
	RenderViewScope::~RenderViewScope(); // 669
	RenderViewScope::~RenderViewScope(); // 965
	Scope::~Scope(); // 965
} /* size: 1127, variables: 13, inline expansions: 20 (501 bytes) */

// <01DA97B5> engine2/camerarenderer.cpp:967
// variables: 6
// function calls: 21
void CCameraRenderer::SubmitStereo(int eyeWidth, int eyeHeight)
{
	const char   __FUNCTION__; // 45055
	ISceneView* pView; // 972
	RenderViewport_t fullViewport; // 975
	ISceneLayer* pLayer; // 980
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 973
	}
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 975
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 980
	SceneLayerOutputs_t::Init(
		HSceneViewRenderTarget hColor0,
		HSceneViewRenderTarget hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 981
	ISceneLayer::SetObjectMatchID(
			CUtlStringToken nTok);  // 984
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 610
	ISceneLayer::AddObjectFlagsExcludedMask(
					ESceneObjectFlags nExcludedFlags);  // 985
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 988
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 989
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 456
	CRenderAttributes::SetIntValue(
			CUtlStringToken nTokenID,
			int nValue);  // 247
	ISceneLayer::SetAttr(
		CUtlStringToken nTokenID,
		int nValue);  // 991
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 456
	CRenderAttributes::SetIntValue(
			CUtlStringToken nTokenID,
			int nValue);  // 247
	ISceneLayer::SetAttr(
		CUtlStringToken nTokenID,
		int nValue);  // 992
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 995
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 456
	CRenderAttributes::SetIntValue(
			CUtlStringToken nTokenID,
			int nValue);  // 247
	ISceneLayer::SetAttr(
		CUtlStringToken nTokenID,
		int nValue);  // 995
} /* size: 0, variables: 4, inline expansions: 21 (390 bytes) */

// <01DA8F06> engine2/camerarenderer.cpp:998
// variables: 19
// function calls: 17
void CCameraRenderer::BlitStereo(int eyeWidth, int eyeHeight)
{
	const char   __FUNCTION__; // 45001
	ISceneView* pView; // 1003
	RenderViewport_t fullViewport; // 1006
	int swapWidth; // 1012
	int swapHeight; // 1012
	SwapChainHandle_t swapChain; // 1013
	HSceneViewRenderTarget hCompanionTarget; // 1017
	Rect_t swapRect; // 1019
	Rect_t srcRect; // 1020
	Rect_t origSrcRect; // 1021
	const float  flZoomLevel; // 1026
	const int  nRightEyeOffset; // 1027
	float fAspect; // 1032
	RenderViewport_t srcViewport; // 1043
	RenderViewport_t swapViewport; // 1044
	SceneLayerOutputs_t outputs; // 1047
	ISceneLayer* pCompanionLayer; // 1049
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1004
	}
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 1006
	Rect_t::Rect_t(
		int nX,
		int nY,
		int nWidth,
		int nHeight);  // 1020
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 1043
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 1044
	Rect_t::Rect_t(
		int nX,
		int nY,
		int nWidth,
		int nHeight);  // 1019
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1023
	ConVar::GetFloat(); // 1026
	Min<int>(const int& val1,
		const int& val2);  // 1032
	Max<int>(const int& val1,
		const int& val2);  // 1032
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 135
	SceneLayerOutputs_t::Init(
		HSceneViewRenderTarget hColor0,
		HSceneViewRenderTarget hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 135
	SceneLayerOutputs_t::SceneLayerOutputs_t(
				HSceneViewRenderTarget hColor0,
				HSceneViewRenderTarget hDepth,
				RenderColorSpace_t allowSrgbWrites);  // 1047
} /* size: 0, variables: 17, inline expansions: 17 (298 bytes) */

// <01DA89DE> engine2/camerarenderer.cpp:1054
// variables: 6
// function calls: 14
void CCameraRenderer::RenderToTexture(bool bToolsView, int width, int height)
{
	RenderViewport_t viewport; // 1058
	HRenderTexture texture; // 1081
	{
		RenderViewScope autoRenderScope; // 1064
		ISceneView* pView; // 1067
		HSceneViewRenderTarget hColor; // 1073
		HSceneViewRenderTarget hDepth; // 1074
		RenderViewScope::RenderViewScope(
				bool andWait,
				ISceneView* parentView);  // 658
		RenderViewScope::RenderViewScope(
				bool andWait,
				ISceneView* parentView);  // 1064
		RenderViewScope::~RenderViewScope(); // 669
		RenderViewScope::~RenderViewScope(); // 1077
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1070
		RenderViewScope::~RenderViewScope(); // 669
		RenderViewScope::~RenderViewScope(); // 1077
	}
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 1058
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1084
} /* size: 457, variables: 2, inline expansions: 4 (67 bytes) */

// <01DA8556> engine2/camerarenderer.cpp:1087
// variables: 6
// function calls: 7
void CCameraRenderer::RenderToLayer(bool bToolsView, int width, int height, IProceduralLayerRenderer* finalLayer, bool deleteWhenDone)
{
	RenderViewport_t viewport; // 1089
	RenderViewScope autoRenderScope; // 1094
	ISceneView* pView; // 1097
	HSceneViewRenderTarget hColor; // 1103
	HSceneViewRenderTarget hDepth; // 1104
	{
		ISceneLayer* pLayer; // 1113
		SceneLayerOutputs_t::Init(
			HSceneViewRenderTarget hColor0,
			HSceneViewRenderTarget hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 1117
	}
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 658
	RenderViewScope::RenderViewScope(
			bool andWait,
			ISceneView* parentView);  // 1094
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 1089
	RenderViewScope::~RenderViewScope(); // 669
	RenderViewScope::~RenderViewScope(); // 1121
} /* size: 605, variables: 5, inline expansions: 6 (206 bytes) */

// <01DA8509> engine2/camerarenderer.cpp:1123
void CCameraRenderer::ClearRenderTags()
{
} /* size: 16 */

// <01DA84BC> engine2/camerarenderer.cpp:1128
void CCameraRenderer::ClearExcludeTags()
{
} /* size: 16 */

// <01DA8254> engine2/camerarenderer.cpp:1133
// function calls: 7
void CCameraRenderer::AddRenderTag(uint hash)
{
	Mix32HashFunctor::operator(
			uint32 n);  // 240
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 706
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
					const unsigned int& k);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				unsigned int k,
				unsigned int h,
				bool* pDidInsert);  // 695
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				unsigned int k,
				unsigned int h,
				bool* pDidInsert);  // 240
	Insert(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		KeyArg_t k);  // 1135
} /* size: 171, inline expansions: 7 (316 bytes) */

// <01DA7FEC> engine2/camerarenderer.cpp:1138
// function calls: 7
void CCameraRenderer::AddExcludeTag(uint hash)
{
	Mix32HashFunctor::operator(
			uint32 n);  // 240
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 706
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
					const unsigned int& k);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				unsigned int k,
				unsigned int h,
				bool* pDidInsert);  // 695
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
				unsigned int k,
				unsigned int h,
				bool* pDidInsert);  // 240
	Insert(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		KeyArg_t k);  // 1140
} /* size: 171, inline expansions: 7 (316 bytes) */


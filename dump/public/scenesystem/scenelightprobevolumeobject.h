
//
// public/scenesystem/scenelightprobevolumeobject.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	class: 1
//	struct: 1
//

// <030697C5> ../public/scenesystem/scenelightprobevolumeobject.h:10
void PerBatchLightProbeVolumeConstantBuffer_t::PerBatchLightProbeVolumeConstantBuffer_t()
{
} /* size: 0 */

// <030697A9> ../public/scenesystem/scenelightprobevolumeobject.h:10
inline void PerBatchLightProbeVolumeConstantBuffer_t::PerBatchLightProbeVolumeConstantBuffer_t()
{
} /* size: 0 */

// <01216518> ../public/scenesystem/scenelightprobevolumeobject.h:10
// member variables: 5
// struct size: 112
struct PerBatchLightProbeVolumeConstantBuffer_t {
	matrix3x4_t m_matLightProbeVolumeWorldToTexture; /* 0 48 */
	Vector4D m_vLightProbeVolumeLayer0TextureMin; /* 48 16 */
	Vector4D m_vLightProbeVolumeLayer0TextureMax; /* 64 16 */
	Vector4D m_vLightProbeVolumeColor; /* 80 16 */
	IntVector4D m_vLightProbeVolumeTextureIndices; /* 96 16 */
};

// <03069787> ../public/scenesystem/scenelightprobevolumeobject.h:20
void CSceneLightProbeVolumeObject::CSceneLightProbeVolumeObject()
{
} /* size: 0 */

// <0306976B> ../public/scenesystem/scenelightprobevolumeobject.h:20
inline void CSceneLightProbeVolumeObject::CSceneLightProbeVolumeObject()
{
} /* size: 0 */

// <03068109> ../public/scenesystem/scenelightprobevolumeobject.h:20
// function calls: 39
void CSceneLightProbeVolumeObject::~CSceneLightProbeVolumeObject()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 20
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 20
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 20
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CUtlStringToken, int>::ConvertToExternalMemory(
				CUtlStringToken* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::Purge_FixedGrowable(
				CUtlStringToken* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::Purge_FixedGrowable(
				CUtlStringToken* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<CUtlStringToken, 1, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CUtlStringToken, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CUtlStringToken, 1>::~CUtlVectorFixedGrowable(); // 20
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 20
} /* size: 332, inline expansions: 39 (1357 bytes) */

// <030678D0> ../public/scenesystem/scenelightprobevolumeobject.h:20
// function calls: 41
void CSceneLightProbeVolumeObject::~CSceneLightProbeVolumeObject()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 20
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 20
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 20
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CUtlStringToken, int>::ConvertToExternalMemory(
				CUtlStringToken* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::Purge_FixedGrowable(
				CUtlStringToken* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::Purge_FixedGrowable(
				CUtlStringToken* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, CUtlStringToken, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<CUtlStringToken, 1, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CUtlStringToken, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CUtlStringToken, 1>::~CUtlVectorFixedGrowable(); // 20
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	IGenericInterface::~IGenericInterface(); // 1436
	CSceneObject::~CSceneObject(); // 20
	CSceneLightProbeVolumeObject::~CSceneLightProbeVolumeObject(); // 20
} /* size: 340, inline expansions: 41 (1701 bytes) */

// <030678B4> ../public/scenesystem/scenelightprobevolumeobject.h:20
inline void CSceneLightProbeVolumeObject::~CSceneLightProbeVolumeObject()
{
} /* size: 0 */

// <0304B76E> ../public/scenesystem/scenelightprobevolumeobject.h:20
// member functions: 12
// member variables: 12
// vtable entry: 1
// class size: 464
class CSceneLightProbeVolumeObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneLightProbeVolumeObject(CSceneLightProbeVolumeObject* , CSceneLightProbeVolumeObject& );
	void CSceneLightProbeVolumeObject(CSceneLightProbeVolumeObject* , const CSceneLightProbeVolumeObject& );
	void CSceneLightProbeVolumeObject(CSceneLightProbeVolumeObject* );
	Vector m_vBoxMins; /* 228 12 */
	Vector m_vBoxMaxs; /* 240 12 */
	CUtlVectorFixedGrowable<CUtlStringToken, 1> m_LightGroups __attribute__((__aligned__(8))); /* 256 40 */
	int m_nHandshake; /* 296 4 */
	int m_nRenderPriority; /* 300 4 */
	HRenderTextureStrong m_hLightProbeTexture; /* 304 8 */
	HRenderTextureStrong m_hLightProbeDirectLightIndicesTexture; /* 312 8 */
	HRenderTextureStrong m_hLightProbeDirectLightScalarsTexture; /* 320 8 */
	ConstantBufferHandle_t m_hLightProbeConstants; /* 328 8 */
	PerBatchLightProbeVolumeConstantBuffer_t m_lightProbeConstants; /* 336 112 */
	CSceneLPVDebugGridObject * m_pDebugSceneObject; /* 448 8 */
	/* ../public/scenesystem/scenelightprobevolumeobject.h:39 */
	virtual void InitManagedHandle(CSceneLightProbeVolumeObject* );
	/* ../public/scenesystem/scenelightprobevolumeobject.h:44 */
	void CreateConstants(CSceneLightProbeVolumeObject* );
	virtual void ~CSceneLightProbeVolumeObject(CSceneLightProbeVolumeObject* );
	void CreateConstants(class CSceneLightProbeVolumeObject *); /* linkage=_ZN28CSceneLightProbeVolumeObject15CreateConstantsEv */
	void CSceneLightProbeVolumeObject(class CSceneLightProbeVolumeObject *, class CSceneLightProbeVolumeObject &); /* linkage=_ZN28CSceneLightProbeVolumeObjectC4EOS_ */
	void CSceneLightProbeVolumeObject(class CSceneLightProbeVolumeObject *, const class CSceneLightProbeVolumeObject  &); /* linkage=_ZN28CSceneLightProbeVolumeObjectC4ERKS_ */
	void CSceneLightProbeVolumeObject(class CSceneLightProbeVolumeObject *); /* linkage=_ZN28CSceneLightProbeVolumeObjectC4Ev */
	virtual void InitManagedHandle(class CSceneLightProbeVolumeObject *); /* linkage=_ZN28CSceneLightProbeVolumeObject17InitManagedHandleEv */
	virtual void ~CSceneLightProbeVolumeObject(class CSceneLightProbeVolumeObject *); /* linkage=_ZN28CSceneLightProbeVolumeObjectD4Ev */
} __attribute__((__aligned__(16)));

// <03072B0D> ../public/scenesystem/scenelightprobevolumeobject.h:39
void CSceneLightProbeVolumeObject::InitManagedHandle()
{
} /* size: 96 */

// <01327EA0> ../public/scenesystem/scenelightprobevolumeobject.h:44
// variables: 12
// function calls: 101
void CSceneLightProbeVolumeObject::CreateConstants()
{
	AABB_t worldBounds; // 46
	AABB_t localBounds; // 47
	PerBatchLightProbeVolumeConstantBuffer_t& constants; // 69
	Vector vUVScale; // 71
	const int  nLayers; // 74
	Vector vFitS; // 75
	Vector vFitO; // 77
	matrix3x4_t mFit; // 80
	matrix3x4_t mWorldToLocal; // 86
	Vector vHalfTexelWidth; // 90
	const CTextureDesc* pTexHeader; // 91
	{
		CRenderContextPtr pRenderCtx; // 112
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 112
		CRenderContextPtr::operator->(); // 113
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 114
	}
	TransformAABB(const matrix3x4_t& matTransform,
			const AABB_t& boundsIn,
			AABB_t* pBoundsOut);  // 48
	Vector::operator=(
			const Vector& vOther);  // 29
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 47
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 46
	CSceneObject::GetTransform(); // 48
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 625
	CSceneObject::SetBounds(
			const AABB_t& bounds);  // 49
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 58
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsError(); // 58
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 58
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 59
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsError(); // 59
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 59
	CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle(); // 60
	CStrongHandle<InfoForResourceTypeCTextureBase>::IsError(); // 60
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 60
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 62
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 63
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 64
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 67
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 1, int> >::operator[](
			int i);  // 67
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 71
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 75
	matrix3x4_t::matrix3x4_t(
			float m00,
			float m01,
			float m02,
			float m03,
			float m10,
			float m11,
			float m12,
			float m13,
			float m20,
			float m21,
			float m22,
			float m23);  // 83
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 77
	VectorMultiply(const Vector& a,
			const Vector& b,
			Vector& c);  // 1458
	Vector::Vector(); // 1457
	Vector::operator*(
			const Vector& v);  // 77
	matrix3x4_t::matrix3x4_t(); // 86
	MatrixMultiply(const matrix3x4_t& in1,
			const matrix3x4_t& in2,
			matrix3x4_t& out);  // 88
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 91
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 94
	Vector4D::Init(
		const Vector& src,
		vec_t iw);  // 96
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 103
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 97
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 98
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 102
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 101
	IntVector4D::Init(
		int ix,
		int iy,
		int iz,
		int iw);  // 100
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 60
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 59
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle(); // 58
	CSceneObject::GetWorld(); // 53
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
			const matrix3x4_t& mTransform);  // 54
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 55
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 625
	CSceneObject::SetBounds(
			const AABB_t& bounds);  // 56
} /* size: 1766, variables: 11, inline expansions: 97 (1603 bytes) */


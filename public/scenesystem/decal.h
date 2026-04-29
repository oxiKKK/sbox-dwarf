
//
// public/scenesystem/decal.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	classes: 3
//

// <040B1354> ../public/scenesystem/decal.h:7
void CDecalSceneObject::CDecalSceneObject()
{
} /* size: 0 */

// <040B1337> ../public/scenesystem/decal.h:7
inline void CDecalSceneObject::CDecalSceneObject()
{
} /* size: 0 */

// <00124177> ../public/scenesystem/decal.h:7
// member functions: 8
// member variables: 15
// vtable entry: 1
// class size: 336
class CDecalSceneObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../public/scenesystem/decal.h:10 */
	CDecalSceneObject* Create(ISceneWorld* );
	/* ../public/scenesystem/decal.h:11 */
	virtual void ~CDecalSceneObject(CDecalSceneObject* );
	/* ../public/scenesystem/decal.h:13 */
	virtual void InitManagedHandle(CDecalSceneObject* );
	HRenderTextureStrong m_hColor; /* 232 8 */
	HRenderTextureStrong m_hNormal; /* 240 8 */
	HRenderTextureStrong m_hRMO; /* 248 8 */
	uint32_t m_nSortOrder; /* 256 4 */
	uint32_t m_nExclusionBitMask; /* 260 4 */
	Vector4D m_vColorTint; /* 264 16 */
	float m_flAttenuationAngle; /* 280 4 */
	HRenderTextureStrong m_hEmission; /* 288 8 */
	float m_flEmissionEnergy; /* 296 4 */
	uint32_t m_nSequenceIndex; /* 300 4 */
	float m_flColorMix; /* 304 4 */
	HRenderTextureStrong m_hHeight; /* 312 8 */
	float m_flParallaxStrength; /* 320 4 */
	int m_nSamplerIndex; /* 324 4 */
	class CDecalSceneObject * Create(class ISceneWorld *); /* linkage=_ZN17CDecalSceneObject6CreateEP11ISceneWorld */
	virtual void ~CDecalSceneObject(class CDecalSceneObject *); /* linkage=_ZN17CDecalSceneObjectD4Ev */
	virtual void InitManagedHandle(class CDecalSceneObject *); /* linkage=_ZN17CDecalSceneObject17InitManagedHandleEv */
	void CDecalSceneObject(class CDecalSceneObject *, const class CDecalSceneObject  &); /* linkage=_ZN17CDecalSceneObjectC4ERKS_ */
	void CDecalSceneObject(class CDecalSceneObject *); /* linkage=_ZN17CDecalSceneObjectC4Ev */
} __attribute__((__aligned__(16)));

// <040AB7E6> ../public/scenesystem/decal.h:7
// member functions: 10
// member variables: 15
// vtable entry: 1
// class size: 336
class CDecalSceneObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CDecalSceneObject(CDecalSceneObject* , const CDecalSceneObject& );
	void CDecalSceneObject(CDecalSceneObject* );
	/* ../public/scenesystem/decal.h:10 */
	CDecalSceneObject* Create(ISceneWorld* );
	/* ../public/scenesystem/decal.h:11 */
	virtual void ~CDecalSceneObject(CDecalSceneObject* );
	/* ../public/scenesystem/decal.h:13 */
	virtual void InitManagedHandle(CDecalSceneObject* );
	HRenderTextureStrong m_hColor; /* 232 8 */
	HRenderTextureStrong m_hNormal; /* 240 8 */
	HRenderTextureStrong m_hRMO; /* 248 8 */
	uint32_t m_nSortOrder; /* 256 4 */
	uint32_t m_nExclusionBitMask; /* 260 4 */
	Vector4D m_vColorTint; /* 264 16 */
	float m_flAttenuationAngle; /* 280 4 */
	HRenderTextureStrong m_hEmission; /* 288 8 */
	float m_flEmissionEnergy; /* 296 4 */
	uint32_t m_nSequenceIndex; /* 300 4 */
	float m_flColorMix; /* 304 4 */
	HRenderTextureStrong m_hHeight; /* 312 8 */
	float m_flParallaxStrength; /* 320 4 */
	int m_nSamplerIndex; /* 324 4 */
	class CDecalSceneObject * Create(class ISceneWorld *); /* linkage=_ZN17CDecalSceneObject6CreateEP11ISceneWorld */
	virtual void ~CDecalSceneObject(class CDecalSceneObject *); /* linkage=_ZN17CDecalSceneObjectD4Ev */
	virtual void InitManagedHandle(class CDecalSceneObject *); /* linkage=_ZN17CDecalSceneObject17InitManagedHandleEv */
	void CDecalSceneObject(class CDecalSceneObject *, const class CDecalSceneObject  &); /* linkage=_ZN17CDecalSceneObjectC4ERKS_ */
	void CDecalSceneObject(class CDecalSceneObject *); /* linkage=_ZN17CDecalSceneObjectC4Ev */
} __attribute__((__aligned__(16)));

// <040B1DA6> ../public/scenesystem/decal.h:11
// function calls: 24
void CDecalSceneObject::~CDecalSceneObject()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
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
	CSceneObject::~CSceneObject(); // 11
} /* size: 233, inline expansions: 24 (654 bytes) */

// <040B182D> ../public/scenesystem/decal.h:11
// function calls: 26
void CDecalSceneObject::~CDecalSceneObject()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 11
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
	CSceneObject::~CSceneObject(); // 11
	CDecalSceneObject::~CDecalSceneObject(); // 11
} /* size: 249, inline expansions: 26 (902 bytes) */

// <040B1814> ../public/scenesystem/decal.h:11
inline void CDecalSceneObject::~CDecalSceneObject()
{
} /* size: 0 */

// <033030D4> ../public/scenesystem/decal.h:11
void CDecalSceneObject::~CDecalSceneObject()
{
} /* size: 0 */

// <040B178B> ../public/scenesystem/decal.h:13
void CDecalSceneObject::InitManagedHandle()
{
} /* size: 96 */

// <040AB98A> ../public/scenesystem/decal.h:36
// member functions: 9
// member variable: 1
// vtable entries: 4
// class size: 8
class CDecalSceneObjectDesc : public ISceneObjectDescBase<CDecalSceneObject> {
public:
	/* class ISceneObjectDescBase<CDecalSceneObject> <ancestor>; */ /* 0 8 */
	void ~CDecalSceneObjectDesc(CDecalSceneObjectDesc* );
	void CDecalSceneObjectDesc(CDecalSceneObjectDesc* , CDecalSceneObjectDesc& );
	void CDecalSceneObjectDesc(CDecalSceneObjectDesc* , const CDecalSceneObjectDesc& );
	void CDecalSceneObjectDesc(CDecalSceneObjectDesc* );
	/* ../scenesystem/decal.cpp:15 */
	void StaticInitialize(void);
	/* ../public/scenesystem/decal.h:42 */
	virtual const char* GetTypeName(CDecalSceneObjectDesc* );
	/* ../scenesystem/decal.cpp:21 */
	virtual bool OnSceneObjectVisibleInView(CDecalSceneObjectDesc* , const ISceneView* , VisibleSceneObject_t* );
protected:
	/* ../scenesystem/decal.cpp:41 */
	virtual CSceneObject* Create(CDecalSceneObjectDesc* );
	/* ../scenesystem/decal.cpp:32 */
	virtual void UpdateBoundingBoxToMatchTransform(CDecalSceneObjectDesc* , CSceneObject* );
};

// <040B175D> ../public/scenesystem/decal.h:42
void CDecalSceneObjectDesc::GetTypeName()
{
} /* size: 12 */


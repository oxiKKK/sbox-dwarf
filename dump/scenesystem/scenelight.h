
//
// scenesystem/scenelight.h
//
//	referenced by: libengine2.so
//
//	functions: 15
//	classes: 3
//

// <0305FEB2> ../scenesystem/scenelight.h:11
// function calls: 23
void CSceneLightObjectInternal::~CSceneLightObjectInternal()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 2603
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
	CSceneObject::~CSceneObject(); // 2603
	CSceneLightObject::~CSceneLightObject(); // 11
} /* size: 200, inline expansions: 23 (945 bytes) */

// <0305F9AB> ../scenesystem/scenelight.h:11
// function calls: 25
void CSceneLightObjectInternal::~CSceneLightObjectInternal()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable(); // 76
	LightDesc_t::~LightDesc_t(); // 2603
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
	CSceneObject::~CSceneObject(); // 2603
	CSceneLightObject::~CSceneLightObject(); // 11
	CSceneLightObjectInternal::~CSceneLightObjectInternal(); // 11
} /* size: 224, inline expansions: 25 (1245 bytes) */

// <0305F98F> ../scenesystem/scenelight.h:11
inline void CSceneLightObjectInternal::~CSceneLightObjectInternal()
{
} /* size: 0 */

// <0304B966> ../scenesystem/scenelight.h:11
// member functions: 8
// member variables: 4
// class size: 704
class CSceneLightObjectInternal : public CSceneLightObject {
public:
	/* class CSceneLightObject <ancestor>; */ /* 0 496 */
	void CSceneLightObjectInternal(CSceneLightObjectInternal* , CSceneLightObjectInternal& );
	void CSceneLightObjectInternal(CSceneLightObjectInternal* , const CSceneLightObjectInternal& );
	uint m_nLastShadowAssignmentFrameCounter; /* 488 4 */
	Vector4D m_vecCurrentShadowAtlasRectangle[2][6]; /* 492 192 */
	CookieSequenceData_t m_vecCookieSeqData; /* 684 16 */
	/* ../scenesystem/scenelight.cpp:27 */
	void CSceneLightObjectInternal(CSceneLightObjectInternal* );
	virtual void ~CSceneLightObjectInternal(CSceneLightObjectInternal* );
	void CSceneLightObjectInternal(class CSceneLightObjectInternal *, class CSceneLightObjectInternal &); /* linkage=_ZN25CSceneLightObjectInternalC4EOS_ */
	void CSceneLightObjectInternal(class CSceneLightObjectInternal *, const class CSceneLightObjectInternal  &); /* linkage=_ZN25CSceneLightObjectInternalC4ERKS_ */
	void CSceneLightObjectInternal(class CSceneLightObjectInternal *); /* linkage=_ZN25CSceneLightObjectInternalC4Ev */
	virtual void ~CSceneLightObjectInternal(class CSceneLightObjectInternal *); /* linkage=_ZN25CSceneLightObjectInternalD4Ev */
} __attribute__((__aligned__(16)));

// <02C233D6> ../scenesystem/scenelight.h:26
void ForEachEnvironmentMap(function<void(CEnvMapSceneObject*)>)
{
} /* size: 0 */

// <02B736EA> ../scenesystem/scenelight.h:27
void ForEachLightProbeVolume(function<void(CSceneLightProbeVolumeObject*)>)
{
} /* size: 0 */

// <02C234DD> ../scenesystem/scenelight.h:28
void ForEachLight(function<void(CSceneLightObjectInternal*)>)
{
} /* size: 0 */

// <02B83633> ../scenesystem/scenelight.h:31
void ISceneEnvironmentMapListener::ISceneEnvironmentMapListener()
{
} /* size: 0 */

// <02B83616> ../scenesystem/scenelight.h:31
inline void ISceneEnvironmentMapListener::ISceneEnvironmentMapListener()
{
} /* size: 0 */

// <02B72048> ../scenesystem/scenelight.h:31
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class ISceneEnvironmentMapListener {
	void ISceneEnvironmentMapListener(ISceneEnvironmentMapListener* , ISceneEnvironmentMapListener& );
	void ISceneEnvironmentMapListener(ISceneEnvironmentMapListener* , const ISceneEnvironmentMapListener& );
	void ISceneEnvironmentMapListener(ISceneEnvironmentMapListener* );
	void ~ISceneEnvironmentMapListener(ISceneEnvironmentMapListener* );
	int ()(void) * * _vptr.ISceneEnvironmentMapListener; /* 0 8 */
	/* ../scenesystem/scenelight.h:34 */
	virtual void OnSceneEnvironmentMapCreated(ISceneEnvironmentMapListener* , CEnvMapSceneObject* );
	/* ../scenesystem/scenelight.h:35 */
	virtual void OnSceneEnvironmentMapDestroyed(ISceneEnvironmentMapListener* , CEnvMapSceneObject* );
	/* ../scenesystem/scenelight.h:36 */
	virtual void OnSceneEnvironmentMapUpdated(ISceneEnvironmentMapListener* , CEnvMapSceneObject* );
	void ISceneEnvironmentMapListener(class ISceneEnvironmentMapListener *, class ISceneEnvironmentMapListener &); /* linkage=_ZN28ISceneEnvironmentMapListenerC4EOS_ */
	void ISceneEnvironmentMapListener(class ISceneEnvironmentMapListener *, const class ISceneEnvironmentMapListener  &); /* linkage=_ZN28ISceneEnvironmentMapListenerC4ERKS_ */
	void ISceneEnvironmentMapListener(class ISceneEnvironmentMapListener *); /* linkage=_ZN28ISceneEnvironmentMapListenerC4Ev */
	void ~ISceneEnvironmentMapListener(class ISceneEnvironmentMapListener *); /* linkage=_ZN28ISceneEnvironmentMapListenerD4Ev */
	virtual void OnSceneEnvironmentMapCreated(class ISceneEnvironmentMapListener *, class CEnvMapSceneObject *); /* linkage=_ZN28ISceneEnvironmentMapListener28OnSceneEnvironmentMapCreatedEP18CEnvMapSceneObject */
	virtual void OnSceneEnvironmentMapDestroyed(class ISceneEnvironmentMapListener *, class CEnvMapSceneObject *); /* linkage=_ZN28ISceneEnvironmentMapListener30OnSceneEnvironmentMapDestroyedEP18CEnvMapSceneObject */
	virtual void OnSceneEnvironmentMapUpdated(class ISceneEnvironmentMapListener *, class CEnvMapSceneObject *); /* linkage=_ZN28ISceneEnvironmentMapListener28OnSceneEnvironmentMapUpdatedEP18CEnvMapSceneObject */
};

// <02B7383A> ../scenesystem/scenelight.h:40
void RegisterSceneEnvironmentMapListener(ISceneEnvironmentMapListener *)
{
} /* size: 0 */

// <02B737D1> ../scenesystem/scenelight.h:41
void UnregisterSceneEnvironmentMapListener(ISceneEnvironmentMapListener *)
{
} /* size: 0 */

// <02B835FF> ../scenesystem/scenelight.h:44
void ISceneLightProbeVolumeListener::ISceneLightProbeVolumeListener()
{
} /* size: 0 */

// <02B835E2> ../scenesystem/scenelight.h:44
inline void ISceneLightProbeVolumeListener::ISceneLightProbeVolumeListener()
{
} /* size: 0 */

// <02B7215E> ../scenesystem/scenelight.h:44
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class ISceneLightProbeVolumeListener {
	void ISceneLightProbeVolumeListener(ISceneLightProbeVolumeListener* , ISceneLightProbeVolumeListener& );
	void ISceneLightProbeVolumeListener(ISceneLightProbeVolumeListener* , const ISceneLightProbeVolumeListener& );
	void ISceneLightProbeVolumeListener(ISceneLightProbeVolumeListener* );
	void ~ISceneLightProbeVolumeListener(ISceneLightProbeVolumeListener* );
	int ()(void) * * _vptr.ISceneLightProbeVolumeListener; /* 0 8 */
	/* ../scenesystem/scenelight.h:47 */
	virtual void OnSceneLightProbeVolumeCreated(ISceneLightProbeVolumeListener* , CSceneLightProbeVolumeObject* );
	/* ../scenesystem/scenelight.h:48 */
	virtual void OnSceneLightProbeVolumeDestroyed(ISceneLightProbeVolumeListener* , CSceneLightProbeVolumeObject* );
	/* ../scenesystem/scenelight.h:49 */
	virtual void OnSceneLightProbeVolumeUpdated(ISceneLightProbeVolumeListener* , CSceneLightProbeVolumeObject* );
	void ISceneLightProbeVolumeListener(class ISceneLightProbeVolumeListener *, class ISceneLightProbeVolumeListener &); /* linkage=_ZN30ISceneLightProbeVolumeListenerC4EOS_ */
	void ISceneLightProbeVolumeListener(class ISceneLightProbeVolumeListener *, const class ISceneLightProbeVolumeListener  &); /* linkage=_ZN30ISceneLightProbeVolumeListenerC4ERKS_ */
	void ISceneLightProbeVolumeListener(class ISceneLightProbeVolumeListener *); /* linkage=_ZN30ISceneLightProbeVolumeListenerC4Ev */
	void ~ISceneLightProbeVolumeListener(class ISceneLightProbeVolumeListener *); /* linkage=_ZN30ISceneLightProbeVolumeListenerD4Ev */
	virtual void OnSceneLightProbeVolumeCreated(class ISceneLightProbeVolumeListener *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN30ISceneLightProbeVolumeListener30OnSceneLightProbeVolumeCreatedEP28CSceneLightProbeVolumeObject */
	virtual void OnSceneLightProbeVolumeDestroyed(class ISceneLightProbeVolumeListener *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN30ISceneLightProbeVolumeListener32OnSceneLightProbeVolumeDestroyedEP28CSceneLightProbeVolumeObject */
	virtual void OnSceneLightProbeVolumeUpdated(class ISceneLightProbeVolumeListener *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN30ISceneLightProbeVolumeListener30OnSceneLightProbeVolumeUpdatedEP28CSceneLightProbeVolumeObject */
};

// <02B73821> ../scenesystem/scenelight.h:53
void RegisterSceneLightProbeVolumeListener(ISceneLightProbeVolumeListener *)
{
} /* size: 0 */

// <02B737EA> ../scenesystem/scenelight.h:54
void UnregisterSceneLightProbeVolumeListener(ISceneLightProbeVolumeListener *)
{
} /* size: 0 */

// <02E0F041> ../scenesystem/scenelight.h:72
void AddLightSceneObjectTypes(void)
{
} /* size: 0 */


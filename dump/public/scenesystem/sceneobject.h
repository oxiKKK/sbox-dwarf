
//
// public/scenesystem/sceneobject.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 332
//	classes: 38
//	structs: 14
//

// <001508B9> ../public/scenesystem/sceneobject.h:51
inline EBatchFlags& operator|=(EBatchFlags& a, EBatchFlags b)
{
} /* size: 0 */

// <0355E7F7> ../public/scenesystem/sceneobject.h:67
void CSceneObjectReference_t::CSceneObjectReference_t()
{
} /* size: 0 */

// <0355E7DB> ../public/scenesystem/sceneobject.h:67
inline void CSceneObjectReference_t::CSceneObjectReference_t()
{
} /* size: 0 */

// <035512AA> ../public/scenesystem/sceneobject.h:67
inline void CSceneObjectReference_t::operator=(const CSceneObjectReference_t &)
{
} /* size: 0 */

// <000FD820> ../public/scenesystem/sceneobject.h:67
// member functions: 2
// member variables: 4
// class size: 48
class CSceneObjectReference_t {
	VectorAligned m_vecAABBMins __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vecAABBMaxes __attribute__((__aligned__(16))); /* 16 16 */
	ESceneObjectFlags m_nRenderableFlags; /* 32 8 */
	CSceneObject * m_pObject; /* 40 8 */
	class CSceneObjectReference_t & operator=(class CSceneObjectReference_t *, const class CSceneObjectReference_t  &); /* linkage=_ZN23CSceneObjectReference_taSERKS_ */
	void CSceneObjectReference_t(class CSceneObjectReference_t *); /* linkage=_ZN23CSceneObjectReference_tC4Ev */
} __attribute__((__aligned__(16)));

// <000FD8AD> ../public/scenesystem/sceneobject.h:88
// member functions: 16
// member variables: 4
// class size: 72
class CPVSData {
	/* ../public/scenesystem/sceneobject.h:91 */
	struct pvsmask_t {
		uint32 m_nOffset; /* 0 4 */
		uint32 m_nMask; /* 4 4 */
	};
	/* ../public/scenesystem/sceneobject.h:97 */
	CPVSData* CreatePVSNode(void);
	/* ../public/scenesystem/sceneobject.h:98 */
	void RecomputePVSFromBounds(CPVSData* , IPVS* , const Vector& , const Vector& );
	/* ../public/scenesystem/sceneobject.h:99 */
	void RecomputePVSFromFrustum(CPVSData* , IPVS* , const CFrustum& );
	/* ../public/scenesystem/sceneobject.h:100 */
	void ForceVisibleEverywhere(CPVSData* , IPVS* );
	/* ../public/scenesystem/sceneobject.h:103 */
	void SetPVSFromClusterMembership(CPVSData* , const uint32* , int);
	/* ../public/scenesystem/sceneobject.h:106 */
	bool IsVisible(CPVSData* , const uint32* );
	CPVSData * m_pNext; /* 0 8 */
	uint16 m_nPVSMasks; /* 8 2 */
	uint16 m_nPVSFlags; /* 10 2 */
	pvsmask_t m_masks[7]; /* 12 56 */
private:
	/* ../public/scenesystem/sceneobject.h:125 */
	void CreatePVSMasks(CPVSData* , const uint32* , int);
	/* ../public/scenesystem/sceneobject.h:129 */
	void DeletePVSNodes(CPVSData* );
	/* <2cd176a> ../scenesystem/pvssystem.cpp:14 */
	class CPVSData * CreatePVSNode(void); /* linkage=_ZN8CPVSData13CreatePVSNodeEv */
	void RecomputePVSFromBounds(class CPVSData *, class IPVS *, const class Vector  &, const class Vector  &); /* linkage=_ZN8CPVSData22RecomputePVSFromBoundsEP4IPVSRK6VectorS4_ */
	void RecomputePVSFromFrustum(class CPVSData *, class IPVS *, const class CFrustum  &); /* linkage=_ZN8CPVSData23RecomputePVSFromFrustumEP4IPVSRK8CFrustum */
	void ForceVisibleEverywhere(class CPVSData *, class IPVS *); /* linkage=_ZN8CPVSData22ForceVisibleEverywhereEP4IPVS */
	void SetPVSFromClusterMembership(class CPVSData *, const uint32  *, int); /* linkage=_ZN8CPVSData27SetPVSFromClusterMembershipEPKji */
	bool IsVisible(class CPVSData *, const uint32  *); /* linkage=_ZN8CPVSData9IsVisibleEPKj */
	void CreatePVSMasks(class CPVSData *, const uint32  *, int); /* linkage=_ZN8CPVSData14CreatePVSMasksEPKji */
	void DeletePVSNodes(class CPVSData *); /* linkage=_ZN8CPVSData14DeletePVSNodesEPS_ */
};

// <043FADED> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:88
// member functions: 16
// member variables: 4
// class size: 72
class CPVSData {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:91 */
	struct pvsmask_t {
		uint32 m_nOffset; /* 0 4 */
		uint32 m_nMask; /* 4 4 */
	};
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:97 */
	CPVSData* CreatePVSNode(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:98 */
	void RecomputePVSFromBounds(CPVSData* , IPVS* , const Vector& , const Vector& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:99 */
	void RecomputePVSFromFrustum(CPVSData* , IPVS* , const CFrustum& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:100 */
	void ForceVisibleEverywhere(CPVSData* , IPVS* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:103 */
	void SetPVSFromClusterMembership(CPVSData* , const uint32* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:106 */
	bool IsVisible(CPVSData* , const uint32* );
	CPVSData * m_pNext; /* 0 8 */
	uint16 m_nPVSMasks; /* 8 2 */
	uint16 m_nPVSFlags; /* 10 2 */
	pvsmask_t m_masks[7]; /* 12 56 */
private:
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:125 */
	void CreatePVSMasks(CPVSData* , const uint32* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:129 */
	void DeletePVSNodes(CPVSData* );
	/* <2cd176a> ../scenesystem/pvssystem.cpp:14 */
	class CPVSData * CreatePVSNode(void); /* linkage=_ZN8CPVSData13CreatePVSNodeEv */
	void RecomputePVSFromBounds(class CPVSData *, class IPVS *, const class Vector  &, const class Vector  &); /* linkage=_ZN8CPVSData22RecomputePVSFromBoundsEP4IPVSRK6VectorS4_ */
	void RecomputePVSFromFrustum(class CPVSData *, class IPVS *, const class CFrustum  &); /* linkage=_ZN8CPVSData23RecomputePVSFromFrustumEP4IPVSRK8CFrustum */
	void ForceVisibleEverywhere(class CPVSData *, class IPVS *); /* linkage=_ZN8CPVSData22ForceVisibleEverywhereEP4IPVS */
	void SetPVSFromClusterMembership(class CPVSData *, const uint32  *, int); /* linkage=_ZN8CPVSData27SetPVSFromClusterMembershipEPKji */
	bool IsVisible(class CPVSData *, const uint32  *); /* linkage=_ZN8CPVSData9IsVisibleEPKj */
	void CreatePVSMasks(class CPVSData *, const uint32  *, int); /* linkage=_ZN8CPVSData14CreatePVSMasksEPKji */
	void DeletePVSNodes(class CPVSData *); /* linkage=_ZN8CPVSData14DeletePVSNodesEPS_ */
};

// <058E18FC> ../../public/scenesystem/sceneobject.h:88
// member functions: 16
// member variables: 4
// class size: 72
class CPVSData {
	/* ../../public/scenesystem/sceneobject.h:91 */
	struct pvsmask_t {
		uint32 m_nOffset; /* 0 4 */
		uint32 m_nMask; /* 4 4 */
	};
	/* ../../public/scenesystem/sceneobject.h:97 */
	CPVSData* CreatePVSNode(void);
	/* ../../public/scenesystem/sceneobject.h:98 */
	void RecomputePVSFromBounds(CPVSData* , IPVS* , const Vector& , const Vector& );
	/* ../../public/scenesystem/sceneobject.h:99 */
	void RecomputePVSFromFrustum(CPVSData* , IPVS* , const CFrustum& );
	/* ../../public/scenesystem/sceneobject.h:100 */
	void ForceVisibleEverywhere(CPVSData* , IPVS* );
	/* ../../public/scenesystem/sceneobject.h:103 */
	void SetPVSFromClusterMembership(CPVSData* , const uint32* , int);
	/* ../../public/scenesystem/sceneobject.h:106 */
	bool IsVisible(CPVSData* , const uint32* );
	CPVSData * m_pNext; /* 0 8 */
	uint16 m_nPVSMasks; /* 8 2 */
	uint16 m_nPVSFlags; /* 10 2 */
	pvsmask_t m_masks[7]; /* 12 56 */
private:
	/* ../../public/scenesystem/sceneobject.h:125 */
	void CreatePVSMasks(CPVSData* , const uint32* , int);
	/* ../../public/scenesystem/sceneobject.h:129 */
	void DeletePVSNodes(CPVSData* );
	/* <2cd176a> ../scenesystem/pvssystem.cpp:14 */
	class CPVSData * CreatePVSNode(void); /* linkage=_ZN8CPVSData13CreatePVSNodeEv */
	void RecomputePVSFromBounds(class CPVSData *, class IPVS *, const class Vector  &, const class Vector  &); /* linkage=_ZN8CPVSData22RecomputePVSFromBoundsEP4IPVSRK6VectorS4_ */
	void RecomputePVSFromFrustum(class CPVSData *, class IPVS *, const class CFrustum  &); /* linkage=_ZN8CPVSData23RecomputePVSFromFrustumEP4IPVSRK8CFrustum */
	void ForceVisibleEverywhere(class CPVSData *, class IPVS *); /* linkage=_ZN8CPVSData22ForceVisibleEverywhereEP4IPVS */
	void SetPVSFromClusterMembership(class CPVSData *, const uint32  *, int); /* linkage=_ZN8CPVSData27SetPVSFromClusterMembershipEPKji */
	bool IsVisible(class CPVSData *, const uint32  *); /* linkage=_ZN8CPVSData9IsVisibleEPKj */
	void CreatePVSMasks(class CPVSData *, const uint32  *, int); /* linkage=_ZN8CPVSData14CreatePVSMasksEPKji */
	void DeletePVSNodes(class CPVSData *); /* linkage=_ZN8CPVSData14DeletePVSNodesEPS_ */
};

// <03DABA68> ../public/scenesystem/sceneobject.h:106
// variables: 2
inline void CPVSData::IsVisible(const uint32* pVisBits)
{
	{
		CPVSData* pNode; // 108
		{
			int i; // 110
		}
	}
} /* size: 0 */

// <02D76BE8> ../public/scenesystem/sceneobject.h:133
// member function: 1
// member variables: 10
// struct size: 72
struct CSceneSystemStencilState {
	CUtlStringToken m_nStencilReadIDs[8]; /* 0 32 */
	CUtlStringToken m_nStencilWriteIDs[8]; /* 32 32 */
	RsStencilOp_t m_frontStencilFailOp; /* 64 1 */
	RsStencilOp_t m_frontStencilDepthFailOp; /* 65 1 */
	RsStencilOp_t m_frontStencilPassOp; /* 66 1 */
	RsComparison_t m_frontStencilFunc; /* 67 1 */
	RsStencilOp_t m_backStencilFailOp; /* 68 1 */
	RsStencilOp_t m_backStencilDepthFailOp; /* 69 1 */
	RsStencilOp_t m_backStencilPassOp; /* 70 1 */
	RsComparison_t m_backStencilFunc; /* 71 1 */
	/* ../public/scenesystem/sceneobject.h:148 */
	void CSceneSystemStencilState(CSceneSystemStencilState* );
};

// <0101FD73> ../public/scenesystem/sceneobject.h:157
void CSceneSystemBakedLightingInfo::CSceneSystemBakedLightingInfo()
{
} /* size: 0 */

// <0101FD57> ../public/scenesystem/sceneobject.h:157
inline void CSceneSystemBakedLightingInfo::CSceneSystemBakedLightingInfo()
{
} /* size: 0 */

// <0101FD40> ../public/scenesystem/sceneobject.h:157
void CSceneSystemBakedLightingInfo::~CSceneSystemBakedLightingInfo()
{
} /* size: 0 */

// <0101FD24> ../public/scenesystem/sceneobject.h:157
inline void CSceneSystemBakedLightingInfo::~CSceneSystemBakedLightingInfo()
{
} /* size: 0 */

// <0010020A> ../public/scenesystem/sceneobject.h:157
// member functions: 2
// member variables: 4
// class size: 104
class CSceneSystemBakedLightingInfo {
	bool m_bHasLightMaps; /* 0 1 */
	CUtlVectorFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 5> m_textures __attribute__((__aligned__(8))); /* 8 56 */
	CUtlVectorFixed<CUtlStringToken, 5> m_textureBindings __attribute__((__aligned__(8))); /* 64 32 */
	ConstantBufferHandle_t m_hConstantBuffer; /* 96 8 */
	void ~CSceneSystemBakedLightingInfo(class CSceneSystemBakedLightingInfo *); /* linkage=_ZN29CSceneSystemBakedLightingInfoD4Ev */
	void CSceneSystemBakedLightingInfo(class CSceneSystemBakedLightingInfo *); /* linkage=_ZN29CSceneSystemBakedLightingInfoC4Ev */
} __attribute__((__aligned__(8)));

// <03557766> ../public/scenesystem/sceneobject.h:167
void CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::CSceneObjectStateOverideEntry()
{
} /* size: 0 */

// <0355774A> ../public/scenesystem/sceneobject.h:167
inline void CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::CSceneObjectStateOverideEntry()
{
} /* size: 0 */

// <03557733> ../public/scenesystem/sceneobject.h:167
void CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::~CSceneObjectStateOverideEntry()
{
} /* size: 0 */

// <03557717> ../public/scenesystem/sceneobject.h:167
inline void CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::~CSceneObjectStateOverideEntry()
{
} /* size: 0 */

// <035576F6> ../public/scenesystem/sceneobject.h:167
inline void CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::operator=(const CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > &)
{
} /* size: 0 */

// <0010025F> ../public/scenesystem/sceneobject.h:167
// member variables: 3
// struct size: 16
struct CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > {
	CUtlStringToken m_nIntAttributeMatch; /* 0 4 */
	int m_nMatchValue; /* 4 4 */
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2> m_overrideValue; /* 8 8 */
};

// <0353B334> ../public/scenesystem/sceneobject.h:185
void ChildSceneObjectReference_t::ChildSceneObjectReference_t()
{
} /* size: 0 */

// <0353B318> ../public/scenesystem/sceneobject.h:185
inline void ChildSceneObjectReference_t::ChildSceneObjectReference_t()
{
} /* size: 0 */

// <001002A8> ../public/scenesystem/sceneobject.h:185
// member variables: 3
// struct size: 16
struct ChildSceneObjectReference_t {
	CUtlStringToken m_nID; /* 0 4 */
	uint32 m_nChildUpdateFlags; /* 4 4 */
	CSceneObject * m_pChildObject; /* 8 8 */
};

// <001002E8> ../public/scenesystem/sceneobject.h:193
// member functions: 3
// member variable: 1
// struct size: 2
struct LightProbeVolumeBinding_t {
	/* ../public/scenesystem/sceneobject.h:195 */
	void LightProbeVolumeBinding_t(LightProbeVolumeBinding_t* );
	/* ../public/scenesystem/sceneobject.h:197 */
	bool IsValid(const LightProbeVolumeBinding_t* );
	/* ../public/scenesystem/sceneobject.h:198 */
	void Invalidate(LightProbeVolumeBinding_t* );
	int16 m_lpvIndex; /* 0 2 */
};

// <043FD827> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:193
// member functions: 3
// member variable: 1
// struct size: 2
struct LightProbeVolumeBinding_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:195 */
	void LightProbeVolumeBinding_t(LightProbeVolumeBinding_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:197 */
	bool IsValid(const LightProbeVolumeBinding_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:198 */
	void Invalidate(LightProbeVolumeBinding_t* );
	int16 m_lpvIndex; /* 0 2 */
};

// <058E4336> ../../public/scenesystem/sceneobject.h:193
// member functions: 3
// member variable: 1
// struct size: 2
struct LightProbeVolumeBinding_t {
	/* ../../public/scenesystem/sceneobject.h:195 */
	void LightProbeVolumeBinding_t(LightProbeVolumeBinding_t* );
	/* ../../public/scenesystem/sceneobject.h:197 */
	bool IsValid(const LightProbeVolumeBinding_t* );
	/* ../../public/scenesystem/sceneobject.h:198 */
	void Invalidate(LightProbeVolumeBinding_t* );
	int16 m_lpvIndex; /* 0 2 */
};

// <06E2A0A0> ../../public/scenesystem/sceneobject.h:195
void LightProbeVolumeBinding_t::LightProbeVolumeBinding_t()
{
} /* size: 0 */

// <06E2A087> ../../public/scenesystem/sceneobject.h:195
inline void LightProbeVolumeBinding_t::LightProbeVolumeBinding_t()
{
} /* size: 0 */

// <04020F91> ../public/scenesystem/sceneobject.h:197
inline void LightProbeVolumeBinding_t::IsValid()
{
} /* size: 0 */

// <06E2A06E> ../../public/scenesystem/sceneobject.h:198
inline void LightProbeVolumeBinding_t::Invalidate()
{
} /* size: 0 */

// <00100376> ../public/scenesystem/sceneobject.h:206
// member functions: 10
// member variables: 6
// class size: 40
class CSceneObjectLightingCache_t {
	int32 m_nLightProbeVolumePrecomputedHandshake; /* 0 4 */
	Vector m_vCachedLightingOrigin; /* 4 12 */
	CUtlStringToken m_CachedLightGroup; /* 16 4 */
	uint32 m_nLPVFingerprint; /* 20 4 */
	LightProbeVolumeBinding_t m_nCachedLPV; /* 24 2 */
	const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 32 8 */
	/* ../public/scenesystem/sceneobject.h:220 */
	void CSceneObjectLightingCache_t(CSceneObjectLightingCache_t* );
	/* ../public/scenesystem/sceneobject.h:225 */
	void ~CSceneObjectLightingCache_t(CSceneObjectLightingCache_t* );
	/* ../public/scenesystem/sceneobject.h:229 */
	void Invalidate(CSceneObjectLightingCache_t* );
	/* ../public/scenesystem/sceneobject.h:235 */
	void InvalidateIfChanged(CSceneObjectLightingCache_t* , uint32, const Vector& , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:251 */
	void BoundsChanged(CSceneObjectLightingCache_t* );
	void CSceneObjectLightingCache_t(class CSceneObjectLightingCache_t *); /* linkage=_ZN27CSceneObjectLightingCache_tC4Ev */
	void ~CSceneObjectLightingCache_t(class CSceneObjectLightingCache_t *); /* linkage=_ZN27CSceneObjectLightingCache_tD4Ev */
	void Invalidate(class CSceneObjectLightingCache_t *); /* linkage=_ZN27CSceneObjectLightingCache_t10InvalidateEv */
	void InvalidateIfChanged(class CSceneObjectLightingCache_t *, uint32, const class Vector  &, const class CUtlStringToken  &); /* linkage=_ZN27CSceneObjectLightingCache_t19InvalidateIfChangedEjRK6VectorRK15CUtlStringToken */
	void BoundsChanged(class CSceneObjectLightingCache_t *); /* linkage=_ZN27CSceneObjectLightingCache_t13BoundsChangedEv */
};

// <03562DA5> ../public/scenesystem/sceneobject.h:220
void CSceneObjectLightingCache_t::CSceneObjectLightingCache_t()
{
} /* size: 0 */

// <03562D8C> ../public/scenesystem/sceneobject.h:220
inline void CSceneObjectLightingCache_t::CSceneObjectLightingCache_t()
{
} /* size: 0 */

// <03562D75> ../public/scenesystem/sceneobject.h:225
void CSceneObjectLightingCache_t::~CSceneObjectLightingCache_t()
{
} /* size: 0 */

// <03562D5C> ../public/scenesystem/sceneobject.h:225
inline void CSceneObjectLightingCache_t::~CSceneObjectLightingCache_t()
{
} /* size: 0 */

// <04020F5F> ../public/scenesystem/sceneobject.h:229
inline void CSceneObjectLightingCache_t::Invalidate()
{
} /* size: 0 */

// <04020F16> ../public/scenesystem/sceneobject.h:235
// variable: 1
inline void CSceneObjectLightingCache_t::InvalidateIfChanged(uint32 lpvFingerprint, const Vector& vLightingOrigin, const CUtlStringToken& lightGroup)
{
	const bool  bLightingDataChanged; // 237
} /* size: 0, variables: 1 */

// <00104A55> ../public/scenesystem/sceneobject.h:259
// member functions: 6
// member variables: 12
// class size: 1,360
class CSceneObjectExtraData_t {
	CRenderAttributes m_Attributes; /* 0 1184 */
	int m_materialOverrideHash; /* 1184 4 */
	CUtlVectorFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1> m_materialOverrideList __attribute__((__aligned__(8))); /* 1192 48 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int> > m_materialIndexOverrides; /* 1240 32 */
	CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1> m_childObjects __attribute__((__aligned__(8))); /* 1272 48 */
	MeshGroupMask_t m_nCurrentMeshGroupMask; /* 1320 8 */
	CSceneObject * m_pParentObject; /* 1328 8 */
	CUtlStringToken m_nLayerForceID; /* 1336 4 */
	Vector m_vLightingOrigin; /* 1340 12 */
	float m_flDepthSortBias; /* 1352 4 */
	bool m_bLightingOriginIsInWorldSpace; /* 1356 1 */
	int8 m_nCurrentLOD; /* 1357 1 */
	/* ../public/scenesystem/sceneobject.h:294 */
	void Init(CSceneObjectExtraData_t* );
	/* ../public/scenesystem/sceneobject.h:306 */
	void CSceneObjectExtraData_t(CSceneObjectExtraData_t* );
	/* ../public/scenesystem/sceneobject.h:311 */
	void ~CSceneObjectExtraData_t(CSceneObjectExtraData_t* );
	void Init(class CSceneObjectExtraData_t *); /* linkage=_ZN23CSceneObjectExtraData_t4InitEv */
	void CSceneObjectExtraData_t(class CSceneObjectExtraData_t *); /* linkage=_ZN23CSceneObjectExtraData_tC4Ev */
	void ~CSceneObjectExtraData_t(class CSceneObjectExtraData_t *); /* linkage=_ZN23CSceneObjectExtraData_tD4Ev */
} __attribute__((__aligned__(16)));

// <03562D2A> ../public/scenesystem/sceneobject.h:294
inline void CSceneObjectExtraData_t::Init()
{
} /* size: 0 */

// <0356130D> ../public/scenesystem/sceneobject.h:306
// variables: 4
// function calls: 118
void CSceneObjectExtraData_t::CSceneObjectExtraData_t()
{
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
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	CSamplerStateDesc::CSamplerStateDesc(); // 31
	SamplerAttrForStorage_t::SamplerAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::CUtlAttributeListChunk(); // 248
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
	CRenderAttributes::CRenderAttributes(); // 307
	{
	}
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this); // 1597
	AlignedByteArray_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >::AlignedByteArray_t(); // 228
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::CUtlMemory(
			CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,  this,
					CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	Base(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1, in this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 307
	{
	}
	AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, ChildSceneObjectReference_t>::AlignedByteArray_t(); // 228
	CUtlMemory<ChildSceneObjectReference_t, int>::CUtlMemory(
			ChildSceneObjectReference_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<ChildSceneObjectReference_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<ChildSceneObjectReference_t, int>::CUtlMemoryFixedGrowable_Base(
					ChildSceneObjectReference_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 307
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 307
	Vector::operator=(
			const Vector& vOther);  // 298
	CSceneObjectExtraData_t::Init(); // 308
	CUtlStringToken::CUtlStringToken(); // 307
	Vector::Vector(); // 307
} /* size: 970, inline expansions: 103 (3520 bytes) */

// <035612F4> ../public/scenesystem/sceneobject.h:306
inline void CSceneObjectExtraData_t::CSceneObjectExtraData_t()
{
} /* size: 0 */

// <035607C0> ../public/scenesystem/sceneobject.h:311
// variables: 2
// function calls: 59
void CSceneObjectExtraData_t::~CSceneObjectExtraData_t()
{
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::RemoveAll(); // 1798
	CUtlMemory<ChildSceneObjectReference_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<ChildSceneObjectReference_t, int>::ConvertToExternalMemory(
				ChildSceneObjectReference_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ChildSceneObjectReference_t, int>::Purge_FixedGrowable(
				ChildSceneObjectReference_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ChildSceneObjectReference_t, int>::Purge_FixedGrowable(
				ChildSceneObjectReference_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<1, ChildSceneObjectReference_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<ChildSceneObjectReference_t, int>::Base(); // 112
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Base(); // 368
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Purge(); // 560
	CUtlMemory<ChildSceneObjectReference_t, int>::Purge(); // 903
	CUtlMemory<ChildSceneObjectReference_t, int>::Purge(); // 510
	ValidateAlignment<ChildSceneObjectReference_t>(void); // 508
	CUtlMemory<ChildSceneObjectReference_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ChildSceneObjectReference_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1>::~CUtlVectorFixedGrowable(); // 313
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResour this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTy this); // 313
	{
		int i; // 1721
		CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 167
		CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >::~CSceneObjectStateOverideEntry(); // 1526
		Destruct<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1798
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::ConvertToExternalMemory(
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,  this,
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >,  this,
				CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<1, CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1, in this,
		int numElements);  // 1799
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 1800
	Purge(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 560
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::Purge(); // 903
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::Purge(); // 510
	ValidateAlignment<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > >(void); // 508
	CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>::~CUtlMemory(); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1, in this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixe this); // 478
	CUtlVectorFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1>::~CUtlVectorFixedGrowable(); // 313
} /* size: 497, inline expansions: 48 (2408 bytes) */

// <035607A7> ../public/scenesystem/sceneobject.h:311
inline void CSceneObjectExtraData_t::~CSceneObjectExtraData_t()
{
} /* size: 0 */

// <000AB357> ../public/scenesystem/sceneobject.h:335
// member functions: 370
// member variables: 29
// static member variable: 1
// vtable entries: 4
// class size: 240
class CSceneObject : public IGenericInterface {
	/* ../public/scenesystem/sceneobject.h:539 */
	enum MeshInstanceOwnership_t {
		MESH_INSTANCE_NOT_OWNED = 0,
		MESH_INSTANCE_OWNED = 1,
	};
public:
	/* class IGenericInterface <ancestor>; */ /* 0 8 */
	void CSceneObject(CSceneObject* , const CSceneObject& );
	/* ../public/scenesystem/sceneobject.h:1428 */
	void CSceneObject(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1433 */
	virtual void ~CSceneObject(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:354 */
	void Init(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:355 */
	void Term(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1439 */
	void InitObject(CSceneObject* , ISceneWorld* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1446 */
	void CreateDefaultPVSNode(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1453 */
	void RecomputePVS(CSceneObject* , IPVS* );
	/* ../public/scenesystem/sceneobject.h:1469 */
	void SetCullDistance(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:1488 */
	void SetAttributes(CSceneObject* , CRenderAttributes* );
	/* ../public/scenesystem/sceneobject.h:1496 */
	void SetBoolValue(CSceneObject* , const CUtlStringToken& , bool);
	/* ../public/scenesystem/sceneobject.h:1503 */
	bool GetBoolValue(const CSceneObject* , const CUtlStringToken& , bool);
	/* ../public/scenesystem/sceneobject.h:1515 */
	void DeleteBoolValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1522 */
	void SetFloatValue(CSceneObject* , const CUtlStringToken& , float);
	/* ../public/scenesystem/sceneobject.h:1529 */
	float GetFloatValue(const CSceneObject* , const CUtlStringToken& , float);
	/* ../public/scenesystem/sceneobject.h:1541 */
	void DeleteFloatValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1548 */
	void SetIntValue(CSceneObject* , const CUtlStringToken& , int);
	/* ../public/scenesystem/sceneobject.h:1555 */
	int GetIntValue(const CSceneObject* , const CUtlStringToken& , int);
	/* ../public/scenesystem/sceneobject.h:1567 */
	void DeleteIntValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1573 */
	void SetComboValue(CSceneObject* , const CUtlStringToken& , uint8);
	/* ../public/scenesystem/sceneobject.h:1580 */
	uint8 GetComboValue(const CSceneObject* , const CUtlStringToken& , uint8);
	/* ../public/scenesystem/sceneobject.h:1592 */
	void DeleteComboValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1599 */
	void SetParentAttributes(CSceneObject* , const CRenderAttributes* );
	/* ../public/scenesystem/sceneobject.h:1607 */
	void SetVector2DValue(CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../public/scenesystem/sceneobject.h:1614 */
	Vector2D GetVector2DValue(const CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../public/scenesystem/sceneobject.h:1626 */
	void DeleteVector2DValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1632 */
	void SetVectorValue(CSceneObject* , const CUtlStringToken& , const Vector& );
	/* ../public/scenesystem/sceneobject.h:1639 */
	Vector GetVectorValue(const CSceneObject* , const CUtlStringToken& , Vector);
	/* ../public/scenesystem/sceneobject.h:1651 */
	void DeleteVectorValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1657 */
	void SetVector4DValue(CSceneObject* , const CUtlStringToken& , const Vector4D& );
	/* ../public/scenesystem/sceneobject.h:1664 */
	Vector4D GetVector4DValue(const CSceneObject* , const CUtlStringToken& , Vector4D);
	/* ../public/scenesystem/sceneobject.h:1676 */
	void DeleteVector4DValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1684 */
	void SetTextureValue(CSceneObject* , const CUtlStringToken& , HRenderTexture);
	/* ../public/scenesystem/sceneobject.h:1691 */
	void DeleteTextureValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1699 */
	void SetVMatrixValue(CSceneObject* , const CUtlStringToken& , const VMatrix& );
	/* ../public/scenesystem/sceneobject.h:1706 */
	void DeleteVMatrixValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:2318 */
	bool HasRenderAttributes(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2323 */
	CRenderAttributes& RenderAttributes(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2331 */
	void SetLightingOrigin(CSceneObject* , const Vector& , bool);
	/* ../public/scenesystem/sceneobject.h:2341 */
	Vector GetLightingOrigin(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2365 */
	bool HasLightingOrigin(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2373 */
	void SetAlphaFade(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:2378 */
	float GetAlphaFade(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:412 */
	ISceneWorld* GetWorld(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:415 */
	void SetTintRGBA_Gamma(CSceneObject* , const Vector4D& );
	/* ../public/scenesystem/sceneobject.h:435 */
	void SetTintRGBA(CSceneObject* , const Vector4D& );
	/* ../public/scenesystem/sceneobject.h:443 */
	Vector4D GetTintRGBA(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:448 */
	CUtlStringToken GetLightGroup(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:466 */
	void SetLightGroup(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:483 */
	void SetLightProbeVolumePrecomputedHandshake(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:489 */
	void SetBakedLightingInfo(CSceneObject* , const CSceneSystemBakedLightingInfo* );
	/* ../public/scenesystem/sceneobject.h:495 */
	const CSceneSystemBakedLightingInfo* GetBakedLightingInfo(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:500 */
	bool IsVisible(const CSceneObject* , const uint32* );
	/* ../public/scenesystem/sceneobject.h:1716 */
	void ClearMaterialOverrideList(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:510 */
	void SetMaterialOverride(CSceneObject* , HMaterial, CUtlStringToken, int);
	/* ../public/scenesystem/sceneobject.h:2450 */
	void SetMaterialOverrideForMeshInstances(CSceneObject* , HMaterial);
	/* ../public/scenesystem/sceneobject.h:518 */
	void SetDebugLevel(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:1732 */
	void UpdateFlagsBasedOnMaterial(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1740 */
	void MoveToWorld(CSceneObject* , ISceneWorld* );
	/* ../public/scenesystem/sceneobject.h:1745 */
	ISceneObjectDesc* GetDesc(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1750 */
	CMeshInstance* GetMeshInstanceData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1762 */
	bool HasMeshInstanceData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1767 */
	void SetMeshInstanceData(CSceneObject* , CMeshInstance* , MeshInstanceOwnership_t);
	/* ../public/scenesystem/sceneobject.h:1784 */
	void ClearMeshInstanceData(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1790 */
	void DestroyMeshInstanceData(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1803 */
	void SetOwnsMeshInstanceData(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1815 */
	bool GetOwnsMeshInstanceData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1820 */
	CSceneObjectExtraData_t* GetExtraData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1825 */
	CSceneObjectLightingCache_t* GetLightingCache(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1830 */
	bool IsDeleted(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1835 */
	uint32 GetID(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1840 */
	void SetID(CSceneObject* , uint32);
	/* ../public/scenesystem/sceneobject.h:1847 */
	void SetPartiallyAlphaBlended(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1859 */
	bool IsPartiallyAlphaBlended(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1864 */
	void SetBatchable(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1876 */
	bool IsNotBatchable(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1881 */
	void SetUniqueBatchGroup(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:568 */
	void SetIsFromPool(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:569 */
	bool GetIsFromPool(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1911 */
	void SetOriginalFlags(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1916 */
	ESceneObjectFlags GetOriginalFlags(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:576 */
	bool HasOriginalFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1926 */
	void ChangeFlags(CSceneObject* , ESceneObjectFlags, ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1938 */
	void SetFlags(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:586 */
	void SetFlags(CSceneObject* , ESceneObjectFlags, bool);
	/* ../public/scenesystem/sceneobject.h:1921 */
	ESceneObjectFlags GetFlags(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1944 */
	bool HasFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1949 */
	void ClearFlags(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:605 */
	void SetLayerMatchID(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:607 */
	CUtlStringToken GetLayerMatchID(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:612 */
	void SetForceLayerID(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:1954 */
	bool IsLoaded(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1959 */
	bool IsRenderingEnabled(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1964 */
	void SetLoaded(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1969 */
	void ClearLoaded(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1974 */
	void DisableRendering(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1979 */
	void EnableRendering(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1984 */
	void SetRenderingEnabled(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1991 */
	void SetBounds(CSceneObject* , const Vector& , const Vector& );
	/* ../public/scenesystem/sceneobject.h:625 */
	void SetBounds(CSceneObject* , const AABB_t& );
	/* ../public/scenesystem/sceneobject.h:1996 */
	void SetBoundsInfinite(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2001 */
	void GetBounds(const CSceneObject* , Vector& , Vector& );
	/* ../public/scenesystem/sceneobject.h:2006 */
	void GetBounds(const CSceneObject* , AABB_t& );
	/* ../public/scenesystem/sceneobject.h:635 */
	AABB_t GetBounds(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:642 */
	Vector MinBounds(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:647 */
	Vector MaxBounds(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2012 */
	void SetBoundsType(CSceneObject* , ESceneObjectBoundsType);
	/* ../public/scenesystem/sceneobject.h:654 */
	float SafeSquare(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:669 */
	void SetFadeAndCullDistance(CSceneObject* , float, float);
	/* ../public/scenesystem/sceneobject.h:687 */
	float GetFadeStartDistanceSquared(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:692 */
	float GetFadeCullDistanceSquared(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:697 */
	float CalcFadeStartDistance(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:704 */
	float CalcFadeCullDistance(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:711 */
	void DisableFadeAndCull(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2017 */
	ESceneObjectBoundsType GetBoundsType(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2022 */
	float GetBoundingSphereRadius(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2078 */
	void SetTransform(CSceneObject* , const matrix3x4_t& );
	/* ../public/scenesystem/sceneobject.h:2096 */
	void SetTransform(CSceneObject* , const CTransform& );
	/* ../public/scenesystem/sceneobject.h:2101 */
	void SetTransform(CSceneObject* , const CTransformUnaligned& );
	/* ../public/scenesystem/sceneobject.h:2108 */
	const matrix3x4_t& GetTransform(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2113 */
	matrix3x4_t& GetTransform(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2118 */
	CTransform GetCTransform(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2123 */
	CTransformUnaligned GetCTransformUnaligned(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2133 */
	void SetSortPosition(CSceneObject* , const Vector& );
	/* ../public/scenesystem/sceneobject.h:1479 */
	void SetObjectClass(CSceneObject* , uint8);
	/* ../public/scenesystem/sceneobject.h:1474 */
	uint8 GetObjectClass(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:739 */
	void SetObjectClass(CSceneObject* , const char* );
	/* ../public/scenesystem/sceneobject.h:2142 */
	void ScheduleDirtyUpdate(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2150 */
	void UnscheduleDirtyUpdate(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2158 */
	void SetShouldBeDeletedBeforeWorld(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2163 */
	void EnableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:2170 */
	void DisableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:2177 */
	void ResetMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:2204 */
	MeshGroupMask_t GetCurrentMeshGroupMask(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2221 */
	void SetLOD(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:2234 */
	void DisableLOD(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2242 */
	LODGroupMask_t GetCurrentLODGroupMask(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2252 */
	int GetCurrentLODLevel(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2263 */
	void SetDepthSortBias(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:2273 */
	float GetDepthSortBias(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:772 */
	CSceneObject* GetParent(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:774 */
	void AddChildObject(CSceneObject* , CUtlStringToken, CSceneObject* , uint32);
	/* ../public/scenesystem/sceneobject.h:777 */
	void RemoveChild(CSceneObject* , CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:779 */
	CSceneObject* FindChild(const CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2310 */
	bool CheckAgainstMeshGroupAndLODGroupMask(const CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:1420 */
	bool HasProperty(const CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:800 */
	float GetSizeCullBloatScale(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:801 */
	void SetSizeCullBloatScale(CSceneObject* , SceneObjectSizeCullBloat_t);
	/* ../public/scenesystem/sceneobject.h:803 */
	void SetBoundsGroupIndex(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:804 */
	int GetBoundsGroupIndex(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2383 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* );
	/* ../public/scenesystem/sceneobject.h:2414 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* , const IMaterial2* );
	/* ../public/scenesystem/sceneobject.h:1067 */
	const CModel* GetModel(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1074 */
	HModel GetModelHandle(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:813 */
	ESceneObjectTypeFlags GetObjectTypeFlags(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1081 */
	void AddObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../public/scenesystem/sceneobject.h:1086 */
	void RemoveObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../public/scenesystem/sceneobject.h:2297 */
	void EnableLightingCache(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2305 */
	void GetMaterialsForObject(CSceneObject* , CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& , CUtlVectorFixedGrowable<int, 2>& );
private:
	/* ../public/scenesystem/sceneobject.h:1893 */
	bool SetRenderableFlagsAndMirrorIfChanged(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1906 */
	void MirrorFlags(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2282 */
	void MarkObjectNotDirty(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2289 */
	void EnsureExtraData(CSceneObject* );
	CMeshInstance * m_pMeshInstanceData; /* 8 8 */
	ISceneObjectDesc * m_pDesc; /* 16 8 */
	CSceneObjectReference_t * m_pRefData; /* 24 8 */
	matrix3x4a_t m_transform __attribute__((__aligned__(16))); /* 32 48 */
	float m_flStartFadeDistanceSquared; /* 80 4 */
	float m_flFarCullDistanceSquared; /* 84 4 */
	uint16 m_nObjectTypeFlags; /* 88 2 */
	color24 m_tint; /* 90 3 */
	uint8 m_nMeshGroupMaskSmall; /* 93 1 */
	uint8 m_nDebugLevel:2; /* 94: 0 1 */
	uint8 m_nSizeCullBloat:2; /* 94: 2 1 */
	uint8 m_nBoundsType:1; /* 94: 4 1 */
	uint8 m_nID; /* 95 1 */
	int8 m_nBoundsGroupIndex; /* 96 1 */
	uint8 m_nObjectClass; /* 97 1 */
	float m_fAlpha; /* 100 4 */
	CPVSData * m_pPVSData; /* 104 8 */
	CSceneObjectExtraData_t * m_pExtraData; /* 112 8 */
	CSceneObjectLightingCache_t * m_pLightingCache; /* 120 8 */
	ESceneObjectFlags m_nOriginalRenderableFlags; /* 128 8 */
	ESceneObjectFlags m_nRenderableFlags; /* 136 8 */
	ISceneWorld * m_pWorld; /* 144 8 */
	CUtlStringToken m_nLayerMatchID; /* 152 4 */
	static float s_flSizeCullBloatScale[4]; /* 0 0 */
	CUtlVectorFixedGrowable<unsigned int, 3> m_tags __attribute__((__aligned__(8))); /* 160 48 */
	bool m_IsDeleting; /* 208 1 */
	/* ../public/scenesystem/sceneobject.h:893 */
	void SetMaterialOverrideList(CSceneObject* , int, const CUtlStringToken* , const HMaterialStrong* );
	CManagedHandle m_ManagedHandle; /* 212 4 */
	/* ../public/scenesystem/sceneobject.h:940 */
	virtual const CManagedHandle* GetManagedHandle(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:942 */
	virtual void InitManagedHandle(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:947 */
	bool IsInTagsList(CSceneObject* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../public/scenesystem/sceneobject.h:961 */
	void RemoveTag(CSceneObject* , uint);
	/* ../public/scenesystem/sceneobject.h:969 */
	int GetTagCount(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:971 */
	uint GetTagAt(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:973 */
	void RemoveAllTags(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:978 */
	void AddTag(CSceneObject* , uint);
	/* ../public/scenesystem/sceneobject.h:985 */
	void OnTagsChanged(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:989 */
	bool HasTag(CSceneObject* , uint);
	/* ../public/scenesystem/sceneobject.h:994 */
	void SetMaterialGroup(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:1002 */
	void SetBodyGroup(CSceneObject* , CUtlStringToken, int);
	/* ../public/scenesystem/sceneobject.h:1060 */
	CRenderAttributes& GetAttributesForModify(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1034 */
	CRenderAttributes* GetAttributesPtrForModify(CSceneObject* );
	InstancedRayTracingEnvironmentReference_t * m_rayTraceInstance; /* 216 8 */
	/* ../public/scenesystem/sceneobject.h:1040 */
	void UpdateRayTraceObject(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1045 */
	void DestroyRayTraceInstance(CSceneObject* );
	bool m_IsRayTraceDirty; /* 224 1 */
	/* ../public/scenesystem/sceneobject.h:1056 */
	void SetMaterialOverrideByIndex(CSceneObject* , int, HMaterial);
	/* ../public/scenesystem/sceneobject.h:1057 */
	void ClearIndexedMaterialOverrides(CSceneObject* );
	void CSceneObject(class CSceneObject *, const class CSceneObject  &); /* linkage=_ZN12CSceneObjectC4ERKS_ */
	void CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectC4Ev */
	virtual void ~CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectD4Ev */
	/* <35a5c73> ../scenesystem/sceneobject_methods.cpp:1151 */
	void Init(class CSceneObject *); /* linkage=_ZN12CSceneObject4InitEv */
	void Term(class CSceneObject *); /* linkage=_ZN12CSceneObject4TermEv */
	void InitObject(class CSceneObject *, class ISceneWorld *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10InitObjectEP11ISceneWorld17ESceneObjectFlags */
	void CreateDefaultPVSNode(class CSceneObject *); /* linkage=_ZN12CSceneObject20CreateDefaultPVSNodeEv */
	void RecomputePVS(class CSceneObject *, class IPVS *); /* linkage=_ZN12CSceneObject12RecomputePVSEP4IPVS */
	void SetCullDistance(class CSceneObject *, float); /* linkage=_ZN12CSceneObject15SetCullDistanceEf */
	void SetAttributes(class CSceneObject *, class CRenderAttributes *); /* linkage=_ZN12CSceneObject13SetAttributesEP17CRenderAttributes */
	void SetBoolValue(class CSceneObject *, const class CUtlStringToken  &, bool); /* linkage=_ZN12CSceneObject12SetBoolValueERK15CUtlStringTokenb */
	bool GetBoolValue(const class CSceneObject  *, const class CUtlStringToken  &, bool); /* linkage=_ZNK12CSceneObject12GetBoolValueERK15CUtlStringTokenb */
	void DeleteBoolValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject15DeleteBoolValueERK15CUtlStringToken */
	void SetFloatValue(class CSceneObject *, const class CUtlStringToken  &, float); /* linkage=_ZN12CSceneObject13SetFloatValueERK15CUtlStringTokenf */
	float GetFloatValue(const class CSceneObject  *, const class CUtlStringToken  &, float); /* linkage=_ZNK12CSceneObject13GetFloatValueERK15CUtlStringTokenf */
	void DeleteFloatValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteFloatValueERK15CUtlStringToken */
	void SetIntValue(class CSceneObject *, const class CUtlStringToken  &, int); /* linkage=_ZN12CSceneObject11SetIntValueERK15CUtlStringTokeni */
	int GetIntValue(const class CSceneObject  *, const class CUtlStringToken  &, int); /* linkage=_ZNK12CSceneObject11GetIntValueERK15CUtlStringTokeni */
	void DeleteIntValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject14DeleteIntValueERK15CUtlStringToken */
	void SetComboValue(class CSceneObject *, const class CUtlStringToken  &, uint8); /* linkage=_ZN12CSceneObject13SetComboValueERK15CUtlStringTokenh */
	uint8 GetComboValue(const class CSceneObject  *, const class CUtlStringToken  &, uint8); /* linkage=_ZNK12CSceneObject13GetComboValueERK15CUtlStringTokenh */
	void DeleteComboValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteComboValueERK15CUtlStringToken */
	void SetParentAttributes(class CSceneObject *, const class CRenderAttributes  *); /* linkage=_ZN12CSceneObject19SetParentAttributesEPK17CRenderAttributes */
	void SetVector2DValue(class CSceneObject *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZN12CSceneObject16SetVector2DValueERK15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZNK12CSceneObject16GetVector2DValueERK15CUtlStringToken8Vector2D */
	void DeleteVector2DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector2DValueERK15CUtlStringToken */
	void SetVectorValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector  &); /* linkage=_ZN12CSceneObject14SetVectorValueERK15CUtlStringTokenRK6Vector */
	class Vector GetVectorValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector); /* linkage=_ZNK12CSceneObject14GetVectorValueERK15CUtlStringToken6Vector */
	void DeleteVectorValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject17DeleteVectorValueERK15CUtlStringToken */
	void SetVector4DValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector4D  &); /* linkage=_ZN12CSceneObject16SetVector4DValueERK15CUtlStringTokenRK8Vector4D */
	class Vector4D GetVector4DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector4D); /* linkage=_ZNK12CSceneObject16GetVector4DValueERK15CUtlStringToken8Vector4D */
	void DeleteVector4DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector4DValueERK15CUtlStringToken */
	void SetTextureValue(class CSceneObject *, const class CUtlStringToken  &, HRenderTexture); /* linkage=_ZN12CSceneObject15SetTextureValueERK15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void DeleteTextureValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteTextureValueERK15CUtlStringToken */
	void SetVMatrixValue(class CSceneObject *, const class CUtlStringToken  &, const class VMatrix  &); /* linkage=_ZN12CSceneObject15SetVMatrixValueERK15CUtlStringTokenRK7VMatrix */
	void DeleteVMatrixValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteVMatrixValueERK15CUtlStringToken */
	bool HasRenderAttributes(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasRenderAttributesEv */
	class CRenderAttributes & RenderAttributes(class CSceneObject *); /* linkage=_ZN12CSceneObject16RenderAttributesEv */
	void SetLightingOrigin(class CSceneObject *, const class Vector  &, bool); /* linkage=_ZN12CSceneObject17SetLightingOriginERK6Vectorb */
	class Vector GetLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17GetLightingOriginEv */
	bool HasLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17HasLightingOriginEv */
	void SetAlphaFade(class CSceneObject *, float); /* linkage=_ZN12CSceneObject12SetAlphaFadeEf */
	float GetAlphaFade(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetAlphaFadeEv */
	class ISceneWorld * GetWorld(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetWorldEv */
	void SetTintRGBA_Gamma(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject17SetTintRGBA_GammaERK8Vector4D */
	void SetTintRGBA(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject11SetTintRGBAERK8Vector4D */
	class Vector4D GetTintRGBA(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject11GetTintRGBAEv */
	class CUtlStringToken GetLightGroup(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetLightGroupEv */
	void SetLightGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject13SetLightGroupE15CUtlStringToken */
	void SetLightProbeVolumePrecomputedHandshake(class CSceneObject *, int); /* linkage=_ZN12CSceneObject39SetLightProbeVolumePrecomputedHandshakeEi */
	void SetBakedLightingInfo(class CSceneObject *, const class CSceneSystemBakedLightingInfo  *); /* linkage=_ZN12CSceneObject20SetBakedLightingInfoEPK29CSceneSystemBakedLightingInfo */
	const class CSceneSystemBakedLightingInfo  * GetBakedLightingInfo(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20GetBakedLightingInfoEv */
	bool IsVisible(const class CSceneObject  *, const uint32  *); /* linkage=_ZNK12CSceneObject9IsVisibleEPKj */
	void ClearMaterialOverrideList(class CSceneObject *); /* linkage=_ZN12CSceneObject25ClearMaterialOverrideListEv */
	void SetMaterialOverride(class CSceneObject *, HMaterial, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringTokeni */
	void SetMaterialOverrideForMeshInstances(class CSceneObject *, HMaterial); /* linkage=_ZN12CSceneObject35SetMaterialOverrideForMeshInstancesE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void SetDebugLevel(class CSceneObject *, int); /* linkage=_ZN12CSceneObject13SetDebugLevelEi */
	void UpdateFlagsBasedOnMaterial(class CSceneObject *); /* linkage=_ZN12CSceneObject26UpdateFlagsBasedOnMaterialEv */
	void MoveToWorld(class CSceneObject *, class ISceneWorld *); /* linkage=_ZN12CSceneObject11MoveToWorldEP11ISceneWorld */
	class ISceneObjectDesc * GetDesc(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject7GetDescEv */
	class CMeshInstance * GetMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetMeshInstanceDataEv */
	bool HasMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasMeshInstanceDataEv */
	void SetMeshInstanceData(class CSceneObject *, class CMeshInstance *, enum MeshInstanceOwnership_t); /* linkage=_ZN12CSceneObject19SetMeshInstanceDataEP13CMeshInstanceNS_23MeshInstanceOwnership_tE */
	void ClearMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject21ClearMeshInstanceDataEv */
	void DestroyMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyMeshInstanceDataEv */
	void SetOwnsMeshInstanceData(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject23SetOwnsMeshInstanceDataEb */
	bool GetOwnsMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetOwnsMeshInstanceDataEv */
	class CSceneObjectExtraData_t * GetExtraData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetExtraDataEv */
	class CSceneObjectLightingCache_t * GetLightingCache(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetLightingCacheEv */
	bool IsDeleted(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9IsDeletedEv */
	uint32 GetID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject5GetIDEv */
	void SetID(class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject5SetIDEj */
	void SetPartiallyAlphaBlended(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject24SetPartiallyAlphaBlendedEb */
	bool IsPartiallyAlphaBlended(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23IsPartiallyAlphaBlendedEv */
	void SetBatchable(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject12SetBatchableEb */
	bool IsNotBatchable(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14IsNotBatchableEv */
	void SetUniqueBatchGroup(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetUniqueBatchGroupEb */
	void SetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13SetIsFromPoolEv */
	bool GetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetIsFromPoolEv */
	void SetOriginalFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject16SetOriginalFlagsE17ESceneObjectFlags */
	enum ESceneObjectFlags GetOriginalFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetOriginalFlagsEv */
	bool HasOriginalFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject16HasOriginalFlagsE17ESceneObjectFlags */
	void ChangeFlags(class CSceneObject *, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject11ChangeFlagsE17ESceneObjectFlagsS0_ */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlags */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags, bool); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlagsb */
	enum ESceneObjectFlags GetFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetFlagsEv */
	bool HasFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject8HasFlagsE17ESceneObjectFlags */
	void ClearFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10ClearFlagsE17ESceneObjectFlags */
	void SetLayerMatchID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetLayerMatchIDE15CUtlStringToken */
	class CUtlStringToken GetLayerMatchID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject15GetLayerMatchIDEv */
	void SetForceLayerID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetForceLayerIDE15CUtlStringToken */
	bool IsLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8IsLoadedEv */
	bool IsRenderingEnabled(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18IsRenderingEnabledEv */
	void SetLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject9SetLoadedEv */
	void ClearLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject11ClearLoadedEv */
	void DisableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject16DisableRenderingEv */
	void EnableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnableRenderingEv */
	void SetRenderingEnabled(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetRenderingEnabledEb */
	void SetBounds(class CSceneObject *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6VectorS2_ */
	void SetBounds(class CSceneObject *, const class AABB_t  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6AABB_t */
	void SetBoundsInfinite(class CSceneObject *); /* linkage=_ZN12CSceneObject17SetBoundsInfiniteEv */
	void GetBounds(const class CSceneObject  *, class Vector &, class Vector &); /* linkage=_ZNK12CSceneObject9GetBoundsER6VectorS1_ */
	void GetBounds(const class CSceneObject  *, class AABB_t &); /* linkage=_ZNK12CSceneObject9GetBoundsER6AABB_t */
	class AABB_t GetBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetBoundsEv */
	class Vector MinBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MinBoundsEv */
	class Vector MaxBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MaxBoundsEv */
	void SetBoundsType(class CSceneObject *, enum ESceneObjectBoundsType); /* linkage=_ZN12CSceneObject13SetBoundsTypeE22ESceneObjectBoundsType */
	float SafeSquare(class CSceneObject *, float); /* linkage=_ZN12CSceneObject10SafeSquareEf */
	void SetFadeAndCullDistance(class CSceneObject *, float, float); /* linkage=_ZN12CSceneObject22SetFadeAndCullDistanceEff */
	float GetFadeStartDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject27GetFadeStartDistanceSquaredEv */
	float GetFadeCullDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject26GetFadeCullDistanceSquaredEv */
	float CalcFadeStartDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21CalcFadeStartDistanceEv */
	float CalcFadeCullDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20CalcFadeCullDistanceEv */
	void DisableFadeAndCull(class CSceneObject *); /* linkage=_ZN12CSceneObject18DisableFadeAndCullEv */
	enum ESceneObjectBoundsType GetBoundsType(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetBoundsTypeEv */
	/* <3c464b1> ../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject33UpdateBoundingBoxToMatchTransformEv */
	float GetBoundingSphereRadius(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetBoundingSphereRadiusEv */
	void SetTransform(class CSceneObject *, const class matrix3x4_t  &); /* linkage=_ZN12CSceneObject12SetTransformERK11matrix3x4_t */
	void SetTransform(class CSceneObject *, const class CTransform  &); /* linkage=_ZN12CSceneObject12SetTransformERK10CTransform */
	void SetTransform(class CSceneObject *, const class CTransformUnaligned  &); /* linkage=_ZN12CSceneObject12SetTransformERK19CTransformUnaligned */
	const class matrix3x4_t  & GetTransform(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetTransformEv */
	class matrix3x4_t & GetTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject12GetTransformEv */
	class CTransform GetCTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetCTransformEv */
	class CTransformUnaligned GetCTransformUnaligned(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetCTransformUnalignedEv */
	void SetSortPosition(class CSceneObject *, const class Vector  &); /* linkage=_ZN12CSceneObject15SetSortPositionERK6Vector */
	void SetObjectClass(class CSceneObject *, uint8); /* linkage=_ZN12CSceneObject14SetObjectClassEh */
	uint8 GetObjectClass(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetObjectClassEv */
	void SetObjectClass(class CSceneObject *, const char  *); /* linkage=_ZN12CSceneObject14SetObjectClassEPKc */
	void ScheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject19ScheduleDirtyUpdateEv */
	void UnscheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject21UnscheduleDirtyUpdateEv */
	void SetShouldBeDeletedBeforeWorld(class CSceneObject *); /* linkage=_ZN12CSceneObject29SetShouldBeDeletedBeforeWorldEv */
	void EnableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject16EnableMeshGroupsEy */
	void DisableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject17DisableMeshGroupsEy */
	void ResetMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject15ResetMeshGroupsEy */
	MeshGroupMask_t GetCurrentMeshGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetCurrentMeshGroupMaskEv */
	void SetLOD(class CSceneObject *, int); /* linkage=_ZN12CSceneObject6SetLODEi */
	void DisableLOD(class CSceneObject *); /* linkage=_ZN12CSceneObject10DisableLODEv */
	LODGroupMask_t GetCurrentLODGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject22GetCurrentLODGroupMaskEv */
	int GetCurrentLODLevel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetCurrentLODLevelEv */
	void SetDepthSortBias(class CSceneObject *, float); /* linkage=_ZN12CSceneObject16SetDepthSortBiasEf */
	float GetDepthSortBias(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetDepthSortBiasEv */
	class CSceneObject * GetParent(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetParentEv */
	void AddChildObject(class CSceneObject *, class CUtlStringToken, class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject14AddChildObjectE15CUtlStringTokenPS_j */
	void RemoveChild(class CSceneObject *, class CSceneObject *); /* linkage=_ZN12CSceneObject11RemoveChildEPS_ */
	class CSceneObject * FindChild(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject9FindChildE15CUtlStringToken */
	/* <2f2fc1d> ../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject11UpdateDirtyEv */
	/* <10234ed> ../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject25ProceduralResourcesLoadedEv */
	bool CheckAgainstMeshGroupAndLODGroupMask(const class CSceneObject  *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZNK12CSceneObject36CheckAgainstMeshGroupAndLODGroupMaskEyh */
	bool HasProperty(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject11HasPropertyE15CUtlStringToken */
	float GetSizeCullBloatScale(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21GetSizeCullBloatScaleEv */
	void SetSizeCullBloatScale(class CSceneObject *, enum SceneObjectSizeCullBloat_t); /* linkage=_ZN12CSceneObject21SetSizeCullBloatScaleE26SceneObjectSizeCullBloat_t */
	void SetBoundsGroupIndex(class CSceneObject *, int); /* linkage=_ZN12CSceneObject19SetBoundsGroupIndexEi */
	int GetBoundsGroupIndex(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetBoundsGroupIndexEv */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayer */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *, const class IMaterial2  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayerPK10IMaterial2 */
	const class CModel  * GetModel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetModelEv */
	HModel GetModelHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetModelHandleEv */
	enum ESceneObjectTypeFlags GetObjectTypeFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetObjectTypeFlagsEv */
	void AddObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject18AddObjectTypeFlagsE21ESceneObjectTypeFlags */
	void RemoveObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject21RemoveObjectTypeFlagsE21ESceneObjectTypeFlags */
	void EnableLightingCache(class CSceneObject *); /* linkage=_ZN12CSceneObject19EnableLightingCacheEv */
	void GetMaterialsForObject(class CSceneObject *, class CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2> &, class CUtlVectorFixedGrowable<int, 2> &); /* linkage=_ZN12CSceneObject21GetMaterialsForObjectER23CUtlVectorFixedGrowableI11CWeakHandleI29InfoForResourceTypeIMaterial2ELm2EERS0_IiLm2EE */
	bool SetRenderableFlagsAndMirrorIfChanged(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject36SetRenderableFlagsAndMirrorIfChangedE17ESceneObjectFlags */
	void MirrorFlags(class CSceneObject *); /* linkage=_ZN12CSceneObject11MirrorFlagsEv */
	void MarkObjectNotDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject18MarkObjectNotDirtyEv */
	void EnsureExtraData(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnsureExtraDataEv */
	void SetMaterialOverrideList(class CSceneObject *, int, const class CUtlStringToken  *, const HMaterialStrong  *); /* linkage=_ZN12CSceneObject23SetMaterialOverrideListEiPK15CUtlStringTokenPK13CStrongHandleI29InfoForResourceTypeIMaterial2E */
	/* <6355039> ../public/scenesystem/sceneobject.h:940 */
	virtual const class CManagedHandle  * GetManagedHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetManagedHandleEv */
	virtual void InitManagedHandle(class CSceneObject *); /* linkage=_ZN12CSceneObject17InitManagedHandleEv */
	bool IsInTagsList(class CSceneObject *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN12CSceneObject12IsInTagsListEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void RemoveTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject9RemoveTagEj */
	int GetTagCount(class CSceneObject *); /* linkage=_ZN12CSceneObject11GetTagCountEv */
	uint GetTagAt(class CSceneObject *, int); /* linkage=_ZN12CSceneObject8GetTagAtEi */
	void RemoveAllTags(class CSceneObject *); /* linkage=_ZN12CSceneObject13RemoveAllTagsEv */
	void AddTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6AddTagEj */
	void OnTagsChanged(class CSceneObject *); /* linkage=_ZN12CSceneObject13OnTagsChangedEv */
	bool HasTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6HasTagEj */
	void SetMaterialGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject16SetMaterialGroupE15CUtlStringToken */
	void SetBodyGroup(class CSceneObject *, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject12SetBodyGroupE15CUtlStringTokeni */
	class CRenderAttributes & GetAttributesForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetAttributesForModifyEv */
	class CRenderAttributes * GetAttributesPtrForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject25GetAttributesPtrForModifyEv */
	void UpdateRayTraceObject(class CSceneObject *); /* linkage=_ZN12CSceneObject20UpdateRayTraceObjectEv */
	void DestroyRayTraceInstance(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyRayTraceInstanceEv */
	void SetMaterialOverrideByIndex(class CSceneObject *, int, HMaterial); /* linkage=_ZN12CSceneObject26SetMaterialOverrideByIndexEi11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void ClearIndexedMaterialOverrides(class CSceneObject *); /* linkage=_ZN12CSceneObject29ClearIndexedMaterialOverridesEv */
} __attribute__((__aligned__(16)));

// <034B36BB> ../public/scenesystem/sceneobject.h:335
// member functions: 370
// member variables: 29
// static member variable: 1
// vtable entries: 4
// class size: 240
class CSceneObject : public IGenericInterface {
	/* ../public/scenesystem/sceneobject.h:539 */
	enum MeshInstanceOwnership_t {
		MESH_INSTANCE_NOT_OWNED = 0,
		MESH_INSTANCE_OWNED = 1,
	};
public:
	/* class IGenericInterface <ancestor>; */ /* 0 8 */
	void CSceneObject(CSceneObject* , const CSceneObject& );
	/* ../public/scenesystem/sceneobject.h:1428 */
	void CSceneObject(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1433 */
	virtual void ~CSceneObject(CSceneObject* );
	/* ../scenesystem/sceneobject_methods.cpp:1151 */
	void Init(CSceneObject* );
	/* ../scenesystem/sceneobject_methods.cpp:1185 */
	void Term(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1439 */
	void InitObject(CSceneObject* , ISceneWorld* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1446 */
	void CreateDefaultPVSNode(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1453 */
	void RecomputePVS(CSceneObject* , IPVS* );
	/* ../public/scenesystem/sceneobject.h:1469 */
	void SetCullDistance(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:1488 */
	void SetAttributes(CSceneObject* , CRenderAttributes* );
	/* ../public/scenesystem/sceneobject.h:1496 */
	void SetBoolValue(CSceneObject* , const CUtlStringToken& , bool);
	/* ../public/scenesystem/sceneobject.h:1503 */
	bool GetBoolValue(const CSceneObject* , const CUtlStringToken& , bool);
	/* ../public/scenesystem/sceneobject.h:1515 */
	void DeleteBoolValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1522 */
	void SetFloatValue(CSceneObject* , const CUtlStringToken& , float);
	/* ../public/scenesystem/sceneobject.h:1529 */
	float GetFloatValue(const CSceneObject* , const CUtlStringToken& , float);
	/* ../public/scenesystem/sceneobject.h:1541 */
	void DeleteFloatValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1548 */
	void SetIntValue(CSceneObject* , const CUtlStringToken& , int);
	/* ../public/scenesystem/sceneobject.h:1555 */
	int GetIntValue(const CSceneObject* , const CUtlStringToken& , int);
	/* ../public/scenesystem/sceneobject.h:1567 */
	void DeleteIntValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1573 */
	void SetComboValue(CSceneObject* , const CUtlStringToken& , uint8);
	/* ../public/scenesystem/sceneobject.h:1580 */
	uint8 GetComboValue(const CSceneObject* , const CUtlStringToken& , uint8);
	/* ../public/scenesystem/sceneobject.h:1592 */
	void DeleteComboValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1599 */
	void SetParentAttributes(CSceneObject* , const CRenderAttributes* );
	/* ../public/scenesystem/sceneobject.h:1607 */
	void SetVector2DValue(CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../public/scenesystem/sceneobject.h:1614 */
	Vector2D GetVector2DValue(const CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../public/scenesystem/sceneobject.h:1626 */
	void DeleteVector2DValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1632 */
	void SetVectorValue(CSceneObject* , const CUtlStringToken& , const Vector& );
	/* ../public/scenesystem/sceneobject.h:1639 */
	Vector GetVectorValue(const CSceneObject* , const CUtlStringToken& , Vector);
	/* ../public/scenesystem/sceneobject.h:1651 */
	void DeleteVectorValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1657 */
	void SetVector4DValue(CSceneObject* , const CUtlStringToken& , const Vector4D& );
	/* ../public/scenesystem/sceneobject.h:1664 */
	Vector4D GetVector4DValue(const CSceneObject* , const CUtlStringToken& , Vector4D);
	/* ../public/scenesystem/sceneobject.h:1676 */
	void DeleteVector4DValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1684 */
	void SetTextureValue(CSceneObject* , const CUtlStringToken& , HRenderTexture);
	/* ../public/scenesystem/sceneobject.h:1691 */
	void DeleteTextureValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:1699 */
	void SetVMatrixValue(CSceneObject* , const CUtlStringToken& , const VMatrix& );
	/* ../public/scenesystem/sceneobject.h:1706 */
	void DeleteVMatrixValue(CSceneObject* , const CUtlStringToken& );
	/* ../public/scenesystem/sceneobject.h:2318 */
	bool HasRenderAttributes(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2323 */
	CRenderAttributes& RenderAttributes(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2331 */
	void SetLightingOrigin(CSceneObject* , const Vector& , bool);
	/* ../public/scenesystem/sceneobject.h:2341 */
	Vector GetLightingOrigin(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2365 */
	bool HasLightingOrigin(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2373 */
	void SetAlphaFade(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:2378 */
	float GetAlphaFade(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:412 */
	ISceneWorld* GetWorld(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:415 */
	void SetTintRGBA_Gamma(CSceneObject* , const Vector4D& );
	/* ../public/scenesystem/sceneobject.h:435 */
	void SetTintRGBA(CSceneObject* , const Vector4D& );
	/* ../public/scenesystem/sceneobject.h:443 */
	Vector4D GetTintRGBA(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:448 */
	CUtlStringToken GetLightGroup(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:466 */
	void SetLightGroup(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:483 */
	void SetLightProbeVolumePrecomputedHandshake(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:489 */
	void SetBakedLightingInfo(CSceneObject* , const CSceneSystemBakedLightingInfo* );
	/* ../public/scenesystem/sceneobject.h:495 */
	const CSceneSystemBakedLightingInfo* GetBakedLightingInfo(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:500 */
	bool IsVisible(const CSceneObject* , const uint32* );
	/* ../public/scenesystem/sceneobject.h:1716 */
	void ClearMaterialOverrideList(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:510 */
	void SetMaterialOverride(CSceneObject* , HMaterial, CUtlStringToken, int);
	/* ../public/scenesystem/sceneobject.h:2450 */
	void SetMaterialOverrideForMeshInstances(CSceneObject* , HMaterial);
	/* ../public/scenesystem/sceneobject.h:518 */
	void SetDebugLevel(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:1732 */
	void UpdateFlagsBasedOnMaterial(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1740 */
	void MoveToWorld(CSceneObject* , ISceneWorld* );
	/* ../public/scenesystem/sceneobject.h:1745 */
	ISceneObjectDesc* GetDesc(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1750 */
	CMeshInstance* GetMeshInstanceData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1762 */
	bool HasMeshInstanceData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1767 */
	void SetMeshInstanceData(CSceneObject* , CMeshInstance* , MeshInstanceOwnership_t);
	/* ../public/scenesystem/sceneobject.h:1784 */
	void ClearMeshInstanceData(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1790 */
	void DestroyMeshInstanceData(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1803 */
	void SetOwnsMeshInstanceData(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1815 */
	bool GetOwnsMeshInstanceData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1820 */
	CSceneObjectExtraData_t* GetExtraData(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1825 */
	CSceneObjectLightingCache_t* GetLightingCache(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1830 */
	bool IsDeleted(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1835 */
	uint32 GetID(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1840 */
	void SetID(CSceneObject* , uint32);
	/* ../public/scenesystem/sceneobject.h:1847 */
	void SetPartiallyAlphaBlended(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1859 */
	bool IsPartiallyAlphaBlended(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1864 */
	void SetBatchable(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1876 */
	bool IsNotBatchable(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1881 */
	void SetUniqueBatchGroup(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:568 */
	void SetIsFromPool(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:569 */
	bool GetIsFromPool(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1911 */
	void SetOriginalFlags(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1916 */
	ESceneObjectFlags GetOriginalFlags(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:576 */
	bool HasOriginalFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1926 */
	void ChangeFlags(CSceneObject* , ESceneObjectFlags, ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1938 */
	void SetFlags(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:586 */
	void SetFlags(CSceneObject* , ESceneObjectFlags, bool);
	/* ../public/scenesystem/sceneobject.h:1921 */
	ESceneObjectFlags GetFlags(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1944 */
	bool HasFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1949 */
	void ClearFlags(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:605 */
	void SetLayerMatchID(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:607 */
	CUtlStringToken GetLayerMatchID(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:612 */
	void SetForceLayerID(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:1954 */
	bool IsLoaded(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1959 */
	bool IsRenderingEnabled(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1964 */
	void SetLoaded(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1969 */
	void ClearLoaded(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1974 */
	void DisableRendering(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1979 */
	void EnableRendering(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1984 */
	void SetRenderingEnabled(CSceneObject* , bool);
	/* ../public/scenesystem/sceneobject.h:1991 */
	void SetBounds(CSceneObject* , const Vector& , const Vector& );
	/* ../public/scenesystem/sceneobject.h:625 */
	void SetBounds(CSceneObject* , const AABB_t& );
	/* ../public/scenesystem/sceneobject.h:1996 */
	void SetBoundsInfinite(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2001 */
	void GetBounds(const CSceneObject* , Vector& , Vector& );
	/* ../public/scenesystem/sceneobject.h:2006 */
	void GetBounds(const CSceneObject* , AABB_t& );
	/* ../public/scenesystem/sceneobject.h:635 */
	AABB_t GetBounds(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:642 */
	Vector MinBounds(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:647 */
	Vector MaxBounds(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2012 */
	void SetBoundsType(CSceneObject* , ESceneObjectBoundsType);
	/* ../public/scenesystem/sceneobject.h:654 */
	float SafeSquare(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:669 */
	void SetFadeAndCullDistance(CSceneObject* , float, float);
	/* ../public/scenesystem/sceneobject.h:687 */
	float GetFadeStartDistanceSquared(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:692 */
	float GetFadeCullDistanceSquared(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:697 */
	float CalcFadeStartDistance(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:704 */
	float CalcFadeCullDistance(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:711 */
	void DisableFadeAndCull(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2017 */
	ESceneObjectBoundsType GetBoundsType(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2022 */
	float GetBoundingSphereRadius(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2078 */
	void SetTransform(CSceneObject* , const matrix3x4_t& );
	/* ../public/scenesystem/sceneobject.h:2096 */
	void SetTransform(CSceneObject* , const CTransform& );
	/* ../public/scenesystem/sceneobject.h:2101 */
	void SetTransform(CSceneObject* , const CTransformUnaligned& );
	/* ../public/scenesystem/sceneobject.h:2108 */
	const matrix3x4_t& GetTransform(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2113 */
	matrix3x4_t& GetTransform(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2118 */
	CTransform GetCTransform(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2123 */
	CTransformUnaligned GetCTransformUnaligned(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2133 */
	void SetSortPosition(CSceneObject* , const Vector& );
	/* ../public/scenesystem/sceneobject.h:1479 */
	void SetObjectClass(CSceneObject* , uint8);
	/* ../public/scenesystem/sceneobject.h:1474 */
	uint8 GetObjectClass(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:739 */
	void SetObjectClass(CSceneObject* , const char* );
	/* ../public/scenesystem/sceneobject.h:2142 */
	void ScheduleDirtyUpdate(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2150 */
	void UnscheduleDirtyUpdate(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2158 */
	void SetShouldBeDeletedBeforeWorld(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2163 */
	void EnableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:2170 */
	void DisableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:2177 */
	void ResetMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:2204 */
	MeshGroupMask_t GetCurrentMeshGroupMask(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2221 */
	void SetLOD(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:2234 */
	void DisableLOD(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2242 */
	LODGroupMask_t GetCurrentLODGroupMask(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2252 */
	int GetCurrentLODLevel(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2263 */
	void SetDepthSortBias(CSceneObject* , float);
	/* ../public/scenesystem/sceneobject.h:2273 */
	float GetDepthSortBias(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:772 */
	CSceneObject* GetParent(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:774 */
	void AddChildObject(CSceneObject* , CUtlStringToken, CSceneObject* , uint32);
	/* ../public/scenesystem/sceneobject.h:777 */
	void RemoveChild(CSceneObject* , CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:779 */
	CSceneObject* FindChild(const CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2310 */
	bool CheckAgainstMeshGroupAndLODGroupMask(const CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* ../public/scenesystem/sceneobject.h:1420 */
	bool HasProperty(const CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:800 */
	float GetSizeCullBloatScale(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:801 */
	void SetSizeCullBloatScale(CSceneObject* , SceneObjectSizeCullBloat_t);
	/* ../public/scenesystem/sceneobject.h:803 */
	void SetBoundsGroupIndex(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:804 */
	int GetBoundsGroupIndex(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2383 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* );
	/* ../public/scenesystem/sceneobject.h:2414 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* , const IMaterial2* );
	/* ../public/scenesystem/sceneobject.h:1067 */
	const CModel* GetModel(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1074 */
	HModel GetModelHandle(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:813 */
	ESceneObjectTypeFlags GetObjectTypeFlags(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1081 */
	void AddObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../public/scenesystem/sceneobject.h:1086 */
	void RemoveObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../public/scenesystem/sceneobject.h:2297 */
	void EnableLightingCache(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2305 */
	void GetMaterialsForObject(CSceneObject* , CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& , CUtlVectorFixedGrowable<int, 2>& );
private:
	/* ../public/scenesystem/sceneobject.h:1893 */
	bool SetRenderableFlagsAndMirrorIfChanged(CSceneObject* , ESceneObjectFlags);
	/* ../public/scenesystem/sceneobject.h:1906 */
	void MirrorFlags(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2282 */
	void MarkObjectNotDirty(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:2289 */
	void EnsureExtraData(CSceneObject* );
	CMeshInstance * m_pMeshInstanceData; /* 8 8 */
	ISceneObjectDesc * m_pDesc; /* 16 8 */
	CSceneObjectReference_t * m_pRefData; /* 24 8 */
	matrix3x4a_t m_transform __attribute__((__aligned__(16))); /* 32 48 */
	float m_flStartFadeDistanceSquared; /* 80 4 */
	float m_flFarCullDistanceSquared; /* 84 4 */
	uint16 m_nObjectTypeFlags; /* 88 2 */
	color24 m_tint; /* 90 3 */
	uint8 m_nMeshGroupMaskSmall; /* 93 1 */
	uint8 m_nDebugLevel:2; /* 94: 0 1 */
	uint8 m_nSizeCullBloat:2; /* 94: 2 1 */
	uint8 m_nBoundsType:1; /* 94: 4 1 */
	uint8 m_nID; /* 95 1 */
	int8 m_nBoundsGroupIndex; /* 96 1 */
	uint8 m_nObjectClass; /* 97 1 */
	float m_fAlpha; /* 100 4 */
	CPVSData * m_pPVSData; /* 104 8 */
	CSceneObjectExtraData_t * m_pExtraData; /* 112 8 */
	CSceneObjectLightingCache_t * m_pLightingCache; /* 120 8 */
	ESceneObjectFlags m_nOriginalRenderableFlags; /* 128 8 */
	ESceneObjectFlags m_nRenderableFlags; /* 136 8 */
	ISceneWorld * m_pWorld; /* 144 8 */
	CUtlStringToken m_nLayerMatchID; /* 152 4 */
	static float s_flSizeCullBloatScale[4]; /* 0 0 */
	CUtlVectorFixedGrowable<unsigned int, 3> m_tags __attribute__((__aligned__(8))); /* 160 48 */
	bool m_IsDeleting; /* 208 1 */
	/* ../public/scenesystem/sceneobject.h:893 */
	void SetMaterialOverrideList(CSceneObject* , int, const CUtlStringToken* , const HMaterialStrong* );
	CManagedHandle m_ManagedHandle; /* 212 4 */
	/* ../public/scenesystem/sceneobject.h:940 */
	virtual const CManagedHandle* GetManagedHandle(const CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:942 */
	virtual void InitManagedHandle(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:947 */
	bool IsInTagsList(CSceneObject* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../public/scenesystem/sceneobject.h:961 */
	void RemoveTag(CSceneObject* , uint);
	/* ../public/scenesystem/sceneobject.h:969 */
	int GetTagCount(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:971 */
	uint GetTagAt(CSceneObject* , int);
	/* ../public/scenesystem/sceneobject.h:973 */
	void RemoveAllTags(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:978 */
	void AddTag(CSceneObject* , uint);
	/* ../public/scenesystem/sceneobject.h:985 */
	void OnTagsChanged(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:989 */
	bool HasTag(CSceneObject* , uint);
	/* ../public/scenesystem/sceneobject.h:994 */
	void SetMaterialGroup(CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:1002 */
	void SetBodyGroup(CSceneObject* , CUtlStringToken, int);
	/* ../public/scenesystem/sceneobject.h:1060 */
	CRenderAttributes& GetAttributesForModify(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1034 */
	CRenderAttributes* GetAttributesPtrForModify(CSceneObject* );
	InstancedRayTracingEnvironmentReference_t * m_rayTraceInstance; /* 216 8 */
	/* ../public/scenesystem/sceneobject.h:1040 */
	void UpdateRayTraceObject(CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1045 */
	void DestroyRayTraceInstance(CSceneObject* );
	bool m_IsRayTraceDirty; /* 224 1 */
	/* ../scenesystem/sceneobject_methods.cpp:1634 */
	void SetMaterialOverrideByIndex(CSceneObject* , int, HMaterial);
	/* ../scenesystem/sceneobject_methods.cpp:1645 */
	void ClearIndexedMaterialOverrides(CSceneObject* );
	void CSceneObject(class CSceneObject *, const class CSceneObject  &); /* linkage=_ZN12CSceneObjectC4ERKS_ */
	void CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectC4Ev */
	virtual void ~CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectD4Ev */
	/* <35a5c73> ../scenesystem/sceneobject_methods.cpp:1151 */
	void Init(class CSceneObject *); /* linkage=_ZN12CSceneObject4InitEv */
	void Term(class CSceneObject *); /* linkage=_ZN12CSceneObject4TermEv */
	void InitObject(class CSceneObject *, class ISceneWorld *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10InitObjectEP11ISceneWorld17ESceneObjectFlags */
	void CreateDefaultPVSNode(class CSceneObject *); /* linkage=_ZN12CSceneObject20CreateDefaultPVSNodeEv */
	void RecomputePVS(class CSceneObject *, class IPVS *); /* linkage=_ZN12CSceneObject12RecomputePVSEP4IPVS */
	void SetCullDistance(class CSceneObject *, float); /* linkage=_ZN12CSceneObject15SetCullDistanceEf */
	void SetAttributes(class CSceneObject *, class CRenderAttributes *); /* linkage=_ZN12CSceneObject13SetAttributesEP17CRenderAttributes */
	void SetBoolValue(class CSceneObject *, const class CUtlStringToken  &, bool); /* linkage=_ZN12CSceneObject12SetBoolValueERK15CUtlStringTokenb */
	bool GetBoolValue(const class CSceneObject  *, const class CUtlStringToken  &, bool); /* linkage=_ZNK12CSceneObject12GetBoolValueERK15CUtlStringTokenb */
	void DeleteBoolValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject15DeleteBoolValueERK15CUtlStringToken */
	void SetFloatValue(class CSceneObject *, const class CUtlStringToken  &, float); /* linkage=_ZN12CSceneObject13SetFloatValueERK15CUtlStringTokenf */
	float GetFloatValue(const class CSceneObject  *, const class CUtlStringToken  &, float); /* linkage=_ZNK12CSceneObject13GetFloatValueERK15CUtlStringTokenf */
	void DeleteFloatValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteFloatValueERK15CUtlStringToken */
	void SetIntValue(class CSceneObject *, const class CUtlStringToken  &, int); /* linkage=_ZN12CSceneObject11SetIntValueERK15CUtlStringTokeni */
	int GetIntValue(const class CSceneObject  *, const class CUtlStringToken  &, int); /* linkage=_ZNK12CSceneObject11GetIntValueERK15CUtlStringTokeni */
	void DeleteIntValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject14DeleteIntValueERK15CUtlStringToken */
	void SetComboValue(class CSceneObject *, const class CUtlStringToken  &, uint8); /* linkage=_ZN12CSceneObject13SetComboValueERK15CUtlStringTokenh */
	uint8 GetComboValue(const class CSceneObject  *, const class CUtlStringToken  &, uint8); /* linkage=_ZNK12CSceneObject13GetComboValueERK15CUtlStringTokenh */
	void DeleteComboValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteComboValueERK15CUtlStringToken */
	void SetParentAttributes(class CSceneObject *, const class CRenderAttributes  *); /* linkage=_ZN12CSceneObject19SetParentAttributesEPK17CRenderAttributes */
	void SetVector2DValue(class CSceneObject *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZN12CSceneObject16SetVector2DValueERK15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZNK12CSceneObject16GetVector2DValueERK15CUtlStringToken8Vector2D */
	void DeleteVector2DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector2DValueERK15CUtlStringToken */
	void SetVectorValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector  &); /* linkage=_ZN12CSceneObject14SetVectorValueERK15CUtlStringTokenRK6Vector */
	class Vector GetVectorValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector); /* linkage=_ZNK12CSceneObject14GetVectorValueERK15CUtlStringToken6Vector */
	void DeleteVectorValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject17DeleteVectorValueERK15CUtlStringToken */
	void SetVector4DValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector4D  &); /* linkage=_ZN12CSceneObject16SetVector4DValueERK15CUtlStringTokenRK8Vector4D */
	class Vector4D GetVector4DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector4D); /* linkage=_ZNK12CSceneObject16GetVector4DValueERK15CUtlStringToken8Vector4D */
	void DeleteVector4DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector4DValueERK15CUtlStringToken */
	void SetTextureValue(class CSceneObject *, const class CUtlStringToken  &, HRenderTexture); /* linkage=_ZN12CSceneObject15SetTextureValueERK15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void DeleteTextureValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteTextureValueERK15CUtlStringToken */
	void SetVMatrixValue(class CSceneObject *, const class CUtlStringToken  &, const class VMatrix  &); /* linkage=_ZN12CSceneObject15SetVMatrixValueERK15CUtlStringTokenRK7VMatrix */
	void DeleteVMatrixValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteVMatrixValueERK15CUtlStringToken */
	bool HasRenderAttributes(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasRenderAttributesEv */
	class CRenderAttributes & RenderAttributes(class CSceneObject *); /* linkage=_ZN12CSceneObject16RenderAttributesEv */
	void SetLightingOrigin(class CSceneObject *, const class Vector  &, bool); /* linkage=_ZN12CSceneObject17SetLightingOriginERK6Vectorb */
	class Vector GetLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17GetLightingOriginEv */
	bool HasLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17HasLightingOriginEv */
	void SetAlphaFade(class CSceneObject *, float); /* linkage=_ZN12CSceneObject12SetAlphaFadeEf */
	float GetAlphaFade(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetAlphaFadeEv */
	class ISceneWorld * GetWorld(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetWorldEv */
	void SetTintRGBA_Gamma(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject17SetTintRGBA_GammaERK8Vector4D */
	void SetTintRGBA(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject11SetTintRGBAERK8Vector4D */
	class Vector4D GetTintRGBA(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject11GetTintRGBAEv */
	class CUtlStringToken GetLightGroup(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetLightGroupEv */
	void SetLightGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject13SetLightGroupE15CUtlStringToken */
	void SetLightProbeVolumePrecomputedHandshake(class CSceneObject *, int); /* linkage=_ZN12CSceneObject39SetLightProbeVolumePrecomputedHandshakeEi */
	void SetBakedLightingInfo(class CSceneObject *, const class CSceneSystemBakedLightingInfo  *); /* linkage=_ZN12CSceneObject20SetBakedLightingInfoEPK29CSceneSystemBakedLightingInfo */
	const class CSceneSystemBakedLightingInfo  * GetBakedLightingInfo(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20GetBakedLightingInfoEv */
	bool IsVisible(const class CSceneObject  *, const uint32  *); /* linkage=_ZNK12CSceneObject9IsVisibleEPKj */
	void ClearMaterialOverrideList(class CSceneObject *); /* linkage=_ZN12CSceneObject25ClearMaterialOverrideListEv */
	void SetMaterialOverride(class CSceneObject *, HMaterial, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringTokeni */
	void SetMaterialOverrideForMeshInstances(class CSceneObject *, HMaterial); /* linkage=_ZN12CSceneObject35SetMaterialOverrideForMeshInstancesE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void SetDebugLevel(class CSceneObject *, int); /* linkage=_ZN12CSceneObject13SetDebugLevelEi */
	void UpdateFlagsBasedOnMaterial(class CSceneObject *); /* linkage=_ZN12CSceneObject26UpdateFlagsBasedOnMaterialEv */
	void MoveToWorld(class CSceneObject *, class ISceneWorld *); /* linkage=_ZN12CSceneObject11MoveToWorldEP11ISceneWorld */
	class ISceneObjectDesc * GetDesc(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject7GetDescEv */
	class CMeshInstance * GetMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetMeshInstanceDataEv */
	bool HasMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasMeshInstanceDataEv */
	void SetMeshInstanceData(class CSceneObject *, class CMeshInstance *, enum MeshInstanceOwnership_t); /* linkage=_ZN12CSceneObject19SetMeshInstanceDataEP13CMeshInstanceNS_23MeshInstanceOwnership_tE */
	void ClearMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject21ClearMeshInstanceDataEv */
	void DestroyMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyMeshInstanceDataEv */
	void SetOwnsMeshInstanceData(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject23SetOwnsMeshInstanceDataEb */
	bool GetOwnsMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetOwnsMeshInstanceDataEv */
	class CSceneObjectExtraData_t * GetExtraData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetExtraDataEv */
	class CSceneObjectLightingCache_t * GetLightingCache(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetLightingCacheEv */
	bool IsDeleted(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9IsDeletedEv */
	uint32 GetID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject5GetIDEv */
	void SetID(class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject5SetIDEj */
	void SetPartiallyAlphaBlended(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject24SetPartiallyAlphaBlendedEb */
	bool IsPartiallyAlphaBlended(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23IsPartiallyAlphaBlendedEv */
	void SetBatchable(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject12SetBatchableEb */
	bool IsNotBatchable(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14IsNotBatchableEv */
	void SetUniqueBatchGroup(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetUniqueBatchGroupEb */
	void SetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13SetIsFromPoolEv */
	bool GetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetIsFromPoolEv */
	void SetOriginalFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject16SetOriginalFlagsE17ESceneObjectFlags */
	enum ESceneObjectFlags GetOriginalFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetOriginalFlagsEv */
	bool HasOriginalFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject16HasOriginalFlagsE17ESceneObjectFlags */
	void ChangeFlags(class CSceneObject *, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject11ChangeFlagsE17ESceneObjectFlagsS0_ */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlags */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags, bool); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlagsb */
	enum ESceneObjectFlags GetFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetFlagsEv */
	bool HasFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject8HasFlagsE17ESceneObjectFlags */
	void ClearFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10ClearFlagsE17ESceneObjectFlags */
	void SetLayerMatchID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetLayerMatchIDE15CUtlStringToken */
	class CUtlStringToken GetLayerMatchID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject15GetLayerMatchIDEv */
	void SetForceLayerID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetForceLayerIDE15CUtlStringToken */
	bool IsLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8IsLoadedEv */
	bool IsRenderingEnabled(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18IsRenderingEnabledEv */
	void SetLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject9SetLoadedEv */
	void ClearLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject11ClearLoadedEv */
	void DisableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject16DisableRenderingEv */
	void EnableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnableRenderingEv */
	void SetRenderingEnabled(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetRenderingEnabledEb */
	void SetBounds(class CSceneObject *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6VectorS2_ */
	void SetBounds(class CSceneObject *, const class AABB_t  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6AABB_t */
	void SetBoundsInfinite(class CSceneObject *); /* linkage=_ZN12CSceneObject17SetBoundsInfiniteEv */
	void GetBounds(const class CSceneObject  *, class Vector &, class Vector &); /* linkage=_ZNK12CSceneObject9GetBoundsER6VectorS1_ */
	void GetBounds(const class CSceneObject  *, class AABB_t &); /* linkage=_ZNK12CSceneObject9GetBoundsER6AABB_t */
	class AABB_t GetBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetBoundsEv */
	class Vector MinBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MinBoundsEv */
	class Vector MaxBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MaxBoundsEv */
	void SetBoundsType(class CSceneObject *, enum ESceneObjectBoundsType); /* linkage=_ZN12CSceneObject13SetBoundsTypeE22ESceneObjectBoundsType */
	float SafeSquare(class CSceneObject *, float); /* linkage=_ZN12CSceneObject10SafeSquareEf */
	void SetFadeAndCullDistance(class CSceneObject *, float, float); /* linkage=_ZN12CSceneObject22SetFadeAndCullDistanceEff */
	float GetFadeStartDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject27GetFadeStartDistanceSquaredEv */
	float GetFadeCullDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject26GetFadeCullDistanceSquaredEv */
	float CalcFadeStartDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21CalcFadeStartDistanceEv */
	float CalcFadeCullDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20CalcFadeCullDistanceEv */
	void DisableFadeAndCull(class CSceneObject *); /* linkage=_ZN12CSceneObject18DisableFadeAndCullEv */
	enum ESceneObjectBoundsType GetBoundsType(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetBoundsTypeEv */
	/* <3c464b1> ../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject33UpdateBoundingBoxToMatchTransformEv */
	float GetBoundingSphereRadius(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetBoundingSphereRadiusEv */
	void SetTransform(class CSceneObject *, const class matrix3x4_t  &); /* linkage=_ZN12CSceneObject12SetTransformERK11matrix3x4_t */
	void SetTransform(class CSceneObject *, const class CTransform  &); /* linkage=_ZN12CSceneObject12SetTransformERK10CTransform */
	void SetTransform(class CSceneObject *, const class CTransformUnaligned  &); /* linkage=_ZN12CSceneObject12SetTransformERK19CTransformUnaligned */
	const class matrix3x4_t  & GetTransform(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetTransformEv */
	class matrix3x4_t & GetTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject12GetTransformEv */
	class CTransform GetCTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetCTransformEv */
	class CTransformUnaligned GetCTransformUnaligned(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetCTransformUnalignedEv */
	void SetSortPosition(class CSceneObject *, const class Vector  &); /* linkage=_ZN12CSceneObject15SetSortPositionERK6Vector */
	void SetObjectClass(class CSceneObject *, uint8); /* linkage=_ZN12CSceneObject14SetObjectClassEh */
	uint8 GetObjectClass(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetObjectClassEv */
	void SetObjectClass(class CSceneObject *, const char  *); /* linkage=_ZN12CSceneObject14SetObjectClassEPKc */
	void ScheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject19ScheduleDirtyUpdateEv */
	void UnscheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject21UnscheduleDirtyUpdateEv */
	void SetShouldBeDeletedBeforeWorld(class CSceneObject *); /* linkage=_ZN12CSceneObject29SetShouldBeDeletedBeforeWorldEv */
	void EnableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject16EnableMeshGroupsEy */
	void DisableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject17DisableMeshGroupsEy */
	void ResetMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject15ResetMeshGroupsEy */
	MeshGroupMask_t GetCurrentMeshGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetCurrentMeshGroupMaskEv */
	void SetLOD(class CSceneObject *, int); /* linkage=_ZN12CSceneObject6SetLODEi */
	void DisableLOD(class CSceneObject *); /* linkage=_ZN12CSceneObject10DisableLODEv */
	LODGroupMask_t GetCurrentLODGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject22GetCurrentLODGroupMaskEv */
	int GetCurrentLODLevel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetCurrentLODLevelEv */
	void SetDepthSortBias(class CSceneObject *, float); /* linkage=_ZN12CSceneObject16SetDepthSortBiasEf */
	float GetDepthSortBias(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetDepthSortBiasEv */
	class CSceneObject * GetParent(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetParentEv */
	void AddChildObject(class CSceneObject *, class CUtlStringToken, class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject14AddChildObjectE15CUtlStringTokenPS_j */
	void RemoveChild(class CSceneObject *, class CSceneObject *); /* linkage=_ZN12CSceneObject11RemoveChildEPS_ */
	class CSceneObject * FindChild(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject9FindChildE15CUtlStringToken */
	/* <2f2fc1d> ../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject11UpdateDirtyEv */
	/* <10234ed> ../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject25ProceduralResourcesLoadedEv */
	bool CheckAgainstMeshGroupAndLODGroupMask(const class CSceneObject  *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZNK12CSceneObject36CheckAgainstMeshGroupAndLODGroupMaskEyh */
	bool HasProperty(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject11HasPropertyE15CUtlStringToken */
	float GetSizeCullBloatScale(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21GetSizeCullBloatScaleEv */
	void SetSizeCullBloatScale(class CSceneObject *, enum SceneObjectSizeCullBloat_t); /* linkage=_ZN12CSceneObject21SetSizeCullBloatScaleE26SceneObjectSizeCullBloat_t */
	void SetBoundsGroupIndex(class CSceneObject *, int); /* linkage=_ZN12CSceneObject19SetBoundsGroupIndexEi */
	int GetBoundsGroupIndex(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetBoundsGroupIndexEv */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayer */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *, const class IMaterial2  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayerPK10IMaterial2 */
	const class CModel  * GetModel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetModelEv */
	HModel GetModelHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetModelHandleEv */
	enum ESceneObjectTypeFlags GetObjectTypeFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetObjectTypeFlagsEv */
	void AddObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject18AddObjectTypeFlagsE21ESceneObjectTypeFlags */
	void RemoveObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject21RemoveObjectTypeFlagsE21ESceneObjectTypeFlags */
	void EnableLightingCache(class CSceneObject *); /* linkage=_ZN12CSceneObject19EnableLightingCacheEv */
	void GetMaterialsForObject(class CSceneObject *, class CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2> &, class CUtlVectorFixedGrowable<int, 2> &); /* linkage=_ZN12CSceneObject21GetMaterialsForObjectER23CUtlVectorFixedGrowableI11CWeakHandleI29InfoForResourceTypeIMaterial2ELm2EERS0_IiLm2EE */
	bool SetRenderableFlagsAndMirrorIfChanged(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject36SetRenderableFlagsAndMirrorIfChangedE17ESceneObjectFlags */
	void MirrorFlags(class CSceneObject *); /* linkage=_ZN12CSceneObject11MirrorFlagsEv */
	void MarkObjectNotDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject18MarkObjectNotDirtyEv */
	void EnsureExtraData(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnsureExtraDataEv */
	void SetMaterialOverrideList(class CSceneObject *, int, const class CUtlStringToken  *, const HMaterialStrong  *); /* linkage=_ZN12CSceneObject23SetMaterialOverrideListEiPK15CUtlStringTokenPK13CStrongHandleI29InfoForResourceTypeIMaterial2E */
	/* <6355039> ../public/scenesystem/sceneobject.h:940 */
	virtual const class CManagedHandle  * GetManagedHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetManagedHandleEv */
	virtual void InitManagedHandle(class CSceneObject *); /* linkage=_ZN12CSceneObject17InitManagedHandleEv */
	bool IsInTagsList(class CSceneObject *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN12CSceneObject12IsInTagsListEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void RemoveTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject9RemoveTagEj */
	int GetTagCount(class CSceneObject *); /* linkage=_ZN12CSceneObject11GetTagCountEv */
	uint GetTagAt(class CSceneObject *, int); /* linkage=_ZN12CSceneObject8GetTagAtEi */
	void RemoveAllTags(class CSceneObject *); /* linkage=_ZN12CSceneObject13RemoveAllTagsEv */
	void AddTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6AddTagEj */
	void OnTagsChanged(class CSceneObject *); /* linkage=_ZN12CSceneObject13OnTagsChangedEv */
	bool HasTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6HasTagEj */
	void SetMaterialGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject16SetMaterialGroupE15CUtlStringToken */
	void SetBodyGroup(class CSceneObject *, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject12SetBodyGroupE15CUtlStringTokeni */
	class CRenderAttributes & GetAttributesForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetAttributesForModifyEv */
	class CRenderAttributes * GetAttributesPtrForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject25GetAttributesPtrForModifyEv */
	void UpdateRayTraceObject(class CSceneObject *); /* linkage=_ZN12CSceneObject20UpdateRayTraceObjectEv */
	void DestroyRayTraceInstance(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyRayTraceInstanceEv */
	void SetMaterialOverrideByIndex(class CSceneObject *, int, HMaterial); /* linkage=_ZN12CSceneObject26SetMaterialOverrideByIndexEi11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void ClearIndexedMaterialOverrides(class CSceneObject *); /* linkage=_ZN12CSceneObject29ClearIndexedMaterialOverridesEv */
} __attribute__((__aligned__(16)));

// <043C8E47> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:335
// member functions: 370
// member variables: 29
// static member variable: 1
// vtable entries: 4
// class size: 240
class CSceneObject : public IGenericInterface {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:539 */
	enum MeshInstanceOwnership_t {
		MESH_INSTANCE_NOT_OWNED = 0,
		MESH_INSTANCE_OWNED = 1,
	};
public:
	/* class IGenericInterface <ancestor>; */ /* 0 8 */
	void CSceneObject(CSceneObject* , const CSceneObject& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1428 */
	void CSceneObject(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1433 */
	virtual void ~CSceneObject(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:354 */
	void Init(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:355 */
	void Term(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1439 */
	void InitObject(CSceneObject* , ISceneWorld* , ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1446 */
	void CreateDefaultPVSNode(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1453 */
	void RecomputePVS(CSceneObject* , IPVS* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1469 */
	void SetCullDistance(CSceneObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1488 */
	void SetAttributes(CSceneObject* , CRenderAttributes* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1496 */
	void SetBoolValue(CSceneObject* , const CUtlStringToken& , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1503 */
	bool GetBoolValue(const CSceneObject* , const CUtlStringToken& , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1515 */
	void DeleteBoolValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1522 */
	void SetFloatValue(CSceneObject* , const CUtlStringToken& , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1529 */
	float GetFloatValue(const CSceneObject* , const CUtlStringToken& , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1541 */
	void DeleteFloatValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1548 */
	void SetIntValue(CSceneObject* , const CUtlStringToken& , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1555 */
	int GetIntValue(const CSceneObject* , const CUtlStringToken& , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1567 */
	void DeleteIntValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1573 */
	void SetComboValue(CSceneObject* , const CUtlStringToken& , uint8);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1580 */
	uint8 GetComboValue(const CSceneObject* , const CUtlStringToken& , uint8);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1592 */
	void DeleteComboValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1599 */
	void SetParentAttributes(CSceneObject* , const CRenderAttributes* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1607 */
	void SetVector2DValue(CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1614 */
	Vector2D GetVector2DValue(const CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1626 */
	void DeleteVector2DValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1632 */
	void SetVectorValue(CSceneObject* , const CUtlStringToken& , const Vector& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1639 */
	Vector GetVectorValue(const CSceneObject* , const CUtlStringToken& , Vector);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1651 */
	void DeleteVectorValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1657 */
	void SetVector4DValue(CSceneObject* , const CUtlStringToken& , const Vector4D& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1664 */
	Vector4D GetVector4DValue(const CSceneObject* , const CUtlStringToken& , Vector4D);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1676 */
	void DeleteVector4DValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1684 */
	void SetTextureValue(CSceneObject* , const CUtlStringToken& , HRenderTexture);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1691 */
	void DeleteTextureValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1699 */
	void SetVMatrixValue(CSceneObject* , const CUtlStringToken& , const VMatrix& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1706 */
	void DeleteVMatrixValue(CSceneObject* , const CUtlStringToken& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2318 */
	bool HasRenderAttributes(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2323 */
	CRenderAttributes& RenderAttributes(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2331 */
	void SetLightingOrigin(CSceneObject* , const Vector& , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2341 */
	Vector GetLightingOrigin(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2365 */
	bool HasLightingOrigin(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2373 */
	void SetAlphaFade(CSceneObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2378 */
	float GetAlphaFade(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:412 */
	ISceneWorld* GetWorld(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:415 */
	void SetTintRGBA_Gamma(CSceneObject* , const Vector4D& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:435 */
	void SetTintRGBA(CSceneObject* , const Vector4D& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:443 */
	Vector4D GetTintRGBA(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:448 */
	CUtlStringToken GetLightGroup(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:466 */
	void SetLightGroup(CSceneObject* , CUtlStringToken);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:483 */
	void SetLightProbeVolumePrecomputedHandshake(CSceneObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:489 */
	void SetBakedLightingInfo(CSceneObject* , const CSceneSystemBakedLightingInfo* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:495 */
	const CSceneSystemBakedLightingInfo* GetBakedLightingInfo(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:500 */
	bool IsVisible(const CSceneObject* , const uint32* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1716 */
	void ClearMaterialOverrideList(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:510 */
	void SetMaterialOverride(CSceneObject* , HMaterial, CUtlStringToken, int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2450 */
	void SetMaterialOverrideForMeshInstances(CSceneObject* , HMaterial);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:518 */
	void SetDebugLevel(CSceneObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1732 */
	void UpdateFlagsBasedOnMaterial(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1740 */
	void MoveToWorld(CSceneObject* , ISceneWorld* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1745 */
	ISceneObjectDesc* GetDesc(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1750 */
	CMeshInstance* GetMeshInstanceData(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1762 */
	bool HasMeshInstanceData(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1767 */
	void SetMeshInstanceData(CSceneObject* , CMeshInstance* , MeshInstanceOwnership_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1784 */
	void ClearMeshInstanceData(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1790 */
	void DestroyMeshInstanceData(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1803 */
	void SetOwnsMeshInstanceData(CSceneObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1815 */
	bool GetOwnsMeshInstanceData(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1820 */
	CSceneObjectExtraData_t* GetExtraData(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1825 */
	CSceneObjectLightingCache_t* GetLightingCache(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1830 */
	bool IsDeleted(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1835 */
	uint32 GetID(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1840 */
	void SetID(CSceneObject* , uint32);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1847 */
	void SetPartiallyAlphaBlended(CSceneObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1859 */
	bool IsPartiallyAlphaBlended(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1864 */
	void SetBatchable(CSceneObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1876 */
	bool IsNotBatchable(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1881 */
	void SetUniqueBatchGroup(CSceneObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:568 */
	void SetIsFromPool(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:569 */
	bool GetIsFromPool(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1911 */
	void SetOriginalFlags(CSceneObject* , ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1916 */
	ESceneObjectFlags GetOriginalFlags(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:576 */
	bool HasOriginalFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1926 */
	void ChangeFlags(CSceneObject* , ESceneObjectFlags, ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1938 */
	void SetFlags(CSceneObject* , ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:586 */
	void SetFlags(CSceneObject* , ESceneObjectFlags, bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1921 */
	ESceneObjectFlags GetFlags(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1944 */
	bool HasFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1949 */
	void ClearFlags(CSceneObject* , ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:605 */
	void SetLayerMatchID(CSceneObject* , CUtlStringToken);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:607 */
	CUtlStringToken GetLayerMatchID(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:612 */
	void SetForceLayerID(CSceneObject* , CUtlStringToken);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1954 */
	bool IsLoaded(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1959 */
	bool IsRenderingEnabled(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1964 */
	void SetLoaded(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1969 */
	void ClearLoaded(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1974 */
	void DisableRendering(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1979 */
	void EnableRendering(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1984 */
	void SetRenderingEnabled(CSceneObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1991 */
	void SetBounds(CSceneObject* , const Vector& , const Vector& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:625 */
	void SetBounds(CSceneObject* , const AABB_t& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1996 */
	void SetBoundsInfinite(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2001 */
	void GetBounds(const CSceneObject* , Vector& , Vector& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2006 */
	void GetBounds(const CSceneObject* , AABB_t& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:635 */
	AABB_t GetBounds(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:642 */
	Vector MinBounds(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:647 */
	Vector MaxBounds(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2012 */
	void SetBoundsType(CSceneObject* , ESceneObjectBoundsType);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:654 */
	float SafeSquare(CSceneObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:669 */
	void SetFadeAndCullDistance(CSceneObject* , float, float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:687 */
	float GetFadeStartDistanceSquared(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:692 */
	float GetFadeCullDistanceSquared(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:697 */
	float CalcFadeStartDistance(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:704 */
	float CalcFadeCullDistance(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:711 */
	void DisableFadeAndCull(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2017 */
	ESceneObjectBoundsType GetBoundsType(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2022 */
	float GetBoundingSphereRadius(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2078 */
	void SetTransform(CSceneObject* , const matrix3x4_t& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2096 */
	void SetTransform(CSceneObject* , const CTransform& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2101 */
	void SetTransform(CSceneObject* , const CTransformUnaligned& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2108 */
	const matrix3x4_t& GetTransform(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2113 */
	matrix3x4_t& GetTransform(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2118 */
	CTransform GetCTransform(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2123 */
	CTransformUnaligned GetCTransformUnaligned(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2133 */
	void SetSortPosition(CSceneObject* , const Vector& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1479 */
	void SetObjectClass(CSceneObject* , uint8);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1474 */
	uint8 GetObjectClass(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:739 */
	void SetObjectClass(CSceneObject* , const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2142 */
	void ScheduleDirtyUpdate(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2150 */
	void UnscheduleDirtyUpdate(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2158 */
	void SetShouldBeDeletedBeforeWorld(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2163 */
	void EnableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2170 */
	void DisableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2177 */
	void ResetMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2204 */
	MeshGroupMask_t GetCurrentMeshGroupMask(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2221 */
	void SetLOD(CSceneObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2234 */
	void DisableLOD(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2242 */
	LODGroupMask_t GetCurrentLODGroupMask(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2252 */
	int GetCurrentLODLevel(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2263 */
	void SetDepthSortBias(CSceneObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2273 */
	float GetDepthSortBias(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:772 */
	CSceneObject* GetParent(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:774 */
	void AddChildObject(CSceneObject* , CUtlStringToken, CSceneObject* , uint32);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:777 */
	void RemoveChild(CSceneObject* , CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:779 */
	CSceneObject* FindChild(const CSceneObject* , CUtlStringToken);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2310 */
	bool CheckAgainstMeshGroupAndLODGroupMask(const CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1420 */
	bool HasProperty(const CSceneObject* , CUtlStringToken);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:800 */
	float GetSizeCullBloatScale(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:801 */
	void SetSizeCullBloatScale(CSceneObject* , SceneObjectSizeCullBloat_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:803 */
	void SetBoundsGroupIndex(CSceneObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:804 */
	int GetBoundsGroupIndex(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2383 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2414 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* , const IMaterial2* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1067 */
	const CModel* GetModel(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1074 */
	HModel GetModelHandle(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:813 */
	ESceneObjectTypeFlags GetObjectTypeFlags(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1081 */
	void AddObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1086 */
	void RemoveObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2297 */
	void EnableLightingCache(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2305 */
	void GetMaterialsForObject(CSceneObject* , CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& , CUtlVectorFixedGrowable<int, 2>& );
private:
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1893 */
	bool SetRenderableFlagsAndMirrorIfChanged(CSceneObject* , ESceneObjectFlags);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1906 */
	void MirrorFlags(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2282 */
	void MarkObjectNotDirty(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2289 */
	void EnsureExtraData(CSceneObject* );
	CMeshInstance * m_pMeshInstanceData; /* 8 8 */
	ISceneObjectDesc * m_pDesc; /* 16 8 */
	CSceneObjectReference_t * m_pRefData; /* 24 8 */
	matrix3x4a_t m_transform __attribute__((__aligned__(16))); /* 32 48 */
	float m_flStartFadeDistanceSquared; /* 80 4 */
	float m_flFarCullDistanceSquared; /* 84 4 */
	uint16 m_nObjectTypeFlags; /* 88 2 */
	color24 m_tint; /* 90 3 */
	uint8 m_nMeshGroupMaskSmall; /* 93 1 */
	uint8 m_nDebugLevel:2; /* 94: 0 1 */
	uint8 m_nSizeCullBloat:2; /* 94: 2 1 */
	uint8 m_nBoundsType:1; /* 94: 4 1 */
	uint8 m_nID; /* 95 1 */
	int8 m_nBoundsGroupIndex; /* 96 1 */
	uint8 m_nObjectClass; /* 97 1 */
	float m_fAlpha; /* 100 4 */
	CPVSData * m_pPVSData; /* 104 8 */
	CSceneObjectExtraData_t * m_pExtraData; /* 112 8 */
	CSceneObjectLightingCache_t * m_pLightingCache; /* 120 8 */
	ESceneObjectFlags m_nOriginalRenderableFlags; /* 128 8 */
	ESceneObjectFlags m_nRenderableFlags; /* 136 8 */
	ISceneWorld * m_pWorld; /* 144 8 */
	CUtlStringToken m_nLayerMatchID; /* 152 4 */
	static float s_flSizeCullBloatScale[4]; /* 0 0 */
	CUtlVectorFixedGrowable<unsigned int, 3> m_tags __attribute__((__aligned__(8))); /* 160 48 */
	bool m_IsDeleting; /* 208 1 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:893 */
	void SetMaterialOverrideList(CSceneObject* , int, const CUtlStringToken* , const HMaterialStrong* );
	CManagedHandle m_ManagedHandle; /* 212 4 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:940 */
	virtual const CManagedHandle* GetManagedHandle(const CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:942 */
	virtual void InitManagedHandle(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:947 */
	bool IsInTagsList(CSceneObject* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:961 */
	void RemoveTag(CSceneObject* , uint);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:969 */
	int GetTagCount(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:971 */
	uint GetTagAt(CSceneObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:973 */
	void RemoveAllTags(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:978 */
	void AddTag(CSceneObject* , uint);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:985 */
	void OnTagsChanged(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:989 */
	bool HasTag(CSceneObject* , uint);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:994 */
	void SetMaterialGroup(CSceneObject* , CUtlStringToken);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1002 */
	void SetBodyGroup(CSceneObject* , CUtlStringToken, int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1060 */
	CRenderAttributes& GetAttributesForModify(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1034 */
	CRenderAttributes* GetAttributesPtrForModify(CSceneObject* );
	InstancedRayTracingEnvironmentReference_t * m_rayTraceInstance; /* 216 8 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1040 */
	void UpdateRayTraceObject(CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1045 */
	void DestroyRayTraceInstance(CSceneObject* );
	bool m_IsRayTraceDirty; /* 224 1 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1056 */
	void SetMaterialOverrideByIndex(CSceneObject* , int, HMaterial);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1057 */
	void ClearIndexedMaterialOverrides(CSceneObject* );
	void CSceneObject(class CSceneObject *, const class CSceneObject  &); /* linkage=_ZN12CSceneObjectC4ERKS_ */
	void CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectC4Ev */
	virtual void ~CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectD4Ev */
	/* <35a5c73> ../scenesystem/sceneobject_methods.cpp:1151 */
	void Init(class CSceneObject *); /* linkage=_ZN12CSceneObject4InitEv */
	void Term(class CSceneObject *); /* linkage=_ZN12CSceneObject4TermEv */
	void InitObject(class CSceneObject *, class ISceneWorld *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10InitObjectEP11ISceneWorld17ESceneObjectFlags */
	void CreateDefaultPVSNode(class CSceneObject *); /* linkage=_ZN12CSceneObject20CreateDefaultPVSNodeEv */
	void RecomputePVS(class CSceneObject *, class IPVS *); /* linkage=_ZN12CSceneObject12RecomputePVSEP4IPVS */
	void SetCullDistance(class CSceneObject *, float); /* linkage=_ZN12CSceneObject15SetCullDistanceEf */
	void SetAttributes(class CSceneObject *, class CRenderAttributes *); /* linkage=_ZN12CSceneObject13SetAttributesEP17CRenderAttributes */
	void SetBoolValue(class CSceneObject *, const class CUtlStringToken  &, bool); /* linkage=_ZN12CSceneObject12SetBoolValueERK15CUtlStringTokenb */
	bool GetBoolValue(const class CSceneObject  *, const class CUtlStringToken  &, bool); /* linkage=_ZNK12CSceneObject12GetBoolValueERK15CUtlStringTokenb */
	void DeleteBoolValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject15DeleteBoolValueERK15CUtlStringToken */
	void SetFloatValue(class CSceneObject *, const class CUtlStringToken  &, float); /* linkage=_ZN12CSceneObject13SetFloatValueERK15CUtlStringTokenf */
	float GetFloatValue(const class CSceneObject  *, const class CUtlStringToken  &, float); /* linkage=_ZNK12CSceneObject13GetFloatValueERK15CUtlStringTokenf */
	void DeleteFloatValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteFloatValueERK15CUtlStringToken */
	void SetIntValue(class CSceneObject *, const class CUtlStringToken  &, int); /* linkage=_ZN12CSceneObject11SetIntValueERK15CUtlStringTokeni */
	int GetIntValue(const class CSceneObject  *, const class CUtlStringToken  &, int); /* linkage=_ZNK12CSceneObject11GetIntValueERK15CUtlStringTokeni */
	void DeleteIntValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject14DeleteIntValueERK15CUtlStringToken */
	void SetComboValue(class CSceneObject *, const class CUtlStringToken  &, uint8); /* linkage=_ZN12CSceneObject13SetComboValueERK15CUtlStringTokenh */
	uint8 GetComboValue(const class CSceneObject  *, const class CUtlStringToken  &, uint8); /* linkage=_ZNK12CSceneObject13GetComboValueERK15CUtlStringTokenh */
	void DeleteComboValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteComboValueERK15CUtlStringToken */
	void SetParentAttributes(class CSceneObject *, const class CRenderAttributes  *); /* linkage=_ZN12CSceneObject19SetParentAttributesEPK17CRenderAttributes */
	void SetVector2DValue(class CSceneObject *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZN12CSceneObject16SetVector2DValueERK15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZNK12CSceneObject16GetVector2DValueERK15CUtlStringToken8Vector2D */
	void DeleteVector2DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector2DValueERK15CUtlStringToken */
	void SetVectorValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector  &); /* linkage=_ZN12CSceneObject14SetVectorValueERK15CUtlStringTokenRK6Vector */
	class Vector GetVectorValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector); /* linkage=_ZNK12CSceneObject14GetVectorValueERK15CUtlStringToken6Vector */
	void DeleteVectorValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject17DeleteVectorValueERK15CUtlStringToken */
	void SetVector4DValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector4D  &); /* linkage=_ZN12CSceneObject16SetVector4DValueERK15CUtlStringTokenRK8Vector4D */
	class Vector4D GetVector4DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector4D); /* linkage=_ZNK12CSceneObject16GetVector4DValueERK15CUtlStringToken8Vector4D */
	void DeleteVector4DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector4DValueERK15CUtlStringToken */
	void SetTextureValue(class CSceneObject *, const class CUtlStringToken  &, HRenderTexture); /* linkage=_ZN12CSceneObject15SetTextureValueERK15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void DeleteTextureValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteTextureValueERK15CUtlStringToken */
	void SetVMatrixValue(class CSceneObject *, const class CUtlStringToken  &, const class VMatrix  &); /* linkage=_ZN12CSceneObject15SetVMatrixValueERK15CUtlStringTokenRK7VMatrix */
	void DeleteVMatrixValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteVMatrixValueERK15CUtlStringToken */
	bool HasRenderAttributes(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasRenderAttributesEv */
	class CRenderAttributes & RenderAttributes(class CSceneObject *); /* linkage=_ZN12CSceneObject16RenderAttributesEv */
	void SetLightingOrigin(class CSceneObject *, const class Vector  &, bool); /* linkage=_ZN12CSceneObject17SetLightingOriginERK6Vectorb */
	class Vector GetLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17GetLightingOriginEv */
	bool HasLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17HasLightingOriginEv */
	void SetAlphaFade(class CSceneObject *, float); /* linkage=_ZN12CSceneObject12SetAlphaFadeEf */
	float GetAlphaFade(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetAlphaFadeEv */
	class ISceneWorld * GetWorld(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetWorldEv */
	void SetTintRGBA_Gamma(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject17SetTintRGBA_GammaERK8Vector4D */
	void SetTintRGBA(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject11SetTintRGBAERK8Vector4D */
	class Vector4D GetTintRGBA(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject11GetTintRGBAEv */
	class CUtlStringToken GetLightGroup(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetLightGroupEv */
	void SetLightGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject13SetLightGroupE15CUtlStringToken */
	void SetLightProbeVolumePrecomputedHandshake(class CSceneObject *, int); /* linkage=_ZN12CSceneObject39SetLightProbeVolumePrecomputedHandshakeEi */
	void SetBakedLightingInfo(class CSceneObject *, const class CSceneSystemBakedLightingInfo  *); /* linkage=_ZN12CSceneObject20SetBakedLightingInfoEPK29CSceneSystemBakedLightingInfo */
	const class CSceneSystemBakedLightingInfo  * GetBakedLightingInfo(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20GetBakedLightingInfoEv */
	bool IsVisible(const class CSceneObject  *, const uint32  *); /* linkage=_ZNK12CSceneObject9IsVisibleEPKj */
	void ClearMaterialOverrideList(class CSceneObject *); /* linkage=_ZN12CSceneObject25ClearMaterialOverrideListEv */
	void SetMaterialOverride(class CSceneObject *, HMaterial, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringTokeni */
	void SetMaterialOverrideForMeshInstances(class CSceneObject *, HMaterial); /* linkage=_ZN12CSceneObject35SetMaterialOverrideForMeshInstancesE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void SetDebugLevel(class CSceneObject *, int); /* linkage=_ZN12CSceneObject13SetDebugLevelEi */
	void UpdateFlagsBasedOnMaterial(class CSceneObject *); /* linkage=_ZN12CSceneObject26UpdateFlagsBasedOnMaterialEv */
	void MoveToWorld(class CSceneObject *, class ISceneWorld *); /* linkage=_ZN12CSceneObject11MoveToWorldEP11ISceneWorld */
	class ISceneObjectDesc * GetDesc(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject7GetDescEv */
	class CMeshInstance * GetMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetMeshInstanceDataEv */
	bool HasMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasMeshInstanceDataEv */
	void SetMeshInstanceData(class CSceneObject *, class CMeshInstance *, enum MeshInstanceOwnership_t); /* linkage=_ZN12CSceneObject19SetMeshInstanceDataEP13CMeshInstanceNS_23MeshInstanceOwnership_tE */
	void ClearMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject21ClearMeshInstanceDataEv */
	void DestroyMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyMeshInstanceDataEv */
	void SetOwnsMeshInstanceData(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject23SetOwnsMeshInstanceDataEb */
	bool GetOwnsMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetOwnsMeshInstanceDataEv */
	class CSceneObjectExtraData_t * GetExtraData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetExtraDataEv */
	class CSceneObjectLightingCache_t * GetLightingCache(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetLightingCacheEv */
	bool IsDeleted(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9IsDeletedEv */
	uint32 GetID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject5GetIDEv */
	void SetID(class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject5SetIDEj */
	void SetPartiallyAlphaBlended(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject24SetPartiallyAlphaBlendedEb */
	bool IsPartiallyAlphaBlended(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23IsPartiallyAlphaBlendedEv */
	void SetBatchable(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject12SetBatchableEb */
	bool IsNotBatchable(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14IsNotBatchableEv */
	void SetUniqueBatchGroup(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetUniqueBatchGroupEb */
	void SetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13SetIsFromPoolEv */
	bool GetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetIsFromPoolEv */
	void SetOriginalFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject16SetOriginalFlagsE17ESceneObjectFlags */
	enum ESceneObjectFlags GetOriginalFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetOriginalFlagsEv */
	bool HasOriginalFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject16HasOriginalFlagsE17ESceneObjectFlags */
	void ChangeFlags(class CSceneObject *, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject11ChangeFlagsE17ESceneObjectFlagsS0_ */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlags */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags, bool); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlagsb */
	enum ESceneObjectFlags GetFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetFlagsEv */
	bool HasFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject8HasFlagsE17ESceneObjectFlags */
	void ClearFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10ClearFlagsE17ESceneObjectFlags */
	void SetLayerMatchID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetLayerMatchIDE15CUtlStringToken */
	class CUtlStringToken GetLayerMatchID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject15GetLayerMatchIDEv */
	void SetForceLayerID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetForceLayerIDE15CUtlStringToken */
	bool IsLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8IsLoadedEv */
	bool IsRenderingEnabled(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18IsRenderingEnabledEv */
	void SetLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject9SetLoadedEv */
	void ClearLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject11ClearLoadedEv */
	void DisableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject16DisableRenderingEv */
	void EnableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnableRenderingEv */
	void SetRenderingEnabled(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetRenderingEnabledEb */
	void SetBounds(class CSceneObject *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6VectorS2_ */
	void SetBounds(class CSceneObject *, const class AABB_t  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6AABB_t */
	void SetBoundsInfinite(class CSceneObject *); /* linkage=_ZN12CSceneObject17SetBoundsInfiniteEv */
	void GetBounds(const class CSceneObject  *, class Vector &, class Vector &); /* linkage=_ZNK12CSceneObject9GetBoundsER6VectorS1_ */
	void GetBounds(const class CSceneObject  *, class AABB_t &); /* linkage=_ZNK12CSceneObject9GetBoundsER6AABB_t */
	class AABB_t GetBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetBoundsEv */
	class Vector MinBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MinBoundsEv */
	class Vector MaxBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MaxBoundsEv */
	void SetBoundsType(class CSceneObject *, enum ESceneObjectBoundsType); /* linkage=_ZN12CSceneObject13SetBoundsTypeE22ESceneObjectBoundsType */
	float SafeSquare(class CSceneObject *, float); /* linkage=_ZN12CSceneObject10SafeSquareEf */
	void SetFadeAndCullDistance(class CSceneObject *, float, float); /* linkage=_ZN12CSceneObject22SetFadeAndCullDistanceEff */
	float GetFadeStartDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject27GetFadeStartDistanceSquaredEv */
	float GetFadeCullDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject26GetFadeCullDistanceSquaredEv */
	float CalcFadeStartDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21CalcFadeStartDistanceEv */
	float CalcFadeCullDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20CalcFadeCullDistanceEv */
	void DisableFadeAndCull(class CSceneObject *); /* linkage=_ZN12CSceneObject18DisableFadeAndCullEv */
	enum ESceneObjectBoundsType GetBoundsType(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetBoundsTypeEv */
	/* <3c464b1> ../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject33UpdateBoundingBoxToMatchTransformEv */
	float GetBoundingSphereRadius(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetBoundingSphereRadiusEv */
	void SetTransform(class CSceneObject *, const class matrix3x4_t  &); /* linkage=_ZN12CSceneObject12SetTransformERK11matrix3x4_t */
	void SetTransform(class CSceneObject *, const class CTransform  &); /* linkage=_ZN12CSceneObject12SetTransformERK10CTransform */
	void SetTransform(class CSceneObject *, const class CTransformUnaligned  &); /* linkage=_ZN12CSceneObject12SetTransformERK19CTransformUnaligned */
	const class matrix3x4_t  & GetTransform(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetTransformEv */
	class matrix3x4_t & GetTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject12GetTransformEv */
	class CTransform GetCTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetCTransformEv */
	class CTransformUnaligned GetCTransformUnaligned(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetCTransformUnalignedEv */
	void SetSortPosition(class CSceneObject *, const class Vector  &); /* linkage=_ZN12CSceneObject15SetSortPositionERK6Vector */
	void SetObjectClass(class CSceneObject *, uint8); /* linkage=_ZN12CSceneObject14SetObjectClassEh */
	uint8 GetObjectClass(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetObjectClassEv */
	void SetObjectClass(class CSceneObject *, const char  *); /* linkage=_ZN12CSceneObject14SetObjectClassEPKc */
	void ScheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject19ScheduleDirtyUpdateEv */
	void UnscheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject21UnscheduleDirtyUpdateEv */
	void SetShouldBeDeletedBeforeWorld(class CSceneObject *); /* linkage=_ZN12CSceneObject29SetShouldBeDeletedBeforeWorldEv */
	void EnableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject16EnableMeshGroupsEy */
	void DisableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject17DisableMeshGroupsEy */
	void ResetMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject15ResetMeshGroupsEy */
	MeshGroupMask_t GetCurrentMeshGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetCurrentMeshGroupMaskEv */
	void SetLOD(class CSceneObject *, int); /* linkage=_ZN12CSceneObject6SetLODEi */
	void DisableLOD(class CSceneObject *); /* linkage=_ZN12CSceneObject10DisableLODEv */
	LODGroupMask_t GetCurrentLODGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject22GetCurrentLODGroupMaskEv */
	int GetCurrentLODLevel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetCurrentLODLevelEv */
	void SetDepthSortBias(class CSceneObject *, float); /* linkage=_ZN12CSceneObject16SetDepthSortBiasEf */
	float GetDepthSortBias(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetDepthSortBiasEv */
	class CSceneObject * GetParent(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetParentEv */
	void AddChildObject(class CSceneObject *, class CUtlStringToken, class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject14AddChildObjectE15CUtlStringTokenPS_j */
	void RemoveChild(class CSceneObject *, class CSceneObject *); /* linkage=_ZN12CSceneObject11RemoveChildEPS_ */
	class CSceneObject * FindChild(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject9FindChildE15CUtlStringToken */
	/* <2f2fc1d> ../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject11UpdateDirtyEv */
	/* <10234ed> ../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject25ProceduralResourcesLoadedEv */
	bool CheckAgainstMeshGroupAndLODGroupMask(const class CSceneObject  *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZNK12CSceneObject36CheckAgainstMeshGroupAndLODGroupMaskEyh */
	bool HasProperty(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject11HasPropertyE15CUtlStringToken */
	float GetSizeCullBloatScale(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21GetSizeCullBloatScaleEv */
	void SetSizeCullBloatScale(class CSceneObject *, enum SceneObjectSizeCullBloat_t); /* linkage=_ZN12CSceneObject21SetSizeCullBloatScaleE26SceneObjectSizeCullBloat_t */
	void SetBoundsGroupIndex(class CSceneObject *, int); /* linkage=_ZN12CSceneObject19SetBoundsGroupIndexEi */
	int GetBoundsGroupIndex(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetBoundsGroupIndexEv */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayer */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *, const class IMaterial2  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayerPK10IMaterial2 */
	const class CModel  * GetModel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetModelEv */
	HModel GetModelHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetModelHandleEv */
	enum ESceneObjectTypeFlags GetObjectTypeFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetObjectTypeFlagsEv */
	void AddObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject18AddObjectTypeFlagsE21ESceneObjectTypeFlags */
	void RemoveObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject21RemoveObjectTypeFlagsE21ESceneObjectTypeFlags */
	void EnableLightingCache(class CSceneObject *); /* linkage=_ZN12CSceneObject19EnableLightingCacheEv */
	void GetMaterialsForObject(class CSceneObject *, class CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2> &, class CUtlVectorFixedGrowable<int, 2> &); /* linkage=_ZN12CSceneObject21GetMaterialsForObjectER23CUtlVectorFixedGrowableI11CWeakHandleI29InfoForResourceTypeIMaterial2ELm2EERS0_IiLm2EE */
	bool SetRenderableFlagsAndMirrorIfChanged(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject36SetRenderableFlagsAndMirrorIfChangedE17ESceneObjectFlags */
	void MirrorFlags(class CSceneObject *); /* linkage=_ZN12CSceneObject11MirrorFlagsEv */
	void MarkObjectNotDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject18MarkObjectNotDirtyEv */
	void EnsureExtraData(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnsureExtraDataEv */
	void SetMaterialOverrideList(class CSceneObject *, int, const class CUtlStringToken  *, const HMaterialStrong  *); /* linkage=_ZN12CSceneObject23SetMaterialOverrideListEiPK15CUtlStringTokenPK13CStrongHandleI29InfoForResourceTypeIMaterial2E */
	/* <6355039> ../public/scenesystem/sceneobject.h:940 */
	virtual const class CManagedHandle  * GetManagedHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetManagedHandleEv */
	virtual void InitManagedHandle(class CSceneObject *); /* linkage=_ZN12CSceneObject17InitManagedHandleEv */
	bool IsInTagsList(class CSceneObject *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN12CSceneObject12IsInTagsListEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void RemoveTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject9RemoveTagEj */
	int GetTagCount(class CSceneObject *); /* linkage=_ZN12CSceneObject11GetTagCountEv */
	uint GetTagAt(class CSceneObject *, int); /* linkage=_ZN12CSceneObject8GetTagAtEi */
	void RemoveAllTags(class CSceneObject *); /* linkage=_ZN12CSceneObject13RemoveAllTagsEv */
	void AddTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6AddTagEj */
	void OnTagsChanged(class CSceneObject *); /* linkage=_ZN12CSceneObject13OnTagsChangedEv */
	bool HasTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6HasTagEj */
	void SetMaterialGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject16SetMaterialGroupE15CUtlStringToken */
	void SetBodyGroup(class CSceneObject *, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject12SetBodyGroupE15CUtlStringTokeni */
	class CRenderAttributes & GetAttributesForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetAttributesForModifyEv */
	class CRenderAttributes * GetAttributesPtrForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject25GetAttributesPtrForModifyEv */
	void UpdateRayTraceObject(class CSceneObject *); /* linkage=_ZN12CSceneObject20UpdateRayTraceObjectEv */
	void DestroyRayTraceInstance(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyRayTraceInstanceEv */
	void SetMaterialOverrideByIndex(class CSceneObject *, int, HMaterial); /* linkage=_ZN12CSceneObject26SetMaterialOverrideByIndexEi11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void ClearIndexedMaterialOverrides(class CSceneObject *); /* linkage=_ZN12CSceneObject29ClearIndexedMaterialOverridesEv */
} __attribute__((__aligned__(16)));

// <058AC2DF> ../../public/scenesystem/sceneobject.h:335
// member functions: 370
// member variables: 29
// static member variable: 1
// vtable entries: 4
// class size: 240
class CSceneObject : public IGenericInterface {
	/* ../../public/scenesystem/sceneobject.h:539 */
	enum MeshInstanceOwnership_t {
		MESH_INSTANCE_NOT_OWNED = 0,
		MESH_INSTANCE_OWNED = 1,
	};
public:
	/* class IGenericInterface <ancestor>; */ /* 0 8 */
	void CSceneObject(CSceneObject* , const CSceneObject& );
	/* ../../public/scenesystem/sceneobject.h:1428 */
	void CSceneObject(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1433 */
	virtual void ~CSceneObject(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:354 */
	void Init(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:355 */
	void Term(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1439 */
	void InitObject(CSceneObject* , ISceneWorld* , ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:1446 */
	void CreateDefaultPVSNode(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1453 */
	void RecomputePVS(CSceneObject* , IPVS* );
	/* ../../public/scenesystem/sceneobject.h:1469 */
	void SetCullDistance(CSceneObject* , float);
	/* ../../public/scenesystem/sceneobject.h:1488 */
	void SetAttributes(CSceneObject* , CRenderAttributes* );
	/* ../../public/scenesystem/sceneobject.h:1496 */
	void SetBoolValue(CSceneObject* , const CUtlStringToken& , bool);
	/* ../../public/scenesystem/sceneobject.h:1503 */
	bool GetBoolValue(const CSceneObject* , const CUtlStringToken& , bool);
	/* ../../public/scenesystem/sceneobject.h:1515 */
	void DeleteBoolValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1522 */
	void SetFloatValue(CSceneObject* , const CUtlStringToken& , float);
	/* ../../public/scenesystem/sceneobject.h:1529 */
	float GetFloatValue(const CSceneObject* , const CUtlStringToken& , float);
	/* ../../public/scenesystem/sceneobject.h:1541 */
	void DeleteFloatValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1548 */
	void SetIntValue(CSceneObject* , const CUtlStringToken& , int);
	/* ../../public/scenesystem/sceneobject.h:1555 */
	int GetIntValue(const CSceneObject* , const CUtlStringToken& , int);
	/* ../../public/scenesystem/sceneobject.h:1567 */
	void DeleteIntValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1573 */
	void SetComboValue(CSceneObject* , const CUtlStringToken& , uint8);
	/* ../../public/scenesystem/sceneobject.h:1580 */
	uint8 GetComboValue(const CSceneObject* , const CUtlStringToken& , uint8);
	/* ../../public/scenesystem/sceneobject.h:1592 */
	void DeleteComboValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1599 */
	void SetParentAttributes(CSceneObject* , const CRenderAttributes* );
	/* ../../public/scenesystem/sceneobject.h:1607 */
	void SetVector2DValue(CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../../public/scenesystem/sceneobject.h:1614 */
	Vector2D GetVector2DValue(const CSceneObject* , const CUtlStringToken& , Vector2D);
	/* ../../public/scenesystem/sceneobject.h:1626 */
	void DeleteVector2DValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1632 */
	void SetVectorValue(CSceneObject* , const CUtlStringToken& , const Vector& );
	/* ../../public/scenesystem/sceneobject.h:1639 */
	Vector GetVectorValue(const CSceneObject* , const CUtlStringToken& , Vector);
	/* ../../public/scenesystem/sceneobject.h:1651 */
	void DeleteVectorValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1657 */
	void SetVector4DValue(CSceneObject* , const CUtlStringToken& , const Vector4D& );
	/* ../../public/scenesystem/sceneobject.h:1664 */
	Vector4D GetVector4DValue(const CSceneObject* , const CUtlStringToken& , Vector4D);
	/* ../../public/scenesystem/sceneobject.h:1676 */
	void DeleteVector4DValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1684 */
	void SetTextureValue(CSceneObject* , const CUtlStringToken& , HRenderTexture);
	/* ../../public/scenesystem/sceneobject.h:1691 */
	void DeleteTextureValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:1699 */
	void SetVMatrixValue(CSceneObject* , const CUtlStringToken& , const VMatrix& );
	/* ../../public/scenesystem/sceneobject.h:1706 */
	void DeleteVMatrixValue(CSceneObject* , const CUtlStringToken& );
	/* ../../public/scenesystem/sceneobject.h:2318 */
	bool HasRenderAttributes(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2323 */
	CRenderAttributes& RenderAttributes(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2331 */
	void SetLightingOrigin(CSceneObject* , const Vector& , bool);
	/* ../../public/scenesystem/sceneobject.h:2341 */
	Vector GetLightingOrigin(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2365 */
	bool HasLightingOrigin(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2373 */
	void SetAlphaFade(CSceneObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2378 */
	float GetAlphaFade(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:412 */
	ISceneWorld* GetWorld(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:415 */
	void SetTintRGBA_Gamma(CSceneObject* , const Vector4D& );
	/* ../../public/scenesystem/sceneobject.h:435 */
	void SetTintRGBA(CSceneObject* , const Vector4D& );
	/* ../../public/scenesystem/sceneobject.h:443 */
	Vector4D GetTintRGBA(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:448 */
	CUtlStringToken GetLightGroup(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:466 */
	void SetLightGroup(CSceneObject* , CUtlStringToken);
	/* ../../public/scenesystem/sceneobject.h:483 */
	void SetLightProbeVolumePrecomputedHandshake(CSceneObject* , int);
	/* ../../public/scenesystem/sceneobject.h:489 */
	void SetBakedLightingInfo(CSceneObject* , const CSceneSystemBakedLightingInfo* );
	/* ../../public/scenesystem/sceneobject.h:495 */
	const CSceneSystemBakedLightingInfo* GetBakedLightingInfo(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:500 */
	bool IsVisible(const CSceneObject* , const uint32* );
	/* ../../public/scenesystem/sceneobject.h:1716 */
	void ClearMaterialOverrideList(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:510 */
	void SetMaterialOverride(CSceneObject* , HMaterial, CUtlStringToken, int);
	/* ../../public/scenesystem/sceneobject.h:2450 */
	void SetMaterialOverrideForMeshInstances(CSceneObject* , HMaterial);
	/* ../../public/scenesystem/sceneobject.h:518 */
	void SetDebugLevel(CSceneObject* , int);
	/* ../../public/scenesystem/sceneobject.h:1732 */
	void UpdateFlagsBasedOnMaterial(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1740 */
	void MoveToWorld(CSceneObject* , ISceneWorld* );
	/* ../../public/scenesystem/sceneobject.h:1745 */
	ISceneObjectDesc* GetDesc(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1750 */
	CMeshInstance* GetMeshInstanceData(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1762 */
	bool HasMeshInstanceData(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1767 */
	void SetMeshInstanceData(CSceneObject* , CMeshInstance* , MeshInstanceOwnership_t);
	/* ../../public/scenesystem/sceneobject.h:1784 */
	void ClearMeshInstanceData(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1790 */
	void DestroyMeshInstanceData(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1803 */
	void SetOwnsMeshInstanceData(CSceneObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:1815 */
	bool GetOwnsMeshInstanceData(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1820 */
	CSceneObjectExtraData_t* GetExtraData(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1825 */
	CSceneObjectLightingCache_t* GetLightingCache(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1830 */
	bool IsDeleted(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1835 */
	uint32 GetID(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1840 */
	void SetID(CSceneObject* , uint32);
	/* ../../public/scenesystem/sceneobject.h:1847 */
	void SetPartiallyAlphaBlended(CSceneObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:1859 */
	bool IsPartiallyAlphaBlended(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1864 */
	void SetBatchable(CSceneObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:1876 */
	bool IsNotBatchable(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1881 */
	void SetUniqueBatchGroup(CSceneObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:568 */
	void SetIsFromPool(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:569 */
	bool GetIsFromPool(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1911 */
	void SetOriginalFlags(CSceneObject* , ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:1916 */
	ESceneObjectFlags GetOriginalFlags(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:576 */
	bool HasOriginalFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:1926 */
	void ChangeFlags(CSceneObject* , ESceneObjectFlags, ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:1938 */
	void SetFlags(CSceneObject* , ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:586 */
	void SetFlags(CSceneObject* , ESceneObjectFlags, bool);
	/* ../../public/scenesystem/sceneobject.h:1921 */
	ESceneObjectFlags GetFlags(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1944 */
	bool HasFlags(const CSceneObject* , ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:1949 */
	void ClearFlags(CSceneObject* , ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:605 */
	void SetLayerMatchID(CSceneObject* , CUtlStringToken);
	/* ../../public/scenesystem/sceneobject.h:607 */
	CUtlStringToken GetLayerMatchID(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:612 */
	void SetForceLayerID(CSceneObject* , CUtlStringToken);
	/* ../../public/scenesystem/sceneobject.h:1954 */
	bool IsLoaded(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1959 */
	bool IsRenderingEnabled(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1964 */
	void SetLoaded(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1969 */
	void ClearLoaded(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1974 */
	void DisableRendering(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1979 */
	void EnableRendering(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1984 */
	void SetRenderingEnabled(CSceneObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:1991 */
	void SetBounds(CSceneObject* , const Vector& , const Vector& );
	/* ../../public/scenesystem/sceneobject.h:625 */
	void SetBounds(CSceneObject* , const AABB_t& );
	/* ../../public/scenesystem/sceneobject.h:1996 */
	void SetBoundsInfinite(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2001 */
	void GetBounds(const CSceneObject* , Vector& , Vector& );
	/* ../../public/scenesystem/sceneobject.h:2006 */
	void GetBounds(const CSceneObject* , AABB_t& );
	/* ../../public/scenesystem/sceneobject.h:635 */
	AABB_t GetBounds(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:642 */
	Vector MinBounds(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:647 */
	Vector MaxBounds(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2012 */
	void SetBoundsType(CSceneObject* , ESceneObjectBoundsType);
	/* ../../public/scenesystem/sceneobject.h:654 */
	float SafeSquare(CSceneObject* , float);
	/* ../../public/scenesystem/sceneobject.h:669 */
	void SetFadeAndCullDistance(CSceneObject* , float, float);
	/* ../../public/scenesystem/sceneobject.h:687 */
	float GetFadeStartDistanceSquared(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:692 */
	float GetFadeCullDistanceSquared(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:697 */
	float CalcFadeStartDistance(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:704 */
	float CalcFadeCullDistance(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:711 */
	void DisableFadeAndCull(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2017 */
	ESceneObjectBoundsType GetBoundsType(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2022 */
	float GetBoundingSphereRadius(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2078 */
	void SetTransform(CSceneObject* , const matrix3x4_t& );
	/* ../../public/scenesystem/sceneobject.h:2096 */
	void SetTransform(CSceneObject* , const CTransform& );
	/* ../../public/scenesystem/sceneobject.h:2101 */
	void SetTransform(CSceneObject* , const CTransformUnaligned& );
	/* ../../public/scenesystem/sceneobject.h:2108 */
	const matrix3x4_t& GetTransform(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2113 */
	matrix3x4_t& GetTransform(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2118 */
	CTransform GetCTransform(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2123 */
	CTransformUnaligned GetCTransformUnaligned(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2133 */
	void SetSortPosition(CSceneObject* , const Vector& );
	/* ../../public/scenesystem/sceneobject.h:1479 */
	void SetObjectClass(CSceneObject* , uint8);
	/* ../../public/scenesystem/sceneobject.h:1474 */
	uint8 GetObjectClass(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:739 */
	void SetObjectClass(CSceneObject* , const char* );
	/* ../../public/scenesystem/sceneobject.h:2142 */
	void ScheduleDirtyUpdate(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2150 */
	void UnscheduleDirtyUpdate(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2158 */
	void SetShouldBeDeletedBeforeWorld(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2163 */
	void EnableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../../public/scenesystem/sceneobject.h:2170 */
	void DisableMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../../public/scenesystem/sceneobject.h:2177 */
	void ResetMeshGroups(CSceneObject* , MeshGroupMask_t);
	/* ../../public/scenesystem/sceneobject.h:2204 */
	MeshGroupMask_t GetCurrentMeshGroupMask(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2221 */
	void SetLOD(CSceneObject* , int);
	/* ../../public/scenesystem/sceneobject.h:2234 */
	void DisableLOD(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2242 */
	LODGroupMask_t GetCurrentLODGroupMask(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2252 */
	int GetCurrentLODLevel(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2263 */
	void SetDepthSortBias(CSceneObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2273 */
	float GetDepthSortBias(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:772 */
	CSceneObject* GetParent(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:774 */
	void AddChildObject(CSceneObject* , CUtlStringToken, CSceneObject* , uint32);
	/* ../../public/scenesystem/sceneobject.h:777 */
	void RemoveChild(CSceneObject* , CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:779 */
	CSceneObject* FindChild(const CSceneObject* , CUtlStringToken);
	/* ../../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2310 */
	bool CheckAgainstMeshGroupAndLODGroupMask(const CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* ../../public/scenesystem/sceneobject.h:1420 */
	bool HasProperty(const CSceneObject* , CUtlStringToken);
	/* ../../public/scenesystem/sceneobject.h:800 */
	float GetSizeCullBloatScale(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:801 */
	void SetSizeCullBloatScale(CSceneObject* , SceneObjectSizeCullBloat_t);
	/* ../../public/scenesystem/sceneobject.h:803 */
	void SetBoundsGroupIndex(CSceneObject* , int);
	/* ../../public/scenesystem/sceneobject.h:804 */
	int GetBoundsGroupIndex(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2383 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* );
	/* ../../public/scenesystem/sceneobject.h:2414 */
	const IMaterial2* GetMaterialOverride(const CSceneObject* , const ISceneLayer* , const IMaterial2* );
	/* ../../public/scenesystem/sceneobject.h:1067 */
	const CModel* GetModel(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1074 */
	HModel GetModelHandle(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:813 */
	ESceneObjectTypeFlags GetObjectTypeFlags(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1081 */
	void AddObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../../public/scenesystem/sceneobject.h:1086 */
	void RemoveObjectTypeFlags(CSceneObject* , ESceneObjectTypeFlags);
	/* ../../public/scenesystem/sceneobject.h:2297 */
	void EnableLightingCache(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2305 */
	void GetMaterialsForObject(CSceneObject* , CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& , CUtlVectorFixedGrowable<int, 2>& );
private:
	/* ../../public/scenesystem/sceneobject.h:1893 */
	bool SetRenderableFlagsAndMirrorIfChanged(CSceneObject* , ESceneObjectFlags);
	/* ../../public/scenesystem/sceneobject.h:1906 */
	void MirrorFlags(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2282 */
	void MarkObjectNotDirty(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:2289 */
	void EnsureExtraData(CSceneObject* );
	CMeshInstance * m_pMeshInstanceData; /* 8 8 */
	ISceneObjectDesc * m_pDesc; /* 16 8 */
	CSceneObjectReference_t * m_pRefData; /* 24 8 */
	matrix3x4a_t m_transform __attribute__((__aligned__(16))); /* 32 48 */
	float m_flStartFadeDistanceSquared; /* 80 4 */
	float m_flFarCullDistanceSquared; /* 84 4 */
	uint16 m_nObjectTypeFlags; /* 88 2 */
	color24 m_tint; /* 90 3 */
	uint8 m_nMeshGroupMaskSmall; /* 93 1 */
	uint8 m_nDebugLevel:2; /* 94: 0 1 */
	uint8 m_nSizeCullBloat:2; /* 94: 2 1 */
	uint8 m_nBoundsType:1; /* 94: 4 1 */
	uint8 m_nID; /* 95 1 */
	int8 m_nBoundsGroupIndex; /* 96 1 */
	uint8 m_nObjectClass; /* 97 1 */
	float m_fAlpha; /* 100 4 */
	CPVSData * m_pPVSData; /* 104 8 */
	CSceneObjectExtraData_t * m_pExtraData; /* 112 8 */
	CSceneObjectLightingCache_t * m_pLightingCache; /* 120 8 */
	ESceneObjectFlags m_nOriginalRenderableFlags; /* 128 8 */
	ESceneObjectFlags m_nRenderableFlags; /* 136 8 */
	ISceneWorld * m_pWorld; /* 144 8 */
	CUtlStringToken m_nLayerMatchID; /* 152 4 */
	static float s_flSizeCullBloatScale[4]; /* 0 0 */
	CUtlVectorFixedGrowable<unsigned int, 3> m_tags __attribute__((__aligned__(8))); /* 160 48 */
	bool m_IsDeleting; /* 208 1 */
	/* ../../public/scenesystem/sceneobject.h:893 */
	void SetMaterialOverrideList(CSceneObject* , int, const CUtlStringToken* , const HMaterialStrong* );
	CManagedHandle m_ManagedHandle; /* 212 4 */
	/* ../../public/scenesystem/sceneobject.h:940 */
	virtual const CManagedHandle* GetManagedHandle(const CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:942 */
	virtual void InitManagedHandle(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:947 */
	bool IsInTagsList(CSceneObject* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../../public/scenesystem/sceneobject.h:961 */
	void RemoveTag(CSceneObject* , uint);
	/* ../../public/scenesystem/sceneobject.h:969 */
	int GetTagCount(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:971 */
	uint GetTagAt(CSceneObject* , int);
	/* ../../public/scenesystem/sceneobject.h:973 */
	void RemoveAllTags(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:978 */
	void AddTag(CSceneObject* , uint);
	/* ../../public/scenesystem/sceneobject.h:985 */
	void OnTagsChanged(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:989 */
	bool HasTag(CSceneObject* , uint);
	/* ../../public/scenesystem/sceneobject.h:994 */
	void SetMaterialGroup(CSceneObject* , CUtlStringToken);
	/* ../../public/scenesystem/sceneobject.h:1002 */
	void SetBodyGroup(CSceneObject* , CUtlStringToken, int);
	/* ../../public/scenesystem/sceneobject.h:1060 */
	CRenderAttributes& GetAttributesForModify(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1034 */
	CRenderAttributes* GetAttributesPtrForModify(CSceneObject* );
	InstancedRayTracingEnvironmentReference_t * m_rayTraceInstance; /* 216 8 */
	/* ../../public/scenesystem/sceneobject.h:1040 */
	void UpdateRayTraceObject(CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1045 */
	void DestroyRayTraceInstance(CSceneObject* );
	bool m_IsRayTraceDirty; /* 224 1 */
	/* ../../public/scenesystem/sceneobject.h:1056 */
	void SetMaterialOverrideByIndex(CSceneObject* , int, HMaterial);
	/* ../../public/scenesystem/sceneobject.h:1057 */
	void ClearIndexedMaterialOverrides(CSceneObject* );
	void CSceneObject(class CSceneObject *, const class CSceneObject  &); /* linkage=_ZN12CSceneObjectC4ERKS_ */
	void CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectC4Ev */
	virtual void ~CSceneObject(class CSceneObject *); /* linkage=_ZN12CSceneObjectD4Ev */
	/* <35a5c73> ../scenesystem/sceneobject_methods.cpp:1151 */
	void Init(class CSceneObject *); /* linkage=_ZN12CSceneObject4InitEv */
	void Term(class CSceneObject *); /* linkage=_ZN12CSceneObject4TermEv */
	void InitObject(class CSceneObject *, class ISceneWorld *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10InitObjectEP11ISceneWorld17ESceneObjectFlags */
	void CreateDefaultPVSNode(class CSceneObject *); /* linkage=_ZN12CSceneObject20CreateDefaultPVSNodeEv */
	void RecomputePVS(class CSceneObject *, class IPVS *); /* linkage=_ZN12CSceneObject12RecomputePVSEP4IPVS */
	void SetCullDistance(class CSceneObject *, float); /* linkage=_ZN12CSceneObject15SetCullDistanceEf */
	void SetAttributes(class CSceneObject *, class CRenderAttributes *); /* linkage=_ZN12CSceneObject13SetAttributesEP17CRenderAttributes */
	void SetBoolValue(class CSceneObject *, const class CUtlStringToken  &, bool); /* linkage=_ZN12CSceneObject12SetBoolValueERK15CUtlStringTokenb */
	bool GetBoolValue(const class CSceneObject  *, const class CUtlStringToken  &, bool); /* linkage=_ZNK12CSceneObject12GetBoolValueERK15CUtlStringTokenb */
	void DeleteBoolValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject15DeleteBoolValueERK15CUtlStringToken */
	void SetFloatValue(class CSceneObject *, const class CUtlStringToken  &, float); /* linkage=_ZN12CSceneObject13SetFloatValueERK15CUtlStringTokenf */
	float GetFloatValue(const class CSceneObject  *, const class CUtlStringToken  &, float); /* linkage=_ZNK12CSceneObject13GetFloatValueERK15CUtlStringTokenf */
	void DeleteFloatValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteFloatValueERK15CUtlStringToken */
	void SetIntValue(class CSceneObject *, const class CUtlStringToken  &, int); /* linkage=_ZN12CSceneObject11SetIntValueERK15CUtlStringTokeni */
	int GetIntValue(const class CSceneObject  *, const class CUtlStringToken  &, int); /* linkage=_ZNK12CSceneObject11GetIntValueERK15CUtlStringTokeni */
	void DeleteIntValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject14DeleteIntValueERK15CUtlStringToken */
	void SetComboValue(class CSceneObject *, const class CUtlStringToken  &, uint8); /* linkage=_ZN12CSceneObject13SetComboValueERK15CUtlStringTokenh */
	uint8 GetComboValue(const class CSceneObject  *, const class CUtlStringToken  &, uint8); /* linkage=_ZNK12CSceneObject13GetComboValueERK15CUtlStringTokenh */
	void DeleteComboValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject16DeleteComboValueERK15CUtlStringToken */
	void SetParentAttributes(class CSceneObject *, const class CRenderAttributes  *); /* linkage=_ZN12CSceneObject19SetParentAttributesEPK17CRenderAttributes */
	void SetVector2DValue(class CSceneObject *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZN12CSceneObject16SetVector2DValueERK15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector2D); /* linkage=_ZNK12CSceneObject16GetVector2DValueERK15CUtlStringToken8Vector2D */
	void DeleteVector2DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector2DValueERK15CUtlStringToken */
	void SetVectorValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector  &); /* linkage=_ZN12CSceneObject14SetVectorValueERK15CUtlStringTokenRK6Vector */
	class Vector GetVectorValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector); /* linkage=_ZNK12CSceneObject14GetVectorValueERK15CUtlStringToken6Vector */
	void DeleteVectorValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject17DeleteVectorValueERK15CUtlStringToken */
	void SetVector4DValue(class CSceneObject *, const class CUtlStringToken  &, const class Vector4D  &); /* linkage=_ZN12CSceneObject16SetVector4DValueERK15CUtlStringTokenRK8Vector4D */
	class Vector4D GetVector4DValue(const class CSceneObject  *, const class CUtlStringToken  &, class Vector4D); /* linkage=_ZNK12CSceneObject16GetVector4DValueERK15CUtlStringToken8Vector4D */
	void DeleteVector4DValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject19DeleteVector4DValueERK15CUtlStringToken */
	void SetTextureValue(class CSceneObject *, const class CUtlStringToken  &, HRenderTexture); /* linkage=_ZN12CSceneObject15SetTextureValueERK15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void DeleteTextureValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteTextureValueERK15CUtlStringToken */
	void SetVMatrixValue(class CSceneObject *, const class CUtlStringToken  &, const class VMatrix  &); /* linkage=_ZN12CSceneObject15SetVMatrixValueERK15CUtlStringTokenRK7VMatrix */
	void DeleteVMatrixValue(class CSceneObject *, const class CUtlStringToken  &); /* linkage=_ZN12CSceneObject18DeleteVMatrixValueERK15CUtlStringToken */
	bool HasRenderAttributes(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasRenderAttributesEv */
	class CRenderAttributes & RenderAttributes(class CSceneObject *); /* linkage=_ZN12CSceneObject16RenderAttributesEv */
	void SetLightingOrigin(class CSceneObject *, const class Vector  &, bool); /* linkage=_ZN12CSceneObject17SetLightingOriginERK6Vectorb */
	class Vector GetLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17GetLightingOriginEv */
	bool HasLightingOrigin(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject17HasLightingOriginEv */
	void SetAlphaFade(class CSceneObject *, float); /* linkage=_ZN12CSceneObject12SetAlphaFadeEf */
	float GetAlphaFade(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetAlphaFadeEv */
	class ISceneWorld * GetWorld(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetWorldEv */
	void SetTintRGBA_Gamma(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject17SetTintRGBA_GammaERK8Vector4D */
	void SetTintRGBA(class CSceneObject *, const class Vector4D  &); /* linkage=_ZN12CSceneObject11SetTintRGBAERK8Vector4D */
	class Vector4D GetTintRGBA(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject11GetTintRGBAEv */
	class CUtlStringToken GetLightGroup(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetLightGroupEv */
	void SetLightGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject13SetLightGroupE15CUtlStringToken */
	void SetLightProbeVolumePrecomputedHandshake(class CSceneObject *, int); /* linkage=_ZN12CSceneObject39SetLightProbeVolumePrecomputedHandshakeEi */
	void SetBakedLightingInfo(class CSceneObject *, const class CSceneSystemBakedLightingInfo  *); /* linkage=_ZN12CSceneObject20SetBakedLightingInfoEPK29CSceneSystemBakedLightingInfo */
	const class CSceneSystemBakedLightingInfo  * GetBakedLightingInfo(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20GetBakedLightingInfoEv */
	bool IsVisible(const class CSceneObject  *, const uint32  *); /* linkage=_ZNK12CSceneObject9IsVisibleEPKj */
	void ClearMaterialOverrideList(class CSceneObject *); /* linkage=_ZN12CSceneObject25ClearMaterialOverrideListEv */
	void SetMaterialOverride(class CSceneObject *, HMaterial, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringTokeni */
	void SetMaterialOverrideForMeshInstances(class CSceneObject *, HMaterial); /* linkage=_ZN12CSceneObject35SetMaterialOverrideForMeshInstancesE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void SetDebugLevel(class CSceneObject *, int); /* linkage=_ZN12CSceneObject13SetDebugLevelEi */
	void UpdateFlagsBasedOnMaterial(class CSceneObject *); /* linkage=_ZN12CSceneObject26UpdateFlagsBasedOnMaterialEv */
	void MoveToWorld(class CSceneObject *, class ISceneWorld *); /* linkage=_ZN12CSceneObject11MoveToWorldEP11ISceneWorld */
	class ISceneObjectDesc * GetDesc(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject7GetDescEv */
	class CMeshInstance * GetMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetMeshInstanceDataEv */
	bool HasMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19HasMeshInstanceDataEv */
	void SetMeshInstanceData(class CSceneObject *, class CMeshInstance *, enum MeshInstanceOwnership_t); /* linkage=_ZN12CSceneObject19SetMeshInstanceDataEP13CMeshInstanceNS_23MeshInstanceOwnership_tE */
	void ClearMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject21ClearMeshInstanceDataEv */
	void DestroyMeshInstanceData(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyMeshInstanceDataEv */
	void SetOwnsMeshInstanceData(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject23SetOwnsMeshInstanceDataEb */
	bool GetOwnsMeshInstanceData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetOwnsMeshInstanceDataEv */
	class CSceneObjectExtraData_t * GetExtraData(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetExtraDataEv */
	class CSceneObjectLightingCache_t * GetLightingCache(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetLightingCacheEv */
	bool IsDeleted(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9IsDeletedEv */
	uint32 GetID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject5GetIDEv */
	void SetID(class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject5SetIDEj */
	void SetPartiallyAlphaBlended(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject24SetPartiallyAlphaBlendedEb */
	bool IsPartiallyAlphaBlended(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23IsPartiallyAlphaBlendedEv */
	void SetBatchable(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject12SetBatchableEb */
	bool IsNotBatchable(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14IsNotBatchableEv */
	void SetUniqueBatchGroup(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetUniqueBatchGroupEb */
	void SetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13SetIsFromPoolEv */
	bool GetIsFromPool(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetIsFromPoolEv */
	void SetOriginalFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject16SetOriginalFlagsE17ESceneObjectFlags */
	enum ESceneObjectFlags GetOriginalFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetOriginalFlagsEv */
	bool HasOriginalFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject16HasOriginalFlagsE17ESceneObjectFlags */
	void ChangeFlags(class CSceneObject *, enum ESceneObjectFlags, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject11ChangeFlagsE17ESceneObjectFlagsS0_ */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlags */
	void SetFlags(class CSceneObject *, enum ESceneObjectFlags, bool); /* linkage=_ZN12CSceneObject8SetFlagsE17ESceneObjectFlagsb */
	enum ESceneObjectFlags GetFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetFlagsEv */
	bool HasFlags(const class CSceneObject  *, enum ESceneObjectFlags); /* linkage=_ZNK12CSceneObject8HasFlagsE17ESceneObjectFlags */
	void ClearFlags(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject10ClearFlagsE17ESceneObjectFlags */
	void SetLayerMatchID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetLayerMatchIDE15CUtlStringToken */
	class CUtlStringToken GetLayerMatchID(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject15GetLayerMatchIDEv */
	void SetForceLayerID(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject15SetForceLayerIDE15CUtlStringToken */
	bool IsLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8IsLoadedEv */
	bool IsRenderingEnabled(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18IsRenderingEnabledEv */
	void SetLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject9SetLoadedEv */
	void ClearLoaded(class CSceneObject *); /* linkage=_ZN12CSceneObject11ClearLoadedEv */
	void DisableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject16DisableRenderingEv */
	void EnableRendering(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnableRenderingEv */
	void SetRenderingEnabled(class CSceneObject *, bool); /* linkage=_ZN12CSceneObject19SetRenderingEnabledEb */
	void SetBounds(class CSceneObject *, const class Vector  &, const class Vector  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6VectorS2_ */
	void SetBounds(class CSceneObject *, const class AABB_t  &); /* linkage=_ZN12CSceneObject9SetBoundsERK6AABB_t */
	void SetBoundsInfinite(class CSceneObject *); /* linkage=_ZN12CSceneObject17SetBoundsInfiniteEv */
	void GetBounds(const class CSceneObject  *, class Vector &, class Vector &); /* linkage=_ZNK12CSceneObject9GetBoundsER6VectorS1_ */
	void GetBounds(const class CSceneObject  *, class AABB_t &); /* linkage=_ZNK12CSceneObject9GetBoundsER6AABB_t */
	class AABB_t GetBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetBoundsEv */
	class Vector MinBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MinBoundsEv */
	class Vector MaxBounds(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9MaxBoundsEv */
	void SetBoundsType(class CSceneObject *, enum ESceneObjectBoundsType); /* linkage=_ZN12CSceneObject13SetBoundsTypeE22ESceneObjectBoundsType */
	float SafeSquare(class CSceneObject *, float); /* linkage=_ZN12CSceneObject10SafeSquareEf */
	void SetFadeAndCullDistance(class CSceneObject *, float, float); /* linkage=_ZN12CSceneObject22SetFadeAndCullDistanceEff */
	float GetFadeStartDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject27GetFadeStartDistanceSquaredEv */
	float GetFadeCullDistanceSquared(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject26GetFadeCullDistanceSquaredEv */
	float CalcFadeStartDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21CalcFadeStartDistanceEv */
	float CalcFadeCullDistance(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject20CalcFadeCullDistanceEv */
	void DisableFadeAndCull(class CSceneObject *); /* linkage=_ZN12CSceneObject18DisableFadeAndCullEv */
	enum ESceneObjectBoundsType GetBoundsType(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetBoundsTypeEv */
	/* <3c464b1> ../public/scenesystem/sceneobject.h:2030 */
	void UpdateBoundingBoxToMatchTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject33UpdateBoundingBoxToMatchTransformEv */
	float GetBoundingSphereRadius(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetBoundingSphereRadiusEv */
	void SetTransform(class CSceneObject *, const class matrix3x4_t  &); /* linkage=_ZN12CSceneObject12SetTransformERK11matrix3x4_t */
	void SetTransform(class CSceneObject *, const class CTransform  &); /* linkage=_ZN12CSceneObject12SetTransformERK10CTransform */
	void SetTransform(class CSceneObject *, const class CTransformUnaligned  &); /* linkage=_ZN12CSceneObject12SetTransformERK19CTransformUnaligned */
	const class matrix3x4_t  & GetTransform(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject12GetTransformEv */
	class matrix3x4_t & GetTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject12GetTransformEv */
	class CTransform GetCTransform(class CSceneObject *); /* linkage=_ZN12CSceneObject13GetCTransformEv */
	class CTransformUnaligned GetCTransformUnaligned(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetCTransformUnalignedEv */
	void SetSortPosition(class CSceneObject *, const class Vector  &); /* linkage=_ZN12CSceneObject15SetSortPositionERK6Vector */
	void SetObjectClass(class CSceneObject *, uint8); /* linkage=_ZN12CSceneObject14SetObjectClassEh */
	uint8 GetObjectClass(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetObjectClassEv */
	void SetObjectClass(class CSceneObject *, const char  *); /* linkage=_ZN12CSceneObject14SetObjectClassEPKc */
	void ScheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject19ScheduleDirtyUpdateEv */
	void UnscheduleDirtyUpdate(class CSceneObject *); /* linkage=_ZN12CSceneObject21UnscheduleDirtyUpdateEv */
	void SetShouldBeDeletedBeforeWorld(class CSceneObject *); /* linkage=_ZN12CSceneObject29SetShouldBeDeletedBeforeWorldEv */
	void EnableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject16EnableMeshGroupsEy */
	void DisableMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject17DisableMeshGroupsEy */
	void ResetMeshGroups(class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN12CSceneObject15ResetMeshGroupsEy */
	MeshGroupMask_t GetCurrentMeshGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject23GetCurrentMeshGroupMaskEv */
	void SetLOD(class CSceneObject *, int); /* linkage=_ZN12CSceneObject6SetLODEi */
	void DisableLOD(class CSceneObject *); /* linkage=_ZN12CSceneObject10DisableLODEv */
	LODGroupMask_t GetCurrentLODGroupMask(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject22GetCurrentLODGroupMaskEv */
	int GetCurrentLODLevel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetCurrentLODLevelEv */
	void SetDepthSortBias(class CSceneObject *, float); /* linkage=_ZN12CSceneObject16SetDepthSortBiasEf */
	float GetDepthSortBias(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetDepthSortBiasEv */
	class CSceneObject * GetParent(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject9GetParentEv */
	void AddChildObject(class CSceneObject *, class CUtlStringToken, class CSceneObject *, uint32); /* linkage=_ZN12CSceneObject14AddChildObjectE15CUtlStringTokenPS_j */
	void RemoveChild(class CSceneObject *, class CSceneObject *); /* linkage=_ZN12CSceneObject11RemoveChildEPS_ */
	class CSceneObject * FindChild(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject9FindChildE15CUtlStringToken */
	/* <2f2fc1d> ../public/scenesystem/sceneobject.h:787 */
	virtual void UpdateDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject11UpdateDirtyEv */
	/* <10234ed> ../public/scenesystem/sceneobject.h:789 */
	virtual bool ProceduralResourcesLoaded(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject25ProceduralResourcesLoadedEv */
	bool CheckAgainstMeshGroupAndLODGroupMask(const class CSceneObject  *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZNK12CSceneObject36CheckAgainstMeshGroupAndLODGroupMaskEyh */
	bool HasProperty(const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZNK12CSceneObject11HasPropertyE15CUtlStringToken */
	float GetSizeCullBloatScale(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject21GetSizeCullBloatScaleEv */
	void SetSizeCullBloatScale(class CSceneObject *, enum SceneObjectSizeCullBloat_t); /* linkage=_ZN12CSceneObject21SetSizeCullBloatScaleE26SceneObjectSizeCullBloat_t */
	void SetBoundsGroupIndex(class CSceneObject *, int); /* linkage=_ZN12CSceneObject19SetBoundsGroupIndexEi */
	int GetBoundsGroupIndex(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject19GetBoundsGroupIndexEv */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayer */
	const class IMaterial2  * GetMaterialOverride(const class CSceneObject  *, const class ISceneLayer  *, const class IMaterial2  *); /* linkage=_ZNK12CSceneObject19GetMaterialOverrideEPK11ISceneLayerPK10IMaterial2 */
	const class CModel  * GetModel(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject8GetModelEv */
	HModel GetModelHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject14GetModelHandleEv */
	enum ESceneObjectTypeFlags GetObjectTypeFlags(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject18GetObjectTypeFlagsEv */
	void AddObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject18AddObjectTypeFlagsE21ESceneObjectTypeFlags */
	void RemoveObjectTypeFlags(class CSceneObject *, enum ESceneObjectTypeFlags); /* linkage=_ZN12CSceneObject21RemoveObjectTypeFlagsE21ESceneObjectTypeFlags */
	void EnableLightingCache(class CSceneObject *); /* linkage=_ZN12CSceneObject19EnableLightingCacheEv */
	void GetMaterialsForObject(class CSceneObject *, class CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2> &, class CUtlVectorFixedGrowable<int, 2> &); /* linkage=_ZN12CSceneObject21GetMaterialsForObjectER23CUtlVectorFixedGrowableI11CWeakHandleI29InfoForResourceTypeIMaterial2ELm2EERS0_IiLm2EE */
	bool SetRenderableFlagsAndMirrorIfChanged(class CSceneObject *, enum ESceneObjectFlags); /* linkage=_ZN12CSceneObject36SetRenderableFlagsAndMirrorIfChangedE17ESceneObjectFlags */
	void MirrorFlags(class CSceneObject *); /* linkage=_ZN12CSceneObject11MirrorFlagsEv */
	void MarkObjectNotDirty(class CSceneObject *); /* linkage=_ZN12CSceneObject18MarkObjectNotDirtyEv */
	void EnsureExtraData(class CSceneObject *); /* linkage=_ZN12CSceneObject15EnsureExtraDataEv */
	void SetMaterialOverrideList(class CSceneObject *, int, const class CUtlStringToken  *, const HMaterialStrong  *); /* linkage=_ZN12CSceneObject23SetMaterialOverrideListEiPK15CUtlStringTokenPK13CStrongHandleI29InfoForResourceTypeIMaterial2E */
	/* <6355039> ../public/scenesystem/sceneobject.h:940 */
	virtual const class CManagedHandle  * GetManagedHandle(const class CSceneObject  *); /* linkage=_ZNK12CSceneObject16GetManagedHandleEv */
	virtual void InitManagedHandle(class CSceneObject *); /* linkage=_ZN12CSceneObject17InitManagedHandleEv */
	bool IsInTagsList(class CSceneObject *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN12CSceneObject12IsInTagsListEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void RemoveTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject9RemoveTagEj */
	int GetTagCount(class CSceneObject *); /* linkage=_ZN12CSceneObject11GetTagCountEv */
	uint GetTagAt(class CSceneObject *, int); /* linkage=_ZN12CSceneObject8GetTagAtEi */
	void RemoveAllTags(class CSceneObject *); /* linkage=_ZN12CSceneObject13RemoveAllTagsEv */
	void AddTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6AddTagEj */
	void OnTagsChanged(class CSceneObject *); /* linkage=_ZN12CSceneObject13OnTagsChangedEv */
	bool HasTag(class CSceneObject *, uint); /* linkage=_ZN12CSceneObject6HasTagEj */
	void SetMaterialGroup(class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12CSceneObject16SetMaterialGroupE15CUtlStringToken */
	void SetBodyGroup(class CSceneObject *, class CUtlStringToken, int); /* linkage=_ZN12CSceneObject12SetBodyGroupE15CUtlStringTokeni */
	class CRenderAttributes & GetAttributesForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject22GetAttributesForModifyEv */
	class CRenderAttributes * GetAttributesPtrForModify(class CSceneObject *); /* linkage=_ZN12CSceneObject25GetAttributesPtrForModifyEv */
	void UpdateRayTraceObject(class CSceneObject *); /* linkage=_ZN12CSceneObject20UpdateRayTraceObjectEv */
	void DestroyRayTraceInstance(class CSceneObject *); /* linkage=_ZN12CSceneObject23DestroyRayTraceInstanceEv */
	void SetMaterialOverrideByIndex(class CSceneObject *, int, HMaterial); /* linkage=_ZN12CSceneObject26SetMaterialOverrideByIndexEi11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void ClearIndexedMaterialOverrides(class CSceneObject *); /* linkage=_ZN12CSceneObject29ClearIndexedMaterialOverridesEv */
} __attribute__((__aligned__(16)));

// <03DABA06> ../public/scenesystem/sceneobject.h:412
inline void CSceneObject::GetWorld()
{
} /* size: 0 */

// <03C434AC> ../public/scenesystem/sceneobject.h:415
inline void CSceneObject::SetTintRGBA_Gamma(const Vector4D& vTint)
{
} /* size: 0 */

// <01348FF1> ../public/scenesystem/sceneobject.h:435
inline void CSceneObject::SetTintRGBA(const Vector4D& vTint)
{
} /* size: 0 */

// <04020EFD> ../public/scenesystem/sceneobject.h:443
inline void CSceneObject::GetTintRGBA()
{
} /* size: 0 */

// <04020EB9> ../public/scenesystem/sceneobject.h:448
// variables: 3
inline void CSceneObject::GetLightGroup()
{
	CUtlStringToken lightGroup; // 450
	{
		int nLightGroupInt; // 453
		{
			uint32 nHashCode; // 456
		}
	}
} /* size: 0, variables: 1 */

// <01110669> ../public/scenesystem/sceneobject.h:466
// variables: 18
// function calls: 38
void CSceneObject::SetLightGroup(CUtlStringToken lightGroup)
{
	CUtlStringToken currentLightGroup; // 468
	{
		int nLightGroupInt; // 475
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 476
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
			const CUtlStringToken& nTok,
			IntVector4D nValue);  // 456
		CRenderAttributes::SetIntValue(
				CUtlStringToken nTokenID,
				int nValue);  // 477
		CSceneObject::EnsureExtraData(); // 2289
		CSceneObject::EnsureExtraData(); // 473
	}
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
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 65303
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 65313
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 65323
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
		}
	}
	CSceneObject::GetLightGroup(); // 468
	CUtlStringToken::operator!=(
			const CUtlStringToken& other);  // 469
} /* size: 438, variables: 1, inline expansions: 3 (240 bytes) */

// <01110643> ../public/scenesystem/sceneobject.h:483
inline void CSceneObject::SetLightProbeVolumePrecomputedHandshake(int nValue)
{
} /* size: 0 */

// <0111061D> ../public/scenesystem/sceneobject.h:489
inline void CSceneObject::SetBakedLightingInfo(const CSceneSystemBakedLightingInfo* pBakedLightingInfo)
{
} /* size: 0 */

// <04020EA0> ../public/scenesystem/sceneobject.h:495
inline void CSceneObject::GetBakedLightingInfo()
{
} /* size: 0 */

// <02C45743> ../public/scenesystem/sceneobject.h:500
inline void CSceneObject::IsVisible(const uint32* pVisBits)
{
} /* size: 0 */

// <01348F98> ../public/scenesystem/sceneobject.h:510
inline void CSceneObject::SetMaterialOverride(HMaterial hMaterial, CUtlStringToken nAttr, int nAttrValueMatch)
{
} /* size: 0 */

// <04020E87> ../public/scenesystem/sceneobject.h:568
inline void CSceneObject::SetIsFromPool()
{
} /* size: 0 */

// <0356075C> ../public/scenesystem/sceneobject.h:569
inline void CSceneObject::GetIsFromPool()
{
} /* size: 0 */

// <03C43486> ../public/scenesystem/sceneobject.h:605
inline void CSceneObject::SetLayerMatchID(CUtlStringToken nTok)
{
} /* size: 0 */

// <01348F4C> ../public/scenesystem/sceneobject.h:612
inline void CSceneObject::SetForceLayerID(CUtlStringToken nTok)
{
} /* size: 0 */

// <01348F26> ../public/scenesystem/sceneobject.h:625
inline void CSceneObject::SetBounds(const AABB_t& bounds)
{
} /* size: 0 */

// <02C45704> ../public/scenesystem/sceneobject.h:642
inline void CSceneObject::MinBounds()
{
} /* size: 0 */

// <02C456EB> ../public/scenesystem/sceneobject.h:647
inline void CSceneObject::MaxBounds()
{
} /* size: 0 */

// <011105D3> ../public/scenesystem/sceneobject.h:654
inline void CSceneObject::SafeSquare(float x)
{
} /* size: 0 */

// <011105A0> ../public/scenesystem/sceneobject.h:669
inline void CSceneObject::SetFadeAndCullDistance(float flStartFadeDistance, float flCullDistance)
{
} /* size: 0 */

// <02C456D2> ../public/scenesystem/sceneobject.h:687
inline void CSceneObject::GetFadeStartDistanceSquared()
{
} /* size: 0 */

// <02C456B9> ../public/scenesystem/sceneobject.h:692
inline void CSceneObject::GetFadeCullDistanceSquared()
{
} /* size: 0 */

// <01110587> ../public/scenesystem/sceneobject.h:711
inline void CSceneObject::DisableFadeAndCull()
{
} /* size: 0 */

// <04020E48> ../public/scenesystem/sceneobject.h:772
inline void CSceneObject::GetParent()
{
} /* size: 0 */

// <01348EA7> ../public/scenesystem/sceneobject.h:774
inline void CSceneObject::AddChildObject(CUtlStringToken nId, CSceneObject* pChild, uint32 nChildUpdateFlags)
{
} /* size: 0 */

// <03560710> ../public/scenesystem/sceneobject.h:777
inline void CSceneObject::RemoveChild(CSceneObject* pChild)
{
} /* size: 0 */

// <06E2A040> ../../public/scenesystem/sceneobject.h:787
void CSceneObject::UpdateDirty()
{
} /* size: 5 */

// <02F2486E> ../public/scenesystem/sceneobject.h:787
inline void CSceneObject::UpdateDirty()
{
} /* size: 0 */

// <06E2A012> ../../public/scenesystem/sceneobject.h:789
void CSceneObject::ProceduralResourcesLoaded()
{
} /* size: 10 */

// <010219BC> ../public/scenesystem/sceneobject.h:789
inline void CSceneObject::ProceduralResourcesLoaded()
{
} /* size: 0 */

// <02F24827> ../public/scenesystem/sceneobject.h:800
inline void CSceneObject::GetSizeCullBloatScale()
{
} /* size: 0 */

// <01110505> ../public/scenesystem/sceneobject.h:803
inline void CSceneObject::SetBoundsGroupIndex(int nIndex)
{
} /* size: 0 */

// <04020DD3> ../public/scenesystem/sceneobject.h:804
inline void CSceneObject::GetBoundsGroupIndex()
{
} /* size: 0 */

// <04020DBA> ../public/scenesystem/sceneobject.h:813
inline void CSceneObject::GetObjectTypeFlags()
{
} /* size: 0 */

// <06E29FE4> ../../public/scenesystem/sceneobject.h:940
void CSceneObject::GetManagedHandle()
{
} /* size: 12 */

// <0634FBCB> ../public/scenesystem/sceneobject.h:940
inline void CSceneObject::GetManagedHandle()
{
} /* size: 0 */

// <06E29F0A> ../../public/scenesystem/sceneobject.h:942
// variables: 4
// function call: 1
void CSceneObject::InitManagedHandle()
{
	{
		const uint32  m; // 226
		uint32 h; // 227
		uint32 k; // 228
		const int  r; // 229
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 944
} /* size: 73, inline expansions: 1 (7 bytes) */

// <02F246B1> ../public/scenesystem/sceneobject.h:947
// variables: 4
inline void CSceneObject::IsInTagsList(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined pTags)
{
	{
		uint tag; // 952
		CUtlVectorFixedGrowable<unsigned int, 3>& __for_range; // 57120
		iterator __for_begin; // 31385
		iterator __for_end; // 31385
	}
} /* size: 0 */

// <02C45500> ../public/scenesystem/sceneobject.h:947
// variables: 4
inline void CSceneObject::IsInTagsList(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined pTags)
{
	{
		uint tag; // 952
		CUtlVectorFixedGrowable<unsigned int, 3>& __for_range; // 60783
		iterator __for_begin; // 40430
		iterator __for_end; // 40430
	}
} /* size: 0 */

// <01951C8E> ../public/scenesystem/sceneobject.h:947
// variables: 4
inline void CSceneObject::IsInTagsList(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined pTags)
{
	{
		uint tag; // 952
		CUtlVectorFixedGrowable<unsigned int, 3>& __for_range; // 46333
		iterator __for_begin; // 9022
		iterator __for_end; // 9022
	}
} /* size: 0 */

// <01348D0B> ../public/scenesystem/sceneobject.h:961
inline void CSceneObject::RemoveTag(uint hash)
{
} /* size: 0 */

// <01348CF2> ../public/scenesystem/sceneobject.h:969
inline void CSceneObject::GetTagCount()
{
} /* size: 0 */

// <01348CCE> ../public/scenesystem/sceneobject.h:971
inline void CSceneObject::GetTagAt(int i)
{
} /* size: 0 */

// <01348C8F> ../public/scenesystem/sceneobject.h:978
inline void CSceneObject::AddTag(uint hash)
{
} /* size: 0 */

// <01348C76> ../public/scenesystem/sceneobject.h:985
inline void CSceneObject::OnTagsChanged()
{
} /* size: 0 */

// <0634FACF> ../public/scenesystem/sceneobject.h:989
inline void CSceneObject::HasTag(uint hash)
{
} /* size: 0 */

// <01348C2A> ../public/scenesystem/sceneobject.h:994
inline void CSceneObject::SetMaterialGroup(CUtlStringToken token)
{
} /* size: 0 */

// <01348BB6> ../public/scenesystem/sceneobject.h:1002
// variables: 5
inline void CSceneObject::SetBodyGroup(CUtlStringToken token, int iValue)
{
	const CModel* pModel; // 1007
	int iGroup; // 1011
	MeshGroupMask_t mask; // 1012
	MeshGroupMask_t nGroupMask; // 1020
	MeshGroupMask_t nModelMask; // 1021
} /* size: 0, variables: 5 */

// <01348B9D> ../public/scenesystem/sceneobject.h:1034
inline void CSceneObject::GetAttributesPtrForModify()
{
} /* size: 0 */

// <004E945C> ../public/scenesystem/sceneobject.h:1040
inline void CSceneObject::UpdateRayTraceObject()
{
} /* size: 0 */

// <0356057B> ../public/scenesystem/sceneobject.h:1045
inline void CSceneObject::DestroyRayTraceInstance()
{
} /* size: 0 */

// <01348B84> ../public/scenesystem/sceneobject.h:1060
inline void CSceneObject::GetAttributesForModify()
{
} /* size: 0 */

// <04020C9D> ../public/scenesystem/sceneobject.h:1067
inline void CSceneObject::GetModel()
{
} /* size: 0 */

// <03EA5B46> ../public/scenesystem/sceneobject.h:1067
void CSceneObject::GetModel()
{
} /* size: 0 */

// <01348B52> ../public/scenesystem/sceneobject.h:1074
inline void CSceneObject::GetModelHandle()
{
} /* size: 0 */

// <01110375> ../public/scenesystem/sceneobject.h:1081
inline void CSceneObject::AddObjectTypeFlags(ESceneObjectTypeFlags nFlags)
{
} /* size: 0 */

// <06E26452> ../../public/scenesystem/sceneobject.h:1113
void CMeshDrawPrimitive_t::CMeshDrawPrimitive_t()
{
} /* size: 0 */

// <06E26435> ../../public/scenesystem/sceneobject.h:1113
inline void CMeshDrawPrimitive_t::CMeshDrawPrimitive_t()
{
} /* size: 0 */

// <03B93666> ../public/scenesystem/sceneobject.h:1113
inline void CMeshDrawPrimitive_t::operator=(const CMeshDrawPrimitive_t &)
{
} /* size: 0 */

// <02E1F25E> ../public/scenesystem/sceneobject.h:1113
void CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(CMeshDrawPrimitive_t &)
{
} /* size: 0 */

// <02E1F23C> ../public/scenesystem/sceneobject.h:1113
inline void CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(CMeshDrawPrimitive_t &)
{
} /* size: 0 */

// <02E1F21A> ../public/scenesystem/sceneobject.h:1113
inline void CMeshDrawPrimitive_t::operator=(CMeshDrawPrimitive_t &)
{
} /* size: 0 */

// <000CFFED> ../public/scenesystem/sceneobject.h:1113
// member functions: 9
// member variables: 16
// struct size: 120
struct CMeshDrawPrimitive_t {
	/* ../public/scenesystem/sceneobject.h:1116 */
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	};
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	}; /* 0 16 */
	const class CSceneObject * m_pObject; /* 16 8 */
	const class IMaterial2 * m_pDrawMaterial; /* 24 8 */
	const class IMaterial2 * m_pKeyMaterial; /* 32 8 */
	uint64 m_nMaterialSimilarityKey; /* 40 8 */
	const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 48 8 */
	Vector4D m_vRGBAModulation; /* 56 16 */
	const class matrix3x4_t * m_pTransform; /* 72 8 */
	LightProbeVolumeBinding_t m_lpvBinding; /* 80 2 */
	uint32 m_nSortKey; /* 84 4 */
	uint16 m_nRequiredTextureSize; /* 88 2 */
	uint8 m_nObjectClassSettings; /* 90 1 */
	uint8 _pad; /* 91 1 */
	EBatchFlags m_nBatchFlags; /* 92 2 */
	int m_nBindlessPushConstants[3]; /* 96 12 */
	CRenderAttributes * m_pRenderAttributes; /* 112 8 */
	/* ../public/scenesystem/sceneobject.h:1153 */
	float GetAlphaFade(const CMeshDrawPrimitive_t* );
	/* ../public/scenesystem/sceneobject.h:1156 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* );
	/* ../public/scenesystem/sceneobject.h:1157 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , float, const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../public/scenesystem/sceneobject.h:1158 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../public/scenesystem/sceneobject.h:1160 */
	void SetMeshAndDrawCall(CMeshDrawPrimitive_t* , CMeshInstance* , int);
	/* ../public/scenesystem/sceneobject.h:1166 */
	void SetMaterial(CMeshDrawPrimitive_t* , const IMaterial2* );
	/* ../public/scenesystem/sceneobject.h:1186 */
	bool HasCopyMaterial(const CMeshDrawPrimitive_t* );
	/* ../public/scenesystem/sceneobject.h:1191 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshDrawPrimitive_t* );
	void CMeshDrawPrimitive_t(CMeshDrawPrimitive_t* );
};

// <02D5CD53> ../public/scenesystem/sceneobject.h:1113
// member functions: 12
// member variables: 16
// struct size: 120
struct CMeshDrawPrimitive_t {
	/* ../public/scenesystem/sceneobject.h:1116 */
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	};
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	}; /* 0 16 */
	const class CSceneObject * m_pObject; /* 16 8 */
	const class IMaterial2 * m_pDrawMaterial; /* 24 8 */
	const class IMaterial2 * m_pKeyMaterial; /* 32 8 */
	uint64 m_nMaterialSimilarityKey; /* 40 8 */
	const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 48 8 */
	Vector4D m_vRGBAModulation; /* 56 16 */
	const class matrix3x4_t * m_pTransform; /* 72 8 */
	LightProbeVolumeBinding_t m_lpvBinding; /* 80 2 */
	uint32 m_nSortKey; /* 84 4 */
	uint16 m_nRequiredTextureSize; /* 88 2 */
	uint8 m_nObjectClassSettings; /* 90 1 */
	uint8 _pad; /* 91 1 */
	EBatchFlags m_nBatchFlags; /* 92 2 */
	int m_nBindlessPushConstants[3]; /* 96 12 */
	CRenderAttributes * m_pRenderAttributes; /* 112 8 */
	/* ../public/scenesystem/sceneobject.h:1153 */
	float GetAlphaFade(const CMeshDrawPrimitive_t* );
	/* ../public/scenesystem/sceneobject.h:1156 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* );
	/* ../public/scenesystem/sceneobject.h:1157 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , float, const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../public/scenesystem/sceneobject.h:1158 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../public/scenesystem/sceneobject.h:1160 */
	void SetMeshAndDrawCall(CMeshDrawPrimitive_t* , CMeshInstance* , int);
	/* ../public/scenesystem/sceneobject.h:1166 */
	void SetMaterial(CMeshDrawPrimitive_t* , const IMaterial2* );
	/* ../public/scenesystem/sceneobject.h:1186 */
	bool HasCopyMaterial(const CMeshDrawPrimitive_t* );
	/* ../public/scenesystem/sceneobject.h:1191 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshDrawPrimitive_t* );
	CMeshDrawPrimitive_t& operator=(CMeshDrawPrimitive_t* , CMeshDrawPrimitive_t& );
	void CMeshDrawPrimitive_t(CMeshDrawPrimitive_t* , CMeshDrawPrimitive_t& );
	CMeshDrawPrimitive_t& operator=(CMeshDrawPrimitive_t* , const CMeshDrawPrimitive_t& );
	void CMeshDrawPrimitive_t(CMeshDrawPrimitive_t* );
};

// <03B4C0CD> ../public/scenesystem/sceneobject.h:1113
// member functions: 10
// member variables: 16
// struct size: 120
struct CMeshDrawPrimitive_t {
	/* ../public/scenesystem/sceneobject.h:1116 */
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	};
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	}; /* 0 16 */
	const class CSceneObject * m_pObject; /* 16 8 */
	const class IMaterial2 * m_pDrawMaterial; /* 24 8 */
	const class IMaterial2 * m_pKeyMaterial; /* 32 8 */
	uint64 m_nMaterialSimilarityKey; /* 40 8 */
	const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 48 8 */
	Vector4D m_vRGBAModulation; /* 56 16 */
	const class matrix3x4_t * m_pTransform; /* 72 8 */
	LightProbeVolumeBinding_t m_lpvBinding; /* 80 2 */
	uint32 m_nSortKey; /* 84 4 */
	uint16 m_nRequiredTextureSize; /* 88 2 */
	uint8 m_nObjectClassSettings; /* 90 1 */
	uint8 _pad; /* 91 1 */
	EBatchFlags m_nBatchFlags; /* 92 2 */
	int m_nBindlessPushConstants[3]; /* 96 12 */
	CRenderAttributes * m_pRenderAttributes; /* 112 8 */
	/* ../public/scenesystem/sceneobject.h:1153 */
	float GetAlphaFade(const CMeshDrawPrimitive_t* );
	/* ../public/scenesystem/sceneobject.h:1156 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* );
	/* ../public/scenesystem/sceneobject.h:1157 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , float, const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../public/scenesystem/sceneobject.h:1158 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../public/scenesystem/sceneobject.h:1160 */
	void SetMeshAndDrawCall(CMeshDrawPrimitive_t* , CMeshInstance* , int);
	/* ../public/scenesystem/sceneobject.h:1166 */
	void SetMaterial(CMeshDrawPrimitive_t* , const IMaterial2* );
	/* ../public/scenesystem/sceneobject.h:1186 */
	bool HasCopyMaterial(const CMeshDrawPrimitive_t* );
	/* ../public/scenesystem/sceneobject.h:1191 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshDrawPrimitive_t* );
	CMeshDrawPrimitive_t& operator=(CMeshDrawPrimitive_t* , const CMeshDrawPrimitive_t& );
	void CMeshDrawPrimitive_t(CMeshDrawPrimitive_t* );
};

// <043ED653> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1113
// member functions: 9
// member variables: 16
// struct size: 120
struct CMeshDrawPrimitive_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1116 */
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	};
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	}; /* 0 16 */
	const class CSceneObject * m_pObject; /* 16 8 */
	const class IMaterial2 * m_pDrawMaterial; /* 24 8 */
	const class IMaterial2 * m_pKeyMaterial; /* 32 8 */
	uint64 m_nMaterialSimilarityKey; /* 40 8 */
	const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 48 8 */
	Vector4D m_vRGBAModulation; /* 56 16 */
	const class matrix3x4_t * m_pTransform; /* 72 8 */
	LightProbeVolumeBinding_t m_lpvBinding; /* 80 2 */
	uint32 m_nSortKey; /* 84 4 */
	uint16 m_nRequiredTextureSize; /* 88 2 */
	uint8 m_nObjectClassSettings; /* 90 1 */
	uint8 _pad; /* 91 1 */
	EBatchFlags m_nBatchFlags; /* 92 2 */
	int m_nBindlessPushConstants[3]; /* 96 12 */
	CRenderAttributes * m_pRenderAttributes; /* 112 8 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1153 */
	float GetAlphaFade(const CMeshDrawPrimitive_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1156 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1157 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , float, const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1158 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1160 */
	void SetMeshAndDrawCall(CMeshDrawPrimitive_t* , CMeshInstance* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1166 */
	void SetMaterial(CMeshDrawPrimitive_t* , const IMaterial2* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1186 */
	bool HasCopyMaterial(const CMeshDrawPrimitive_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1191 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshDrawPrimitive_t* );
	void CMeshDrawPrimitive_t(CMeshDrawPrimitive_t* );
};

// <058D87C6> ../../public/scenesystem/sceneobject.h:1113
// member functions: 9
// member variables: 16
// struct size: 120
struct CMeshDrawPrimitive_t {
	/* ../../public/scenesystem/sceneobject.h:1116 */
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	};
	union {
		struct {
			CMeshInstance * m_pMeshInstance; /* 0 8 */
			const class CMaterialDrawDescriptor * m_pDrawCall; /* 8 8 */
		}; /* 0 16 */
		struct {
			AggregateDrawData_t * m_pAggregateDrawData; /* 0 8 */
			void * _pUnused; /* 8 8 */
		}; /* 0 16 */
		struct {
			void * m_pPayload; /* 0 8 */
			float m_flDesaturationAmount; /* 8 4 */
		}; /* 0 16 */
	}; /* 0 16 */
	const class CSceneObject * m_pObject; /* 16 8 */
	const class IMaterial2 * m_pDrawMaterial; /* 24 8 */
	const class IMaterial2 * m_pKeyMaterial; /* 32 8 */
	uint64 m_nMaterialSimilarityKey; /* 40 8 */
	const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 48 8 */
	Vector4D m_vRGBAModulation; /* 56 16 */
	const class matrix3x4_t * m_pTransform; /* 72 8 */
	LightProbeVolumeBinding_t m_lpvBinding; /* 80 2 */
	uint32 m_nSortKey; /* 84 4 */
	uint16 m_nRequiredTextureSize; /* 88 2 */
	uint8 m_nObjectClassSettings; /* 90 1 */
	uint8 _pad; /* 91 1 */
	EBatchFlags m_nBatchFlags; /* 92 2 */
	int m_nBindlessPushConstants[3]; /* 96 12 */
	CRenderAttributes * m_pRenderAttributes; /* 112 8 */
	/* ../../public/scenesystem/sceneobject.h:1153 */
	float GetAlphaFade(const CMeshDrawPrimitive_t* );
	/* ../../public/scenesystem/sceneobject.h:1156 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* );
	/* ../../public/scenesystem/sceneobject.h:1157 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , float, const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../../public/scenesystem/sceneobject.h:1158 */
	void InitForObject(CMeshDrawPrimitive_t* , const CSceneObject* , const Vector4D& , const ISceneLayer* , const LightProbeVolumeBinding_t& );
	/* ../../public/scenesystem/sceneobject.h:1160 */
	void SetMeshAndDrawCall(CMeshDrawPrimitive_t* , CMeshInstance* , int);
	/* ../../public/scenesystem/sceneobject.h:1166 */
	void SetMaterial(CMeshDrawPrimitive_t* , const IMaterial2* );
	/* ../../public/scenesystem/sceneobject.h:1186 */
	bool HasCopyMaterial(const CMeshDrawPrimitive_t* );
	/* ../../public/scenesystem/sceneobject.h:1191 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshDrawPrimitive_t* );
	void CMeshDrawPrimitive_t(CMeshDrawPrimitive_t* );
};

// <06E29ED7> ../../public/scenesystem/sceneobject.h:1160
inline void CMeshDrawPrimitive_t::SetMeshAndDrawCall(CMeshInstance* pMeshInstance, int nDrawCall)
{
} /* size: 0 */

// <06E29EA4> ../../public/scenesystem/sceneobject.h:1166
// variable: 1
inline void CMeshDrawPrimitive_t::SetMaterial(const IMaterial2* pMaterial)
{
	const IMaterial2* pCopySource; // 1174
} /* size: 0, variables: 1 */

// <04020C1E> ../public/scenesystem/sceneobject.h:1191
inline void CMeshDrawPrimitive_t::GetDrawCall()
{
} /* size: 0 */

// <001063E5> ../public/scenesystem/sceneobject.h:1202
// member variables: 6
// struct size: 32
struct VisibleSceneObject_t {
	const class CSceneObjectReference_t * pRef; /* 0 8 */
	SceneObjectDescPerViewData_t * pSceneObjectData; /* 8 8 */
	float flAlphaFade; /* 16 4 */
	float flDistanceSquared; /* 20 4 */
	float flDistanceForCulling; /* 24 4 */
	float flScreenSize; /* 28 4 */
};

// <03F39CFD> ../public/scenesystem/sceneobject.h:1212
void ISceneObjectDesc::ISceneObjectDesc()
{
} /* size: 0 */

// <03F39CDF> ../public/scenesystem/sceneobject.h:1212
inline void ISceneObjectDesc::ISceneObjectDesc()
{
} /* size: 0 */

// <0010646B> ../public/scenesystem/sceneobject.h:1212
// member functions: 39
// member variable: 1
// vtable entries: 15
// class size: 8
class ISceneObjectDesc {
	/* ../public/scenesystem/sceneobject.h:1215 */
	struct GeneratePrimitivesArgs_t {
		const class ISceneView * m_pRootView; /* 0 8 */
		const class ISceneView * m_pView; /* 8 8 */
		const class ISceneLayer * m_pLayer; /* 16 8 */
		float m_flAlphaFadeModulation; /* 24 4 */
		LODGroupMask_t m_lodGroupMask; /* 28 1 */
		uint32 m_nSortKey; /* 32 4 */
		float m_flOneOverTanHorizFov; /* 36 4 */
		float m_flDistanceForCulling; /* 40 4 */
		float m_flScreenSize; /* 44 4 */
		SceneSystemPerFrameStats_t * m_pStats; /* 48 8 */
		float m_flTextureSizeFallbackTweakFactor; /* 56 4 */
		float m_flRootViewSizeThreshold; /* 60 4 */
		float m_flViewSizeThreshold; /* 64 4 */
		const uint32 * m_pVisBits; /* 72 8 */
		bool m_bUseSizeCull; /* 80 1 */
		bool m_bUseUserClipPlane; /* 81 1 */
		bool m_bUseVolumeCuller; /* 82 1 */
		int m_nJobID; /* 84 4 */
		/* ../public/scenesystem/sceneobject.h:1240 */
		bool WantAlphaBlended(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1241 */
		bool IsDepthRenderingPass(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1242 */
		bool WantFadeWithoutAlphaBlending(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1244 */
		uint16 ComputeRequiredTextureSizeFallback(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1259 */
		uint16 ComputeRequiredTextureSizeForUVDensity(const GeneratePrimitivesArgs_t* , float);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.ISceneObjectDesc; /* 0 8 */
	/* ../public/scenesystem/sceneobject.h:1276 */
	virtual const char* GetTypeName(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../public/scenesystem/sceneobject.h:1288 */
	virtual void DrawDebug(ISceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	/* ../public/scenesystem/sceneobject.h:1394 */
	virtual void GeneratePrimitives(ISceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(ISceneObjectDesc* , CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1307 */
	virtual bool OnSceneObjectVisibleInView(ISceneObjectDesc* , const ISceneView* , VisibleSceneObject_t* );
	/* ../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(ISceneObjectDesc* , const CSceneObject* , uint32);
	/* ../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const ISceneObjectDesc* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(ISceneObjectDesc* , CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(ISceneObjectDesc* );
protected:
	/* ../public/scenesystem/sceneobject.h:1336 */
	virtual CSceneObject* Create(ISceneObjectDesc* );
	virtual const char  * GetTypeName(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc11GetTypeNameEv */
	/* <6e2ae53> ../../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN16ISceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	/* <1955c76> ../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN16ISceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	virtual void DrawDebug(class ISceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN16ISceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	virtual void GeneratePrimitives(class ISceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN16ISceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKNS_24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	/* <37f026f> ../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	virtual bool OnSceneObjectVisibleInView(class ISceneObjectDesc *, const class ISceneView  *, class VisibleSceneObject_t *); /* linkage=_ZN16ISceneObjectDesc26OnSceneObjectVisibleInViewEPK10ISceneViewP20VisibleSceneObject_t */
	/* <2f2fc47> ../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc25OnBeginSubmitDisplayListsEv */
	/* <2f2fc71> ../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc35OnFinishingSubmissionOfDisplayListsEv */
	/* <2f2fc9b> ../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(class ISceneObjectDesc *, const class CSceneObject  *, uint32); /* linkage=_ZN16ISceneObjectDesc13ModifySortKeyEPK12CSceneObjectj */
	/* <1356cd8> ../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const class ISceneObjectDesc  *, class CUtlStringToken); /* linkage=_ZNK16ISceneObjectDesc11HasPropertyE15CUtlStringToken */
	/* <3c460b8> ../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc33UpdateBoundingBoxToMatchTransformEP12CSceneObject */
	/* <3566c12> ../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc20OnAddedToSceneSystemEv */
	/* <3566c3c> ../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc24OnRemovedFromSceneSystemEv */
	virtual class CSceneObject * Create(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc6CreateEv */
	void ~ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescD4Ev */
	void ISceneObjectDesc(class ISceneObjectDesc *, class ISceneObjectDesc &); /* linkage=_ZN16ISceneObjectDescC4EOS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *, const class ISceneObjectDesc  &); /* linkage=_ZN16ISceneObjectDescC4ERKS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescC4Ev */
};

// <01A97FCD> ../public/scenesystem/sceneobject.h:1212
// member functions: 43
// member variable: 1
// vtable entries: 15
// class size: 8
class ISceneObjectDesc {
	/* ../public/scenesystem/sceneobject.h:1215 */
	struct GeneratePrimitivesArgs_t {
		const class ISceneView * m_pRootView; /* 0 8 */
		const class ISceneView * m_pView; /* 8 8 */
		const class ISceneLayer * m_pLayer; /* 16 8 */
		float m_flAlphaFadeModulation; /* 24 4 */
		LODGroupMask_t m_lodGroupMask; /* 28 1 */
		uint32 m_nSortKey; /* 32 4 */
		float m_flOneOverTanHorizFov; /* 36 4 */
		float m_flDistanceForCulling; /* 40 4 */
		float m_flScreenSize; /* 44 4 */
		SceneSystemPerFrameStats_t * m_pStats; /* 48 8 */
		float m_flTextureSizeFallbackTweakFactor; /* 56 4 */
		float m_flRootViewSizeThreshold; /* 60 4 */
		float m_flViewSizeThreshold; /* 64 4 */
		const uint32 * m_pVisBits; /* 72 8 */
		bool m_bUseSizeCull; /* 80 1 */
		bool m_bUseUserClipPlane; /* 81 1 */
		bool m_bUseVolumeCuller; /* 82 1 */
		int m_nJobID; /* 84 4 */
		/* ../public/scenesystem/sceneobject.h:1240 */
		bool WantAlphaBlended(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1241 */
		bool IsDepthRenderingPass(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1242 */
		bool WantFadeWithoutAlphaBlending(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1244 */
		uint16 ComputeRequiredTextureSizeFallback(const GeneratePrimitivesArgs_t* );
		/* ../public/scenesystem/sceneobject.h:1259 */
		uint16 ComputeRequiredTextureSizeForUVDensity(const GeneratePrimitivesArgs_t* , float);
	};
	/* tag__fprintf: const_type tag not supported! */;
	void ~ISceneObjectDesc(ISceneObjectDesc* );
	void ISceneObjectDesc(ISceneObjectDesc* , ISceneObjectDesc& );
	void ISceneObjectDesc(ISceneObjectDesc* , const ISceneObjectDesc& );
	void ISceneObjectDesc(ISceneObjectDesc* );
	int ()(void) * * _vptr.ISceneObjectDesc; /* 0 8 */
	/* ../public/scenesystem/sceneobject.h:1276 */
	virtual const char* GetTypeName(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../public/scenesystem/sceneobject.h:1288 */
	virtual void DrawDebug(ISceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	/* ../public/scenesystem/sceneobject.h:1394 */
	virtual void GeneratePrimitives(ISceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(ISceneObjectDesc* , CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1307 */
	virtual bool OnSceneObjectVisibleInView(ISceneObjectDesc* , const ISceneView* , VisibleSceneObject_t* );
	/* ../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(ISceneObjectDesc* , const CSceneObject* , uint32);
	/* ../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const ISceneObjectDesc* , CUtlStringToken);
	/* ../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(ISceneObjectDesc* , CSceneObject* );
	/* ../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(ISceneObjectDesc* );
	/* ../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(ISceneObjectDesc* );
protected:
	/* ../public/scenesystem/sceneobject.h:1336 */
	virtual CSceneObject* Create(ISceneObjectDesc* );
	virtual const char  * GetTypeName(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc11GetTypeNameEv */
	/* <6e2ae53> ../../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN16ISceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	/* <1955c76> ../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN16ISceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	virtual void DrawDebug(class ISceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN16ISceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	virtual void GeneratePrimitives(class ISceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN16ISceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKNS_24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	/* <37f026f> ../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	virtual bool OnSceneObjectVisibleInView(class ISceneObjectDesc *, const class ISceneView  *, class VisibleSceneObject_t *); /* linkage=_ZN16ISceneObjectDesc26OnSceneObjectVisibleInViewEPK10ISceneViewP20VisibleSceneObject_t */
	/* <2f2fc47> ../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc25OnBeginSubmitDisplayListsEv */
	/* <2f2fc71> ../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc35OnFinishingSubmissionOfDisplayListsEv */
	/* <2f2fc9b> ../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(class ISceneObjectDesc *, const class CSceneObject  *, uint32); /* linkage=_ZN16ISceneObjectDesc13ModifySortKeyEPK12CSceneObjectj */
	/* <1356cd8> ../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const class ISceneObjectDesc  *, class CUtlStringToken); /* linkage=_ZNK16ISceneObjectDesc11HasPropertyE15CUtlStringToken */
	/* <3c460b8> ../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc33UpdateBoundingBoxToMatchTransformEP12CSceneObject */
	/* <3566c12> ../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc20OnAddedToSceneSystemEv */
	/* <3566c3c> ../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc24OnRemovedFromSceneSystemEv */
	virtual class CSceneObject * Create(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc6CreateEv */
	void ~ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescD4Ev */
	void ISceneObjectDesc(class ISceneObjectDesc *, class ISceneObjectDesc &); /* linkage=_ZN16ISceneObjectDescC4EOS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *, const class ISceneObjectDesc  &); /* linkage=_ZN16ISceneObjectDescC4ERKS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescC4Ev */
};

// <04404FE4> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1212
// member functions: 39
// member variable: 1
// vtable entries: 15
// class size: 8
class ISceneObjectDesc {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1215 */
	struct GeneratePrimitivesArgs_t {
		const class ISceneView * m_pRootView; /* 0 8 */
		const class ISceneView * m_pView; /* 8 8 */
		const class ISceneLayer * m_pLayer; /* 16 8 */
		float m_flAlphaFadeModulation; /* 24 4 */
		LODGroupMask_t m_lodGroupMask; /* 28 1 */
		uint32 m_nSortKey; /* 32 4 */
		float m_flOneOverTanHorizFov; /* 36 4 */
		float m_flDistanceForCulling; /* 40 4 */
		float m_flScreenSize; /* 44 4 */
		SceneSystemPerFrameStats_t * m_pStats; /* 48 8 */
		float m_flTextureSizeFallbackTweakFactor; /* 56 4 */
		float m_flRootViewSizeThreshold; /* 60 4 */
		float m_flViewSizeThreshold; /* 64 4 */
		const uint32 * m_pVisBits; /* 72 8 */
		bool m_bUseSizeCull; /* 80 1 */
		bool m_bUseUserClipPlane; /* 81 1 */
		bool m_bUseVolumeCuller; /* 82 1 */
		int m_nJobID; /* 84 4 */
		/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1240 */
		bool WantAlphaBlended(const GeneratePrimitivesArgs_t* );
		/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1241 */
		bool IsDepthRenderingPass(const GeneratePrimitivesArgs_t* );
		/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1242 */
		bool WantFadeWithoutAlphaBlending(const GeneratePrimitivesArgs_t* );
		/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1244 */
		uint16 ComputeRequiredTextureSizeFallback(const GeneratePrimitivesArgs_t* );
		/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1259 */
		uint16 ComputeRequiredTextureSizeForUVDensity(const GeneratePrimitivesArgs_t* , float);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.ISceneObjectDesc; /* 0 8 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1276 */
	virtual const char* GetTypeName(ISceneObjectDesc* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1288 */
	virtual void DrawDebug(ISceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1394 */
	virtual void GeneratePrimitives(ISceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(ISceneObjectDesc* , CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1307 */
	virtual bool OnSceneObjectVisibleInView(ISceneObjectDesc* , const ISceneView* , VisibleSceneObject_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(ISceneObjectDesc* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(ISceneObjectDesc* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(ISceneObjectDesc* , const CSceneObject* , uint32);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const ISceneObjectDesc* , CUtlStringToken);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(ISceneObjectDesc* , CSceneObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(ISceneObjectDesc* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(ISceneObjectDesc* );
protected:
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:1336 */
	virtual CSceneObject* Create(ISceneObjectDesc* );
	virtual const char  * GetTypeName(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc11GetTypeNameEv */
	/* <6e2ae53> ../../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN16ISceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	/* <1955c76> ../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN16ISceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	virtual void DrawDebug(class ISceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN16ISceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	virtual void GeneratePrimitives(class ISceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN16ISceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKNS_24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	/* <37f026f> ../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	virtual bool OnSceneObjectVisibleInView(class ISceneObjectDesc *, const class ISceneView  *, class VisibleSceneObject_t *); /* linkage=_ZN16ISceneObjectDesc26OnSceneObjectVisibleInViewEPK10ISceneViewP20VisibleSceneObject_t */
	/* <2f2fc47> ../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc25OnBeginSubmitDisplayListsEv */
	/* <2f2fc71> ../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc35OnFinishingSubmissionOfDisplayListsEv */
	/* <2f2fc9b> ../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(class ISceneObjectDesc *, const class CSceneObject  *, uint32); /* linkage=_ZN16ISceneObjectDesc13ModifySortKeyEPK12CSceneObjectj */
	/* <1356cd8> ../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const class ISceneObjectDesc  *, class CUtlStringToken); /* linkage=_ZNK16ISceneObjectDesc11HasPropertyE15CUtlStringToken */
	/* <3c460b8> ../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc33UpdateBoundingBoxToMatchTransformEP12CSceneObject */
	/* <3566c12> ../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc20OnAddedToSceneSystemEv */
	/* <3566c3c> ../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc24OnRemovedFromSceneSystemEv */
	virtual class CSceneObject * Create(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc6CreateEv */
	void ~ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescD4Ev */
	void ISceneObjectDesc(class ISceneObjectDesc *, class ISceneObjectDesc &); /* linkage=_ZN16ISceneObjectDescC4EOS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *, const class ISceneObjectDesc  &); /* linkage=_ZN16ISceneObjectDescC4ERKS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescC4Ev */
};

// <058EB125> ../../public/scenesystem/sceneobject.h:1212
// member functions: 39
// member variable: 1
// vtable entries: 15
// class size: 8
class ISceneObjectDesc {
	/* ../../public/scenesystem/sceneobject.h:1215 */
	struct GeneratePrimitivesArgs_t {
		const class ISceneView * m_pRootView; /* 0 8 */
		const class ISceneView * m_pView; /* 8 8 */
		const class ISceneLayer * m_pLayer; /* 16 8 */
		float m_flAlphaFadeModulation; /* 24 4 */
		LODGroupMask_t m_lodGroupMask; /* 28 1 */
		uint32 m_nSortKey; /* 32 4 */
		float m_flOneOverTanHorizFov; /* 36 4 */
		float m_flDistanceForCulling; /* 40 4 */
		float m_flScreenSize; /* 44 4 */
		SceneSystemPerFrameStats_t * m_pStats; /* 48 8 */
		float m_flTextureSizeFallbackTweakFactor; /* 56 4 */
		float m_flRootViewSizeThreshold; /* 60 4 */
		float m_flViewSizeThreshold; /* 64 4 */
		const uint32 * m_pVisBits; /* 72 8 */
		bool m_bUseSizeCull; /* 80 1 */
		bool m_bUseUserClipPlane; /* 81 1 */
		bool m_bUseVolumeCuller; /* 82 1 */
		int m_nJobID; /* 84 4 */
		/* ../../public/scenesystem/sceneobject.h:1240 */
		bool WantAlphaBlended(const GeneratePrimitivesArgs_t* );
		/* ../../public/scenesystem/sceneobject.h:1241 */
		bool IsDepthRenderingPass(const GeneratePrimitivesArgs_t* );
		/* ../../public/scenesystem/sceneobject.h:1242 */
		bool WantFadeWithoutAlphaBlending(const GeneratePrimitivesArgs_t* );
		/* ../../public/scenesystem/sceneobject.h:1244 */
		uint16 ComputeRequiredTextureSizeFallback(const GeneratePrimitivesArgs_t* );
		/* ../../public/scenesystem/sceneobject.h:1259 */
		uint16 ComputeRequiredTextureSizeForUVDensity(const GeneratePrimitivesArgs_t* , float);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.ISceneObjectDesc; /* 0 8 */
	/* ../../public/scenesystem/sceneobject.h:1276 */
	virtual const char* GetTypeName(ISceneObjectDesc* );
	/* ../../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& );
	/* ../../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(ISceneObjectDesc* , IRenderContext* , CMeshDrawPrimitive_t* , int, const ISceneView* , ISceneLayer* , SceneSystemPerFrameStats_t& , const IMaterial2* );
	/* ../../public/scenesystem/sceneobject.h:1288 */
	virtual void DrawDebug(ISceneObjectDesc* , IRenderContext* , const CMeshDrawPrimitive_t* , const ISceneView* , ISceneLayer* , int);
	/* ../../public/scenesystem/sceneobject.h:1394 */
	virtual void GeneratePrimitives(ISceneObjectDesc* , CSceneObject* , const GeneratePrimitivesArgs_t& , GeneratePrimitivesFlags_t, CMeshPrimitiveOutputBuffer& );
	/* ../../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(ISceneObjectDesc* , CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1307 */
	virtual bool OnSceneObjectVisibleInView(ISceneObjectDesc* , const ISceneView* , VisibleSceneObject_t* );
	/* ../../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(ISceneObjectDesc* );
	/* ../../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(ISceneObjectDesc* );
	/* ../../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(ISceneObjectDesc* , const CSceneObject* , uint32);
	/* ../../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const ISceneObjectDesc* , CUtlStringToken);
	/* ../../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(ISceneObjectDesc* , CSceneObject* );
	/* ../../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(ISceneObjectDesc* );
	/* ../../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(ISceneObjectDesc* );
protected:
	/* ../../public/scenesystem/sceneobject.h:1336 */
	virtual CSceneObject* Create(ISceneObjectDesc* );
	virtual const char  * GetTypeName(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc11GetTypeNameEv */
	/* <6e2ae53> ../../public/scenesystem/sceneobject.h:1278 */
	virtual void DrawArray(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN16ISceneObjectDesc9DrawArrayEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_t */
	/* <1955c76> ../public/scenesystem/sceneobject.h:1281 */
	virtual void DrawArrayExt(class ISceneObjectDesc *, class IRenderContext *, class CMeshDrawPrimitive_t *, int, const class ISceneView  *, class ISceneLayer *, class SceneSystemPerFrameStats_t &, const class IMaterial2  *); /* linkage=_ZN16ISceneObjectDesc12DrawArrayExtEP14IRenderContextP20CMeshDrawPrimitive_tiPK10ISceneViewP11ISceneLayerR26SceneSystemPerFrameStats_tPK10IMaterial2 */
	virtual void DrawDebug(class ISceneObjectDesc *, class IRenderContext *, const class CMeshDrawPrimitive_t  *, const class ISceneView  *, class ISceneLayer *, int); /* linkage=_ZN16ISceneObjectDesc9DrawDebugEP14IRenderContextPK20CMeshDrawPrimitive_tPK10ISceneViewP11ISceneLayeri */
	virtual void GeneratePrimitives(class ISceneObjectDesc *, class CSceneObject *, const class GeneratePrimitivesArgs_t  &, enum GeneratePrimitivesFlags_t, class CMeshPrimitiveOutputBuffer &); /* linkage=_ZN16ISceneObjectDesc18GeneratePrimitivesEP12CSceneObjectRKNS_24GeneratePrimitivesArgs_tE25GeneratePrimitivesFlags_tR26CMeshPrimitiveOutputBuffer */
	/* <37f026f> ../public/scenesystem/sceneobject.h:1296 */
	virtual void DeleteNonPooledObject(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc21DeleteNonPooledObjectEP12CSceneObject */
	virtual bool OnSceneObjectVisibleInView(class ISceneObjectDesc *, const class ISceneView  *, class VisibleSceneObject_t *); /* linkage=_ZN16ISceneObjectDesc26OnSceneObjectVisibleInViewEPK10ISceneViewP20VisibleSceneObject_t */
	/* <2f2fc47> ../public/scenesystem/sceneobject.h:1312 */
	virtual void OnBeginSubmitDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc25OnBeginSubmitDisplayListsEv */
	/* <2f2fc71> ../public/scenesystem/sceneobject.h:1315 */
	virtual void OnFinishingSubmissionOfDisplayLists(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc35OnFinishingSubmissionOfDisplayListsEv */
	/* <2f2fc9b> ../public/scenesystem/sceneobject.h:1318 */
	virtual uint32 ModifySortKey(class ISceneObjectDesc *, const class CSceneObject  *, uint32); /* linkage=_ZN16ISceneObjectDesc13ModifySortKeyEPK12CSceneObjectj */
	/* <1356cd8> ../public/scenesystem/sceneobject.h:1324 */
	virtual bool HasProperty(const class ISceneObjectDesc  *, class CUtlStringToken); /* linkage=_ZNK16ISceneObjectDesc11HasPropertyE15CUtlStringToken */
	/* <3c460b8> ../public/scenesystem/sceneobject.h:1326 */
	virtual void UpdateBoundingBoxToMatchTransform(class ISceneObjectDesc *, class CSceneObject *); /* linkage=_ZN16ISceneObjectDesc33UpdateBoundingBoxToMatchTransformEP12CSceneObject */
	/* <3566c12> ../public/scenesystem/sceneobject.h:1329 */
	virtual void OnAddedToSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc20OnAddedToSceneSystemEv */
	/* <3566c3c> ../public/scenesystem/sceneobject.h:1332 */
	virtual void OnRemovedFromSceneSystem(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc24OnRemovedFromSceneSystemEv */
	virtual class CSceneObject * Create(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDesc6CreateEv */
	void ~ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescD4Ev */
	void ISceneObjectDesc(class ISceneObjectDesc *, class ISceneObjectDesc &); /* linkage=_ZN16ISceneObjectDescC4EOS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *, const class ISceneObjectDesc  &); /* linkage=_ZN16ISceneObjectDescC4ERKS_ */
	void ISceneObjectDesc(class ISceneObjectDesc *); /* linkage=_ZN16ISceneObjectDescC4Ev */
};

// <04020BD7> ../public/scenesystem/sceneobject.h:1240
inline void GeneratePrimitivesArgs_t::WantAlphaBlended()
{
} /* size: 0 */

// <04020BBE> ../public/scenesystem/sceneobject.h:1241
inline void GeneratePrimitivesArgs_t::IsDepthRenderingPass()
{
} /* size: 0 */

// <06E29E44> ../../public/scenesystem/sceneobject.h:1244
// variable: 1
inline void GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback()
{
	float fFallback; // 1255
} /* size: 0, variables: 1 */

// <04020B1D> ../public/scenesystem/sceneobject.h:1259
// variables: 2
inline void GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeForUVDensity(float fUVDensity)
{
	{
		float flViewAreaScale; // 1267
		float flWorldAreaToScreenArea; // 1268
	}
} /* size: 0 */

// <06E29E16> ../../public/scenesystem/sceneobject.h:1276
void ISceneObjectDesc::GetTypeName()
{
} /* size: 0 */

// <06E2AE53> ../../public/scenesystem/sceneobject.h:1278
void ISceneObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats)
{
} /* size: 5 */

// <06E29DAF> ../../public/scenesystem/sceneobject.h:1278
inline void ISceneObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats)
{
} /* size: 0 */

// <06E29CDE> ../../public/scenesystem/sceneobject.h:1281
void ISceneObjectDesc::DrawArrayExt(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats, const IMaterial2* pMaterial)
{
} /* size: 37 */

// <01951AA6> ../public/scenesystem/sceneobject.h:1281
inline void ISceneObjectDesc::DrawArrayExt(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats, const IMaterial2* pMaterial)
{
} /* size: 0 */

// <06E29C65> ../../public/scenesystem/sceneobject.h:1288
void ISceneObjectDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
} /* size: 5 */

// <06E29C08> ../../public/scenesystem/sceneobject.h:1296
void ISceneObjectDesc::DeleteNonPooledObject(CSceneObject* pObject)
{
} /* size: 25 */

// <037EAFC4> ../public/scenesystem/sceneobject.h:1296
inline void ISceneObjectDesc::DeleteNonPooledObject(CSceneObject* pObject)
{
} /* size: 0 */

// <06E29BBC> ../../public/scenesystem/sceneobject.h:1307
void ISceneObjectDesc::OnSceneObjectVisibleInView(const ISceneView* pView, VisibleSceneObject_t* pVisible)
{
} /* size: 7 */

// <06E29B8E> ../../public/scenesystem/sceneobject.h:1312
void ISceneObjectDesc::OnBeginSubmitDisplayLists()
{
} /* size: 5 */

// <02F242CE> ../public/scenesystem/sceneobject.h:1312
inline void ISceneObjectDesc::OnBeginSubmitDisplayLists()
{
} /* size: 0 */

// <06E29B60> ../../public/scenesystem/sceneobject.h:1315
void ISceneObjectDesc::OnFinishingSubmissionOfDisplayLists()
{
} /* size: 5 */

// <02F242B5> ../public/scenesystem/sceneobject.h:1315
inline void ISceneObjectDesc::OnFinishingSubmissionOfDisplayLists()
{
} /* size: 0 */

// <06E29B14> ../../public/scenesystem/sceneobject.h:1318
void ISceneObjectDesc::ModifySortKey(const CSceneObject* pObject, uint32 nOriginalSortKey)
{
} /* size: 7 */

// <02F24282> ../public/scenesystem/sceneobject.h:1318
inline void ISceneObjectDesc::ModifySortKey(const CSceneObject* pObject, uint32 nOriginalSortKey)
{
} /* size: 0 */

// <06E29AD7> ../../public/scenesystem/sceneobject.h:1324
void ISceneObjectDesc::HasProperty(CUtlStringToken nToken)
{
} /* size: 7 */

// <0134872C> ../public/scenesystem/sceneobject.h:1324
inline void ISceneObjectDesc::HasProperty(CUtlStringToken nToken)
{
} /* size: 0 */

// <06E29A9A> ../../public/scenesystem/sceneobject.h:1326
void ISceneObjectDesc::UpdateBoundingBoxToMatchTransform(CSceneObject* pObj)
{
} /* size: 5 */

// <03C42E77> ../public/scenesystem/sceneobject.h:1326
inline void ISceneObjectDesc::UpdateBoundingBoxToMatchTransform(CSceneObject* pObj)
{
} /* size: 0 */

// <06E29A6C> ../../public/scenesystem/sceneobject.h:1329
void ISceneObjectDesc::OnAddedToSceneSystem()
{
} /* size: 5 */

// <03560122> ../public/scenesystem/sceneobject.h:1329
inline void ISceneObjectDesc::OnAddedToSceneSystem()
{
} /* size: 0 */

// <06E29A3E> ../../public/scenesystem/sceneobject.h:1332
void ISceneObjectDesc::OnRemovedFromSceneSystem()
{
} /* size: 5 */

// <03560109> ../public/scenesystem/sceneobject.h:1332
inline void ISceneObjectDesc::OnRemovedFromSceneSystem()
{
} /* size: 0 */

// <0010645A> ../public/scenesystem/sceneobject.h:1347
// struct size: 1
struct SceneObjectDescPerViewData_t {
};

// <03B936D9> ../public/scenesystem/sceneobject.h:1351
void CMeshPrimitiveOutputBuffer::CMeshPrimitiveOutputBuffer()
{
} /* size: 0 */

// <03B936BC> ../public/scenesystem/sceneobject.h:1351
inline void CMeshPrimitiveOutputBuffer::CMeshPrimitiveOutputBuffer()
{
} /* size: 0 */

// <03B936A5> ../public/scenesystem/sceneobject.h:1351
void CMeshPrimitiveOutputBuffer::~CMeshPrimitiveOutputBuffer()
{
} /* size: 0 */

// <03B93688> ../public/scenesystem/sceneobject.h:1351
inline void CMeshPrimitiveOutputBuffer::~CMeshPrimitiveOutputBuffer()
{
} /* size: 0 */

// <00108152> ../public/scenesystem/sceneobject.h:1351
// member functions: 14
// member variables: 4
// class size: 2,448
class CMeshPrimitiveOutputBuffer {
private:
	CMeshDrawPrimitive_t * m_pFirstPrimitives; /* 0 8 */
	int m_nFirstPrimitives; /* 8 4 */
	int m_nFirstUsed; /* 12 4 */
	CUtlVectorFixedGrowable<CMeshDrawPrimitive_t, 20> m_overflowPrimitives __attribute__((__aligned__(8))); /* 16 2432 */
	/* ../public/scenesystem/sceneobject.h:1359 */
	void SetFirstBuffer(CMeshPrimitiveOutputBuffer* , CMeshDrawPrimitive_t* , int);
	/* ../public/scenesystem/sceneobject.h:1366 */
	int FirstCount(const CMeshPrimitiveOutputBuffer* );
	/* ../public/scenesystem/sceneobject.h:1367 */
	int OverflowCount(const CMeshPrimitiveOutputBuffer* );
	/* ../public/scenesystem/sceneobject.h:1369 */
	CMeshDrawPrimitive_t* FirstBase(CMeshPrimitiveOutputBuffer* );
	/* ../public/scenesystem/sceneobject.h:1370 */
	CMeshDrawPrimitive_t* OverflowBase(CMeshPrimitiveOutputBuffer* );
	/* ../public/scenesystem/sceneobject.h:1372 */
	CMeshDrawPrimitive_t& Next(CMeshPrimitiveOutputBuffer* );
	void SetFirstBuffer(class CMeshPrimitiveOutputBuffer *, class CMeshDrawPrimitive_t *, int); /* linkage=_ZN26CMeshPrimitiveOutputBuffer14SetFirstBufferEP20CMeshDrawPrimitive_ti */
	int FirstCount(const class CMeshPrimitiveOutputBuffer  *); /* linkage=_ZNK26CMeshPrimitiveOutputBuffer10FirstCountEv */
	int OverflowCount(const class CMeshPrimitiveOutputBuffer  *); /* linkage=_ZNK26CMeshPrimitiveOutputBuffer13OverflowCountEv */
	class CMeshDrawPrimitive_t * FirstBase(class CMeshPrimitiveOutputBuffer *); /* linkage=_ZN26CMeshPrimitiveOutputBuffer9FirstBaseEv */
	class CMeshDrawPrimitive_t * OverflowBase(class CMeshPrimitiveOutputBuffer *); /* linkage=_ZN26CMeshPrimitiveOutputBuffer12OverflowBaseEv */
	class CMeshDrawPrimitive_t & Next(class CMeshPrimitiveOutputBuffer *); /* linkage=_ZN26CMeshPrimitiveOutputBuffer4NextEv */
	void ~CMeshPrimitiveOutputBuffer(class CMeshPrimitiveOutputBuffer *); /* linkage=_ZN26CMeshPrimitiveOutputBufferD4Ev */
	void CMeshPrimitiveOutputBuffer(class CMeshPrimitiveOutputBuffer *); /* linkage=_ZN26CMeshPrimitiveOutputBufferC4Ev */
} __attribute__((__aligned__(8)));

// <02F2418E> ../public/scenesystem/sceneobject.h:1359
inline void CMeshPrimitiveOutputBuffer::SetFirstBuffer(CMeshDrawPrimitive_t* pFirstPrims, int nFirstPrims)
{
} /* size: 0 */

// <02F24175> ../public/scenesystem/sceneobject.h:1366
inline void CMeshPrimitiveOutputBuffer::FirstCount()
{
} /* size: 0 */

// <02F2415C> ../public/scenesystem/sceneobject.h:1367
inline void CMeshPrimitiveOutputBuffer::OverflowCount()
{
} /* size: 0 */

// <02F2412A> ../public/scenesystem/sceneobject.h:1370
inline void CMeshPrimitiveOutputBuffer::OverflowBase()
{
} /* size: 0 */

// <06E29A25> ../../public/scenesystem/sceneobject.h:1372
inline void CMeshPrimitiveOutputBuffer::Next()
{
} /* size: 0 */

// <03B8CE16> ../public/scenesystem/sceneobject.h:1384
// variable: 1
inline void CMeshPrimitiveOutputBuffer::ForEach<CMDL::AppendDrawPrimitives(const class& f)
{
	{
		int i; // 1386
	}
} /* size: 0 */

// <06E29320> ../../public/scenesystem/sceneobject.h:1394
// variable: 1
// function calls: 31
void ISceneObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& gpArgs, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
	CMeshDrawPrimitive_t& out; // 1401
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
	CMeshPrimitiveOutputBuffer::Next(); // 1401
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1402
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 2490
	LightProbeVolumeBinding_t::Invalidate(); // 2492
	Vector4D::operator=(
			const Vector4D& vOther);  // 2494
	CMeshDrawPrimitive_t::InitForObject(
			const CSceneObject* pObj,
			const Vector4D& vRGBAModulation,
			const ISceneLayer* pLayer);  // 1402
	CSceneObject::IsNotBatchable(); // 1405
	CSceneObject::GetFlags(); // 1407
	operator|=(EBatchFlags& a,
			EBatchFlags b);  // 1409
	GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 1412
	CSceneObject::GetTransform(); // 1414
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 1416
} /* size: 700, variables: 1, inline expansions: 31 (2174 bytes) */

// <040B343D> ../public/scenesystem/sceneobject.h:1394
// variable: 1
// function calls: 32
void ISceneObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& gpArgs, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
	CMeshDrawPrimitive_t& out; // 1401
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
	LightProbeVolumeBinding_t::LightProbeVolumeBinding_t(); // 1113
	Vector4D::Vector4D(); // 1113
	CMeshDrawPrimitive_t::CMeshDrawPrimitive_t(); // 1479
	Construct<CMeshDrawPrimitive_t>(CMeshDrawPrimitive_t* pMemory); // 1148
	CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::Element(
		int i);  // 1148
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::AddToTail(); // 1380
	CUtlMemory<CMeshDrawPrimitive_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 20, int> >::operator[](
			int i);  // 1380
	CMeshPrimitiveOutputBuffer::Next(); // 1372
	CMeshPrimitiveOutputBuffer::Next(); // 1401
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1402
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 2490
	LightProbeVolumeBinding_t::Invalidate(); // 2492
	Vector4D::operator=(
			const Vector4D& vOther);  // 2494
	CMeshDrawPrimitive_t::InitForObject(
			const CSceneObject* pObj,
			const Vector4D& vRGBAModulation,
			const ISceneLayer* pLayer);  // 1402
	CSceneObject::IsNotBatchable(); // 1405
	CSceneObject::GetFlags(); // 1407
	operator|=(EBatchFlags& a,
			EBatchFlags b);  // 1409
	GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 1412
	CSceneObject::GetTransform(); // 1414
	CSceneSystem::GetObjectSettings(
				const CSceneObject* pObj);  // 1415
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 1416
} /* size: 0, variables: 1, inline expansions: 32 (0 bytes) */

// <04020070> ../public/scenesystem/sceneobject.h:1394
// variable: 1
// function calls: 28
void ISceneObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& gpArgs, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
	CMeshDrawPrimitive_t& out; // 1401
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
	CMeshPrimitiveOutputBuffer::Next(); // 1401
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1402
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 2490
	LightProbeVolumeBinding_t::Invalidate(); // 2492
	Vector4D::operator=(
			const Vector4D& vOther);  // 2494
	CMeshDrawPrimitive_t::InitForObject(
			const CSceneObject* pObj,
			const Vector4D& vRGBAModulation,
			const ISceneLayer* pLayer);  // 1402
	CSceneObject::IsNotBatchable(); // 1405
	CSceneObject::GetFlags(); // 1407
	operator|=(EBatchFlags& a,
			EBatchFlags b);  // 1409
	GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 1412
	CSceneObject::GetTransform(); // 1414
	CSceneSystem::GetObjectSettings(
				const CSceneObject* pObj);  // 1415
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 1416
} /* size: 0, variables: 1, inline expansions: 28 (0 bytes) */

// <03C4280B> ../public/scenesystem/sceneobject.h:1394
// variable: 1
// function calls: 27
void ISceneObjectDesc::GeneratePrimitives(CSceneObject* pObject, const GeneratePrimitivesArgs_t& gpArgs, GeneratePrimitivesFlags_t nGPFlags, CMeshPrimitiveOutputBuffer& outBuf)
{
	CMeshDrawPrimitive_t& out; // 1401
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
	CMeshPrimitiveOutputBuffer::Next(); // 1401
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1402
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 2490
	LightProbeVolumeBinding_t::Invalidate(); // 2492
	Vector4D::operator=(
			const Vector4D& vOther);  // 2494
	CMeshDrawPrimitive_t::InitForObject(
			const CSceneObject* pObj,
			const Vector4D& vRGBAModulation,
			const ISceneLayer* pLayer);  // 1402
	CSceneObject::IsNotBatchable(); // 1405
	CSceneObject::GetFlags(); // 1407
	operator|=(EBatchFlags& a,
			EBatchFlags b);  // 1409
	GeneratePrimitivesArgs_t::ComputeRequiredTextureSizeFallback(); // 1412
	CSceneObject::GetTransform(); // 1414
	CMeshDrawPrimitive_t::SetMaterial(
			const IMaterial2* pMaterial);  // 1416
} /* size: 0, variables: 1, inline expansions: 27 (0 bytes) */

// <040B3389> ../public/scenesystem/sceneobject.h:1428
void CSceneObject::CSceneObject()
{
} /* size: 0 */

// <040B3370> ../public/scenesystem/sceneobject.h:1428
inline void CSceneObject::CSceneObject()
{
} /* size: 0 */

// <06E28F3A> ../../public/scenesystem/sceneobject.h:1433
// function calls: 18
void CSceneObject::~CSceneObject()
{
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
} /* size: 169, inline expansions: 18 (556 bytes) */

// <06E28B0F> ../../public/scenesystem/sceneobject.h:1433
// function calls: 20
void CSceneObject::~CSceneObject()
{
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
	CSceneObject::~CSceneObject(); // 1436
} /* size: 177, inline expansions: 20 (669 bytes) */

// <06E28AF6> ../../public/scenesystem/sceneobject.h:1433
inline void CSceneObject::~CSceneObject()
{
} /* size: 0 */

// <0355F4C0> ../public/scenesystem/sceneobject.h:1433
// function calls: 19
void CSceneObject::~CSceneObject()
{
	CSceneSystem::DestructSceneObject(
				CSceneObject* pObj);  // 1435
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
} /* size: 0, inline expansions: 19 (0 bytes) */

// <0355F041> ../public/scenesystem/sceneobject.h:1433
// function calls: 21
void CSceneObject::~CSceneObject()
{
	CSceneSystem::DestructSceneObject(
				CSceneObject* pObj);  // 1435
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
	CSceneObject::~CSceneObject(); // 1436
} /* size: 0, inline expansions: 21 (0 bytes) */

// <0355EFF5> ../public/scenesystem/sceneobject.h:1439
inline void CSceneObject::InitObject(ISceneWorld* pWorld, ESceneObjectFlags nFlags)
{
} /* size: 0 */

// <0355EFB2> ../public/scenesystem/sceneobject.h:1446
// variables: 2
inline void CSceneObject::CreateDefaultPVSNode()
{
	const char   __FUNCTION__; // 20635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1448
	}
} /* size: 0, variables: 1 */

// <0355EF72> ../public/scenesystem/sceneobject.h:1453
// variables: 2
inline void CSceneObject::RecomputePVS(IPVS* pPVS)
{
	Vector vMins; // 1462
	Vector vMaxs; // 1462
} /* size: 0, variables: 2 */

// <0134773E> ../public/scenesystem/sceneobject.h:1469
inline void CSceneObject::SetCullDistance(float flDistance)
{
} /* size: 0 */

// <02F230FF> ../public/scenesystem/sceneobject.h:1474
inline void CSceneObject::GetObjectClass()
{
} /* size: 0 */

// <064690EA> ../public/scenesystem/sceneobject.h:1479
inline void CSceneObject::SetObjectClass(uint8 nClass)
{
} /* size: 0 */

// <00B47FA3> ../public/scenesystem/sceneobject.h:1522
// variables: 26
// function calls: 63
void CSceneObject::SetFloatValue(const CUtlStringToken& attrName, float flValue)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1525
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
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
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34335
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34345
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34355
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
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
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 551
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
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58014
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58024
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58034
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
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	CRenderAttributes::SetFloatValue(
			CUtlStringToken nTokenID,
			float flValue);  // 1526
} /* size: 535, inline expansions: 20 (2195 bytes) */

// <02F230CC> ../public/scenesystem/sceneobject.h:1529
inline void CSceneObject::GetFloatValue(const CUtlStringToken& attrName, float flDefaultValue)
{
} /* size: 0 */

// <0110EF42> ../public/scenesystem/sceneobject.h:1548
inline void CSceneObject::SetIntValue(const CUtlStringToken& attrName, int nValue)
{
} /* size: 0 */

// <027D741F> ../public/scenesystem/sceneobject.h:1555
inline void CSceneObject::GetIntValue(const CUtlStringToken& attrName, int nDefaultValue)
{
} /* size: 0 */

// <0110EF0F> ../public/scenesystem/sceneobject.h:1573
inline void CSceneObject::SetComboValue(const CUtlStringToken& attrName, uint8 nValue)
{
} /* size: 0 */

// <0134770B> ../public/scenesystem/sceneobject.h:1657
inline void CSceneObject::SetVector4DValue(const CUtlStringToken& attrName, const Vector4D& vecValue)
{
} /* size: 0 */

// <00B47054> ../public/scenesystem/sceneobject.h:1657
// variables: 26
// function calls: 64
void CSceneObject::SetVector4DValue(const CUtlStringToken& attrName, const Vector4D& vecValue)
{
	CSceneObject::EnsureExtraData(); // 2289
	CSceneObject::EnsureExtraData(); // 1660
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 1661
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
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34335
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34345
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34355
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
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
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 551
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
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58014
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58024
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58034
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
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 277
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 277
	CRenderAttributes::SetVector4DValue(
			CUtlStringToken nTokenID,
			Vector4D vValue);  // 1661
} /* size: 535, inline expansions: 21 (2183 bytes) */

// <013476F2> ../public/scenesystem/sceneobject.h:1716
inline void CSceneObject::ClearMaterialOverrideList()
{
} /* size: 0 */

// <0355EF59> ../public/scenesystem/sceneobject.h:1732
inline void CSceneObject::UpdateFlagsBasedOnMaterial()
{
} /* size: 0 */

// <03B99FCD> ../public/scenesystem/sceneobject.h:1745
inline void CSceneObject::GetDesc()
{
} /* size: 0 */

// <0401F799> ../public/scenesystem/sceneobject.h:1750
inline void CSceneObject::GetMeshInstanceData()
{
} /* size: 0 */

// <0355EF27> ../public/scenesystem/sceneobject.h:1762
inline void CSceneObject::HasMeshInstanceData()
{
} /* size: 0 */

// <0355EECA> ../public/scenesystem/sceneobject.h:1767
// variables: 2
inline void CSceneObject::SetMeshInstanceData(CMeshInstance* pMeshInstance, MeshInstanceOwnership_t nOwnership)
{
	const char   __FUNCTION__; // 20608
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1769
	}
} /* size: 0, variables: 1 */

// <004E7F39> ../public/scenesystem/sceneobject.h:1767
// variables: 2
inline void CSceneObject::SetMeshInstanceData(CMeshInstance* pMeshInstance, MeshInstanceOwnership_t nOwnership)
{
	const char   __FUNCTION__; // 3892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1769
	}
} /* size: 0, variables: 1 */

// <004EB838> ../public/scenesystem/sceneobject.h:1784
void CSceneObject::ClearMeshInstanceData()
{
	{
	}
} /* size: 23 */

// <004E7ED1> ../public/scenesystem/sceneobject.h:1784
// variables: 3
inline void CSceneObject::ClearMeshInstanceData()
{
	const char   __FUNCTION__; // 3941
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1786
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1787
	}
} /* size: 0, variables: 1 */

// <0355EE4F> ../public/scenesystem/sceneobject.h:1790
// variables: 4
inline void CSceneObject::DestroyMeshInstanceData()
{
	const char   __FUNCTION__; // 20706
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1792
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1793
	}
	{
		CMeshInstance* pMeshInstanceToDelete; // 1795
	}
} /* size: 0, variables: 1 */

// <004E7E55> ../public/scenesystem/sceneobject.h:1790
// variables: 4
inline void CSceneObject::DestroyMeshInstanceData()
{
	const char   __FUNCTION__; // 3990
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1792
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1793
	}
	{
		CMeshInstance* pMeshInstanceToDelete; // 1795
	}
} /* size: 0, variables: 1 */

// <004E7E2F> ../public/scenesystem/sceneobject.h:1803
inline void CSceneObject::SetOwnsMeshInstanceData(bool bOwns)
{
} /* size: 0 */

// <0355EE36> ../public/scenesystem/sceneobject.h:1815
inline void CSceneObject::GetOwnsMeshInstanceData()
{
} /* size: 0 */

// <0401F780> ../public/scenesystem/sceneobject.h:1820
inline void CSceneObject::GetExtraData()
{
} /* size: 0 */

// <0401F767> ../public/scenesystem/sceneobject.h:1825
inline void CSceneObject::GetLightingCache()
{
} /* size: 0 */

// <03B99F9B> ../public/scenesystem/sceneobject.h:1830
inline void CSceneObject::IsDeleted()
{
} /* size: 0 */

// <0401F74E> ../public/scenesystem/sceneobject.h:1835
inline void CSceneObject::GetID()
{
} /* size: 0 */

// <004E7DD7> ../public/scenesystem/sceneobject.h:1847
inline void CSceneObject::SetPartiallyAlphaBlended(bool bPartiallyAlphaBlended)
{
} /* size: 0 */

// <0401F735> ../public/scenesystem/sceneobject.h:1859
inline void CSceneObject::IsPartiallyAlphaBlended()
{
} /* size: 0 */

// <040B2B7C> ../public/scenesystem/sceneobject.h:1864
inline void CSceneObject::SetBatchable(bool bIsBatchable)
{
} /* size: 0 */

// <06E28ADD> ../../public/scenesystem/sceneobject.h:1876
inline void CSceneObject::IsNotBatchable()
{
} /* size: 0 */

// <0134765B> ../public/scenesystem/sceneobject.h:1881
inline void CSceneObject::SetUniqueBatchGroup(bool bUnique)
{
} /* size: 0 */

// <040B2B30> ../public/scenesystem/sceneobject.h:1893
// variable: 1
inline void CSceneObject::SetRenderableFlagsAndMirrorIfChanged(ESceneObjectFlags flags)
{
	ESceneObjectFlags changedFlags; // 1895
} /* size: 0, variables: 1 */

// <040B2B17> ../public/scenesystem/sceneobject.h:1906
inline void CSceneObject::MirrorFlags()
{
} /* size: 0 */

// <004E7D4C> ../public/scenesystem/sceneobject.h:1911
inline void CSceneObject::SetOriginalFlags(ESceneObjectFlags nOriginalFlags)
{
} /* size: 0 */

// <013475F6> ../public/scenesystem/sceneobject.h:1916
inline void CSceneObject::GetOriginalFlags()
{
} /* size: 0 */

// <06E28AC4> ../../public/scenesystem/sceneobject.h:1921
inline void CSceneObject::GetFlags()
{
} /* size: 0 */

// <0355ED53> ../public/scenesystem/sceneobject.h:1926
inline void CSceneObject::ChangeFlags(ESceneObjectFlags nNewFlags, ESceneObjectFlags nNewFlagsMask)
{
} /* size: 0 */

// <040B2AD8> ../public/scenesystem/sceneobject.h:1938
inline void CSceneObject::SetFlags(ESceneObjectFlags nFlagsToOR)
{
} /* size: 0 */

// <0634E656> ../public/scenesystem/sceneobject.h:1944
inline void CSceneObject::HasFlags(ESceneObjectFlags nFlags)
{
} /* size: 0 */

// <01347538> ../public/scenesystem/sceneobject.h:1949
inline void CSceneObject::ClearFlags(ESceneObjectFlags nFlagsToClear)
{
} /* size: 0 */

// <0134751F> ../public/scenesystem/sceneobject.h:1954
inline void CSceneObject::IsLoaded()
{
} /* size: 0 */

// <0634E63D> ../public/scenesystem/sceneobject.h:1959
inline void CSceneObject::IsRenderingEnabled()
{
} /* size: 0 */

// <040B2ABF> ../public/scenesystem/sceneobject.h:1964
inline void CSceneObject::SetLoaded()
{
} /* size: 0 */

// <013474D4> ../public/scenesystem/sceneobject.h:1969
inline void CSceneObject::ClearLoaded()
{
} /* size: 0 */

// <013474BB> ../public/scenesystem/sceneobject.h:1974
inline void CSceneObject::DisableRendering()
{
} /* size: 0 */

// <040B2A7F> ../public/scenesystem/sceneobject.h:1984
// variables: 2
inline void CSceneObject::SetRenderingEnabled(bool bEnabled)
{
	const ESceneObjectFlags  nFlagsEnabled; // 1986
	const ESceneObjectFlags  nFlagsDisabled; // 1987
} /* size: 0, variables: 2 */

// <040B2A4C> ../public/scenesystem/sceneobject.h:1991
inline void CSceneObject::SetBounds(const Vector& vecWorldMins, const Vector& vecWorldMaxes)
{
} /* size: 0 */

// <03C41E1E> ../public/scenesystem/sceneobject.h:1996
inline void CSceneObject::SetBoundsInfinite()
{
} /* size: 0 */

// <0401F6AA> ../public/scenesystem/sceneobject.h:2001
inline void CSceneObject::GetBounds(Vector& vecWorldMins, Vector& vecWorldMaxes)
{
} /* size: 0 */

// <0401F684> ../public/scenesystem/sceneobject.h:2006
inline void CSceneObject::GetBounds(AABB_t& bounds)
{
} /* size: 0 */

// <03F3E5ED> ../public/scenesystem/sceneobject.h:2017
inline void CSceneObject::GetBoundsType()
{
} /* size: 0 */

// <03072E10> ../public/scenesystem/sceneobject.h:2022
// variables: 2
inline void CSceneObject::GetBoundingSphereRadius()
{
	Vector vecMins; // 2024
	Vector vecMaxes; // 2025
} /* size: 0, variables: 2 */

// <03C464B1> ../public/scenesystem/sceneobject.h:2030
// variables: 9
// function calls: 23
void CSceneObject::UpdateBoundingBoxToMatchTransform()
{
	CSceneObject::GetBoundsType(); // 2034
	{
		Vector vTotalMin; // 2036
		Vector vTotalMax; // 2037
		bool bFound; // 2039
		CMeshInstance* pInstance; // 2040
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 2036
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 2037
		{
			bool bDrawMeshGroup; // 2043
			CSceneObject::GetCurrentMeshGroupMask(); // 2204
			CSceneObject::GetCurrentMeshGroupMask(); // 2043
			{
				const CSceneObjectData* pSceneObjectData; // 2046
				CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 72
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid(); // 287
				CStrongHandle<InfoForResourceTypeCModel>::HasData(); // 64
				CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData(); // 292
				CUtlMemory<CSceneObjectData, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
						int i);  // 305
				CMeshInstance::GetSceneObjectData(); // 2046
				{
					Vector vNewMin; // 2050
					Vector vNewMax; // 2051
					Vector::Vector(); // 2050
					Vector::Vector(); // 2051
					VectorMin(const Vector& a,
							const Vector& b,
							Vector& result);  // 2054
					VectorMax(const Vector& a,
							const Vector& b,
							Vector& result);  // 2055
				}
			}
			CMeshInstance::GetNext(); // 2059
			CMeshInstance::GetMeshGroupMask(); // 2043
		}
		CSceneObject::SetBounds(
				const Vector& vecWorldMins,
				const Vector& vecWorldMaxes);  // 2068
		{
			Vector vOrigin; // 2063
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 2063
			CSceneObject::SetBounds(
					const Vector& vecWorldMins,
					const Vector& vecWorldMaxes);  // 2064
		}
	}
	CSceneObject::UpdateBoundingBoxToMatchTransform(); // 2030
} /* size: 675, inline expansions: 2 (63 bytes) */

// <03C41D47> ../public/scenesystem/sceneobject.h:2030
// variables: 9
inline void CSceneObject::UpdateBoundingBoxToMatchTransform()
{
	{
		Vector vTotalMin; // 2036
		Vector vTotalMax; // 2037
		bool bFound; // 2039
		CMeshInstance* pInstance; // 2040
		{
			bool bDrawMeshGroup; // 2043
			{
				const CSceneObjectData* pSceneObjectData; // 2046
				{
					Vector vNewMin; // 2050
					Vector vNewMax; // 2051
				}
			}
		}
		{
			Vector vOrigin; // 2063
		}
	}
} /* size: 0 */

// <03C41D14> ../public/scenesystem/sceneobject.h:2078
// variable: 1
inline void CSceneObject::SetTransform(const matrix3x4_t& mTransform)
{
	matrix3x4_t mPreviousTransform; // 2081
} /* size: 0, variables: 1 */

// <00B46DC1> ../public/scenesystem/sceneobject.h:2096
inline void CSceneObject::SetTransform(const CTransform& transform)
{
} /* size: 0 */

// <01347233> ../public/scenesystem/sceneobject.h:2101
inline void CSceneObject::SetTransform(const CTransformUnaligned& transform)
{
} /* size: 0 */

// <06E28AAB> ../../public/scenesystem/sceneobject.h:2113
inline void CSceneObject::GetTransform()
{
} /* size: 0 */

// <01347201> ../public/scenesystem/sceneobject.h:2118
inline void CSceneObject::GetCTransform()
{
} /* size: 0 */

// <02C43F42> ../public/scenesystem/sceneobject.h:2123
// variable: 1
inline void CSceneObject::GetCTransformUnaligned()
{
	CTransformUnaligned out; // 2125
} /* size: 0, variables: 1 */

// <0355EAC0> ../public/scenesystem/sceneobject.h:2150
inline void CSceneObject::UnscheduleDirtyUpdate()
{
} /* size: 0 */

// <013471C1> ../public/scenesystem/sceneobject.h:2163
// variables: 2
inline void CSceneObject::EnableMeshGroups(MeshGroupMask_t nMask)
{
	MeshGroupMask_t nOldMask; // 2165
	MeshGroupMask_t nNewMask; // 2166
} /* size: 0, variables: 2 */

// <01347181> ../public/scenesystem/sceneobject.h:2170
// variables: 2
inline void CSceneObject::DisableMeshGroups(MeshGroupMask_t nMask)
{
	MeshGroupMask_t nOldMask; // 2172
	MeshGroupMask_t nNewMask; // 2173
} /* size: 0, variables: 2 */

// <03B99D3A> ../public/scenesystem/sceneobject.h:2177
inline void CSceneObject::ResetMeshGroups(MeshGroupMask_t nMask)
{
} /* size: 0 */

// <0401F639> ../public/scenesystem/sceneobject.h:2204
inline void CSceneObject::GetCurrentMeshGroupMask()
{
} /* size: 0 */

// <0134711C> ../public/scenesystem/sceneobject.h:2221
inline void CSceneObject::SetLOD(int nLOD)
{
} /* size: 0 */

// <01347103> ../public/scenesystem/sceneobject.h:2234
inline void CSceneObject::DisableLOD()
{
} /* size: 0 */

// <036AC9D9> ../public/scenesystem/sceneobject.h:2242
inline void CSceneObject::GetCurrentLODGroupMask()
{
} /* size: 0 */

// <0401F620> ../public/scenesystem/sceneobject.h:2252
inline void CSceneObject::GetCurrentLODLevel()
{
} /* size: 0 */

// <037E9C63> ../public/scenesystem/sceneobject.h:2263
inline void CSceneObject::SetDepthSortBias(float flDepthBias)
{
} /* size: 0 */

// <02F22F3A> ../public/scenesystem/sceneobject.h:2273
inline void CSceneObject::GetDepthSortBias()
{
} /* size: 0 */

// <02F22EF7> ../public/scenesystem/sceneobject.h:2282
// variables: 2
inline void CSceneObject::MarkObjectNotDirty()
{
	const char   __FUNCTION__; // 63655
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2284
	}
} /* size: 0, variables: 1 */

// <06469086> ../public/scenesystem/sceneobject.h:2289
inline void CSceneObject::EnsureExtraData()
{
} /* size: 0 */

// <0355EA75> ../public/scenesystem/sceneobject.h:2297
inline void CSceneObject::EnableLightingCache()
{
} /* size: 0 */

// <0355EA42> ../public/scenesystem/sceneobject.h:2305
inline void CSceneObject::GetMaterialsForObject(CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& materials, CUtlVectorFixedGrowable<int, 2>& drawFlags)
{
} /* size: 0 */

// <0646906D> ../public/scenesystem/sceneobject.h:2323
inline void CSceneObject::RenderAttributes()
{
} /* size: 0 */

// <0134706E> ../public/scenesystem/sceneobject.h:2331
inline void CSceneObject::SetLightingOrigin(const Vector& v, bool bWorldSpace)
{
} /* size: 0 */

// <0401F0A0> ../public/scenesystem/sceneobject.h:2341
// variables: 7
// function calls: 23
void CSceneObject::GetLightingOrigin()
{
	Vector vOrigin; // 2343
	{
		Vector vMins; // 2351
		Vector vMaxs; // 2351
		Vector::Vector(); // 2351
		Vector::Vector(); // 2351
		CSceneObject::GetBounds(
				Vector& vecWorldMins,
				Vector& vecWorldMaxes);  // 2352
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2354
		Vector::operator*=(
				float fl);  // 2355
	}
	Vector::operator=(
			const Vector& vOther);  // 2346
	Vector::operator==(
			const Vector& src);  // 2349
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 2712
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 2712
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 2712
	matrix3x4a_t::TransformVector(
			const Vector& v0);  // 2359
	Vector::operator=(
			const Vector& vOther);  // 2359
} /* size: 304, variables: 1, inline expansions: 11 (151 bytes) */

// <03EA3F08> ../public/scenesystem/sceneobject.h:2365
inline void CSceneObject::HasLightingOrigin()
{
} /* size: 0 */

// <03C41CBC> ../public/scenesystem/sceneobject.h:2373
inline void CSceneObject::SetAlphaFade(float fAlpha)
{
} /* size: 0 */

// <0401F087> ../public/scenesystem/sceneobject.h:2378
inline void CSceneObject::GetAlphaFade()
{
} /* size: 0 */

// <0401F032> ../public/scenesystem/sceneobject.h:2383
// variables: 3
inline void CSceneObject::GetMaterialOverride(const ISceneLayer* pLayer)
{
	const CSceneObjectMaterialOverrideEntry* pEntry; // 2389
	const CSceneObjectMaterialOverrideEntry* pDefault; // 2390
	{
		int nCount; // 2392
	}
} /* size: 0, variables: 2 */

// <0401EFA0> ../public/scenesystem/sceneobject.h:2414
// variables: 6
inline void CSceneObject::GetMaterialOverride(const ISceneLayer* pLayer, const IMaterial2* existingMaterial)
{
	const CModel* model; // 2419
	{
		int index; // 2423
		{
			HMaterial material; // 2426
		}
	}
	{
		int i; // 2431
		{
			const CSceneObjectMaterialOverrideEntry& entry; // 2433
			int value; // 2438
		}
	}
} /* size: 0, variables: 1 */

// <03B99CA3> ../public/scenesystem/sceneobject.h:2450
inline void CSceneObject::SetMaterialOverrideForMeshInstances(HMaterial hMaterial)
{
} /* size: 0 */

// <0401EF50> ../public/scenesystem/sceneobject.h:2472
inline void CMeshDrawPrimitive_t::InitForObject(const CSceneObject* pObj, const Vector4D& vRGBAModulation, const ISceneLayer* pLayer, const LightProbeVolumeBinding_t& lpvBinding)
{
} /* size: 0 */

// <06E28A67> ../../public/scenesystem/sceneobject.h:2485
inline void CMeshDrawPrimitive_t::InitForObject(const CSceneObject* pObj, const Vector4D& vRGBAModulation, const ISceneLayer* pLayer)
{
} /* size: 0 */

// <030663CA> ../public/scenesystem/sceneobject.h:2501
void ISceneObjectDescBase<CSceneLightObjectInternal>::ISceneObjectDescBase()
{
} /* size: 0 */

// <030663AD> ../public/scenesystem/sceneobject.h:2501
inline void ISceneObjectDescBase<CSceneLightObjectInternal>::ISceneObjectDescBase()
{
} /* size: 0 */

// <030662FB> ../public/scenesystem/sceneobject.h:2501
void ISceneObjectDescBase<CSceneObject>::ISceneObjectDescBase()
{
} /* size: 0 */

// <030662DE> ../public/scenesystem/sceneobject.h:2501
inline void ISceneObjectDescBase<CSceneObject>::ISceneObjectDescBase()
{
} /* size: 0 */

// <0306622C> ../public/scenesystem/sceneobject.h:2501
void ISceneObjectDescBase<CSceneLightProbeVolumeObject>::ISceneObjectDescBase()
{
} /* size: 0 */

// <0306620F> ../public/scenesystem/sceneobject.h:2501
inline void ISceneObjectDescBase<CSceneLightProbeVolumeObject>::ISceneObjectDescBase()
{
} /* size: 0 */

// <01AB7BE3> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CManagedSceneObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CManagedSceneObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CManagedSceneObject>* , ISceneObjectDescBase<CManagedSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CManagedSceneObject>* , const ISceneObjectDescBase<CManagedSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CManagedSceneObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CManagedSceneObject>* , CSceneObject* );
};

// <01B53FBF> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CDynamicSceneObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CDynamicSceneObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CDynamicSceneObject>* , ISceneObjectDescBase<CDynamicSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CDynamicSceneObject>* , const ISceneObjectDescBase<CDynamicSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CDynamicSceneObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CDynamicSceneObject>* , CSceneObject* );
};

// <02FBC5B1> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CSceneDebugTextObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CSceneDebugTextObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneDebugTextObject>* , ISceneObjectDescBase<CSceneDebugTextObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneDebugTextObject>* , const ISceneObjectDescBase<CSceneDebugTextObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneDebugTextObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CSceneDebugTextObject>* , CSceneObject* );
};

// <030558FB> ../public/scenesystem/sceneobject.h:2501
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CSceneLightProbeVolumeObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightProbeVolumeObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightProbeVolumeObject>* , ISceneObjectDescBase<CSceneLightProbeVolumeObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightProbeVolumeObject>* , const ISceneObjectDescBase<CSceneLightProbeVolumeObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightProbeVolumeObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CSceneLightProbeVolumeObject>* , CSceneObject* );
	void ~ISceneObjectDescBase(class ISceneObjectDescBase<CSceneLightProbeVolumeObject> *); /* linkage=_ZN20ISceneObjectDescBaseI28CSceneLightProbeVolumeObjectED4Ev */
	void ISceneObjectDescBase(class ISceneObjectDescBase<CSceneLightProbeVolumeObject> *, class ISceneObjectDescBase<CSceneLightProbeVolumeObject> &); /* linkage=_ZN20ISceneObjectDescBaseI28CSceneLightProbeVolumeObjectEC4EOS1_ */
	void ISceneObjectDescBase(class ISceneObjectDescBase<CSceneLightProbeVolumeObject> *, const class ISceneObjectDescBase<CSceneLightProbeVolumeObject>  &); /* linkage=_ZN20ISceneObjectDescBaseI28CSceneLightProbeVolumeObjectEC4ERKS1_ */
	void ISceneObjectDescBase(class ISceneObjectDescBase<CSceneLightProbeVolumeObject> *); /* linkage=_ZN20ISceneObjectDescBaseI28CSceneLightProbeVolumeObjectEC4Ev */
	virtual void DeleteNonPooledObject(class ISceneObjectDescBase<CSceneLightProbeVolumeObject> *, class CSceneObject *); /* linkage=_ZN20ISceneObjectDescBaseI28CSceneLightProbeVolumeObjectE21DeleteNonPooledObjectEP12CSceneObject */
};

// <030559E0> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CSceneObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CSceneObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneObject>* , ISceneObjectDescBase<CSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneObject>* , const ISceneObjectDescBase<CSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CSceneObject>* , CSceneObject* );
};

// <03055AF3> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CSceneLightObjectInternal> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightObjectInternal>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightObjectInternal>* , ISceneObjectDescBase<CSceneLightObjectInternal>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightObjectInternal>* , const ISceneObjectDescBase<CSceneLightObjectInternal>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLightObjectInternal>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CSceneLightObjectInternal>* , CSceneObject* );
};

// <03055D59> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CSceneLPVDebugGridObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CSceneLPVDebugGridObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLPVDebugGridObject>* , ISceneObjectDescBase<CSceneLPVDebugGridObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLPVDebugGridObject>* , const ISceneObjectDescBase<CSceneLPVDebugGridObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneLPVDebugGridObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CSceneLPVDebugGridObject>* , CSceneObject* );
};

// <040ABD29> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CDecalSceneObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CDecalSceneObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CDecalSceneObject>* , ISceneObjectDescBase<CDecalSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CDecalSceneObject>* , const ISceneObjectDescBase<CDecalSceneObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CDecalSceneObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CDecalSceneObject>* , CSceneObject* );
};

// <00214B20> ../public/scenesystem/sceneobject.h:2501
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class ISceneObjectDescBase<CSceneSkeletonObject> : public ISceneObjectDesc {
public:
	/* class ISceneObjectDesc <ancestor>; */ /* 0 8 */
	void ~ISceneObjectDescBase(ISceneObjectDescBase<CSceneSkeletonObject>* );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneSkeletonObject>* , ISceneObjectDescBase<CSceneSkeletonObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneSkeletonObject>* , const ISceneObjectDescBase<CSceneSkeletonObject>& );
	void ISceneObjectDescBase(ISceneObjectDescBase<CSceneSkeletonObject>* );
protected:
	/* ../public/scenesystem/sceneobject.h:2504 */
	virtual void DeleteNonPooledObject(ISceneObjectDescBase<CSceneSkeletonObject>* , CSceneObject* );
};

// <040AD241> ../public/scenesystem/sceneobject.h:2504
// variable: 1
// function calls: 27
void ISceneObjectDescBase<CDecalSceneObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CDecalSceneObject* pRealObject; // 2506
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
	CDecalSceneObject::~CDecalSceneObject(); // 2507
} /* size: 293, variables: 1, inline expansions: 27 (1175 bytes) */

// <039277B8> ../public/scenesystem/sceneobject.h:2504
// variable: 1
// function calls: 22
void ISceneObjectDescBase<CSceneLPVDebugGridObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneLPVDebugGridObject* pRealObject; // 2506
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
	CSceneObject::~CSceneObject(); // 77
	CSceneLPVDebugGridObject::~CSceneLPVDebugGridObject(); // 77
	CSceneLPVDebugGridObject::~CSceneLPVDebugGridObject(); // 2507
} /* size: 293, variables: 1, inline expansions: 22 (1153 bytes) */

// <0305F95C> ../public/scenesystem/sceneobject.h:2504
// variable: 1
inline void ISceneObjectDescBase<CSceneLightObjectInternal>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneLightObjectInternal* pRealObject; // 2506
} /* size: 0, variables: 1 */

// <03058AA2> ../public/scenesystem/sceneobject.h:2504
// variable: 1
void ISceneObjectDescBase<CSceneLightProbeVolumeObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneLightProbeVolumeObject* pRealObject; // 2506
} /* size: 0, variables: 1 */

// <03058A70> ../public/scenesystem/sceneobject.h:2504
// variable: 1
void ISceneObjectDescBase<CSceneObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneObject* pRealObject; // 2506
} /* size: 0, variables: 1 */

// <03058A3E> ../public/scenesystem/sceneobject.h:2504
// variable: 1
void ISceneObjectDescBase<CSceneLPVDebugGridObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneLPVDebugGridObject* pRealObject; // 2506
} /* size: 0, variables: 1 */

// <02FBD7E5> ../public/scenesystem/sceneobject.h:2504
// variables: 2
// function calls: 47
void ISceneObjectDescBase<CSceneDebugTextObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneDebugTextObject* pRealObject; // 2506
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1723
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::RemoveAll(); // 1798
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 903
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 1799
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Purge(); // 560
		ValidateAlignment<CCharRenderGeometry>(void); // 508
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 510
		CUtlMemory<CCharRenderGeometry, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 1798
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 2522
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 2522
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
	CSceneObject::~CSceneObject(); // 2522
	CSceneDebugTextObject::~CSceneDebugTextObject(); // 2522
	CSceneDebugTextObject::~CSceneDebugTextObject(); // 2507
} /* size: 410, variables: 1, inline expansions: 34 (2099 bytes) */

// <01B556CE> ../public/scenesystem/sceneobject.h:2504
// variable: 1
void ISceneObjectDescBase<CDynamicSceneObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CDynamicSceneObject* pRealObject; // 2506
} /* size: 25, variables: 1 */

// <01ABDB5C> ../public/scenesystem/sceneobject.h:2504
// variable: 1
void ISceneObjectDescBase<CManagedSceneObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CManagedSceneObject* pRealObject; // 2506
} /* size: 25, variables: 1 */

// <002171CE> ../public/scenesystem/sceneobject.h:2504
// variable: 1
// function call: 1
void ISceneObjectDescBase<CSceneSkeletonObject>::DeleteNonPooledObject(CSceneObject* pObject)
{
	CSceneSkeletonObject* pRealObject; // 2506
	CSceneSkeletonObject::~CSceneSkeletonObject(); // 2507
} /* size: 77, variables: 1, inline expansions: 1 (32 bytes) */

// <0012467B> ../public/scenesystem/sceneobject.h:2511
// member functions: 7
// member variables: 7
// class size: 416
class CSceneDebugTextObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../public/scenesystem/sceneobject.h:2514 */
	void CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../public/scenesystem/sceneobject.h:2522 */
	virtual void ~CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../public/scenesystem/sceneobject.h:2524 */
	void SetText(CSceneDebugTextObject* , const char* );
	CTextLayoutInfo m_info; /* 232 128 */
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> > m_textRenderGeometryLists; /* 360 32 */
	bool m_bPositionIn3D; /* 392 1 */
	Vector m_vLocalPosition; /* 396 12 */
	float m_flMaxDistanceFromCameraToRender; /* 408 4 */
	float m_flMinCameraZoomLevelToRender; /* 412 4 */
	void CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectC4Ev */
	virtual void ~CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectD4Ev */
	void SetText(class CSceneDebugTextObject *, const char  *); /* linkage=_ZN21CSceneDebugTextObject7SetTextEPKc */
	void CSceneDebugTextObject(class CSceneDebugTextObject *, const class CSceneDebugTextObject  &); /* linkage=_ZN21CSceneDebugTextObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <02FBC88E> ../public/scenesystem/sceneobject.h:2511
// member functions: 8
// member variables: 7
// class size: 416
class CSceneDebugTextObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneDebugTextObject(CSceneDebugTextObject* , const CSceneDebugTextObject& );
	/* ../public/scenesystem/sceneobject.h:2514 */
	void CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../public/scenesystem/sceneobject.h:2522 */
	virtual void ~CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../public/scenesystem/sceneobject.h:2524 */
	void SetText(CSceneDebugTextObject* , const char* );
	CTextLayoutInfo m_info; /* 232 128 */
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> > m_textRenderGeometryLists; /* 360 32 */
	bool m_bPositionIn3D; /* 392 1 */
	Vector m_vLocalPosition; /* 396 12 */
	float m_flMaxDistanceFromCameraToRender; /* 408 4 */
	float m_flMinCameraZoomLevelToRender; /* 412 4 */
	void CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectC4Ev */
	virtual void ~CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectD4Ev */
	void SetText(class CSceneDebugTextObject *, const char  *); /* linkage=_ZN21CSceneDebugTextObject7SetTextEPKc */
	void CSceneDebugTextObject(class CSceneDebugTextObject *, const class CSceneDebugTextObject  &); /* linkage=_ZN21CSceneDebugTextObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <0440A8A7> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2511
// member functions: 7
// member variables: 7
// class size: 416
class CSceneDebugTextObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2514 */
	void CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2522 */
	virtual void ~CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2524 */
	void SetText(CSceneDebugTextObject* , const char* );
	CTextLayoutInfo m_info; /* 232 128 */
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> > m_textRenderGeometryLists; /* 360 32 */
	bool m_bPositionIn3D; /* 392 1 */
	Vector m_vLocalPosition; /* 396 12 */
	float m_flMaxDistanceFromCameraToRender; /* 408 4 */
	float m_flMinCameraZoomLevelToRender; /* 412 4 */
	void CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectC4Ev */
	virtual void ~CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectD4Ev */
	void SetText(class CSceneDebugTextObject *, const char  *); /* linkage=_ZN21CSceneDebugTextObject7SetTextEPKc */
	void CSceneDebugTextObject(class CSceneDebugTextObject *, const class CSceneDebugTextObject  &); /* linkage=_ZN21CSceneDebugTextObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <058F0D15> ../../public/scenesystem/sceneobject.h:2511
// member functions: 7
// member variables: 7
// class size: 416
class CSceneDebugTextObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../../public/scenesystem/sceneobject.h:2514 */
	void CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../../public/scenesystem/sceneobject.h:2522 */
	virtual void ~CSceneDebugTextObject(CSceneDebugTextObject* );
	/* ../../public/scenesystem/sceneobject.h:2524 */
	void SetText(CSceneDebugTextObject* , const char* );
	CTextLayoutInfo m_info; /* 232 128 */
	CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int> > m_textRenderGeometryLists; /* 360 32 */
	bool m_bPositionIn3D; /* 392 1 */
	Vector m_vLocalPosition; /* 396 12 */
	float m_flMaxDistanceFromCameraToRender; /* 408 4 */
	float m_flMinCameraZoomLevelToRender; /* 412 4 */
	void CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectC4Ev */
	virtual void ~CSceneDebugTextObject(class CSceneDebugTextObject *); /* linkage=_ZN21CSceneDebugTextObjectD4Ev */
	void SetText(class CSceneDebugTextObject *, const char  *); /* linkage=_ZN21CSceneDebugTextObject7SetTextEPKc */
	void CSceneDebugTextObject(class CSceneDebugTextObject *, const class CSceneDebugTextObject  &); /* linkage=_ZN21CSceneDebugTextObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <02FC2DF3> ../public/scenesystem/sceneobject.h:2514
void CSceneDebugTextObject::CSceneDebugTextObject()
{
} /* size: 0 */

// <02FC2DDA> ../public/scenesystem/sceneobject.h:2514
inline void CSceneDebugTextObject::CSceneDebugTextObject()
{
} /* size: 0 */

// <06E28A1C> ../../public/scenesystem/sceneobject.h:2522
void CSceneDebugTextObject::~CSceneDebugTextObject()
{
} /* size: 0 */

// <06E289EC> ../../public/scenesystem/sceneobject.h:2522
inline void CSceneDebugTextObject::~CSceneDebugTextObject()
{
} /* size: 0 */

// <02FC254C> ../public/scenesystem/sceneobject.h:2522
// variable: 1
// function calls: 44
void CSceneDebugTextObject::~CSceneDebugTextObject()
{
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1723
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::RemoveAll(); // 1798
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 903
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 1799
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Purge(); // 560
		ValidateAlignment<CCharRenderGeometry>(void); // 508
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 510
		CUtlMemory<CCharRenderGeometry, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 1798
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 2522
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 2522
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
	CSceneObject::~CSceneObject(); // 2522
} /* size: 361, inline expansions: 31 (1412 bytes) */

// <02FC1C3A> ../public/scenesystem/sceneobject.h:2522
// variable: 1
// function calls: 46
void CSceneDebugTextObject::~CSceneDebugTextObject()
{
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this,
			int i);  // 1723
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::RemoveAll(); // 1798
		CUtlMemory<CCharRenderGeometry, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 903
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 1799
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::Purge(); // 560
		ValidateAlignment<CCharRenderGeometry>(void); // 508
		CUtlMemory<CCharRenderGeometry, int>::Purge(); // 510
		CUtlMemory<CCharRenderGeometry, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<CCharRenderGeometry> >(CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 1798
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 560
	ValidateAlignment<CUtlVector<CCharRenderGeometry> >(void); // 508
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharR this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRende this); // 2522
	CStrAutoEncode::~CStrAutoEncode(); // 225
	CTextLayoutInfo::~CTextLayoutInfo(); // 2522
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
	CSceneObject::~CSceneObject(); // 2522
	CSceneDebugTextObject::~CSceneDebugTextObject(); // 2522
} /* size: 369, inline expansions: 33 (1747 bytes) */

// <06E2481E> ../../public/scenesystem/sceneobject.h:2546
void CSceneMonitorObject::~CSceneMonitorObject()
{
} /* size: 0 */

// <06E247EA> ../../public/scenesystem/sceneobject.h:2546
inline void CSceneMonitorObject::~CSceneMonitorObject()
{
} /* size: 0 */

// <0012455A> ../public/scenesystem/sceneobject.h:2546
// member functions: 6
// member variables: 10
// class size: 2,624
class CSceneMonitorObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../public/scenesystem/sceneobject.h:2549 */
	void CSceneMonitorObject(CSceneMonitorObject* );
	CFrustum m_frustum __attribute__((__aligned__(16))); /* 240 1136 */
	Vector4D m_vecClearColor; /* 1376 16 */
	SceneSystemRenderTargetSize_t m_nRequestedResolutionEnum; /* 1392 4 */
	HRenderTextureStrong m_hColorTarget; /* 1400 8 */
	HRenderTextureStrong m_hDepthTarget; /* 1408 8 */
	CRenderAttributes m_pipelineAttributes; /* 1424 1184 */
	bool m_bRenderShadows; /* 2608 1 */
	int m_nWidth; /* 2612 4 */
	int m_nHeight; /* 2616 4 */
	/* ../public/scenesystem/sceneobject.h:2568 */
	CRenderAttributes* GetMonitorAttributesPtrForModify(CSceneMonitorObject* );
	virtual void ~CSceneMonitorObject(CSceneMonitorObject* );
	void CSceneMonitorObject(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObjectC4Ev */
	class CRenderAttributes * GetMonitorAttributesPtrForModify(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObject32GetMonitorAttributesPtrForModifyEv */
	virtual void ~CSceneMonitorObject(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObjectD4Ev */
} __attribute__((__aligned__(16)));

// <0440A786> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2546
// member functions: 6
// member variables: 10
// class size: 2,624
class CSceneMonitorObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2549 */
	void CSceneMonitorObject(CSceneMonitorObject* );
	CFrustum m_frustum __attribute__((__aligned__(16))); /* 240 1136 */
	Vector4D m_vecClearColor; /* 1376 16 */
	SceneSystemRenderTargetSize_t m_nRequestedResolutionEnum; /* 1392 4 */
	HRenderTextureStrong m_hColorTarget; /* 1400 8 */
	HRenderTextureStrong m_hDepthTarget; /* 1408 8 */
	CRenderAttributes m_pipelineAttributes; /* 1424 1184 */
	bool m_bRenderShadows; /* 2608 1 */
	int m_nWidth; /* 2612 4 */
	int m_nHeight; /* 2616 4 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2568 */
	CRenderAttributes* GetMonitorAttributesPtrForModify(CSceneMonitorObject* );
	virtual void ~CSceneMonitorObject(CSceneMonitorObject* );
	void CSceneMonitorObject(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObjectC4Ev */
	class CRenderAttributes * GetMonitorAttributesPtrForModify(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObject32GetMonitorAttributesPtrForModifyEv */
	virtual void ~CSceneMonitorObject(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObjectD4Ev */
} __attribute__((__aligned__(16)));

// <058F0BF4> ../../public/scenesystem/sceneobject.h:2546
// member functions: 6
// member variables: 10
// class size: 2,624
class CSceneMonitorObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../../public/scenesystem/sceneobject.h:2549 */
	void CSceneMonitorObject(CSceneMonitorObject* );
	CFrustum m_frustum __attribute__((__aligned__(16))); /* 240 1136 */
	Vector4D m_vecClearColor; /* 1376 16 */
	SceneSystemRenderTargetSize_t m_nRequestedResolutionEnum; /* 1392 4 */
	HRenderTextureStrong m_hColorTarget; /* 1400 8 */
	HRenderTextureStrong m_hDepthTarget; /* 1408 8 */
	CRenderAttributes m_pipelineAttributes; /* 1424 1184 */
	bool m_bRenderShadows; /* 2608 1 */
	int m_nWidth; /* 2612 4 */
	int m_nHeight; /* 2616 4 */
	/* ../../public/scenesystem/sceneobject.h:2568 */
	CRenderAttributes* GetMonitorAttributesPtrForModify(CSceneMonitorObject* );
	virtual void ~CSceneMonitorObject(CSceneMonitorObject* );
	void CSceneMonitorObject(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObjectC4Ev */
	class CRenderAttributes * GetMonitorAttributesPtrForModify(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObject32GetMonitorAttributesPtrForModifyEv */
	virtual void ~CSceneMonitorObject(class CSceneMonitorObject *); /* linkage=_ZN19CSceneMonitorObjectD4Ev */
} __attribute__((__aligned__(16)));

// <02D85A80> ../public/scenesystem/sceneobject.h:2582
// member function: 1
// member variables: 4
// struct size: 16
struct CookieSequenceData_t {
	uint16 m_nSequence; /* 0 2 */
	float m_flAnimScale; /* 4 4 */
	float m_flStartTime; /* 8 4 */
	float m_flAnimationLifeSpan; /* 12 4 */
	/* ../public/scenesystem/sceneobject.h:2589 */
	Vector4D CalculateSequenceDataVector(const CookieSequenceData_t* , float);
};

// <06E24869> ../../public/scenesystem/sceneobject.h:2603
void CSceneLightObject::~CSceneLightObject()
{
} /* size: 0 */

// <06E24835> ../../public/scenesystem/sceneobject.h:2603
inline void CSceneLightObject::~CSceneLightObject()
{
} /* size: 0 */

// <0306E160> ../public/scenesystem/sceneobject.h:2603
// function calls: 22
void CSceneLightObject::~CSceneLightObject()
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
} /* size: 185, inline expansions: 22 (658 bytes) */

// <0306DC98> ../public/scenesystem/sceneobject.h:2603
// function calls: 24
void CSceneLightObject::~CSceneLightObject()
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
	CSceneLightObject::~CSceneLightObject(); // 2603
} /* size: 201, inline expansions: 24 (858 bytes) */

// <0010AF82> ../public/scenesystem/sceneobject.h:2603
// member functions: 138
// member variables: 7
// vtable entry: 1
// class size: 496
class CSceneLightObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../public/scenesystem/sceneobject.h:2611 */
	void CSceneLightObject(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2619 */
	LightDesc_t* GetLightDescForModify(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2629 */
	const LightDesc_t& GetLightDesc(const CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2634 */
	const LightDesc_t* GetLightDescPtr(const CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2639 */
	ELightShadowMode GetShadowMode(const CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2644 */
	void SetShadowMode(CSceneLightObject* , ELightShadowMode);
	/* ../public/scenesystem/sceneobject.h:2649 */
	void SetShadowFadeAndCullDistance(CSceneLightObject* , float, float);
	/* ../public/scenesystem/sceneobject.h:2667 */
	void DisableShadowFadeAndCull(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2672 */
	bool UpdateLight(CSceneLightObject* , LightDesc_t);
	/* ../public/scenesystem/sceneobject.h:2678 */
	virtual void InitManagedHandle(CSceneLightObject* );
private:
	LightDesc_t m_lightDesc; /* 232 240 */
	ELightShadowMode m_eShadowMode; /* 472 4 */
	float m_flShadowFadeMinDistSquared; /* 476 4 */
	float m_flShadowFadeMaxDistSquared; /* 480 4 */
	bool m_bCanBeModified; /* 484 1 */
	bool m_bUpdateBounds; /* 485 1 */
	/* ../public/scenesystem/sceneobject.h:2694 */
	void SetWorldPosition(CSceneLightObject* , Vector);
	/* ../public/scenesystem/sceneobject.h:2699 */
	Vector GetWorldPosition(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2701 */
	void SetWorldDirection(CSceneLightObject* , Quaternion);
	/* ../public/scenesystem/sceneobject.h:2714 */
	Vector GetWorldDirection(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2716 */
	void SetColor(CSceneLightObject* , Vector);
	/* ../public/scenesystem/sceneobject.h:2723 */
	void SetBounceColor(CSceneLightObject* , Vector);
	/* ../public/scenesystem/sceneobject.h:2729 */
	Vector GetColor(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2734 */
	void SetConstantAttn(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2740 */
	float GetConstantAttn(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2742 */
	void SetLinearAttn(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2748 */
	float GetLinearAttn(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2750 */
	void SetQuadraticAttn(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2756 */
	float GetQuadraticAttn(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2758 */
	void SetRadius(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2764 */
	float GetRadius(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2766 */
	void SetTheta(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2772 */
	float GetTheta(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2777 */
	void SetPhi(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2783 */
	float GetPhi(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2788 */
	void UpdateBounds(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2794 */
	int GetShadowTextureResolution(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2796 */
	void SetShadowTextureResolution(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2802 */
	void SetShadowTextureWidth(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2807 */
	void SetShadowTextureHeight(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2812 */
	int GetShadowTextureWidth(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2817 */
	int GetShadowTextureHeight(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2822 */
	int GetShadowCascades(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2827 */
	void SetShadowCascades(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2834 */
	float GetShadowCascadeSplitRatio(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2839 */
	void SetShadowCascadeSplitRatio(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2844 */
	float GetCascadeDistanceScale(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2848 */
	void SetCascadeDistanceScale(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2853 */
	bool GetShadows(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2854 */
	void SetShadows(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2859 */
	void SetLightCookie(CSceneLightObject* , HRenderTexture);
	/* ../public/scenesystem/sceneobject.h:2864 */
	HRenderTexture GetLightCookie(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2869 */
	float GetFallOff(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2874 */
	void SetFallOff(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2880 */
	void SetBakeLightIndex(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2885 */
	void SetBakeLightIndexScale(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2890 */
	void SetUsesIndexedBakedLighting(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2895 */
	void SetFogContributionStength(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2900 */
	float GetFogContributionStength(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2905 */
	void SetFogLightingMode(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2910 */
	int GetFogLightingMode(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2915 */
	void SetRenderDiffuse(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2920 */
	void SetRenderSpecular(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2925 */
	void SetRenderTransmissive(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2930 */
	uint GetLightFlags(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2935 */
	void SetLightFlags(CSceneLightObject* , uint);
	/* ../public/scenesystem/sceneobject.h:2940 */
	void SetLightSourceSize0(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2946 */
	void SetLightSourceSize1(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2952 */
	LightSourceShape_t GetLightShape(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2957 */
	void SetLightShape(CSceneLightObject* , LightSourceShape_t);
	/* ../public/scenesystem/sceneobject.h:2963 */
	void SetLightSourceDim0(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2969 */
	void SetLightSourceDim1(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2975 */
	int GetLightType(CSceneLightObject* );
	virtual void ~CSceneLightObject(CSceneLightObject* );
	void CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectC4Ev */
	class LightDesc_t * GetLightDescForModify(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetLightDescForModifyEv */
	const class LightDesc_t  & GetLightDesc(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject12GetLightDescEv */
	const class LightDesc_t  * GetLightDescPtr(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject15GetLightDescPtrEv */
	enum ELightShadowMode GetShadowMode(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject13GetShadowModeEv */
	void SetShadowMode(class CSceneLightObject *, enum ELightShadowMode); /* linkage=_ZN17CSceneLightObject13SetShadowModeE16ELightShadowMode */
	void SetShadowFadeAndCullDistance(class CSceneLightObject *, float, float); /* linkage=_ZN17CSceneLightObject28SetShadowFadeAndCullDistanceEff */
	void DisableShadowFadeAndCull(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject24DisableShadowFadeAndCullEv */
	bool UpdateLight(class CSceneLightObject *, class LightDesc_t); /* linkage=_ZN17CSceneLightObject11UpdateLightE11LightDesc_t */
	virtual void InitManagedHandle(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17InitManagedHandleEv */
	void SetWorldPosition(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject16SetWorldPositionE6Vector */
	class Vector GetWorldPosition(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetWorldPositionEv */
	void SetWorldDirection(class CSceneLightObject *, class Quaternion); /* linkage=_ZN17CSceneLightObject17SetWorldDirectionE10Quaternion */
	class Vector GetWorldDirection(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetWorldDirectionEv */
	void SetColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject8SetColorE6Vector */
	void SetBounceColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject14SetBounceColorE6Vector */
	class Vector GetColor(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetColorEv */
	void SetConstantAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject15SetConstantAttnEf */
	float GetConstantAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject15GetConstantAttnEv */
	void SetLinearAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject13SetLinearAttnEf */
	float GetLinearAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLinearAttnEv */
	void SetQuadraticAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject16SetQuadraticAttnEf */
	float GetQuadraticAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetQuadraticAttnEv */
	void SetRadius(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject9SetRadiusEf */
	float GetRadius(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject9GetRadiusEv */
	void SetTheta(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject8SetThetaEf */
	float GetTheta(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetThetaEv */
	void SetPhi(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject6SetPhiEf */
	float GetPhi(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject6GetPhiEv */
	void UpdateBounds(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12UpdateBoundsEv */
	int GetShadowTextureResolution(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowTextureResolutionEv */
	void SetShadowTextureResolution(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject26SetShadowTextureResolutionEi */
	void SetShadowTextureWidth(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject21SetShadowTextureWidthEi */
	void SetShadowTextureHeight(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject22SetShadowTextureHeightEi */
	int GetShadowTextureWidth(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetShadowTextureWidthEv */
	int GetShadowTextureHeight(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject22GetShadowTextureHeightEv */
	int GetShadowCascades(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetShadowCascadesEv */
	void SetShadowCascades(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetShadowCascadesEi */
	float GetShadowCascadeSplitRatio(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowCascadeSplitRatioEv */
	void SetShadowCascadeSplitRatio(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject26SetShadowCascadeSplitRatioEf */
	float GetCascadeDistanceScale(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject23GetCascadeDistanceScaleEv */
	void SetCascadeDistanceScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject23SetCascadeDistanceScaleEf */
	bool GetShadows(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetShadowsEv */
	void SetShadows(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject10SetShadowsEb */
	void SetLightCookie(class CSceneLightObject *, HRenderTexture); /* linkage=_ZN17CSceneLightObject14SetLightCookieE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetLightCookie(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject14GetLightCookieEv */
	float GetFallOff(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetFallOffEv */
	void SetFallOff(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject10SetFallOffEf */
	void SetBakeLightIndex(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetBakeLightIndexEi */
	void SetBakeLightIndexScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject22SetBakeLightIndexScaleEf */
	void SetUsesIndexedBakedLighting(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject27SetUsesIndexedBakedLightingEb */
	void SetFogContributionStength(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject25SetFogContributionStengthEf */
	float GetFogContributionStength(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject25GetFogContributionStengthEv */
	void SetFogLightingMode(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject18SetFogLightingModeEi */
	int GetFogLightingMode(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject18GetFogLightingModeEv */
	void SetRenderDiffuse(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject16SetRenderDiffuseEb */
	void SetRenderSpecular(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject17SetRenderSpecularEb */
	void SetRenderTransmissive(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject21SetRenderTransmissiveEb */
	uint GetLightFlags(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightFlagsEv */
	void SetLightFlags(class CSceneLightObject *, uint); /* linkage=_ZN17CSceneLightObject13SetLightFlagsEj */
	void SetLightSourceSize0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize0Ef */
	void SetLightSourceSize1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize1Ef */
	enum LightSourceShape_t GetLightShape(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightShapeEv */
	void SetLightShape(class CSceneLightObject *, enum LightSourceShape_t); /* linkage=_ZN17CSceneLightObject13SetLightShapeE18LightSourceShape_t */
	void SetLightSourceDim0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim0Ef */
	void SetLightSourceDim1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim1Ef */
	int GetLightType(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12GetLightTypeEv */
	virtual void ~CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectD4Ev */
	void CSceneLightObject(class CSceneLightObject *, class CSceneLightObject &); /* linkage=_ZN17CSceneLightObjectC4EOS_ */
	void CSceneLightObject(class CSceneLightObject *, const class CSceneLightObject  &); /* linkage=_ZN17CSceneLightObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <0303929A> ../public/scenesystem/sceneobject.h:2603
// member functions: 140
// member variables: 7
// vtable entry: 1
// class size: 496
class CSceneLightObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneLightObject(CSceneLightObject* , CSceneLightObject& );
	void CSceneLightObject(CSceneLightObject* , const CSceneLightObject& );
	/* ../public/scenesystem/sceneobject.h:2611 */
	void CSceneLightObject(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2619 */
	LightDesc_t* GetLightDescForModify(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2629 */
	const LightDesc_t& GetLightDesc(const CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2634 */
	const LightDesc_t* GetLightDescPtr(const CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2639 */
	ELightShadowMode GetShadowMode(const CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2644 */
	void SetShadowMode(CSceneLightObject* , ELightShadowMode);
	/* ../public/scenesystem/sceneobject.h:2649 */
	void SetShadowFadeAndCullDistance(CSceneLightObject* , float, float);
	/* ../public/scenesystem/sceneobject.h:2667 */
	void DisableShadowFadeAndCull(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2672 */
	bool UpdateLight(CSceneLightObject* , LightDesc_t);
	/* ../public/scenesystem/sceneobject.h:2678 */
	virtual void InitManagedHandle(CSceneLightObject* );
private:
	LightDesc_t m_lightDesc; /* 232 240 */
	ELightShadowMode m_eShadowMode; /* 472 4 */
	float m_flShadowFadeMinDistSquared; /* 476 4 */
	float m_flShadowFadeMaxDistSquared; /* 480 4 */
	bool m_bCanBeModified; /* 484 1 */
	bool m_bUpdateBounds; /* 485 1 */
	/* ../public/scenesystem/sceneobject.h:2694 */
	void SetWorldPosition(CSceneLightObject* , Vector);
	/* ../public/scenesystem/sceneobject.h:2699 */
	Vector GetWorldPosition(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2701 */
	void SetWorldDirection(CSceneLightObject* , Quaternion);
	/* ../public/scenesystem/sceneobject.h:2714 */
	Vector GetWorldDirection(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2716 */
	void SetColor(CSceneLightObject* , Vector);
	/* ../public/scenesystem/sceneobject.h:2723 */
	void SetBounceColor(CSceneLightObject* , Vector);
	/* ../public/scenesystem/sceneobject.h:2729 */
	Vector GetColor(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2734 */
	void SetConstantAttn(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2740 */
	float GetConstantAttn(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2742 */
	void SetLinearAttn(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2748 */
	float GetLinearAttn(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2750 */
	void SetQuadraticAttn(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2756 */
	float GetQuadraticAttn(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2758 */
	void SetRadius(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2764 */
	float GetRadius(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2766 */
	void SetTheta(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2772 */
	float GetTheta(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2777 */
	void SetPhi(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2783 */
	float GetPhi(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2788 */
	void UpdateBounds(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2794 */
	int GetShadowTextureResolution(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2796 */
	void SetShadowTextureResolution(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2802 */
	void SetShadowTextureWidth(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2807 */
	void SetShadowTextureHeight(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2812 */
	int GetShadowTextureWidth(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2817 */
	int GetShadowTextureHeight(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2822 */
	int GetShadowCascades(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2827 */
	void SetShadowCascades(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2834 */
	float GetShadowCascadeSplitRatio(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2839 */
	void SetShadowCascadeSplitRatio(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2844 */
	float GetCascadeDistanceScale(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2848 */
	void SetCascadeDistanceScale(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2853 */
	bool GetShadows(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2854 */
	void SetShadows(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2859 */
	void SetLightCookie(CSceneLightObject* , HRenderTexture);
	/* ../public/scenesystem/sceneobject.h:2864 */
	HRenderTexture GetLightCookie(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2869 */
	float GetFallOff(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2874 */
	void SetFallOff(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2880 */
	void SetBakeLightIndex(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2885 */
	void SetBakeLightIndexScale(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2890 */
	void SetUsesIndexedBakedLighting(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2895 */
	void SetFogContributionStength(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2900 */
	float GetFogContributionStength(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2905 */
	void SetFogLightingMode(CSceneLightObject* , int);
	/* ../public/scenesystem/sceneobject.h:2910 */
	int GetFogLightingMode(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2915 */
	void SetRenderDiffuse(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2920 */
	void SetRenderSpecular(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2925 */
	void SetRenderTransmissive(CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2930 */
	uint GetLightFlags(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2935 */
	void SetLightFlags(CSceneLightObject* , uint);
	/* ../public/scenesystem/sceneobject.h:2940 */
	void SetLightSourceSize0(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2946 */
	void SetLightSourceSize1(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2952 */
	LightSourceShape_t GetLightShape(CSceneLightObject* );
	/* ../public/scenesystem/sceneobject.h:2957 */
	void SetLightShape(CSceneLightObject* , LightSourceShape_t);
	/* ../public/scenesystem/sceneobject.h:2963 */
	void SetLightSourceDim0(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2969 */
	void SetLightSourceDim1(CSceneLightObject* , float);
	/* ../public/scenesystem/sceneobject.h:2975 */
	int GetLightType(CSceneLightObject* );
	virtual void ~CSceneLightObject(CSceneLightObject* );
	void CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectC4Ev */
	class LightDesc_t * GetLightDescForModify(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetLightDescForModifyEv */
	const class LightDesc_t  & GetLightDesc(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject12GetLightDescEv */
	const class LightDesc_t  * GetLightDescPtr(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject15GetLightDescPtrEv */
	enum ELightShadowMode GetShadowMode(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject13GetShadowModeEv */
	void SetShadowMode(class CSceneLightObject *, enum ELightShadowMode); /* linkage=_ZN17CSceneLightObject13SetShadowModeE16ELightShadowMode */
	void SetShadowFadeAndCullDistance(class CSceneLightObject *, float, float); /* linkage=_ZN17CSceneLightObject28SetShadowFadeAndCullDistanceEff */
	void DisableShadowFadeAndCull(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject24DisableShadowFadeAndCullEv */
	bool UpdateLight(class CSceneLightObject *, class LightDesc_t); /* linkage=_ZN17CSceneLightObject11UpdateLightE11LightDesc_t */
	virtual void InitManagedHandle(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17InitManagedHandleEv */
	void SetWorldPosition(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject16SetWorldPositionE6Vector */
	class Vector GetWorldPosition(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetWorldPositionEv */
	void SetWorldDirection(class CSceneLightObject *, class Quaternion); /* linkage=_ZN17CSceneLightObject17SetWorldDirectionE10Quaternion */
	class Vector GetWorldDirection(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetWorldDirectionEv */
	void SetColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject8SetColorE6Vector */
	void SetBounceColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject14SetBounceColorE6Vector */
	class Vector GetColor(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetColorEv */
	void SetConstantAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject15SetConstantAttnEf */
	float GetConstantAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject15GetConstantAttnEv */
	void SetLinearAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject13SetLinearAttnEf */
	float GetLinearAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLinearAttnEv */
	void SetQuadraticAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject16SetQuadraticAttnEf */
	float GetQuadraticAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetQuadraticAttnEv */
	void SetRadius(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject9SetRadiusEf */
	float GetRadius(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject9GetRadiusEv */
	void SetTheta(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject8SetThetaEf */
	float GetTheta(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetThetaEv */
	void SetPhi(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject6SetPhiEf */
	float GetPhi(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject6GetPhiEv */
	void UpdateBounds(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12UpdateBoundsEv */
	int GetShadowTextureResolution(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowTextureResolutionEv */
	void SetShadowTextureResolution(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject26SetShadowTextureResolutionEi */
	void SetShadowTextureWidth(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject21SetShadowTextureWidthEi */
	void SetShadowTextureHeight(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject22SetShadowTextureHeightEi */
	int GetShadowTextureWidth(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetShadowTextureWidthEv */
	int GetShadowTextureHeight(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject22GetShadowTextureHeightEv */
	int GetShadowCascades(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetShadowCascadesEv */
	void SetShadowCascades(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetShadowCascadesEi */
	float GetShadowCascadeSplitRatio(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowCascadeSplitRatioEv */
	void SetShadowCascadeSplitRatio(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject26SetShadowCascadeSplitRatioEf */
	float GetCascadeDistanceScale(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject23GetCascadeDistanceScaleEv */
	void SetCascadeDistanceScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject23SetCascadeDistanceScaleEf */
	bool GetShadows(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetShadowsEv */
	void SetShadows(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject10SetShadowsEb */
	void SetLightCookie(class CSceneLightObject *, HRenderTexture); /* linkage=_ZN17CSceneLightObject14SetLightCookieE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetLightCookie(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject14GetLightCookieEv */
	float GetFallOff(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetFallOffEv */
	void SetFallOff(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject10SetFallOffEf */
	void SetBakeLightIndex(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetBakeLightIndexEi */
	void SetBakeLightIndexScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject22SetBakeLightIndexScaleEf */
	void SetUsesIndexedBakedLighting(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject27SetUsesIndexedBakedLightingEb */
	void SetFogContributionStength(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject25SetFogContributionStengthEf */
	float GetFogContributionStength(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject25GetFogContributionStengthEv */
	void SetFogLightingMode(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject18SetFogLightingModeEi */
	int GetFogLightingMode(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject18GetFogLightingModeEv */
	void SetRenderDiffuse(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject16SetRenderDiffuseEb */
	void SetRenderSpecular(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject17SetRenderSpecularEb */
	void SetRenderTransmissive(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject21SetRenderTransmissiveEb */
	uint GetLightFlags(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightFlagsEv */
	void SetLightFlags(class CSceneLightObject *, uint); /* linkage=_ZN17CSceneLightObject13SetLightFlagsEj */
	void SetLightSourceSize0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize0Ef */
	void SetLightSourceSize1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize1Ef */
	enum LightSourceShape_t GetLightShape(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightShapeEv */
	void SetLightShape(class CSceneLightObject *, enum LightSourceShape_t); /* linkage=_ZN17CSceneLightObject13SetLightShapeE18LightSourceShape_t */
	void SetLightSourceDim0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim0Ef */
	void SetLightSourceDim1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim1Ef */
	int GetLightType(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12GetLightTypeEv */
	virtual void ~CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectD4Ev */
	void CSceneLightObject(class CSceneLightObject *, class CSceneLightObject &); /* linkage=_ZN17CSceneLightObjectC4EOS_ */
	void CSceneLightObject(class CSceneLightObject *, const class CSceneLightObject  &); /* linkage=_ZN17CSceneLightObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <04409AF6> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2603
// member functions: 138
// member variables: 7
// vtable entry: 1
// class size: 496
class CSceneLightObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2611 */
	void CSceneLightObject(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2619 */
	LightDesc_t* GetLightDescForModify(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2629 */
	const LightDesc_t& GetLightDesc(const CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2634 */
	const LightDesc_t* GetLightDescPtr(const CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2639 */
	ELightShadowMode GetShadowMode(const CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2644 */
	void SetShadowMode(CSceneLightObject* , ELightShadowMode);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2649 */
	void SetShadowFadeAndCullDistance(CSceneLightObject* , float, float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2667 */
	void DisableShadowFadeAndCull(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2672 */
	bool UpdateLight(CSceneLightObject* , LightDesc_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2678 */
	virtual void InitManagedHandle(CSceneLightObject* );
private:
	LightDesc_t m_lightDesc; /* 232 240 */
	ELightShadowMode m_eShadowMode; /* 472 4 */
	float m_flShadowFadeMinDistSquared; /* 476 4 */
	float m_flShadowFadeMaxDistSquared; /* 480 4 */
	bool m_bCanBeModified; /* 484 1 */
	bool m_bUpdateBounds; /* 485 1 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2694 */
	void SetWorldPosition(CSceneLightObject* , Vector);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2699 */
	Vector GetWorldPosition(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2701 */
	void SetWorldDirection(CSceneLightObject* , Quaternion);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2714 */
	Vector GetWorldDirection(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2716 */
	void SetColor(CSceneLightObject* , Vector);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2723 */
	void SetBounceColor(CSceneLightObject* , Vector);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2729 */
	Vector GetColor(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2734 */
	void SetConstantAttn(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2740 */
	float GetConstantAttn(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2742 */
	void SetLinearAttn(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2748 */
	float GetLinearAttn(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2750 */
	void SetQuadraticAttn(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2756 */
	float GetQuadraticAttn(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2758 */
	void SetRadius(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2764 */
	float GetRadius(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2766 */
	void SetTheta(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2772 */
	float GetTheta(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2777 */
	void SetPhi(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2783 */
	float GetPhi(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2788 */
	void UpdateBounds(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2794 */
	int GetShadowTextureResolution(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2796 */
	void SetShadowTextureResolution(CSceneLightObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2802 */
	void SetShadowTextureWidth(CSceneLightObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2807 */
	void SetShadowTextureHeight(CSceneLightObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2812 */
	int GetShadowTextureWidth(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2817 */
	int GetShadowTextureHeight(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2822 */
	int GetShadowCascades(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2827 */
	void SetShadowCascades(CSceneLightObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2834 */
	float GetShadowCascadeSplitRatio(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2839 */
	void SetShadowCascadeSplitRatio(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2844 */
	float GetCascadeDistanceScale(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2848 */
	void SetCascadeDistanceScale(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2853 */
	bool GetShadows(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2854 */
	void SetShadows(CSceneLightObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2859 */
	void SetLightCookie(CSceneLightObject* , HRenderTexture);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2864 */
	HRenderTexture GetLightCookie(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2869 */
	float GetFallOff(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2874 */
	void SetFallOff(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2880 */
	void SetBakeLightIndex(CSceneLightObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2885 */
	void SetBakeLightIndexScale(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2890 */
	void SetUsesIndexedBakedLighting(CSceneLightObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2895 */
	void SetFogContributionStength(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2900 */
	float GetFogContributionStength(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2905 */
	void SetFogLightingMode(CSceneLightObject* , int);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2910 */
	int GetFogLightingMode(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2915 */
	void SetRenderDiffuse(CSceneLightObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2920 */
	void SetRenderSpecular(CSceneLightObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2925 */
	void SetRenderTransmissive(CSceneLightObject* , bool);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2930 */
	uint GetLightFlags(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2935 */
	void SetLightFlags(CSceneLightObject* , uint);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2940 */
	void SetLightSourceSize0(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2946 */
	void SetLightSourceSize1(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2952 */
	LightSourceShape_t GetLightShape(CSceneLightObject* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2957 */
	void SetLightShape(CSceneLightObject* , LightSourceShape_t);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2963 */
	void SetLightSourceDim0(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2969 */
	void SetLightSourceDim1(CSceneLightObject* , float);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/scenesystem/sceneobject.h:2975 */
	int GetLightType(CSceneLightObject* );
	virtual void ~CSceneLightObject(CSceneLightObject* );
	void CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectC4Ev */
	class LightDesc_t * GetLightDescForModify(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetLightDescForModifyEv */
	const class LightDesc_t  & GetLightDesc(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject12GetLightDescEv */
	const class LightDesc_t  * GetLightDescPtr(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject15GetLightDescPtrEv */
	enum ELightShadowMode GetShadowMode(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject13GetShadowModeEv */
	void SetShadowMode(class CSceneLightObject *, enum ELightShadowMode); /* linkage=_ZN17CSceneLightObject13SetShadowModeE16ELightShadowMode */
	void SetShadowFadeAndCullDistance(class CSceneLightObject *, float, float); /* linkage=_ZN17CSceneLightObject28SetShadowFadeAndCullDistanceEff */
	void DisableShadowFadeAndCull(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject24DisableShadowFadeAndCullEv */
	bool UpdateLight(class CSceneLightObject *, class LightDesc_t); /* linkage=_ZN17CSceneLightObject11UpdateLightE11LightDesc_t */
	virtual void InitManagedHandle(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17InitManagedHandleEv */
	void SetWorldPosition(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject16SetWorldPositionE6Vector */
	class Vector GetWorldPosition(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetWorldPositionEv */
	void SetWorldDirection(class CSceneLightObject *, class Quaternion); /* linkage=_ZN17CSceneLightObject17SetWorldDirectionE10Quaternion */
	class Vector GetWorldDirection(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetWorldDirectionEv */
	void SetColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject8SetColorE6Vector */
	void SetBounceColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject14SetBounceColorE6Vector */
	class Vector GetColor(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetColorEv */
	void SetConstantAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject15SetConstantAttnEf */
	float GetConstantAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject15GetConstantAttnEv */
	void SetLinearAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject13SetLinearAttnEf */
	float GetLinearAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLinearAttnEv */
	void SetQuadraticAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject16SetQuadraticAttnEf */
	float GetQuadraticAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetQuadraticAttnEv */
	void SetRadius(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject9SetRadiusEf */
	float GetRadius(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject9GetRadiusEv */
	void SetTheta(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject8SetThetaEf */
	float GetTheta(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetThetaEv */
	void SetPhi(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject6SetPhiEf */
	float GetPhi(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject6GetPhiEv */
	void UpdateBounds(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12UpdateBoundsEv */
	int GetShadowTextureResolution(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowTextureResolutionEv */
	void SetShadowTextureResolution(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject26SetShadowTextureResolutionEi */
	void SetShadowTextureWidth(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject21SetShadowTextureWidthEi */
	void SetShadowTextureHeight(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject22SetShadowTextureHeightEi */
	int GetShadowTextureWidth(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetShadowTextureWidthEv */
	int GetShadowTextureHeight(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject22GetShadowTextureHeightEv */
	int GetShadowCascades(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetShadowCascadesEv */
	void SetShadowCascades(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetShadowCascadesEi */
	float GetShadowCascadeSplitRatio(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowCascadeSplitRatioEv */
	void SetShadowCascadeSplitRatio(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject26SetShadowCascadeSplitRatioEf */
	float GetCascadeDistanceScale(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject23GetCascadeDistanceScaleEv */
	void SetCascadeDistanceScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject23SetCascadeDistanceScaleEf */
	bool GetShadows(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetShadowsEv */
	void SetShadows(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject10SetShadowsEb */
	void SetLightCookie(class CSceneLightObject *, HRenderTexture); /* linkage=_ZN17CSceneLightObject14SetLightCookieE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetLightCookie(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject14GetLightCookieEv */
	float GetFallOff(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetFallOffEv */
	void SetFallOff(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject10SetFallOffEf */
	void SetBakeLightIndex(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetBakeLightIndexEi */
	void SetBakeLightIndexScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject22SetBakeLightIndexScaleEf */
	void SetUsesIndexedBakedLighting(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject27SetUsesIndexedBakedLightingEb */
	void SetFogContributionStength(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject25SetFogContributionStengthEf */
	float GetFogContributionStength(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject25GetFogContributionStengthEv */
	void SetFogLightingMode(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject18SetFogLightingModeEi */
	int GetFogLightingMode(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject18GetFogLightingModeEv */
	void SetRenderDiffuse(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject16SetRenderDiffuseEb */
	void SetRenderSpecular(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject17SetRenderSpecularEb */
	void SetRenderTransmissive(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject21SetRenderTransmissiveEb */
	uint GetLightFlags(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightFlagsEv */
	void SetLightFlags(class CSceneLightObject *, uint); /* linkage=_ZN17CSceneLightObject13SetLightFlagsEj */
	void SetLightSourceSize0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize0Ef */
	void SetLightSourceSize1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize1Ef */
	enum LightSourceShape_t GetLightShape(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightShapeEv */
	void SetLightShape(class CSceneLightObject *, enum LightSourceShape_t); /* linkage=_ZN17CSceneLightObject13SetLightShapeE18LightSourceShape_t */
	void SetLightSourceDim0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim0Ef */
	void SetLightSourceDim1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim1Ef */
	int GetLightType(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12GetLightTypeEv */
	virtual void ~CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectD4Ev */
	void CSceneLightObject(class CSceneLightObject *, class CSceneLightObject &); /* linkage=_ZN17CSceneLightObjectC4EOS_ */
	void CSceneLightObject(class CSceneLightObject *, const class CSceneLightObject  &); /* linkage=_ZN17CSceneLightObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <058EFC36> ../../public/scenesystem/sceneobject.h:2603
// member functions: 138
// member variables: 7
// vtable entry: 1
// class size: 496
class CSceneLightObject : public CSceneObject {
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	/* ../../public/scenesystem/sceneobject.h:2611 */
	void CSceneLightObject(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2619 */
	LightDesc_t* GetLightDescForModify(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2629 */
	const LightDesc_t& GetLightDesc(const CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2634 */
	const LightDesc_t* GetLightDescPtr(const CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2639 */
	ELightShadowMode GetShadowMode(const CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2644 */
	void SetShadowMode(CSceneLightObject* , ELightShadowMode);
	/* ../../public/scenesystem/sceneobject.h:2649 */
	void SetShadowFadeAndCullDistance(CSceneLightObject* , float, float);
	/* ../../public/scenesystem/sceneobject.h:2667 */
	void DisableShadowFadeAndCull(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2672 */
	bool UpdateLight(CSceneLightObject* , LightDesc_t);
	/* ../../public/scenesystem/sceneobject.h:2678 */
	virtual void InitManagedHandle(CSceneLightObject* );
private:
	LightDesc_t m_lightDesc; /* 232 240 */
	ELightShadowMode m_eShadowMode; /* 472 4 */
	float m_flShadowFadeMinDistSquared; /* 476 4 */
	float m_flShadowFadeMaxDistSquared; /* 480 4 */
	bool m_bCanBeModified; /* 484 1 */
	bool m_bUpdateBounds; /* 485 1 */
	/* ../../public/scenesystem/sceneobject.h:2694 */
	void SetWorldPosition(CSceneLightObject* , Vector);
	/* ../../public/scenesystem/sceneobject.h:2699 */
	Vector GetWorldPosition(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2701 */
	void SetWorldDirection(CSceneLightObject* , Quaternion);
	/* ../../public/scenesystem/sceneobject.h:2714 */
	Vector GetWorldDirection(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2716 */
	void SetColor(CSceneLightObject* , Vector);
	/* ../../public/scenesystem/sceneobject.h:2723 */
	void SetBounceColor(CSceneLightObject* , Vector);
	/* ../../public/scenesystem/sceneobject.h:2729 */
	Vector GetColor(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2734 */
	void SetConstantAttn(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2740 */
	float GetConstantAttn(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2742 */
	void SetLinearAttn(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2748 */
	float GetLinearAttn(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2750 */
	void SetQuadraticAttn(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2756 */
	float GetQuadraticAttn(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2758 */
	void SetRadius(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2764 */
	float GetRadius(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2766 */
	void SetTheta(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2772 */
	float GetTheta(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2777 */
	void SetPhi(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2783 */
	float GetPhi(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2788 */
	void UpdateBounds(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2794 */
	int GetShadowTextureResolution(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2796 */
	void SetShadowTextureResolution(CSceneLightObject* , int);
	/* ../../public/scenesystem/sceneobject.h:2802 */
	void SetShadowTextureWidth(CSceneLightObject* , int);
	/* ../../public/scenesystem/sceneobject.h:2807 */
	void SetShadowTextureHeight(CSceneLightObject* , int);
	/* ../../public/scenesystem/sceneobject.h:2812 */
	int GetShadowTextureWidth(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2817 */
	int GetShadowTextureHeight(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2822 */
	int GetShadowCascades(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2827 */
	void SetShadowCascades(CSceneLightObject* , int);
	/* ../../public/scenesystem/sceneobject.h:2834 */
	float GetShadowCascadeSplitRatio(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2839 */
	void SetShadowCascadeSplitRatio(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2844 */
	float GetCascadeDistanceScale(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2848 */
	void SetCascadeDistanceScale(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2853 */
	bool GetShadows(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2854 */
	void SetShadows(CSceneLightObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:2859 */
	void SetLightCookie(CSceneLightObject* , HRenderTexture);
	/* ../../public/scenesystem/sceneobject.h:2864 */
	HRenderTexture GetLightCookie(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2869 */
	float GetFallOff(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2874 */
	void SetFallOff(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2880 */
	void SetBakeLightIndex(CSceneLightObject* , int);
	/* ../../public/scenesystem/sceneobject.h:2885 */
	void SetBakeLightIndexScale(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2890 */
	void SetUsesIndexedBakedLighting(CSceneLightObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:2895 */
	void SetFogContributionStength(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2900 */
	float GetFogContributionStength(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2905 */
	void SetFogLightingMode(CSceneLightObject* , int);
	/* ../../public/scenesystem/sceneobject.h:2910 */
	int GetFogLightingMode(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2915 */
	void SetRenderDiffuse(CSceneLightObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:2920 */
	void SetRenderSpecular(CSceneLightObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:2925 */
	void SetRenderTransmissive(CSceneLightObject* , bool);
	/* ../../public/scenesystem/sceneobject.h:2930 */
	uint GetLightFlags(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2935 */
	void SetLightFlags(CSceneLightObject* , uint);
	/* ../../public/scenesystem/sceneobject.h:2940 */
	void SetLightSourceSize0(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2946 */
	void SetLightSourceSize1(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2952 */
	LightSourceShape_t GetLightShape(CSceneLightObject* );
	/* ../../public/scenesystem/sceneobject.h:2957 */
	void SetLightShape(CSceneLightObject* , LightSourceShape_t);
	/* ../../public/scenesystem/sceneobject.h:2963 */
	void SetLightSourceDim0(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2969 */
	void SetLightSourceDim1(CSceneLightObject* , float);
	/* ../../public/scenesystem/sceneobject.h:2975 */
	int GetLightType(CSceneLightObject* );
	virtual void ~CSceneLightObject(CSceneLightObject* );
	void CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectC4Ev */
	class LightDesc_t * GetLightDescForModify(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetLightDescForModifyEv */
	const class LightDesc_t  & GetLightDesc(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject12GetLightDescEv */
	const class LightDesc_t  * GetLightDescPtr(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject15GetLightDescPtrEv */
	enum ELightShadowMode GetShadowMode(const class CSceneLightObject  *); /* linkage=_ZNK17CSceneLightObject13GetShadowModeEv */
	void SetShadowMode(class CSceneLightObject *, enum ELightShadowMode); /* linkage=_ZN17CSceneLightObject13SetShadowModeE16ELightShadowMode */
	void SetShadowFadeAndCullDistance(class CSceneLightObject *, float, float); /* linkage=_ZN17CSceneLightObject28SetShadowFadeAndCullDistanceEff */
	void DisableShadowFadeAndCull(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject24DisableShadowFadeAndCullEv */
	bool UpdateLight(class CSceneLightObject *, class LightDesc_t); /* linkage=_ZN17CSceneLightObject11UpdateLightE11LightDesc_t */
	virtual void InitManagedHandle(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17InitManagedHandleEv */
	void SetWorldPosition(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject16SetWorldPositionE6Vector */
	class Vector GetWorldPosition(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetWorldPositionEv */
	void SetWorldDirection(class CSceneLightObject *, class Quaternion); /* linkage=_ZN17CSceneLightObject17SetWorldDirectionE10Quaternion */
	class Vector GetWorldDirection(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetWorldDirectionEv */
	void SetColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject8SetColorE6Vector */
	void SetBounceColor(class CSceneLightObject *, class Vector); /* linkage=_ZN17CSceneLightObject14SetBounceColorE6Vector */
	class Vector GetColor(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetColorEv */
	void SetConstantAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject15SetConstantAttnEf */
	float GetConstantAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject15GetConstantAttnEv */
	void SetLinearAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject13SetLinearAttnEf */
	float GetLinearAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLinearAttnEv */
	void SetQuadraticAttn(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject16SetQuadraticAttnEf */
	float GetQuadraticAttn(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject16GetQuadraticAttnEv */
	void SetRadius(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject9SetRadiusEf */
	float GetRadius(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject9GetRadiusEv */
	void SetTheta(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject8SetThetaEf */
	float GetTheta(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject8GetThetaEv */
	void SetPhi(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject6SetPhiEf */
	float GetPhi(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject6GetPhiEv */
	void UpdateBounds(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12UpdateBoundsEv */
	int GetShadowTextureResolution(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowTextureResolutionEv */
	void SetShadowTextureResolution(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject26SetShadowTextureResolutionEi */
	void SetShadowTextureWidth(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject21SetShadowTextureWidthEi */
	void SetShadowTextureHeight(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject22SetShadowTextureHeightEi */
	int GetShadowTextureWidth(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject21GetShadowTextureWidthEv */
	int GetShadowTextureHeight(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject22GetShadowTextureHeightEv */
	int GetShadowCascades(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject17GetShadowCascadesEv */
	void SetShadowCascades(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetShadowCascadesEi */
	float GetShadowCascadeSplitRatio(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject26GetShadowCascadeSplitRatioEv */
	void SetShadowCascadeSplitRatio(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject26SetShadowCascadeSplitRatioEf */
	float GetCascadeDistanceScale(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject23GetCascadeDistanceScaleEv */
	void SetCascadeDistanceScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject23SetCascadeDistanceScaleEf */
	bool GetShadows(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetShadowsEv */
	void SetShadows(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject10SetShadowsEb */
	void SetLightCookie(class CSceneLightObject *, HRenderTexture); /* linkage=_ZN17CSceneLightObject14SetLightCookieE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetLightCookie(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject14GetLightCookieEv */
	float GetFallOff(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject10GetFallOffEv */
	void SetFallOff(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject10SetFallOffEf */
	void SetBakeLightIndex(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject17SetBakeLightIndexEi */
	void SetBakeLightIndexScale(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject22SetBakeLightIndexScaleEf */
	void SetUsesIndexedBakedLighting(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject27SetUsesIndexedBakedLightingEb */
	void SetFogContributionStength(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject25SetFogContributionStengthEf */
	float GetFogContributionStength(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject25GetFogContributionStengthEv */
	void SetFogLightingMode(class CSceneLightObject *, int); /* linkage=_ZN17CSceneLightObject18SetFogLightingModeEi */
	int GetFogLightingMode(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject18GetFogLightingModeEv */
	void SetRenderDiffuse(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject16SetRenderDiffuseEb */
	void SetRenderSpecular(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject17SetRenderSpecularEb */
	void SetRenderTransmissive(class CSceneLightObject *, bool); /* linkage=_ZN17CSceneLightObject21SetRenderTransmissiveEb */
	uint GetLightFlags(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightFlagsEv */
	void SetLightFlags(class CSceneLightObject *, uint); /* linkage=_ZN17CSceneLightObject13SetLightFlagsEj */
	void SetLightSourceSize0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize0Ef */
	void SetLightSourceSize1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject19SetLightSourceSize1Ef */
	enum LightSourceShape_t GetLightShape(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject13GetLightShapeEv */
	void SetLightShape(class CSceneLightObject *, enum LightSourceShape_t); /* linkage=_ZN17CSceneLightObject13SetLightShapeE18LightSourceShape_t */
	void SetLightSourceDim0(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim0Ef */
	void SetLightSourceDim1(class CSceneLightObject *, float); /* linkage=_ZN17CSceneLightObject18SetLightSourceDim1Ef */
	int GetLightType(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObject12GetLightTypeEv */
	virtual void ~CSceneLightObject(class CSceneLightObject *); /* linkage=_ZN17CSceneLightObjectD4Ev */
	void CSceneLightObject(class CSceneLightObject *, class CSceneLightObject &); /* linkage=_ZN17CSceneLightObjectC4EOS_ */
	void CSceneLightObject(class CSceneLightObject *, const class CSceneLightObject  &); /* linkage=_ZN17CSceneLightObjectC4ERKS_ */
} __attribute__((__aligned__(16)));

// <03072CD6> ../public/scenesystem/sceneobject.h:2611
void CSceneLightObject::CSceneLightObject()
{
} /* size: 0 */

// <03072CBD> ../public/scenesystem/sceneobject.h:2611
inline void CSceneLightObject::CSceneLightObject()
{
} /* size: 0 */

// <00751ADE> ../public/scenesystem/sceneobject.h:2619
// variables: 3
inline void CSceneLightObject::GetLightDescForModify()
{
	const char   __FUNCTION__; // 52700
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2621
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2623
	}
} /* size: 0, variables: 1 */

// <02C43E38> ../public/scenesystem/sceneobject.h:2629
inline void CSceneLightObject::GetLightDesc()
{
} /* size: 0 */

// <02C43E1F> ../public/scenesystem/sceneobject.h:2634
inline void CSceneLightObject::GetLightDescPtr()
{
} /* size: 0 */

// <06E289A1> ../../public/scenesystem/sceneobject.h:2678
void CSceneLightObject::InitManagedHandle()
{
} /* size: 0 */

// <0134693F> ../public/scenesystem/sceneobject.h:2694
inline void CSceneLightObject::SetWorldPosition(Vector pos)
{
} /* size: 0 */

// <01346926> ../public/scenesystem/sceneobject.h:2699
inline void CSceneLightObject::GetWorldPosition()
{
} /* size: 0 */

// <01346900> ../public/scenesystem/sceneobject.h:2701
inline void CSceneLightObject::SetWorldDirection(Quaternion dir)
{
} /* size: 0 */

// <013468E7> ../public/scenesystem/sceneobject.h:2714
inline void CSceneLightObject::GetWorldDirection()
{
} /* size: 0 */

// <013468C1> ../public/scenesystem/sceneobject.h:2716
inline void CSceneLightObject::SetColor(Vector color)
{
} /* size: 0 */

// <0134689B> ../public/scenesystem/sceneobject.h:2723
inline void CSceneLightObject::SetBounceColor(Vector color)
{
} /* size: 0 */

// <01346882> ../public/scenesystem/sceneobject.h:2729
inline void CSceneLightObject::GetColor()
{
} /* size: 0 */

// <0134685E> ../public/scenesystem/sceneobject.h:2734
inline void CSceneLightObject::SetConstantAttn(float f)
{
} /* size: 0 */

// <01346845> ../public/scenesystem/sceneobject.h:2740
inline void CSceneLightObject::GetConstantAttn()
{
} /* size: 0 */

// <01346821> ../public/scenesystem/sceneobject.h:2742
inline void CSceneLightObject::SetLinearAttn(float f)
{
} /* size: 0 */

// <01346808> ../public/scenesystem/sceneobject.h:2748
inline void CSceneLightObject::GetLinearAttn()
{
} /* size: 0 */

// <013467E4> ../public/scenesystem/sceneobject.h:2750
inline void CSceneLightObject::SetQuadraticAttn(float f)
{
} /* size: 0 */

// <013467CB> ../public/scenesystem/sceneobject.h:2756
inline void CSceneLightObject::GetQuadraticAttn()
{
} /* size: 0 */

// <013467A5> ../public/scenesystem/sceneobject.h:2758
inline void CSceneLightObject::SetRadius(float radius)
{
} /* size: 0 */

// <0134678C> ../public/scenesystem/sceneobject.h:2764
inline void CSceneLightObject::GetRadius()
{
} /* size: 0 */

// <01346766> ../public/scenesystem/sceneobject.h:2766
inline void CSceneLightObject::SetTheta(float radius)
{
} /* size: 0 */

// <0134674D> ../public/scenesystem/sceneobject.h:2772
inline void CSceneLightObject::GetTheta()
{
} /* size: 0 */

// <0134670E> ../public/scenesystem/sceneobject.h:2783
inline void CSceneLightObject::GetPhi()
{
} /* size: 0 */

// <013466F5> ../public/scenesystem/sceneobject.h:2788
inline void CSceneLightObject::UpdateBounds()
{
} /* size: 0 */

// <013466DC> ../public/scenesystem/sceneobject.h:2794
inline void CSceneLightObject::GetShadowTextureResolution()
{
} /* size: 0 */

// <01346690> ../public/scenesystem/sceneobject.h:2802
inline void CSceneLightObject::SetShadowTextureWidth(int res)
{
} /* size: 0 */

// <0134666A> ../public/scenesystem/sceneobject.h:2807
inline void CSceneLightObject::SetShadowTextureHeight(int res)
{
} /* size: 0 */

// <01346651> ../public/scenesystem/sceneobject.h:2812
inline void CSceneLightObject::GetShadowTextureWidth()
{
} /* size: 0 */

// <01346638> ../public/scenesystem/sceneobject.h:2817
inline void CSceneLightObject::GetShadowTextureHeight()
{
} /* size: 0 */

// <0134661F> ../public/scenesystem/sceneobject.h:2822
inline void CSceneLightObject::GetShadowCascades()
{
} /* size: 0 */

// <013465B1> ../public/scenesystem/sceneobject.h:2827
inline void CSceneLightObject::SetShadowCascades(int c)
{
} /* size: 0 */

// <01346598> ../public/scenesystem/sceneobject.h:2834
inline void CSceneLightObject::GetShadowCascadeSplitRatio()
{
} /* size: 0 */

// <01346559> ../public/scenesystem/sceneobject.h:2844
inline void CSceneLightObject::GetCascadeDistanceScale()
{
} /* size: 0 */

// <01346533> ../public/scenesystem/sceneobject.h:2848
inline void CSceneLightObject::SetCascadeDistanceScale(float res)
{
} /* size: 0 */

// <0134651A> ../public/scenesystem/sceneobject.h:2853
inline void CSceneLightObject::GetShadows()
{
} /* size: 0 */

// <013464F4> ../public/scenesystem/sceneobject.h:2854
inline void CSceneLightObject::SetShadows(bool res)
{
} /* size: 0 */

// <013464D0> ../public/scenesystem/sceneobject.h:2859
inline void CSceneLightObject::SetLightCookie(HRenderTexture f)
{
} /* size: 0 */

// <013464B7> ../public/scenesystem/sceneobject.h:2864
inline void CSceneLightObject::GetLightCookie()
{
} /* size: 0 */

// <0134649E> ../public/scenesystem/sceneobject.h:2869
inline void CSceneLightObject::GetFallOff()
{
} /* size: 0 */

// <01346478> ../public/scenesystem/sceneobject.h:2874
inline void CSceneLightObject::SetFallOff(float falloff)
{
} /* size: 0 */

// <01346454> ../public/scenesystem/sceneobject.h:2880
inline void CSceneLightObject::SetBakeLightIndex(int v)
{
} /* size: 0 */

// <01346430> ../public/scenesystem/sceneobject.h:2885
inline void CSceneLightObject::SetBakeLightIndexScale(float v)
{
} /* size: 0 */

// <0134640C> ../public/scenesystem/sceneobject.h:2890
inline void CSceneLightObject::SetUsesIndexedBakedLighting(bool v)
{
} /* size: 0 */

// <013463E8> ../public/scenesystem/sceneobject.h:2895
inline void CSceneLightObject::SetFogContributionStength(float v)
{
} /* size: 0 */

// <013463CF> ../public/scenesystem/sceneobject.h:2900
inline void CSceneLightObject::GetFogContributionStength()
{
} /* size: 0 */

// <013463AB> ../public/scenesystem/sceneobject.h:2905
inline void CSceneLightObject::SetFogLightingMode(int v)
{
} /* size: 0 */

// <01346392> ../public/scenesystem/sceneobject.h:2910
inline void CSceneLightObject::GetFogLightingMode()
{
} /* size: 0 */

// <0134636E> ../public/scenesystem/sceneobject.h:2915
inline void CSceneLightObject::SetRenderDiffuse(bool v)
{
} /* size: 0 */

// <0134634A> ../public/scenesystem/sceneobject.h:2920
inline void CSceneLightObject::SetRenderSpecular(bool v)
{
} /* size: 0 */

// <01346326> ../public/scenesystem/sceneobject.h:2925
inline void CSceneLightObject::SetRenderTransmissive(bool v)
{
} /* size: 0 */

// <0134630D> ../public/scenesystem/sceneobject.h:2930
inline void CSceneLightObject::GetLightFlags()
{
} /* size: 0 */

// <013462E7> ../public/scenesystem/sceneobject.h:2935
inline void CSceneLightObject::SetLightFlags(uint flags)
{
} /* size: 0 */

// <013462C3> ../public/scenesystem/sceneobject.h:2940
inline void CSceneLightObject::SetLightSourceSize0(float v)
{
} /* size: 0 */

// <0134629F> ../public/scenesystem/sceneobject.h:2946
inline void CSceneLightObject::SetLightSourceSize1(float v)
{
} /* size: 0 */

// <01346286> ../public/scenesystem/sceneobject.h:2952
inline void CSceneLightObject::GetLightShape()
{
} /* size: 0 */

// <01346260> ../public/scenesystem/sceneobject.h:2957
inline void CSceneLightObject::SetLightShape(LightSourceShape_t shape)
{
} /* size: 0 */

// <0134623C> ../public/scenesystem/sceneobject.h:2963
inline void CSceneLightObject::SetLightSourceDim0(float v)
{
} /* size: 0 */

// <01346218> ../public/scenesystem/sceneobject.h:2969
inline void CSceneLightObject::SetLightSourceDim1(float v)
{
} /* size: 0 */

// <013461FF> ../public/scenesystem/sceneobject.h:2975
inline void CSceneLightObject::GetLightType()
{
} /* size: 0 */

// <00720D53> ../public/scenesystem/sceneobject.h:2978
// member functions: 4
// member variables: 2
// class size: 16
class CSceneLightObjectModifyScope {
	/* ../public/scenesystem/sceneobject.h:2981 */
	void CSceneLightObjectModifyScope(CSceneLightObjectModifyScope* , CSceneLightObject* , bool);
	/* ../public/scenesystem/sceneobject.h:2988 */
	void ~CSceneLightObjectModifyScope(CSceneLightObjectModifyScope* );
private:
	CSceneLightObject * m_pLight; /* 0 8 */
	bool m_bUpdateBounds; /* 8 1 */
	void CSceneLightObjectModifyScope(class CSceneLightObjectModifyScope *, class CSceneLightObject *, bool); /* linkage=_ZN28CSceneLightObjectModifyScopeC4EP17CSceneLightObjectb */
	void ~CSceneLightObjectModifyScope(class CSceneLightObjectModifyScope *); /* linkage=_ZN28CSceneLightObjectModifyScopeD4Ev */
};

// <00751AA5> ../public/scenesystem/sceneobject.h:2981
void CSceneLightObjectModifyScope::CSceneLightObjectModifyScope(CSceneLightObject* pLight, bool bUpdateBounds)
{
} /* size: 0 */

// <00751A72> ../public/scenesystem/sceneobject.h:2981
inline void CSceneLightObjectModifyScope::CSceneLightObjectModifyScope(CSceneLightObject* pLight, bool bUpdateBounds)
{
} /* size: 0 */

// <00751A5B> ../public/scenesystem/sceneobject.h:2988
void CSceneLightObjectModifyScope::~CSceneLightObjectModifyScope()
{
} /* size: 0 */

// <00751A42> ../public/scenesystem/sceneobject.h:2988
inline void CSceneLightObjectModifyScope::~CSceneLightObjectModifyScope()
{
} /* size: 0 */

// <06438C89> ../public/scenesystem/sceneobject.h:3005
// member functions: 6
// member variables: 2
// class size: 16
class CSceneObjectClassTypeDeclarator {
private:
	uint8 m_nClassID; /* 0 1 */
	const char * m_pClassName; /* 8 8 */
	/* ../public/scenesystem/sceneobject.h:3010 */
	void CalcClassID(CSceneObjectClassTypeDeclarator* );
	/* ../public/scenesystem/sceneobject.h:3018 */
	void CSceneObjectClassTypeDeclarator(CSceneObjectClassTypeDeclarator* , const char* );
	/* ../public/scenesystem/sceneobject.h:3024 */
	int operator int(CSceneObjectClassTypeDeclarator* );
	void CalcClassID(class CSceneObjectClassTypeDeclarator *); /* linkage=_ZN31CSceneObjectClassTypeDeclarator11CalcClassIDEv */
	void CSceneObjectClassTypeDeclarator(class CSceneObjectClassTypeDeclarator *, const char  *); /* linkage=_ZN31CSceneObjectClassTypeDeclaratorC4EPKc */
	int operator int(class CSceneObjectClassTypeDeclarator *); /* linkage=_ZN31CSceneObjectClassTypeDeclaratorcviEv */
};

// <06468F3E> ../public/scenesystem/sceneobject.h:3010
// variable: 1
inline void CSceneObjectClassTypeDeclarator::CalcClassID()
{
	int nClassID; // 3012
} /* size: 0, variables: 1 */

// <06468F22> ../public/scenesystem/sceneobject.h:3018
void CSceneObjectClassTypeDeclarator::CSceneObjectClassTypeDeclarator(const char* pClassName)
{
} /* size: 0 */

// <06468EFC> ../public/scenesystem/sceneobject.h:3018
inline void CSceneObjectClassTypeDeclarator::CSceneObjectClassTypeDeclarator(const char* pClassName)
{
} /* size: 0 */

// <06468EE3> ../public/scenesystem/sceneobject.h:3024
inline void operator CSceneObjectClassTypeDeclarator::int()
{
} /* size: 0 */


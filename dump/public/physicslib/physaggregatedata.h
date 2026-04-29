
//
// public/physicslib/physaggregatedata.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 35
//	classes: 8
//	struct: 1
//

// <00983C32> ../public/physicslib/physaggregatedata.h:30
// member variables: 4
// struct size: 16
struct CPhysConstraintData {
	uint32 m_nFlags; /* 0 4 */
	uint16 m_nParent; /* 4 2 */
	uint16 m_nChild; /* 6 2 */
	const class VPhysXConstraintParams_t * m_pParams; /* 8 8 */
};

// <009211C9> ../public/physicslib/physaggregatedata.h:54
// member functions: 38
// member variables: 20
// class size: 208
class CPhysAggregateData {
	CInterlockedUInt m_nRefCounter __attribute__((__aligned__(4))); /* 0 4 */
	uint16 m_nFlags; /* 4 2 */
	/* ../public/physicslib/physaggregatedata.h:68 */
	typedef int16 IncrementalVectorIndex_t;
	IncrementalVectorIndex_t m_nIncrementalVectorIndex; /* 6 2 */
	int16 m_nReserved; /* 8 2 */
	CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator> m_BoneNames; /* 16 8 */
	CUtlMemory<unsigned int, int> m_BonesHash; /* 24 16 */
	CUtlMemory<short unsigned int, int> m_IndexNames; /* 40 16 */
	CUtlMemory<short unsigned int, int> m_IndexHash; /* 56 16 */
	CUtlMemory<short unsigned int, int> m_BoneParents; /* 72 16 */
	CUtlMemory<matrix3x4_t, int> m_BindPose; /* 88 16 */
	CUtlVectorConservative<const VPhysXBodyPart_t*> m_Parts; /* 104 32 */
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator> m_Constraints; /* 136 8 */
	CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator> m_Joints; /* 144 8 */
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator> m_CollisionAttributes; /* 152 8 */
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator> m_SurfaceProperties; /* 160 8 */
	CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator> m_ParentResources; /* 168 8 */
	const class CUtlString * m_pDebugPartNames; /* 176 8 */
	const char * m_pLegacyEmbeddedKeyvalues; /* 184 8 */
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> m_LegacyEmbeddedKeysAdditionalExtRefs; /* 192 8 */
	VPhysXAggregateData_t * m_pBackingData; /* 200 8 */
	/* ../public/physicslib/physaggregatedata.h:112 */
	void CPhysAggregateData(CPhysAggregateData* , const CPhysAggregateData** , uint);
	/* ../public/physicslib/physaggregatedata.h:113 */
	void CPhysAggregateData(CPhysAggregateData* , uint16);
	/* ../public/physicslib/physaggregatedata.h:114 */
	void ~CPhysAggregateData(CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:116 */
	bool InitFromDiskData(CPhysAggregateData* , VPhysXAggregateData_t* );
	/* ../public/physicslib/physaggregatedata.h:118 */
	uintp GetRuntimeSize(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:120 */
	void AddRef(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:121 */
	void Release(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:123 */
	uint32 GetChecksum(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:124 */
	int GetBoneCount(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:125 */
	const char* GetBoneName(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:126 */
	int FindBodyPartByHash(const CPhysAggregateData* , uint);
	/* ../public/physicslib/physaggregatedata.h:127 */
	int GetPartCount(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:128 */
	uint32 GetBoneHash(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:129 */
	uint GetIndexHash(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:131 */
	const matrix3x4a_t GetScaledBindPose(const CPhysAggregateData* , uint, float);
	/* ../public/physicslib/physaggregatedata.h:132 */
	const CPhysSurfaceProperties* GetSurfaceProperties(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:134 */
	uint64 GetUsedGroupMask(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:135 */
	uint64 GetUsedLayerMask(const CPhysAggregateData* );
protected:
	/* ../public/physicslib/physaggregatedata.h:138 */
	void Init(CPhysAggregateData* );
	void CPhysAggregateData(class CPhysAggregateData *, const class CPhysAggregateData  * *, uint); /* linkage=_ZN18CPhysAggregateDataC4EPPKS_j */
	void CPhysAggregateData(class CPhysAggregateData *, uint16); /* linkage=_ZN18CPhysAggregateDataC4Et */
	void ~CPhysAggregateData(class CPhysAggregateData *); /* linkage=_ZN18CPhysAggregateDataD4Ev */
	bool InitFromDiskData(class CPhysAggregateData *, class VPhysXAggregateData_t *); /* linkage=_ZN18CPhysAggregateData16InitFromDiskDataEP21VPhysXAggregateData_t */
	uintp GetRuntimeSize(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData14GetRuntimeSizeEv */
	/* <64e8748> physicslib/physaggregatedata.cpp:66 */
	void AddRef(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData6AddRefEv */
	/* <64e8a6b> physicslib/physaggregatedata.cpp:73 */
	void Release(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData7ReleaseEv */
	uint32 GetChecksum(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData11GetChecksumEv */
	int GetBoneCount(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData12GetBoneCountEv */
	const char  * GetBoneName(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData11GetBoneNameEi */
	int FindBodyPartByHash(const class CPhysAggregateData  *, uint); /* linkage=_ZNK18CPhysAggregateData18FindBodyPartByHashEj */
	int GetPartCount(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData12GetPartCountEv */
	uint32 GetBoneHash(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData11GetBoneHashEi */
	uint GetIndexHash(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData12GetIndexHashEi */
	const class matrix3x4a_t  GetScaledBindPose(const class CPhysAggregateData  *, uint, float); /* linkage=_ZNK18CPhysAggregateData17GetScaledBindPoseEjf */
	const class CPhysSurfaceProperties  * GetSurfaceProperties(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData20GetSurfacePropertiesEi */
	/* <64e87d9> physicslib/physaggregatedata.cpp:320 */
	uint64 GetUsedGroupMask(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData16GetUsedGroupMaskEv */
	uint64 GetUsedLayerMask(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData16GetUsedLayerMaskEv */
	/* <64e869d> physicslib/physaggregatedata.cpp:28 */
	void Init(class CPhysAggregateData *); /* linkage=_ZN18CPhysAggregateData4InitEv */
} __attribute__((__aligned__(16)));

// <06482F7F> ../public/physicslib/physaggregatedata.h:54
// member functions: 38
// member variables: 20
// class size: 208
class CPhysAggregateData {
	/* ../public/physicslib/physaggregatedata.h:57 */
	enum FlagEnum_t {
		FLAG_MEMFREE_ALIGNED = 256,
		FLAG_OWN_CONSTRAINTS = 512,
		FLAG_OWN_CONSTRAINTS_AS_CONTIGUOUS_BLOCK = 1024,
	};
	CInterlockedUInt m_nRefCounter __attribute__((__aligned__(4))); /* 0 4 */
	uint16 m_nFlags; /* 4 2 */
	/* ../public/physicslib/physaggregatedata.h:68 */
	typedef int16 IncrementalVectorIndex_t;
	IncrementalVectorIndex_t m_nIncrementalVectorIndex; /* 6 2 */
	int16 m_nReserved; /* 8 2 */
	CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator> m_BoneNames; /* 16 8 */
	CUtlMemory<unsigned int, int> m_BonesHash; /* 24 16 */
	CUtlMemory<short unsigned int, int> m_IndexNames; /* 40 16 */
	CUtlMemory<short unsigned int, int> m_IndexHash; /* 56 16 */
	CUtlMemory<short unsigned int, int> m_BoneParents; /* 72 16 */
	CUtlMemory<matrix3x4_t, int> m_BindPose; /* 88 16 */
	CUtlVectorConservative<const VPhysXBodyPart_t*> m_Parts; /* 104 32 */
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator> m_Constraints; /* 136 8 */
	CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator> m_Joints; /* 144 8 */
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator> m_CollisionAttributes; /* 152 8 */
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator> m_SurfaceProperties; /* 160 8 */
	CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator> m_ParentResources; /* 168 8 */
	const class CUtlString * m_pDebugPartNames; /* 176 8 */
	const char * m_pLegacyEmbeddedKeyvalues; /* 184 8 */
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> m_LegacyEmbeddedKeysAdditionalExtRefs; /* 192 8 */
	VPhysXAggregateData_t * m_pBackingData; /* 200 8 */
	/* ../public/physicslib/physaggregatedata.h:112 */
	void CPhysAggregateData(CPhysAggregateData* , const CPhysAggregateData** , uint);
	/* ../public/physicslib/physaggregatedata.h:113 */
	void CPhysAggregateData(CPhysAggregateData* , uint16);
	/* ../public/physicslib/physaggregatedata.h:114 */
	void ~CPhysAggregateData(CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:116 */
	bool InitFromDiskData(CPhysAggregateData* , VPhysXAggregateData_t* );
	/* ../public/physicslib/physaggregatedata.h:118 */
	uintp GetRuntimeSize(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:120 */
	void AddRef(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:121 */
	void Release(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:123 */
	uint32 GetChecksum(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:124 */
	int GetBoneCount(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:125 */
	const char* GetBoneName(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:126 */
	int FindBodyPartByHash(const CPhysAggregateData* , uint);
	/* ../public/physicslib/physaggregatedata.h:127 */
	int GetPartCount(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:128 */
	uint32 GetBoneHash(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:129 */
	uint GetIndexHash(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:131 */
	const matrix3x4a_t GetScaledBindPose(const CPhysAggregateData* , uint, float);
	/* ../public/physicslib/physaggregatedata.h:132 */
	const CPhysSurfaceProperties* GetSurfaceProperties(const CPhysAggregateData* , int);
	/* ../public/physicslib/physaggregatedata.h:134 */
	uint64 GetUsedGroupMask(const CPhysAggregateData* );
	/* ../public/physicslib/physaggregatedata.h:135 */
	uint64 GetUsedLayerMask(const CPhysAggregateData* );
protected:
	/* ../public/physicslib/physaggregatedata.h:138 */
	void Init(CPhysAggregateData* );
	void CPhysAggregateData(class CPhysAggregateData *, const class CPhysAggregateData  * *, uint); /* linkage=_ZN18CPhysAggregateDataC4EPPKS_j */
	void CPhysAggregateData(class CPhysAggregateData *, uint16); /* linkage=_ZN18CPhysAggregateDataC4Et */
	void ~CPhysAggregateData(class CPhysAggregateData *); /* linkage=_ZN18CPhysAggregateDataD4Ev */
	bool InitFromDiskData(class CPhysAggregateData *, class VPhysXAggregateData_t *); /* linkage=_ZN18CPhysAggregateData16InitFromDiskDataEP21VPhysXAggregateData_t */
	uintp GetRuntimeSize(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData14GetRuntimeSizeEv */
	/* <64e8748> physicslib/physaggregatedata.cpp:66 */
	void AddRef(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData6AddRefEv */
	/* <64e8a6b> physicslib/physaggregatedata.cpp:73 */
	void Release(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData7ReleaseEv */
	uint32 GetChecksum(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData11GetChecksumEv */
	int GetBoneCount(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData12GetBoneCountEv */
	const char  * GetBoneName(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData11GetBoneNameEi */
	int FindBodyPartByHash(const class CPhysAggregateData  *, uint); /* linkage=_ZNK18CPhysAggregateData18FindBodyPartByHashEj */
	int GetPartCount(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData12GetPartCountEv */
	uint32 GetBoneHash(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData11GetBoneHashEi */
	uint GetIndexHash(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData12GetIndexHashEi */
	const class matrix3x4a_t  GetScaledBindPose(const class CPhysAggregateData  *, uint, float); /* linkage=_ZNK18CPhysAggregateData17GetScaledBindPoseEjf */
	const class CPhysSurfaceProperties  * GetSurfaceProperties(const class CPhysAggregateData  *, int); /* linkage=_ZNK18CPhysAggregateData20GetSurfacePropertiesEi */
	/* <64e87d9> physicslib/physaggregatedata.cpp:320 */
	uint64 GetUsedGroupMask(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData16GetUsedGroupMaskEv */
	uint64 GetUsedLayerMask(const class CPhysAggregateData  *); /* linkage=_ZNK18CPhysAggregateData16GetUsedLayerMaskEv */
	/* <64e869d> physicslib/physaggregatedata.cpp:28 */
	void Init(class CPhysAggregateData *); /* linkage=_ZN18CPhysAggregateData4InitEv */
} __attribute__((__aligned__(16)));

// <0644C1B7> ../public/physicslib/physaggregatedata.h:113
void CPhysAggregateData::CPhysAggregateData(uint16 nFlags)
{
} /* size: 0 */

// <009DC448> ../public/physicslib/physaggregatedata.h:114
void CPhysAggregateData::~CPhysAggregateData()
{
} /* size: 0 */

// <04C3DFFF> ../public/physicslib/physaggregatedata.h:128
inline void CPhysAggregateData::GetBoneHash(int i)
{
} /* size: 0 */

// <0132708F> ../public/physicslib/physaggregatedata.h:129
inline void CPhysAggregateData::GetIndexHash(int i)
{
} /* size: 0 */

// <0126C4BF> ../public/physicslib/physaggregatedata.h:142
void CPhysBodyDesc::CPhysBodyDesc(const CPhysBodyDesc &)
{
} /* size: 0 */

// <0126C49E> ../public/physicslib/physaggregatedata.h:142
inline void CPhysBodyDesc::CPhysBodyDesc(const CPhysBodyDesc &)
{
} /* size: 0 */

// <011F2153> ../public/physicslib/physaggregatedata.h:142
// member functions: 20
// member variables: 11
// class size: 240
class CPhysBodyDesc {
	/* ../public/physicslib/physaggregatedata.h:157 */
	struct SphereAndAttr_t {
		RnSphere_t m_Sphere; /* 0 16 */
		RnCollisionAttr_t m_Attr; /* 16 72 */
		void SphereAndAttr_t(SphereAndAttr_t* );
		SphereAndAttr_t& operator=(SphereAndAttr_t* , const SphereAndAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:158 */
	struct CapsuleAndAttr_t {
		RnCapsule_t m_Capsule; /* 0 28 */
		RnCollisionAttr_t m_Attr; /* 28 72 */
		void CapsuleAndAttr_t(CapsuleAndAttr_t* );
		CapsuleAndAttr_t& operator=(CapsuleAndAttr_t* , const CapsuleAndAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:159 */
	struct HullAndAttr_t {
		RnHull_t * m_pHull; /* 0 8 */
		RnCollisionAttr_t m_Attr; /* 8 72 */
		void HullAndAttr_t(HullAndAttr_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:160 */
	struct MeshAndAttr_t {
		RnMesh_t * m_pMesh; /* 0 8 */
		RnCollisionAttr_t m_Attr; /* 8 72 */
		void MeshAndAttr_t(MeshAndAttr_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:145 */
	void CPhysBodyDesc(CPhysBodyDesc* , bool);
	/* ../public/physicslib/physaggregatedata.h:146 */
	void ~CPhysBodyDesc(CPhysBodyDesc* );
	float m_flMass; /* 0 4 */
	const char * m_pBoneName; /* 8 8 */
	CUtlString m_boneName; /* 16 8 */
	bool m_bOwnsShapes; /* 24 1 */
	matrix3x4_t m_BindPose; /* 28 48 */
	CUtlStringToken m_surface; /* 76 4 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_surfaces; /* 80 32 */
	/* ../public/physicslib/physaggregatedata.h:162 */
	void AddSphere(CPhysBodyDesc* , const RnSphere_t& , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:163 */
	void AddCapsule(CPhysBodyDesc* , const RnCapsule_t& , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:164 */
	void AddHull(CPhysBodyDesc* , RnHull_t* , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:165 */
	void AddMesh(CPhysBodyDesc* , RnMesh_t* , const RnCollisionAttr_t& );
	CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> > m_Spheres; /* 112 32 */
	CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> > m_Capsules; /* 144 32 */
	CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> > m_Hulls; /* 176 32 */
	CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> > m_Meshes; /* 208 32 */
	void CPhysBodyDesc(CPhysBodyDesc* , const CPhysBodyDesc& );
	void CPhysBodyDesc(class CPhysBodyDesc *, bool); /* linkage=_ZN13CPhysBodyDescC4Eb */
	void ~CPhysBodyDesc(class CPhysBodyDesc *); /* linkage=_ZN13CPhysBodyDescD4Ev */
	void AddSphere(class CPhysBodyDesc *, const class RnSphere_t  &, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc9AddSphereERK10RnSphere_tRK17RnCollisionAttr_t */
	void AddCapsule(class CPhysBodyDesc *, const class RnCapsule_t  &, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc10AddCapsuleERK11RnCapsule_tRK17RnCollisionAttr_t */
	void AddHull(class CPhysBodyDesc *, class RnHull_t *, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc7AddHullEP8RnHull_tRK17RnCollisionAttr_t */
	void AddMesh(class CPhysBodyDesc *, class RnMesh_t *, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc7AddMeshEP8RnMesh_tRK17RnCollisionAttr_t */
	void CPhysBodyDesc(class CPhysBodyDesc *, const class CPhysBodyDesc  &); /* linkage=_ZN13CPhysBodyDescC4ERKS_ */
};

// <018278F8> ../public/physicslib/physaggregatedata.h:142
// member functions: 13
// member variables: 11
// class size: 240
class CPhysBodyDesc {
	/* ../public/physicslib/physaggregatedata.h:157 */
	struct SphereAndAttr_t {
		RnSphere_t m_Sphere; /* 0 16 */
		RnCollisionAttr_t m_Attr; /* 16 72 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:158 */
	struct CapsuleAndAttr_t {
		RnCapsule_t m_Capsule; /* 0 28 */
		RnCollisionAttr_t m_Attr; /* 28 72 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:159 */
	struct HullAndAttr_t {
		RnHull_t * m_pHull; /* 0 8 */
		RnCollisionAttr_t m_Attr; /* 8 72 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:160 */
	struct MeshAndAttr_t {
		RnMesh_t * m_pMesh; /* 0 8 */
		RnCollisionAttr_t m_Attr; /* 8 72 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:145 */
	void CPhysBodyDesc(CPhysBodyDesc* , bool);
	/* ../public/physicslib/physaggregatedata.h:146 */
	void ~CPhysBodyDesc(CPhysBodyDesc* );
	float m_flMass; /* 0 4 */
	const char * m_pBoneName; /* 8 8 */
	CUtlString m_boneName; /* 16 8 */
	bool m_bOwnsShapes; /* 24 1 */
	matrix3x4_t m_BindPose; /* 28 48 */
	CUtlStringToken m_surface; /* 76 4 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_surfaces; /* 80 32 */
	/* ../public/physicslib/physaggregatedata.h:162 */
	void AddSphere(CPhysBodyDesc* , const RnSphere_t& , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:163 */
	void AddCapsule(CPhysBodyDesc* , const RnCapsule_t& , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:164 */
	void AddHull(CPhysBodyDesc* , RnHull_t* , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:165 */
	void AddMesh(CPhysBodyDesc* , RnMesh_t* , const RnCollisionAttr_t& );
	CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> > m_Spheres; /* 112 32 */
	CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> > m_Capsules; /* 144 32 */
	CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> > m_Hulls; /* 176 32 */
	CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> > m_Meshes; /* 208 32 */
	void CPhysBodyDesc(class CPhysBodyDesc *, bool); /* linkage=_ZN13CPhysBodyDescC4Eb */
	void ~CPhysBodyDesc(class CPhysBodyDesc *); /* linkage=_ZN13CPhysBodyDescD4Ev */
	void AddSphere(class CPhysBodyDesc *, const class RnSphere_t  &, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc9AddSphereERK10RnSphere_tRK17RnCollisionAttr_t */
	void AddCapsule(class CPhysBodyDesc *, const class RnCapsule_t  &, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc10AddCapsuleERK11RnCapsule_tRK17RnCollisionAttr_t */
	void AddHull(class CPhysBodyDesc *, class RnHull_t *, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc7AddHullEP8RnHull_tRK17RnCollisionAttr_t */
	void AddMesh(class CPhysBodyDesc *, class RnMesh_t *, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc7AddMeshEP8RnMesh_tRK17RnCollisionAttr_t */
	void CPhysBodyDesc(class CPhysBodyDesc *, const class CPhysBodyDesc  &); /* linkage=_ZN13CPhysBodyDescC4ERKS_ */
};

// <064B657F> ../public/physicslib/physaggregatedata.h:142
// member functions: 17
// member variables: 11
// class size: 240
class CPhysBodyDesc {
	/* ../public/physicslib/physaggregatedata.h:157 */
	struct SphereAndAttr_t {
		RnSphere_t m_Sphere; /* 0 16 */
		RnCollisionAttr_t m_Attr; /* 16 72 */
		void SphereAndAttr_t(SphereAndAttr_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:158 */
	struct CapsuleAndAttr_t {
		RnCapsule_t m_Capsule; /* 0 28 */
		RnCollisionAttr_t m_Attr; /* 28 72 */
		void CapsuleAndAttr_t(CapsuleAndAttr_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:159 */
	struct HullAndAttr_t {
		RnHull_t * m_pHull; /* 0 8 */
		RnCollisionAttr_t m_Attr; /* 8 72 */
		void HullAndAttr_t(HullAndAttr_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:160 */
	struct MeshAndAttr_t {
		RnMesh_t * m_pMesh; /* 0 8 */
		RnCollisionAttr_t m_Attr; /* 8 72 */
		void MeshAndAttr_t(MeshAndAttr_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/physicslib/physaggregatedata.h:145 */
	void CPhysBodyDesc(CPhysBodyDesc* , bool);
	/* ../public/physicslib/physaggregatedata.h:146 */
	void ~CPhysBodyDesc(CPhysBodyDesc* );
	float m_flMass; /* 0 4 */
	const char * m_pBoneName; /* 8 8 */
	CUtlString m_boneName; /* 16 8 */
	bool m_bOwnsShapes; /* 24 1 */
	matrix3x4_t m_BindPose; /* 28 48 */
	CUtlStringToken m_surface; /* 76 4 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_surfaces; /* 80 32 */
	/* ../public/physicslib/physaggregatedata.h:162 */
	void AddSphere(CPhysBodyDesc* , const RnSphere_t& , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:163 */
	void AddCapsule(CPhysBodyDesc* , const RnCapsule_t& , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:164 */
	void AddHull(CPhysBodyDesc* , RnHull_t* , const RnCollisionAttr_t& );
	/* ../public/physicslib/physaggregatedata.h:165 */
	void AddMesh(CPhysBodyDesc* , RnMesh_t* , const RnCollisionAttr_t& );
	CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> > m_Spheres; /* 112 32 */
	CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> > m_Capsules; /* 144 32 */
	CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> > m_Hulls; /* 176 32 */
	CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> > m_Meshes; /* 208 32 */
	void CPhysBodyDesc(class CPhysBodyDesc *, bool); /* linkage=_ZN13CPhysBodyDescC4Eb */
	void ~CPhysBodyDesc(class CPhysBodyDesc *); /* linkage=_ZN13CPhysBodyDescD4Ev */
	void AddSphere(class CPhysBodyDesc *, const class RnSphere_t  &, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc9AddSphereERK10RnSphere_tRK17RnCollisionAttr_t */
	void AddCapsule(class CPhysBodyDesc *, const class RnCapsule_t  &, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc10AddCapsuleERK11RnCapsule_tRK17RnCollisionAttr_t */
	void AddHull(class CPhysBodyDesc *, class RnHull_t *, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc7AddHullEP8RnHull_tRK17RnCollisionAttr_t */
	void AddMesh(class CPhysBodyDesc *, class RnMesh_t *, const class RnCollisionAttr_t  &); /* linkage=_ZN13CPhysBodyDesc7AddMeshEP8RnMesh_tRK17RnCollisionAttr_t */
	void CPhysBodyDesc(class CPhysBodyDesc *, const class CPhysBodyDesc  &); /* linkage=_ZN13CPhysBodyDescC4ERKS_ */
};

// <0185094D> ../public/physicslib/physaggregatedata.h:145
void CPhysBodyDesc::CPhysBodyDesc(bool bOwnsShapes)
{
} /* size: 0 */

// <01850910> ../public/physicslib/physaggregatedata.h:146
void CPhysBodyDesc::~CPhysBodyDesc()
{
} /* size: 0 */

// <064D88B7> ../public/physicslib/physaggregatedata.h:157
void SphereAndAttr_t::SphereAndAttr_t()
{
} /* size: 0 */

// <064D889B> ../public/physicslib/physaggregatedata.h:157
inline void SphereAndAttr_t::SphereAndAttr_t()
{
} /* size: 0 */

// <0125D32E> ../public/physicslib/physaggregatedata.h:157
inline void SphereAndAttr_t::operator=(const SphereAndAttr_t &)
{
} /* size: 0 */

// <064D838E> ../public/physicslib/physaggregatedata.h:158
void CapsuleAndAttr_t::CapsuleAndAttr_t()
{
} /* size: 0 */

// <064D8372> ../public/physicslib/physaggregatedata.h:158
inline void CapsuleAndAttr_t::CapsuleAndAttr_t()
{
} /* size: 0 */

// <0125D1A0> ../public/physicslib/physaggregatedata.h:158
inline void CapsuleAndAttr_t::operator=(const CapsuleAndAttr_t &)
{
} /* size: 0 */

// <064D7DF1> ../public/physicslib/physaggregatedata.h:159
void HullAndAttr_t::HullAndAttr_t()
{
} /* size: 0 */

// <064D7DD5> ../public/physicslib/physaggregatedata.h:159
inline void HullAndAttr_t::HullAndAttr_t()
{
} /* size: 0 */

// <064D7966> ../public/physicslib/physaggregatedata.h:160
void MeshAndAttr_t::MeshAndAttr_t()
{
} /* size: 0 */

// <064D794A> ../public/physicslib/physaggregatedata.h:160
inline void MeshAndAttr_t::MeshAndAttr_t()
{
} /* size: 0 */

// <0130A1D2> ../public/physicslib/physaggregatedata.h:174
void CPhysBodyDescArray::~CPhysBodyDescArray()
{
} /* size: 0 */

// <0130A1B6> ../public/physicslib/physaggregatedata.h:174
inline void CPhysBodyDescArray::~CPhysBodyDescArray()
{
} /* size: 0 */

// <011ED7FA> ../public/physicslib/physaggregatedata.h:174
// member functions: 8
// member variables: 2
// class size: 64
class CPhysBodyDescArray {
	/* ../public/physicslib/physaggregatedata.h:178 */
	void CPhysBodyDescArray(CPhysBodyDescArray* , int, int);
	/* ../public/physicslib/physaggregatedata.h:194 */
	CPhysBodyDesc* Get(CPhysBodyDescArray* , int);
	/* ../public/physicslib/physaggregatedata.h:199 */
	VPhysXJoint_t* GetJoint(CPhysBodyDescArray* , int);
	CUtlVector<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> > descs; /* 0 32 */
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> > joints; /* 32 32 */
	void ~CPhysBodyDescArray(CPhysBodyDescArray* );
	void CPhysBodyDescArray(class CPhysBodyDescArray *, int, int); /* linkage=_ZN18CPhysBodyDescArrayC4Eii */
	class CPhysBodyDesc * Get(class CPhysBodyDescArray *, int); /* linkage=_ZN18CPhysBodyDescArray3GetEi */
	class VPhysXJoint_t * GetJoint(class CPhysBodyDescArray *, int); /* linkage=_ZN18CPhysBodyDescArray8GetJointEi */
	void ~CPhysBodyDescArray(class CPhysBodyDescArray *); /* linkage=_ZN18CPhysBodyDescArrayD4Ev */
};

// <017F7D8D> ../public/physicslib/physaggregatedata.h:174
// member functions: 7
// member variables: 2
// class size: 64
class CPhysBodyDescArray {
	/* ../public/physicslib/physaggregatedata.h:178 */
	void CPhysBodyDescArray(CPhysBodyDescArray* , int, int);
	/* ../public/physicslib/physaggregatedata.h:194 */
	CPhysBodyDesc* Get(CPhysBodyDescArray* , int);
	/* ../public/physicslib/physaggregatedata.h:199 */
	VPhysXJoint_t* GetJoint(CPhysBodyDescArray* , int);
	CUtlVector<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> > descs; /* 0 32 */
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> > joints; /* 32 32 */
	void CPhysBodyDescArray(class CPhysBodyDescArray *, int, int); /* linkage=_ZN18CPhysBodyDescArrayC4Eii */
	class CPhysBodyDesc * Get(class CPhysBodyDescArray *, int); /* linkage=_ZN18CPhysBodyDescArray3GetEi */
	class VPhysXJoint_t * GetJoint(class CPhysBodyDescArray *, int); /* linkage=_ZN18CPhysBodyDescArray8GetJointEi */
	void ~CPhysBodyDescArray(class CPhysBodyDescArray *); /* linkage=_ZN18CPhysBodyDescArrayD4Ev */
};

// <013239B7> ../public/physicslib/physaggregatedata.h:178
// variables: 9
// function calls: 244
void CPhysBodyDescArray::CPhysBodyDescArray(int count, int jointCount)
{
	{
		int i; // 183
	}
	{
		int i; // 188
	}
	CUtlMemory<CPhysBodyDesc, int>::ValidateGrowSize(); // 475
	CUtlMemory<CPhysBodyDesc, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::CUtlVector(); // 179
	CUtlMemory<VPhysXJoint_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPhysXJoint_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::CUtlVector(); // 179
	CUtlMemory<CPhysBodyDesc, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CPhysBodyDesc, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::EnsureCapacity(
			int num);  // 180
	CUtlMemory<VPhysXJoint_t, int>::IsGrowable(); // 881
	CUtlMemory<VPhysXJoint_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<VPhysXJoint_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::EnsureCapacity(
			int num);  // 181
	{
		int i; // 183
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 142
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlStringToken, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 573
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CUtlStringToken, int>::Base(); // 112
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
				int i);  // 1453
			CUtlStringToken::CUtlStringToken(); // 1479
			Construct<CUtlStringToken>(CUtlStringToken* pMemory); // 1453
		}
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::SetCount(
			int count);  // 573
		CUtlMemory<CUtlStringToken, int>::Base(); // 112
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 102
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::begin(); // 574
		CUtlMemory<CUtlStringToken, int>::Base(); // 113
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 105
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 105
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<matrix3x4a_t>(const matrix3x4a_t* pFrom,
						const matrix3x4a_t* pFromEnd,
						matrix3x4a_t* pTo);  // 173
		UtlTraitsCopyRange<CUtlStringToken>(const CUtlStringToken* pFrom,
							const CUtlStringToken* pFromEnd,
							CUtlStringToken* pTo);  // 574
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator=(
				const CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& other);  // 565
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator=(
				const CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& other);  // 452
		CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator=(
				const CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& src);  // 434
		CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(
				const CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& src);  // 142
		CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Count(); // 573
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			memset(void* __dest,
				int __ch,
				size_t __len);  // 165
			RnCollisionAttr_t::ComputeHash(); // 167
			RnCollisionAttr_t::RnCollisionAttr_t(); // 157
			RnSphere_t::RnSphere_t(
					float flRadius);  // 157
			SphereAndAttr_t::SphereAndAttr_t(); // 1479
			Construct<CPhysBodyDesc::SphereAndAttr_t>(SphereAndAttr_t* pMemory); // 1453
			CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Element(
				int i);  // 1453
		}
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::SetCount(
			int count);  // 573
		CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Base(); // 112
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Base(); // 102
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::begin(); // 574
		CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>::Base(); // 113
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Base(); // 105
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Count(); // 105
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::end(); // 574
		Vector::operator=(
				const Vector& vOther);  // 72
		RnSphere_t::operator=(
				const RnSphere_t  &);  // 157
		SphereAndAttr_t::operator=(
				const SphereAndAttr_t  &);  // 209
		UtlTraitsCopyRange<CPhysBodyDesc::SphereAndAttr_t>(const SphereAndAttr_t* pFrom,
									const SphereAndAttr_t* pFromEnd,
									SphereAndAttr_t* pTo);  // 200
		UtlTraitsCopyRange<CPhysBodyDesc::SphereAndAttr_t>(const SphereAndAttr_t* pFrom,
									const SphereAndAttr_t* pFromEnd,
									SphereAndAttr_t* pTo);  // 574
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >& other);  // 565
		CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >& other);  // 452
		CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::operator=(
				const CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >& src);  // 434
		CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::CUtlVector(
				const CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >& src);  // 142
		CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Count(); // 573
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Element(
				int i);  // 1453
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 130
			RnCapsule_t::RnCapsule_t(); // 158
			memset(void* __dest,
				int __ch,
				size_t __len);  // 165
			RnCollisionAttr_t::ComputeHash(); // 167
			RnCollisionAttr_t::RnCollisionAttr_t(); // 158
			CapsuleAndAttr_t::CapsuleAndAttr_t(); // 1479
			Construct<CPhysBodyDesc::CapsuleAndAttr_t>(CapsuleAndAttr_t* pMemory); // 1453
		}
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::SetCount(
			int count);  // 573
		CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Base(); // 112
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Base(); // 102
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::begin(); // 574
		CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>::Base(); // 113
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Base(); // 105
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Count(); // 105
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::end(); // 574
		Vector::operator=(
				const Vector& vOther);  // 123
		RnCapsule_t::operator=(
				const RnCapsule_t  &);  // 158
		CapsuleAndAttr_t::operator=(
				const CapsuleAndAttr_t  &);  // 209
		UtlTraitsCopyRange<CPhysBodyDesc::CapsuleAndAttr_t>(const CapsuleAndAttr_t* pFrom,
									const CapsuleAndAttr_t* pFromEnd,
									CapsuleAndAttr_t* pTo);  // 200
		UtlTraitsCopyRange<CPhysBodyDesc::CapsuleAndAttr_t>(const CapsuleAndAttr_t* pFrom,
									const CapsuleAndAttr_t* pFromEnd,
									CapsuleAndAttr_t* pTo);  // 574
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >& other);  // 565
		CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >& other);  // 452
		CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::operator=(
				const CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >& src);  // 434
		CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::CUtlVector(
				const CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >& src);  // 142
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Count(); // 573
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Element(
				int i);  // 1453
			memset(void* __dest,
				int __ch,
				size_t __len);  // 165
			RnCollisionAttr_t::ComputeHash(); // 167
			RnCollisionAttr_t::RnCollisionAttr_t(); // 159
			HullAndAttr_t::HullAndAttr_t(); // 1479
			Construct<CPhysBodyDesc::HullAndAttr_t>(HullAndAttr_t* pMemory); // 1453
		}
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::SetCount(
			int count);  // 573
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Base(); // 112
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Base(); // 102
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::begin(); // 574
		CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>::Base(); // 113
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Base(); // 105
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Count(); // 105
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<matrix3x4a_t>(const matrix3x4a_t* pFrom,
						const matrix3x4a_t* pFromEnd,
						matrix3x4a_t* pTo);  // 173
		UtlTraitsCopyRange<CPhysBodyDesc::HullAndAttr_t>(const HullAndAttr_t* pFrom,
								const HullAndAttr_t* pFromEnd,
								HullAndAttr_t* pTo);  // 574
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >& other);  // 565
		CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >& other);  // 452
		CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::operator=(
				const CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >& src);  // 434
		CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::CUtlVector(
				const CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >& src);  // 142
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Count(); // 573
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Element(
				int i);  // 1453
			memset(void* __dest,
				int __ch,
				size_t __len);  // 165
			RnCollisionAttr_t::ComputeHash(); // 167
			RnCollisionAttr_t::RnCollisionAttr_t(); // 160
			MeshAndAttr_t::MeshAndAttr_t(); // 1479
			Construct<CPhysBodyDesc::MeshAndAttr_t>(MeshAndAttr_t* pMemory); // 1453
		}
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::SetCount(
			int count);  // 573
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Base(); // 112
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Base(); // 102
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::begin(); // 574
		CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>::Base(); // 113
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Base(); // 105
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Count(); // 105
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<matrix3x4a_t>(const matrix3x4a_t* pFrom,
						const matrix3x4a_t* pFromEnd,
						matrix3x4a_t* pTo);  // 173
		UtlTraitsCopyRange<CPhysBodyDesc::MeshAndAttr_t>(const MeshAndAttr_t* pFrom,
								const MeshAndAttr_t* pFromEnd,
								MeshAndAttr_t* pTo);  // 574
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >& other);  // 565
		CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::operator=(
				const CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >& other);  // 452
		CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::operator=(
				const CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >& src);  // 434
		CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::CUtlVector(
				const CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >& src);  // 142
		CPhysBodyDesc::CPhysBodyDesc(
				const CPhysBodyDesc  &);  // 1514
		Construct<CPhysBodyDesc, CPhysBodyDesc>(CPhysBodyDesc* pMemory); // 1252
		CUtlMemory<CPhysBodyDesc, int>::NumAllocated(); // 1247
		CUtlMemory<CPhysBodyDesc, int>::Base(); // 112
		CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::Base(); // 368
		CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CPhysBodyDesc, int>::IsGrowable(); // 823
		CUtlMemory<CPhysBodyDesc, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CPhysBodyDesc, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CPhysBodyDesc, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<CPhysBodyDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::AddToTail(
				CPhysBodyDesc& src);  // 185
	}
	{
		int i; // 188
		CUtlMemory<VPhysXJoint_t, int>::Base(); // 112
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Base(); // 368
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VPhysXJoint_t, int>::IsGrowable(); // 823
		CUtlMemory<VPhysXJoint_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VPhysXJoint_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VPhysXJoint_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::GrowMemory(
				int num);  // 1249
		Construct<VPhysXJoint_t, VPhysXJoint_t>(VPhysXJoint_t* pMemory); // 1252
		CUtlMemory<VPhysXJoint_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Element(
			int i);  // 1252
		CUtlMemory<VPhysXJoint_t, int>::NumAllocated(); // 1247
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::AddToTail(
				VPhysXJoint_t& src);  // 190
		VPhysXRange_t::VPhysXRange_t(); // 236
		VPhysXRange_t::VPhysXRange_t(); // 236
		VPhysXRange_t::VPhysXRange_t(); // 236
		VPhysXJoint_t::VPhysXJoint_t(); // 190
	}
} /* size: 3678, inline expansions: 19 (616 bytes) */

// <01323969> ../public/physicslib/physaggregatedata.h:178
// variables: 2
inline void CPhysBodyDescArray::CPhysBodyDescArray(int count, int jointCount)
{
	{
		int i; // 183
	}
	{
		int i; // 188
	}
} /* size: 0 */

// <01323944> ../public/physicslib/physaggregatedata.h:194
inline void CPhysBodyDescArray::Get(int index)
{
} /* size: 0 */

// <0132391F> ../public/physicslib/physaggregatedata.h:199
inline void CPhysBodyDescArray::GetJoint(int index)
{
} /* size: 0 */

// <0185092C> ../public/physicslib/physaggregatedata.h:208
CPhysAggregateDataHandle CreateAggregateData(const CPhysBodyDesc *, int)
{
} /* size: 0 */

// <064DEE02> ../public/physicslib/physaggregatedata.h:223
inline void CPhysAggregateData::GetBoneCount()
{
} /* size: 0 */

// <04C3DFB9> ../public/physicslib/physaggregatedata.h:223
// variables: 2
inline void CPhysAggregateData::GetBoneCount()
{
	const char   __FUNCTION__; // 7972
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <013238DA> ../public/physicslib/physaggregatedata.h:223
// variables: 2
inline void CPhysAggregateData::GetBoneCount()
{
	const char   __FUNCTION__; // 46830
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <00D1BEED> ../public/physicslib/physaggregatedata.h:223
// variables: 2
inline void CPhysAggregateData::GetBoneCount()
{
	const char   __FUNCTION__; // 8
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <00A17A89> ../public/physicslib/physaggregatedata.h:223
// variables: 2
inline void CPhysAggregateData::GetBoneCount()
{
	const char   __FUNCTION__; // 57608
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <01F82E27> ../public/physicslib/physaggregatedata.h:223
// variables: 2
inline void CPhysAggregateData::GetBoneCount()
{
	const char   __FUNCTION__; // 15495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
} /* size: 0, variables: 1 */

// <064DEDE6> ../public/physicslib/physaggregatedata.h:239
inline void CPhysAggregateData::GetPartCount()
{
} /* size: 0 */

// <04C3DF91> ../public/physicslib/physaggregatedata.h:244
inline void CPhysAggregateData::GetBoneName(int nBoneIndex)
{
} /* size: 0 */

// <00D0E84D> ../public/physicslib/physaggregatedata.h:251
int FindBodyPartByHash(uint, int, const uint32 *, const uint16 *)
{
} /* size: 0 */

// <00D1BE42> ../public/physicslib/physaggregatedata.h:255
// variable: 1
inline void CPhysAggregateData::GetScaledBindPose(uint i, float flScale)
{
	matrix3x4a_t tmBind; // 257
} /* size: 0, variables: 1 */

// <064BDBDE> ../public/physicslib/physaggregatedata.h:265
// member functions: 6
// member variable: 1
// class size: 32
class CPhysicsDataCombiner {
private:
	CUtlVector<const CPhysAggregateData*, CUtlMemory<const CPhysAggregateData*, int> > m_Data; /* 0 32 */
	/* ../public/physicslib/physaggregatedata.h:270 */
	void Add(CPhysicsDataCombiner* , const CModel* );
	/* ../public/physicslib/physaggregatedata.h:271 */
	bool HasData(const CPhysicsDataCombiner* );
	/* ../public/physicslib/physaggregatedata.h:272 */
	CPhysAggregateDataHandle CreateCombinedData(CPhysicsDataCombiner* );
	void Add(class CPhysicsDataCombiner *, const class CModel  *); /* linkage=_ZN20CPhysicsDataCombiner3AddEPK6CModel */
	bool HasData(const class CPhysicsDataCombiner  *); /* linkage=_ZNK20CPhysicsDataCombiner7HasDataEv */
	class CPhysAggregateDataHandle CreateCombinedData(class CPhysicsDataCombiner *); /* linkage=_ZN20CPhysicsDataCombiner18CreateCombinedDataEv */
};



//
// public/modellib/model.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 53
//	classes: 5
//	structs: 11
//

// <04E44464> ../public/modellib/model.h:50
inline void CModelSkeleton::operator=(const CModelSkeleton &)
{
} /* size: 0 */

// <04AD8A94> ../public/modellib/model.h:50
// variables: 5
// function calls: 100
void CModelSkeleton::~CModelSkeleton()
{
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 50
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 50
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 50
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	ValidateAlignment<CModelSkeleton::BoneFlags_t>(void); // 508
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 510
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 50
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 50
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 50
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 50
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Count(); // 897
			CUtlHashtableEntry<short unsigned int, unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<short unsigned int, unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<short unsigned int, unsigned int> >(CUtlKeyValuePair<short unsigned int, unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this); // 188
	ValidateAlignment<CUtlHashtableEntry<short unsigned int, unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this); // 135
	BoneDictInverted_t::~BoneDictInverted_t(); // 50
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, short unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, short unsigned int> >(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 50
} /* size: 0, inline expansions: 86 (0 bytes) */

// <04AD8A78> ../public/modellib/model.h:50
inline void CModelSkeleton::~CModelSkeleton()
{
} /* size: 0 */

// <000EA252> ../public/modellib/model.h:50
// member functions: 68
// member variables: 10
// class size: 304
class CModelSkeleton {
	/* ../public/modellib/model.h:53 */
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 4,
		FLAG_CLOTH = 8,
		FLAG_PHYSICS = 16,
		FLAG_ATTACHMENT = 32,
		FLAG_ANIMATION = 64,
		FLAG_MESH = 128,
		FLAG_HITBOX = 256,
		FLAG_RETARGET_SRC = 512,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
		FLAG_BONE_HIDDEN = 131072,
		FLAG_BONE_MERGE_READ = 262144,
		FLAG_BONE_MERGE_WRITE = 524288,
		FLAG_ALL_BONE_FLAGS = 1048575,
		BLEND_PREALIGNED = 1048576,
		FLAG_RIGIDLENGTH = 2097152,
		FLAG_PROCEDURAL = 4194304,
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:127 */
	class BoneDict_t : public CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > {
	public:
		/* class CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:130 */
		void BoneDict_t(BoneDict_t* );
	};
	/* ../public/modellib/model.h:135 */
	class BoneDictInverted_t : public CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > {
	public:
		/* class CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:138 */
		void BoneDictInverted_t(BoneDictInverted_t* );
	};
	/* ../public/modellib/model.h:88 */
	void CModelSkeleton(CModelSkeleton* );
	/* ../public/modellib/model.h:89 */
	void InitFromOldData(CModelSkeleton* , const ModelSkeletonData_t* );
	/* ../public/modellib/model.h:90 */
	void Finalize(CModelSkeleton* );
	/* ../public/modellib/model.h:92 */
	int NumBonesForLOD(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:93 */
	int NumBones(const CModelSkeleton* );
	/* ../public/modellib/model.h:94 */
	int GetParent(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:95 */
	BoneFlags_t GetFlags(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:96 */
	const char* GetBoneNameByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:97 */
	float Sphere(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:98 */
	Vector GetPosParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:99 */
	Quaternion GetRotParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:86 */
	typedef int16 ParentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:100 */
	const ParentIndex_t* GetParentArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:101 */
	const float* GetSphereArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:103 */
	void GetBindPoseParentTransform(const CModelSkeleton* , int, matrix3x4a_t& );
	/* ../public/modellib/model.h:104 */
	CTransform GetBindPoseParentTransform(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:105 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , int, CTransform* );
	/* ../public/modellib/model.h:106 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , float, int, CTransform* );
	/* ../public/modellib/model.h:108 */
	void GetBindPoseWorldTransform(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:109 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:110 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const matrix3x4a_t& , int, matrix3x4a_t* );
	/* ../public/modellib/model.h:111 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, int, matrix3x4a_t* );
	/* ../public/modellib/model.h:112 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, CTransform* );
	/* ../public/modellib/model.h:113 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, int, CTransform* );
	/* ../public/modellib/model.h:114 */
	const CTransform& GetInvBindPose(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:115 */
	const CTransform* GetInvBindPoses(const CModelSkeleton* );
	/* ../public/modellib/model.h:117 */
	int BuildBoneMergeList(const CModelSkeleton* , const CModelSkeleton* , bone_merge_list_t* , int, float);
	/* ../public/modellib/model.h:118 */
	int FindBoneIndex(const CModelSkeleton* , const char* );
	/* ../public/modellib/model.h:119 */
	int FindBoneIndexByHash(const CModelSkeleton* , uint32);
	/* ../public/modellib/model.h:120 */
	int GetBoneHashByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:121 */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CModelSkeleton* , const CTransform& , int, const CTransform* , CTransform* );
	/* ../public/modellib/model.h:123 */
	void GetBoneSubtree(const CModelSkeleton* , int, CVarBitVec* );
	/* ../public/modellib/model.h:125 */
	void CalcInvBindPose(CModelSkeleton* );
	BoneDict_t m_boneDict; /* 0 32 */
	BoneDictInverted_t m_boneDictInverted; /* 32 32 */
	uint16 m_pBonesPerLod[8]; /* 64 16 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneName; /* 80 32 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_nParent; /* 112 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_boneSphere; /* 144 32 */
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > m_nFlag; /* 176 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_bonePosParent; /* 208 32 */
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > m_boneRotParent; /* 240 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_invBindPose; /* 272 32 */
	void CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonC4Ev */
	void InitFromOldData(class CModelSkeleton *, const class ModelSkeletonData_t  *); /* linkage=_ZN14CModelSkeleton15InitFromOldDataEPK19ModelSkeletonData_t */
	void Finalize(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton8FinalizeEv */
	/* <4aecba1> modellib/model.cpp:265 */
	int NumBonesForLOD(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14NumBonesForLODEi */
	/* <4aec49f> modellib/model.cpp:40 */
	int NumBones(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton8NumBonesEv */
	/* <4aec4f8> modellib/model.cpp:47 */
	int GetParent(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton9GetParentEi */
	/* <4aec5bf> modellib/model.cpp:56 */
	enum BoneFlags_t GetFlags(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton8GetFlagsEi */
	/* <4aec6c9> modellib/model.cpp:65 */
	const char  * GetBoneNameByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneNameByIndexEi */
	/* <4aec820> modellib/model.cpp:74 */
	float Sphere(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton6SphereEi */
	/* <4aec92a> modellib/model.cpp:83 */
	class Vector GetPosParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetPosParentSpaceEi */
	/* <4aecaa1> modellib/model.cpp:92 */
	class Quaternion GetRotParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetRotParentSpaceEi */
	const ParentIndex_t  * GetParentArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetParentArrayEv */
	const float  * GetSphereArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetSphereArrayEv */
	void GetBindPoseParentTransform(const class CModelSkeleton  *, int, class matrix3x4a_t &); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEiR12matrix3x4a_t */
	class CTransform GetBindPoseParentTransform(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEi */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEiP10CTransform */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEfiP10CTransform */
	void GetBindPoseWorldTransform(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton25GetBindPoseWorldTransformERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class matrix3x4a_t  &, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK12matrix3x4a_tiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiiP12matrix3x4a_t */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiiPS0_ */
	const class CTransform  & GetInvBindPose(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14GetInvBindPoseEi */
	const class CTransform  * GetInvBindPoses(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton15GetInvBindPosesEv */
	int BuildBoneMergeList(const class CModelSkeleton  *, const class CModelSkeleton  *, class bone_merge_list_t *, int, float); /* linkage=_ZNK14CModelSkeleton18BuildBoneMergeListEPKS_P17bone_merge_list_tif */
	/* <4aecc32> modellib/model.cpp:332 */
	int FindBoneIndex(const class CModelSkeleton  *, const char  *); /* linkage=_ZNK14CModelSkeleton13FindBoneIndexEPKc */
	int FindBoneIndexByHash(const class CModelSkeleton  *, uint32); /* linkage=_ZNK14CModelSkeleton19FindBoneIndexByHashEj */
	/* <4aecdc1> modellib/model.cpp:348 */
	int GetBoneHashByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneHashByIndexEi */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const class CModelSkeleton  *, const class CTransform  &, int, const class CTransform  *, class CTransform *); /* linkage=_ZNK14CModelSkeleton52ComputeParentSpaceTransformsFromWorldSpaceTransformsERK10CTransformiPS1_PS0_ */
	void GetBoneSubtree(const class CModelSkeleton  *, int, class CVarBitVec *); /* linkage=_ZNK14CModelSkeleton14GetBoneSubtreeEiP10CVarBitVec */
	void CalcInvBindPose(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton15CalcInvBindPoseEv */
	void ~CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonD4Ev */
	class CModelSkeleton & operator=(class CModelSkeleton *, const class CModelSkeleton  &); /* linkage=_ZN14CModelSkeletonaSERKS_ */
};

// <01099E1D> ../public/modellib/model.h:50
// member functions: 69
// member variables: 10
// class size: 304
class CModelSkeleton {
	/* ../public/modellib/model.h:53 */
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 4,
		FLAG_CLOTH = 8,
		FLAG_PHYSICS = 16,
		FLAG_ATTACHMENT = 32,
		FLAG_ANIMATION = 64,
		FLAG_MESH = 128,
		FLAG_HITBOX = 256,
		FLAG_RETARGET_SRC = 512,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
		FLAG_BONE_HIDDEN = 131072,
		FLAG_BONE_MERGE_READ = 262144,
		FLAG_BONE_MERGE_WRITE = 524288,
		FLAG_ALL_BONE_FLAGS = 1048575,
		BLEND_PREALIGNED = 1048576,
		FLAG_RIGIDLENGTH = 2097152,
		FLAG_PROCEDURAL = 4194304,
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:127 */
	class BoneDict_t : public CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > {
	public:
		/* class CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:130 */
		void BoneDict_t(BoneDict_t* );
		void ~BoneDict_t(BoneDict_t* );
	};
	/* ../public/modellib/model.h:135 */
	class BoneDictInverted_t : public CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > {
	public:
		/* class CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:138 */
		void BoneDictInverted_t(BoneDictInverted_t* );
	};
	/* ../public/modellib/model.h:88 */
	void CModelSkeleton(CModelSkeleton* );
	/* ../public/modellib/model.h:89 */
	void InitFromOldData(CModelSkeleton* , const ModelSkeletonData_t* );
	/* ../public/modellib/model.h:90 */
	void Finalize(CModelSkeleton* );
	/* ../public/modellib/model.h:92 */
	int NumBonesForLOD(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:93 */
	int NumBones(const CModelSkeleton* );
	/* ../public/modellib/model.h:94 */
	int GetParent(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:95 */
	BoneFlags_t GetFlags(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:96 */
	const char* GetBoneNameByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:97 */
	float Sphere(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:98 */
	Vector GetPosParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:99 */
	Quaternion GetRotParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:86 */
	typedef int16 ParentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:100 */
	const ParentIndex_t* GetParentArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:101 */
	const float* GetSphereArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:103 */
	void GetBindPoseParentTransform(const CModelSkeleton* , int, matrix3x4a_t& );
	/* ../public/modellib/model.h:104 */
	CTransform GetBindPoseParentTransform(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:105 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , int, CTransform* );
	/* ../public/modellib/model.h:106 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , float, int, CTransform* );
	/* ../public/modellib/model.h:108 */
	void GetBindPoseWorldTransform(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:109 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:110 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const matrix3x4a_t& , int, matrix3x4a_t* );
	/* ../public/modellib/model.h:111 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, int, matrix3x4a_t* );
	/* ../public/modellib/model.h:112 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, CTransform* );
	/* ../public/modellib/model.h:113 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, int, CTransform* );
	/* ../public/modellib/model.h:114 */
	const CTransform& GetInvBindPose(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:115 */
	const CTransform* GetInvBindPoses(const CModelSkeleton* );
	/* ../public/modellib/model.h:117 */
	int BuildBoneMergeList(const CModelSkeleton* , const CModelSkeleton* , bone_merge_list_t* , int, float);
	/* ../public/modellib/model.h:118 */
	int FindBoneIndex(const CModelSkeleton* , const char* );
	/* ../public/modellib/model.h:119 */
	int FindBoneIndexByHash(const CModelSkeleton* , uint32);
	/* ../public/modellib/model.h:120 */
	int GetBoneHashByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:121 */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CModelSkeleton* , const CTransform& , int, const CTransform* , CTransform* );
	/* ../public/modellib/model.h:123 */
	void GetBoneSubtree(const CModelSkeleton* , int, CVarBitVec* );
	/* ../public/modellib/model.h:125 */
	void CalcInvBindPose(CModelSkeleton* );
	BoneDict_t m_boneDict; /* 0 32 */
	BoneDictInverted_t m_boneDictInverted; /* 32 32 */
	uint16 m_pBonesPerLod[8]; /* 64 16 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneName; /* 80 32 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_nParent; /* 112 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_boneSphere; /* 144 32 */
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > m_nFlag; /* 176 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_bonePosParent; /* 208 32 */
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > m_boneRotParent; /* 240 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_invBindPose; /* 272 32 */
	void CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonC4Ev */
	void InitFromOldData(class CModelSkeleton *, const class ModelSkeletonData_t  *); /* linkage=_ZN14CModelSkeleton15InitFromOldDataEPK19ModelSkeletonData_t */
	void Finalize(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton8FinalizeEv */
	/* <4aecba1> modellib/model.cpp:265 */
	int NumBonesForLOD(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14NumBonesForLODEi */
	/* <4aec49f> modellib/model.cpp:40 */
	int NumBones(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton8NumBonesEv */
	/* <4aec4f8> modellib/model.cpp:47 */
	int GetParent(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton9GetParentEi */
	/* <4aec5bf> modellib/model.cpp:56 */
	enum BoneFlags_t GetFlags(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton8GetFlagsEi */
	/* <4aec6c9> modellib/model.cpp:65 */
	const char  * GetBoneNameByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneNameByIndexEi */
	/* <4aec820> modellib/model.cpp:74 */
	float Sphere(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton6SphereEi */
	/* <4aec92a> modellib/model.cpp:83 */
	class Vector GetPosParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetPosParentSpaceEi */
	/* <4aecaa1> modellib/model.cpp:92 */
	class Quaternion GetRotParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetRotParentSpaceEi */
	const ParentIndex_t  * GetParentArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetParentArrayEv */
	const float  * GetSphereArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetSphereArrayEv */
	void GetBindPoseParentTransform(const class CModelSkeleton  *, int, class matrix3x4a_t &); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEiR12matrix3x4a_t */
	class CTransform GetBindPoseParentTransform(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEi */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEiP10CTransform */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEfiP10CTransform */
	void GetBindPoseWorldTransform(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton25GetBindPoseWorldTransformERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class matrix3x4a_t  &, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK12matrix3x4a_tiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiiP12matrix3x4a_t */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiiPS0_ */
	const class CTransform  & GetInvBindPose(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14GetInvBindPoseEi */
	const class CTransform  * GetInvBindPoses(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton15GetInvBindPosesEv */
	int BuildBoneMergeList(const class CModelSkeleton  *, const class CModelSkeleton  *, class bone_merge_list_t *, int, float); /* linkage=_ZNK14CModelSkeleton18BuildBoneMergeListEPKS_P17bone_merge_list_tif */
	/* <4aecc32> modellib/model.cpp:332 */
	int FindBoneIndex(const class CModelSkeleton  *, const char  *); /* linkage=_ZNK14CModelSkeleton13FindBoneIndexEPKc */
	int FindBoneIndexByHash(const class CModelSkeleton  *, uint32); /* linkage=_ZNK14CModelSkeleton19FindBoneIndexByHashEj */
	/* <4aecdc1> modellib/model.cpp:348 */
	int GetBoneHashByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneHashByIndexEi */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const class CModelSkeleton  *, const class CTransform  &, int, const class CTransform  *, class CTransform *); /* linkage=_ZNK14CModelSkeleton52ComputeParentSpaceTransformsFromWorldSpaceTransformsERK10CTransformiPS1_PS0_ */
	void GetBoneSubtree(const class CModelSkeleton  *, int, class CVarBitVec *); /* linkage=_ZNK14CModelSkeleton14GetBoneSubtreeEiP10CVarBitVec */
	void CalcInvBindPose(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton15CalcInvBindPoseEv */
	void ~CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonD4Ev */
	class CModelSkeleton & operator=(class CModelSkeleton *, const class CModelSkeleton  &); /* linkage=_ZN14CModelSkeletonaSERKS_ */
};

// <04A1170B> ../public/modellib/model.h:50
// member functions: 71
// member variables: 10
// class size: 304
class CModelSkeleton {
	/* ../public/modellib/model.h:53 */
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 4,
		FLAG_CLOTH = 8,
		FLAG_PHYSICS = 16,
		FLAG_ATTACHMENT = 32,
		FLAG_ANIMATION = 64,
		FLAG_MESH = 128,
		FLAG_HITBOX = 256,
		FLAG_RETARGET_SRC = 512,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
		FLAG_BONE_HIDDEN = 131072,
		FLAG_BONE_MERGE_READ = 262144,
		FLAG_BONE_MERGE_WRITE = 524288,
		FLAG_ALL_BONE_FLAGS = 1048575,
		BLEND_PREALIGNED = 1048576,
		FLAG_RIGIDLENGTH = 2097152,
		FLAG_PROCEDURAL = 4194304,
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:127 */
	class BoneDict_t : public CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > {
	public:
		/* class CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:130 */
		void BoneDict_t(BoneDict_t* );
		void ~BoneDict_t(BoneDict_t* );
	};
	/* ../public/modellib/model.h:135 */
	class BoneDictInverted_t : public CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > {
	public:
		/* class CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:138 */
		void BoneDictInverted_t(BoneDictInverted_t* );
		void ~BoneDictInverted_t(BoneDictInverted_t* );
	};
	/* ../public/modellib/model.h:88 */
	void CModelSkeleton(CModelSkeleton* );
	/* ../public/modellib/model.h:89 */
	void InitFromOldData(CModelSkeleton* , const ModelSkeletonData_t* );
	/* ../public/modellib/model.h:90 */
	void Finalize(CModelSkeleton* );
	/* ../public/modellib/model.h:92 */
	int NumBonesForLOD(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:93 */
	int NumBones(const CModelSkeleton* );
	/* ../public/modellib/model.h:94 */
	int GetParent(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:95 */
	BoneFlags_t GetFlags(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:96 */
	const char* GetBoneNameByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:97 */
	float Sphere(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:98 */
	Vector GetPosParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:99 */
	Quaternion GetRotParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:86 */
	typedef int16 ParentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:100 */
	const ParentIndex_t* GetParentArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:101 */
	const float* GetSphereArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:103 */
	void GetBindPoseParentTransform(const CModelSkeleton* , int, matrix3x4a_t& );
	/* ../public/modellib/model.h:104 */
	CTransform GetBindPoseParentTransform(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:105 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , int, CTransform* );
	/* ../public/modellib/model.h:106 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , float, int, CTransform* );
	/* ../public/modellib/model.h:108 */
	void GetBindPoseWorldTransform(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:109 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:110 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const matrix3x4a_t& , int, matrix3x4a_t* );
	/* ../public/modellib/model.h:111 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, int, matrix3x4a_t* );
	/* ../public/modellib/model.h:112 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, CTransform* );
	/* ../public/modellib/model.h:113 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, int, CTransform* );
	/* ../public/modellib/model.h:114 */
	const CTransform& GetInvBindPose(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:115 */
	const CTransform* GetInvBindPoses(const CModelSkeleton* );
	/* ../public/modellib/model.h:117 */
	int BuildBoneMergeList(const CModelSkeleton* , const CModelSkeleton* , bone_merge_list_t* , int, float);
	/* ../public/modellib/model.h:118 */
	int FindBoneIndex(const CModelSkeleton* , const char* );
	/* ../public/modellib/model.h:119 */
	int FindBoneIndexByHash(const CModelSkeleton* , uint32);
	/* ../public/modellib/model.h:120 */
	int GetBoneHashByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:121 */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CModelSkeleton* , const CTransform& , int, const CTransform* , CTransform* );
	/* ../public/modellib/model.h:123 */
	void GetBoneSubtree(const CModelSkeleton* , int, CVarBitVec* );
	/* ../public/modellib/model.h:125 */
	void CalcInvBindPose(CModelSkeleton* );
	BoneDict_t m_boneDict; /* 0 32 */
	BoneDictInverted_t m_boneDictInverted; /* 32 32 */
	uint16 m_pBonesPerLod[8]; /* 64 16 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneName; /* 80 32 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_nParent; /* 112 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_boneSphere; /* 144 32 */
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > m_nFlag; /* 176 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_bonePosParent; /* 208 32 */
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > m_boneRotParent; /* 240 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_invBindPose; /* 272 32 */
	void ~CModelSkeleton(CModelSkeleton* );
	void CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonC4Ev */
	void InitFromOldData(class CModelSkeleton *, const class ModelSkeletonData_t  *); /* linkage=_ZN14CModelSkeleton15InitFromOldDataEPK19ModelSkeletonData_t */
	void Finalize(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton8FinalizeEv */
	/* <4aecba1> modellib/model.cpp:265 */
	int NumBonesForLOD(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14NumBonesForLODEi */
	/* <4aec49f> modellib/model.cpp:40 */
	int NumBones(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton8NumBonesEv */
	/* <4aec4f8> modellib/model.cpp:47 */
	int GetParent(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton9GetParentEi */
	/* <4aec5bf> modellib/model.cpp:56 */
	enum BoneFlags_t GetFlags(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton8GetFlagsEi */
	/* <4aec6c9> modellib/model.cpp:65 */
	const char  * GetBoneNameByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneNameByIndexEi */
	/* <4aec820> modellib/model.cpp:74 */
	float Sphere(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton6SphereEi */
	/* <4aec92a> modellib/model.cpp:83 */
	class Vector GetPosParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetPosParentSpaceEi */
	/* <4aecaa1> modellib/model.cpp:92 */
	class Quaternion GetRotParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetRotParentSpaceEi */
	const ParentIndex_t  * GetParentArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetParentArrayEv */
	const float  * GetSphereArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetSphereArrayEv */
	void GetBindPoseParentTransform(const class CModelSkeleton  *, int, class matrix3x4a_t &); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEiR12matrix3x4a_t */
	class CTransform GetBindPoseParentTransform(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEi */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEiP10CTransform */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEfiP10CTransform */
	void GetBindPoseWorldTransform(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton25GetBindPoseWorldTransformERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class matrix3x4a_t  &, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK12matrix3x4a_tiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiiP12matrix3x4a_t */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiiPS0_ */
	const class CTransform  & GetInvBindPose(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14GetInvBindPoseEi */
	const class CTransform  * GetInvBindPoses(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton15GetInvBindPosesEv */
	int BuildBoneMergeList(const class CModelSkeleton  *, const class CModelSkeleton  *, class bone_merge_list_t *, int, float); /* linkage=_ZNK14CModelSkeleton18BuildBoneMergeListEPKS_P17bone_merge_list_tif */
	/* <4aecc32> modellib/model.cpp:332 */
	int FindBoneIndex(const class CModelSkeleton  *, const char  *); /* linkage=_ZNK14CModelSkeleton13FindBoneIndexEPKc */
	int FindBoneIndexByHash(const class CModelSkeleton  *, uint32); /* linkage=_ZNK14CModelSkeleton19FindBoneIndexByHashEj */
	/* <4aecdc1> modellib/model.cpp:348 */
	int GetBoneHashByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneHashByIndexEi */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const class CModelSkeleton  *, const class CTransform  &, int, const class CTransform  *, class CTransform *); /* linkage=_ZNK14CModelSkeleton52ComputeParentSpaceTransformsFromWorldSpaceTransformsERK10CTransformiPS1_PS0_ */
	void GetBoneSubtree(const class CModelSkeleton  *, int, class CVarBitVec *); /* linkage=_ZNK14CModelSkeleton14GetBoneSubtreeEiP10CVarBitVec */
	void CalcInvBindPose(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton15CalcInvBindPoseEv */
	void ~CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonD4Ev */
	class CModelSkeleton & operator=(class CModelSkeleton *, const class CModelSkeleton  &); /* linkage=_ZN14CModelSkeletonaSERKS_ */
};

// <04DFEEF7> ../public/modellib/model.h:50
// member functions: 71
// member variables: 10
// class size: 304
class CModelSkeleton {
	/* ../public/modellib/model.h:53 */
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 4,
		FLAG_CLOTH = 8,
		FLAG_PHYSICS = 16,
		FLAG_ATTACHMENT = 32,
		FLAG_ANIMATION = 64,
		FLAG_MESH = 128,
		FLAG_HITBOX = 256,
		FLAG_RETARGET_SRC = 512,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
		FLAG_BONE_HIDDEN = 131072,
		FLAG_BONE_MERGE_READ = 262144,
		FLAG_BONE_MERGE_WRITE = 524288,
		FLAG_ALL_BONE_FLAGS = 1048575,
		BLEND_PREALIGNED = 1048576,
		FLAG_RIGIDLENGTH = 2097152,
		FLAG_PROCEDURAL = 4194304,
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:127 */
	class BoneDict_t : public CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > {
	public:
		/* class CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:130 */
		void BoneDict_t(BoneDict_t* );
		BoneDict_t& operator=(BoneDict_t* , const BoneDict_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:135 */
	class BoneDictInverted_t : public CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > {
	public:
		/* class CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int> > <ancestor>; */ /* 0 32 */
		/* ../public/modellib/model.h:138 */
		void BoneDictInverted_t(BoneDictInverted_t* );
		BoneDictInverted_t& operator=(BoneDictInverted_t* , const BoneDictInverted_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:88 */
	void CModelSkeleton(CModelSkeleton* );
	/* ../public/modellib/model.h:89 */
	void InitFromOldData(CModelSkeleton* , const ModelSkeletonData_t* );
	/* ../public/modellib/model.h:90 */
	void Finalize(CModelSkeleton* );
	/* ../public/modellib/model.h:92 */
	int NumBonesForLOD(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:93 */
	int NumBones(const CModelSkeleton* );
	/* ../public/modellib/model.h:94 */
	int GetParent(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:95 */
	BoneFlags_t GetFlags(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:96 */
	const char* GetBoneNameByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:97 */
	float Sphere(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:98 */
	Vector GetPosParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:99 */
	Quaternion GetRotParentSpace(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:86 */
	typedef int16 ParentIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/model.h:100 */
	const ParentIndex_t* GetParentArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:101 */
	const float* GetSphereArray(const CModelSkeleton* );
	/* ../public/modellib/model.h:103 */
	void GetBindPoseParentTransform(const CModelSkeleton* , int, matrix3x4a_t& );
	/* ../public/modellib/model.h:104 */
	CTransform GetBindPoseParentTransform(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:105 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , int, CTransform* );
	/* ../public/modellib/model.h:106 */
	void GetBindPoseParentTransforms(const CModelSkeleton* , float, int, CTransform* );
	/* ../public/modellib/model.h:108 */
	void GetBindPoseWorldTransform(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:109 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, CTransform* );
	/* ../public/modellib/model.h:110 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const matrix3x4a_t& , int, matrix3x4a_t* );
	/* ../public/modellib/model.h:111 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , int, int, matrix3x4a_t* );
	/* ../public/modellib/model.h:112 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, CTransform* );
	/* ../public/modellib/model.h:113 */
	void GetBindPoseWorldTransforms(const CModelSkeleton* , const CTransform& , float, int, int, CTransform* );
	/* ../public/modellib/model.h:114 */
	const CTransform& GetInvBindPose(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:115 */
	const CTransform* GetInvBindPoses(const CModelSkeleton* );
	/* ../public/modellib/model.h:117 */
	int BuildBoneMergeList(const CModelSkeleton* , const CModelSkeleton* , bone_merge_list_t* , int, float);
	/* ../public/modellib/model.h:118 */
	int FindBoneIndex(const CModelSkeleton* , const char* );
	/* ../public/modellib/model.h:119 */
	int FindBoneIndexByHash(const CModelSkeleton* , uint32);
	/* ../public/modellib/model.h:120 */
	int GetBoneHashByIndex(const CModelSkeleton* , int);
	/* ../public/modellib/model.h:121 */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CModelSkeleton* , const CTransform& , int, const CTransform* , CTransform* );
	/* ../public/modellib/model.h:123 */
	void GetBoneSubtree(const CModelSkeleton* , int, CVarBitVec* );
	/* ../public/modellib/model.h:125 */
	void CalcInvBindPose(CModelSkeleton* );
	BoneDict_t m_boneDict; /* 0 32 */
	BoneDictInverted_t m_boneDictInverted; /* 32 32 */
	uint16 m_pBonesPerLod[8]; /* 64 16 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_boneName; /* 80 32 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_nParent; /* 112 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_boneSphere; /* 144 32 */
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > m_nFlag; /* 176 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_bonePosParent; /* 208 32 */
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > m_boneRotParent; /* 240 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_invBindPose; /* 272 32 */
	CModelSkeleton& operator=(CModelSkeleton* , const CModelSkeleton& );
	void CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonC4Ev */
	void InitFromOldData(class CModelSkeleton *, const class ModelSkeletonData_t  *); /* linkage=_ZN14CModelSkeleton15InitFromOldDataEPK19ModelSkeletonData_t */
	void Finalize(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton8FinalizeEv */
	/* <4aecba1> modellib/model.cpp:265 */
	int NumBonesForLOD(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14NumBonesForLODEi */
	/* <4aec49f> modellib/model.cpp:40 */
	int NumBones(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton8NumBonesEv */
	/* <4aec4f8> modellib/model.cpp:47 */
	int GetParent(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton9GetParentEi */
	/* <4aec5bf> modellib/model.cpp:56 */
	enum BoneFlags_t GetFlags(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton8GetFlagsEi */
	/* <4aec6c9> modellib/model.cpp:65 */
	const char  * GetBoneNameByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneNameByIndexEi */
	/* <4aec820> modellib/model.cpp:74 */
	float Sphere(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton6SphereEi */
	/* <4aec92a> modellib/model.cpp:83 */
	class Vector GetPosParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetPosParentSpaceEi */
	/* <4aecaa1> modellib/model.cpp:92 */
	class Quaternion GetRotParentSpace(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton17GetRotParentSpaceEi */
	const ParentIndex_t  * GetParentArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetParentArrayEv */
	const float  * GetSphereArray(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton14GetSphereArrayEv */
	void GetBindPoseParentTransform(const class CModelSkeleton  *, int, class matrix3x4a_t &); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEiR12matrix3x4a_t */
	class CTransform GetBindPoseParentTransform(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton26GetBindPoseParentTransformEi */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEiP10CTransform */
	void GetBindPoseParentTransforms(const class CModelSkeleton  *, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton27GetBindPoseParentTransformsEfiP10CTransform */
	void GetBindPoseWorldTransform(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton25GetBindPoseWorldTransformERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class matrix3x4a_t  &, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK12matrix3x4a_tiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, int, int, class matrix3x4a_t *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformiiP12matrix3x4a_t */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiPS0_ */
	void GetBindPoseWorldTransforms(const class CModelSkeleton  *, const class CTransform  &, float, int, int, class CTransform *); /* linkage=_ZNK14CModelSkeleton26GetBindPoseWorldTransformsERK10CTransformfiiPS0_ */
	const class CTransform  & GetInvBindPose(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton14GetInvBindPoseEi */
	const class CTransform  * GetInvBindPoses(const class CModelSkeleton  *); /* linkage=_ZNK14CModelSkeleton15GetInvBindPosesEv */
	int BuildBoneMergeList(const class CModelSkeleton  *, const class CModelSkeleton  *, class bone_merge_list_t *, int, float); /* linkage=_ZNK14CModelSkeleton18BuildBoneMergeListEPKS_P17bone_merge_list_tif */
	/* <4aecc32> modellib/model.cpp:332 */
	int FindBoneIndex(const class CModelSkeleton  *, const char  *); /* linkage=_ZNK14CModelSkeleton13FindBoneIndexEPKc */
	int FindBoneIndexByHash(const class CModelSkeleton  *, uint32); /* linkage=_ZNK14CModelSkeleton19FindBoneIndexByHashEj */
	/* <4aecdc1> modellib/model.cpp:348 */
	int GetBoneHashByIndex(const class CModelSkeleton  *, int); /* linkage=_ZNK14CModelSkeleton18GetBoneHashByIndexEi */
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const class CModelSkeleton  *, const class CTransform  &, int, const class CTransform  *, class CTransform *); /* linkage=_ZNK14CModelSkeleton52ComputeParentSpaceTransformsFromWorldSpaceTransformsERK10CTransformiPS1_PS0_ */
	void GetBoneSubtree(const class CModelSkeleton  *, int, class CVarBitVec *); /* linkage=_ZNK14CModelSkeleton14GetBoneSubtreeEiP10CVarBitVec */
	void CalcInvBindPose(class CModelSkeleton *); /* linkage=_ZN14CModelSkeleton15CalcInvBindPoseEv */
	void ~CModelSkeleton(class CModelSkeleton *); /* linkage=_ZN14CModelSkeletonD4Ev */
	class CModelSkeleton & operator=(class CModelSkeleton *, const class CModelSkeleton  &); /* linkage=_ZN14CModelSkeletonaSERKS_ */
};

// <04E444BE> ../public/modellib/model.h:127
inline void BoneDict_t::operator=(const BoneDict_t &)
{
} /* size: 0 */

// <04BD87A9> ../public/modellib/model.h:127
void BoneDict_t::~BoneDict_t()
{
} /* size: 0 */

// <04BD878D> ../public/modellib/model.h:127
inline void BoneDict_t::~BoneDict_t()
{
} /* size: 0 */

// <04BDE2B6> ../public/modellib/model.h:130
void BoneDict_t::BoneDict_t()
{
} /* size: 0 */

// <04BDE29D> ../public/modellib/model.h:130
inline void BoneDict_t::BoneDict_t()
{
} /* size: 0 */

// <04E44491> ../public/modellib/model.h:135
inline void BoneDictInverted_t::operator=(const BoneDictInverted_t &)
{
} /* size: 0 */

// <04ADB841> ../public/modellib/model.h:135
void BoneDictInverted_t::~BoneDictInverted_t()
{
} /* size: 0 */

// <04ADB825> ../public/modellib/model.h:135
inline void BoneDictInverted_t::~BoneDictInverted_t()
{
} /* size: 0 */

// <04AE3435> ../public/modellib/model.h:138
void BoneDictInverted_t::BoneDictInverted_t()
{
} /* size: 0 */

// <04AE341C> ../public/modellib/model.h:138
inline void BoneDictInverted_t::BoneDictInverted_t()
{
} /* size: 0 */

// <03B9B829> ../public/modellib/model.h:161
inline BoneFlags_t LODGroupMaskToBoneFlags(LODGroupMask_t lodGroupMask)
{
} /* size: 0 */

// <04E48E4A> ../public/modellib/model.h:163
inline BoneFlags_t operator<<(BoneFlags_t a, int b)
{
} /* size: 0 */

// <00D21A6B> ../public/modellib/model.h:163
inline BoneFlags_t operator|(BoneFlags_t a, BoneFlags_t b)
{
} /* size: 0 */

// <0022B74D> ../public/modellib/model.h:163
inline BoneFlags_t operator>>(BoneFlags_t a, int b)
{
} /* size: 0 */

// <04A1946B> ../public/modellib/model.h:168
// member variables: 5
// struct size: 48
struct AttachmentPairing_t {
	uint32 m_nAttachmentHash; /* 0 4 */
	const class CAttachment * m_pAttachment; /* 8 8 */
	int32 m_nTransformIndices[3]; /* 16 12 */
	float m_pWeights[3]; /* 28 12 */
	uint8 m_nAttachmentIndex; /* 40 1 */
};

// <04A194C9> ../public/modellib/model.h:190
// member variables: 2
// struct size: 16
struct HitBoxSetAndMesh_t {
	const class CHitBoxSet * m_pHitBoxSet; /* 0 8 */
	int m_nRenderMesh; /* 8 4 */
};

// <04A19555> ../public/modellib/model.h:197
// member variables: 2
// struct size: 16
struct HitBoxAndMesh_t {
	const class CHitBox * m_pHitBox; /* 0 8 */
	int m_nRenderMesh; /* 8 4 */
};

// <04E394CB> ../public/modellib/model.h:245
inline void CModelMaterialGroup::operator=(const CModelMaterialGroup &)
{
} /* size: 0 */

// <04E37AD2> ../public/modellib/model.h:245
void CModelMaterialGroup::~CModelMaterialGroup()
{
} /* size: 0 */

// <04E37AB6> ../public/modellib/model.h:245
inline void CModelMaterialGroup::~CModelMaterialGroup()
{
} /* size: 0 */

// <04E342E1> ../public/modellib/model.h:245
void CModelMaterialGroup::CModelMaterialGroup()
{
} /* size: 0 */

// <04E342C5> ../public/modellib/model.h:245
inline void CModelMaterialGroup::CModelMaterialGroup()
{
} /* size: 0 */

// <04A1AD6B> ../public/modellib/model.h:245
// member function: 1
// member variables: 2
// struct size: 40
struct CModelMaterialGroup {
	CUtlString m_name; /* 0 8 */
	CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int> > m_materials; /* 8 32 */
	void ~CModelMaterialGroup(CModelMaterialGroup* );
};

// <0029E77D> ../public/modellib/model.h:245
// member functions: 2
// member variables: 2
// struct size: 40
struct CModelMaterialGroup {
	CUtlString m_name; /* 0 8 */
	CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int> > m_materials; /* 8 32 */
	void CModelMaterialGroup(CModelMaterialGroup* );
	void ~CModelMaterialGroup(CModelMaterialGroup* );
};

// <04E3746B> ../public/modellib/model.h:267
void CBoneFlexDriverControl::~CBoneFlexDriverControl()
{
} /* size: 0 */

// <04E3744E> ../public/modellib/model.h:267
inline void CBoneFlexDriverControl::~CBoneFlexDriverControl()
{
} /* size: 0 */

// <04E33FB4> ../public/modellib/model.h:267
void CBoneFlexDriverControl::CBoneFlexDriverControl()
{
} /* size: 0 */

// <04E33F97> ../public/modellib/model.h:267
inline void CBoneFlexDriverControl::CBoneFlexDriverControl()
{
} /* size: 0 */

// <04E33481> ../public/modellib/model.h:267
inline void CBoneFlexDriverControl::operator=(const CBoneFlexDriverControl &)
{
} /* size: 0 */

// <04A1ADDF> ../public/modellib/model.h:267
// member function: 1
// member variables: 5
// struct size: 32
struct CBoneFlexDriverControl {
	BoneFlexComponent_t m_nBoneComponent; /* 0 4 */
	CUtlString m_flexController; /* 8 8 */
	CUtlStringToken m_flexControllerToken; /* 16 4 */
	float m_flMin; /* 20 4 */
	float m_flMax; /* 24 4 */
	void ~CBoneFlexDriverControl(CBoneFlexDriverControl* );
};

// <0029E80C> ../public/modellib/model.h:267
// member functions: 2
// member variables: 5
// struct size: 32
struct CBoneFlexDriverControl {
	BoneFlexComponent_t m_nBoneComponent; /* 0 4 */
	CUtlString m_flexController; /* 8 8 */
	CUtlStringToken m_flexControllerToken; /* 16 4 */
	float m_flMin; /* 20 4 */
	float m_flMax; /* 24 4 */
	void CBoneFlexDriverControl(CBoneFlexDriverControl* );
	void ~CBoneFlexDriverControl(CBoneFlexDriverControl* );
};

// <04E39439> ../public/modellib/model.h:280
inline void CBoneFlexDriver::operator=(const CBoneFlexDriver &)
{
} /* size: 0 */

// <04E3752B> ../public/modellib/model.h:280
void CBoneFlexDriver::~CBoneFlexDriver()
{
} /* size: 0 */

// <04E3750E> ../public/modellib/model.h:280
inline void CBoneFlexDriver::~CBoneFlexDriver()
{
} /* size: 0 */

// <04E340B7> ../public/modellib/model.h:280
void CBoneFlexDriver::CBoneFlexDriver()
{
} /* size: 0 */

// <04E3409A> ../public/modellib/model.h:280
inline void CBoneFlexDriver::CBoneFlexDriver()
{
} /* size: 0 */

// <04A1C582> ../public/modellib/model.h:280
// member function: 1
// member variables: 3
// struct size: 48
struct CBoneFlexDriver {
	CUtlString m_boneName; /* 0 8 */
	CUtlStringToken m_boneNameToken; /* 8 4 */
	CUtlVector<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> > m_controls; /* 16 32 */
	void ~CBoneFlexDriver(CBoneFlexDriver* );
};

// <0029FFC5> ../public/modellib/model.h:280
// member functions: 2
// member variables: 3
// struct size: 48
struct CBoneFlexDriver {
	CUtlString m_boneName; /* 0 8 */
	CUtlStringToken m_boneNameToken; /* 8 4 */
	CUtlVector<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> > m_controls; /* 16 32 */
	void CBoneFlexDriver(CBoneFlexDriver* );
	void ~CBoneFlexDriver(CBoneFlexDriver* );
};

// <04AA69A5> ../public/modellib/model.h:291
void StateDrivenMorph_t::~StateDrivenMorph_t()
{
} /* size: 0 */

// <04AA6988> ../public/modellib/model.h:291
inline void StateDrivenMorph_t::~StateDrivenMorph_t()
{
} /* size: 0 */

// <0034F9DE> ../public/modellib/model.h:291
void StateDrivenMorph_t::StateDrivenMorph_t()
{
} /* size: 0 */

// <0034F9C1> ../public/modellib/model.h:291
inline void StateDrivenMorph_t::StateDrivenMorph_t()
{
} /* size: 0 */

// <04A1C5DD> ../public/modellib/model.h:291
// member function: 1
// member variables: 2
// static member variable: 1
// struct size: 40
struct StateDrivenMorph_t {
	/* ../public/modellib/model.h:295 */
	struct Activator_t {
		int m_nGroupIndex; /* 0 4 */
		uint32 m_nAssociatedChoice; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const int GROUP_INDEX_FOR_MATERIALGROUP = 18446744073709551615; /* 0 0 */
	LocalFlexController_t m_nDrivenMorph; /* 0 4 */
	CUtlVector<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> > m_Activators; /* 8 32 */
	void ~StateDrivenMorph_t(StateDrivenMorph_t* );
};

// <002A003B> ../public/modellib/model.h:291
// member function: 1
// member variables: 2
// static member variable: 1
// struct size: 40
struct StateDrivenMorph_t {
	/* ../public/modellib/model.h:295 */
	struct Activator_t {
		int m_nGroupIndex; /* 0 4 */
		uint32 m_nAssociatedChoice; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const int GROUP_INDEX_FOR_MATERIALGROUP = 18446744073709551615; /* 0 0 */
	LocalFlexController_t m_nDrivenMorph; /* 0 4 */
	CUtlVector<StateDrivenMorph_t::Activator_t, CUtlMemory<StateDrivenMorph_t::Activator_t, int> > m_Activators; /* 8 32 */
	void StateDrivenMorph_t(StateDrivenMorph_t* );
};

// <00340B83> ../public/modellib/model.h:305
void ModelKV3FromString(const char *, KeyValues3 *)
{
} /* size: 0 */

// <049D75EE> ../public/modellib/model.h:311
// member functions: 436
// member variables: 50
// vtable entry: 1
// class size: 1,936
class CModel {
	/* ../public/modellib/model.h:654 */
	struct BodyPart_t {
		CUtlStringToken m_bodyPartToken; /* 0 4 */
		CUtlString m_bodyPartName; /* 8 8 */
		CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_subMeshMasks; /* 16 32 */
		MeshGroupMask_t m_nBodyPartMask; /* 48 8 */
		bool m_bHiddenInTools; /* 56 1 */
		void ~BodyPart_t(BodyPart_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CModel(CModel* , const CModel& );
	int ()(void) * * _vptr.CModel; /* 0 8 */
	/* ../public/modellib/model.h:317 */
	virtual bool IsInitialized(const CModel* );
	/* modellib/model.cpp:358 */
	void CModel(CModel* );
	/* ../public/modellib/model.h:323 */
	void PreInitFromV0Data(CModel* , const PermModelData_t* );
	/* ../public/modellib/model.h:324 */
	void InitFromV0Data(CModel* , CConvertOldDiskCtx& , const PermModelData_t* );
	/* ../public/modellib/model.h:325 */
	void InitFromModel(CModel* , HModel);
	/* modellib/model.cpp:365 */
	virtual void ~CModel(CModel* );
	/* modellib/model.cpp:374 */
	MeshGroupMask_t GetMeshGroupMaskForMesh(const CModel* , int);
	/* modellib/model.cpp:382 */
	MeshGroupMask_t GetDefaultMeshGroupMask(const CModel* );
	/* modellib/model.cpp:390 */
	MeshGroupMask_t GetMaskForMeshGroup(const CModel* , CUtlStringToken);
	/* modellib/model.cpp:404 */
	MeshGroupMask_t GetMaskForMeshGroup(const CModel* , const char* );
	/* modellib/model.cpp:409 */
	int GetNumMeshesInMeshGroup(const CModel* , int);
	/* modellib/model.cpp:428 */
	int GetIndexForMeshGroup(const CModel* , CUtlStringToken);
	/* modellib/model.cpp:442 */
	int GetNumMeshGroups(const CModel* );
	/* modellib/model.cpp:447 */
	const char* GetMeshGroupName(const CModel* , int);
	/* modellib/model.cpp:2775 */
	void GetMeshToolsGeometryInfo(const CModel* , int, const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >** );
	/* modellib/model.cpp:2780 */
	void GetModelRenderInfo(const CModel* , LODGroupMask_t, MeshGroupMask_t, int* , int* , int* , int* );
	/* modellib/model.cpp:456 */
	int GetBodyPartForName(const CModel* , CUtlStringToken);
	/* modellib/model.cpp:470 */
	int GetBodyPartForName(const CModel* , const char* );
	/* modellib/model.cpp:475 */
	const char* GetBodyPartName(const CModel* , int);
	/* modellib/model.cpp:480 */
	void GetBodyPartMeshName(const CModel* , int, int, CBufferString* );
	/* modellib/model.cpp:495 */
	int GetNumBodyParts(const CModel* );
	/* modellib/model.cpp:500 */
	int GetNumBodyPartMeshes(const CModel* , int);
	/* modellib/model.cpp:508 */
	MeshGroupMask_t GetBodyPartMask(const CModel* , int);
	/* modellib/model.cpp:516 */
	MeshGroupMask_t GetBodyPartMeshMask(const CModel* , int, int);
	/* modellib/model.cpp:527 */
	int FindMeshIndexForMask(const CModel* , int, MeshGroupMask_t);
	/* modellib/model.cpp:543 */
	bool IsBodyPartHiddenInTools(const CModel* , int);
	/* modellib/model.cpp:554 */
	int GetMaterialGroupIndex(const CModel* , CUtlStringToken);
	/* modellib/model.cpp:559 */
	int GetMaterialGroupIndex(const CModel* , uint32);
	/* modellib/model.cpp:609 */
	HMaterial GetMaterialReplacementForGroup(const CModel* , int, ResourceId_t);
	/* modellib/model.cpp:626 */
	CUtlStringToken GetMaterialGroupTokenForIndex(const CModel* , int);
	/* modellib/model.cpp:572 */
	void GetMaterialGroupList(const CModel* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* modellib/model.cpp:599 */
	int GetNumMaterialGroups(const CModel* );
	/* modellib/model.cpp:604 */
	const char* GetMaterialGroupName(const CModel* , int);
	/* modellib/model.cpp:586 */
	void GetMaterialGroupMaterials(const CModel* , int, CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> >* );
	/* modellib/model.cpp:1875 */
	int numskinfamilies(const CModel* );
	/* modellib/model.cpp:634 */
	void GetAllMaterials(const CModel* , CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> >& );
	/* modellib/model.cpp:649 */
	bool IsTranslucent(const CModel* );
	/* modellib/model.cpp:654 */
	bool IsTranslucentTwoPass(const CModel* );
	/* modellib/model.cpp:659 */
	bool IsRuntimeCombined(const CModel* );
	/* ../public/modellib/model.h:371 */
	ModelFlags_t GetModelFlags(const CModel* );
	/* modellib/model.cpp:665 */
	ModelFlags_t flags(const CModel* );
	/* modellib/model.cpp:670 */
	const char* pszName(const CModel* );
	/* modellib/model.cpp:675 */
	const char* name(const CModel* );
	/* ../public/modellib/model.h:375 */
	const char* GetModelName(const CModel* );
	/* modellib/model.cpp:683 */
	int GetNumMeshes(const CModel* );
	/* modellib/model.cpp:696 */
	CRenderMesh* GetMeshData(const CModel* , int);
	/* modellib/model.cpp:688 */
	bool HasMesh(const CModel* , int);
	/* modellib/model.cpp:704 */
	bool HasSkinnedMeshes(const CModel* );
	/* modellib/model.cpp:713 */
	int16 AllMeshesSkinnedToOneBone(const CModel* );
	/* modellib/model.cpp:748 */
	void GetMeshName(const CModel* , int, CBufferString* );
	/* modellib/model.cpp:757 */
	void GetMeshBounds(const CModel* , Vector* , Vector* );
	/* modellib/model.cpp:783 */
	void GetPhysicsBounds(const CModel* , Vector* , Vector* );
	/* modellib/model.cpp:824 */
	void GetModelRenderBounds(const CModel* , Vector* , Vector* );
	/* ../public/modellib/model.h:736 */
	AABB_t GetMeshBounds(const CModel* );
	/* ../public/modellib/model.h:743 */
	AABB_t GetPhysicsBounds(const CModel* );
	/* ../public/modellib/model.h:750 */
	AABB_t GetModelRenderBounds(const CModel* );
	/* ../public/modellib/model.h:398 */
	bool HasPhysics(const CModel* );
	/* modellib/model.cpp:844 */
	bool HasCollision(const CModel* );
	/* ../public/modellib/model.h:400 */
	const CPhysAggregateData* GetPhysicsContainer(const CModel* );
	/* modellib/model.cpp:2485 */
	CPhysAggregateDataHandle AcquirePhysicsRef(const CModel* );
	/* modellib/model.cpp:893 */
	LocalFlexController_t LookupFlexController(const CModel* , const char* );
	/* modellib/model.cpp:902 */
	LocalFlexController_t NumFlexControllers(const CModel* );
	/* modellib/model.cpp:907 */
	const char* GetFlexControllerName(const CModel* , LocalFlexController_t);
	/* modellib/model.cpp:914 */
	uint32 GetFlexControllerHash(const CModel* , LocalFlexController_t);
	/* modellib/model.cpp:919 */
	const char* GetFlexControllerType(const CModel* , LocalFlexController_t);
	/* modellib/model.cpp:924 */
	int GetFlexControllerModelToGlobal(const CModel* , LocalFlexController_t);
	/* modellib/model.cpp:929 */
	const CFlexController* GetFlexController(const CModel* , LocalFlexController_t);
	/* modellib/model.cpp:934 */
	void SetFlexControllerModelToGlobal(CModel* , LocalFlexController_t, int);
	/* modellib/model.cpp:977 */
	bool ValidateRemappingTables(const CModel* );
	/* modellib/model.cpp:1087 */
	const int16* GetLocalToMasterTableForMesh(const CModel* , int);
	/* modellib/model.cpp:1092 */
	bool HasAnimationDrivenFlexes(const CModel* );
	/* modellib/model.cpp:943 */
	LocalFlexController_t LookupFlexControllerByHash(const CModel* , uint32);
	/* modellib/model.cpp:960 */
	int GetFlexControllerHashToGlobal(const CModel* , uint32);
	/* modellib/model.cpp:849 */
	int GetBoneFlexDriverCount(const CModel* );
	/* modellib/model.cpp:854 */
	int GetBoneFlexDriverBoneIndex(const CModel* , int);
	/* modellib/model.cpp:860 */
	int GetBoneFlexDriverControllerCount(const CModel* , int);
	/* modellib/model.cpp:866 */
	LocalFlexController_t LookupBoneFlexDriverControllerLocal(const CModel* , int, int);
	/* modellib/model.cpp:876 */
	void GetBoneFlexDriverControllerInfo(const CModel* , int, int, BoneFlexComponent_t* , float* , float* );
	/* modellib/model.cpp:885 */
	const CUtlVector<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >& GetStateDrivenMorphs(const CModel* );
	/* modellib/model.cpp:1097 */
	int GetBoneIndexForHitboxForMesh(const CModel* , const CHitBox* , int);
	/* modellib/model.cpp:1154 */
	const CHitBoxSet* FindHitboxSetByName(const CModel* , const char* , int);
	/* modellib/model.cpp:1136 */
	int FindHitboxSetIndexByName(const CModel* , const char* , int);
	/* modellib/model.cpp:1173 */
	const CHitBoxSet* GetHitboxSetByIndex(const CModel* , int, int);
	/* modellib/model.cpp:1196 */
	int GetBoneIndexForHitbox(const CModel* , const CHitBox* );
	/* modellib/model.cpp:1186 */
	int GetHitboxSetCount(const CModel* , int);
	/* modellib/model.cpp:1201 */
	void GetHitboxSetsForMeshGroupMask(const CModel* , CHitboxSetList& , MeshGroupMask_t, CUtlStringToken);
	/* modellib/model.cpp:1227 */
	void GetHitboxesForMeshGroupMask(const CModel* , CHitboxList& , MeshGroupMask_t, CUtlStringToken);
	/* modellib/model.cpp:1257 */
	int GetBoneIndexForHitbox(const CModel* , const HitBoxAndMesh_t& );
	/* modellib/model.cpp:1290 */
	void SetupAttachments(const CModel* , const CTransform* , CTransform* );
	/* modellib/model.cpp:1277 */
	void SetupAttachments(const CModel* , const CTransform* , const CTransform& , CTransform* );
	/* modellib/model.cpp:1298 */
	void SetupAttachments(const CModel* , const matrix3x4a_t* , const matrix3x4a_t& , matrix3x4a_t* );
	/* modellib/model.cpp:1312 */
	bool SetupAttachmentTransform(const CModel* , AttachmentHandle_t, const CTransform* , CTransform& );
	/* modellib/model.cpp:1317 */
	bool SetupAttachmentTransform(const CModel* , AttachmentHandle_t, const CTransform& , const CTransform* , CTransform& );
	/* modellib/model.cpp:1348 */
	bool SetupAttachmentTransform(const CModel* , AttachmentHandle_t, const matrix3x4a_t* , matrix3x4a_t& );
	/* modellib/model.cpp:1333 */
	bool SetupAttachmentTransform(const CModel* , AttachmentHandle_t, const matrix3x4_t& , const matrix3x4a_t* , matrix3x4a_t& );
	/* modellib/model.cpp:1353 */
	int GetSimAttachmentTransformIndex(const CModel* , AttachmentHandle_t);
	/* modellib/model.cpp:1358 */
	AttachmentHandle_t GetAttachmentHandleFromIndex(const CModel* , int);
	/* modellib/model.cpp:1363 */
	int GetNumAttachments(const CModel* );
	/* modellib/model.cpp:1368 */
	AttachmentHandle_t GetAttachmentHandle(const CModel* , CUtlStringToken);
	/* modellib/model.cpp:1381 */
	CUtlStringToken GetAttachmentNameToken(const CModel* , AttachmentHandle_t);
	/* modellib/model.cpp:1390 */
	void GetAttachmentData(const CModel* , CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> >& );
	/* modellib/model.cpp:1401 */
	const CAttachment* GetAttachment(const CModel* , const AttachmentHandle_t& );
	/* modellib/model.cpp:1413 */
	AttachmentHandle_t FirstAttachmentHandle(const CModel* );
	/* modellib/model.cpp:1421 */
	AttachmentHandle_t NextAttachmentHandle(const CModel* , AttachmentHandle_t);
	/* modellib/model.cpp:1435 */
	const char* GetAttachmentName(const CModel* , AttachmentHandle_t);
	/* modellib/model.cpp:1440 */
	int GetAttachmentBoneCount(const CModel* , AttachmentHandle_t);
	/* modellib/model.cpp:1445 */
	int GetAttachmentBone(const CModel* , AttachmentHandle_t, int);
	/* modellib/model.cpp:1450 */
	void GetAttachmentOffset(const CModel* , AttachmentHandle_t, int, float* , Vector* , Quaternion* );
	/* modellib/model.cpp:1468 */
	void GetAttachmentOffset(const CModel* , AttachmentHandle_t, int, float* , Vector* , QAngle* );
	/* modellib/model.cpp:1478 */
	void GetAttachmentOffset(const CModel* , AttachmentHandle_t, int, float* , matrix3x4a_t* );
	/* modellib/model.cpp:1489 */
	CTransform GetAttachmentOffset(const CModel* , AttachmentHandle_t, int, float* );
	/* modellib/model.cpp:1501 */
	uint32 GetAnimationStateSize(const CModel* );
	/* modellib/model.cpp:1510 */
	uint32 GetAnimationStateCount(const CModel* , AnimationStateType_t);
	/* modellib/model.cpp:1527 */
	uint32 GetAnimationStateOffset(const CModel* , AnimationStateType_t);
	/* modellib/model.cpp:1545 */
	bool IsDataElementNeeded(const CModel* , const char* , const char* );
	/* modellib/model.cpp:1555 */
	const CModelSkeleton& MasterSkeleton(const CModel* );
	/* modellib/model.cpp:1560 */
	int FindBoneIndex(const CModel* , const char* );
	/* modellib/model.cpp:1565 */
	int FindBoneIndexByHash(const CModel* , uint32);
	/* modellib/model.cpp:1570 */
	float GetBoneSphereRadius(const CModel* , uint);
	/* modellib/model.cpp:1576 */
	int FindUserDataIndex(const CModel* , const char* , int);
	/* modellib/model.cpp:1590 */
	int NumUserDataElements(const CModel* );
	/* modellib/model.cpp:1599 */
	int GetUserDataSizeof(const CModel* );
	/* modellib/model.cpp:1609 */
	const CAnimContainer* GetAnimContainer(const CModel* );
	/* modellib/model.cpp:1617 */
	bool IsValidAnimation(const CModel* , int);
	/* modellib/model.cpp:1639 */
	const CAnimDesc* pAnimdesc(const CModel* , int);
	/* modellib/model.cpp:1648 */
	int GetNumAnim(const CModel* );
	/* modellib/model.cpp:1657 */
	int LookupAnimation(const CModel* , const char* );
	/* modellib/model.cpp:1670 */
	const char* GetAnimationName(const CModel* , int);
	/* modellib/model.cpp:1744 */
	bool IsValidSequence(const CModel* , HSequence);
	/* modellib/model.cpp:1762 */
	HSequence FirstSequence(const CModel* );
	/* modellib/model.cpp:1771 */
	HSequence NextSequence(const CModel* , HSequence);
	/* modellib/model.cpp:1783 */
	HSequence LookupSequence(const CModel* , const char* );
	/* modellib/model.cpp:1885 */
	const ISequence* pSeqdesc(const CModel* , HSequence);
	/* modellib/model.cpp:1796 */
	const char* GetSequenceName(const CModel* , HSequence);
	/* modellib/model.cpp:1904 */
	bool IsSequenceLooping(const CModel* , HSequence);
	/* modellib/model.cpp:1917 */
	HSequence FindDefaultPreviewSequence(const CModel* );
	/* modellib/model.cpp:2003 */
	int LookupPoseParameter(const CModel* , const char* );
	/* modellib/model.cpp:2020 */
	int GetNumPoseParameters(const CModel* );
	/* modellib/model.cpp:2029 */
	const PoseParamDesc_t* pPoseParameter(const CModel* , int);
	/* modellib/model.cpp:2038 */
	const char* GetPoseParameterName(const CModel* , int);
	/* modellib/model.cpp:2048 */
	float EncodePoseParameter(const CModel* , int, float, float& );
	/* modellib/model.cpp:2080 */
	float DecodePoseParameter(const CModel* , int, float);
	/* modellib/model.cpp:2097 */
	int LookupWeightlist(const CModel* , const char* );
	/* modellib/model.cpp:2110 */
	int GetNumWeightlists(const CModel* );
	/* modellib/model.cpp:2116 */
	const ChannelWeightlist_t* pChannelWeightlist(const CModel* , int);
	/* modellib/model.cpp:2125 */
	const char* GetWeightlistName(const CModel* , int);
	/* modellib/model.cpp:2137 */
	const IAnimGraphModelBindingConstPtr& GetAnimGraphBinding(const CModel* );
	/* modellib/model.cpp:2143 */
	void RecreateAnimGraphBinding(CModel* );
	/* modellib/model.cpp:2163 */
	const IIKControlRigDescription* GetIKControlRigDescription(const CModel* );
	/* modellib/model.cpp:2177 */
	int GetFootCount(const CModel* );
	/* modellib/model.cpp:2191 */
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > GetFeet(const CModel* );
	/* modellib/model.cpp:2221 */
	CUtlVector<CLookAtChain, CUtlMemory<CLookAtChain, int> > GetLookAtChainList(const CModel* );
	/* modellib/model.cpp:2248 */
	bool HasMovementSettings(const CModel* );
	/* modellib/model.cpp:2254 */
	const CMovementSettings GetMovementSettings(const CModel* );
	/* modellib/model.cpp:2274 */
	const CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> > GetSlopeTraces(const CModel* );
	/* modellib/model.cpp:2295 */
	bool HasSkeletalInputSettings(const CModel* );
	/* modellib/model.cpp:2301 */
	CVrSkeletalInputSettings GetSkeletalInputSettings(const CModel* );
	/* modellib/model.cpp:2325 */
	int GetNumAutoplaySequences(const CModel* );
	/* modellib/model.cpp:2334 */
	HSequence GetAutoplaySequence(const CModel* , int);
	/* modellib/model.cpp:2380 */
	int GetNodeTransition(const CModel* , int, int);
	/* modellib/model.cpp:2347 */
	int EntryNode(const CModel* , HSequence);
	/* modellib/model.cpp:2358 */
	int ExitNode(const CModel* , HSequence);
	/* modellib/model.cpp:2369 */
	const char* pszNodeName(const CModel* , int);
	/* modellib/model.cpp:2385 */
	HAnimationGraph GetAnimationGraph(const CModel* );
	/* modellib/model.cpp:2400 */
	int RemapSeqBone(const CModel* , HSequence, int);
	/* modellib/model.cpp:2417 */
	int RemapAnimBone(const CModel* , int, int);
	/* ../public/modellib/model.h:567 */
	CActivityToSequenceMapping* GetActivityToSequenceMapping(const CModel* );
	/* ../public/modellib/model.h:568 */
	void InitActivityToSequence(const CModel* );
	/* modellib/model.cpp:2431 */
	int NumBonesForLOD(const CModel* , int);
	/* modellib/model.cpp:2436 */
	int NumBones(const CModel* );
	/* modellib/model.cpp:2441 */
	BoneFlags_t boneFlags(const CModel* , int);
	/* ../public/modellib/model.h:574 */
	void SetBoneFlags(CModel* , int, BoneFlags_t);
	/* ../public/modellib/model.h:575 */
	void ClearBoneFlags(CModel* , int, BoneFlags_t);
	/* modellib/model.cpp:2446 */
	const char* boneName(const CModel* , int);
	/* modellib/model.cpp:2451 */
	int boneParent(const CModel* , int);
	/* modellib/model.cpp:2456 */
	Vector bonePosParentSpace(const CModel* , int);
	/* modellib/model.cpp:2461 */
	Quaternion boneRotParentSpace(const CModel* , int);
	/* modellib/model.cpp:2466 */
	float GetXYMovementScaleAnim(const CModel* , int);
	/* modellib/model.cpp:2475 */
	void GetBindPoseWorldTransforms(const CModel* , const CTransform& , int, CTransform* );
	/* modellib/model.cpp:2480 */
	void GetBindPoseWorldTransforms(const CModel* , const matrix3x4a_t& , int, matrix3x4a_t* );
	/* modellib/model.cpp:2490 */
	void GetSequenceBounds(const CModel* , HSequence, Vector* , Vector* );
	/* modellib/model.cpp:2813 */
	int ComputeMaxLODLevelUsedByModel(const CModel* );
	/* modellib/model.cpp:2842 */
	int LODLevelForScreenSize(const CModel* , float, float);
	/* modellib/model.cpp:2865 */
	LODGroupMask_t GetLODMaskForMesh(const CModel* , int);
	/* modellib/model.cpp:2870 */
	const CUtlVector<float, CUtlMemory<float, int> >& GetLODGroupSwitchDistances(const CModel* );
	/* modellib/model.cpp:1816 */
	Vector eyeposition(const CModel* );
	/* modellib/model.cpp:1821 */
	float MaxEyeDeflection(const CModel* );
	/* modellib/model.cpp:1826 */
	float mass(const CModel* );
	/* modellib/model.cpp:1831 */
	Vector hull_min(const CModel* );
	/* modellib/model.cpp:1836 */
	Vector hull_max(const CModel* );
	/* modellib/model.cpp:1841 */
	Vector view_bbmin(const CModel* );
	/* modellib/model.cpp:1846 */
	Vector view_bbmax(const CModel* );
	/* modellib/model.cpp:1851 */
	const KeyValues3* GetModelKeyValues(const CModel* );
	/* modellib/model.cpp:1856 */
	const KeyValues3* FindModelSubKey(const CModel* , const char* );
	/* modellib/model.cpp:1861 */
	void GetKeyValueText(const CModel* , CUtlString* );
	/* modellib/model.cpp:2503 */
	void SetupAttachment(int, const int32* , const float* , const Vector* , const Quaternion* , const CTransform* , const CTransform& , CTransform* , bool);
	/* modellib/model.cpp:2635 */
	void SetupAttachment(int, const int32* , const float* , const Vector* , const Quaternion* , const matrix3x4a_t* , const matrix3x4a_t& , matrix3x4a_t* , bool);
	/* modellib/model.cpp:2760 */
	int GetBoneConstraintCount(const CModel* );
	/* modellib/model.cpp:2767 */
	const CBoneConstraintBase* GetBoneConstraint(const CModel* , int);
	/* ../public/modellib/model.h:620 */
	BoneConstraintResult_t CalcBoneConstraints(const CModel* , CTransform* , CVarBitVec* , float* );
	/* ../public/modellib/model.h:621 */
	BoneConstraintResult_t CalcBoneConstraints(const CModel* , matrix3x4a_t* , int, CVarBitVec* , float* );
protected:
	CUtlString m_name; /* 8 8 */
	ModelFlags_t m_nRuntimeFlags; /* 16 4 */
	ModelFlags_t m_nInherentFlags; /* 20 4 */
	Vector m_vHullMin; /* 24 12 */
	Vector m_vHullMax; /* 36 12 */
	Vector m_vViewMin; /* 48 12 */
	Vector m_vViewMax; /* 60 12 */
	float m_flMass; /* 72 4 */
	Vector m_vEyePosition; /* 76 12 */
	float m_flMaxEyeDeflection; /* 88 4 */
	KeyValues3 m_ModelKeyValues; /* 96 16 */
	CUtlVector<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int> > m_refMeshes; /* 112 32 */
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > m_refMeshGroupMasks; /* 144 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_refLODGroupMasks; /* 176 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_lodGroupSwitchDistances; /* 208 32 */
	CPhysAggregateDataHandle m_pPhysicsData; /* 240 8 */
	CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> > m_AnimGroups; /* 248 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_meshGroups; /* 280 32 */
	CUtlVector<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> > m_materialGroups; /* 312 32 */
	MeshGroupMask_t m_nDefaultMeshGroupMask; /* 344 8 */
	CModelSkeleton m_modelSkeleton; /* 352 304 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_remappingTable; /* 656 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_remappingTableStarts; /* 688 32 */
	CUtlVector<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> > m_boneFlexDrivers; /* 720 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_meshGroupMap; /* 752 32 */
	CUtlVector<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> > m_bodyPartMap; /* 784 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_materialGroupNames; /* 816 32 */
	CUtlHashtable<ResourceId_t, int, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, int>, int> > m_defaultMaterialIndexMap; /* 848 32 */
	CUtlVector<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> > m_attachmentMap; /* 880 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_boneAndFlexCountsForMesh; /* 912 32 */
	CUtlHashtable<unsigned int, int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_flexControllerHashToModelIndex; /* 944 32 */
	CUtlHashtable<int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, unsigned int>, int> > m_flexControllerModelIndexToHash; /* 976 32 */
	CUtlVector<const CFlexController*, CUtlMemory<const CFlexController*, int> > m_flexControllers; /* 1008 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_flexControllersModelToGlobal; /* 1040 32 */
	CAnimContainer * m_pAnimContainer; /* 1072 8 */
	CActivityToSequenceMapping * m_pActivityToSequence; /* 1080 8 */
	IAnimGraphModelBindingConstPtr m_pAnimGraphBinding; /* 1088 8 */
	CUtlVector<const CBoneConstraintBase*, CUtlMemory<const CBoneConstraintBase*, int> > m_boneConstraintRefList; /* 1096 32 */
	CUtlVector<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> > m_StateDrivenMorphs; /* 1128 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_BodyGroupsHiddenInTools; /* 1160 32 */
	/* modellib/model.cpp:2905 */
	bool GetAttachmentTransform(const CModel* , CUtlStringToken, CTransformUnaligned& );
	/* modellib/model.cpp:2919 */
	CTransformUnaligned GetBoneTransform(const CModel* , int);
	/* modellib/model.cpp:2930 */
	const char* GetAttachmentNameFromIndex(const CModel* , int);
	/* modellib/model.cpp:2937 */
	bool MeshTrace(const CModel* , const MeshTraceInput& , MeshTraceOutput& );
	/* modellib/model.cpp:2948 */
	void BuildRayTraceObject(CModel* );
	RayTracingEnvironment m_rayTraceObject; /* 1200 528 */
	CThreadFastMutex m_rayTraceMutex; /* 1728 24 */
	/* modellib/model.cpp:639 */
	int GetNumMaterialsInGroup(const CModel* , int);
	/* modellib/model.cpp:644 */
	HMaterial GetMaterialInGroup(const CModel* , int, int);
	CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int> > m_VisemeNameToIndex; /* 1752 32 */
	CUtlVector<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, float>, int> >, CUtlMemory<CUtlHashtable<int, float, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, float>, int> >, int> > m_Visemes; /* 1784 32 */
	/* modellib/model.cpp:2992 */
	float GetVisemeMorph(CModel* , const CUtlString& , int);
	CUtlVector<int, CUtlMemory<int, int> > m_traceIndices; /* 1816 32 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_traceVertices; /* 1848 32 */
	CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> > m_materials; /* 1880 32 */
	/* modellib/model.cpp:3006 */
	void RebuildMaterialList(CModel* );
	/* modellib/model.cpp:3041 */
	int GetMaterialIndex(const CModel* , const IMaterial2* );
	/* modellib/model.cpp:3046 */
	int GetMaterialIndexCount(const CModel* );
	/* modellib/model.cpp:3051 */
	HMaterial GetMaterialByIndex(const CModel* , int);
	CUtlString m_BaseModelName; /* 1912 8 */
	HModel m_hBaseModel; /* 1920 8 */
	/* ../public/modellib/model.h:731 */
	const char* GetBaseModelName(const CModel* );
	/* ../public/modellib/model.h:732 */
	HModel GetBaseModel(const CModel* );
	bool HasMesh(const class CModel  *, int); /* linkage=_ZNK6CModel7HasMeshEi */
	void GetMeshBounds(const class CModel  *, class Vector *, class Vector *); /* linkage=_ZNK6CModel13GetMeshBoundsEP6VectorS1_ */
	/* <4aed5f4> modellib/model.cpp:696 */
	class CRenderMesh * GetMeshData(const class CModel  *, int); /* linkage=_ZNK6CModel11GetMeshDataEi */
	/* <4aed59a> modellib/model.cpp:683 */
	int GetNumMeshes(const class CModel  *); /* linkage=_ZNK6CModel12GetNumMeshesEv */
	void PreInitFromV0Data(class CModel *, const class PermModelData_t  *); /* linkage=_ZN6CModel17PreInitFromV0DataEPK15PermModelData_t */
	void RecreateAnimGraphBinding(class CModel *); /* linkage=_ZN6CModel24RecreateAnimGraphBindingEv */
	HAnimationGraph GetAnimationGraph(const class CModel  *); /* linkage=_ZNK6CModel17GetAnimationGraphEv */
	const char  * name(const class CModel  *); /* linkage=_ZNK6CModel4nameEv */
	int GetMaterialGroupIndex(const class CModel  *, class CUtlStringToken); /* linkage=_ZNK6CModel21GetMaterialGroupIndexE15CUtlStringToken */
	enum LocalFlexController_t LookupFlexController(const class CModel  *, const char  *); /* linkage=_ZNK6CModel20LookupFlexControllerEPKc */
	void BuildRayTraceObject(class CModel *); /* linkage=_ZN6CModel19BuildRayTraceObjectEv */
	/* <4aef7c8> modellib/model.cpp:2436 */
	int NumBones(const class CModel  *); /* linkage=_ZNK6CModel8NumBonesEv */
	void GetPhysicsBounds(const class CModel  *, class Vector *, class Vector *); /* linkage=_ZNK6CModel16GetPhysicsBoundsEP6VectorS1_ */
	/* <4aeeee4> modellib/model.cpp:1648 */
	int GetNumAnim(const class CModel  *); /* linkage=_ZNK6CModel10GetNumAnimEv */
	const class CAnimDesc  * pAnimdesc(const class CModel  *, int); /* linkage=_ZNK6CModel9pAnimdescEi */
	class HSequence NextSequence(const class CModel  *, class HSequence); /* linkage=_ZNK6CModel12NextSequenceE9HSequence */
	const class ISequence  * pSeqdesc(const class CModel  *, class HSequence); /* linkage=_ZNK6CModel8pSeqdescE9HSequence */
	/* <4aef5a8> modellib/model.cpp:1762 */
	class HSequence FirstSequence(const class CModel  *); /* linkage=_ZNK6CModel13FirstSequenceEv */
	/* <4aeed73> modellib/model.cpp:1565 */
	int FindBoneIndexByHash(const class CModel  *, uint32); /* linkage=_ZNK6CModel19FindBoneIndexByHashEj */
	/* <4aed3c2> modellib/model.cpp:599 */
	int GetNumMaterialGroups(const class CModel  *); /* linkage=_ZNK6CModel20GetNumMaterialGroupsEv */
	int GetBodyPartForName(const class CModel  *, const char  *); /* linkage=_ZNK6CModel18GetBodyPartForNameEPKc */
	virtual void ~CModel(class CModel *); /* linkage=_ZN6CModelD4Ev */
	void RebuildMaterialList(class CModel *); /* linkage=_ZN6CModel19RebuildMaterialListEv */
	void InitFromV0Data(class CModel *, class CConvertOldDiskCtx &, const class PermModelData_t  *); /* linkage=_ZN6CModel14InitFromV0DataER18CConvertOldDiskCtxPK15PermModelData_t */
	void InitFromModel(class CModel *, HModel); /* linkage=_ZN6CModel13InitFromModelE11CWeakHandleI25InfoForResourceTypeCModelE */
	const class KeyValues3  * FindModelSubKey(const class CModel  *, const char  *); /* linkage=_ZNK6CModel15FindModelSubKeyEPKc */
	void CModel(class CModel *); /* linkage=_ZN6CModelC4Ev */
	const char  * GetModelName(const class CModel  *); /* linkage=_ZNK6CModel12GetModelNameEv */
	uint32 GetAnimationStateOffset(const class CModel  *, enum AnimationStateType_t); /* linkage=_ZNK6CModel23GetAnimationStateOffsetE20AnimationStateType_t */
	/* <4aedabd> modellib/model.cpp:902 */
	enum LocalFlexController_t NumFlexControllers(const class CModel  *); /* linkage=_ZNK6CModel18NumFlexControllersEv */
	/* <4aefba1> modellib/model.cpp:943 */
	enum LocalFlexController_t LookupFlexControllerByHash(const class CModel  *, uint32); /* linkage=_ZNK6CModel26LookupFlexControllerByHashEj */
	uint32 GetFlexControllerHash(const class CModel  *, enum LocalFlexController_t); /* linkage=_ZNK6CModel21GetFlexControllerHashE21LocalFlexController_t */
	const IAnimGraphModelBindingConstPtr  & GetAnimGraphBinding(const class CModel  *); /* linkage=_ZNK6CModel19GetAnimGraphBindingEv */
	class Vector view_bbmin(const class CModel  *); /* linkage=_ZNK6CModel10view_bbminEv */
	class Vector view_bbmax(const class CModel  *); /* linkage=_ZNK6CModel10view_bbmaxEv */
	/* <4aee9e7> modellib/model.cpp:1510 */
	uint32 GetAnimationStateCount(const class CModel  *, enum AnimationStateType_t); /* linkage=_ZNK6CModel22GetAnimationStateCountE20AnimationStateType_t */
	void SetupAttachments(const class CModel  *, const class matrix3x4a_t  *, const class matrix3x4a_t  &, class matrix3x4a_t *); /* linkage=_ZNK6CModel16SetupAttachmentsEPK12matrix3x4a_tRS1_PS0_ */
	int GetNumAttachments(const class CModel  *); /* linkage=_ZNK6CModel17GetNumAttachmentsEv */
	const class CModelSkeleton  & MasterSkeleton(const class CModel  *); /* linkage=_ZNK6CModel14MasterSkeletonEv */
	MeshGroupMask_t GetDefaultMeshGroupMask(const class CModel  *); /* linkage=_ZNK6CModel23GetDefaultMeshGroupMaskEv */
	/* <4aed04d> modellib/model.cpp:442 */
	int GetNumMeshGroups(const class CModel  *); /* linkage=_ZNK6CModel16GetNumMeshGroupsEv */
	/* <4aedb17> modellib/model.cpp:1087 */
	const int16  * GetLocalToMasterTableForMesh(const class CModel  *, int); /* linkage=_ZNK6CModel28GetLocalToMasterTableForMeshEi */
	/* <4aefb0d> modellib/model.cpp:2865 */
	LODGroupMask_t GetLODMaskForMesh(const class CModel  *, int); /* linkage=_ZNK6CModel17GetLODMaskForMeshEi */
	/* <4aece55> modellib/model.cpp:374 */
	MeshGroupMask_t GetMeshGroupMaskForMesh(const class CModel  *, int); /* linkage=_ZNK6CModel23GetMeshGroupMaskForMeshEi */
	DataType_t * GetAnimationStateData<(AnimationStateType_t)1>(const class CModel  *, void *); /* linkage=_ZNK6CModel21GetAnimationStateDataIL20AnimationStateType_t1EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEPv */
	DataType_t * GetAnimationStateData<(AnimationStateType_t)0>(const class CModel  *, void *); /* linkage=_ZNK6CModel21GetAnimationStateDataIL20AnimationStateType_t0EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEPv */
	const char  * boneName(const class CModel  *, int); /* linkage=_ZNK6CModel8boneNameEi */
	int boneParent(const class CModel  *, int); /* linkage=_ZNK6CModel10boneParentEi */
	uint32 GetAnimationStateSize(const class CModel  *); /* linkage=_ZNK6CModel21GetAnimationStateSizeEv */
	/* <4aef60a> modellib/model.cpp:2020 */
	int GetNumPoseParameters(const class CModel  *); /* linkage=_ZNK6CModel20GetNumPoseParametersEv */
	bool IsSequenceLooping(const class CModel  *, class HSequence); /* linkage=_ZNK6CModel17IsSequenceLoopingE9HSequence */
	/* <4aef4ff> modellib/model.cpp:1744 */
	bool IsValidSequence(const class CModel  *, class HSequence); /* linkage=_ZNK6CModel15IsValidSequenceE9HSequence */
	void CModel(class CModel *, const class CModel  &); /* linkage=_ZN6CModelC4ERKS_ */
	virtual bool IsInitialized(const class CModel  *); /* linkage=_ZNK6CModel13IsInitializedEv */
	/* <4aecf1e> modellib/model.cpp:390 */
	MeshGroupMask_t GetMaskForMeshGroup(const class CModel  *, class CUtlStringToken); /* linkage=_ZNK6CModel19GetMaskForMeshGroupE15CUtlStringToken */
	MeshGroupMask_t GetMaskForMeshGroup(const class CModel  *, const char  *); /* linkage=_ZNK6CModel19GetMaskForMeshGroupEPKc */
	int GetNumMeshesInMeshGroup(const class CModel  *, int); /* linkage=_ZNK6CModel23GetNumMeshesInMeshGroupEi */
	int GetIndexForMeshGroup(const class CModel  *, class CUtlStringToken); /* linkage=_ZNK6CModel20GetIndexForMeshGroupE15CUtlStringToken */
	const char  * GetMeshGroupName(const class CModel  *, int); /* linkage=_ZNK6CModel16GetMeshGroupNameEi */
	void GetMeshToolsGeometryInfo(const class CModel  *, int, const class CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >  * *); /* linkage=_ZNK6CModel24GetMeshToolsGeometryInfoEiPPK10CUtlVectorI18TraceDataForDraw_t10CUtlMemoryIS1_iEE */
	void GetModelRenderInfo(const class CModel  *, LODGroupMask_t, MeshGroupMask_t, int *, int *, int *, int *); /* linkage=_ZNK6CModel18GetModelRenderInfoEhyPiS0_S0_S0_ */
	/* <4aed0a7> modellib/model.cpp:456 */
	int GetBodyPartForName(const class CModel  *, class CUtlStringToken); /* linkage=_ZNK6CModel18GetBodyPartForNameE15CUtlStringToken */
	const char  * GetBodyPartName(const class CModel  *, int); /* linkage=_ZNK6CModel15GetBodyPartNameEi */
	void GetBodyPartMeshName(const class CModel  *, int, int, class CBufferString *); /* linkage=_ZNK6CModel19GetBodyPartMeshNameEiiP13CBufferString */
	int GetNumBodyParts(const class CModel  *); /* linkage=_ZNK6CModel15GetNumBodyPartsEv */
	int GetNumBodyPartMeshes(const class CModel  *, int); /* linkage=_ZNK6CModel20GetNumBodyPartMeshesEi */
	/* <4aed1fa> modellib/model.cpp:508 */
	MeshGroupMask_t GetBodyPartMask(const class CModel  *, int); /* linkage=_ZNK6CModel15GetBodyPartMaskEi */
	MeshGroupMask_t GetBodyPartMeshMask(const class CModel  *, int, int); /* linkage=_ZNK6CModel19GetBodyPartMeshMaskEii */
	int FindMeshIndexForMask(const class CModel  *, int, MeshGroupMask_t); /* linkage=_ZNK6CModel20FindMeshIndexForMaskEiy */
	bool IsBodyPartHiddenInTools(const class CModel  *, int); /* linkage=_ZNK6CModel23IsBodyPartHiddenInToolsEi */
	/* <4aed2e2> modellib/model.cpp:559 */
	int GetMaterialGroupIndex(const class CModel  *, uint32); /* linkage=_ZNK6CModel21GetMaterialGroupIndexEj */
	HMaterial GetMaterialReplacementForGroup(const class CModel  *, int, class ResourceId_t); /* linkage=_ZNK6CModel30GetMaterialReplacementForGroupEi12ResourceId_t */
	class CUtlStringToken GetMaterialGroupTokenForIndex(const class CModel  *, int); /* linkage=_ZNK6CModel29GetMaterialGroupTokenForIndexEi */
	void GetMaterialGroupList(const class CModel  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK6CModel20GetMaterialGroupListEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <4aed41c> modellib/model.cpp:604 */
	const char  * GetMaterialGroupName(const class CModel  *, int); /* linkage=_ZNK6CModel20GetMaterialGroupNameEi */
	void GetMaterialGroupMaterials(const class CModel  *, int, class CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> > *); /* linkage=_ZNK6CModel25GetMaterialGroupMaterialsEiP10CUtlVectorI11CWeakHandleI29InfoForResourceTypeIMaterial2E10CUtlMemoryIS3_iEE */
	int numskinfamilies(const class CModel  *); /* linkage=_ZNK6CModel15numskinfamiliesEv */
	void GetAllMaterials(const class CModel  *, class CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> > &); /* linkage=_ZNK6CModel15GetAllMaterialsER10CUtlVectorI11CWeakHandleI29InfoForResourceTypeIMaterial2E10CUtlMemoryIS3_iEE */
	bool IsTranslucent(const class CModel  *); /* linkage=_ZNK6CModel13IsTranslucentEv */
	bool IsTranslucentTwoPass(const class CModel  *); /* linkage=_ZNK6CModel20IsTranslucentTwoPassEv */
	bool IsRuntimeCombined(const class CModel  *); /* linkage=_ZNK6CModel17IsRuntimeCombinedEv */
	enum ModelFlags_t GetModelFlags(const class CModel  *); /* linkage=_ZNK6CModel13GetModelFlagsEv */
	/* <4aed4d9> modellib/model.cpp:665 */
	enum ModelFlags_t flags(const class CModel  *); /* linkage=_ZNK6CModel5flagsEv */
	/* <4aed540> modellib/model.cpp:670 */
	const char  * pszName(const class CModel  *); /* linkage=_ZNK6CModel7pszNameEv */
	bool HasSkinnedMeshes(const class CModel  *); /* linkage=_ZNK6CModel16HasSkinnedMeshesEv */
	int16 AllMeshesSkinnedToOneBone(const class CModel  *); /* linkage=_ZNK6CModel25AllMeshesSkinnedToOneBoneEv */
	/* <4aed6e6> modellib/model.cpp:748 */
	void GetMeshName(const class CModel  *, int, class CBufferString *); /* linkage=_ZNK6CModel11GetMeshNameEiP13CBufferString */
	void GetModelRenderBounds(const class CModel  *, class Vector *, class Vector *); /* linkage=_ZNK6CModel20GetModelRenderBoundsEP6VectorS1_ */
	class AABB_t GetMeshBounds(const class CModel  *); /* linkage=_ZNK6CModel13GetMeshBoundsEv */
	class AABB_t GetPhysicsBounds(const class CModel  *); /* linkage=_ZNK6CModel16GetPhysicsBoundsEv */
	class AABB_t GetModelRenderBounds(const class CModel  *); /* linkage=_ZNK6CModel20GetModelRenderBoundsEv */
	bool HasPhysics(const class CModel  *); /* linkage=_ZNK6CModel10HasPhysicsEv */
	bool HasCollision(const class CModel  *); /* linkage=_ZNK6CModel12HasCollisionEv */
	const class CPhysAggregateData  * GetPhysicsContainer(const class CModel  *); /* linkage=_ZNK6CModel19GetPhysicsContainerEv */
	class CPhysAggregateDataHandle AcquirePhysicsRef(const class CModel  *); /* linkage=_ZNK6CModel17AcquirePhysicsRefEv */
	const char  * GetFlexControllerName(const class CModel  *, enum LocalFlexController_t); /* linkage=_ZNK6CModel21GetFlexControllerNameE21LocalFlexController_t */
	const char  * GetFlexControllerType(const class CModel  *, enum LocalFlexController_t); /* linkage=_ZNK6CModel21GetFlexControllerTypeE21LocalFlexController_t */
	int GetFlexControllerModelToGlobal(const class CModel  *, enum LocalFlexController_t); /* linkage=_ZNK6CModel30GetFlexControllerModelToGlobalE21LocalFlexController_t */
	const class CFlexController  * GetFlexController(const class CModel  *, enum LocalFlexController_t); /* linkage=_ZNK6CModel17GetFlexControllerE21LocalFlexController_t */
	void SetFlexControllerModelToGlobal(class CModel *, enum LocalFlexController_t, int); /* linkage=_ZN6CModel30SetFlexControllerModelToGlobalE21LocalFlexController_ti */
	bool ValidateRemappingTables(const class CModel  *); /* linkage=_ZNK6CModel23ValidateRemappingTablesEv */
	bool HasAnimationDrivenFlexes(const class CModel  *); /* linkage=_ZNK6CModel24HasAnimationDrivenFlexesEv */
	int GetFlexControllerHashToGlobal(const class CModel  *, uint32); /* linkage=_ZNK6CModel29GetFlexControllerHashToGlobalEj */
	int GetBoneFlexDriverCount(const class CModel  *); /* linkage=_ZNK6CModel22GetBoneFlexDriverCountEv */
	int GetBoneFlexDriverBoneIndex(const class CModel  *, int); /* linkage=_ZNK6CModel26GetBoneFlexDriverBoneIndexEi */
	int GetBoneFlexDriverControllerCount(const class CModel  *, int); /* linkage=_ZNK6CModel32GetBoneFlexDriverControllerCountEi */
	enum LocalFlexController_t LookupBoneFlexDriverControllerLocal(const class CModel  *, int, int); /* linkage=_ZNK6CModel35LookupBoneFlexDriverControllerLocalEii */
	void GetBoneFlexDriverControllerInfo(const class CModel  *, int, int, enum BoneFlexComponent_t *, float *, float *); /* linkage=_ZNK6CModel31GetBoneFlexDriverControllerInfoEiiP19BoneFlexComponent_tPfS2_ */
	const class CUtlVector<StateDrivenMorph_t, CUtlMemory<StateDrivenMorph_t, int> >  & GetStateDrivenMorphs(const class CModel  *); /* linkage=_ZNK6CModel20GetStateDrivenMorphsEv */
	int GetBoneIndexForHitboxForMesh(const class CModel  *, const class CHitBox  *, int); /* linkage=_ZNK6CModel28GetBoneIndexForHitboxForMeshEPK7CHitBoxi */
	const class CHitBoxSet  * FindHitboxSetByName(const class CModel  *, const char  *, int); /* linkage=_ZNK6CModel19FindHitboxSetByNameEPKci */
	int FindHitboxSetIndexByName(const class CModel  *, const char  *, int); /* linkage=_ZNK6CModel24FindHitboxSetIndexByNameEPKci */
	const class CHitBoxSet  * GetHitboxSetByIndex(const class CModel  *, int, int); /* linkage=_ZNK6CModel19GetHitboxSetByIndexEii */
	int GetBoneIndexForHitbox(const class CModel  *, const class CHitBox  *); /* linkage=_ZNK6CModel21GetBoneIndexForHitboxEPK7CHitBox */
	int GetHitboxSetCount(const class CModel  *, int); /* linkage=_ZNK6CModel17GetHitboxSetCountEi */
	void GetHitboxSetsForMeshGroupMask(const class CModel  *, CHitboxSetList &, MeshGroupMask_t, class CUtlStringToken); /* linkage=_ZNK6CModel29GetHitboxSetsForMeshGroupMaskER23CUtlVectorFixedGrowableI18HitBoxSetAndMesh_tLm16EEy15CUtlStringToken */
	void GetHitboxesForMeshGroupMask(const class CModel  *, CHitboxList &, MeshGroupMask_t, class CUtlStringToken); /* linkage=_ZNK6CModel27GetHitboxesForMeshGroupMaskER23CUtlVectorFixedGrowableI15HitBoxAndMesh_tLm32EEy15CUtlStringToken */
	int GetBoneIndexForHitbox(const class CModel  *, const class HitBoxAndMesh_t  &); /* linkage=_ZNK6CModel21GetBoneIndexForHitboxERK15HitBoxAndMesh_t */
	void SetupAttachments(const class CModel  *, const class CTransform  *, class CTransform *); /* linkage=_ZNK6CModel16SetupAttachmentsEPK10CTransformPS0_ */
	void SetupAttachments(const class CModel  *, const class CTransform  *, const class CTransform  &, class CTransform *); /* linkage=_ZNK6CModel16SetupAttachmentsEPK10CTransformRS1_PS0_ */
	bool SetupAttachmentTransform(const class CModel  *, class AttachmentHandle_t, const class CTransform  *, class CTransform &); /* linkage=_ZNK6CModel24SetupAttachmentTransformE18AttachmentHandle_tPK10CTransformRS1_ */
	/* <4aedd04> modellib/model.cpp:1317 */
	bool SetupAttachmentTransform(const class CModel  *, class AttachmentHandle_t, const class CTransform  &, const class CTransform  *, class CTransform &); /* linkage=_ZNK6CModel24SetupAttachmentTransformE18AttachmentHandle_tRK10CTransformPS2_RS1_ */
	bool SetupAttachmentTransform(const class CModel  *, class AttachmentHandle_t, const class matrix3x4a_t  *, class matrix3x4a_t &); /* linkage=_ZNK6CModel24SetupAttachmentTransformE18AttachmentHandle_tPK12matrix3x4a_tRS1_ */
	/* <4aee15e> modellib/model.cpp:1333 */
	bool SetupAttachmentTransform(const class CModel  *, class AttachmentHandle_t, const class matrix3x4_t  &, const class matrix3x4a_t  *, class matrix3x4a_t &); /* linkage=_ZNK6CModel24SetupAttachmentTransformE18AttachmentHandle_tRK11matrix3x4_tPK12matrix3x4a_tRS4_ */
	int GetSimAttachmentTransformIndex(const class CModel  *, class AttachmentHandle_t); /* linkage=_ZNK6CModel30GetSimAttachmentTransformIndexE18AttachmentHandle_t */
	/* <4aee512> modellib/model.cpp:1358 */
	class AttachmentHandle_t GetAttachmentHandleFromIndex(const class CModel  *, int); /* linkage=_ZNK6CModel28GetAttachmentHandleFromIndexEi */
	/* <4aee5a9> modellib/model.cpp:1368 */
	class AttachmentHandle_t GetAttachmentHandle(const class CModel  *, class CUtlStringToken); /* linkage=_ZNK6CModel19GetAttachmentHandleE15CUtlStringToken */
	class CUtlStringToken GetAttachmentNameToken(const class CModel  *, class AttachmentHandle_t); /* linkage=_ZNK6CModel22GetAttachmentNameTokenE18AttachmentHandle_t */
	void GetAttachmentData(const class CModel  *, class CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> > &); /* linkage=_ZNK6CModel17GetAttachmentDataER10CUtlVectorIPK11CAttachment10CUtlMemoryIS3_iEE */
	/* <4aee700> modellib/model.cpp:1401 */
	const class CAttachment  * GetAttachment(const class CModel  *, const class AttachmentHandle_t  &); /* linkage=_ZNK6CModel13GetAttachmentERK18AttachmentHandle_t */
	class AttachmentHandle_t FirstAttachmentHandle(const class CModel  *); /* linkage=_ZNK6CModel21FirstAttachmentHandleEv */
	class AttachmentHandle_t NextAttachmentHandle(const class CModel  *, class AttachmentHandle_t); /* linkage=_ZNK6CModel20NextAttachmentHandleE18AttachmentHandle_t */
	/* <4aee854> modellib/model.cpp:1435 */
	const char  * GetAttachmentName(const class CModel  *, class AttachmentHandle_t); /* linkage=_ZNK6CModel17GetAttachmentNameE18AttachmentHandle_t */
	int GetAttachmentBoneCount(const class CModel  *, class AttachmentHandle_t); /* linkage=_ZNK6CModel22GetAttachmentBoneCountE18AttachmentHandle_t */
	int GetAttachmentBone(const class CModel  *, class AttachmentHandle_t, int); /* linkage=_ZNK6CModel17GetAttachmentBoneE18AttachmentHandle_ti */
	void GetAttachmentOffset(const class CModel  *, class AttachmentHandle_t, int, float *, class Vector *, class Quaternion *); /* linkage=_ZNK6CModel19GetAttachmentOffsetE18AttachmentHandle_tiPfP6VectorP10Quaternion */
	void GetAttachmentOffset(const class CModel  *, class AttachmentHandle_t, int, float *, class Vector *, class QAngle *); /* linkage=_ZNK6CModel19GetAttachmentOffsetE18AttachmentHandle_tiPfP6VectorP6QAngle */
	void GetAttachmentOffset(const class CModel  *, class AttachmentHandle_t, int, float *, class matrix3x4a_t *); /* linkage=_ZNK6CModel19GetAttachmentOffsetE18AttachmentHandle_tiPfP12matrix3x4a_t */
	class CTransform GetAttachmentOffset(const class CModel  *, class AttachmentHandle_t, int, float *); /* linkage=_ZNK6CModel19GetAttachmentOffsetE18AttachmentHandle_tiPf */
	bool IsDataElementNeeded(const class CModel  *, const char  *, const char  *); /* linkage=_ZNK6CModel19IsDataElementNeededEPKcS1_ */
	/* <4aeebab> modellib/model.cpp:1560 */
	int FindBoneIndex(const class CModel  *, const char  *); /* linkage=_ZNK6CModel13FindBoneIndexEPKc */
	float GetBoneSphereRadius(const class CModel  *, uint); /* linkage=_ZNK6CModel19GetBoneSphereRadiusEj */
	int FindUserDataIndex(const class CModel  *, const char  *, int); /* linkage=_ZNK6CModel17FindUserDataIndexEPKci */
	/* <4aeedcf> modellib/model.cpp:1590 */
	int NumUserDataElements(const class CModel  *); /* linkage=_ZNK6CModel19NumUserDataElementsEv */
	/* <4aeee29> modellib/model.cpp:1599 */
	int GetUserDataSizeof(const class CModel  *); /* linkage=_ZNK6CModel17GetUserDataSizeofEv */
	const class CAnimContainer  * GetAnimContainer(const class CModel  *); /* linkage=_ZNK6CModel16GetAnimContainerEv */
	/* <4aeee52> modellib/model.cpp:1617 */
	bool IsValidAnimation(const class CModel  *, int); /* linkage=_ZNK6CModel16IsValidAnimationEi */
	int LookupAnimation(const class CModel  *, const char  *); /* linkage=_ZNK6CModel15LookupAnimationEPKc */
	const char  * GetAnimationName(const class CModel  *, int); /* linkage=_ZNK6CModel16GetAnimationNameEi */
	class HSequence LookupSequence(const class CModel  *, const char  *); /* linkage=_ZNK6CModel14LookupSequenceEPKc */
	const char  * GetSequenceName(const class CModel  *, class HSequence); /* linkage=_ZNK6CModel15GetSequenceNameE9HSequence */
	class HSequence FindDefaultPreviewSequence(const class CModel  *); /* linkage=_ZNK6CModel26FindDefaultPreviewSequenceEv */
	int LookupPoseParameter(const class CModel  *, const char  *); /* linkage=_ZNK6CModel19LookupPoseParameterEPKc */
	/* <4aef664> modellib/model.cpp:2029 */
	const class PoseParamDesc_t  * pPoseParameter(const class CModel  *, int); /* linkage=_ZNK6CModel14pPoseParameterEi */
	const char  * GetPoseParameterName(const class CModel  *, int); /* linkage=_ZNK6CModel20GetPoseParameterNameEi */
	float EncodePoseParameter(const class CModel  *, int, float, float &); /* linkage=_ZNK6CModel19EncodePoseParameterEifRf */
	float DecodePoseParameter(const class CModel  *, int, float); /* linkage=_ZNK6CModel19DecodePoseParameterEif */
	int LookupWeightlist(const class CModel  *, const char  *); /* linkage=_ZNK6CModel16LookupWeightlistEPKc */
	int GetNumWeightlists(const class CModel  *); /* linkage=_ZNK6CModel17GetNumWeightlistsEv */
	/* <4aef716> modellib/model.cpp:2116 */
	const class ChannelWeightlist_t  * pChannelWeightlist(const class CModel  *, int); /* linkage=_ZNK6CModel18pChannelWeightlistEi */
	const char  * GetWeightlistName(const class CModel  *, int); /* linkage=_ZNK6CModel17GetWeightlistNameEi */
	const class IIKControlRigDescription  * GetIKControlRigDescription(const class CModel  *); /* linkage=_ZNK6CModel26GetIKControlRigDescriptionEv */
	int GetFootCount(const class CModel  *); /* linkage=_ZNK6CModel12GetFootCountEv */
	class CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > GetFeet(const class CModel  *); /* linkage=_ZNK6CModel7GetFeetEv */
	class CUtlVector<CLookAtChain, CUtlMemory<CLookAtChain, int> > GetLookAtChainList(const class CModel  *); /* linkage=_ZNK6CModel18GetLookAtChainListEv */
	bool HasMovementSettings(const class CModel  *); /* linkage=_ZNK6CModel19HasMovementSettingsEv */
	const class CMovementSettings  GetMovementSettings(const class CModel  *); /* linkage=_ZNK6CModel19GetMovementSettingsEv */
	const class CUtlVector<CSlopeTrace, CUtlMemory<CSlopeTrace, int> >  GetSlopeTraces(const class CModel  *); /* linkage=_ZNK6CModel14GetSlopeTracesEv */
	bool HasSkeletalInputSettings(const class CModel  *); /* linkage=_ZNK6CModel24HasSkeletalInputSettingsEv */
	class CVrSkeletalInputSettings GetSkeletalInputSettings(const class CModel  *); /* linkage=_ZNK6CModel24GetSkeletalInputSettingsEv */
	int GetNumAutoplaySequences(const class CModel  *); /* linkage=_ZNK6CModel23GetNumAutoplaySequencesEv */
	class HSequence GetAutoplaySequence(const class CModel  *, int); /* linkage=_ZNK6CModel19GetAutoplaySequenceEi */
	int GetNodeTransition(const class CModel  *, int, int); /* linkage=_ZNK6CModel17GetNodeTransitionEii */
	int EntryNode(const class CModel  *, class HSequence); /* linkage=_ZNK6CModel9EntryNodeE9HSequence */
	int ExitNode(const class CModel  *, class HSequence); /* linkage=_ZNK6CModel8ExitNodeE9HSequence */
	const char  * pszNodeName(const class CModel  *, int); /* linkage=_ZNK6CModel11pszNodeNameEi */
	int RemapSeqBone(const class CModel  *, class HSequence, int); /* linkage=_ZNK6CModel12RemapSeqBoneE9HSequencei */
	int RemapAnimBone(const class CModel  *, int, int); /* linkage=_ZNK6CModel13RemapAnimBoneEii */
	/* <4d7d9a7> modellib/animation.cpp:426 */
	class CActivityToSequenceMapping * GetActivityToSequenceMapping(const class CModel  *); /* linkage=_ZNK6CModel28GetActivityToSequenceMappingEv */
	/* <4d7d968> modellib/animation.cpp:432 */
	void InitActivityToSequence(const class CModel  *); /* linkage=_ZNK6CModel22InitActivityToSequenceEv */
	int NumBonesForLOD(const class CModel  *, int); /* linkage=_ZNK6CModel14NumBonesForLODEi */
	enum BoneFlags_t boneFlags(const class CModel  *, int); /* linkage=_ZNK6CModel9boneFlagsEi */
	void SetBoneFlags(class CModel *, int, enum BoneFlags_t); /* linkage=_ZN6CModel12SetBoneFlagsEiN14CModelSkeleton11BoneFlags_tE */
	void ClearBoneFlags(class CModel *, int, enum BoneFlags_t); /* linkage=_ZN6CModel14ClearBoneFlagsEiN14CModelSkeleton11BoneFlags_tE */
	class Vector bonePosParentSpace(const class CModel  *, int); /* linkage=_ZNK6CModel18bonePosParentSpaceEi */
	class Quaternion boneRotParentSpace(const class CModel  *, int); /* linkage=_ZNK6CModel18boneRotParentSpaceEi */
	float GetXYMovementScaleAnim(const class CModel  *, int); /* linkage=_ZNK6CModel22GetXYMovementScaleAnimEi */
	void GetBindPoseWorldTransforms(const class CModel  *, const class CTransform  &, int, class CTransform *); /* linkage=_ZNK6CModel26GetBindPoseWorldTransformsERK10CTransformiPS0_ */
	void GetBindPoseWorldTransforms(const class CModel  *, const class matrix3x4a_t  &, int, class matrix3x4a_t *); /* linkage=_ZNK6CModel26GetBindPoseWorldTransformsERK12matrix3x4a_tiPS0_ */
	void GetSequenceBounds(const class CModel  *, class HSequence, class Vector *, class Vector *); /* linkage=_ZNK6CModel17GetSequenceBoundsE9HSequenceP6VectorS2_ */
	int ComputeMaxLODLevelUsedByModel(const class CModel  *); /* linkage=_ZNK6CModel29ComputeMaxLODLevelUsedByModelEv */
	int LODLevelForScreenSize(const class CModel  *, float, float); /* linkage=_ZNK6CModel21LODLevelForScreenSizeEff */
	const class CUtlVector<float, CUtlMemory<float, int> >  & GetLODGroupSwitchDistances(const class CModel  *); /* linkage=_ZNK6CModel26GetLODGroupSwitchDistancesEv */
	class Vector eyeposition(const class CModel  *); /* linkage=_ZNK6CModel11eyepositionEv */
	float MaxEyeDeflection(const class CModel  *); /* linkage=_ZNK6CModel16MaxEyeDeflectionEv */
	float mass(const class CModel  *); /* linkage=_ZNK6CModel4massEv */
	class Vector hull_min(const class CModel  *); /* linkage=_ZNK6CModel8hull_minEv */
	class Vector hull_max(const class CModel  *); /* linkage=_ZNK6CModel8hull_maxEv */
	const class KeyValues3  * GetModelKeyValues(const class CModel  *); /* linkage=_ZNK6CModel17GetModelKeyValuesEv */
	void GetKeyValueText(const class CModel  *, class CUtlString *); /* linkage=_ZNK6CModel15GetKeyValueTextEP10CUtlString */
	/* <4aef852> modellib/model.cpp:2503 */
	void SetupAttachment(int, const int32  *, const float  *, const class Vector  *, const class Quaternion  *, const class CTransform  *, const class CTransform  &, class CTransform *, bool); /* linkage=_ZN6CModel15SetupAttachmentEiPKiPKfPK6VectorPK10QuaternionPK10CTransformRSB_PSA_b */
	/* <4aefa0d> modellib/model.cpp:2635 */
	void SetupAttachment(int, const int32  *, const float  *, const class Vector  *, const class Quaternion  *, const class matrix3x4a_t  *, const class matrix3x4a_t  &, class matrix3x4a_t *, bool); /* linkage=_ZN6CModel15SetupAttachmentEiPKiPKfPK6VectorPK10QuaternionPK12matrix3x4a_tRSB_PSA_b */
	int GetBoneConstraintCount(const class CModel  *); /* linkage=_ZNK6CModel22GetBoneConstraintCountEv */
	const class CBoneConstraintBase  * GetBoneConstraint(const class CModel  *, int); /* linkage=_ZNK6CModel17GetBoneConstraintEi */
	enum BoneConstraintResult_t CalcBoneConstraints(const class CModel  *, class CTransform *, class CVarBitVec *, float *); /* linkage=_ZNK6CModel19CalcBoneConstraintsEP10CTransformP10CVarBitVecPf */
	enum BoneConstraintResult_t CalcBoneConstraints(const class CModel  *, class matrix3x4a_t *, int, class CVarBitVec *, float *); /* linkage=_ZNK6CModel19CalcBoneConstraintsEP12matrix3x4a_tiP10CVarBitVecPf */
	bool GetAttachmentTransform(const class CModel  *, class CUtlStringToken, class CTransformUnaligned &); /* linkage=_ZNK6CModel22GetAttachmentTransformE15CUtlStringTokenR19CTransformUnaligned */
	class CTransformUnaligned GetBoneTransform(const class CModel  *, int); /* linkage=_ZNK6CModel16GetBoneTransformEi */
	const char  * GetAttachmentNameFromIndex(const class CModel  *, int); /* linkage=_ZNK6CModel26GetAttachmentNameFromIndexEi */
	bool MeshTrace(const class CModel  *, const class MeshTraceInput  &, class MeshTraceOutput &); /* linkage=_ZNK6CModel9MeshTraceERK14MeshTraceInputR15MeshTraceOutput */
	int GetNumMaterialsInGroup(const class CModel  *, int); /* linkage=_ZNK6CModel22GetNumMaterialsInGroupEi */
	HMaterial GetMaterialInGroup(const class CModel  *, int, int); /* linkage=_ZNK6CModel18GetMaterialInGroupEii */
	float GetVisemeMorph(class CModel *, const class CUtlString  &, int); /* linkage=_ZN6CModel14GetVisemeMorphERK10CUtlStringi */
	int GetMaterialIndex(const class CModel  *, const class IMaterial2  *); /* linkage=_ZNK6CModel16GetMaterialIndexEPK10IMaterial2 */
	int GetMaterialIndexCount(const class CModel  *); /* linkage=_ZNK6CModel21GetMaterialIndexCountEv */
	HMaterial GetMaterialByIndex(const class CModel  *, int); /* linkage=_ZNK6CModel18GetMaterialByIndexEi */
	const char  * GetBaseModelName(const class CModel  *); /* linkage=_ZNK6CModel16GetBaseModelNameEv */
	HModel GetBaseModel(const class CModel  *); /* linkage=_ZNK6CModel12GetBaseModelEv */
	DataType_t * GetAnimationStateData<(AnimationStateType_t)2>(const class CModel  *, void *); /* linkage=_ZNK6CModel21GetAnimationStateDataIL20AnimationStateType_t2EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEPv */
};

// <00340E88> ../public/modellib/model.h:321
void CModel::CModel()
{
} /* size: 0 */

// <00340CD1> ../public/modellib/model.h:326
void CModel::~CModel()
{
} /* size: 0 */

// <03B9B743> ../public/modellib/model.h:371
inline void CModel::GetModelFlags()
{
} /* size: 0 */

// <0134962C> ../public/modellib/model.h:375
inline void CModel::GetModelName()
{
} /* size: 0 */

// <01349613> ../public/modellib/model.h:398
inline void CModel::HasPhysics()
{
} /* size: 0 */

// <064DED65> ../public/modellib/model.h:400
inline void CModel::GetPhysicsContainer()
{
} /* size: 0 */

// <04999468> ../public/modellib/model.h:469
// variable: 1
inline void CModel::GetAnimationStateData<(void* pBase)
{
	uint32 nOffset; // 471
} /* size: 0, variables: 1 */

// <04AA6CF9> ../public/modellib/model.h:654
void BodyPart_t::~BodyPart_t()
{
} /* size: 0 */

// <04AA6CDC> ../public/modellib/model.h:654
inline void BodyPart_t::~BodyPart_t()
{
} /* size: 0 */

// <00351400> ../public/modellib/model.h:654
void BodyPart_t::BodyPart_t()
{
} /* size: 0 */

// <003513E3> ../public/modellib/model.h:654
inline void BodyPart_t::BodyPart_t()
{
} /* size: 0 */

// <013495E1> ../public/modellib/model.h:731
inline void CModel::GetBaseModelName()
{
} /* size: 0 */

// <013495C8> ../public/modellib/model.h:732
inline void CModel::GetBaseModel()
{
} /* size: 0 */

// <013495A2> ../public/modellib/model.h:736
// variable: 1
inline void CModel::GetMeshBounds()
{
	AABB_t aabb; // 738
} /* size: 0, variables: 1 */

// <0134957C> ../public/modellib/model.h:743
// variable: 1
inline void CModel::GetPhysicsBounds()
{
	AABB_t aabb; // 745
} /* size: 0, variables: 1 */

// <01349556> ../public/modellib/model.h:750
// variable: 1
inline void CModel::GetModelRenderBounds()
{
	AABB_t aabb; // 752
} /* size: 0, variables: 1 */


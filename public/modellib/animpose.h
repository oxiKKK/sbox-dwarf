
//
// public/modellib/animpose.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 2
//

// <022D5DAD> ../public/modellib/animpose.h:17
// function calls: 39
void CAnimPose::~CAnimPose()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 17
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 17
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 17
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 17
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 17
} /* size: 182, inline expansions: 39 (629 bytes) */

// <022D5D45> ../public/modellib/animpose.h:17
void CAnimPose::~CAnimPose()
{
} /* size: 0 */

// <022D5D29> ../public/modellib/animpose.h:17
inline void CAnimPose::~CAnimPose()
{
} /* size: 0 */

// <0156D76A> ../public/modellib/animpose.h:17
// function calls: 44
void CAnimPose::~CAnimPose()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 17
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 17
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 17
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 17
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 17
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 17
	CAnimPose::~CAnimPose(); // 17
} /* size: 181, inline expansions: 44 (736 bytes) */

// <00B32C01> ../public/modellib/animpose.h:17
// member functions: 56
// member variables: 6
// class size: 152
class CAnimPose : public CRefCountedMemPoolObject<CAnimPose> {
public:
	/* class CRefCountedMemPoolObject<CAnimPose> <ancestor>; */ /* 0 24 */
	void CAnimPose(CAnimPose* , CAnimPose& );
	void CAnimPose(CAnimPose* , const CAnimPose& );
	/* ../public/modellib/animpose.h:20 */
	void CAnimPose(CAnimPose* );
	/* ../public/modellib/animpose.h:21 */
	void CAnimPose(CAnimPose* , const CAnimSkeletonConstPtr& );
	/* ../public/modellib/animpose.h:23 */
	void Init(CAnimPose* , const CAnimSkeletonConstPtr& );
	/* ../public/modellib/animpose.h:25 */
	void CopyFrom(CAnimPose* , const CAnimPose& );
	/* ../public/modellib/animpose.h:126 */
	const CAnimSkeletonConstPtr& GetSkeleton(const CAnimPose* );
	/* ../public/modellib/animpose.h:31 */
	void InitToIdentity(CAnimPose* );
	/* ../public/modellib/animpose.h:34 */
	void InitToBindPose(CAnimPose* );
	/* ../public/modellib/animpose.h:111 */
	int GetBoneCount(const CAnimPose* );
	/* ../public/modellib/animpose.h:118 */
	const CTransform& GetLocalSpaceTransform(const CAnimPose* , BoneIndex_t);
	/* ../public/modellib/animpose.h:43 */
	void SetLocalSpaceTransform(CAnimPose* , BoneIndex_t, const CTransform& );
	/* ../public/modellib/animpose.h:46 */
	const CTransform& GetModelSpaceTransform(const CAnimPose* , BoneIndex_t);
	/* ../public/modellib/animpose.h:49 */
	void SetModelSpaceTransform(CAnimPose* , BoneIndex_t, const CTransform& );
	/* ../public/modellib/animpose.h:52 */
	void CalculateModelSpaceTransforms(CAnimPose* );
	/* ../public/modellib/animpose.h:55 */
	const CTransform* GetLocalSpaceTransformsPtr(const CAnimPose* );
	/* ../public/modellib/animpose.h:58 */
	CTransform* GetWritableLocalSpaceTransformsPtr(CAnimPose* );
	/* ../public/modellib/animpose.h:61 */
	const CTransform* GetModelSpaceTransformsPtr(const CAnimPose* );
	/* ../public/modellib/animpose.h:66 */
	CTransform* GetWritableModelSpaceTransformsPtr(CAnimPose* );
	/* ../public/modellib/animpose.h:70 */
	void ForceCalculateLocalTransforms(CAnimPose* );
	/* ../public/modellib/animpose.h:73 */
	void CalculateWorldSpaceTransforms(const CAnimPose* , const CTransform& , CTransform* );
	/* ../public/modellib/animpose.h:79 */
	int GetMorphCount(const CAnimPose* );
	/* ../public/modellib/animpose.h:82 */
	float* GetMorphWeights(CAnimPose* );
	/* ../public/modellib/animpose.h:83 */
	const float* GetMorphWeights(const CAnimPose* );
	/* ../public/modellib/animpose.h:86 */
	float GetMorphWeight(const CAnimPose* , int);
	/* ../public/modellib/animpose.h:87 */
	void SetMorphWeight(CAnimPose* , int, float);
private:
	/* ../public/modellib/animpose.h:90 */
	void SetDirtyRecurs(CAnimPose* , BoneIndex_t);
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_localSpaceTransforms; /* 24 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_modelSpaceTransforms; /* 56 32 */
	CVarBitVec m_modelSpaceTransformsDirty; /* 88 24 */
	CUtlVector<float, CUtlMemory<float, int> > m_morphWeights; /* 112 32 */
	CAnimSkeletonConstPtr m_pSkeleton; /* 144 8 */
	virtual void ~CAnimPose(CAnimPose* );
	void CAnimPose(class CAnimPose *, class CAnimPose &); /* linkage=_ZN9CAnimPoseC4EOS_ */
	void CAnimPose(class CAnimPose *, const class CAnimPose  &); /* linkage=_ZN9CAnimPoseC4ERKS_ */
	void CAnimPose(class CAnimPose *); /* linkage=_ZN9CAnimPoseC4Ev */
	void CAnimPose(class CAnimPose *, const CAnimSkeletonConstPtr  &); /* linkage=_ZN9CAnimPoseC4ERK9CSmartPtrIK13CAnimSkeleton17CRefCountAccessorE */
	void Init(class CAnimPose *, const CAnimSkeletonConstPtr  &); /* linkage=_ZN9CAnimPose4InitERK9CSmartPtrIK13CAnimSkeleton17CRefCountAccessorE */
	void CopyFrom(class CAnimPose *, const class CAnimPose  &); /* linkage=_ZN9CAnimPose8CopyFromERKS_ */
	const CAnimSkeletonConstPtr  & GetSkeleton(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose11GetSkeletonEv */
	void InitToIdentity(class CAnimPose *); /* linkage=_ZN9CAnimPose14InitToIdentityEv */
	void InitToBindPose(class CAnimPose *); /* linkage=_ZN9CAnimPose14InitToBindPoseEv */
	int GetBoneCount(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose12GetBoneCountEv */
	const class CTransform  & GetLocalSpaceTransform(const class CAnimPose  *, BoneIndex_t); /* linkage=_ZNK9CAnimPose22GetLocalSpaceTransformEi */
	void SetLocalSpaceTransform(class CAnimPose *, BoneIndex_t, const class CTransform  &); /* linkage=_ZN9CAnimPose22SetLocalSpaceTransformEiRK10CTransform */
	const class CTransform  & GetModelSpaceTransform(const class CAnimPose  *, BoneIndex_t); /* linkage=_ZNK9CAnimPose22GetModelSpaceTransformEi */
	void SetModelSpaceTransform(class CAnimPose *, BoneIndex_t, const class CTransform  &); /* linkage=_ZN9CAnimPose22SetModelSpaceTransformEiRK10CTransform */
	void CalculateModelSpaceTransforms(class CAnimPose *); /* linkage=_ZN9CAnimPose29CalculateModelSpaceTransformsEv */
	/* <22e1514> modellib/animpose.cpp:244 */
	const class CTransform  * GetLocalSpaceTransformsPtr(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose26GetLocalSpaceTransformsPtrEv */
	/* <22e159d> modellib/animpose.cpp:252 */
	class CTransform * GetWritableLocalSpaceTransformsPtr(class CAnimPose *); /* linkage=_ZN9CAnimPose34GetWritableLocalSpaceTransformsPtrEv */
	/* <22e1751> modellib/animpose.cpp:261 */
	const class CTransform  * GetModelSpaceTransformsPtr(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose26GetModelSpaceTransformsPtrEv */
	class CTransform * GetWritableModelSpaceTransformsPtr(class CAnimPose *); /* linkage=_ZN9CAnimPose34GetWritableModelSpaceTransformsPtrEv */
	void ForceCalculateLocalTransforms(class CAnimPose *); /* linkage=_ZN9CAnimPose29ForceCalculateLocalTransformsEv */
	void CalculateWorldSpaceTransforms(const class CAnimPose  *, const class CTransform  &, class CTransform *); /* linkage=_ZNK9CAnimPose29CalculateWorldSpaceTransformsERK10CTransformPS0_ */
	/* <22e17db> modellib/animpose.cpp:324 */
	int GetMorphCount(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose13GetMorphCountEv */
	/* <22e1835> modellib/animpose.cpp:332 */
	float * GetMorphWeights(class CAnimPose *); /* linkage=_ZN9CAnimPose15GetMorphWeightsEv */
	const float  * GetMorphWeights(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose15GetMorphWeightsEv */
	float GetMorphWeight(const class CAnimPose  *, int); /* linkage=_ZNK9CAnimPose14GetMorphWeightEi */
	void SetMorphWeight(class CAnimPose *, int, float); /* linkage=_ZN9CAnimPose14SetMorphWeightEif */
	void SetDirtyRecurs(class CAnimPose *, BoneIndex_t); /* linkage=_ZN9CAnimPose14SetDirtyRecursEi */
	virtual void ~CAnimPose(class CAnimPose *); /* linkage=_ZN9CAnimPoseD4Ev */
};

// <022D50DA> ../public/modellib/animpose.h:17
// member functions: 56
// member variables: 6
// class size: 152
class CAnimPose : public CRefCountedMemPoolObject<CAnimPose> {
public:
	/* class CRefCountedMemPoolObject<CAnimPose> <ancestor>; */ /* 0 24 */
	void CAnimPose(CAnimPose* , CAnimPose& );
	void CAnimPose(CAnimPose* , const CAnimPose& );
	/* modellib/animpose.cpp:26 */
	void CAnimPose(CAnimPose* );
	/* modellib/animpose.cpp:34 */
	void CAnimPose(CAnimPose* , const CAnimSkeletonConstPtr& );
	/* modellib/animpose.cpp:42 */
	void Init(CAnimPose* , const CAnimSkeletonConstPtr& );
	/* modellib/animpose.cpp:69 */
	void CopyFrom(CAnimPose* , const CAnimPose& );
	/* ../public/modellib/animpose.h:126 */
	const CAnimSkeletonConstPtr& GetSkeleton(const CAnimPose* );
	/* modellib/animpose.cpp:82 */
	void InitToIdentity(CAnimPose* );
	/* modellib/animpose.cpp:102 */
	void InitToBindPose(CAnimPose* );
	/* ../public/modellib/animpose.h:111 */
	int GetBoneCount(const CAnimPose* );
	/* ../public/modellib/animpose.h:118 */
	const CTransform& GetLocalSpaceTransform(const CAnimPose* , BoneIndex_t);
	/* modellib/animpose.cpp:122 */
	void SetLocalSpaceTransform(CAnimPose* , BoneIndex_t, const CTransform& );
	/* modellib/animpose.cpp:138 */
	const CTransform& GetModelSpaceTransform(const CAnimPose* , BoneIndex_t);
	/* modellib/animpose.cpp:173 */
	void SetModelSpaceTransform(CAnimPose* , BoneIndex_t, const CTransform& );
	/* modellib/animpose.cpp:216 */
	void CalculateModelSpaceTransforms(CAnimPose* );
	/* modellib/animpose.cpp:244 */
	const CTransform* GetLocalSpaceTransformsPtr(const CAnimPose* );
	/* modellib/animpose.cpp:252 */
	CTransform* GetWritableLocalSpaceTransformsPtr(CAnimPose* );
	/* modellib/animpose.cpp:261 */
	const CTransform* GetModelSpaceTransformsPtr(const CAnimPose* );
	/* modellib/animpose.cpp:269 */
	CTransform* GetWritableModelSpaceTransformsPtr(CAnimPose* );
	/* modellib/animpose.cpp:277 */
	void ForceCalculateLocalTransforms(CAnimPose* );
	/* modellib/animpose.cpp:306 */
	void CalculateWorldSpaceTransforms(const CAnimPose* , const CTransform& , CTransform* );
	/* modellib/animpose.cpp:324 */
	int GetMorphCount(const CAnimPose* );
	/* modellib/animpose.cpp:332 */
	float* GetMorphWeights(CAnimPose* );
	/* modellib/animpose.cpp:340 */
	const float* GetMorphWeights(const CAnimPose* );
	/* modellib/animpose.cpp:348 */
	float GetMorphWeight(const CAnimPose* , int);
	/* modellib/animpose.cpp:356 */
	void SetMorphWeight(CAnimPose* , int, float);
private:
	/* modellib/animpose.cpp:364 */
	void SetDirtyRecurs(CAnimPose* , BoneIndex_t);
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_localSpaceTransforms; /* 24 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_modelSpaceTransforms; /* 56 32 */
	CVarBitVec m_modelSpaceTransformsDirty; /* 88 24 */
	CUtlVector<float, CUtlMemory<float, int> > m_morphWeights; /* 112 32 */
	CAnimSkeletonConstPtr m_pSkeleton; /* 144 8 */
	virtual void ~CAnimPose(CAnimPose* );
	void CAnimPose(class CAnimPose *, class CAnimPose &); /* linkage=_ZN9CAnimPoseC4EOS_ */
	void CAnimPose(class CAnimPose *, const class CAnimPose  &); /* linkage=_ZN9CAnimPoseC4ERKS_ */
	void CAnimPose(class CAnimPose *); /* linkage=_ZN9CAnimPoseC4Ev */
	void CAnimPose(class CAnimPose *, const CAnimSkeletonConstPtr  &); /* linkage=_ZN9CAnimPoseC4ERK9CSmartPtrIK13CAnimSkeleton17CRefCountAccessorE */
	void Init(class CAnimPose *, const CAnimSkeletonConstPtr  &); /* linkage=_ZN9CAnimPose4InitERK9CSmartPtrIK13CAnimSkeleton17CRefCountAccessorE */
	void CopyFrom(class CAnimPose *, const class CAnimPose  &); /* linkage=_ZN9CAnimPose8CopyFromERKS_ */
	const CAnimSkeletonConstPtr  & GetSkeleton(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose11GetSkeletonEv */
	void InitToIdentity(class CAnimPose *); /* linkage=_ZN9CAnimPose14InitToIdentityEv */
	void InitToBindPose(class CAnimPose *); /* linkage=_ZN9CAnimPose14InitToBindPoseEv */
	int GetBoneCount(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose12GetBoneCountEv */
	const class CTransform  & GetLocalSpaceTransform(const class CAnimPose  *, BoneIndex_t); /* linkage=_ZNK9CAnimPose22GetLocalSpaceTransformEi */
	void SetLocalSpaceTransform(class CAnimPose *, BoneIndex_t, const class CTransform  &); /* linkage=_ZN9CAnimPose22SetLocalSpaceTransformEiRK10CTransform */
	const class CTransform  & GetModelSpaceTransform(const class CAnimPose  *, BoneIndex_t); /* linkage=_ZNK9CAnimPose22GetModelSpaceTransformEi */
	void SetModelSpaceTransform(class CAnimPose *, BoneIndex_t, const class CTransform  &); /* linkage=_ZN9CAnimPose22SetModelSpaceTransformEiRK10CTransform */
	void CalculateModelSpaceTransforms(class CAnimPose *); /* linkage=_ZN9CAnimPose29CalculateModelSpaceTransformsEv */
	/* <22e1514> modellib/animpose.cpp:244 */
	const class CTransform  * GetLocalSpaceTransformsPtr(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose26GetLocalSpaceTransformsPtrEv */
	/* <22e159d> modellib/animpose.cpp:252 */
	class CTransform * GetWritableLocalSpaceTransformsPtr(class CAnimPose *); /* linkage=_ZN9CAnimPose34GetWritableLocalSpaceTransformsPtrEv */
	/* <22e1751> modellib/animpose.cpp:261 */
	const class CTransform  * GetModelSpaceTransformsPtr(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose26GetModelSpaceTransformsPtrEv */
	class CTransform * GetWritableModelSpaceTransformsPtr(class CAnimPose *); /* linkage=_ZN9CAnimPose34GetWritableModelSpaceTransformsPtrEv */
	void ForceCalculateLocalTransforms(class CAnimPose *); /* linkage=_ZN9CAnimPose29ForceCalculateLocalTransformsEv */
	void CalculateWorldSpaceTransforms(const class CAnimPose  *, const class CTransform  &, class CTransform *); /* linkage=_ZNK9CAnimPose29CalculateWorldSpaceTransformsERK10CTransformPS0_ */
	/* <22e17db> modellib/animpose.cpp:324 */
	int GetMorphCount(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose13GetMorphCountEv */
	/* <22e1835> modellib/animpose.cpp:332 */
	float * GetMorphWeights(class CAnimPose *); /* linkage=_ZN9CAnimPose15GetMorphWeightsEv */
	const float  * GetMorphWeights(const class CAnimPose  *); /* linkage=_ZNK9CAnimPose15GetMorphWeightsEv */
	float GetMorphWeight(const class CAnimPose  *, int); /* linkage=_ZNK9CAnimPose14GetMorphWeightEi */
	void SetMorphWeight(class CAnimPose *, int, float); /* linkage=_ZN9CAnimPose14SetMorphWeightEif */
	void SetDirtyRecurs(class CAnimPose *, BoneIndex_t); /* linkage=_ZN9CAnimPose14SetDirtyRecursEi */
	virtual void ~CAnimPose(class CAnimPose *); /* linkage=_ZN9CAnimPoseD4Ev */
};

// <01565857> ../public/modellib/animpose.h:20
void CAnimPose::CAnimPose()
{
} /* size: 0 */

// <01716948> ../public/modellib/animpose.h:107
void LerpInPlace(CAnimPose &, const CAnimPose &, float)
{
} /* size: 0 */

// <0273D49B> ../public/modellib/animpose.h:111
inline void CAnimPose::GetBoneCount()
{
} /* size: 0 */

// <01B4EC4D> ../public/modellib/animpose.h:118
inline void CAnimPose::GetLocalSpaceTransform(BoneIndex_t boneIndex)
{
} /* size: 0 */

// <022E007A> ../public/modellib/animpose.h:126
inline void CAnimPose::GetSkeleton()
{
} /* size: 0 */


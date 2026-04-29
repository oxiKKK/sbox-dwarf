
//
// public/bonesetup/spaceagnosticboneaccessor.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//	class: 1
//

// <02885281> ../public/bonesetup/spaceagnosticboneaccessor.h:13
// function calls: 48
void CSpaceAgnosticBoneAccessor::~CSpaceAgnosticBoneAccessor()
{
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 13
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
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
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 13
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
	CBoneAccessor<CTransform>::Cleanup(); // 181
	CBoneAccessor<CTransform>::~CBoneAccessor(); // 70
	CWritableBoneAccessor<CTransform>::~CWritableBoneAccessor(); // 13
} /* size: 508, inline expansions: 48 (2435 bytes) */

// <0288521A> ../public/bonesetup/spaceagnosticboneaccessor.h:13
void CSpaceAgnosticBoneAccessor::~CSpaceAgnosticBoneAccessor()
{
} /* size: 36 */

// <028851FE> ../public/bonesetup/spaceagnosticboneaccessor.h:13
inline void CSpaceAgnosticBoneAccessor::~CSpaceAgnosticBoneAccessor()
{
} /* size: 0 */

// <02884569> ../public/bonesetup/spaceagnosticboneaccessor.h:13
// member functions: 46
// member variables: 11
// vtable entries: 8
// class size: 496
class CSpaceAgnosticBoneAccessor : public IPoseAccessor {
public:
	/* class IPoseAccessor <ancestor>; */ /* 0 8 */
	void CSpaceAgnosticBoneAccessor(CSpaceAgnosticBoneAccessor* , CSpaceAgnosticBoneAccessor& );
	void CSpaceAgnosticBoneAccessor(CSpaceAgnosticBoneAccessor* , const CSpaceAgnosticBoneAccessor& );
	/* bonesetup/spaceagnosticboneaccessor.cpp:15 */
	void CSpaceAgnosticBoneAccessor(CSpaceAgnosticBoneAccessor* , const CTransform& , const CModel* , const uint32* , CWritableBoneAccessor<CTransform>& , CWritableBoneAccessor<CTransform>& , float);
	/* bonesetup/spaceagnosticboneaccessor.cpp:76 */
	virtual void SetWorldSpaceBone(CSpaceAgnosticBoneAccessor* , int, const CTransform& );
	/* bonesetup/spaceagnosticboneaccessor.cpp:143 */
	virtual CTransform GetWorldSpaceBone(const CSpaceAgnosticBoneAccessor* , int);
	/* bonesetup/spaceagnosticboneaccessor.cpp:98 */
	virtual void SetModelSpaceBone(CSpaceAgnosticBoneAccessor* , int, const CTransform& );
	/* bonesetup/spaceagnosticboneaccessor.cpp:103 */
	virtual CTransform GetModelSpaceBone(const CSpaceAgnosticBoneAccessor* , int);
	/* bonesetup/spaceagnosticboneaccessor.cpp:170 */
	virtual void SetParentSpaceBone(CSpaceAgnosticBoneAccessor* , int, const CTransform& );
	/* bonesetup/spaceagnosticboneaccessor.cpp:181 */
	virtual CTransform GetParentSpaceBone(const CSpaceAgnosticBoneAccessor* , int);
	/* bonesetup/spaceagnosticboneaccessor.cpp:193 */
	void FinalizeParentSpaceBones(CSpaceAgnosticBoneAccessor* );
	/* bonesetup/spaceagnosticboneaccessor.cpp:211 */
	void FinalizeWorldSpaceBones(CSpaceAgnosticBoneAccessor* );
	/* ../public/bonesetup/spaceagnosticboneaccessor.h:78 */
	const uint32* GetBonesToSetUp(const CSpaceAgnosticBoneAccessor* );
	/* ../public/bonesetup/spaceagnosticboneaccessor.h:45 */
	const CWritableBoneAccessor<CTransform>& GetWorldSpaceBoneAccessor(const CSpaceAgnosticBoneAccessor* );
	/* ../public/bonesetup/spaceagnosticboneaccessor.h:46 */
	const CWritableBoneAccessor<CTransform>& GetParentSpaceBoneAccessor(const CSpaceAgnosticBoneAccessor* );
	/* ../public/bonesetup/spaceagnosticboneaccessor.h:48 */
	int GetNumBones(const CSpaceAgnosticBoneAccessor* );
	/* ../public/bonesetup/spaceagnosticboneaccessor.h:50 */
	virtual const CModel* GetModel(const CSpaceAgnosticBoneAccessor* );
	/* ../public/bonesetup/spaceagnosticboneaccessor.h:52 */
	virtual CTransform GetModelToWorld(const CSpaceAgnosticBoneAccessor* );
	/* ../public/bonesetup/spaceagnosticboneaccessor.h:54 */
	float GetScale(const CSpaceAgnosticBoneAccessor* );
private:
	/* bonesetup/spaceagnosticboneaccessor.cpp:187 */
	bool IsParentSpaceBoneReadable(const CSpaceAgnosticBoneAccessor* , int);
	/* bonesetup/spaceagnosticboneaccessor.cpp:165 */
	bool IsWorldSpaceBoneReadable(const CSpaceAgnosticBoneAccessor* , int);
	/* bonesetup/spaceagnosticboneaccessor.cpp:110 */
	void InvalidateWorldSpaceBoneAndChildren(CSpaceAgnosticBoneAccessor* , int);
	/* bonesetup/spaceagnosticboneaccessor.cpp:45 */
	void SanityCheck(const CSpaceAgnosticBoneAccessor* );
	CWritableBoneAccessor<CTransform> m_WorldSpaceBoneAccessor; /* 8 24 */
	CWritableBoneAccessor<CTransform> m_ParentSpaceBoneAccessor; /* 32 24 */
	CTransform m_mModelToWorld __attribute__((__aligned__(16))); /* 64 32 */
	const class CModel * m_pModel; /* 96 8 */
	const uint32 * m_pBonesToSetUp; /* 104 8 */
	CUtlVectorFixedGrowable<unsigned int, 32> m_ScratchReadableWorldSpaceBones __attribute__((__aligned__(8))); /* 112 160 */
	CUtlVectorFixedGrowable<unsigned int, 32> m_ScratchReadableParentSpaceBones __attribute__((__aligned__(8))); /* 272 160 */
	CWritableBoneAccessor<CTransform> m_OriginalWorldSpaceBoneAccessor; /* 432 24 */
	CWritableBoneAccessor<CTransform> m_OriginalParentSpaceBoneAccessor; /* 456 24 */
	const float m_flScale; /* 480 4 */
	virtual void ~CSpaceAgnosticBoneAccessor(CSpaceAgnosticBoneAccessor* );
	int GetNumBones(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor11GetNumBonesEv */
	/* <1bb388d> ../public/bonesetup/spaceagnosticboneaccessor.h:50 */
	virtual const class CModel  * GetModel(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor8GetModelEv */
	/* <1bb38b7> ../public/bonesetup/spaceagnosticboneaccessor.h:52 */
	virtual class CTransform GetModelToWorld(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor15GetModelToWorldEv */
	virtual class CTransform GetWorldSpaceBone(const class CSpaceAgnosticBoneAccessor  *, int); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor17GetWorldSpaceBoneEi */
	virtual void SetWorldSpaceBone(class CSpaceAgnosticBoneAccessor *, int, const class CTransform  &); /* linkage=_ZN26CSpaceAgnosticBoneAccessor17SetWorldSpaceBoneEiRK10CTransform */
	virtual class CTransform GetModelSpaceBone(const class CSpaceAgnosticBoneAccessor  *, int); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor17GetModelSpaceBoneEi */
	virtual void SetModelSpaceBone(class CSpaceAgnosticBoneAccessor *, int, const class CTransform  &); /* linkage=_ZN26CSpaceAgnosticBoneAccessor17SetModelSpaceBoneEiRK10CTransform */
	virtual class CTransform GetParentSpaceBone(const class CSpaceAgnosticBoneAccessor  *, int); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor18GetParentSpaceBoneEi */
	virtual void SetParentSpaceBone(class CSpaceAgnosticBoneAccessor *, int, const class CTransform  &); /* linkage=_ZN26CSpaceAgnosticBoneAccessor18SetParentSpaceBoneEiRK10CTransform */
	void CSpaceAgnosticBoneAccessor(class CSpaceAgnosticBoneAccessor *, const class CTransform  &, const class CModel  *, const uint32  *, class CWritableBoneAccessor<CTransform> &, class CWritableBoneAccessor<CTransform> &, float); /* linkage=_ZN26CSpaceAgnosticBoneAccessorC4ERK10CTransformPK6CModelPKjR21CWritableBoneAccessorIS0_ESA_f */
	virtual void ~CSpaceAgnosticBoneAccessor(class CSpaceAgnosticBoneAccessor *); /* linkage=_ZN26CSpaceAgnosticBoneAccessorD4Ev */
	const uint32  * GetBonesToSetUp(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor15GetBonesToSetUpEv */
	float GetScale(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor8GetScaleEv */
	const class CWritableBoneAccessor<CTransform>  & GetParentSpaceBoneAccessor(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor26GetParentSpaceBoneAccessorEv */
	const class CWritableBoneAccessor<CTransform>  & GetWorldSpaceBoneAccessor(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor25GetWorldSpaceBoneAccessorEv */
	void CSpaceAgnosticBoneAccessor(class CSpaceAgnosticBoneAccessor *, class CSpaceAgnosticBoneAccessor &); /* linkage=_ZN26CSpaceAgnosticBoneAccessorC4EOS_ */
	void CSpaceAgnosticBoneAccessor(class CSpaceAgnosticBoneAccessor *, const class CSpaceAgnosticBoneAccessor  &); /* linkage=_ZN26CSpaceAgnosticBoneAccessorC4ERKS_ */
	void FinalizeParentSpaceBones(class CSpaceAgnosticBoneAccessor *); /* linkage=_ZN26CSpaceAgnosticBoneAccessor24FinalizeParentSpaceBonesEv */
	void FinalizeWorldSpaceBones(class CSpaceAgnosticBoneAccessor *); /* linkage=_ZN26CSpaceAgnosticBoneAccessor23FinalizeWorldSpaceBonesEv */
	bool IsParentSpaceBoneReadable(const class CSpaceAgnosticBoneAccessor  *, int); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor25IsParentSpaceBoneReadableEi */
	bool IsWorldSpaceBoneReadable(const class CSpaceAgnosticBoneAccessor  *, int); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor24IsWorldSpaceBoneReadableEi */
	void InvalidateWorldSpaceBoneAndChildren(class CSpaceAgnosticBoneAccessor *, int); /* linkage=_ZN26CSpaceAgnosticBoneAccessor35InvalidateWorldSpaceBoneAndChildrenEi */
	void SanityCheck(const class CSpaceAgnosticBoneAccessor  *); /* linkage=_ZNK26CSpaceAgnosticBoneAccessor11SanityCheckEv */
} __attribute__((__aligned__(16)));

// <01AD0D3F> ../public/bonesetup/spaceagnosticboneaccessor.h:16
void CSpaceAgnosticBoneAccessor::CSpaceAgnosticBoneAccessor(const CTransform& mModelToWorld, const CModel* pModel, const uint32* pBonesToSetup, CWritableBoneAccessor<CTransform>& parentSpaceBones, CWritableBoneAccessor<CTransform>& worldSpaceBones, float flScale)
{
} /* size: 0 */

// <01B4ED08> ../public/bonesetup/spaceagnosticboneaccessor.h:45
inline void CSpaceAgnosticBoneAccessor::GetWorldSpaceBoneAccessor()
{
} /* size: 0 */

// <01B4ECEF> ../public/bonesetup/spaceagnosticboneaccessor.h:46
inline void CSpaceAgnosticBoneAccessor::GetParentSpaceBoneAccessor()
{
} /* size: 0 */

// <01B4ECD6> ../public/bonesetup/spaceagnosticboneaccessor.h:48
inline void CSpaceAgnosticBoneAccessor::GetNumBones()
{
} /* size: 0 */

// <02889B4D> ../public/bonesetup/spaceagnosticboneaccessor.h:50
void CSpaceAgnosticBoneAccessor::GetModel()
{
} /* size: 9 */

// <01BB128F> ../public/bonesetup/spaceagnosticboneaccessor.h:50
inline void CSpaceAgnosticBoneAccessor::GetModel()
{
} /* size: 0 */

// <02889B1D> ../public/bonesetup/spaceagnosticboneaccessor.h:52
void CSpaceAgnosticBoneAccessor::GetModelToWorld()
{
} /* size: 39 */

// <01BB1276> ../public/bonesetup/spaceagnosticboneaccessor.h:52
inline void CSpaceAgnosticBoneAccessor::GetModelToWorld()
{
} /* size: 0 */

// <01B4EC8B> ../public/bonesetup/spaceagnosticboneaccessor.h:54
inline void CSpaceAgnosticBoneAccessor::GetScale()
{
} /* size: 0 */

// <01B4EC72> ../public/bonesetup/spaceagnosticboneaccessor.h:78
inline void CSpaceAgnosticBoneAccessor::GetBonesToSetUp()
{
} /* size: 0 */


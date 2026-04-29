
//
// public/modellib/animskeleton.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 21
//	classes: 6
//

// <0657A8BD> ../public/modellib/animskeleton.h:24
void CAnimFoot::~CAnimFoot()
{
} /* size: 0 */

// <0657A8A0> ../public/modellib/animskeleton.h:24
inline void CAnimFoot::~CAnimFoot()
{
} /* size: 0 */

// <0232B9D6> ../public/modellib/animskeleton.h:24
void CAnimFoot::CAnimFoot()
{
} /* size: 0 */

// <0232B9BA> ../public/modellib/animskeleton.h:24
inline void CAnimFoot::CAnimFoot()
{
} /* size: 0 */

// <000F35E4> ../public/modellib/animskeleton.h:24
// member functions: 3
// member variables: 5
// class size: 40
class CAnimFoot {
	CUtlString m_name; /* 0 8 */
	Vector m_vBallOffset; /* 8 12 */
	Vector m_vHeelOffset; /* 20 12 */
	BoneIndex_t m_ankleBoneIndex; /* 32 4 */
	BoneIndex_t m_toeBoneIndex; /* 36 4 */
	void ~CAnimFoot(CAnimFoot* );
	void ~CAnimFoot(class CAnimFoot *); /* linkage=_ZN9CAnimFootD4Ev */
	void CAnimFoot(class CAnimFoot *); /* linkage=_ZN9CAnimFootC4Ev */
};

// <0657A362> ../public/modellib/animskeleton.h:52
void CAnimSkeleton::~CAnimSkeleton()
{
} /* size: 0 */

// <0657A32E> ../public/modellib/animskeleton.h:52
inline void CAnimSkeleton::~CAnimSkeleton()
{
} /* size: 0 */

// <02329FE7> ../public/modellib/animskeleton.h:52
// variables: 2
// function calls: 57
void CAnimSkeleton::~CAnimSkeleton()
{
	{
		int i; // 1721
		CUtlMemory<CAnimFoot, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 24
		CAnimFoot::~CAnimFoot(); // 1526
		Destruct<CAnimFoot>(CAnimFoot* pMemory); // 1723
	}
	CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimFoot, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimFoot, int>::Purge(); // 903
	CUtlMemory<CAnimFoot, int>::Purge(); // 1799
	CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::Purge(); // 560
	ValidateAlignment<CAnimFoot>(void); // 508
	CUtlMemory<CAnimFoot, int>::Purge(); // 510
	CUtlMemory<CAnimFoot, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimFoot, CUtlMemory<CAnimFoot, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> >::~CUtlVector(); // 52
	{
		int i; // 1721
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 95
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 95
		BoneInfo::~BoneInfo(); // 1526
		Destruct<CAnimSkeleton::BoneInfo>(BoneInfo* pMemory); // 1723
	}
	CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimSkeleton::BoneInfo, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimSkeleton::BoneInfo, int>::Purge(); // 903
	CUtlMemory<CAnimSkeleton::BoneInfo, int>::Purge(); // 1799
	CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Purge(); // 560
	ValidateAlignment<CAnimSkeleton::BoneInfo>(void); // 508
	CUtlMemory<CAnimSkeleton::BoneInfo, int>::Purge(); // 510
	CUtlMemory<CAnimSkeleton::BoneInfo, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::~CUtlVector(); // 52
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 52
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 52
} /* size: 361, inline expansions: 37 (1325 bytes) */

// <000F3661> ../public/modellib/animskeleton.h:52
// member functions: 31
// member variables: 6
// class size: 152
class CAnimSkeleton : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* ../public/modellib/animskeleton.h:95 */
	struct BoneInfo {
		CUtlVector<int, CUtlMemory<int, int> > m_children; /* 0 32 */
		CUtlString m_name; /* 32 8 */
		BoneIndex_t m_parent; /* 40 4 */
		BoneFlags_t m_flags; /* 44 4 */
		void ~BoneInfo(BoneInfo* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* ../public/modellib/animskeleton.h:55 */
	void CAnimSkeleton(CAnimSkeleton* , const CModel& );
	/* ../public/modellib/animskeleton.h:114 */
	int GetBoneCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:120 */
	int GetMorphCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:126 */
	int GetFootCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:132 */
	const CUtlString& GetBoneName(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:70 */
	BoneIndex_t GetBoneIndex(const CAnimSkeleton* , const CUtlString& );
	/* ../public/modellib/animskeleton.h:139 */
	BoneIndex_t GetParentIndex(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:146 */
	int GetChildCount(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:153 */
	BoneIndex_t GetChildIndex(const CAnimSkeleton* , BoneIndex_t, int);
	/* ../public/modellib/animskeleton.h:160 */
	const CTransform& GetBindPoseLocalSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:167 */
	const CTransform& GetBindPoseModelSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:174 */
	const CAnimFoot& GetFoot(const CAnimSkeleton* , int);
protected:
	/* ../public/modellib/animskeleton.h:93 */
	void CAnimSkeleton(CAnimSkeleton* );
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_localSpaceTransforms; /* 16 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_modelSpaceTransforms; /* 48 32 */
	CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> > m_boneInfo; /* 80 32 */
	CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> > m_feet; /* 112 32 */
	int m_nMorphCount; /* 144 4 */
	virtual void ~CAnimSkeleton(CAnimSkeleton* );
	void CAnimSkeleton(class CAnimSkeleton *, const class CModel  &); /* linkage=_ZN13CAnimSkeletonC4ERK6CModel */
	int GetBoneCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetBoneCountEv */
	int GetMorphCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton13GetMorphCountEv */
	int GetFootCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetFootCountEv */
	const class CUtlString  & GetBoneName(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton11GetBoneNameEi */
	BoneIndex_t GetBoneIndex(const class CAnimSkeleton  *, const class CUtlString  &); /* linkage=_ZNK13CAnimSkeleton12GetBoneIndexERK10CUtlString */
	BoneIndex_t GetParentIndex(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton14GetParentIndexEi */
	int GetChildCount(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton13GetChildCountEi */
	BoneIndex_t GetChildIndex(const class CAnimSkeleton  *, BoneIndex_t, int); /* linkage=_ZNK13CAnimSkeleton13GetChildIndexEii */
	const class CTransform  & GetBindPoseLocalSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseLocalSpaceEi */
	const class CTransform  & GetBindPoseModelSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseModelSpaceEi */
	const class CAnimFoot  & GetFoot(const class CAnimSkeleton  *, int); /* linkage=_ZNK13CAnimSkeleton7GetFootEi */
	void CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonC4Ev */
	virtual void ~CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonD4Ev */
	void CAnimSkeleton(class CAnimSkeleton *, class CAnimSkeleton &); /* linkage=_ZN13CAnimSkeletonC4EOS_ */
	void CAnimSkeleton(class CAnimSkeleton *, const class CAnimSkeleton  &); /* linkage=_ZN13CAnimSkeletonC4ERKS_ */
};

// <00B12D32> ../public/modellib/animskeleton.h:52
// member functions: 34
// member variables: 6
// class size: 152
class CAnimSkeleton : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* ../public/modellib/animskeleton.h:95 */
	struct BoneInfo {
		CUtlVector<int, CUtlMemory<int, int> > m_children; /* 0 32 */
		CUtlString m_name; /* 32 8 */
		BoneIndex_t m_parent; /* 40 4 */
		BoneFlags_t m_flags; /* 44 4 */
		void BoneInfo(BoneInfo* );
		void ~BoneInfo(BoneInfo* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimSkeleton(CAnimSkeleton* , CAnimSkeleton& );
	void CAnimSkeleton(CAnimSkeleton* , const CAnimSkeleton& );
	/* ../public/modellib/animskeleton.h:55 */
	void CAnimSkeleton(CAnimSkeleton* , const CModel& );
	/* ../public/modellib/animskeleton.h:114 */
	int GetBoneCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:120 */
	int GetMorphCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:126 */
	int GetFootCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:132 */
	const CUtlString& GetBoneName(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:70 */
	BoneIndex_t GetBoneIndex(const CAnimSkeleton* , const CUtlString& );
	/* ../public/modellib/animskeleton.h:139 */
	BoneIndex_t GetParentIndex(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:146 */
	int GetChildCount(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:153 */
	BoneIndex_t GetChildIndex(const CAnimSkeleton* , BoneIndex_t, int);
	/* ../public/modellib/animskeleton.h:160 */
	const CTransform& GetBindPoseLocalSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:167 */
	const CTransform& GetBindPoseModelSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:174 */
	const CAnimFoot& GetFoot(const CAnimSkeleton* , int);
protected:
	/* ../public/modellib/animskeleton.h:93 */
	void CAnimSkeleton(CAnimSkeleton* );
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_localSpaceTransforms; /* 16 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_modelSpaceTransforms; /* 48 32 */
	CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> > m_boneInfo; /* 80 32 */
	CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> > m_feet; /* 112 32 */
	int m_nMorphCount; /* 144 4 */
	virtual void ~CAnimSkeleton(CAnimSkeleton* );
	void CAnimSkeleton(class CAnimSkeleton *, const class CModel  &); /* linkage=_ZN13CAnimSkeletonC4ERK6CModel */
	int GetBoneCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetBoneCountEv */
	int GetMorphCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton13GetMorphCountEv */
	int GetFootCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetFootCountEv */
	const class CUtlString  & GetBoneName(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton11GetBoneNameEi */
	BoneIndex_t GetBoneIndex(const class CAnimSkeleton  *, const class CUtlString  &); /* linkage=_ZNK13CAnimSkeleton12GetBoneIndexERK10CUtlString */
	BoneIndex_t GetParentIndex(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton14GetParentIndexEi */
	int GetChildCount(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton13GetChildCountEi */
	BoneIndex_t GetChildIndex(const class CAnimSkeleton  *, BoneIndex_t, int); /* linkage=_ZNK13CAnimSkeleton13GetChildIndexEii */
	const class CTransform  & GetBindPoseLocalSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseLocalSpaceEi */
	const class CTransform  & GetBindPoseModelSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseModelSpaceEi */
	const class CAnimFoot  & GetFoot(const class CAnimSkeleton  *, int); /* linkage=_ZNK13CAnimSkeleton7GetFootEi */
	void CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonC4Ev */
	virtual void ~CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonD4Ev */
	void CAnimSkeleton(class CAnimSkeleton *, class CAnimSkeleton &); /* linkage=_ZN13CAnimSkeletonC4EOS_ */
	void CAnimSkeleton(class CAnimSkeleton *, const class CAnimSkeleton  &); /* linkage=_ZN13CAnimSkeletonC4ERKS_ */
};

// <00D8D905> ../public/modellib/animskeleton.h:52
// member functions: 33
// member variables: 6
// class size: 152
class CAnimSkeleton : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* ../public/modellib/animskeleton.h:95 */
	struct BoneInfo {
		CUtlVector<int, CUtlMemory<int, int> > m_children; /* 0 32 */
		CUtlString m_name; /* 32 8 */
		BoneIndex_t m_parent; /* 40 4 */
		BoneFlags_t m_flags; /* 44 4 */
		void ~BoneInfo(BoneInfo* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimSkeleton(CAnimSkeleton* , CAnimSkeleton& );
	void CAnimSkeleton(CAnimSkeleton* , const CAnimSkeleton& );
	/* ../public/modellib/animskeleton.h:55 */
	void CAnimSkeleton(CAnimSkeleton* , const CModel& );
	/* ../public/modellib/animskeleton.h:114 */
	int GetBoneCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:120 */
	int GetMorphCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:126 */
	int GetFootCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:132 */
	const CUtlString& GetBoneName(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:70 */
	BoneIndex_t GetBoneIndex(const CAnimSkeleton* , const CUtlString& );
	/* ../public/modellib/animskeleton.h:139 */
	BoneIndex_t GetParentIndex(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:146 */
	int GetChildCount(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:153 */
	BoneIndex_t GetChildIndex(const CAnimSkeleton* , BoneIndex_t, int);
	/* ../public/modellib/animskeleton.h:160 */
	const CTransform& GetBindPoseLocalSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:167 */
	const CTransform& GetBindPoseModelSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:174 */
	const CAnimFoot& GetFoot(const CAnimSkeleton* , int);
protected:
	/* ../public/modellib/animskeleton.h:93 */
	void CAnimSkeleton(CAnimSkeleton* );
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_localSpaceTransforms; /* 16 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_modelSpaceTransforms; /* 48 32 */
	CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> > m_boneInfo; /* 80 32 */
	CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> > m_feet; /* 112 32 */
	int m_nMorphCount; /* 144 4 */
	virtual void ~CAnimSkeleton(CAnimSkeleton* );
	void CAnimSkeleton(class CAnimSkeleton *, const class CModel  &); /* linkage=_ZN13CAnimSkeletonC4ERK6CModel */
	int GetBoneCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetBoneCountEv */
	int GetMorphCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton13GetMorphCountEv */
	int GetFootCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetFootCountEv */
	const class CUtlString  & GetBoneName(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton11GetBoneNameEi */
	BoneIndex_t GetBoneIndex(const class CAnimSkeleton  *, const class CUtlString  &); /* linkage=_ZNK13CAnimSkeleton12GetBoneIndexERK10CUtlString */
	BoneIndex_t GetParentIndex(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton14GetParentIndexEi */
	int GetChildCount(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton13GetChildCountEi */
	BoneIndex_t GetChildIndex(const class CAnimSkeleton  *, BoneIndex_t, int); /* linkage=_ZNK13CAnimSkeleton13GetChildIndexEii */
	const class CTransform  & GetBindPoseLocalSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseLocalSpaceEi */
	const class CTransform  & GetBindPoseModelSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseModelSpaceEi */
	const class CAnimFoot  & GetFoot(const class CAnimSkeleton  *, int); /* linkage=_ZNK13CAnimSkeleton7GetFootEi */
	void CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonC4Ev */
	virtual void ~CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonD4Ev */
	void CAnimSkeleton(class CAnimSkeleton *, class CAnimSkeleton &); /* linkage=_ZN13CAnimSkeletonC4EOS_ */
	void CAnimSkeleton(class CAnimSkeleton *, const class CAnimSkeleton  &); /* linkage=_ZN13CAnimSkeletonC4ERKS_ */
};

// <016CBBF0> ../public/modellib/animskeleton.h:52
// member functions: 30
// member variables: 6
// class size: 152
class CAnimSkeleton : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* ../public/modellib/animskeleton.h:95 */
	struct BoneInfo {
		CUtlVector<int, CUtlMemory<int, int> > m_children; /* 0 32 */
		CUtlString m_name; /* 32 8 */
		BoneIndex_t m_parent; /* 40 4 */
		BoneFlags_t m_flags; /* 44 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* ../public/modellib/animskeleton.h:55 */
	void CAnimSkeleton(CAnimSkeleton* , const CModel& );
	/* ../public/modellib/animskeleton.h:114 */
	int GetBoneCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:120 */
	int GetMorphCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:126 */
	int GetFootCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:132 */
	const CUtlString& GetBoneName(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:70 */
	BoneIndex_t GetBoneIndex(const CAnimSkeleton* , const CUtlString& );
	/* ../public/modellib/animskeleton.h:139 */
	BoneIndex_t GetParentIndex(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:146 */
	int GetChildCount(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:153 */
	BoneIndex_t GetChildIndex(const CAnimSkeleton* , BoneIndex_t, int);
	/* ../public/modellib/animskeleton.h:160 */
	const CTransform& GetBindPoseLocalSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:167 */
	const CTransform& GetBindPoseModelSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:174 */
	const CAnimFoot& GetFoot(const CAnimSkeleton* , int);
protected:
	/* ../public/modellib/animskeleton.h:93 */
	void CAnimSkeleton(CAnimSkeleton* );
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_localSpaceTransforms; /* 16 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_modelSpaceTransforms; /* 48 32 */
	CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> > m_boneInfo; /* 80 32 */
	CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> > m_feet; /* 112 32 */
	int m_nMorphCount; /* 144 4 */
	virtual void ~CAnimSkeleton(CAnimSkeleton* );
	void CAnimSkeleton(class CAnimSkeleton *, const class CModel  &); /* linkage=_ZN13CAnimSkeletonC4ERK6CModel */
	int GetBoneCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetBoneCountEv */
	int GetMorphCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton13GetMorphCountEv */
	int GetFootCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetFootCountEv */
	const class CUtlString  & GetBoneName(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton11GetBoneNameEi */
	BoneIndex_t GetBoneIndex(const class CAnimSkeleton  *, const class CUtlString  &); /* linkage=_ZNK13CAnimSkeleton12GetBoneIndexERK10CUtlString */
	BoneIndex_t GetParentIndex(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton14GetParentIndexEi */
	int GetChildCount(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton13GetChildCountEi */
	BoneIndex_t GetChildIndex(const class CAnimSkeleton  *, BoneIndex_t, int); /* linkage=_ZNK13CAnimSkeleton13GetChildIndexEii */
	const class CTransform  & GetBindPoseLocalSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseLocalSpaceEi */
	const class CTransform  & GetBindPoseModelSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseModelSpaceEi */
	const class CAnimFoot  & GetFoot(const class CAnimSkeleton  *, int); /* linkage=_ZNK13CAnimSkeleton7GetFootEi */
	void CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonC4Ev */
	virtual void ~CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonD4Ev */
	void CAnimSkeleton(class CAnimSkeleton *, class CAnimSkeleton &); /* linkage=_ZN13CAnimSkeletonC4EOS_ */
	void CAnimSkeleton(class CAnimSkeleton *, const class CAnimSkeleton  &); /* linkage=_ZN13CAnimSkeletonC4ERKS_ */
};

// <02314E1B> ../public/modellib/animskeleton.h:52
// member functions: 34
// member variables: 6
// class size: 152
class CAnimSkeleton : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* ../public/modellib/animskeleton.h:95 */
	struct BoneInfo {
		CUtlVector<int, CUtlMemory<int, int> > m_children; /* 0 32 */
		CUtlString m_name; /* 32 8 */
		BoneIndex_t m_parent; /* 40 4 */
		BoneFlags_t m_flags; /* 44 4 */
		void BoneInfo(BoneInfo* );
		void ~BoneInfo(BoneInfo* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimSkeleton(CAnimSkeleton* , CAnimSkeleton& );
	void CAnimSkeleton(CAnimSkeleton* , const CAnimSkeleton& );
	/* modellib/animskeleton.cpp:11 */
	void CAnimSkeleton(CAnimSkeleton* , const CModel& );
	/* ../public/modellib/animskeleton.h:114 */
	int GetBoneCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:120 */
	int GetMorphCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:126 */
	int GetFootCount(const CAnimSkeleton* );
	/* ../public/modellib/animskeleton.h:132 */
	const CUtlString& GetBoneName(const CAnimSkeleton* , BoneIndex_t);
	/* modellib/animskeleton.cpp:97 */
	BoneIndex_t GetBoneIndex(const CAnimSkeleton* , const CUtlString& );
	/* ../public/modellib/animskeleton.h:139 */
	BoneIndex_t GetParentIndex(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:146 */
	int GetChildCount(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:153 */
	BoneIndex_t GetChildIndex(const CAnimSkeleton* , BoneIndex_t, int);
	/* ../public/modellib/animskeleton.h:160 */
	const CTransform& GetBindPoseLocalSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:167 */
	const CTransform& GetBindPoseModelSpace(const CAnimSkeleton* , BoneIndex_t);
	/* ../public/modellib/animskeleton.h:174 */
	const CAnimFoot& GetFoot(const CAnimSkeleton* , int);
protected:
	/* ../public/modellib/animskeleton.h:93 */
	void CAnimSkeleton(CAnimSkeleton* );
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_localSpaceTransforms; /* 16 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_modelSpaceTransforms; /* 48 32 */
	CUtlVector<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> > m_boneInfo; /* 80 32 */
	CUtlVector<CAnimFoot, CUtlMemory<CAnimFoot, int> > m_feet; /* 112 32 */
	int m_nMorphCount; /* 144 4 */
	virtual void ~CAnimSkeleton(CAnimSkeleton* );
	void CAnimSkeleton(class CAnimSkeleton *, const class CModel  &); /* linkage=_ZN13CAnimSkeletonC4ERK6CModel */
	int GetBoneCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetBoneCountEv */
	int GetMorphCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton13GetMorphCountEv */
	int GetFootCount(const class CAnimSkeleton  *); /* linkage=_ZNK13CAnimSkeleton12GetFootCountEv */
	const class CUtlString  & GetBoneName(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton11GetBoneNameEi */
	BoneIndex_t GetBoneIndex(const class CAnimSkeleton  *, const class CUtlString  &); /* linkage=_ZNK13CAnimSkeleton12GetBoneIndexERK10CUtlString */
	BoneIndex_t GetParentIndex(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton14GetParentIndexEi */
	int GetChildCount(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton13GetChildCountEi */
	BoneIndex_t GetChildIndex(const class CAnimSkeleton  *, BoneIndex_t, int); /* linkage=_ZNK13CAnimSkeleton13GetChildIndexEii */
	const class CTransform  & GetBindPoseLocalSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseLocalSpaceEi */
	const class CTransform  & GetBindPoseModelSpace(const class CAnimSkeleton  *, BoneIndex_t); /* linkage=_ZNK13CAnimSkeleton21GetBindPoseModelSpaceEi */
	const class CAnimFoot  & GetFoot(const class CAnimSkeleton  *, int); /* linkage=_ZNK13CAnimSkeleton7GetFootEi */
	void CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonC4Ev */
	virtual void ~CAnimSkeleton(class CAnimSkeleton *); /* linkage=_ZN13CAnimSkeletonD4Ev */
	void CAnimSkeleton(class CAnimSkeleton *, class CAnimSkeleton &); /* linkage=_ZN13CAnimSkeletonC4EOS_ */
	void CAnimSkeleton(class CAnimSkeleton *, const class CAnimSkeleton  &); /* linkage=_ZN13CAnimSkeletonC4ERKS_ */
};

// <00DF4AB6> ../public/modellib/animskeleton.h:55
void CAnimSkeleton::CAnimSkeleton(const CModel& model)
{
} /* size: 0 */

// <00D2173F> ../public/modellib/animskeleton.h:93
void CAnimSkeleton::CAnimSkeleton()
{
} /* size: 0 */

// <00D21726> ../public/modellib/animskeleton.h:93
inline void CAnimSkeleton::CAnimSkeleton()
{
} /* size: 0 */

// <0657A994> ../public/modellib/animskeleton.h:95
void BoneInfo::~BoneInfo()
{
} /* size: 0 */

// <0657A977> ../public/modellib/animskeleton.h:95
inline void BoneInfo::~BoneInfo()
{
} /* size: 0 */

// <0232B50B> ../public/modellib/animskeleton.h:95
void BoneInfo::BoneInfo()
{
} /* size: 0 */

// <0232B4EF> ../public/modellib/animskeleton.h:95
inline void BoneInfo::BoneInfo()
{
} /* size: 0 */

// <022E018A> ../public/modellib/animskeleton.h:114
inline void CAnimSkeleton::GetBoneCount()
{
} /* size: 0 */

// <022E0171> ../public/modellib/animskeleton.h:120
inline void CAnimSkeleton::GetMorphCount()
{
} /* size: 0 */

// <02334F8B> ../public/modellib/animskeleton.h:139
inline void CAnimSkeleton::GetParentIndex(BoneIndex_t boneIndex)
{
} /* size: 0 */

// <022E0127> ../public/modellib/animskeleton.h:146
inline void CAnimSkeleton::GetChildCount(BoneIndex_t boneIndex)
{
} /* size: 0 */

// <022E00F6> ../public/modellib/animskeleton.h:153
inline void CAnimSkeleton::GetChildIndex(BoneIndex_t boneIndex, int childIndex)
{
} /* size: 0 */

// <022E00D1> ../public/modellib/animskeleton.h:160
inline void CAnimSkeleton::GetBindPoseLocalSpace(BoneIndex_t boneIndex)
{
} /* size: 0 */

// <022E00AC> ../public/modellib/animskeleton.h:167
inline void CAnimSkeleton::GetBindPoseModelSpace(BoneIndex_t boneIndex)
{
} /* size: 0 */


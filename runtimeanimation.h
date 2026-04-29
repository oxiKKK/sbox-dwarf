
//
// runtimeanimation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 31
//	classes: 4
//	structs: 2
//

// <00C61917> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:8
void BoneTableEntry::BoneTableEntry()
{
} /* size: 0 */

// <00C618FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:8
inline void BoneTableEntry::BoneTableEntry()
{
} /* size: 0 */

// <00C38C48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:8
void BoneTableEntry::~BoneTableEntry()
{
} /* size: 0 */

// <00C38C2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:8
inline void BoneTableEntry::~BoneTableEntry()
{
} /* size: 0 */

// <00BDC795> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:8
// member functions: 2
// member variables: 6
// struct size: 56
struct BoneTableEntry {
	CUtlString m_name; /* 0 8 */
	int m_nParent; /* 8 4 */
	Vector pos; /* 12 12 */
	Quaternion rot; /* 24 16 */
	BoneFlags_t m_nFlags; /* 40 4 */
	CUtlString m_szGrouping; /* 48 8 */
	void ~BoneTableEntry(BoneTableEntry* );
	void BoneTableEntry(BoneTableEntry* );
};

// <00C34ABD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:18
void BoneTableChannel::BoneTableChannel()
{
} /* size: 0 */

// <00C34AA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:18
inline void BoneTableChannel::BoneTableChannel()
{
} /* size: 0 */

// <00BDC836> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:18
// member function: 1
// member variables: 6
// struct size: 24
struct BoneTableChannel {
	int m_iPosChannel; /* 0 4 */
	int m_iPosElement; /* 4 4 */
	int m_iQuatChannel; /* 8 4 */
	int m_iQuatElement; /* 12 4 */
	int m_iScaleChannel; /* 16 4 */
	int m_iScaleElement; /* 20 4 */
	void BoneTableChannel(BoneTableChannel* );
};

// <00CF9688> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:28
void CAnimReferenceTables::CAnimReferenceTables()
{
} /* size: 0 */

// <00CF966C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:28
inline void CAnimReferenceTables::CAnimReferenceTables()
{
} /* size: 0 */

// <00CF9655> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:28
void CAnimReferenceTables::~CAnimReferenceTables()
{
} /* size: 0 */

// <00CF9639> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:28
inline void CAnimReferenceTables::~CAnimReferenceTables()
{
} /* size: 0 */

// <00BDDFE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:28
// member functions: 8
// member variable: 1
// class size: 32
class CAnimReferenceTables {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:32 */
	int AddBone(CAnimReferenceTables* , const char* , int, const Quaternion& , const Vector& , BoneFlags_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:45 */
	const CUtlVector<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >& GetBoneTable(const CAnimReferenceTables* );
private:
	CUtlVector<BoneTableEntry, CUtlMemory<BoneTableEntry, int> > m_bonetable; /* 0 32 */
	void ~CAnimReferenceTables(CAnimReferenceTables* );
	void CAnimReferenceTables(CAnimReferenceTables* );
	int AddBone(class CAnimReferenceTables *, const char  *, int, const class Quaternion  &, const class Vector  &, enum BoneFlags_t); /* linkage=_ZN20CAnimReferenceTables7AddBoneEPKciRK10QuaternionRK6VectorN14CModelSkeleton11BoneFlags_tE */
	const class CUtlVector<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >  & GetBoneTable(const class CAnimReferenceTables  *); /* linkage=_ZNK20CAnimReferenceTables12GetBoneTableEv */
	void ~CAnimReferenceTables(class CAnimReferenceTables *); /* linkage=_ZN20CAnimReferenceTablesD4Ev */
	void CAnimReferenceTables(class CAnimReferenceTables *); /* linkage=_ZN20CAnimReferenceTablesC4Ev */
};

// <00D0D7D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:32
// variables: 2
inline void CAnimReferenceTables::AddBone(const char* pszBoneName, int nParentBoneIndex, const Quaternion& qRotLocal, const Vector& vPosLocal, BoneFlags_t eBoneFlags)
{
	int nIndex; // 34
	BoneTableEntry& dstBone; // 35
} /* size: 0, variables: 2 */

// <00D0D7BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:45
inline void CAnimReferenceTables::GetBoneTable()
{
} /* size: 0 */

// <00CF86D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:55
void CRuntimeAnim::CRuntimeAnim()
{
} /* size: 0 */

// <00CF86BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:55
inline void CRuntimeAnim::CRuntimeAnim()
{
} /* size: 0 */

// <00C5F8B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:55
void CRuntimeAnim::~CRuntimeAnim()
{
} /* size: 0 */

// <00C5F89B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:55
inline void CRuntimeAnim::~CRuntimeAnim()
{
} /* size: 0 */

// <00BDE0A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:55
// member functions: 10
// member variables: 13
// class size: 72
class CRuntimeAnim {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:59 */
	void GetReferenceBone(const CRuntimeAnim* , Vector& , Quaternion& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:66 */
	const CTransform& GetBoneFrame(const CRuntimeAnim* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:71 */
	int GetBoneCount(const CRuntimeAnim* );
	CUtlString m_sName; /* 0 8 */
	float m_flFps; /* 8 4 */
	int m_nNumFrames; /* 12 4 */
	bool m_bLooping; /* 16 1 */
	bool m_bAllZeros; /* 17 1 */
	bool m_bHidden; /* 18 1 */
	bool m_bDelta; /* 19 1 */
	bool m_bLegacyWorldspace; /* 20 1 */
	bool m_bDisableInterpolation; /* 21 1 */
	CAnimReferenceTables * m_referenceTables; /* 24 8 */
	CUtlVector<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int> > m_boneAnim; /* 32 32 */
	int m_nSectionCount; /* 64 4 */
	int m_nFramesPerSection; /* 68 4 */
	void ~CRuntimeAnim(CRuntimeAnim* );
	void CRuntimeAnim(CRuntimeAnim* );
	void GetReferenceBone(const class CRuntimeAnim  *, class Vector &, class Quaternion &, int); /* linkage=_ZNK12CRuntimeAnim16GetReferenceBoneER6VectorR10Quaternioni */
	const class CTransform  & GetBoneFrame(const class CRuntimeAnim  *, int, int); /* linkage=_ZNK12CRuntimeAnim12GetBoneFrameEii */
	int GetBoneCount(const class CRuntimeAnim  *); /* linkage=_ZNK12CRuntimeAnim12GetBoneCountEv */
	void ~CRuntimeAnim(class CRuntimeAnim *); /* linkage=_ZN12CRuntimeAnimD4Ev */
	void CRuntimeAnim(class CRuntimeAnim *); /* linkage=_ZN12CRuntimeAnimC4Ev */
};

// <00D0D772> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:59
// variable: 1
inline void CRuntimeAnim::GetReferenceBone(Vector& vPos, Quaternion& qRot, int nBone)
{
	const BoneTableEntry& bone; // 61
} /* size: 0, variables: 1 */

// <00D0D741> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:66
inline void CRuntimeAnim::GetBoneFrame(int nBone, int nFrame)
{
} /* size: 0 */

// <00D0D728> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:71
inline void CRuntimeAnim::GetBoneCount()
{
} /* size: 0 */

// <00CF84B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:91
void CModelChannelLists::CModelChannelLists()
{
} /* size: 0 */

// <00CF849A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:91
inline void CModelChannelLists::CModelChannelLists()
{
} /* size: 0 */

// <00CF8483> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:91
void CModelChannelLists::~CModelChannelLists()
{
} /* size: 0 */

// <00CF8467> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:91
inline void CModelChannelLists::~CModelChannelLists()
{
} /* size: 0 */

// <00BDF956> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:91
// member functions: 14
// member variables: 2
// class size: 584
class CModelChannelLists {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:95 */
	void LinkReferenceTables(CModelChannelLists* , const CAnimReferenceTables* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:96 */
	void WriteContext(CModelChannelLists* , const CAnimReferenceTables* , CAnimKeyData* );
	CCompressorGroup m_compressor; /* 0 552 */
	CUtlVector<BoneTableChannel, CUtlMemory<BoneTableChannel, int> > m_boneChannels; /* 552 32 */
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:103 */
	void LinkBonesToChannels(CModelChannelLists* , const CAnimReferenceTables* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:104 */
	void WriteBoneInfo(CModelChannelLists* , const CAnimReferenceTables* , CAnimKeyData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:105 */
	void WriteDataChannels(CModelChannelLists* , CAnimKeyData* );
	void ~CModelChannelLists(CModelChannelLists* );
	void CModelChannelLists(CModelChannelLists* );
	/* <d35fd2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:9 */
	void LinkReferenceTables(class CModelChannelLists *, const class CAnimReferenceTables  *); /* linkage=_ZN18CModelChannelLists19LinkReferenceTablesEPK20CAnimReferenceTables */
	/* <d35c27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:14 */
	void WriteContext(class CModelChannelLists *, const class CAnimReferenceTables  *, class CAnimKeyData *); /* linkage=_ZN18CModelChannelLists12WriteContextEPK20CAnimReferenceTablesP12CAnimKeyData */
	void LinkBonesToChannels(class CModelChannelLists *, const class CAnimReferenceTables  *); /* linkage=_ZN18CModelChannelLists19LinkBonesToChannelsEPK20CAnimReferenceTables */
	void WriteBoneInfo(class CModelChannelLists *, const class CAnimReferenceTables  *, class CAnimKeyData *); /* linkage=_ZN18CModelChannelLists13WriteBoneInfoEPK20CAnimReferenceTablesP12CAnimKeyData */
	void WriteDataChannels(class CModelChannelLists *, class CAnimKeyData *); /* linkage=_ZN18CModelChannelLists17WriteDataChannelsEP12CAnimKeyData */
	void ~CModelChannelLists(class CModelChannelLists *); /* linkage=_ZN18CModelChannelListsD4Ev */
	void CModelChannelLists(class CModelChannelLists *); /* linkage=_ZN18CModelChannelListsC4Ev */
};

// <00CF9553> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:108
void CAnimDataBuilder::CAnimDataBuilder()
{
} /* size: 0 */

// <00CF9537> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:108
inline void CAnimDataBuilder::CAnimDataBuilder()
{
} /* size: 0 */

// <00CF873E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:108
// variables: 3
// function calls: 70
void CAnimDataBuilder::~CAnimDataBuilder()
{
	{
		int i; // 1807
		CUtlMemory<CRuntimeAnim::operator[](
				int i);  // 602
		CUtlVectorBase<CRuntimeAnim::Element(
			int i);  // 1809
		{
			int i; // 1721
			CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this,
				int i);  // 1723
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
			CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CTransform, int>::Purge(); // 903
			CUtlMemory<CTransform, int>::Purge(); // 1799
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
			ValidateAlignment<CTransform>(void); // 508
			CUtlMemory<CTransform, int>::Purge(); // 510
			CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 1526
			Destruct<CUtlVector<CTransform> >(CUtlVector<CTransform, CUtlMemory<CTransform, int> >* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 1798
		CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::Purge(); // 903
		CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 560
		ValidateAlignment<CUtlVector<CTransform> >(void); // 508
		CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::Purge(); // 510
		CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 410
		~CUtlVector(const CUtlVector<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTran this); // 55
		CUtlString::~CUtlString(); // 55
		CRuntimeAnim::~CRuntimeAnim(); // 1809
	}
	CUtlVectorBase<CRuntimeAnim::RemoveAll(); // 1798
	CUtlMemory<CRuntimeAnim::IsExternallyAllocated(); // 905
	CUtlMemory<CRuntimeAnim::Purge(); // 903
	CUtlMemory<CRuntimeAnim::Purge(); // 1799
	CUtlVectorBase<CRuntimeAnim::ResetDbgInfo(); // 1800
	CUtlVectorBase<CRuntimeAnim::Purge(); // 1811
	CUtlVectorBase<CRuntimeAnim::PurgeAndDeleteElements(); // 1900
	CUtlVectorBase<CRuntimeAnim::RemoveAll(); // 1798
	CUtlVectorBase<CRuntimeAnim::Purge(); // 560
	ValidateAlignment<CRuntimeAnim*>(void); // 508
	CUtlMemory<CRuntimeAnim::Purge(); // 510
	CUtlMemory<CRuntimeAnim::~CUtlMemory(); // 562
	CUtlVectorBase<CRuntimeAnim::~CUtlVectorBase(); // 410
	CUtlVector<CRuntimeAnim::~CUtlVector(); // 1901
	CUtlVectorAutoPurge<CRuntimeAnim::~CUtlVectorAutoPurge(); // 108
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::~CUtlMemory(); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this); // 47
	CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::~CUtlMap(); // 108
	{
		int i; // 1721
		CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::Element(
			int i);  // 1723
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 19
		CUtlBinaryBlock::~CUtlBinaryBlock(); // 122
		CSegmentTmp::~CSegmentTmp(); // 1526
		Destruct<CAnimDataBuilder::CSegmentTmp>(CSegmentTmp* pMemory); // 1723
	}
	CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::Purge(); // 903
	CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::Purge(); // 1799
	CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::Purge(); // 560
	CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::~CUtlVector(); // 108
} /* size: 495, inline expansions: 33 (1412 bytes) */

// <00CF8722> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:108
inline void CAnimDataBuilder::~CAnimDataBuilder()
{
} /* size: 0 */

// <00BDFA79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:108
// member functions: 22
// member variables: 6
// class size: 128
class CAnimDataBuilder {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:122 */
	class CSegmentTmp {
		uint32 m_hash; /* 0 4 */
		int32 m_nChannel; /* 4 4 */
		uint32 m_nElementMasks; /* 8 4 */
		int32 m_nFrames; /* 12 4 */
		int32 m_nRefCount; /* 16 4 */
		CUtlBinaryBlock m_container; /* 24 24 */
		void ~CSegmentTmp(CSegmentTmp* );
		void CSegmentTmp(CSegmentTmp* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:112 */
	void CompressAnimations(CAnimDataBuilder* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:113 */
	CAnimData* CreateAnimations(CAnimDataBuilder* , CModelChannelLists& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:115 */
	int GetAnimCount(const CAnimDataBuilder* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:116 */
	CRuntimeAnim* GetAnim(CAnimDataBuilder* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:118 */
	void AddAnimation(CAnimDataBuilder* , CRuntimeAnim* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:134 */
	void WriteAnimationData(CAnimDataBuilder* , CRuntimeAnim* , CAnimEncodedFrames* , CModelChannelLists& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:135 */
	void WriteCompressedAnimSection(CAnimDataBuilder* , CRuntimeAnim* , CAnimFrameBlockAnim* , int, CModelChannelLists& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:136 */
	void WriteCompressedAnimationData(CAnimDataBuilder* , CAnimData* );
	const int m_minSectionFrameLimit; /* 0 4 */
	const int m_sectionFrames; /* 4 4 */
	int m_nUniqueFrameIndex; /* 8 4 */
	CUtlVector<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> > m_segmentPool; /* 16 32 */
	CUtlOrderedMap m_segmentCache; /* 48 48 */
	CUtlVectorAutoPurge<CRuntimeAnim*> m_animationList; /* 96 32 */
	void ~CAnimDataBuilder(CAnimDataBuilder* );
	void CAnimDataBuilder(CAnimDataBuilder* );
	/* <d32285> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:112 */
	void CompressAnimations(class CAnimDataBuilder *); /* linkage=_ZN16CAnimDataBuilder18CompressAnimationsEv */
	class CAnimData * CreateAnimations(class CAnimDataBuilder *, class CModelChannelLists &); /* linkage=_ZN16CAnimDataBuilder16CreateAnimationsER18CModelChannelLists */
	/* <d32197> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:97 */
	int GetAnimCount(const class CAnimDataBuilder  *); /* linkage=_ZNK16CAnimDataBuilder12GetAnimCountEv */
	/* <d321f1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:102 */
	class CRuntimeAnim * GetAnim(class CAnimDataBuilder *, int); /* linkage=_ZN16CAnimDataBuilder7GetAnimEi */
	/* <d3602c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:107 */
	void AddAnimation(class CAnimDataBuilder *, class CRuntimeAnim *); /* linkage=_ZN16CAnimDataBuilder12AddAnimationEP12CRuntimeAnim */
	void WriteAnimationData(class CAnimDataBuilder *, class CRuntimeAnim *, class CAnimEncodedFrames *, class CModelChannelLists &); /* linkage=_ZN16CAnimDataBuilder18WriteAnimationDataEP12CRuntimeAnimP18CAnimEncodedFramesR18CModelChannelLists */
	void WriteCompressedAnimSection(class CAnimDataBuilder *, class CRuntimeAnim *, class CAnimFrameBlockAnim *, int, class CModelChannelLists &); /* linkage=_ZN16CAnimDataBuilder26WriteCompressedAnimSectionEP12CRuntimeAnimP19CAnimFrameBlockAnimiR18CModelChannelLists */
	void WriteCompressedAnimationData(class CAnimDataBuilder *, class CAnimData *); /* linkage=_ZN16CAnimDataBuilder28WriteCompressedAnimationDataEP9CAnimData */
	void ~CAnimDataBuilder(class CAnimDataBuilder *); /* linkage=_ZN16CAnimDataBuilderD4Ev */
	void CAnimDataBuilder(class CAnimDataBuilder *); /* linkage=_ZN16CAnimDataBuilderC4Ev */
};

// <00C58825> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:122
void CSegmentTmp::CSegmentTmp()
{
} /* size: 0 */

// <00C58809> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:122
inline void CSegmentTmp::CSegmentTmp()
{
} /* size: 0 */

// <00C38B7D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:122
void CSegmentTmp::~CSegmentTmp()
{
} /* size: 0 */

// <00C38B61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.h:122
inline void CSegmentTmp::~CSegmentTmp()
{
} /* size: 0 */


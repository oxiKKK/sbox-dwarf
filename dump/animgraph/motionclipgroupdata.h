
//
// animgraph/motionclipgroupdata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	classes: 4
//	structs: 3
//

// <0196D600> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:15
void ClipSampleInfo::ClipSampleInfo()
{
} /* size: 0 */

// <0196D5E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:15
inline void ClipSampleInfo::ClipSampleInfo()
{
} /* size: 0 */

// <0015E2FF> animgraph/motionclipgroupdata.h:15
// member function: 1
// member variables: 3
// static member variable: 1
// struct size: 12
struct ClipSampleInfo {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* animgraph/motionclipgroupdata.h:17 */
	datamap_t* GetBaseMap(void);
	ClipIndex m_clipIndex; /* 0 4 */
	float m_clipCycle; /* 4 4 */
	uint16 m_clipSampleIndex; /* 8 2 */
};

// <0110C47C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:15
// member functions: 2
// member variables: 3
// static member variable: 1
// struct size: 12
struct ClipSampleInfo {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:17 */
	datamap_t* GetBaseMap(void);
	ClipIndex m_clipIndex; /* 0 4 */
	float m_clipCycle; /* 4 4 */
	uint16 m_clipSampleIndex; /* 8 2 */
	void ClipSampleInfo(ClipSampleInfo* );
};

// <011600BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:31
void ClipInfo::ClipInfo()
{
} /* size: 0 */

// <011600A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:31
inline void ClipInfo::ClipInfo()
{
} /* size: 0 */

// <0015E81F> animgraph/motionclipgroupdata.h:31
// member variables: 6
// struct size: 28
struct ClipInfo {
	CRelativeArray<TagSpan_t> m_tags; /* 0 8 */
	HSequence m_hSequence; /* 8 4 */
	float m_flDuration; /* 12 4 */
	int m_nFirstSampleIndex; /* 16 4 */
	int m_nSampleCount; /* 20 4 */
	bool m_bLoop; /* 24 1 */
};

// <0015F234> animgraph/motionclipgroupdata.h:45
// member functions: 2
// member variables: 4
// class size: 28
class CMotionClipGroupData {
	/* animgraph/motionclipgroupdata.h:48 */
	void CMotionClipGroupData(CMotionClipGroupData* );
	CRelativeArray<ClipInfo> m_clips; /* 0 8 */
	CRelativeArray<ClipSampleInfo> m_samplePoints; /* 8 8 */
	CRelativeArray<float> m_samplePointVectors; /* 16 8 */
	int m_activeTagIndex; /* 24 4 */
	void CMotionClipGroupData(class CMotionClipGroupData *); /* linkage=_ZN20CMotionClipGroupDataC4Ev */
};

// <0110D3F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:45
// member functions: 2
// member variables: 4
// class size: 28
class CMotionClipGroupData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:48 */
	void CMotionClipGroupData(CMotionClipGroupData* );
	CRelativeArray<ClipInfo> m_clips; /* 0 8 */
	CRelativeArray<ClipSampleInfo> m_samplePoints; /* 8 8 */
	CRelativeArray<float> m_samplePointVectors; /* 16 8 */
	int m_activeTagIndex; /* 24 4 */
	void CMotionClipGroupData(class CMotionClipGroupData *); /* linkage=_ZN20CMotionClipGroupDataC4Ev */
};

// <00161759> animgraph/motionclipgroupdata.h:48
void CMotionClipGroupData::CMotionClipGroupData()
{
} /* size: 0 */

// <00161740> animgraph/motionclipgroupdata.h:48
inline void CMotionClipGroupData::CMotionClipGroupData()
{
} /* size: 0 */

// <0015F779> animgraph/motionclipgroupdata.h:60
// member functions: 20
// member variables: 2
// class size: 12
class CMotionDataSet {
	/* animgraph/motionclipgroupdata.h:63 */
	void CMotionDataSet(CMotionDataSet* , CAnimGraphInitContext& , int);
	/* animgraph/motionclipgroupdata.h:65 */
	int GetGroupCount(const CMotionDataSet* );
	/* animgraph/motionclipgroupdata.h:66 */
	int GetClipCount(const CMotionDataSet* , int);
	/* animgraph/motionclipgroupdata.h:67 */
	int GetSampleCount(const CMotionDataSet* , ClipIndex);
	/* animgraph/motionclipgroupdata.h:68 */
	int GetDimensionCount(const CMotionDataSet* );
	/* animgraph/motionclipgroupdata.h:71 */
	const ClipInfo& GetClipInfo(const CMotionDataSet* , ClipIndex);
	/* animgraph/motionclipgroupdata.h:73 */
	const CMotionClipGroupData& GetClipGroup(const CMotionDataSet* , int);
	/* animgraph/motionclipgroupdata.h:76 */
	const float* GetClipSamples(const CMotionDataSet* , ClipIndex);
	/* animgraph/motionclipgroupdata.h:79 */
	const float* GetSample(const CMotionDataSet* , ClipIndex, int);
	/* animgraph/motionclipgroupdata.h:81 */
	float GetSampleCycle(const CMotionDataSet* , ClipIndex, int);
private:
	CRelativeArray<CMotionClipGroupData> m_clipGroups; /* 0 8 */
	int m_nDimensionCount; /* 8 4 */
	void CMotionDataSet(class CMotionDataSet *, class CAnimGraphInitContext &, int); /* linkage=_ZN14CMotionDataSetC4ER21CAnimGraphInitContexti */
	int GetGroupCount(const class CMotionDataSet  *); /* linkage=_ZNK14CMotionDataSet13GetGroupCountEv */
	int GetClipCount(const class CMotionDataSet  *, int); /* linkage=_ZNK14CMotionDataSet12GetClipCountEi */
	int GetSampleCount(const class CMotionDataSet  *, class ClipIndex); /* linkage=_ZNK14CMotionDataSet14GetSampleCountE9ClipIndex */
	int GetDimensionCount(const class CMotionDataSet  *); /* linkage=_ZNK14CMotionDataSet17GetDimensionCountEv */
	const class ClipInfo  & GetClipInfo(const class CMotionDataSet  *, class ClipIndex); /* linkage=_ZNK14CMotionDataSet11GetClipInfoE9ClipIndex */
	const class CMotionClipGroupData  & GetClipGroup(const class CMotionDataSet  *, int); /* linkage=_ZNK14CMotionDataSet12GetClipGroupEi */
	const float  * GetClipSamples(const class CMotionDataSet  *, class ClipIndex); /* linkage=_ZNK14CMotionDataSet14GetClipSamplesE9ClipIndex */
	const float  * GetSample(const class CMotionDataSet  *, class ClipIndex, int); /* linkage=_ZNK14CMotionDataSet9GetSampleE9ClipIndexi */
	float GetSampleCycle(const class CMotionDataSet  *, class ClipIndex, int); /* linkage=_ZNK14CMotionDataSet14GetSampleCycleE9ClipIndexi */
};

// <018D6603> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:60
// member functions: 20
// member variables: 2
// class size: 12
class CMotionDataSet {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:63 */
	void CMotionDataSet(CMotionDataSet* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:65 */
	int GetGroupCount(const CMotionDataSet* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:66 */
	int GetClipCount(const CMotionDataSet* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:67 */
	int GetSampleCount(const CMotionDataSet* , ClipIndex);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:68 */
	int GetDimensionCount(const CMotionDataSet* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:71 */
	const ClipInfo& GetClipInfo(const CMotionDataSet* , ClipIndex);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:73 */
	const CMotionClipGroupData& GetClipGroup(const CMotionDataSet* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:76 */
	const float* GetClipSamples(const CMotionDataSet* , ClipIndex);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:79 */
	const float* GetSample(const CMotionDataSet* , ClipIndex, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:81 */
	float GetSampleCycle(const CMotionDataSet* , ClipIndex, int);
private:
	CRelativeArray<CMotionClipGroupData> m_clipGroups; /* 0 8 */
	int m_nDimensionCount; /* 8 4 */
	void CMotionDataSet(class CMotionDataSet *, class CAnimGraphInitContext &, int); /* linkage=_ZN14CMotionDataSetC4ER21CAnimGraphInitContexti */
	int GetGroupCount(const class CMotionDataSet  *); /* linkage=_ZNK14CMotionDataSet13GetGroupCountEv */
	int GetClipCount(const class CMotionDataSet  *, int); /* linkage=_ZNK14CMotionDataSet12GetClipCountEi */
	int GetSampleCount(const class CMotionDataSet  *, class ClipIndex); /* linkage=_ZNK14CMotionDataSet14GetSampleCountE9ClipIndex */
	int GetDimensionCount(const class CMotionDataSet  *); /* linkage=_ZNK14CMotionDataSet17GetDimensionCountEv */
	const class ClipInfo  & GetClipInfo(const class CMotionDataSet  *, class ClipIndex); /* linkage=_ZNK14CMotionDataSet11GetClipInfoE9ClipIndex */
	const class CMotionClipGroupData  & GetClipGroup(const class CMotionDataSet  *, int); /* linkage=_ZNK14CMotionDataSet12GetClipGroupEi */
	const float  * GetClipSamples(const class CMotionDataSet  *, class ClipIndex); /* linkage=_ZNK14CMotionDataSet14GetClipSamplesE9ClipIndex */
	const float  * GetSample(const class CMotionDataSet  *, class ClipIndex, int); /* linkage=_ZNK14CMotionDataSet9GetSampleE9ClipIndexi */
	float GetSampleCycle(const class CMotionDataSet  *, class ClipIndex, int); /* linkage=_ZNK14CMotionDataSet14GetSampleCycleE9ClipIndexi */
};

// <019148DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroupdata.h:63
void CMotionDataSet::CMotionDataSet(CAnimGraphInitContext& initContext, int nClipGroupCount)
{
} /* size: 0 */


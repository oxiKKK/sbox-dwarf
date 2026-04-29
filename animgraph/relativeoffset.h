
//
// animgraph/relativeoffset.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 554
//	classes: 99
//

// <0015DE03> animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<float> {
	/* animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<float>* );
	/* animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<float>* , const float* );
	/* animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<float>* , const float& );
	/* animgraph/relativeoffset.h:20 */
	CRelativeOffset<float>& operator=(CRelativeOffset<float>* , const float* );
	/* animgraph/relativeoffset.h:21 */
	CRelativeOffset<float>& operator=(CRelativeOffset<float>* , const float& );
	/* animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<float>* , const float* );
	/* animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<float>* , const float* );
	/* animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<float>* );
	/* animgraph/relativeoffset.h:28 */
	float* Get(CRelativeOffset<float>* );
	/* animgraph/relativeoffset.h:33 */
	const float* Get(const CRelativeOffset<float>* );
	/* animgraph/relativeoffset.h:38 */
	float* operator->(CRelativeOffset<float>* );
	/* animgraph/relativeoffset.h:43 */
	const float* operator->(const CRelativeOffset<float>* );
	/* animgraph/relativeoffset.h:48 */
	float& operator*(CRelativeOffset<float>* );
	/* animgraph/relativeoffset.h:53 */
	const float& operator*(const CRelativeOffset<float>* );
private:
	/* animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<float>* , const float* );
	int32 m_offset; /* 0 4 */
};

// <0015E35F> animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<TagSpan_t> {
	/* animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<TagSpan_t>* );
	/* animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<TagSpan_t>* , const TagSpan_t& );
	/* animgraph/relativeoffset.h:20 */
	CRelativeOffset<TagSpan_t>& operator=(CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* animgraph/relativeoffset.h:21 */
	CRelativeOffset<TagSpan_t>& operator=(CRelativeOffset<TagSpan_t>* , const TagSpan_t& );
	/* animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<TagSpan_t>* );
	/* animgraph/relativeoffset.h:28 */
	TagSpan_t* Get(CRelativeOffset<TagSpan_t>* );
	/* animgraph/relativeoffset.h:33 */
	const TagSpan_t* Get(const CRelativeOffset<TagSpan_t>* );
	/* animgraph/relativeoffset.h:38 */
	TagSpan_t* operator->(CRelativeOffset<TagSpan_t>* );
	/* animgraph/relativeoffset.h:43 */
	const TagSpan_t* operator->(const CRelativeOffset<TagSpan_t>* );
	/* animgraph/relativeoffset.h:48 */
	TagSpan_t& operator*(CRelativeOffset<TagSpan_t>* );
	/* animgraph/relativeoffset.h:53 */
	const TagSpan_t& operator*(const CRelativeOffset<TagSpan_t>* );
private:
	/* animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	int32 m_offset; /* 0 4 */
};

// <0015E88C> animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<ClipInfo> {
	/* animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<ClipInfo>* );
	/* animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<ClipInfo>* , const ClipInfo& );
	/* animgraph/relativeoffset.h:20 */
	CRelativeOffset<ClipInfo>& operator=(CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* animgraph/relativeoffset.h:21 */
	CRelativeOffset<ClipInfo>& operator=(CRelativeOffset<ClipInfo>* , const ClipInfo& );
	/* animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<ClipInfo>* );
	/* animgraph/relativeoffset.h:28 */
	ClipInfo* Get(CRelativeOffset<ClipInfo>* );
	/* animgraph/relativeoffset.h:33 */
	const ClipInfo* Get(const CRelativeOffset<ClipInfo>* );
	/* animgraph/relativeoffset.h:38 */
	ClipInfo* operator->(CRelativeOffset<ClipInfo>* );
	/* animgraph/relativeoffset.h:43 */
	const ClipInfo* operator->(const CRelativeOffset<ClipInfo>* );
	/* animgraph/relativeoffset.h:48 */
	ClipInfo& operator*(CRelativeOffset<ClipInfo>* );
	/* animgraph/relativeoffset.h:53 */
	const ClipInfo& operator*(const CRelativeOffset<ClipInfo>* );
private:
	/* animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<ClipInfo>* , const ClipInfo* );
	int32 m_offset; /* 0 4 */
};

// <0015ED60> animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<ClipSampleInfo> {
	/* animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo& );
	/* animgraph/relativeoffset.h:20 */
	CRelativeOffset<ClipSampleInfo>& operator=(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* animgraph/relativeoffset.h:21 */
	CRelativeOffset<ClipSampleInfo>& operator=(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo& );
	/* animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:28 */
	ClipSampleInfo* Get(CRelativeOffset<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:33 */
	const ClipSampleInfo* Get(const CRelativeOffset<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:38 */
	ClipSampleInfo* operator->(CRelativeOffset<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:43 */
	const ClipSampleInfo* operator->(const CRelativeOffset<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:48 */
	ClipSampleInfo& operator*(CRelativeOffset<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:53 */
	const ClipSampleInfo& operator*(const CRelativeOffset<ClipSampleInfo>* );
private:
	/* animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	int32 m_offset; /* 0 4 */
};

// <0015F2AB> animgraph/relativeoffset.h:13
// member functions: 30
// member variable: 1
// class size: 4
class CRelativeOffset<CMotionClipGroupData> {
	/* animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData& );
	/* animgraph/relativeoffset.h:20 */
	CRelativeOffset<CMotionClipGroupData>& operator=(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* animgraph/relativeoffset.h:21 */
	CRelativeOffset<CMotionClipGroupData>& operator=(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData& );
	/* animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:28 */
	CMotionClipGroupData* Get(CRelativeOffset<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:33 */
	const CMotionClipGroupData* Get(const CRelativeOffset<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:38 */
	CMotionClipGroupData* operator->(CRelativeOffset<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:43 */
	const CMotionClipGroupData* operator->(const CRelativeOffset<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:48 */
	CMotionClipGroupData& operator*(CRelativeOffset<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:53 */
	const CMotionClipGroupData& operator*(const CRelativeOffset<CMotionClipGroupData>* );
private:
	/* animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	int32 m_offset; /* 0 4 */
	void CRelativeOffset(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEC4Ev */
	void CRelativeOffset(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEC4EPKS0_ */
	void CRelativeOffset(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  &); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEC4ERKS0_ */
	class CRelativeOffset<CMotionClipGroupData> & operator=(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEaSEPKS0_ */
	class CRelativeOffset<CMotionClipGroupData> & operator=(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  &); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEaSERKS0_ */
	bool operator==(const class CRelativeOffset<CMotionClipGroupData>  *, const class CMotionClipGroupData  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEeqEPKS0_ */
	bool operator!=(const class CRelativeOffset<CMotionClipGroupData>  *, const class CMotionClipGroupData  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEneEPKS0_ */
	bool IsValid(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataE7IsValidEv */
	class CMotionClipGroupData * Get(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataE3GetEv */
	const class CMotionClipGroupData  * Get(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataE3GetEv */
	class CMotionClipGroupData * operator->(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEptEv */
	const class CMotionClipGroupData  * operator->(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEptEv */
	class CMotionClipGroupData & operator*(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEdeEv */
	const class CMotionClipGroupData  & operator*(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEdeEv */
	void SetOffset(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataE9SetOffsetEPKS0_ */
};

// <00DA1459> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<bool> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<bool>* , const bool* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<bool>* , const bool& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<bool>& operator=(CRelativeOffset<bool>* , const bool* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<bool>& operator=(CRelativeOffset<bool>* , const bool& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<bool>* , const bool* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<bool>* , const bool* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	bool* Get(CRelativeOffset<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const bool* Get(const CRelativeOffset<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	bool* operator->(CRelativeOffset<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const bool* operator->(const CRelativeOffset<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	bool& operator*(CRelativeOffset<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const bool& operator*(const CRelativeOffset<bool>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<bool>* , const bool* );
	int32 m_offset; /* 0 4 */
};

// <00DA1901> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CAnimEnum> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CAnimEnum>* , const CAnimEnum* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CAnimEnum>* , const CAnimEnum& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CAnimEnum>& operator=(CRelativeOffset<CAnimEnum>* , const CAnimEnum* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CAnimEnum>& operator=(CRelativeOffset<CAnimEnum>* , const CAnimEnum& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CAnimEnum>* , const CAnimEnum* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CAnimEnum>* , const CAnimEnum* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CAnimEnum* Get(CRelativeOffset<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CAnimEnum* Get(const CRelativeOffset<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CAnimEnum* operator->(CRelativeOffset<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CAnimEnum* operator->(const CRelativeOffset<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CAnimEnum& operator*(CRelativeOffset<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CAnimEnum& operator*(const CRelativeOffset<CAnimEnum>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CAnimEnum>* , const CAnimEnum* );
	int32 m_offset; /* 0 4 */
};

// <00DA1DBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<int> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<int>* , const int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<int>* , const int& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<int>& operator=(CRelativeOffset<int>* , const int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<int>& operator=(CRelativeOffset<int>* , const int& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<int>* , const int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<int>* , const int* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	int* Get(CRelativeOffset<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const int* Get(const CRelativeOffset<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	int* operator->(CRelativeOffset<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const int* operator->(const CRelativeOffset<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	int& operator*(CRelativeOffset<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const int& operator*(const CRelativeOffset<int>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<int>* , const int* );
	int32 m_offset; /* 0 4 */
};

// <00DA2263> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<float> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<float>* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<float>* , const float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<float>& operator=(CRelativeOffset<float>* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<float>& operator=(CRelativeOffset<float>* , const float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<float>* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<float>* , const float* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	float* Get(CRelativeOffset<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const float* Get(const CRelativeOffset<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	float* operator->(CRelativeOffset<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const float* operator->(const CRelativeOffset<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	float& operator*(CRelativeOffset<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const float& operator*(const CRelativeOffset<float>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<float>* , const float* );
	int32 m_offset; /* 0 4 */
};

// <00DA271A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<Vector> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<Vector>* , const Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<Vector>* , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<Vector>& operator=(CRelativeOffset<Vector>* , const Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<Vector>& operator=(CRelativeOffset<Vector>* , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<Vector>* , const Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<Vector>* , const Vector* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	Vector* Get(CRelativeOffset<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const Vector* Get(const CRelativeOffset<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	Vector* operator->(CRelativeOffset<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const Vector* operator->(const CRelativeOffset<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	Vector& operator*(CRelativeOffset<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const Vector& operator*(const CRelativeOffset<Vector>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<Vector>* , const Vector* );
	int32 m_offset; /* 0 4 */
};

// <00DA2BC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<Quaternion> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<Quaternion>* , const Quaternion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<Quaternion>* , const Quaternion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<Quaternion>& operator=(CRelativeOffset<Quaternion>* , const Quaternion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<Quaternion>& operator=(CRelativeOffset<Quaternion>* , const Quaternion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<Quaternion>* , const Quaternion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<Quaternion>* , const Quaternion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	Quaternion* Get(CRelativeOffset<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const Quaternion* Get(const CRelativeOffset<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	Quaternion* operator->(CRelativeOffset<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const Quaternion* operator->(const CRelativeOffset<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	Quaternion& operator*(CRelativeOffset<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const Quaternion& operator*(const CRelativeOffset<Quaternion>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<Quaternion>* , const Quaternion* );
	int32 m_offset; /* 0 4 */
};

// <00DA3571> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CTraceRequest> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CTraceRequest>* , const CTraceRequest* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CTraceRequest>* , const CTraceRequest& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CTraceRequest>& operator=(CRelativeOffset<CTraceRequest>* , const CTraceRequest* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CTraceRequest>& operator=(CRelativeOffset<CTraceRequest>* , const CTraceRequest& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CTraceRequest>* , const CTraceRequest* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CTraceRequest>* , const CTraceRequest* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CTraceRequest* Get(CRelativeOffset<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CTraceRequest* Get(const CRelativeOffset<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CTraceRequest* operator->(CRelativeOffset<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CTraceRequest* operator->(const CRelativeOffset<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CTraceRequest& operator*(CRelativeOffset<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CTraceRequest& operator*(const CRelativeOffset<CTraceRequest>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CTraceRequest>* , const CTraceRequest* );
	int32 m_offset; /* 0 4 */
};

// <00DAB9A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<TagStatus> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<TagStatus>* , const TagStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<TagStatus>* , const TagStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<TagStatus>& operator=(CRelativeOffset<TagStatus>* , const TagStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<TagStatus>& operator=(CRelativeOffset<TagStatus>* , const TagStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<TagStatus>* , const TagStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<TagStatus>* , const TagStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	TagStatus* Get(CRelativeOffset<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const TagStatus* Get(const CRelativeOffset<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	TagStatus* operator->(CRelativeOffset<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const TagStatus* operator->(const CRelativeOffset<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	TagStatus& operator*(CRelativeOffset<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const TagStatus& operator*(const CRelativeOffset<TagStatus>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<TagStatus>* , const TagStatus* );
	int32 m_offset; /* 0 4 */
};

// <00DE7585> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >& operator=(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >& operator=(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CRelativeOffset<const CAnimMotorUpdaterBase>* Get(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CRelativeOffset<const CAnimMotorUpdaterBase>* Get(const CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CRelativeOffset<const CAnimMotorUpdaterBase>* operator->(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CRelativeOffset<const CAnimMotorUpdaterBase>* operator->(const CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CRelativeOffset<const CAnimMotorUpdaterBase>& operator*(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CRelativeOffset<const CAnimMotorUpdaterBase>& operator*(const CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	int32 m_offset; /* 0 4 */
};

// <00DE86C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CRelativeOffset<IConditionUpdater> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CRelativeOffset<IConditionUpdater> >& operator=(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CRelativeOffset<IConditionUpdater> >& operator=(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CRelativeOffset<IConditionUpdater>* Get(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CRelativeOffset<IConditionUpdater>* Get(const CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CRelativeOffset<IConditionUpdater>* operator->(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CRelativeOffset<IConditionUpdater>* operator->(const CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CRelativeOffset<IConditionUpdater>& operator*(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CRelativeOffset<IConditionUpdater>& operator*(const CRelativeOffset<CRelativeOffset<IConditionUpdater> >* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>* );
	int32 m_offset; /* 0 4 */
};

// <00DE8D39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<const CAnimUpdateNodeBase> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<const CAnimUpdateNodeBase>* , const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<const CAnimUpdateNodeBase>* , const CAnimUpdateNodeBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<const CAnimUpdateNodeBase>& operator=(CRelativeOffset<const CAnimUpdateNodeBase>* , const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<const CAnimUpdateNodeBase>& operator=(CRelativeOffset<const CAnimUpdateNodeBase>* , const CAnimUpdateNodeBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<const CAnimUpdateNodeBase>* , const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<const CAnimUpdateNodeBase>* , const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	const CAnimUpdateNodeBase* Get(CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CAnimUpdateNodeBase* Get(const CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	const CAnimUpdateNodeBase* operator->(CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CAnimUpdateNodeBase* operator->(const CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	const CAnimUpdateNodeBase& operator*(CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CAnimUpdateNodeBase& operator*(const CRelativeOffset<const CAnimUpdateNodeBase>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<const CAnimUpdateNodeBase>* , const CAnimUpdateNodeBase* );
	int32 m_offset; /* 0 4 */
};

// <00DE8F83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CStateTag> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CStateTag>* , const CStateTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CStateTag>* , const CStateTag& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CStateTag>& operator=(CRelativeOffset<CStateTag>* , const CStateTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CStateTag>& operator=(CRelativeOffset<CStateTag>* , const CStateTag& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CStateTag>* , const CStateTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CStateTag>* , const CStateTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CStateTag* Get(CRelativeOffset<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CStateTag* Get(const CRelativeOffset<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CStateTag* operator->(CRelativeOffset<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CStateTag* operator->(const CRelativeOffset<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CStateTag& operator*(CRelativeOffset<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CStateTag& operator*(const CRelativeOffset<CStateTag>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CStateTag>* , const CStateTag* );
	int32 m_offset; /* 0 4 */
};

// <00DE9603> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CStateUpdateData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CStateUpdateData>* , const CStateUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CStateUpdateData>* , const CStateUpdateData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CStateUpdateData>& operator=(CRelativeOffset<CStateUpdateData>* , const CStateUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CStateUpdateData>& operator=(CRelativeOffset<CStateUpdateData>* , const CStateUpdateData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CStateUpdateData>* , const CStateUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CStateUpdateData>* , const CStateUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CStateUpdateData* Get(CRelativeOffset<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CStateUpdateData* Get(const CRelativeOffset<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CStateUpdateData* operator->(CRelativeOffset<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CStateUpdateData* operator->(const CRelativeOffset<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CStateUpdateData& operator*(CRelativeOffset<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CStateUpdateData& operator*(const CRelativeOffset<CStateUpdateData>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CStateUpdateData>* , const CStateUpdateData* );
	int32 m_offset; /* 0 4 */
};

// <0100B3DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<TagSpan_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<TagSpan_t>* , const TagSpan_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<TagSpan_t>& operator=(CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<TagSpan_t>& operator=(CRelativeOffset<TagSpan_t>* , const TagSpan_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	TagSpan_t* Get(CRelativeOffset<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const TagSpan_t* Get(const CRelativeOffset<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	TagSpan_t* operator->(CRelativeOffset<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const TagSpan_t* operator->(const CRelativeOffset<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	TagSpan_t& operator*(CRelativeOffset<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const TagSpan_t& operator*(const CRelativeOffset<TagSpan_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<TagSpan_t>* , const TagSpan_t* );
	int32 m_offset; /* 0 4 */
};

// <0100C421> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >& operator=(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >& operator=(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CRelativeOffset<const CAnimUpdateNodeBase>* Get(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CRelativeOffset<const CAnimUpdateNodeBase>* Get(const CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CRelativeOffset<const CAnimUpdateNodeBase>* operator->(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CRelativeOffset<const CAnimUpdateNodeBase>* operator->(const CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CRelativeOffset<const CAnimUpdateNodeBase>& operator*(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CRelativeOffset<const CAnimUpdateNodeBase>& operator*(const CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>* );
	int32 m_offset; /* 0 4 */
};

// <0101655D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FootOpFixedInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FootOpFixedInfo>* , const FootOpFixedInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FootOpFixedInfo>* , const FootOpFixedInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FootOpFixedInfo>& operator=(CRelativeOffset<FootOpFixedInfo>* , const FootOpFixedInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FootOpFixedInfo>& operator=(CRelativeOffset<FootOpFixedInfo>* , const FootOpFixedInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FootOpFixedInfo>* , const FootOpFixedInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FootOpFixedInfo>* , const FootOpFixedInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FootOpFixedInfo* Get(CRelativeOffset<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FootOpFixedInfo* Get(const CRelativeOffset<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FootOpFixedInfo* operator->(CRelativeOffset<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FootOpFixedInfo* operator->(const CRelativeOffset<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FootOpFixedInfo& operator*(CRelativeOffset<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FootOpFixedInfo& operator*(const CRelativeOffset<FootOpFixedInfo>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FootOpFixedInfo>* , const FootOpFixedInfo* );
	int32 m_offset; /* 0 4 */
};

// <010176CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FootInstanceSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FootInstanceSettings>* , const FootInstanceSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FootInstanceSettings>* , const FootInstanceSettings& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FootInstanceSettings>& operator=(CRelativeOffset<FootInstanceSettings>* , const FootInstanceSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FootInstanceSettings>& operator=(CRelativeOffset<FootInstanceSettings>* , const FootInstanceSettings& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FootInstanceSettings>* , const FootInstanceSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FootInstanceSettings>* , const FootInstanceSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FootInstanceSettings* Get(CRelativeOffset<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FootInstanceSettings* Get(const CRelativeOffset<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FootInstanceSettings* operator->(CRelativeOffset<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FootInstanceSettings* operator->(const CRelativeOffset<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FootInstanceSettings& operator*(CRelativeOffset<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FootInstanceSettings& operator*(const CRelativeOffset<FootInstanceSettings>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FootInstanceSettings>* , const FootInstanceSettings* );
	int32 m_offset; /* 0 4 */
};

// <01017D35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FootFixedSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FootFixedSettings>* , const FootFixedSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FootFixedSettings>* , const FootFixedSettings& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FootFixedSettings>& operator=(CRelativeOffset<FootFixedSettings>* , const FootFixedSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FootFixedSettings>& operator=(CRelativeOffset<FootFixedSettings>* , const FootFixedSettings& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FootFixedSettings>* , const FootFixedSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FootFixedSettings>* , const FootFixedSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FootFixedSettings* Get(CRelativeOffset<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FootFixedSettings* Get(const CRelativeOffset<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FootFixedSettings* operator->(CRelativeOffset<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FootFixedSettings* operator->(const CRelativeOffset<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FootFixedSettings& operator*(CRelativeOffset<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FootFixedSettings& operator*(const CRelativeOffset<FootFixedSettings>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FootFixedSettings>* , const FootFixedSettings* );
	int32 m_offset; /* 0 4 */
};

// <010EC6C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FootStepTrigger> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FootStepTrigger>* , const FootStepTrigger* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FootStepTrigger>* , const FootStepTrigger& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FootStepTrigger>& operator=(CRelativeOffset<FootStepTrigger>* , const FootStepTrigger* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FootStepTrigger>& operator=(CRelativeOffset<FootStepTrigger>* , const FootStepTrigger& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FootStepTrigger>* , const FootStepTrigger* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FootStepTrigger>* , const FootStepTrigger* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FootStepTrigger* Get(CRelativeOffset<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FootStepTrigger* Get(const CRelativeOffset<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FootStepTrigger* operator->(CRelativeOffset<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FootStepTrigger* operator->(const CRelativeOffset<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FootStepTrigger& operator*(CRelativeOffset<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FootStepTrigger& operator*(const CRelativeOffset<FootStepTrigger>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FootStepTrigger>* , const FootStepTrigger* );
	int32 m_offset; /* 0 4 */
};

// <010F9B99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<JiggleBoneSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<JiggleBoneSettings_t>* , const JiggleBoneSettings_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<JiggleBoneSettings_t>* , const JiggleBoneSettings_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<JiggleBoneSettings_t>& operator=(CRelativeOffset<JiggleBoneSettings_t>* , const JiggleBoneSettings_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<JiggleBoneSettings_t>& operator=(CRelativeOffset<JiggleBoneSettings_t>* , const JiggleBoneSettings_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<JiggleBoneSettings_t>* , const JiggleBoneSettings_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<JiggleBoneSettings_t>* , const JiggleBoneSettings_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	JiggleBoneSettings_t* Get(CRelativeOffset<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const JiggleBoneSettings_t* Get(const CRelativeOffset<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	JiggleBoneSettings_t* operator->(CRelativeOffset<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const JiggleBoneSettings_t* operator->(const CRelativeOffset<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	JiggleBoneSettings_t& operator*(CRelativeOffset<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const JiggleBoneSettings_t& operator*(const CRelativeOffset<JiggleBoneSettings_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<JiggleBoneSettings_t>* , const JiggleBoneSettings_t* );
	int32 m_offset; /* 0 4 */
};

// <011010BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<LookAtBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<LookAtBone_t>* , const LookAtBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<LookAtBone_t>* , const LookAtBone_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<LookAtBone_t>& operator=(CRelativeOffset<LookAtBone_t>* , const LookAtBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<LookAtBone_t>& operator=(CRelativeOffset<LookAtBone_t>* , const LookAtBone_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<LookAtBone_t>* , const LookAtBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<LookAtBone_t>* , const LookAtBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	LookAtBone_t* Get(CRelativeOffset<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const LookAtBone_t* Get(const CRelativeOffset<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	LookAtBone_t* operator->(CRelativeOffset<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const LookAtBone_t* operator->(const CRelativeOffset<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	LookAtBone_t& operator*(CRelativeOffset<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const LookAtBone_t& operator*(const CRelativeOffset<LookAtBone_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<LookAtBone_t>* , const LookAtBone_t* );
	int32 m_offset; /* 0 4 */
};

// <0110CA4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<ClipInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<ClipInfo>* , const ClipInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<ClipInfo>& operator=(CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<ClipInfo>& operator=(CRelativeOffset<ClipInfo>* , const ClipInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<ClipInfo>* , const ClipInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	ClipInfo* Get(CRelativeOffset<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const ClipInfo* Get(const CRelativeOffset<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	ClipInfo* operator->(CRelativeOffset<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const ClipInfo* operator->(const CRelativeOffset<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	ClipInfo& operator*(CRelativeOffset<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const ClipInfo& operator*(const CRelativeOffset<ClipInfo>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<ClipInfo>* , const ClipInfo* );
	int32 m_offset; /* 0 4 */
};

// <0110CF21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<ClipSampleInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<ClipSampleInfo>& operator=(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<ClipSampleInfo>& operator=(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	ClipSampleInfo* Get(CRelativeOffset<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const ClipSampleInfo* Get(const CRelativeOffset<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	ClipSampleInfo* operator->(CRelativeOffset<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const ClipSampleInfo* operator->(const CRelativeOffset<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	ClipSampleInfo& operator*(CRelativeOffset<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const ClipSampleInfo& operator*(const CRelativeOffset<ClipSampleInfo>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<ClipSampleInfo>* , const ClipSampleInfo* );
	int32 m_offset; /* 0 4 */
};

// <0110D467> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 30
// member variable: 1
// class size: 4
class CRelativeOffset<CMotionClipGroupData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CMotionClipGroupData>& operator=(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CMotionClipGroupData>& operator=(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CMotionClipGroupData* Get(CRelativeOffset<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CMotionClipGroupData* Get(const CRelativeOffset<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CMotionClipGroupData* operator->(CRelativeOffset<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CMotionClipGroupData* operator->(const CRelativeOffset<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CMotionClipGroupData& operator*(CRelativeOffset<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CMotionClipGroupData& operator*(const CRelativeOffset<CMotionClipGroupData>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CMotionClipGroupData>* , const CMotionClipGroupData* );
	int32 m_offset; /* 0 4 */
	void CRelativeOffset(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEC4Ev */
	void CRelativeOffset(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEC4EPKS0_ */
	void CRelativeOffset(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  &); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEC4ERKS0_ */
	class CRelativeOffset<CMotionClipGroupData> & operator=(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEaSEPKS0_ */
	class CRelativeOffset<CMotionClipGroupData> & operator=(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  &); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEaSERKS0_ */
	bool operator==(const class CRelativeOffset<CMotionClipGroupData>  *, const class CMotionClipGroupData  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEeqEPKS0_ */
	bool operator!=(const class CRelativeOffset<CMotionClipGroupData>  *, const class CMotionClipGroupData  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEneEPKS0_ */
	bool IsValid(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataE7IsValidEv */
	class CMotionClipGroupData * Get(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataE3GetEv */
	const class CMotionClipGroupData  * Get(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataE3GetEv */
	class CMotionClipGroupData * operator->(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEptEv */
	const class CMotionClipGroupData  * operator->(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEptEv */
	class CMotionClipGroupData & operator*(class CRelativeOffset<CMotionClipGroupData> *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataEdeEv */
	const class CMotionClipGroupData  & operator*(const class CRelativeOffset<CMotionClipGroupData>  *); /* linkage=_ZNK15CRelativeOffsetI20CMotionClipGroupDataEdeEv */
	void SetOffset(class CRelativeOffset<CMotionClipGroupData> *, const class CMotionClipGroupData  *); /* linkage=_ZN15CRelativeOffsetI20CMotionClipGroupDataE9SetOffsetEPKS0_ */
};

// <011113A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >& operator=(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >& operator=(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CRelativeOffset<const CMotionMetricEvaluator>* Get(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CRelativeOffset<const CMotionMetricEvaluator>* Get(const CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CRelativeOffset<const CMotionMetricEvaluator>* operator->(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CRelativeOffset<const CMotionMetricEvaluator>* operator->(const CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CRelativeOffset<const CMotionMetricEvaluator>& operator*(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CRelativeOffset<const CMotionMetricEvaluator>& operator*(const CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>* );
	int32 m_offset; /* 0 4 */
};

// <011115E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<const CMotionMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<const CMotionMetricEvaluator>* , const CMotionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<const CMotionMetricEvaluator>* , const CMotionMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<const CMotionMetricEvaluator>& operator=(CRelativeOffset<const CMotionMetricEvaluator>* , const CMotionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<const CMotionMetricEvaluator>& operator=(CRelativeOffset<const CMotionMetricEvaluator>* , const CMotionMetricEvaluator& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<const CMotionMetricEvaluator>* , const CMotionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<const CMotionMetricEvaluator>* , const CMotionMetricEvaluator* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	const CMotionMetricEvaluator* Get(CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CMotionMetricEvaluator* Get(const CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	const CMotionMetricEvaluator* operator->(CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CMotionMetricEvaluator* operator->(const CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	const CMotionMetricEvaluator& operator*(CRelativeOffset<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CMotionMetricEvaluator& operator*(const CRelativeOffset<const CMotionMetricEvaluator>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<const CMotionMetricEvaluator>* , const CMotionMetricEvaluator* );
	int32 m_offset; /* 0 4 */
};

// <0121F386> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FingerSource_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FingerSource_t>* , const FingerSource_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FingerSource_t>* , const FingerSource_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FingerSource_t>& operator=(CRelativeOffset<FingerSource_t>* , const FingerSource_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FingerSource_t>& operator=(CRelativeOffset<FingerSource_t>* , const FingerSource_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FingerSource_t>* , const FingerSource_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FingerSource_t>* , const FingerSource_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FingerSource_t* Get(CRelativeOffset<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FingerSource_t* Get(const CRelativeOffset<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FingerSource_t* operator->(CRelativeOffset<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FingerSource_t* operator->(const CRelativeOffset<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FingerSource_t& operator*(CRelativeOffset<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FingerSource_t& operator*(const CRelativeOffset<FingerSource_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FingerSource_t>* , const FingerSource_t* );
	int32 m_offset; /* 0 4 */
};

// <0121F840> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FingerBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FingerBone_t>* , const FingerBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FingerBone_t>* , const FingerBone_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FingerBone_t>& operator=(CRelativeOffset<FingerBone_t>* , const FingerBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FingerBone_t>& operator=(CRelativeOffset<FingerBone_t>* , const FingerBone_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FingerBone_t>* , const FingerBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FingerBone_t>* , const FingerBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FingerBone_t* Get(CRelativeOffset<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FingerBone_t* Get(const CRelativeOffset<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FingerBone_t* operator->(CRelativeOffset<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FingerBone_t* operator->(const CRelativeOffset<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FingerBone_t& operator*(CRelativeOffset<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FingerBone_t& operator*(const CRelativeOffset<FingerBone_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FingerBone_t>* , const FingerBone_t* );
	int32 m_offset; /* 0 4 */
};

// <0121FE82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<WristBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<WristBone_t>* , const WristBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<WristBone_t>* , const WristBone_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<WristBone_t>& operator=(CRelativeOffset<WristBone_t>* , const WristBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<WristBone_t>& operator=(CRelativeOffset<WristBone_t>* , const WristBone_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<WristBone_t>* , const WristBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<WristBone_t>* , const WristBone_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	WristBone_t* Get(CRelativeOffset<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const WristBone_t* Get(const CRelativeOffset<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	WristBone_t* operator->(CRelativeOffset<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const WristBone_t* operator->(const CRelativeOffset<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	WristBone_t& operator*(CRelativeOffset<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const WristBone_t& operator*(const CRelativeOffset<WristBone_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<WristBone_t>* , const WristBone_t* );
	int32 m_offset; /* 0 4 */
};

// <0122033C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FingerChain_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FingerChain_t>* , const FingerChain_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FingerChain_t>* , const FingerChain_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FingerChain_t>& operator=(CRelativeOffset<FingerChain_t>* , const FingerChain_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FingerChain_t>& operator=(CRelativeOffset<FingerChain_t>* , const FingerChain_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FingerChain_t>* , const FingerChain_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FingerChain_t>* , const FingerChain_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FingerChain_t* Get(CRelativeOffset<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FingerChain_t* Get(const CRelativeOffset<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FingerChain_t* operator->(CRelativeOffset<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FingerChain_t* operator->(const CRelativeOffset<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FingerChain_t& operator*(CRelativeOffset<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FingerChain_t& operator*(const CRelativeOffset<FingerChain_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FingerChain_t>* , const FingerChain_t* );
	int32 m_offset; /* 0 4 */
};

// <01228052> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>& operator=(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>& operator=(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	ChainToSolveData_t* Get(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const ChainToSolveData_t* Get(const CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	ChainToSolveData_t* operator->(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const ChainToSolveData_t* operator->(const CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	ChainToSolveData_t& operator*(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const ChainToSolveData_t& operator*(const CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	int32 m_offset; /* 0 4 */
};

// <0122863A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>& operator=(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>& operator=(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	ChainToSolveData_t* Get(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const ChainToSolveData_t* Get(const CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	ChainToSolveData_t* operator->(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const ChainToSolveData_t* operator->(const CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	ChainToSolveData_t& operator*(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const ChainToSolveData_t& operator*(const CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	int32 m_offset; /* 0 4 */
};

// <0122EE41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CTransitionUpdateData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CTransitionUpdateData>* , const CTransitionUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CTransitionUpdateData>* , const CTransitionUpdateData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CTransitionUpdateData>& operator=(CRelativeOffset<CTransitionUpdateData>* , const CTransitionUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CTransitionUpdateData>& operator=(CRelativeOffset<CTransitionUpdateData>* , const CTransitionUpdateData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CTransitionUpdateData>* , const CTransitionUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CTransitionUpdateData>* , const CTransitionUpdateData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CTransitionUpdateData* Get(CRelativeOffset<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CTransitionUpdateData* Get(const CRelativeOffset<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CTransitionUpdateData* operator->(CRelativeOffset<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CTransitionUpdateData* operator->(const CRelativeOffset<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CTransitionUpdateData& operator*(CRelativeOffset<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CTransitionUpdateData& operator*(const CRelativeOffset<CTransitionUpdateData>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CTransitionUpdateData>* , const CTransitionUpdateData* );
	int32 m_offset; /* 0 4 */
};

// <012E627E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<const CAnimMotorUpdaterBase> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<const CAnimMotorUpdaterBase>* , const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<const CAnimMotorUpdaterBase>* , const CAnimMotorUpdaterBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<const CAnimMotorUpdaterBase>& operator=(CRelativeOffset<const CAnimMotorUpdaterBase>* , const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<const CAnimMotorUpdaterBase>& operator=(CRelativeOffset<const CAnimMotorUpdaterBase>* , const CAnimMotorUpdaterBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<const CAnimMotorUpdaterBase>* , const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<const CAnimMotorUpdaterBase>* , const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	const CAnimMotorUpdaterBase* Get(CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CAnimMotorUpdaterBase* Get(const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	const CAnimMotorUpdaterBase* operator->(CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CAnimMotorUpdaterBase* operator->(const CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	const CAnimMotorUpdaterBase& operator*(CRelativeOffset<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CAnimMotorUpdaterBase& operator*(const CRelativeOffset<const CAnimMotorUpdaterBase>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<const CAnimMotorUpdaterBase>* , const CAnimMotorUpdaterBase* );
	int32 m_offset; /* 0 4 */
};

// <01705FF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<const CChoreoInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<const CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<const CChoreoInstanceData>* , const CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<const CChoreoInstanceData>* , const CChoreoInstanceData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<const CChoreoInstanceData>& operator=(CRelativeOffset<const CChoreoInstanceData>* , const CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<const CChoreoInstanceData>& operator=(CRelativeOffset<const CChoreoInstanceData>* , const CChoreoInstanceData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<const CChoreoInstanceData>* , const CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<const CChoreoInstanceData>* , const CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<const CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	const CChoreoInstanceData* Get(CRelativeOffset<const CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CChoreoInstanceData* Get(const CRelativeOffset<const CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	const CChoreoInstanceData* operator->(CRelativeOffset<const CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CChoreoInstanceData* operator->(const CRelativeOffset<const CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	const CChoreoInstanceData& operator*(CRelativeOffset<const CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CChoreoInstanceData& operator*(const CRelativeOffset<const CChoreoInstanceData>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<const CChoreoInstanceData>* , const CChoreoInstanceData* );
	int32 m_offset; /* 0 4 */
};

// <017071CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CTransform> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CTransform>* , const CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CTransform>* , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CTransform>& operator=(CRelativeOffset<CTransform>* , const CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CTransform>& operator=(CRelativeOffset<CTransform>* , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CTransform>* , const CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CTransform>* , const CTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CTransform* Get(CRelativeOffset<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CTransform* Get(const CRelativeOffset<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CTransform* operator->(CRelativeOffset<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CTransform* operator->(const CRelativeOffset<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CTransform& operator*(CRelativeOffset<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CTransform& operator*(const CRelativeOffset<CTransform>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CTransform>* , const CTransform* );
	int32 m_offset; /* 0 4 */
};

// <0170922F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<FootOpTarget> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<FootOpTarget>* , const FootOpTarget* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<FootOpTarget>* , const FootOpTarget& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<FootOpTarget>& operator=(CRelativeOffset<FootOpTarget>* , const FootOpTarget* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<FootOpTarget>& operator=(CRelativeOffset<FootOpTarget>* , const FootOpTarget& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<FootOpTarget>* , const FootOpTarget* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<FootOpTarget>* , const FootOpTarget* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	FootOpTarget* Get(CRelativeOffset<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const FootOpTarget* Get(const CRelativeOffset<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	FootOpTarget* operator->(CRelativeOffset<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const FootOpTarget* operator->(const CRelativeOffset<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	FootOpTarget& operator*(CRelativeOffset<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const FootOpTarget& operator*(const CRelativeOffset<FootOpTarget>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<FootOpTarget>* , const FootOpTarget* );
	int32 m_offset; /* 0 4 */
};

// <0170F211> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<JiggleBoneStatus_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<JiggleBoneStatus_t>* , const JiggleBoneStatus_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<JiggleBoneStatus_t>* , const JiggleBoneStatus_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<JiggleBoneStatus_t>& operator=(CRelativeOffset<JiggleBoneStatus_t>* , const JiggleBoneStatus_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<JiggleBoneStatus_t>& operator=(CRelativeOffset<JiggleBoneStatus_t>* , const JiggleBoneStatus_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<JiggleBoneStatus_t>* , const JiggleBoneStatus_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<JiggleBoneStatus_t>* , const JiggleBoneStatus_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	JiggleBoneStatus_t* Get(CRelativeOffset<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const JiggleBoneStatus_t* Get(const CRelativeOffset<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	JiggleBoneStatus_t* operator->(CRelativeOffset<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const JiggleBoneStatus_t* operator->(const CRelativeOffset<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	JiggleBoneStatus_t& operator*(CRelativeOffset<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const JiggleBoneStatus_t& operator*(const CRelativeOffset<JiggleBoneStatus_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<JiggleBoneStatus_t>* , const JiggleBoneStatus_t* );
	int32 m_offset; /* 0 4 */
};

// <01713055> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>& operator=(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>& operator=(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	ChainToSolveData_t* Get(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const ChainToSolveData_t* Get(const CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	ChainToSolveData_t* operator->(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const ChainToSolveData_t* operator->(const CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	ChainToSolveData_t& operator*(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const ChainToSolveData_t& operator*(const CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* );
	int32 m_offset; /* 0 4 */
};

// <017D5558> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<BlendItem_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<BlendItem_t>* , const BlendItem_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<BlendItem_t>* , const BlendItem_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<BlendItem_t>& operator=(CRelativeOffset<BlendItem_t>* , const BlendItem_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<BlendItem_t>& operator=(CRelativeOffset<BlendItem_t>* , const BlendItem_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<BlendItem_t>* , const BlendItem_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<BlendItem_t>* , const BlendItem_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	BlendItem_t* Get(CRelativeOffset<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const BlendItem_t* Get(const CRelativeOffset<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	BlendItem_t* operator->(CRelativeOffset<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const BlendItem_t* operator->(const CRelativeOffset<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	BlendItem_t& operator*(CRelativeOffset<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const BlendItem_t& operator*(const CRelativeOffset<BlendItem_t>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<BlendItem_t>* , const BlendItem_t* );
	int32 m_offset; /* 0 4 */
};

// <017D7DBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<CMotionTransform> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<CMotionTransform>* , const CMotionTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<CMotionTransform>* , const CMotionTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<CMotionTransform>& operator=(CRelativeOffset<CMotionTransform>* , const CMotionTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<CMotionTransform>& operator=(CRelativeOffset<CMotionTransform>* , const CMotionTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<CMotionTransform>* , const CMotionTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<CMotionTransform>* , const CMotionTransform* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	CMotionTransform* Get(CRelativeOffset<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CMotionTransform* Get(const CRelativeOffset<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	CMotionTransform* operator->(CRelativeOffset<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CMotionTransform* operator->(const CRelativeOffset<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	CMotionTransform& operator*(CRelativeOffset<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CMotionTransform& operator*(const CRelativeOffset<CMotionTransform>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<CMotionTransform>* , const CMotionTransform* );
	int32 m_offset; /* 0 4 */
};

// <017DF9FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<LastFootMotionStatus> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<LastFootMotionStatus>* , const LastFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<LastFootMotionStatus>* , const LastFootMotionStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<LastFootMotionStatus>& operator=(CRelativeOffset<LastFootMotionStatus>* , const LastFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<LastFootMotionStatus>& operator=(CRelativeOffset<LastFootMotionStatus>* , const LastFootMotionStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<LastFootMotionStatus>* , const LastFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<LastFootMotionStatus>* , const LastFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	LastFootMotionStatus* Get(CRelativeOffset<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const LastFootMotionStatus* Get(const CRelativeOffset<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	LastFootMotionStatus* operator->(CRelativeOffset<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const LastFootMotionStatus* operator->(const CRelativeOffset<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	LastFootMotionStatus& operator*(CRelativeOffset<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const LastFootMotionStatus& operator*(const CRelativeOffset<LastFootMotionStatus>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<LastFootMotionStatus>* , const LastFootMotionStatus* );
	int32 m_offset; /* 0 4 */
};

// <018D83D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<const CAnimUpdateNodeBase*> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<const CAnimUpdateNodeBase*>& operator=(CRelativeOffset<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<const CAnimUpdateNodeBase*>& operator=(CRelativeOffset<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	const CAnimUpdateNodeBase* * Get(CRelativeOffset<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const CAnimUpdateNodeBase* const* Get(const CRelativeOffset<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	const CAnimUpdateNodeBase* * operator->(CRelativeOffset<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const CAnimUpdateNodeBase* const* operator->(const CRelativeOffset<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	const CAnimUpdateNodeBase* & operator*(CRelativeOffset<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const CAnimUpdateNodeBase* const& operator*(const CRelativeOffset<const CAnimUpdateNodeBase*>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const* );
	int32 m_offset; /* 0 4 */
};

// <018D889F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<signed char> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<signed char>* , const signed char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<signed char>* , const signed char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<signed char>& operator=(CRelativeOffset<signed char>* , const signed char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<signed char>& operator=(CRelativeOffset<signed char>* , const signed char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<signed char>* , const signed char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<signed char>* , const signed char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	signed char* Get(CRelativeOffset<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const signed char* Get(const CRelativeOffset<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	signed char* operator->(CRelativeOffset<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const signed char* operator->(const CRelativeOffset<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	signed char& operator*(CRelativeOffset<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const signed char& operator*(const CRelativeOffset<signed char>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<signed char>* , const signed char* );
	int32 m_offset; /* 0 4 */
};

// <0190C2F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:13
// member functions: 15
// member variable: 1
// class size: 4
class CRelativeOffset<IConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16 */
	void CRelativeOffset(CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17 */
	void CRelativeOffset(CRelativeOffset<IConditionUpdater>* , const IConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:18 */
	void CRelativeOffset(CRelativeOffset<IConditionUpdater>* , const IConditionUpdater& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20 */
	CRelativeOffset<IConditionUpdater>& operator=(CRelativeOffset<IConditionUpdater>* , const IConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:21 */
	CRelativeOffset<IConditionUpdater>& operator=(CRelativeOffset<IConditionUpdater>* , const IConditionUpdater& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:23 */
	bool operator==(const CRelativeOffset<IConditionUpdater>* , const IConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:24 */
	bool operator!=(const CRelativeOffset<IConditionUpdater>* , const IConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26 */
	bool IsValid(const CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28 */
	IConditionUpdater* Get(CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33 */
	const IConditionUpdater* Get(const CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:38 */
	IConditionUpdater* operator->(CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43 */
	const IConditionUpdater* operator->(const CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:48 */
	IConditionUpdater& operator*(CRelativeOffset<IConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:53 */
	const IConditionUpdater& operator*(const CRelativeOffset<IConditionUpdater>* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59 */
	void SetOffset(CRelativeOffset<IConditionUpdater>* , const IConditionUpdater* );
	int32 m_offset; /* 0 4 */
};

// <019EF31C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<IConditionUpdater>::CRelativeOffset()
{
} /* size: 0 */

// <019EF303> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<IConditionUpdater>::CRelativeOffset()
{
} /* size: 0 */

// <0191C175> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset()
{
} /* size: 0 */

// <0191C15C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset()
{
} /* size: 0 */

// <0191BBE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<float>::CRelativeOffset()
{
} /* size: 0 */

// <0191BBC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<float>::CRelativeOffset()
{
} /* size: 0 */

// <0191BB82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<const CMotionMetricEvaluator>::CRelativeOffset()
{
} /* size: 0 */

// <0191BB69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<const CMotionMetricEvaluator>::CRelativeOffset()
{
} /* size: 0 */

// <0191B8F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<const CAnimUpdateNodeBase::CRelativeOffset()
{
} /* size: 0 */

// <0191B8DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<const CAnimUpdateNodeBase::CRelativeOffset()
{
} /* size: 0 */

// <0191B8C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<signed char>::CRelativeOffset()
{
} /* size: 0 */

// <0191B8AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<signed char>::CRelativeOffset()
{
} /* size: 0 */

// <0191B798> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<TagSpan_t>::CRelativeOffset()
{
} /* size: 0 */

// <0191B77F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<TagSpan_t>::CRelativeOffset()
{
} /* size: 0 */

// <0191A936> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CStateUpdateData>::CRelativeOffset()
{
} /* size: 0 */

// <0191A91D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CStateUpdateData>::CRelativeOffset()
{
} /* size: 0 */

// <0191A906> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CTransitionUpdateData>::CRelativeOffset()
{
} /* size: 0 */

// <0191A8ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CTransitionUpdateData>::CRelativeOffset()
{
} /* size: 0 */

// <0191A152> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<LookAtBone_t>::CRelativeOffset()
{
} /* size: 0 */

// <0191A139> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<LookAtBone_t>::CRelativeOffset()
{
} /* size: 0 */

// <0191A0A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::CRelativeOffset()
{
} /* size: 0 */

// <0191A08D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::CRelativeOffset()
{
} /* size: 0 */

// <01918816> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::CRelativeOffset()
{
} /* size: 0 */

// <019187FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::CRelativeOffset()
{
} /* size: 0 */

// <019187C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::CRelativeOffset()
{
} /* size: 0 */

// <019187A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::CRelativeOffset()
{
} /* size: 0 */

// <0191876C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::CRelativeOffset()
{
} /* size: 0 */

// <01918753> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::CRelativeOffset()
{
} /* size: 0 */

// <0191855C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<int>::CRelativeOffset()
{
} /* size: 0 */

// <01918543> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<int>::CRelativeOffset()
{
} /* size: 0 */

// <0191852C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CStateTag>::CRelativeOffset()
{
} /* size: 0 */

// <01918513> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CStateTag>::CRelativeOffset()
{
} /* size: 0 */

// <01917391> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CRelativeOffset<IConditionUpdater> >::CRelativeOffset()
{
} /* size: 0 */

// <01917378> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CRelativeOffset<IConditionUpdater> >::CRelativeOffset()
{
} /* size: 0 */

// <017ECD3F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<BlendItem_t>::CRelativeOffset()
{
} /* size: 0 */

// <017ECD26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<BlendItem_t>::CRelativeOffset()
{
} /* size: 0 */

// <017ECC5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeOffset()
{
} /* size: 0 */

// <017ECC43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeOffset()
{
} /* size: 0 */

// <017ECC2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<unsigned char>::CRelativeOffset()
{
} /* size: 0 */

// <017ECC13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<unsigned char>::CRelativeOffset()
{
} /* size: 0 */

// <017EC1ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<FootInstanceSettings>::CRelativeOffset()
{
} /* size: 0 */

// <017EC1D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<FootInstanceSettings>::CRelativeOffset()
{
} /* size: 0 */

// <017EC198> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<FootFixedSettings>::CRelativeOffset()
{
} /* size: 0 */

// <017EC17F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<FootFixedSettings>::CRelativeOffset()
{
} /* size: 0 */

// <017EC035> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<FootStepTrigger>::CRelativeOffset()
{
} /* size: 0 */

// <017EC01C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<FootStepTrigger>::CRelativeOffset()
{
} /* size: 0 */

// <017EBE8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CTransform>::CRelativeOffset()
{
} /* size: 0 */

// <017EBE73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CTransform>::CRelativeOffset()
{
} /* size: 0 */

// <017EB6A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<bool>::CRelativeOffset()
{
} /* size: 0 */

// <017EB557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CMotionTransform>::CRelativeOffset()
{
} /* size: 0 */

// <017EB53E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CMotionTransform>::CRelativeOffset()
{
} /* size: 0 */

// <017EB218> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<LastFootMotionStatus>::CRelativeOffset()
{
} /* size: 0 */

// <017EB1FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<LastFootMotionStatus>::CRelativeOffset()
{
} /* size: 0 */

// <0171D901> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<FootOpFixedInfo>::CRelativeOffset()
{
} /* size: 0 */

// <0171D8E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<FootOpFixedInfo>::CRelativeOffset()
{
} /* size: 0 */

// <0171D8AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<FootOpTarget>::CRelativeOffset()
{
} /* size: 0 */

// <0171D893> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<FootOpTarget>::CRelativeOffset()
{
} /* size: 0 */

// <0171D19A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<JiggleBoneStatus_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171D181> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<JiggleBoneStatus_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171D145> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<JiggleBoneSettings_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171D12C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<JiggleBoneSettings_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171C994> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<WristBone_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171C97B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<WristBone_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171C964> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<FingerChain_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171A1A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<FingerSource_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171A18B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<FingerSource_t>::CRelativeOffset()
{
} /* size: 0 */

// <0171A15B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<FingerBone_t>::CRelativeOffset()
{
} /* size: 0 */

// <0157BCAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<const CAnimMotorUpdaterBase>::CRelativeOffset()
{
} /* size: 0 */

// <0157BC92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<const CAnimMotorUpdaterBase>::CRelativeOffset()
{
} /* size: 0 */

// <0157BAD0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CAnimEnum>::CRelativeOffset()
{
} /* size: 0 */

// <0157BAB7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CAnimEnum>::CRelativeOffset()
{
} /* size: 0 */

// <0157BA40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<Vector>::CRelativeOffset()
{
} /* size: 0 */

// <0157BA27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<Vector>::CRelativeOffset()
{
} /* size: 0 */

// <0157BA10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<Quaternion>::CRelativeOffset()
{
} /* size: 0 */

// <015751FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
void CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::CRelativeOffset()
{
} /* size: 0 */

// <015751E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:16
inline void CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::CRelativeOffset()
{
} /* size: 0 */

// <0016020E> animgraph/relativeoffset.h:16
void CRelativeOffset<ClipInfo>::CRelativeOffset()
{
} /* size: 0 */

// <001601F5> animgraph/relativeoffset.h:16
inline void CRelativeOffset<ClipInfo>::CRelativeOffset()
{
} /* size: 0 */

// <001601DE> animgraph/relativeoffset.h:16
void CRelativeOffset<ClipSampleInfo>::CRelativeOffset()
{
} /* size: 0 */

// <001601C5> animgraph/relativeoffset.h:16
inline void CRelativeOffset<ClipSampleInfo>::CRelativeOffset()
{
} /* size: 0 */

// <0016017E> animgraph/relativeoffset.h:16
void CRelativeOffset<CMotionClipGroupData>::CRelativeOffset()
{
} /* size: 0 */

// <00160165> animgraph/relativeoffset.h:16
inline void CRelativeOffset<CMotionClipGroupData>::CRelativeOffset()
{
} /* size: 0 */

// <017220B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17
void CRelativeOffset<const CChoreoInstanceData>::CRelativeOffset(const CChoreoInstanceData* targetPtr)
{
} /* size: 0 */

// <01722091> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:17
inline void CRelativeOffset<const CChoreoInstanceData>::CRelativeOffset(const CChoreoInstanceData* targetPtr)
{
} /* size: 0 */

// <019F3111> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<const CAnimUpdateNodeBase>::operator=(const CAnimUpdateNodeBase* targetPtr)
{
} /* size: 0 */

// <019F09C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<IConditionUpdater>::operator=(const IConditionUpdater* targetPtr)
{
} /* size: 0 */

// <019EFA17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<int>::operator=(const int* targetPtr)
{
} /* size: 0 */

// <019EF9F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CStateTag>::operator=(const CStateTag* targetPtr)
{
} /* size: 0 */

// <019EF2DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CRelativeOffset<IConditionUpdater> >::operator=(const CRelativeOffset<IConditionUpdater>* targetPtr)
{
} /* size: 0 */

// <0191BB44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::operator=(const CRelativeOffset<const CMotionMetricEvaluator>* targetPtr)
{
} /* size: 0 */

// <0191B927> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<float>::operator=(const float* targetPtr)
{
} /* size: 0 */

// <0191B889> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<const CAnimUpdateNodeBase::operator=(const CAnimUpdateNodeBase* const* targetPtr)
{
} /* size: 0 */

// <0191B84B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<signed char>::operator=(const signed char* targetPtr)
{
} /* size: 0 */

// <0191B75A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<TagSpan_t>::operator=(const TagSpan_t* targetPtr)
{
} /* size: 0 */

// <0191ACCA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::operator=(const ChainToSolveData_t* targetPtr)
{
} /* size: 0 */

// <0191AC75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::operator=(const ChainToSolveData_t* targetPtr)
{
} /* size: 0 */

// <0191AC20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::operator=(const ChainToSolveData_t* targetPtr)
{
} /* size: 0 */

// <0191A898> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CTransitionUpdateData>::operator=(const CTransitionUpdateData* targetPtr)
{
} /* size: 0 */

// <0191A813> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CStateUpdateData>::operator=(const CStateUpdateData* targetPtr)
{
} /* size: 0 */

// <017ECCD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<BlendItem_t>::operator=(const BlendItem_t* targetPtr)
{
} /* size: 0 */

// <017ECB99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::operator=(const CRelativeOffset<const CAnimUpdateNodeBase>* targetPtr)
{
} /* size: 0 */

// <017ECB74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<unsigned char>::operator=(const unsigned char* targetPtr)
{
} /* size: 0 */

// <017ECA38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<bool>::operator=(const bool* targetPtr)
{
} /* size: 0 */

// <017EC8F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CMotionTransform>::operator=(const CMotionTransform* targetPtr)
{
} /* size: 0 */

// <017EC1AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FootInstanceSettings>::operator=(const FootInstanceSettings* targetPtr)
{
} /* size: 0 */

// <017EC15A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FootFixedSettings>::operator=(const FootFixedSettings* targetPtr)
{
} /* size: 0 */

// <017EBFC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FootStepTrigger>::operator=(const FootStepTrigger* targetPtr)
{
} /* size: 0 */

// <017EBF72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<LastFootMotionStatus>::operator=(const LastFootMotionStatus* targetPtr)
{
} /* size: 0 */

// <017EBE4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CTransform>::operator=(const CTransform* targetPtr)
{
} /* size: 0 */

// <0171D8C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FootOpFixedInfo>::operator=(const FootOpFixedInfo* targetPtr)
{
} /* size: 0 */

// <0171D86E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FootOpTarget>::operator=(const FootOpTarget* targetPtr)
{
} /* size: 0 */

// <0171D15C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<JiggleBoneStatus_t>::operator=(const JiggleBoneStatus_t* targetPtr)
{
} /* size: 0 */

// <0171D107> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<JiggleBoneSettings_t>::operator=(const JiggleBoneSettings_t* targetPtr)
{
} /* size: 0 */

// <0171CA7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FingerSource_t>::operator=(const FingerSource_t* targetPtr)
{
} /* size: 0 */

// <0171CA57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FingerBone_t>::operator=(const FingerBone_t* targetPtr)
{
} /* size: 0 */

// <0171C926> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<WristBone_t>::operator=(const WristBone_t* targetPtr)
{
} /* size: 0 */

// <0171C8A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<FingerChain_t>::operator=(const FingerChain_t* targetPtr)
{
} /* size: 0 */

// <0157BC6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator=(const CRelativeOffset<const CAnimMotorUpdaterBase>* targetPtr)
{
} /* size: 0 */

// <0157B46E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<TagStatus>::operator=(const TagStatus* targetPtr)
{
} /* size: 0 */

// <01575062> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<Vector>::operator=(const Vector* targetPtr)
{
} /* size: 0 */

// <0157503D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<Quaternion>::operator=(const Quaternion* targetPtr)
{
} /* size: 0 */

// <0130F19C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<const CAnimMotorUpdaterBase>::operator=(const CAnimMotorUpdaterBase* targetPtr)
{
} /* size: 0 */

// <0115FD3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<const CMotionMetricEvaluator>::operator=(const CMotionMetricEvaluator* targetPtr)
{
} /* size: 0 */

// <01156314> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<LookAtBone_t>::operator=(const LookAtBone_t* targetPtr)
{
} /* size: 0 */

// <0115601A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<ClipInfo>::operator=(const ClipInfo* targetPtr)
{
} /* size: 0 */

// <01155B39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:20
inline void CRelativeOffset<ClipSampleInfo>::operator=(const ClipSampleInfo* targetPtr)
{
} /* size: 0 */

// <00160140> animgraph/relativeoffset.h:20
inline void CRelativeOffset<CMotionClipGroupData>::operator=(const CMotionClipGroupData* targetPtr)
{
} /* size: 0 */

// <019EE8BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CStateTag>::IsValid()
{
} /* size: 0 */

// <019EE3AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CRelativeOffset<IConditionUpdater> >::IsValid()
{
} /* size: 0 */

// <0191EE52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<const CAnimUpdateNodeBase>::IsValid()
{
} /* size: 0 */

// <0191BAE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<const CMotionMetricEvaluator>::IsValid()
{
} /* size: 0 */

// <0191A01C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid()
{
} /* size: 0 */

// <01919F77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<float>::IsValid()
{
} /* size: 0 */

// <01919F5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<ClipSampleInfo>::IsValid()
{
} /* size: 0 */

// <01919EBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<const CAnimUpdateNodeBase::IsValid()
{
} /* size: 0 */

// <01919E7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<signed char>::IsValid()
{
} /* size: 0 */

// <019188C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::IsValid()
{
} /* size: 0 */

// <019188AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::IsValid()
{
} /* size: 0 */

// <01918715> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::IsValid()
{
} /* size: 0 */

// <019184D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CStateUpdateData>::IsValid()
{
} /* size: 0 */

// <01918489> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CTransitionUpdateData>::IsValid()
{
} /* size: 0 */

// <01918457> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<int>::IsValid()
{
} /* size: 0 */

// <01918425> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<IConditionUpdater>::IsValid()
{
} /* size: 0 */

// <017EB7B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<BlendItem_t>::IsValid()
{
} /* size: 0 */

// <017EB72E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid()
{
} /* size: 0 */

// <017EB6BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<unsigned char>::IsValid()
{
} /* size: 0 */

// <017EB650> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<bool>::IsValid()
{
} /* size: 0 */

// <017EB4C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CMotionTransform>::IsValid()
{
} /* size: 0 */

// <017EB2B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FootFixedSettings>::IsValid()
{
} /* size: 0 */

// <017EB29D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FootOpTarget>::IsValid()
{
} /* size: 0 */

// <017EB284> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FootInstanceSettings>::IsValid()
{
} /* size: 0 */

// <017EB18E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FootStepTrigger>::IsValid()
{
} /* size: 0 */

// <017EB175> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<LastFootMotionStatus>::IsValid()
{
} /* size: 0 */

// <017EB0A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CTransform>::IsValid()
{
} /* size: 0 */

// <0171E178> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<const CChoreoInstanceData>::IsValid()
{
} /* size: 0 */

// <0171A54E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FootOpFixedInfo>::IsValid()
{
} /* size: 0 */

// <0171A376> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<JiggleBoneSettings_t>::IsValid()
{
} /* size: 0 */

// <0171A35D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<JiggleBoneStatus_t>::IsValid()
{
} /* size: 0 */

// <0171A2D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<LookAtBone_t>::IsValid()
{
} /* size: 0 */

// <0171A1F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FingerSource_t>::IsValid()
{
} /* size: 0 */

// <0171A1E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FingerBone_t>::IsValid()
{
} /* size: 0 */

// <0171A11D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<WristBone_t>::IsValid()
{
} /* size: 0 */

// <0171A104> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<FingerChain_t>::IsValid()
{
} /* size: 0 */

// <0157BBE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid()
{
} /* size: 0 */

// <01575A4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<TagSpan_t>::IsValid()
{
} /* size: 0 */

// <01575141> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid()
{
} /* size: 0 */

// <0157500B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CAnimEnum>::IsValid()
{
} /* size: 0 */

// <01574FA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<Quaternion>::IsValid()
{
} /* size: 0 */

// <01574F69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<TagStatus>::IsValid()
{
} /* size: 0 */

// <01151EEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<CMotionClipGroupData>::IsValid()
{
} /* size: 0 */

// <01151E7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:26
inline void CRelativeOffset<ClipInfo>::IsValid()
{
} /* size: 0 */

// <019EF9D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<CStateTag>::Get()
{
} /* size: 0 */

// <019EF2C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<CRelativeOffset<IConditionUpdater> >::Get()
{
} /* size: 0 */

// <0191B870> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<const CAnimUpdateNodeBase::Get()
{
} /* size: 0 */

// <0191B832> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<signed char>::Get()
{
} /* size: 0 */

// <017ECABF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<unsigned char>::Get()
{
} /* size: 0 */

// <017ECA1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<bool>::Get()
{
} /* size: 0 */

// <017EC8B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<CMotionTransform>::Get()
{
} /* size: 0 */

// <017EC097> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<FootOpTarget>::Get()
{
} /* size: 0 */

// <017EC07E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<FootInstanceSettings>::Get()
{
} /* size: 0 */

// <017EBF14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<LastFootMotionStatus>::Get()
{
} /* size: 0 */

// <017EBE35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<CTransform>::Get()
{
} /* size: 0 */

// <01721F19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<const CChoreoInstanceData>::Get()
{
} /* size: 0 */

// <0171CEAA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<JiggleBoneStatus_t>::Get()
{
} /* size: 0 */

// <0171CA3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<FingerSource_t>::Get()
{
} /* size: 0 */

// <0171CA01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<FingerBone_t>::Get()
{
} /* size: 0 */

// <0171C888> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<WristBone_t>::Get()
{
} /* size: 0 */

// <0171C84B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<FingerChain_t>::Get()
{
} /* size: 0 */

// <0157B455> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<TagStatus>::Get()
{
} /* size: 0 */

// <0115606F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<CMotionClipGroupData>::Get()
{
} /* size: 0 */

// <01156001> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:28
inline void CRelativeOffset<ClipInfo>::Get()
{
} /* size: 0 */

// <0191E9FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<const CMotionMetricEvaluator>::Get()
{
} /* size: 0 */

// <0191CC62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<const CAnimUpdateNodeBase>::Get()
{
} /* size: 0 */

// <0191BAFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get()
{
} /* size: 0 */

// <0191BA50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<float>::Get()
{
} /* size: 0 */

// <0191BA37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<ClipSampleInfo>::Get()
{
} /* size: 0 */

// <0191ADF8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::Get()
{
} /* size: 0 */

// <0191ADDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::Get()
{
} /* size: 0 */

// <0191AB58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::Get()
{
} /* size: 0 */

// <0191A7FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<CStateUpdateData>::Get()
{
} /* size: 0 */

// <0191A7B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<CTransitionUpdateData>::Get()
{
} /* size: 0 */

// <0191A783> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<int>::Get()
{
} /* size: 0 */

// <0191A751> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<IConditionUpdater>::Get()
{
} /* size: 0 */

// <017ECC8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<BlendItem_t>::Get()
{
} /* size: 0 */

// <017ECB5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get()
{
} /* size: 0 */

// <017EC0B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<FootFixedSettings>::Get()
{
} /* size: 0 */

// <017EBF2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<FootStepTrigger>::Get()
{
} /* size: 0 */

// <0171CC60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<LookAtBone_t>::Get()
{
} /* size: 0 */

// <01582079> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<const CAnimMotorUpdaterBase>::Get()
{
} /* size: 0 */

// <0157C6E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<TagSpan_t>::Get()
{
} /* size: 0 */

// <0157BBFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get()
{
} /* size: 0 */

// <0157B5BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<CAnimEnum>::Get()
{
} /* size: 0 */

// <0157B572> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<Vector>::Get()
{
} /* size: 0 */

// <0157B559> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:33
inline void CRelativeOffset<Quaternion>::Get()
{
} /* size: 0 */

// <0191EE39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43
inline void CRelativeOffset<const CAnimUpdateNodeBase>::operator->()
{
} /* size: 0 */

// <0191EA13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43
inline void CRelativeOffset<const CMotionMetricEvaluator>::operator->()
{
} /* size: 0 */

// <0191C5FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43
inline void CRelativeOffset<IConditionUpdater>::operator->()
{
} /* size: 0 */

// <015820AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:43
inline void CRelativeOffset<const CAnimMotorUpdaterBase>::operator->()
{
} /* size: 0 */

// <019EFA3C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(const CAnimUpdateNodeBase* targetPtr)
{
} /* size: 0 */

// <019EF2A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<IConditionUpdater>::SetOffset(const IConditionUpdater* targetPtr)
{
} /* size: 0 */

// <019EE8FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<int>::SetOffset(const int* targetPtr)
{
} /* size: 0 */

// <019EE8D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CStateTag>::SetOffset(const CStateTag* targetPtr)
{
} /* size: 0 */

// <019EE3C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CRelativeOffset<IConditionUpdater> >::SetOffset(const CRelativeOffset<IConditionUpdater>* targetPtr)
{
} /* size: 0 */

// <0191A068> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::SetOffset(const CRelativeOffset<const CMotionMetricEvaluator>* targetPtr)
{
} /* size: 0 */

// <01919EFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<float>::SetOffset(const float* targetPtr)
{
} /* size: 0 */

// <01919ED6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<const CAnimUpdateNodeBase::SetOffset(const CAnimUpdateNodeBase* const* targetPtr)
{
} /* size: 0 */

// <01919E98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<signed char>::SetOffset(const signed char* targetPtr)
{
} /* size: 0 */

// <01919E27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<TagSpan_t>::SetOffset(const TagSpan_t* targetPtr)
{
} /* size: 0 */

// <019187D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::SetOffset(const ChainToSolveData_t* targetPtr)
{
} /* size: 0 */

// <01918783> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::SetOffset(const ChainToSolveData_t* targetPtr)
{
} /* size: 0 */

// <0191872E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::SetOffset(const ChainToSolveData_t* targetPtr)
{
} /* size: 0 */

// <01918573> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CTransitionUpdateData>::SetOffset(const CTransitionUpdateData* targetPtr)
{
} /* size: 0 */

// <019184EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CStateUpdateData>::SetOffset(const CStateUpdateData* targetPtr)
{
} /* size: 0 */

// <017EB80D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<BlendItem_t>::SetOffset(const BlendItem_t* targetPtr)
{
} /* size: 0 */

// <017EB76C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::SetOffset(const CRelativeOffset<const CAnimUpdateNodeBase>* targetPtr)
{
} /* size: 0 */

// <017EB747> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<unsigned char>::SetOffset(const unsigned char* targetPtr)
{
} /* size: 0 */

// <017EB669> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<bool>::SetOffset(const bool* targetPtr)
{
} /* size: 0 */

// <017EB519> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CMotionTransform>::SetOffset(const CMotionTransform* targetPtr)
{
} /* size: 0 */

// <017EB35A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FootInstanceSettings>::SetOffset(const FootInstanceSettings* targetPtr)
{
} /* size: 0 */

// <017EB335> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FootFixedSettings>::SetOffset(const FootFixedSettings* targetPtr)
{
} /* size: 0 */

// <017EB22F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FootStepTrigger>::SetOffset(const FootStepTrigger* targetPtr)
{
} /* size: 0 */

// <017EB1DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<LastFootMotionStatus>::SetOffset(const LastFootMotionStatus* targetPtr)
{
} /* size: 0 */

// <017EB0BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CTransform>::SetOffset(const CTransform* targetPtr)
{
} /* size: 0 */

// <0171E350> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<const CChoreoInstanceData>::SetOffset(const CChoreoInstanceData* targetPtr)
{
} /* size: 0 */

// <0171A600> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FootOpFixedInfo>::SetOffset(const FootOpFixedInfo* targetPtr)
{
} /* size: 0 */

// <0171A5DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FootOpTarget>::SetOffset(const FootOpTarget* targetPtr)
{
} /* size: 0 */

// <0171A428> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<JiggleBoneStatus_t>::SetOffset(const JiggleBoneStatus_t* targetPtr)
{
} /* size: 0 */

// <0171A403> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<JiggleBoneSettings_t>::SetOffset(const JiggleBoneSettings_t* targetPtr)
{
} /* size: 0 */

// <0171A237> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FingerSource_t>::SetOffset(const FingerSource_t* targetPtr)
{
} /* size: 0 */

// <0171A212> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FingerBone_t>::SetOffset(const FingerBone_t* targetPtr)
{
} /* size: 0 */

// <0171A1BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<WristBone_t>::SetOffset(const WristBone_t* targetPtr)
{
} /* size: 0 */

// <0171A136> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<FingerChain_t>::SetOffset(const FingerChain_t* targetPtr)
{
} /* size: 0 */

// <015751C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::SetOffset(const CRelativeOffset<const CAnimMotorUpdaterBase>* targetPtr)
{
} /* size: 0 */

// <01574F82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<TagStatus>::SetOffset(const TagStatus* targetPtr)
{
} /* size: 0 */

// <0156FAEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<CAnimEnum>::SetOffset(const CAnimEnum* targetPtr)
{
} /* size: 0 */

// <0156FA7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<Vector>::SetOffset(const Vector* targetPtr)
{
} /* size: 0 */

// <0156FA57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<Quaternion>::SetOffset(const Quaternion* targetPtr)
{
} /* size: 0 */

// <0130B974> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<const CAnimMotorUpdaterBase>::SetOffset(const CAnimMotorUpdaterBase* targetPtr)
{
} /* size: 0 */

// <01155EC4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<const CMotionMetricEvaluator>::SetOffset(const CMotionMetricEvaluator* targetPtr)
{
} /* size: 0 */

// <011520C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<LookAtBone_t>::SetOffset(const LookAtBone_t* targetPtr)
{
} /* size: 0 */

// <01151E95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<ClipInfo>::SetOffset(const ClipInfo* targetPtr)
{
} /* size: 0 */

// <01151915> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:59
inline void CRelativeOffset<ClipSampleInfo>::SetOffset(const ClipSampleInfo* targetPtr)
{
} /* size: 0 */

// <001600B7> animgraph/relativeoffset.h:59
inline void CRelativeOffset<CMotionClipGroupData>::SetOffset(const CMotionClipGroupData* targetPtr)
{
} /* size: 0 */

// <0015E04C> animgraph/relativeoffset.h:77
// member functions: 30
// member variables: 2
// class size: 8
class CRelativeArray<float> {
	/* animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<float>* , const float* , int);
	/* animgraph/relativeoffset.h:87 */
	float& operator[](CRelativeArray<float>* , int);
	/* animgraph/relativeoffset.h:94 */
	const float& operator[](const CRelativeArray<float>* , int);
	/* animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<float>* , int);
	/* animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<float>* , int);
	/* animgraph/relativeoffset.h:107 */
	float* Get(CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:108 */
	const float* Get(const CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<float>* , const float* , int32);
	/* animgraph/relativeoffset.h:81 */
	typedef float * iterator;
	/* animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:82 */
	typedef const float * const_iterator;
	/* animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<float>* );
	/* animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<float>* );
private:
	CRelativeOffset<float> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
	void CRelativeArray(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfEC4Ev */
	void CRelativeArray(class CRelativeArray<float> *, const float  *, int); /* linkage=_ZN14CRelativeArrayIfEC4EPKfi */
	float & operator[](class CRelativeArray<float> *, int); /* linkage=_ZN14CRelativeArrayIfEixEi */
	const float  & operator[](const class CRelativeArray<float>  *, int); /* linkage=_ZNK14CRelativeArrayIfEixEi */
	bool IsValid(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE7IsValidEv */
	bool IsValidIndex(const class CRelativeArray<float>  *, int); /* linkage=_ZNK14CRelativeArrayIfE12IsValidIndexEi */
	bool VerifyValidIndex(const class CRelativeArray<float>  *, int); /* linkage=_ZNK14CRelativeArrayIfE16VerifyValidIndexEi */
	float * Get(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfE3GetEv */
	const float  * Get(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE3GetEv */
	int32 Count(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE5CountEv */
	void SetArray(class CRelativeArray<float> *, const float  *, int32); /* linkage=_ZN14CRelativeArrayIfE8SetArrayEPKfi */
	iterator begin(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfE5beginEv */
	const_iterator begin(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE5beginEv */
	iterator end(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfE3endEv */
	const_iterator end(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE3endEv */
};

// <0015E5B6> animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<TagSpan_t> {
	/* animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<TagSpan_t>* , const TagSpan_t* , int);
	/* animgraph/relativeoffset.h:87 */
	TagSpan_t& operator[](CRelativeArray<TagSpan_t>* , int);
	/* animgraph/relativeoffset.h:94 */
	const TagSpan_t& operator[](const CRelativeArray<TagSpan_t>* , int);
	/* animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<TagSpan_t>* , int);
	/* animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<TagSpan_t>* , int);
	/* animgraph/relativeoffset.h:107 */
	TagSpan_t* Get(CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:108 */
	const TagSpan_t* Get(const CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<TagSpan_t>* , const TagSpan_t* , int32);
	/* animgraph/relativeoffset.h:81 */
	typedef class TagSpan_t * iterator;
	/* animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:82 */
	typedef const class TagSpan_t * const_iterator;
	/* animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<TagSpan_t>* );
	/* animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<TagSpan_t>* );
private:
	CRelativeOffset<TagSpan_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0015EAED> animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<ClipInfo> {
	/* animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<ClipInfo>* , const ClipInfo* , int);
	/* animgraph/relativeoffset.h:87 */
	ClipInfo& operator[](CRelativeArray<ClipInfo>* , int);
	/* animgraph/relativeoffset.h:94 */
	const ClipInfo& operator[](const CRelativeArray<ClipInfo>* , int);
	/* animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<ClipInfo>* , int);
	/* animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<ClipInfo>* , int);
	/* animgraph/relativeoffset.h:107 */
	ClipInfo* Get(CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:108 */
	const ClipInfo* Get(const CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<ClipInfo>* , const ClipInfo* , int32);
	/* animgraph/relativeoffset.h:81 */
	typedef class ClipInfo * iterator;
	/* animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:82 */
	typedef const class ClipInfo * const_iterator;
	/* animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<ClipInfo>* );
	/* animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<ClipInfo>* );
private:
	CRelativeOffset<ClipInfo> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0015EFC1> animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<ClipSampleInfo> {
	/* animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<ClipSampleInfo>* , const ClipSampleInfo* , int);
	/* animgraph/relativeoffset.h:87 */
	ClipSampleInfo& operator[](CRelativeArray<ClipSampleInfo>* , int);
	/* animgraph/relativeoffset.h:94 */
	const ClipSampleInfo& operator[](const CRelativeArray<ClipSampleInfo>* , int);
	/* animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<ClipSampleInfo>* , int);
	/* animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<ClipSampleInfo>* , int);
	/* animgraph/relativeoffset.h:107 */
	ClipSampleInfo* Get(CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:108 */
	const ClipSampleInfo* Get(const CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<ClipSampleInfo>* , const ClipSampleInfo* , int32);
	/* animgraph/relativeoffset.h:81 */
	typedef class ClipSampleInfo * iterator;
	/* animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:82 */
	typedef const class ClipSampleInfo * const_iterator;
	/* animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<ClipSampleInfo>* );
	/* animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<ClipSampleInfo>* );
private:
	CRelativeOffset<ClipSampleInfo> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0015F506> animgraph/relativeoffset.h:77
// member functions: 30
// member variables: 2
// class size: 8
class CRelativeArray<CMotionClipGroupData> {
	/* animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CMotionClipGroupData>* , const CMotionClipGroupData* , int);
	/* animgraph/relativeoffset.h:87 */
	CMotionClipGroupData& operator[](CRelativeArray<CMotionClipGroupData>* , int);
	/* animgraph/relativeoffset.h:94 */
	const CMotionClipGroupData& operator[](const CRelativeArray<CMotionClipGroupData>* , int);
	/* animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CMotionClipGroupData>* , int);
	/* animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CMotionClipGroupData>* , int);
	/* animgraph/relativeoffset.h:107 */
	CMotionClipGroupData* Get(CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:108 */
	const CMotionClipGroupData* Get(const CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CMotionClipGroupData>* , const CMotionClipGroupData* , int32);
	/* animgraph/relativeoffset.h:81 */
	typedef class CMotionClipGroupData * iterator;
	/* animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:82 */
	typedef const class CMotionClipGroupData * const_iterator;
	/* animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CMotionClipGroupData>* );
	/* animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CMotionClipGroupData>* );
private:
	CRelativeOffset<CMotionClipGroupData> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
	void CRelativeArray(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataEC4Ev */
	void CRelativeArray(class CRelativeArray<CMotionClipGroupData> *, const class CMotionClipGroupData  *, int); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataEC4EPKS0_i */
	class CMotionClipGroupData & operator[](class CRelativeArray<CMotionClipGroupData> *, int); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataEixEi */
	const class CMotionClipGroupData  & operator[](const class CRelativeArray<CMotionClipGroupData>  *, int); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataEixEi */
	bool IsValid(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE7IsValidEv */
	bool IsValidIndex(const class CRelativeArray<CMotionClipGroupData>  *, int); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE12IsValidIndexEi */
	bool VerifyValidIndex(const class CRelativeArray<CMotionClipGroupData>  *, int); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE16VerifyValidIndexEi */
	class CMotionClipGroupData * Get(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE3GetEv */
	const class CMotionClipGroupData  * Get(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE3GetEv */
	int32 Count(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE5CountEv */
	void SetArray(class CRelativeArray<CMotionClipGroupData> *, const class CMotionClipGroupData  *, int32); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE8SetArrayEPKS0_i */
	iterator begin(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE5beginEv */
	const_iterator begin(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE5beginEv */
	iterator end(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE3endEv */
	const_iterator end(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE3endEv */
};

// <00DA1698> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<bool> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<bool>* , const bool* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	bool& operator[](CRelativeArray<bool>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const bool& operator[](const CRelativeArray<bool>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<bool>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<bool>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	bool* Get(CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const bool* Get(const CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<bool>* , const bool* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef bool * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const bool * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<bool>* );
private:
	CRelativeOffset<bool> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DA1B52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CAnimEnum> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CAnimEnum>* , const CAnimEnum* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CAnimEnum& operator[](CRelativeArray<CAnimEnum>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CAnimEnum& operator[](const CRelativeArray<CAnimEnum>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CAnimEnum>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CAnimEnum>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CAnimEnum* Get(CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CAnimEnum* Get(const CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CAnimEnum>* , const CAnimEnum* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CAnimEnum * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CAnimEnum * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CAnimEnum>* );
private:
	CRelativeOffset<CAnimEnum> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DA1FFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<int> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<int>* , const int* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	int& operator[](CRelativeArray<int>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const int& operator[](const CRelativeArray<int>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<int>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<int>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	int* Get(CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const int* Get(const CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<int>* , const int* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef int * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const int * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<int>* );
private:
	CRelativeOffset<int> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DA24AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 30
// member variables: 2
// class size: 8
class CRelativeArray<float> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<float>* , const float* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	float& operator[](CRelativeArray<float>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const float& operator[](const CRelativeArray<float>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<float>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<float>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	float* Get(CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const float* Get(const CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<float>* , const float* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef float * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const float * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<float>* );
private:
	CRelativeOffset<float> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
	void CRelativeArray(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfEC4Ev */
	void CRelativeArray(class CRelativeArray<float> *, const float  *, int); /* linkage=_ZN14CRelativeArrayIfEC4EPKfi */
	float & operator[](class CRelativeArray<float> *, int); /* linkage=_ZN14CRelativeArrayIfEixEi */
	const float  & operator[](const class CRelativeArray<float>  *, int); /* linkage=_ZNK14CRelativeArrayIfEixEi */
	bool IsValid(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE7IsValidEv */
	bool IsValidIndex(const class CRelativeArray<float>  *, int); /* linkage=_ZNK14CRelativeArrayIfE12IsValidIndexEi */
	bool VerifyValidIndex(const class CRelativeArray<float>  *, int); /* linkage=_ZNK14CRelativeArrayIfE16VerifyValidIndexEi */
	float * Get(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfE3GetEv */
	const float  * Get(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE3GetEv */
	int32 Count(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE5CountEv */
	void SetArray(class CRelativeArray<float> *, const float  *, int32); /* linkage=_ZN14CRelativeArrayIfE8SetArrayEPKfi */
	iterator begin(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfE5beginEv */
	const_iterator begin(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE5beginEv */
	iterator end(class CRelativeArray<float> *); /* linkage=_ZN14CRelativeArrayIfE3endEv */
	const_iterator end(const class CRelativeArray<float>  *); /* linkage=_ZNK14CRelativeArrayIfE3endEv */
};

// <00DA2959> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<Vector> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<Vector>* , const Vector* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	Vector& operator[](CRelativeArray<Vector>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const Vector& operator[](const CRelativeArray<Vector>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<Vector>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<Vector>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	Vector* Get(CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const Vector* Get(const CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<Vector>* , const Vector* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class Vector * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class Vector * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<Vector>* );
private:
	CRelativeOffset<Vector> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DA2E01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<Quaternion> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<Quaternion>* , const Quaternion* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	Quaternion& operator[](CRelativeArray<Quaternion>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const Quaternion& operator[](const CRelativeArray<Quaternion>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<Quaternion>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<Quaternion>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	Quaternion* Get(CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const Quaternion* Get(const CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<Quaternion>* , const Quaternion* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class Quaternion * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class Quaternion * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<Quaternion>* );
private:
	CRelativeOffset<Quaternion> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DA37BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CTraceRequest> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CTraceRequest>* , const CTraceRequest* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CTraceRequest& operator[](CRelativeArray<CTraceRequest>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CTraceRequest& operator[](const CRelativeArray<CTraceRequest>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CTraceRequest>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CTraceRequest>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CTraceRequest* Get(CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CTraceRequest* Get(const CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CTraceRequest>* , const CTraceRequest* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CTraceRequest * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CTraceRequest * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CTraceRequest>* );
private:
	CRelativeOffset<CTraceRequest> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DABBF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<TagStatus> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<TagStatus>* , const TagStatus* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	TagStatus& operator[](CRelativeArray<TagStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const TagStatus& operator[](const CRelativeArray<TagStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<TagStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<TagStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	TagStatus* Get(CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const TagStatus* Get(const CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<TagStatus>* , const TagStatus* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class TagStatus * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class TagStatus * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<TagStatus>* );
private:
	CRelativeOffset<TagStatus> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DE77E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 30
// member variables: 2
// class size: 8
class CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CRelativeOffset<const CAnimMotorUpdaterBase>& operator[](CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CRelativeOffset<const CAnimMotorUpdaterBase>& operator[](const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CRelativeOffset<const CAnimMotorUpdaterBase>* Get(CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CRelativeOffset<const CAnimMotorUpdaterBase>* Get(const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* , const CRelativeOffset<const CAnimMotorUpdaterBase>* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CRelativeOffset<const CAnimMotorUpdaterBase> * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CRelativeOffset<const CAnimMotorUpdaterBase> * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
private:
	CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> > m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
	void CRelativeArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4Ev */
	void CRelativeArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, const class CRelativeOffset<const CAnimUpdateNodeBase>  *, int); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4EPKS3_i */
	class CRelativeOffset<const CAnimUpdateNodeBase> & operator[](class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, int); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEixEi */
	const class CRelativeOffset<const CAnimUpdateNodeBase>  & operator[](const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEixEi */
	bool IsValid(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE7IsValidEv */
	bool IsValidIndex(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE12IsValidIndexEi */
	bool VerifyValidIndex(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE16VerifyValidIndexEi */
	class CRelativeOffset<const CAnimUpdateNodeBase> * Get(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3GetEv */
	const class CRelativeOffset<const CAnimUpdateNodeBase>  * Get(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3GetEv */
	int32 Count(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5CountEv */
	void SetArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, const class CRelativeOffset<const CAnimUpdateNodeBase>  *, int32); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE8SetArrayEPKS3_i */
	iterator begin(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5beginEv */
	const_iterator begin(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5beginEv */
	iterator end(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3endEv */
	const_iterator end(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3endEv */
};

// <00DE8926> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CRelativeOffset<IConditionUpdater> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CRelativeOffset<IConditionUpdater>& operator[](CRelativeArray<CRelativeOffset<IConditionUpdater> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CRelativeOffset<IConditionUpdater>& operator[](const CRelativeArray<CRelativeOffset<IConditionUpdater> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CRelativeOffset<IConditionUpdater> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CRelativeOffset<IConditionUpdater> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CRelativeOffset<IConditionUpdater>* Get(CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CRelativeOffset<IConditionUpdater>* Get(const CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CRelativeOffset<IConditionUpdater> >* , const CRelativeOffset<IConditionUpdater>* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CRelativeOffset<IConditionUpdater> * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CRelativeOffset<IConditionUpdater> * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CRelativeOffset<IConditionUpdater> >* );
private:
	CRelativeOffset<CRelativeOffset<IConditionUpdater> > m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DE91DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CStateTag> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CStateTag>* , const CStateTag* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CStateTag& operator[](CRelativeArray<CStateTag>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CStateTag& operator[](const CRelativeArray<CStateTag>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CStateTag>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CStateTag>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CStateTag* Get(CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CStateTag* Get(const CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CStateTag>* , const CStateTag* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CStateTag * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CStateTag * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CStateTag>* );
private:
	CRelativeOffset<CStateTag> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <00DE985F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CStateUpdateData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CStateUpdateData>* , const CStateUpdateData* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CStateUpdateData& operator[](CRelativeArray<CStateUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CStateUpdateData& operator[](const CRelativeArray<CStateUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CStateUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CStateUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CStateUpdateData* Get(CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CStateUpdateData* Get(const CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CStateUpdateData>* , const CStateUpdateData* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CStateUpdateData * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CStateUpdateData * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CStateUpdateData>* );
private:
	CRelativeOffset<CStateUpdateData> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0100B641> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<TagSpan_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<TagSpan_t>* , const TagSpan_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	TagSpan_t& operator[](CRelativeArray<TagSpan_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const TagSpan_t& operator[](const CRelativeArray<TagSpan_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<TagSpan_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<TagSpan_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	TagSpan_t* Get(CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const TagSpan_t* Get(const CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<TagSpan_t>* , const TagSpan_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class TagSpan_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class TagSpan_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<TagSpan_t>* );
private:
	CRelativeOffset<TagSpan_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0100C670> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 30
// member variables: 2
// class size: 8
class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CRelativeOffset<const CAnimUpdateNodeBase>& operator[](CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CRelativeOffset<const CAnimUpdateNodeBase>& operator[](const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CRelativeOffset<const CAnimUpdateNodeBase>* Get(CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CRelativeOffset<const CAnimUpdateNodeBase>* Get(const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* , const CRelativeOffset<const CAnimUpdateNodeBase>* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CRelativeOffset<const CAnimUpdateNodeBase> * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CRelativeOffset<const CAnimUpdateNodeBase> * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >* );
private:
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> > m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
	void CRelativeArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4Ev */
	void CRelativeArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, const class CRelativeOffset<const CAnimUpdateNodeBase>  *, int); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4EPKS3_i */
	class CRelativeOffset<const CAnimUpdateNodeBase> & operator[](class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, int); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEixEi */
	const class CRelativeOffset<const CAnimUpdateNodeBase>  & operator[](const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEixEi */
	bool IsValid(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE7IsValidEv */
	bool IsValidIndex(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE12IsValidIndexEi */
	bool VerifyValidIndex(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE16VerifyValidIndexEi */
	class CRelativeOffset<const CAnimUpdateNodeBase> * Get(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3GetEv */
	const class CRelativeOffset<const CAnimUpdateNodeBase>  * Get(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3GetEv */
	int32 Count(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5CountEv */
	void SetArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, const class CRelativeOffset<const CAnimUpdateNodeBase>  *, int32); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE8SetArrayEPKS3_i */
	iterator begin(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5beginEv */
	const_iterator begin(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5beginEv */
	iterator end(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3endEv */
	const_iterator end(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3endEv */
};

// <010167BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FootOpFixedInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FootOpFixedInfo>* , const FootOpFixedInfo* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FootOpFixedInfo& operator[](CRelativeArray<FootOpFixedInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FootOpFixedInfo& operator[](const CRelativeArray<FootOpFixedInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FootOpFixedInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FootOpFixedInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FootOpFixedInfo* Get(CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FootOpFixedInfo* Get(const CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FootOpFixedInfo>* , const FootOpFixedInfo* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FootOpFixedInfo * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FootOpFixedInfo * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FootOpFixedInfo>* );
private:
	CRelativeOffset<FootOpFixedInfo> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0101791F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FootInstanceSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FootInstanceSettings>* , const FootInstanceSettings* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FootInstanceSettings& operator[](CRelativeArray<FootInstanceSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FootInstanceSettings& operator[](const CRelativeArray<FootInstanceSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FootInstanceSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FootInstanceSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FootInstanceSettings* Get(CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FootInstanceSettings* Get(const CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FootInstanceSettings>* , const FootInstanceSettings* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FootInstanceSettings * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FootInstanceSettings * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FootInstanceSettings>* );
private:
	CRelativeOffset<FootInstanceSettings> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <01017F8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FootFixedSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FootFixedSettings>* , const FootFixedSettings* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FootFixedSettings& operator[](CRelativeArray<FootFixedSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FootFixedSettings& operator[](const CRelativeArray<FootFixedSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FootFixedSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FootFixedSettings>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FootFixedSettings* Get(CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FootFixedSettings* Get(const CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FootFixedSettings>* , const FootFixedSettings* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FootFixedSettings * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FootFixedSettings * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FootFixedSettings>* );
private:
	CRelativeOffset<FootFixedSettings> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <010EC925> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FootStepTrigger> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FootStepTrigger>* , const FootStepTrigger* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FootStepTrigger& operator[](CRelativeArray<FootStepTrigger>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FootStepTrigger& operator[](const CRelativeArray<FootStepTrigger>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FootStepTrigger>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FootStepTrigger>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FootStepTrigger* Get(CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FootStepTrigger* Get(const CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FootStepTrigger>* , const FootStepTrigger* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FootStepTrigger * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FootStepTrigger * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FootStepTrigger>* );
private:
	CRelativeOffset<FootStepTrigger> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <010F9DF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<JiggleBoneSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<JiggleBoneSettings_t>* , const JiggleBoneSettings_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	JiggleBoneSettings_t& operator[](CRelativeArray<JiggleBoneSettings_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const JiggleBoneSettings_t& operator[](const CRelativeArray<JiggleBoneSettings_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<JiggleBoneSettings_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<JiggleBoneSettings_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	JiggleBoneSettings_t* Get(CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const JiggleBoneSettings_t* Get(const CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<JiggleBoneSettings_t>* , const JiggleBoneSettings_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class JiggleBoneSettings_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class JiggleBoneSettings_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<JiggleBoneSettings_t>* );
private:
	CRelativeOffset<JiggleBoneSettings_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0110131C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<LookAtBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<LookAtBone_t>* , const LookAtBone_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	LookAtBone_t& operator[](CRelativeArray<LookAtBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const LookAtBone_t& operator[](const CRelativeArray<LookAtBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<LookAtBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<LookAtBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	LookAtBone_t* Get(CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const LookAtBone_t* Get(const CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<LookAtBone_t>* , const LookAtBone_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class LookAtBone_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class LookAtBone_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<LookAtBone_t>* );
private:
	CRelativeOffset<LookAtBone_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0110CCB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<ClipInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<ClipInfo>* , const ClipInfo* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	ClipInfo& operator[](CRelativeArray<ClipInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const ClipInfo& operator[](const CRelativeArray<ClipInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<ClipInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<ClipInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	ClipInfo* Get(CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const ClipInfo* Get(const CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<ClipInfo>* , const ClipInfo* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class ClipInfo * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class ClipInfo * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<ClipInfo>* );
private:
	CRelativeOffset<ClipInfo> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0110D182> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<ClipSampleInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<ClipSampleInfo>* , const ClipSampleInfo* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	ClipSampleInfo& operator[](CRelativeArray<ClipSampleInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const ClipSampleInfo& operator[](const CRelativeArray<ClipSampleInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<ClipSampleInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<ClipSampleInfo>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	ClipSampleInfo* Get(CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const ClipSampleInfo* Get(const CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<ClipSampleInfo>* , const ClipSampleInfo* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class ClipSampleInfo * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class ClipSampleInfo * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<ClipSampleInfo>* );
private:
	CRelativeOffset<ClipSampleInfo> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0110D6C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 30
// member variables: 2
// class size: 8
class CRelativeArray<CMotionClipGroupData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CMotionClipGroupData>* , const CMotionClipGroupData* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CMotionClipGroupData& operator[](CRelativeArray<CMotionClipGroupData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CMotionClipGroupData& operator[](const CRelativeArray<CMotionClipGroupData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CMotionClipGroupData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CMotionClipGroupData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CMotionClipGroupData* Get(CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CMotionClipGroupData* Get(const CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CMotionClipGroupData>* , const CMotionClipGroupData* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CMotionClipGroupData * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CMotionClipGroupData * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CMotionClipGroupData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CMotionClipGroupData>* );
private:
	CRelativeOffset<CMotionClipGroupData> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
	void CRelativeArray(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataEC4Ev */
	void CRelativeArray(class CRelativeArray<CMotionClipGroupData> *, const class CMotionClipGroupData  *, int); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataEC4EPKS0_i */
	class CMotionClipGroupData & operator[](class CRelativeArray<CMotionClipGroupData> *, int); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataEixEi */
	const class CMotionClipGroupData  & operator[](const class CRelativeArray<CMotionClipGroupData>  *, int); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataEixEi */
	bool IsValid(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE7IsValidEv */
	bool IsValidIndex(const class CRelativeArray<CMotionClipGroupData>  *, int); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE12IsValidIndexEi */
	bool VerifyValidIndex(const class CRelativeArray<CMotionClipGroupData>  *, int); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE16VerifyValidIndexEi */
	class CMotionClipGroupData * Get(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE3GetEv */
	const class CMotionClipGroupData  * Get(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE3GetEv */
	int32 Count(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE5CountEv */
	void SetArray(class CRelativeArray<CMotionClipGroupData> *, const class CMotionClipGroupData  *, int32); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE8SetArrayEPKS0_i */
	iterator begin(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE5beginEv */
	const_iterator begin(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE5beginEv */
	iterator end(class CRelativeArray<CMotionClipGroupData> *); /* linkage=_ZN14CRelativeArrayI20CMotionClipGroupDataE3endEv */
	const_iterator end(const class CRelativeArray<CMotionClipGroupData>  *); /* linkage=_ZNK14CRelativeArrayI20CMotionClipGroupDataE3endEv */
};

// <0111183B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 30
// member variables: 2
// class size: 8
class CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CRelativeOffset<const CMotionMetricEvaluator>& operator[](CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CRelativeOffset<const CMotionMetricEvaluator>& operator[](const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CRelativeOffset<const CMotionMetricEvaluator>* Get(CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CRelativeOffset<const CMotionMetricEvaluator>* Get(const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* , const CRelativeOffset<const CMotionMetricEvaluator>* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CRelativeOffset<const CMotionMetricEvaluator> * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CRelativeOffset<const CMotionMetricEvaluator> * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >* );
private:
	CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> > m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
	void CRelativeArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4Ev */
	void CRelativeArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, const class CRelativeOffset<const CAnimUpdateNodeBase>  *, int); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4EPKS3_i */
	class CRelativeOffset<const CAnimUpdateNodeBase> & operator[](class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, int); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEixEi */
	const class CRelativeOffset<const CAnimUpdateNodeBase>  & operator[](const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEixEi */
	bool IsValid(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE7IsValidEv */
	bool IsValidIndex(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE12IsValidIndexEi */
	bool VerifyValidIndex(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *, int); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE16VerifyValidIndexEi */
	class CRelativeOffset<const CAnimUpdateNodeBase> * Get(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3GetEv */
	const class CRelativeOffset<const CAnimUpdateNodeBase>  * Get(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3GetEv */
	int32 Count(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5CountEv */
	void SetArray(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *, const class CRelativeOffset<const CAnimUpdateNodeBase>  *, int32); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE8SetArrayEPKS3_i */
	iterator begin(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5beginEv */
	const_iterator begin(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5beginEv */
	iterator end(class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3endEv */
	const_iterator end(const class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK14CRelativeArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE3endEv */
};

// <0121F5D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FingerSource_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FingerSource_t>* , const FingerSource_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FingerSource_t& operator[](CRelativeArray<FingerSource_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FingerSource_t& operator[](const CRelativeArray<FingerSource_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FingerSource_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FingerSource_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FingerSource_t* Get(CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FingerSource_t* Get(const CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FingerSource_t>* , const FingerSource_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FingerSource_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FingerSource_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FingerSource_t>* );
private:
	CRelativeOffset<FingerSource_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0121FA91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FingerBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FingerBone_t>* , const FingerBone_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FingerBone_t& operator[](CRelativeArray<FingerBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FingerBone_t& operator[](const CRelativeArray<FingerBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FingerBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FingerBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FingerBone_t* Get(CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FingerBone_t* Get(const CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FingerBone_t>* , const FingerBone_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FingerBone_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FingerBone_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FingerBone_t>* );
private:
	CRelativeOffset<FingerBone_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <012200D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<WristBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<WristBone_t>* , const WristBone_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	WristBone_t& operator[](CRelativeArray<WristBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const WristBone_t& operator[](const CRelativeArray<WristBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<WristBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<WristBone_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	WristBone_t* Get(CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const WristBone_t* Get(const CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<WristBone_t>* , const WristBone_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class WristBone_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class WristBone_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<WristBone_t>* );
private:
	CRelativeOffset<WristBone_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <01220587> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FingerChain_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FingerChain_t>* , const FingerChain_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FingerChain_t& operator[](CRelativeArray<FingerChain_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FingerChain_t& operator[](const CRelativeArray<FingerChain_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FingerChain_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FingerChain_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FingerChain_t* Get(CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FingerChain_t* Get(const CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FingerChain_t>* , const FingerChain_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FingerChain_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FingerChain_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FingerChain_t>* );
private:
	CRelativeOffset<FingerChain_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <012282B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	ChainToSolveData_t& operator[](CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const ChainToSolveData_t& operator[](const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	ChainToSolveData_t* Get(CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const ChainToSolveData_t* Get(const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class ChainToSolveData_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class ChainToSolveData_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
private:
	CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0122889B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	ChainToSolveData_t& operator[](CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const ChainToSolveData_t& operator[](const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	ChainToSolveData_t* Get(CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const ChainToSolveData_t* Get(const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class ChainToSolveData_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class ChainToSolveData_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
private:
	CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0122F0A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CTransitionUpdateData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CTransitionUpdateData>* , const CTransitionUpdateData* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CTransitionUpdateData& operator[](CRelativeArray<CTransitionUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CTransitionUpdateData& operator[](const CRelativeArray<CTransitionUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CTransitionUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CTransitionUpdateData>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CTransitionUpdateData* Get(CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CTransitionUpdateData* Get(const CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CTransitionUpdateData>* , const CTransitionUpdateData* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CTransitionUpdateData * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CTransitionUpdateData * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CTransitionUpdateData>* );
private:
	CRelativeOffset<CTransitionUpdateData> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <017058A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<unsigned char> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<unsigned char>* , const unsigned char* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	unsigned char& operator[](CRelativeArray<unsigned char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const unsigned char& operator[](const CRelativeArray<unsigned char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<unsigned char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<unsigned char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	unsigned char* Get(CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const unsigned char* Get(const CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<unsigned char>* , const unsigned char* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef unsigned char * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const unsigned char * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<unsigned char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<unsigned char>* );
private:
	CRelativeOffset<unsigned char> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <01707415> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CTransform> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CTransform>* , const CTransform* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CTransform& operator[](CRelativeArray<CTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CTransform& operator[](const CRelativeArray<CTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CTransform* Get(CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CTransform* Get(const CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CTransform>* , const CTransform* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CTransform * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CTransform * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CTransform>* );
private:
	CRelativeOffset<CTransform> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <01709495> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<FootOpTarget> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<FootOpTarget>* , const FootOpTarget* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	FootOpTarget& operator[](CRelativeArray<FootOpTarget>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const FootOpTarget& operator[](const CRelativeArray<FootOpTarget>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<FootOpTarget>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<FootOpTarget>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	FootOpTarget* Get(CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const FootOpTarget* Get(const CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<FootOpTarget>* , const FootOpTarget* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class FootOpTarget * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class FootOpTarget * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<FootOpTarget>* );
private:
	CRelativeOffset<FootOpTarget> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0170F46C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<JiggleBoneStatus_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<JiggleBoneStatus_t>* , const JiggleBoneStatus_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	JiggleBoneStatus_t& operator[](CRelativeArray<JiggleBoneStatus_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const JiggleBoneStatus_t& operator[](const CRelativeArray<JiggleBoneStatus_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<JiggleBoneStatus_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<JiggleBoneStatus_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	JiggleBoneStatus_t* Get(CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const JiggleBoneStatus_t* Get(const CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<JiggleBoneStatus_t>* , const JiggleBoneStatus_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class JiggleBoneStatus_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class JiggleBoneStatus_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<JiggleBoneStatus_t>* );
private:
	CRelativeOffset<JiggleBoneStatus_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <017132AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	ChainToSolveData_t& operator[](CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const ChainToSolveData_t& operator[](const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	ChainToSolveData_t* Get(CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const ChainToSolveData_t* Get(const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , const ChainToSolveData_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class ChainToSolveData_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class ChainToSolveData_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
private:
	CRelativeOffset<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <017D57BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<BlendItem_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<BlendItem_t>* , const BlendItem_t* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	BlendItem_t& operator[](CRelativeArray<BlendItem_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const BlendItem_t& operator[](const CRelativeArray<BlendItem_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<BlendItem_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<BlendItem_t>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	BlendItem_t* Get(CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const BlendItem_t* Get(const CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<BlendItem_t>* , const BlendItem_t* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class BlendItem_t * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class BlendItem_t * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<BlendItem_t>* );
private:
	CRelativeOffset<BlendItem_t> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <017D8009> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<CMotionTransform> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<CMotionTransform>* , const CMotionTransform* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	CMotionTransform& operator[](CRelativeArray<CMotionTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CMotionTransform& operator[](const CRelativeArray<CMotionTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<CMotionTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<CMotionTransform>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	CMotionTransform* Get(CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CMotionTransform* Get(const CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<CMotionTransform>* , const CMotionTransform* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class CMotionTransform * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CMotionTransform * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<CMotionTransform>* );
private:
	CRelativeOffset<CMotionTransform> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <017DFC65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<LastFootMotionStatus> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<LastFootMotionStatus>* , const LastFootMotionStatus* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	LastFootMotionStatus& operator[](CRelativeArray<LastFootMotionStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const LastFootMotionStatus& operator[](const CRelativeArray<LastFootMotionStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<LastFootMotionStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<LastFootMotionStatus>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	LastFootMotionStatus* Get(CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const LastFootMotionStatus* Get(const CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<LastFootMotionStatus>* , const LastFootMotionStatus* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef class LastFootMotionStatus * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class LastFootMotionStatus * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<LastFootMotionStatus>* );
private:
	CRelativeOffset<LastFootMotionStatus> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <018D862C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<const CAnimUpdateNodeBase*> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	const CAnimUpdateNodeBase* & operator[](CRelativeArray<const CAnimUpdateNodeBase*>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const CAnimUpdateNodeBase* const& operator[](const CRelativeArray<const CAnimUpdateNodeBase*>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<const CAnimUpdateNodeBase*>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<const CAnimUpdateNodeBase*>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	const CAnimUpdateNodeBase* * Get(CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const CAnimUpdateNodeBase* const* Get(const CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<const CAnimUpdateNodeBase*>* , const CAnimUpdateNodeBase* const* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef const class CAnimUpdateNodeBase * * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const class CAnimUpdateNodeBase * const * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<const CAnimUpdateNodeBase*>* );
private:
	CRelativeOffset<const CAnimUpdateNodeBase*> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <018D8B00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:77
// member functions: 15
// member variables: 2
// class size: 8
class CRelativeArray<signed char> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84 */
	void CRelativeArray(CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:85 */
	void CRelativeArray(CRelativeArray<signed char>* , const signed char* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87 */
	signed char& operator[](CRelativeArray<signed char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94 */
	const signed char& operator[](const CRelativeArray<signed char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101 */
	bool IsValid(const CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103 */
	bool IsValidIndex(const CRelativeArray<signed char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105 */
	bool VerifyValidIndex(const CRelativeArray<signed char>* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107 */
	signed char* Get(CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:108 */
	const signed char* Get(const CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110 */
	int32 Count(const CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112 */
	void SetArray(CRelativeArray<signed char>* , const signed char* , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:81 */
	typedef signed char * iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:121 */
	iterator begin(CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:82 */
	typedef const signed char * const_iterator;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:122 */
	const_iterator begin(const CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:123 */
	iterator end(CRelativeArray<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:124 */
	const_iterator end(const CRelativeArray<signed char>* );
private:
	CRelativeOffset<signed char> m_offset; /* 0 4 */
	int32 m_count; /* 4 4 */
};

// <0191EDF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<float>::CRelativeArray()
{
} /* size: 0 */

// <0191EDD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<float>::CRelativeArray()
{
} /* size: 0 */

// <0191E312> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<const CAnimUpdateNodeBase::CRelativeArray()
{
} /* size: 0 */

// <0191E2F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<const CAnimUpdateNodeBase::CRelativeArray()
{
} /* size: 0 */

// <0191E2E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<signed char>::CRelativeArray()
{
} /* size: 0 */

// <0191E2C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<signed char>::CRelativeArray()
{
} /* size: 0 */

// <0191DD95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<TagSpan_t>::CRelativeArray()
{
} /* size: 0 */

// <0191DD7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<TagSpan_t>::CRelativeArray()
{
} /* size: 0 */

// <0191CC4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CStateUpdateData>::CRelativeArray()
{
} /* size: 0 */

// <0191CC32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CStateUpdateData>::CRelativeArray()
{
} /* size: 0 */

// <0191CC1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CTransitionUpdateData>::CRelativeArray()
{
} /* size: 0 */

// <0191CC02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CTransitionUpdateData>::CRelativeArray()
{
} /* size: 0 */

// <0191BC6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<LookAtBone_t>::CRelativeArray()
{
} /* size: 0 */

// <0191BC51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<LookAtBone_t>::CRelativeArray()
{
} /* size: 0 */

// <0191BBB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::CRelativeArray()
{
} /* size: 0 */

// <0191BB99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::CRelativeArray()
{
} /* size: 0 */

// <0191AD08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::CRelativeArray()
{
} /* size: 0 */

// <0191ACEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::CRelativeArray()
{
} /* size: 0 */

// <0191ACB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::CRelativeArray()
{
} /* size: 0 */

// <0191AC9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::CRelativeArray()
{
} /* size: 0 */

// <0191AC5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::CRelativeArray()
{
} /* size: 0 */

// <0191AC45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::CRelativeArray()
{
} /* size: 0 */

// <0191A881> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<int>::CRelativeArray()
{
} /* size: 0 */

// <0191A868> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<int>::CRelativeArray()
{
} /* size: 0 */

// <0191A851> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CStateTag>::CRelativeArray()
{
} /* size: 0 */

// <0191A838> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CStateTag>::CRelativeArray()
{
} /* size: 0 */

// <019185B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CRelativeOffset<IConditionUpdater> >::CRelativeArray()
{
} /* size: 0 */

// <01918598> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CRelativeOffset<IConditionUpdater> >::CRelativeArray()
{
} /* size: 0 */

// <017F049C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<BlendItem_t>::CRelativeArray()
{
} /* size: 0 */

// <017F0483> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<BlendItem_t>::CRelativeArray()
{
} /* size: 0 */

// <017F0186> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeArray()
{
} /* size: 0 */

// <017F016D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeArray()
{
} /* size: 0 */

// <017F0156> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<unsigned char>::CRelativeArray()
{
} /* size: 0 */

// <017F013D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<unsigned char>::CRelativeArray()
{
} /* size: 0 */

// <017EE71A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FootInstanceSettings>::CRelativeArray()
{
} /* size: 0 */

// <017EE701> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FootInstanceSettings>::CRelativeArray()
{
} /* size: 0 */

// <017EE57B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FootFixedSettings>::CRelativeArray()
{
} /* size: 0 */

// <017EE562> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FootFixedSettings>::CRelativeArray()
{
} /* size: 0 */

// <017EDF16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FootStepTrigger>::CRelativeArray()
{
} /* size: 0 */

// <017EDEFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FootStepTrigger>::CRelativeArray()
{
} /* size: 0 */

// <017ED8C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CTransform>::CRelativeArray()
{
} /* size: 0 */

// <017ED8AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CTransform>::CRelativeArray()
{
} /* size: 0 */

// <017ECA76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<bool>::CRelativeArray()
{
} /* size: 0 */

// <017ECA5D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<bool>::CRelativeArray()
{
} /* size: 0 */

// <017EC933> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CMotionTransform>::CRelativeArray()
{
} /* size: 0 */

// <017EC91A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CMotionTransform>::CRelativeArray()
{
} /* size: 0 */

// <017EBFB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<LastFootMotionStatus>::CRelativeArray()
{
} /* size: 0 */

// <017EBF97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<LastFootMotionStatus>::CRelativeArray()
{
} /* size: 0 */

// <017218CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FootOpFixedInfo>::CRelativeArray()
{
} /* size: 0 */

// <017218B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FootOpFixedInfo>::CRelativeArray()
{
} /* size: 0 */

// <017217BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FootOpTarget>::CRelativeArray()
{
} /* size: 0 */

// <017217A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FootOpTarget>::CRelativeArray()
{
} /* size: 0 */

// <01720FEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<JiggleBoneStatus_t>::CRelativeArray()
{
} /* size: 0 */

// <01720FD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<JiggleBoneStatus_t>::CRelativeArray()
{
} /* size: 0 */

// <01720ED7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<JiggleBoneSettings_t>::CRelativeArray()
{
} /* size: 0 */

// <01720EBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<JiggleBoneSettings_t>::CRelativeArray()
{
} /* size: 0 */

// <01720480> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<WristBone_t>::CRelativeArray()
{
} /* size: 0 */

// <01720467> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<WristBone_t>::CRelativeArray()
{
} /* size: 0 */

// <01720450> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FingerChain_t>::CRelativeArray()
{
} /* size: 0 */

// <01720437> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FingerChain_t>::CRelativeArray()
{
} /* size: 0 */

// <0171C90F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FingerSource_t>::CRelativeArray()
{
} /* size: 0 */

// <0171C8F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FingerSource_t>::CRelativeArray()
{
} /* size: 0 */

// <0171C8DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<FingerBone_t>::CRelativeArray()
{
} /* size: 0 */

// <0171C8C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<FingerBone_t>::CRelativeArray()
{
} /* size: 0 */

// <01581CA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CAnimEnum>::CRelativeArray()
{
} /* size: 0 */

// <01581C87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CAnimEnum>::CRelativeArray()
{
} /* size: 0 */

// <01581C10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<Vector>::CRelativeArray()
{
} /* size: 0 */

// <01581BF7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<Vector>::CRelativeArray()
{
} /* size: 0 */

// <01581BE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<Quaternion>::CRelativeArray()
{
} /* size: 0 */

// <01581BC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<Quaternion>::CRelativeArray()
{
} /* size: 0 */

// <0158132E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<TagStatus>::CRelativeArray()
{
} /* size: 0 */

// <01581315> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<TagStatus>::CRelativeArray()
{
} /* size: 0 */

// <0157BCDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
void CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::CRelativeArray()
{
} /* size: 0 */

// <0157BCC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:84
inline void CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::CRelativeArray()
{
} /* size: 0 */

// <0016055C> animgraph/relativeoffset.h:84
void CRelativeArray<ClipInfo>::CRelativeArray()
{
} /* size: 0 */

// <00160543> animgraph/relativeoffset.h:84
inline void CRelativeArray<ClipInfo>::CRelativeArray()
{
} /* size: 0 */

// <0016052C> animgraph/relativeoffset.h:84
void CRelativeArray<ClipSampleInfo>::CRelativeArray()
{
} /* size: 0 */

// <00160513> animgraph/relativeoffset.h:84
inline void CRelativeArray<ClipSampleInfo>::CRelativeArray()
{
} /* size: 0 */

// <0016048A> animgraph/relativeoffset.h:84
void CRelativeArray<CMotionClipGroupData>::CRelativeArray()
{
} /* size: 0 */

// <00160471> animgraph/relativeoffset.h:84
inline void CRelativeArray<CMotionClipGroupData>::CRelativeArray()
{
} /* size: 0 */

// <019F2F19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CStateTag>::operator[](int index)
{
	const char   __FUNCTION__; // 50847
	CStateTag* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <019F09ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CRelativeOffset<IConditionUpdater> >::operator[](int index)
{
	const char   __FUNCTION__; // 50847
	CRelativeOffset<IConditionUpdater>* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0191E329> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0191E103> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<const CAnimUpdateNodeBase::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const CAnimUpdateNodeBase ** array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0191DFDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<signed char>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	signed char* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0191CDDA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	ChainToSolveData_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017F01D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<BlendItem_t>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	BlendItem_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EFD1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	CRelativeOffset<const CAnimUpdateNodeBase>* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EFCA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EFC47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<unsigned char>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	unsigned char* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EF8F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<bool>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	bool* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EF19C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CMotionTransform>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	CMotionTransform* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EE1A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FootOpTarget>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	FootOpTarget* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EE147> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FootInstanceSettings>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	FootInstanceSettings* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017EDBDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<LastFootMotionStatus>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	LastFootMotionStatus* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017ED79D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CTransform>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	CTransform* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01722353> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<unsigned char>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	unsigned char* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017214C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FootOpTarget>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	FootOpTarget* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017211E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CTransform>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	CTransform* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01720B6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<JiggleBoneStatus_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	JiggleBoneStatus_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017205FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FingerSource_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	FingerSource_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0172056D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FingerBone_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	FingerBone_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <017201CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<WristBone_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	WristBone_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0172013F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FingerChain_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	FingerChain_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01639EB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 30849
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01581598> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<bool>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	bool* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0158153F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CAnimEnum>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	CAnimEnum* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <015814E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	int* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0158148D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01581434> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<Vector>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	Vector* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <015813DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<Quaternion>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	Quaternion* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <015811EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<TagStatus>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	TagStatus* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0130F1C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](int index)
{
	const char   __FUNCTION__; // 21485
	CRelativeOffset<const CAnimMotorUpdaterBase>* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01273B65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	ChainToSolveData_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01273B0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	ChainToSolveData_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01272C56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CStateUpdateData>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	CStateUpdateData* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01272BFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CTransitionUpdateData>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	CTransitionUpdateData* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01272B8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	int* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01272B05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0116505D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FootStepTrigger>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	FootStepTrigger* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01164F3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	int* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <01160F19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<JiggleBoneSettings_t>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	JiggleBoneSettings_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <011600D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CMotionClipGroupData>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	CMotionClipGroupData* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0115FF91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<ClipInfo>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	ClipInfo* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0115FE58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<TagSpan_t>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	TagSpan_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0115FD62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	CRelativeOffset<const CMotionMetricEvaluator>* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0115EE9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <010637A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<TagSpan_t>::operator[](int index)
{
	const char   __FUNCTION__; // 19886
	TagSpan_t* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0106234F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 19886
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <010622F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](int index)
{
	const char   __FUNCTION__; // 19886
	CRelativeOffset<const CAnimUpdateNodeBase>* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0105FF8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FootOpFixedInfo>::operator[](int index)
{
	const char   __FUNCTION__; // 19886
	FootOpFixedInfo* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0105FED3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FootFixedSettings>::operator[](int index)
{
	const char   __FUNCTION__; // 19886
	FootFixedSettings* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0105FE7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<FootInstanceSettings>::operator[](int index)
{
	const char   __FUNCTION__; // 19886
	FootInstanceSettings* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <00F5503A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<CTraceRequest>::operator[](int index)
{
	const char   __FUNCTION__; // 37597
	CTraceRequest* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <00E22626> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:87
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 10266
	float* array; // 90
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 2 */

// <0191EA2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const CRelativeOffset<const CMotionMetricEvaluator>* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191E62D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const float* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191E5D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<ClipSampleInfo>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const ClipSampleInfo* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191DF83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<const CAnimUpdateNodeBase::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const CAnimUpdateNodeBase* const* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191DEFE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<signed char>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const signed char* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191D5B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const ChainToSolveData_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191D559> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const ChainToSolveData_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191CE33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const ChainToSolveData_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191C911> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CStateUpdateData>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const CStateUpdateData* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191C76B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CTransitionUpdateData>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const CTransitionUpdateData* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191C6F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CStateTag>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const CStateTag* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191C687> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const int* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0191C615> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CRelativeOffset<IConditionUpdater> >::operator[](int index)
{
	const char   __FUNCTION__; // 54532
	const CRelativeOffset<IConditionUpdater>* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017F0261> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<BlendItem_t>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const BlendItem_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EFDD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const CRelativeOffset<const CAnimUpdateNodeBase>* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EFBD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<unsigned char>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const unsigned char* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EFB7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const float* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EE1F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FootFixedSettings>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const FootFixedSettings* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EE033> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FootInstanceSettings>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const FootInstanceSettings* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EDF52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FootOpTarget>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const FootOpTarget* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EDC36> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FootStepTrigger>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const FootStepTrigger* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017EDB6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 32633
	const int* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0172153F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FootOpFixedInfo>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const FootOpFixedInfo* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01721006> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CTransform>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const CTransform* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01720BC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<JiggleBoneSettings_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const JiggleBoneSettings_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01720970> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<LookAtBone_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const LookAtBone_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017204F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FingerBone_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const FingerBone_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01720497> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FingerSource_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const FingerSource_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0171FFB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<FingerChain_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const FingerChain_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0171FF35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<WristBone_t>::operator[](int index)
{
	const char   __FUNCTION__; // 44964
	const WristBone_t* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0167778D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 31871
	const float* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0163A0C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 30849
	const int* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01639F0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 30849
	const float* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <015820C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const CRelativeOffset<const CAnimMotorUpdaterBase>* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0158197C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<bool>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const bool* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <015818D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CAnimEnum>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const CAnimEnum* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01581830> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const int* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0158178A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const float* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <015816E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<Vector>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const Vector* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0158163E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<Quaternion>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const Quaternion* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01581195> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<TagStatus>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	const TagStatus* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01270C68> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CStateUpdateData>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	const CStateUpdateData* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <01270BFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<int>::operator[](int index)
{
	const char   __FUNCTION__; // 9824
	const int* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <0115EB9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<float>::operator[](int index)
{
	const char   __FUNCTION__; // 43119
	const float* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <00F54FE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CTraceRequest>::operator[](int index)
{
	const char   __FUNCTION__; // 37597
	const CTraceRequest* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <00E226B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CStateUpdateData>::operator[](int index)
{
	const char   __FUNCTION__; // 10266
	const CStateUpdateData* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <00160349> animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<CMotionClipGroupData>::operator[](int index)
{
	const char   __FUNCTION__; // 11665
	const CMotionClipGroupData* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <001602D7> animgraph/relativeoffset.h:94
// variables: 3
inline void CRelativeArray<ClipInfo>::operator[](int index)
{
	const char   __FUNCTION__; // 11665
	const ClipInfo* array; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
} /* size: 0, variables: 2 */

// <017223C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:101
inline void CRelativeArray<unsigned char>::IsValid()
{
} /* size: 0 */

// <0191C8C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103
inline void CRelativeArray<CStateUpdateData>::IsValidIndex(int index)
{
} /* size: 0 */

// <0191C7C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103
inline void CRelativeArray<CTransitionUpdateData>::IsValidIndex(int index)
{
} /* size: 0 */

// <0191B7AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103
inline void CRelativeArray<const CAnimUpdateNodeBase::IsValidIndex(int index)
{
} /* size: 0 */

// <017EC9CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:103
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(int index)
{
} /* size: 0 */

// <0191DE59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105
inline void CRelativeArray<const CAnimUpdateNodeBase::VerifyValidIndex(int index)
{
} /* size: 0 */

// <0191C81B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105
inline void CRelativeArray<CStateUpdateData>::VerifyValidIndex(int index)
{
} /* size: 0 */

// <017EF822> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:105
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(int index)
{
} /* size: 0 */

// <017ED5D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107
inline void CRelativeArray<CTransform>::Get()
{
} /* size: 0 */

// <0172233A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:107
inline void CRelativeArray<float>::Get()
{
} /* size: 0 */

// <0191EA85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::Count()
{
} /* size: 0 */

// <0191E686> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<ClipSampleInfo>::Count()
{
} /* size: 0 */

// <0191E15C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<const CAnimUpdateNodeBase::Count()
{
} /* size: 0 */

// <0191E035> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<signed char>::Count()
{
} /* size: 0 */

// <0191DE40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<float>::Count()
{
} /* size: 0 */

// <0191D602> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::Count()
{
} /* size: 0 */

// <0191CE83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::Count()
{
} /* size: 0 */

// <0191C96A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CStateUpdateData>::Count()
{
} /* size: 0 */

// <0191C752> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CStateTag>::Count()
{
} /* size: 0 */

// <0191C6E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<int>::Count()
{
} /* size: 0 */

// <0191C66E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CRelativeOffset<IConditionUpdater> >::Count()
{
} /* size: 0 */

// <017F01BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<BlendItem_t>::Count()
{
} /* size: 0 */

// <017EFE2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count()
{
} /* size: 0 */

// <017EFC2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<unsigned char>::Count()
{
} /* size: 0 */

// <017EF7BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<bool>::Count()
{
} /* size: 0 */

// <017EE252> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FootOpFixedInfo>::Count()
{
} /* size: 0 */

// <017EE0D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FootFixedSettings>::Count()
{
} /* size: 0 */

// <017EE08C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FootInstanceSettings>::Count()
{
} /* size: 0 */

// <017EDCB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FootStepTrigger>::Count()
{
} /* size: 0 */

// <017ED5EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CTransform>::Count()
{
} /* size: 0 */

// <017214A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FootOpTarget>::Count()
{
} /* size: 0 */

// <01720C3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<JiggleBoneSettings_t>::Count()
{
} /* size: 0 */

// <01720C21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<JiggleBoneStatus_t>::Count()
{
} /* size: 0 */

// <017209C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<LookAtBone_t>::Count()
{
} /* size: 0 */

// <0172064A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FingerSource_t>::Count()
{
} /* size: 0 */

// <017205BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FingerBone_t>::Count()
{
} /* size: 0 */

// <0172021C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<WristBone_t>::Count()
{
} /* size: 0 */

// <0172018F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<FingerChain_t>::Count()
{
} /* size: 0 */

// <01582B9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<TagSpan_t>::Count()
{
} /* size: 0 */

// <01582092> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::Count()
{
} /* size: 0 */

// <015813A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<CAnimEnum>::Count()
{
} /* size: 0 */

// <0158135E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<Vector>::Count()
{
} /* size: 0 */

// <01581345> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<Quaternion>::Count()
{
} /* size: 0 */

// <01581247> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:110
inline void CRelativeArray<TagStatus>::Count()
{
} /* size: 0 */

// <001603A2> animgraph/relativeoffset.h:110
inline void CRelativeArray<CMotionClipGroupData>::Count()
{
} /* size: 0 */

// <00160330> animgraph/relativeoffset.h:110
inline void CRelativeArray<ClipInfo>::Count()
{
} /* size: 0 */

// <019F305B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<int>::SetArray(const int* targetArray, int32 count)
{
	const char   __FUNCTION__; // 50793
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <019F2F72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CStateTag>::SetArray(const CStateTag* targetArray, int32 count)
{
	const char   __FUNCTION__; // 50793
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <019F0A46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CRelativeOffset<IConditionUpdater> >::SetArray(const CRelativeOffset<IConditionUpdater>* targetArray, int32 count)
{
	const char   __FUNCTION__; // 50793
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191EC16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::SetArray(const CRelativeOffset<const CMotionMetricEvaluator>* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191E382> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<float>::SetArray(const float* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191E175> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<const CAnimUpdateNodeBase::SetArray(const CAnimUpdateNodeBase* const* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191E04E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<signed char>::SetArray(const signed char* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191DBED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<TagSpan_t>::SetArray(const TagSpan_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191D2DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::SetArray(const ChainToSolveData_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191D0DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::SetArray(const ChainToSolveData_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191CF52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>::SetArray(const ChainToSolveData_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191CA6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CTransitionUpdateData>::SetArray(const CTransitionUpdateData* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0191C983> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CStateUpdateData>::SetArray(const CStateUpdateData* targetArray, int32 count)
{
	const char   __FUNCTION__; // 54478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017F02E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<BlendItem_t>::SetArray(const BlendItem_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EFFB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<float>::SetArray(const float* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EFEFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::SetArray(const CRelativeOffset<const CAnimUpdateNodeBase>* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EFE47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<unsigned char>::SetArray(const unsigned char* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EF94C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<bool>::SetArray(const bool* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EF253> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CMotionTransform>::SetArray(const CMotionTransform* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EE622> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FootInstanceSettings>::SetArray(const FootInstanceSettings* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EE3CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FootFixedSettings>::SetArray(const FootFixedSettings* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EDDEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FootStepTrigger>::SetArray(const FootStepTrigger* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017EDCCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<LastFootMotionStatus>::SetArray(const LastFootMotionStatus* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017ED7F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CTransform>::SetArray(const CTransform* targetArray, int32 count)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01722516> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<unsigned char>::SetArray(const unsigned char* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01722455> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<float>::SetArray(const float* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01721D2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CTransform>::SetArray(const CTransform* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017217D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FootOpFixedInfo>::SetArray(const FootOpFixedInfo* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <017216C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FootOpTarget>::SetArray(const FootOpTarget* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01720EEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<JiggleBoneStatus_t>::SetArray(const JiggleBoneStatus_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01720DD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<JiggleBoneSettings_t>::SetArray(const JiggleBoneSettings_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01720764> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FingerSource_t>::SetArray(const FingerSource_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01720663> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FingerBone_t>::SetArray(const FingerBone_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01720336> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<WristBone_t>::SetArray(const WristBone_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01720235> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<FingerChain_t>::SetArray(const FingerChain_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0167785F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<float>::SetArray(const float* targetArray, int32 count)
{
	const char   __FUNCTION__; // 31822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01639F7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<float>::SetArray(const float* targetArray, int32 count)
{
	const char   __FUNCTION__; // 30795
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01582230> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::SetArray(const CRelativeOffset<const CAnimMotorUpdaterBase>* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01581260> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<TagStatus>::SetArray(const TagStatus* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0157B94B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<bool>::SetArray(const bool* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0157B89F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CAnimEnum>::SetArray(const CAnimEnum* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0157B7F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<int>::SetArray(const int* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0157B747> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<float>::SetArray(const float* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0157B69B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<Vector>::SetArray(const Vector* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0157B5EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<Quaternion>::SetArray(const Quaternion* targetArray, int32 count)
{
	const char   __FUNCTION__; // 35220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <01164F97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<int>::SetArray(const int* targetArray, int32 count)
{
	const char   __FUNCTION__; // 43070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <011606C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<LookAtBone_t>::SetArray(const LookAtBone_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 43070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0115FFEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<ClipInfo>::SetArray(const ClipInfo* targetArray, int32 count)
{
	const char   __FUNCTION__; // 43070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0115FEB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<TagSpan_t>::SetArray(const TagSpan_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 43070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0115EFA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<ClipSampleInfo>::SetArray(const ClipSampleInfo* targetArray, int32 count)
{
	const char   __FUNCTION__; // 43070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <0115EEF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<float>::SetArray(const float* targetArray, int32 count)
{
	const char   __FUNCTION__; // 43070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <010637F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<TagSpan_t>::SetArray(const TagSpan_t* targetArray, int32 count)
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <00F550AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CTraceRequest>::SetArray(const CTraceRequest* targetArray, int32 count)
{
	const char   __FUNCTION__; // 37543
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <001603BB> animgraph/relativeoffset.h:112
// variables: 2
inline void CRelativeArray<CMotionClipGroupData>::SetArray(const CMotionClipGroupData* targetArray, int32 count)
{
	const char   __FUNCTION__; // 11623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <00DE7A50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:134
// member functions: 4
// member variable: 1
// class size: 8
class CRelativeObjectArray<const CAnimMotorUpdaterBase> : public CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> > {
public:
	/* class CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> > <ancestor>; */ /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138 */
	void CRelativeObjectArray(CRelativeObjectArray<const CAnimMotorUpdaterBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:139 */
	void CRelativeObjectArray(CRelativeObjectArray<const CAnimMotorUpdaterBase>* , const CRelativeOffset<const CAnimMotorUpdaterBase>* , int);
	void CRelativeObjectArray(class CRelativeObjectArray<const CAnimMotorUpdaterBase> *); /* linkage=_ZN20CRelativeObjectArrayIK21CAnimMotorUpdaterBaseEC4Ev */
	void CRelativeObjectArray(class CRelativeObjectArray<const CAnimMotorUpdaterBase> *, const class CRelativeOffset<const CAnimMotorUpdaterBase>  *, int); /* linkage=_ZN20CRelativeObjectArrayIK21CAnimMotorUpdaterBaseEC4EPK15CRelativeOffsetIS1_Ei */
};

// <017D64AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:134
// member functions: 4
// member variable: 1
// class size: 8
class CRelativeObjectArray<const CAnimUpdateNodeBase> : public CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > {
public:
	/* class CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> > <ancestor>; */ /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138 */
	void CRelativeObjectArray(CRelativeObjectArray<const CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:139 */
	void CRelativeObjectArray(CRelativeObjectArray<const CAnimUpdateNodeBase>* , const CRelativeOffset<const CAnimUpdateNodeBase>* , int);
	void CRelativeObjectArray(class CRelativeObjectArray<const CAnimMotorUpdaterBase> *); /* linkage=_ZN20CRelativeObjectArrayIK21CAnimMotorUpdaterBaseEC4Ev */
	void CRelativeObjectArray(class CRelativeObjectArray<const CAnimMotorUpdaterBase> *, const class CRelativeOffset<const CAnimMotorUpdaterBase>  *, int); /* linkage=_ZN20CRelativeObjectArrayIK21CAnimMotorUpdaterBaseEC4EPK15CRelativeOffsetIS1_Ei */
};

// <018D7AAA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:134
// member functions: 4
// member variable: 1
// class size: 8
class CRelativeObjectArray<const CMotionMetricEvaluator> : public CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> > {
public:
	/* class CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> > <ancestor>; */ /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138 */
	void CRelativeObjectArray(CRelativeObjectArray<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:139 */
	void CRelativeObjectArray(CRelativeObjectArray<const CMotionMetricEvaluator>* , const CRelativeOffset<const CMotionMetricEvaluator>* , int);
	void CRelativeObjectArray(class CRelativeObjectArray<const CAnimMotorUpdaterBase> *); /* linkage=_ZN20CRelativeObjectArrayIK21CAnimMotorUpdaterBaseEC4Ev */
	void CRelativeObjectArray(class CRelativeObjectArray<const CAnimMotorUpdaterBase> *, const class CRelativeOffset<const CAnimMotorUpdaterBase>  *, int); /* linkage=_ZN20CRelativeObjectArrayIK21CAnimMotorUpdaterBaseEC4EPK15CRelativeOffsetIS1_Ei */
};

// <0191ED44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
void CRelativeObjectArray<const CMotionMetricEvaluator>::CRelativeObjectArray()
{
} /* size: 0 */

// <0191ED2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
inline void CRelativeObjectArray<const CMotionMetricEvaluator>::CRelativeObjectArray()
{
} /* size: 0 */

// <0191A8D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
void CRelativeObjectArray<IConditionUpdater>::CRelativeObjectArray()
{
} /* size: 0 */

// <0191A8BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
inline void CRelativeObjectArray<IConditionUpdater>::CRelativeObjectArray()
{
} /* size: 0 */

// <017EFAC1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
void CRelativeObjectArray<const CAnimUpdateNodeBase>::CRelativeObjectArray()
{
} /* size: 0 */

// <017EFAA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
inline void CRelativeObjectArray<const CAnimUpdateNodeBase>::CRelativeObjectArray()
{
} /* size: 0 */

// <0158235E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
void CRelativeObjectArray<const CAnimMotorUpdaterBase>::CRelativeObjectArray()
{
} /* size: 0 */

// <01582345> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/relativeoffset.h:138
inline void CRelativeObjectArray<const CAnimMotorUpdaterBase>::CRelativeObjectArray()
{
} /* size: 0 */


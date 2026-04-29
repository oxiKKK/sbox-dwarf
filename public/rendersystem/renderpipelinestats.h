
//
// public/rendersystem/renderpipelinestats.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 17
//	classes: 3
//	structs: 7
//

// <000DAFCC> ../public/rendersystem/renderpipelinestats.h:17
// member functions: 14
// member variables: 25
// static member variables: 2
// class size: 120
class CRenderPipelineStats {
	/* ../public/rendersystem/renderpipelinestats.h:20 */
	void CRenderPipelineStats(CRenderPipelineStats* );
	/* ../public/rendersystem/renderpipelinestats.h:22 */
	void CRenderPipelineStats(CRenderPipelineStats* , const CRenderPipelineStats& );
	/* ../public/rendersystem/renderpipelinestats.h:23 */
	CRenderPipelineStats& operator=(CRenderPipelineStats* , const CRenderPipelineStats& );
	/* ../public/rendersystem/renderpipelinestats.h:25 */
	void Clear(CRenderPipelineStats* );
	/* ../public/rendersystem/renderpipelinestats.h:26 */
	void UpdateInstanceHistogram(CRenderPipelineStats* , int);
	/* ../public/rendersystem/renderpipelinestats.h:27 */
	void UpdatePrimsPerDrawHistogram(CRenderPipelineStats* , int);
	/* ../public/rendersystem/renderpipelinestats.h:29 */
	CRenderPipelineStats& operator+=(CRenderPipelineStats* , const CRenderPipelineStats& );
	CBigEndianValue<short unsigned int> m_nTotalDraws; /* 0 2 */
	CBigEndianValue<short unsigned int> m_nTotalInstances; /* 2 2 */
	CBigEndianValue<unsigned int> m_nTotalVertices; /* 4 4 */
	CBigEndianValue<unsigned int> m_nTotalPrims; /* 8 4 */
	CBigEndianValue<short unsigned int> m_nTotalClears; /* 12 2 */
	CBigEndianValue<short unsigned int> m_nTotalResolves; /* 14 2 */
	CBigEndianValue<short unsigned int> m_nTotalVBUpdates; /* 16 2 */
	CBigEndianValue<short unsigned int> m_nTotalIBUpdates; /* 18 2 */
	CBigEndianValue<short unsigned int> m_nTotalCBUpdates; /* 20 2 */
	CBigEndianValue<short unsigned int> m_nTotalTextureUpdates; /* 22 2 */
	CBigEndianValue<short unsigned int> m_nFallbackTextureUpdates; /* 24 2 */
	CBigEndianValue<unsigned int> m_nTotalVBUploadSize; /* 26 4 */
	CBigEndianValue<unsigned int> m_nTotalIBUploadSize; /* 30 4 */
	CBigEndianValue<unsigned int> m_nTotalCBUploadSize; /* 34 4 */
	CBigEndianValue<unsigned int> m_nTotalTextureUploadSize; /* 38 4 */
	CBigEndianValue<unsigned int> m_nTotalTBRBandwidth; /* 42 4 */
	CBigEndianValue<short unsigned int> m_nTotalRenderTargetSwitches; /* 46 2 */
	CBigEndianValue<unsigned int> m_nIAVertices; /* 48 4 */
	CBigEndianValue<unsigned int> m_nIAPrimitives; /* 52 4 */
	CBigEndianValue<unsigned int> m_nVSInvocations; /* 56 4 */
	CBigEndianValue<unsigned int> m_nCInvocations; /* 60 4 */
	CBigEndianValue<unsigned int> m_nCPrimitives; /* 64 4 */
	CBigEndianValue<unsigned int> m_nPSInvocations; /* 68 4 */
	CBigEndianValue<short unsigned int> m_nInstanceHistogram[12]; /* 72 24 */
	CBigEndianValue<short unsigned int> m_nPrimsPerDrawHistogram[12]; /* 96 24 */
private:
	static const const int m_nHistogramBucketBoundaries[12]; /* 0 0 */
	static const const int m_nPrimsPerDrawHistogramBucketBoundaries[12]; /* 0 0 */
	void CRenderPipelineStats(class CRenderPipelineStats *); /* linkage=_ZN20CRenderPipelineStatsC4Ev */
	void CRenderPipelineStats(class CRenderPipelineStats *, const class CRenderPipelineStats  &); /* linkage=_ZN20CRenderPipelineStatsC4ERKS_ */
	class CRenderPipelineStats & operator=(class CRenderPipelineStats *, const class CRenderPipelineStats  &); /* linkage=_ZN20CRenderPipelineStatsaSERKS_ */
	void Clear(class CRenderPipelineStats *); /* linkage=_ZN20CRenderPipelineStats5ClearEv */
	void UpdateInstanceHistogram(class CRenderPipelineStats *, int); /* linkage=_ZN20CRenderPipelineStats23UpdateInstanceHistogramEi */
	void UpdatePrimsPerDrawHistogram(class CRenderPipelineStats *, int); /* linkage=_ZN20CRenderPipelineStats27UpdatePrimsPerDrawHistogramEi */
	class CRenderPipelineStats & operator+=(class CRenderPipelineStats *, const class CRenderPipelineStats  &); /* linkage=_ZN20CRenderPipelineStatspLERKS_ */
} __attribute__((__packed__));

// <0021992D> ../public/rendersystem/renderpipelinestats.h:17
// member functions: 14
// member variables: 25
// static member variables: 2
// class size: 120
class CRenderPipelineStats {
	/* ../public/rendersystem/renderpipelinestats.h:102 */
	enum {
		INST_HIST_MAX_BUCKETS = 12,
	};
	/* ../public/rendersystem/renderpipelinestats.h:104 */
	enum {
		PRIMS_PER_DRAW_HIST_MAX_BUCKETS = 12,
	};
	/* ../public/rendersystem/renderpipelinestats.h:20 */
	void CRenderPipelineStats(CRenderPipelineStats* );
	/* ../public/rendersystem/renderpipelinestats.h:22 */
	void CRenderPipelineStats(CRenderPipelineStats* , const CRenderPipelineStats& );
	/* ../public/rendersystem/renderpipelinestats.h:23 */
	CRenderPipelineStats& operator=(CRenderPipelineStats* , const CRenderPipelineStats& );
	/* ../public/rendersystem/renderpipelinestats.h:25 */
	void Clear(CRenderPipelineStats* );
	/* ../public/rendersystem/renderpipelinestats.h:26 */
	void UpdateInstanceHistogram(CRenderPipelineStats* , int);
	/* ../public/rendersystem/renderpipelinestats.h:27 */
	void UpdatePrimsPerDrawHistogram(CRenderPipelineStats* , int);
	/* ../public/rendersystem/renderpipelinestats.h:29 */
	CRenderPipelineStats& operator+=(CRenderPipelineStats* , const CRenderPipelineStats& );
	CBigEndianValue<short unsigned int> m_nTotalDraws; /* 0 2 */
	CBigEndianValue<short unsigned int> m_nTotalInstances; /* 2 2 */
	CBigEndianValue<unsigned int> m_nTotalVertices; /* 4 4 */
	CBigEndianValue<unsigned int> m_nTotalPrims; /* 8 4 */
	CBigEndianValue<short unsigned int> m_nTotalClears; /* 12 2 */
	CBigEndianValue<short unsigned int> m_nTotalResolves; /* 14 2 */
	CBigEndianValue<short unsigned int> m_nTotalVBUpdates; /* 16 2 */
	CBigEndianValue<short unsigned int> m_nTotalIBUpdates; /* 18 2 */
	CBigEndianValue<short unsigned int> m_nTotalCBUpdates; /* 20 2 */
	CBigEndianValue<short unsigned int> m_nTotalTextureUpdates; /* 22 2 */
	CBigEndianValue<short unsigned int> m_nFallbackTextureUpdates; /* 24 2 */
	CBigEndianValue<unsigned int> m_nTotalVBUploadSize; /* 26 4 */
	CBigEndianValue<unsigned int> m_nTotalIBUploadSize; /* 30 4 */
	CBigEndianValue<unsigned int> m_nTotalCBUploadSize; /* 34 4 */
	CBigEndianValue<unsigned int> m_nTotalTextureUploadSize; /* 38 4 */
	CBigEndianValue<unsigned int> m_nTotalTBRBandwidth; /* 42 4 */
	CBigEndianValue<short unsigned int> m_nTotalRenderTargetSwitches; /* 46 2 */
	CBigEndianValue<unsigned int> m_nIAVertices; /* 48 4 */
	CBigEndianValue<unsigned int> m_nIAPrimitives; /* 52 4 */
	CBigEndianValue<unsigned int> m_nVSInvocations; /* 56 4 */
	CBigEndianValue<unsigned int> m_nCInvocations; /* 60 4 */
	CBigEndianValue<unsigned int> m_nCPrimitives; /* 64 4 */
	CBigEndianValue<unsigned int> m_nPSInvocations; /* 68 4 */
	CBigEndianValue<short unsigned int> m_nInstanceHistogram[12]; /* 72 24 */
	CBigEndianValue<short unsigned int> m_nPrimsPerDrawHistogram[12]; /* 96 24 */
private:
	static const const int m_nHistogramBucketBoundaries[12]; /* 0 0 */
	static const const int m_nPrimsPerDrawHistogramBucketBoundaries[12]; /* 0 0 */
	void CRenderPipelineStats(class CRenderPipelineStats *); /* linkage=_ZN20CRenderPipelineStatsC4Ev */
	void CRenderPipelineStats(class CRenderPipelineStats *, const class CRenderPipelineStats  &); /* linkage=_ZN20CRenderPipelineStatsC4ERKS_ */
	class CRenderPipelineStats & operator=(class CRenderPipelineStats *, const class CRenderPipelineStats  &); /* linkage=_ZN20CRenderPipelineStatsaSERKS_ */
	void Clear(class CRenderPipelineStats *); /* linkage=_ZN20CRenderPipelineStats5ClearEv */
	void UpdateInstanceHistogram(class CRenderPipelineStats *, int); /* linkage=_ZN20CRenderPipelineStats23UpdateInstanceHistogramEi */
	void UpdatePrimsPerDrawHistogram(class CRenderPipelineStats *, int); /* linkage=_ZN20CRenderPipelineStats27UpdatePrimsPerDrawHistogramEi */
	class CRenderPipelineStats & operator+=(class CRenderPipelineStats *, const class CRenderPipelineStats  &); /* linkage=_ZN20CRenderPipelineStatspLERKS_ */
} __attribute__((__packed__));

// <00B16884> ../public/rendersystem/renderpipelinestats.h:20
void CRenderPipelineStats::CRenderPipelineStats()
{
} /* size: 0 */

// <00B1686B> ../public/rendersystem/renderpipelinestats.h:20
inline void CRenderPipelineStats::CRenderPipelineStats()
{
} /* size: 0 */

// <00B16846> ../public/rendersystem/renderpipelinestats.h:23
inline void CRenderPipelineStats::operator=(const CRenderPipelineStats& rhs)
{
} /* size: 0 */

// <0087ACE0> ../public/rendersystem/renderpipelinestats.h:25
inline void CRenderPipelineStats::Clear()
{
} /* size: 0 */

// <0087ACAE> ../public/rendersystem/renderpipelinestats.h:113
// variable: 1
inline void CRenderPipelineStats::UpdateInstanceHistogram(int nInstanceCount)
{
	int i; // 124
} /* size: 0, variables: 1 */

// <0087AC7C> ../public/rendersystem/renderpipelinestats.h:132
// variable: 1
inline void CRenderPipelineStats::UpdatePrimsPerDrawHistogram(int nPrimitiveCount)
{
	int i; // 137
} /* size: 0, variables: 1 */

// <00219E1A> ../public/rendersystem/renderpipelinestats.h:153
// member function: 1
// member variables: 7
// struct size: 408
struct RenderPipelineSample_t {
	/* ../public/rendersystem/renderpipelinestats.h:167 */
	enum {
		NAME_BUF_SIZE = 255,
	};
	/* ../public/rendersystem/renderpipelinestats.h:155 */
	void RenderPipelineSample_t(RenderPipelineSample_t* );
	CBigEndianValue<double> m_flCPUStartTime; /* 0 8 */
	CBigEndianValue<double> m_flCPUTotalTime; /* 8 8 */
	CBigEndianValue<double> m_flGPUStartTime; /* 16 8 */
	CBigEndianValue<double> m_flGPUTotalTime; /* 24 8 */
	CRenderPipelineStats m_Stats; /* 32 120 */
	uint8 m_nType; /* 152 1 */
	char m_szName[255]; /* 153 255 */
};

// <00AEEA68> ../public/rendersystem/renderpipelinestats.h:153
// member function: 1
// member variables: 7
// struct size: 408
struct RenderPipelineSample_t {
	/* ../public/rendersystem/renderpipelinestats.h:155 */
	void RenderPipelineSample_t(RenderPipelineSample_t* );
	CBigEndianValue<double> m_flCPUStartTime; /* 0 8 */
	CBigEndianValue<double> m_flCPUTotalTime; /* 8 8 */
	CBigEndianValue<double> m_flGPUStartTime; /* 16 8 */
	CBigEndianValue<double> m_flGPUTotalTime; /* 24 8 */
	CRenderPipelineStats m_Stats; /* 32 120 */
	uint8 m_nType; /* 152 1 */
	char m_szName[255]; /* 153 255 */
};

// <00B1682F> ../public/rendersystem/renderpipelinestats.h:155
void RenderPipelineSample_t::RenderPipelineSample_t()
{
} /* size: 0 */

// <00B16816> ../public/rendersystem/renderpipelinestats.h:155
inline void RenderPipelineSample_t::RenderPipelineSample_t()
{
} /* size: 0 */

// <0013D7B8> ../public/rendersystem/renderpipelinestats.h:174
// member function: 1
// member variables: 18
// struct size: 188
struct RenderPipelineFrameStats_t {
	/* ../public/rendersystem/renderpipelinestats.h:177 */
	void RenderPipelineFrameStats_t(RenderPipelineFrameStats_t* );
	CBigEndianValue<unsigned int> m_nPresentCounter; /* 0 4 */
	CBigEndianValue<long long unsigned int> m_nSwapChainID; /* 4 8 */
	char m_szSwapChainName[64]; /* 12 64 */
	CBigEndianValue<unsigned int> m_nUniqueBoundVBCount; /* 76 4 */
	CBigEndianValue<unsigned int> m_nBoundVBMemory; /* 80 4 */
	CBigEndianValue<unsigned int> m_nUniqueBoundIBCount; /* 84 4 */
	CBigEndianValue<unsigned int> m_nBoundIBMemory; /* 88 4 */
	CBigEndianValue<unsigned int> m_nUniqueBoundCBCount; /* 92 4 */
	CBigEndianValue<unsigned int> m_nBoundCBMemory; /* 96 4 */
	CBigEndianValue<unsigned int> m_nFallbackTexturePoolSize; /* 100 4 */
	CBigEndianValue<unsigned int> m_nUniqueBoundTextureCount; /* 104 4 */
	CBigEndianValue<unsigned int> m_nBoundTextureMemory; /* 108 4 */
	CBigEndianValue<unsigned int> m_nBoundTextureSizeHistogram[16]; /* 112 64 */
	CBigEndianValue<unsigned int> m_nNumSamples; /* 176 4 */
	CBigEndianValue<unsigned int> m_nInstanceID; /* 180 4 */
	bool m_bHasWorkingSetStats; /* 184 1 */
	bool m_bD3DXboxInstrumented; /* 185 1 */
	uint8 m_nUnused[2]; /* 186 2 */
} __attribute__((__packed__));

// <0021A0D4> ../public/rendersystem/renderpipelinestats.h:174
// member function: 1
// member variables: 18
// struct size: 188
struct RenderPipelineFrameStats_t {
	/* ../public/rendersystem/renderpipelinestats.h:181 */
	enum {
		NAME_BUF_SIZE = 64,
	};
	/* ../public/rendersystem/renderpipelinestats.h:177 */
	void RenderPipelineFrameStats_t(RenderPipelineFrameStats_t* );
	CBigEndianValue<unsigned int> m_nPresentCounter; /* 0 4 */
	CBigEndianValue<long long unsigned int> m_nSwapChainID; /* 4 8 */
	char m_szSwapChainName[64]; /* 12 64 */
	CBigEndianValue<unsigned int> m_nUniqueBoundVBCount; /* 76 4 */
	CBigEndianValue<unsigned int> m_nBoundVBMemory; /* 80 4 */
	CBigEndianValue<unsigned int> m_nUniqueBoundIBCount; /* 84 4 */
	CBigEndianValue<unsigned int> m_nBoundIBMemory; /* 88 4 */
	CBigEndianValue<unsigned int> m_nUniqueBoundCBCount; /* 92 4 */
	CBigEndianValue<unsigned int> m_nBoundCBMemory; /* 96 4 */
	CBigEndianValue<unsigned int> m_nFallbackTexturePoolSize; /* 100 4 */
	CBigEndianValue<unsigned int> m_nUniqueBoundTextureCount; /* 104 4 */
	CBigEndianValue<unsigned int> m_nBoundTextureMemory; /* 108 4 */
	CBigEndianValue<unsigned int> m_nBoundTextureSizeHistogram[16]; /* 112 64 */
	CBigEndianValue<unsigned int> m_nNumSamples; /* 176 4 */
	CBigEndianValue<unsigned int> m_nInstanceID; /* 180 4 */
	bool m_bHasWorkingSetStats; /* 184 1 */
	bool m_bD3DXboxInstrumented; /* 185 1 */
	uint8 m_nUnused[2]; /* 186 2 */
} __attribute__((__packed__));

// <00B167FF> ../public/rendersystem/renderpipelinestats.h:177
void RenderPipelineFrameStats_t::RenderPipelineFrameStats_t()
{
} /* size: 0 */

// <00B167E6> ../public/rendersystem/renderpipelinestats.h:177
inline void RenderPipelineFrameStats_t::RenderPipelineFrameStats_t()
{
} /* size: 0 */

// <0013D943> ../public/rendersystem/renderpipelinestats.h:218
// member variables: 2
// struct size: 12
struct RenderPipelineStatsCmd_t {
	CBigEndianValue<unsigned int> m_nType; /* 0 4 */
	CBigEndianValue<long long unsigned int> m_nData; /* 4 8 */
} __attribute__((__packed__));

// <0013D986> ../public/rendersystem/renderpipelinestats.h:228
// member functions: 6
// member variables: 2
// class size: 200
class CRenderPipelineFrameStats {
	/* ../public/rendersystem/renderpipelinestats.h:231 */
	void CRenderPipelineFrameStats(CRenderPipelineFrameStats* );
	/* ../public/rendersystem/renderpipelinestats.h:233 */
	void Clear(CRenderPipelineFrameStats* );
	/* ../public/rendersystem/renderpipelinestats.h:235 */
	bool IsValid(const CRenderPipelineFrameStats* );
	RenderPipelineFrameStats_t m_Stats; /* 0 188 */
	RenderPipelineSampleVector_t * m_pSamples; /* 192 8 */
	void CRenderPipelineFrameStats(class CRenderPipelineFrameStats *); /* linkage=_ZN25CRenderPipelineFrameStatsC4Ev */
	void Clear(class CRenderPipelineFrameStats *); /* linkage=_ZN25CRenderPipelineFrameStats5ClearEv */
	bool IsValid(const class CRenderPipelineFrameStats  *); /* linkage=_ZNK25CRenderPipelineFrameStats7IsValidEv */
};

// <00B167CF> ../public/rendersystem/renderpipelinestats.h:231
void CRenderPipelineFrameStats::CRenderPipelineFrameStats()
{
} /* size: 0 */

// <00B167B6> ../public/rendersystem/renderpipelinestats.h:231
inline void CRenderPipelineFrameStats::CRenderPipelineFrameStats()
{
} /* size: 0 */

// <00B1679D> ../public/rendersystem/renderpipelinestats.h:233
inline void CRenderPipelineFrameStats::Clear()
{
} /* size: 0 */

// <002ED2AB> ../public/rendersystem/renderpipelinestats.h:258
// member function: 1
// member variables: 11
// struct size: 18
struct RenderPipelineStatsTextureInfo_t {
	/* ../public/rendersystem/renderpipelinestats.h:260 */
	void RenderPipelineStatsTextureInfo_t(RenderPipelineStatsTextureInfo_t* );
	CBigEndianValue<short unsigned int> m_nDiskWidth; /* 0 2 */
	CBigEndianValue<short unsigned int> m_nDiskHeight; /* 2 2 */
	CBigEndianValue<short unsigned int> m_nDiskDepth; /* 4 2 */
	CBigEndianValue<short unsigned int> m_nResidentWidth; /* 6 2 */
	CBigEndianValue<short unsigned int> m_nResidentHeight; /* 8 2 */
	CBigEndianValue<short unsigned int> m_nResidentDepth; /* 10 2 */
	CBigEndianValue<short unsigned int> m_nFlags; /* 12 2 */
	CBigEndianValue<unsigned char> m_nDiskNumMipLevels; /* 14 1 */
	CBigEndianValue<unsigned char> m_nResidentNumMipLevels; /* 15 1 */
	CBigEndianValue<unsigned char> m_nMultisampleType; /* 16 1 */
	CBigEndianValue<signed char> m_nImageFormat; /* 17 1 */
};

// <003430E8> ../public/rendersystem/renderpipelinestats.h:260
void RenderPipelineStatsTextureInfo_t::RenderPipelineStatsTextureInfo_t()
{
} /* size: 0 */

// <003430CF> ../public/rendersystem/renderpipelinestats.h:260
inline void RenderPipelineStatsTextureInfo_t::RenderPipelineStatsTextureInfo_t()
{
} /* size: 0 */

// <0013DC55> ../public/rendersystem/renderpipelinestats.h:283
// member function: 1
// member variables: 5
// struct size: 15
struct RenderPipelineStatsBufferInfo_t {
	/* ../public/rendersystem/renderpipelinestats.h:285 */
	void RenderPipelineStatsBufferInfo_t(RenderPipelineStatsBufferInfo_t* );
	CBigEndianValue<unsigned char> m_nType; /* 0 1 */
	CBigEndianValue<short unsigned int> m_nElementSize; /* 1 2 */
	CBigEndianValue<unsigned int> m_nTotalElementCount; /* 3 4 */
	CBigEndianValue<unsigned int> m_nUsedElementCount; /* 7 4 */
	CBigEndianValue<unsigned int> m_nBufferSize; /* 11 4 */
} __attribute__((__packed__));

// <001AC187> ../public/rendersystem/renderpipelinestats.h:285
void RenderPipelineStatsBufferInfo_t::RenderPipelineStatsBufferInfo_t()
{
} /* size: 0 */

// <001AC16E> ../public/rendersystem/renderpipelinestats.h:285
inline void RenderPipelineStatsBufferInfo_t::RenderPipelineStatsBufferInfo_t()
{
} /* size: 0 */


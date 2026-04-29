
//
// rendersystem/texturestreaminghelper.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 7
//	class: 1
//	structs: 2
//

// <00389ED2> rendersystem/texturestreaminghelper.h:9
// member variables: 7
// struct size: 12
struct TextureStreamingPriorityInfo_t {
	/* rendersystem/texturestreaminghelper.h:13 */
	union {
		float32 m_flLogDist; /* 0 4 */
		float32 m_flDimDelta; /* 0 4 */
	};
	CTextureInfoId m_texId; /* 0 4 */
	union {
		float32 m_flLogDist; /* 4 4 */
		float32 m_flDimDelta; /* 4 4 */
	}; /* 4 4 */
	uint32 m_nTargetMipCount:16; /* 8: 0 4 */
	uint32 m_nTextureStreamingPriority:8; /* 8:16 4 */
	uint32 m_bIsPinned:1; /* 8:24 4 */
	uint32 m_bDestroyTextureIfNeeded:1; /* 8:25 4 */
	uint32 m_bTextureDestructionAlreadyCounted:1; /* 8:26 4 */
};

// <003A36E9> rendersystem/texturestreaminghelper.h:29
void BuildStreamableTextureListState_t::~BuildStreamableTextureListState_t()
{
} /* size: 0 */

// <003A36CC> rendersystem/texturestreaminghelper.h:29
inline void BuildStreamableTextureListState_t::~BuildStreamableTextureListState_t()
{
} /* size: 0 */

// <00389F80> rendersystem/texturestreaminghelper.h:29
// member functions: 7
// member variables: 12
// struct size: 96
struct BuildStreamableTextureListState_t {
	/* rendersystem/texturestreaminghelper.h:34 */
	enum State_t {
		STATE_BUILD_STREAMABLE_TEXTURE_LIST = 0,
		STATE_SORT_LIST = 1,
		STATE_SATISFY_MEMORY_CONSTRAINTS_AND_STREAM = 2,
	};
	/* rendersystem/texturestreaminghelper.h:31 */
	void BuildStreamableTextureListState_t(BuildStreamableTextureListState_t* , const BuildStreamableTextureListState_t& );
	/* rendersystem/texturestreaminghelper.h:32 */
	BuildStreamableTextureListState_t& operator=(BuildStreamableTextureListState_t* , const BuildStreamableTextureListState_t& );
	CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> > textures; /* 0 32 */
	uint64 nRequiredStreamableTextureMemory; /* 32 8 */
	uint64 nRequiredStreamableTextureMemoryWithoutEvictions; /* 40 8 */
	uint64 nAvailableStreamingTextureMemory; /* 48 8 */
	uint64 nAllTextureMemory; /* 56 8 */
	uint64 nStreamableTextureMemory; /* 64 8 */
	int nTexturesToStreamIn; /* 72 4 */
	int nTexturesToStreamOut; /* 76 4 */
	int nTexturesKicked; /* 80 4 */
	int nNextTextureToStreamIdx; /* 84 4 */
	State_t nCurrentState; /* 88 4 */
	CTextureInfoId nextTextureToProcess; /* 92 4 */
	/* rendersystem/texturestreaminghelper.h:54 */
	void BuildStreamableTextureListState_t(BuildStreamableTextureListState_t* );
	/* rendersystem/texturestreaminghelper.h:56 */
	void Reset(BuildStreamableTextureListState_t* );
	/* rendersystem/texturestreaminghelper.h:73 */
	void AddRequest(BuildStreamableTextureListState_t* , const TextureStreamingPriorityInfo_t& );
	/* rendersystem/texturestreaminghelper.h:93 */
	bool RemoveTexture(BuildStreamableTextureListState_t* , const CTextureInfoId& );
	void ~BuildStreamableTextureListState_t(BuildStreamableTextureListState_t* );
};

// <003A3B4D> rendersystem/texturestreaminghelper.h:54
void BuildStreamableTextureListState_t::BuildStreamableTextureListState_t()
{
} /* size: 0 */

// <003A3B34> rendersystem/texturestreaminghelper.h:54
inline void BuildStreamableTextureListState_t::BuildStreamableTextureListState_t()
{
} /* size: 0 */

// <003A3B1B> rendersystem/texturestreaminghelper.h:56
inline void BuildStreamableTextureListState_t::Reset()
{
} /* size: 0 */

// <003A3AF6> rendersystem/texturestreaminghelper.h:73
inline void BuildStreamableTextureListState_t::AddRequest(const TextureStreamingPriorityInfo_t& newEntry)
{
} /* size: 0 */

// <003A39E8> rendersystem/texturestreaminghelper.h:93
// variables: 2
inline void BuildStreamableTextureListState_t::RemoveTexture(const CTextureInfoId& id)
{
	 findTexture; // 95
	const int  nIndex; // 99
} /* size: 0, variables: 2 */

// <0038B8C1> rendersystem/texturestreaminghelper.h:119
// member functions: 36
// member variables: 12
// class size: 352
class CTextureStreamingHelper {
	/* rendersystem/texturestreaminghelper.h:171 */
	enum OversubcriptionState_t {
		WITHIN_BUDGET = 0,
		OVER_BUDGET = 1,
	};
	void CTextureStreamingHelper(CTextureStreamingHelper* , const CTextureStreamingHelper& );
	int ()(void) * * _vptr.CTextureStreamingHelper; /* 0 8 */
	/* rendersystem/texturestreaminghelper.cpp:125 */
	void CTextureStreamingHelper(CTextureStreamingHelper* , CTextureManagerBase* );
	/* rendersystem/texturestreaminghelper.cpp:139 */
	virtual void ~CTextureStreamingHelper(CTextureStreamingHelper* );
	/* rendersystem/texturestreaminghelper.cpp:144 */
	void Init(CTextureStreamingHelper* );
	/* rendersystem/texturestreaminghelper.cpp:698 */
	bool BalanceStreamableTextureMemory(CTextureStreamingHelper* );
	/* rendersystem/texturestreaminghelper.cpp:979 */
	void RemoveTextureFromStreamableList(CTextureStreamingHelper* , const CTextureBase* );
	/* rendersystem/texturestreaminghelper.cpp:1100 */
	void UpdateTextureMemoryBudget(CTextureStreamingHelper* );
	/* rendersystem/texturestreaminghelper.cpp:872 */
	void UpdateStats(const CTextureStreamingHelper* );
	/* rendersystem/texturestreaminghelper.cpp:1197 */
	void GetTextureResidencyStats(const CTextureStreamingHelper* , TextureResidencyStats_t& );
protected:
	/* rendersystem/texturestreaminghelper.cpp:155 */
	size_t ComputeTextureSpecificationFromMipDelta(const CTextureStreamingHelper* , const CTextureBase* , int, TextureSpecification_t* );
	/* rendersystem/texturestreaminghelper.cpp:876 */
	void StreamInTextures(CTextureStreamingHelper* , BuildStreamableTextureListState_t& );
	/* rendersystem/texturestreaminghelper.cpp:183 */
	void IssueTextureLoadRequest(CTextureStreamingHelper* , CTextureBase* , const TextureSpecification_t& );
	/* rendersystem/texturestreaminghelper.cpp:231 */
	uint64 LoadExplicitlyRequestedTextures(CTextureStreamingHelper* );
	/* rendersystem/texturestreaminghelper.cpp:602 */
	void SatisfyTextureMemoryConstraints(CTextureStreamingHelper* , CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >& , int64, uint64, int* , int* );
	/* rendersystem/texturestreaminghelper.cpp:342 */
	bool BuildStreamableTextureList(CTextureStreamingHelper* , BuildStreamableTextureListState_t* );
	/* rendersystem/texturestreaminghelper.cpp:1091 */
	bool IsTextureStreamingTimeSliced(const CTextureStreamingHelper* );
	/* rendersystem/texturestreaminghelper.cpp:996 */
	void RemoveMipLevelsForTextures(CTextureStreamingHelper* , const CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >& , uint64, int, float, uint64, int& , int& , uint64& );
	/* rendersystem/texturestreaminghelper.cpp:811 */
	void UpdateRequestedResolutionBias(CTextureStreamingHelper* );
	CTextureManagerBase * m_pTextureManager; /* 8 8 */
	float64 m_flPrevFrameTime; /* 16 8 */
	BuildStreamableTextureListState_t m_buildStreamableTextureListState; /* 24 96 */
	BuildStreamableTextureListState_t m_textureListToStream; /* 120 96 */
	double m_flLastTextureBudgetUpdateTime; /* 216 8 */
	uint64_t m_nLastHeapBudget; /* 224 8 */
	uint64_t m_nLastHeapUsage; /* 232 8 */
	OversubcriptionState_t m_eOversubscriptionState; /* 240 4 */
	OversubcriptionState_t m_ePrevOversubscriptionState; /* 244 4 */
	double m_flLastRequestedResolutionBiasTime; /* 248 8 */
	TextureResidencyStats_t m_residencyStats; /* 256 96 */
	void CTextureStreamingHelper(class CTextureStreamingHelper *, const class CTextureStreamingHelper  &); /* linkage=_ZN23CTextureStreamingHelperC4ERKS_ */
	void CTextureStreamingHelper(class CTextureStreamingHelper *, class CTextureManagerBase *); /* linkage=_ZN23CTextureStreamingHelperC4EP19CTextureManagerBase */
	virtual void ~CTextureStreamingHelper(class CTextureStreamingHelper *); /* linkage=_ZN23CTextureStreamingHelperD4Ev */
	void Init(class CTextureStreamingHelper *); /* linkage=_ZN23CTextureStreamingHelper4InitEv */
	bool BalanceStreamableTextureMemory(class CTextureStreamingHelper *); /* linkage=_ZN23CTextureStreamingHelper30BalanceStreamableTextureMemoryEv */
	void RemoveTextureFromStreamableList(class CTextureStreamingHelper *, const class CTextureBase  *); /* linkage=_ZN23CTextureStreamingHelper31RemoveTextureFromStreamableListEPK12CTextureBase */
	void UpdateTextureMemoryBudget(class CTextureStreamingHelper *); /* linkage=_ZN23CTextureStreamingHelper25UpdateTextureMemoryBudgetEv */
	void UpdateStats(const class CTextureStreamingHelper  *); /* linkage=_ZNK23CTextureStreamingHelper11UpdateStatsEv */
	void GetTextureResidencyStats(const class CTextureStreamingHelper  *, class TextureResidencyStats_t &); /* linkage=_ZNK23CTextureStreamingHelper24GetTextureResidencyStatsER23TextureResidencyStats_t */
	size_t ComputeTextureSpecificationFromMipDelta(const class CTextureStreamingHelper  *, const class CTextureBase  *, int, class TextureSpecification_t *); /* linkage=_ZNK23CTextureStreamingHelper39ComputeTextureSpecificationFromMipDeltaEPK12CTextureBaseiP22TextureSpecification_t */
	/* <3a789c> rendersystem/texturestreaminghelper.cpp:876 */
	void StreamInTextures(class CTextureStreamingHelper *, class BuildStreamableTextureListState_t &); /* linkage=_ZN23CTextureStreamingHelper16StreamInTexturesER33BuildStreamableTextureListState_t */
	void IssueTextureLoadRequest(class CTextureStreamingHelper *, class CTextureBase *, const class TextureSpecification_t  &); /* linkage=_ZN23CTextureStreamingHelper23IssueTextureLoadRequestEP12CTextureBaseRK22TextureSpecification_t */
	uint64 LoadExplicitlyRequestedTextures(class CTextureStreamingHelper *); /* linkage=_ZN23CTextureStreamingHelper31LoadExplicitlyRequestedTexturesEv */
	void SatisfyTextureMemoryConstraints(class CTextureStreamingHelper *, class CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> > &, int64, uint64, int *, int *); /* linkage=_ZN23CTextureStreamingHelper31SatisfyTextureMemoryConstraintsER10CUtlVectorI30TextureStreamingPriorityInfo_t10CUtlMemoryIS1_iEExyPiS6_ */
	bool BuildStreamableTextureList(class CTextureStreamingHelper *, class BuildStreamableTextureListState_t *); /* linkage=_ZN23CTextureStreamingHelper26BuildStreamableTextureListEP33BuildStreamableTextureListState_t */
	/* <3a5cf0> rendersystem/texturestreaminghelper.cpp:1091 */
	bool IsTextureStreamingTimeSliced(const class CTextureStreamingHelper  *); /* linkage=_ZNK23CTextureStreamingHelper28IsTextureStreamingTimeSlicedEv */
	void RemoveMipLevelsForTextures(class CTextureStreamingHelper *, const class CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >  &, uint64, int, float, uint64, int &, int &, uint64 &); /* linkage=_ZN23CTextureStreamingHelper26RemoveMipLevelsForTexturesERK10CUtlVectorI30TextureStreamingPriorityInfo_t10CUtlMemoryIS1_iEEyifyRiS7_Ry */
	/* <3a5ae9> rendersystem/texturestreaminghelper.cpp:811 */
	void UpdateRequestedResolutionBias(class CTextureStreamingHelper *); /* linkage=_ZN23CTextureStreamingHelper29UpdateRequestedResolutionBiasEv */
};


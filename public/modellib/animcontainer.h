
//
// public/modellib/animcontainer.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 48
//	classes: 8
//	structs: 14
//

// <04A5B6C4> ../public/modellib/animcontainer.h:25
// member functions: 12
// member variables: 6
// class size: 168
class CAnimDecodeSwizzle {
	/* ../public/modellib/animcontainer.h:28 */
	void CAnimDecodeSwizzle(CAnimDecodeSwizzle* );
	/* ../public/modellib/animcontainer.h:31 */
	void CAnimDecodeSwizzle(CAnimDecodeSwizzle* , const CAnimKeyData* );
	/* ../public/modellib/animcontainer.h:34 */
	void ~CAnimDecodeSwizzle(CAnimDecodeSwizzle* );
	/* ../public/modellib/animcontainer.h:38 */
	const CAnimKeyData* GetAnimationKeyResourceData(const CAnimDecodeSwizzle* );
	/* ../public/modellib/animcontainer.h:50 */
	int GetNumIKChains(const CAnimDecodeSwizzle* );
	/* ../public/modellib/animcontainer.h:55 */
	const CIKChainDescription* GetIKChain(const CAnimDecodeSwizzle* , int);
	const class CAnimKeyData * m_pAnimKey; /* 0 8 */
	CUtlVector<int, CUtlMemory<int, int> > m_masterChannel; /* 8 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_masterElement; /* 40 32 */
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > m_missingElement; /* 72 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_localElementMask; /* 104 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_elementRequestIndexToLocalRequestMask; /* 136 32 */
	void CAnimDecodeSwizzle(class CAnimDecodeSwizzle *); /* linkage=_ZN18CAnimDecodeSwizzleC4Ev */
	void CAnimDecodeSwizzle(class CAnimDecodeSwizzle *, const class CAnimKeyData  *); /* linkage=_ZN18CAnimDecodeSwizzleC4EPK12CAnimKeyData */
	void ~CAnimDecodeSwizzle(class CAnimDecodeSwizzle *); /* linkage=_ZN18CAnimDecodeSwizzleD4Ev */
	const class CAnimKeyData  * GetAnimationKeyResourceData(const class CAnimDecodeSwizzle  *); /* linkage=_ZNK18CAnimDecodeSwizzle27GetAnimationKeyResourceDataEv */
	int GetNumIKChains(const class CAnimDecodeSwizzle  *); /* linkage=_ZNK18CAnimDecodeSwizzle14GetNumIKChainsEv */
	const class CIKChainDescription  * GetIKChain(const class CAnimDecodeSwizzle  *, int); /* linkage=_ZNK18CAnimDecodeSwizzle10GetIKChainEi */
};

// <00D190B3> ../public/modellib/animcontainer.h:28
void CAnimDecodeSwizzle::CAnimDecodeSwizzle()
{
} /* size: 0 */

// <00D1909A> ../public/modellib/animcontainer.h:28
inline void CAnimDecodeSwizzle::CAnimDecodeSwizzle()
{
} /* size: 0 */

// <00D19083> ../public/modellib/animcontainer.h:34
void CAnimDecodeSwizzle::~CAnimDecodeSwizzle()
{
} /* size: 0 */

// <00D1906A> ../public/modellib/animcontainer.h:34
inline void CAnimDecodeSwizzle::~CAnimDecodeSwizzle()
{
} /* size: 0 */

// <04A5B813> ../public/modellib/animcontainer.h:73
// member functions: 8
// member variables: 3
// class size: 24
class CAnimRetarget {
	/* ../public/modellib/animcontainer.h:76 */
	void CAnimRetarget(CAnimRetarget* );
	/* ../public/modellib/animcontainer.h:79 */
	void ~CAnimRetarget(CAnimRetarget* );
	CUtlString m_RetargetName; /* 0 8 */
	const class CRetargetBiped * m_pRetarget; /* 8 8 */
	/* ../public/modellib/animcontainer.h:84 */
	float GetXYMovementScale(const CAnimRetarget* );
	/* ../public/modellib/animcontainer.h:85 */
	void SetXYMovementScale(CAnimRetarget* , float);
private:
	float m_flXYMovementScale; /* 16 4 */
	void CAnimRetarget(class CAnimRetarget *); /* linkage=_ZN13CAnimRetargetC4Ev */
	void ~CAnimRetarget(class CAnimRetarget *); /* linkage=_ZN13CAnimRetargetD4Ev */
	float GetXYMovementScale(const class CAnimRetarget  *); /* linkage=_ZNK13CAnimRetarget18GetXYMovementScaleEv */
	void SetXYMovementScale(class CAnimRetarget *, float); /* linkage=_ZN13CAnimRetarget18SetXYMovementScaleEf */
};

// <00D19053> ../public/modellib/animcontainer.h:76
void CAnimRetarget::CAnimRetarget()
{
} /* size: 0 */

// <00D1903A> ../public/modellib/animcontainer.h:76
inline void CAnimRetarget::CAnimRetarget()
{
} /* size: 0 */

// <00C13D13> ../public/modellib/animcontainer.h:79
void CAnimRetarget::~CAnimRetarget()
{
} /* size: 0 */

// <04AE07F8> ../public/modellib/animcontainer.h:84
inline void CAnimRetarget::GetXYMovementScale()
{
} /* size: 0 */

// <04A5CF9C> ../public/modellib/animcontainer.h:92
// member functions: 8
// member variables: 8
// class size: 208
class CSeqGroupInstance {
	const class CSequenceGroupResource * m_pSequenceGroup; /* 0 8 */
	/* ../public/modellib/animcontainer.h:97 */
	const CSequenceGroupResource* GetCSequenceGroupResource(const CSeqGroupInstance* );
	/* ../public/modellib/animcontainer.h:102 */
	const CSequenceGroupData* GetSequenceGroupResourceData(const CSeqGroupInstance* );
	/* ../public/modellib/animcontainer.h:111 */
	void CSeqGroupInstance(CSeqGroupInstance* );
	/* ../public/modellib/animcontainer.h:114 */
	void ~CSeqGroupInstance(CSeqGroupInstance* );
	CUtlVector<HSequence, CUtlMemory<HSequence, int> > m_localReference; /* 8 32 */
	CUtlVector<int, CUtlMemory<int, int> > masterAttachment; /* 40 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_masterPose; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > masterNode; /* 104 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_masterWeightlist; /* 136 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_masterBone; /* 168 32 */
	int m_nParentAnimGroup; /* 200 4 */
	const class CSequenceGroupResource  * GetCSequenceGroupResource(const class CSeqGroupInstance  *); /* linkage=_ZNK17CSeqGroupInstance25GetCSequenceGroupResourceEv */
	const class CSequenceGroupData  * GetSequenceGroupResourceData(const class CSeqGroupInstance  *); /* linkage=_ZNK17CSeqGroupInstance28GetSequenceGroupResourceDataEv */
	void CSeqGroupInstance(class CSeqGroupInstance *); /* linkage=_ZN17CSeqGroupInstanceC4Ev */
	void ~CSeqGroupInstance(class CSeqGroupInstance *); /* linkage=_ZN17CSeqGroupInstanceD4Ev */
};

// <00D19021> ../public/modellib/animcontainer.h:102
inline void CSeqGroupInstance::GetSequenceGroupResourceData()
{
} /* size: 0 */

// <00D18FD6> ../public/modellib/animcontainer.h:111
void CSeqGroupInstance::CSeqGroupInstance()
{
} /* size: 0 */

// <00D18FBD> ../public/modellib/animcontainer.h:111
inline void CSeqGroupInstance::CSeqGroupInstance()
{
} /* size: 0 */

// <00D18FA6> ../public/modellib/animcontainer.h:114
void CSeqGroupInstance::~CSeqGroupInstance()
{
} /* size: 0 */

// <00D18F8D> ../public/modellib/animcontainer.h:114
inline void CSeqGroupInstance::~CSeqGroupInstance()
{
} /* size: 0 */

// <04A5D0B2> ../public/modellib/animcontainer.h:131
// member variables: 4
// struct size: 16
struct AnimInstanceMap_t {
	int m_nAnimGroup; /* 0 4 */
	int m_nLocalIndex; /* 4 4 */
	int m_nHAnimIndex; /* 8 4 */
	int m_nSwizzleIndex; /* 12 4 */
};

// <00B7958D> ../public/modellib/animcontainer.h:141
// member variables: 2
// struct size: 8
struct SeqInstanceMap_t {
	int m_nGroup; /* 0 4 */
	int m_nIndex; /* 4 4 */
};

// <04A5D101> ../public/modellib/animcontainer.h:150
// member variables: 3
// struct size: 12
struct ChannelElementMap_t {
	int m_nIndex; /* 0 4 */
	int m_nChannel; /* 4 4 */
	uint32 m_lodUsageMask; /* 8 4 */
};

// <04A5D13C> ../public/modellib/animcontainer.h:158
// member variables: 2
// struct size: 16
struct UserDataElementMap_t : public ChannelElementMap_t {
public:
	/* struct ChannelElementMap_t <ancestor>; */ /* 0 12 */
	int m_nOffset; /* 12 4 */
};

// <04A5D167> ../public/modellib/animcontainer.h:168
// member variables: 2
// struct size: 16
struct UserDataElement_t : public ChannelElementMap_t {
public:
	/* struct ChannelElementMap_t <ancestor>; */ /* 0 12 */
	fieldtype_t m_nType; /* 12 1 */
};

// <04A5D192> ../public/modellib/animcontainer.h:186
// member functions: 4
// member variables: 10
// class size: 72
class CAnimDataChannel {
	/* ../public/modellib/animcontainer.h:190 */
	void CAnimDataChannel(CAnimDataChannel* );
	/* ../public/modellib/animcontainer.h:191 */
	void ~CAnimDataChannel(CAnimDataChannel* );
	int nAnimGroupIndex; /* 0 4 */
	int m_nSwizzleIndex; /* 4 4 */
	int m_nChannel; /* 8 4 */
	int m_nRetargetIndex; /* 12 4 */
	fieldtype_t m_nType; /* 16 1 */
	int m_nElementSize; /* 20 4 */
	int m_nFlags; /* 24 4 */
	int m_nTotalCount; /* 28 4 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_elementRequestMask; /* 32 32 */
	void * m_defaultData; /* 64 8 */
	void CAnimDataChannel(class CAnimDataChannel *); /* linkage=_ZN16CAnimDataChannelC4Ev */
	void ~CAnimDataChannel(class CAnimDataChannel *); /* linkage=_ZN16CAnimDataChannelD4Ev */
};

// <00C4A2F7> ../public/modellib/animcontainer.h:214
void ElementRequestPattern_t::ElementRequestPattern_t()
{
} /* size: 0 */

// <00C4A2DB> ../public/modellib/animcontainer.h:214
inline void ElementRequestPattern_t::ElementRequestPattern_t()
{
} /* size: 0 */

// <00C34EED> ../public/modellib/animcontainer.h:214
void ElementRequestPattern_t::~ElementRequestPattern_t()
{
} /* size: 0 */

// <00C34ED1> ../public/modellib/animcontainer.h:214
inline void ElementRequestPattern_t::~ElementRequestPattern_t()
{
} /* size: 0 */

// <00B79742> ../public/modellib/animcontainer.h:214
// member functions: 2
// member variables: 6
// struct size: 96
struct ElementRequestPattern_t {
	BoneFlags_t m_nBoneFlags; /* 0 4 */
	CVarBitVec m_bBoneUsed; /* 8 24 */
	CVarBitVec m_bBoneUnused; /* 32 24 */
	bool m_bMorphData; /* 56 1 */
	bool m_bUserData; /* 57 1 */
	CUtlVector<int, CUtlMemory<int, int> > m_boneList; /* 64 32 */
	void ~ElementRequestPattern_t(ElementRequestPattern_t* );
	void ElementRequestPattern_t(ElementRequestPattern_t* );
};

// <00C4A06F> ../public/modellib/animcontainer.h:229
void RequestElementWeights_t::~RequestElementWeights_t()
{
} /* size: 0 */

// <00C4A053> ../public/modellib/animcontainer.h:229
inline void RequestElementWeights_t::~RequestElementWeights_t()
{
} /* size: 0 */

// <00C36532> ../public/modellib/animcontainer.h:229
void RequestElementWeights_t::RequestElementWeights_t()
{
} /* size: 0 */

// <00C36516> ../public/modellib/animcontainer.h:229
inline void RequestElementWeights_t::RequestElementWeights_t()
{
} /* size: 0 */

// <04A5D27B> ../public/modellib/animcontainer.h:229
// member variables: 3
// struct size: 72
struct RequestElementWeights_t {
	uint32 m_nFlags; /* 0 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_nIndexArray; /* 8 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flWeightArray; /* 40 32 */
};

// <00B797E1> ../public/modellib/animcontainer.h:229
// member functions: 2
// member variables: 3
// struct size: 72
struct RequestElementWeights_t {
	uint32 m_nFlags; /* 0 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_nIndexArray; /* 8 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flWeightArray; /* 40 32 */
	void RequestElementWeights_t(RequestElementWeights_t* );
	void ~RequestElementWeights_t(RequestElementWeights_t* );
};

// <00C5C881> ../public/modellib/animcontainer.h:236
void ChannelElementWeights_t::ChannelElementWeights_t()
{
} /* size: 0 */

// <00C5C865> ../public/modellib/animcontainer.h:236
inline void ChannelElementWeights_t::ChannelElementWeights_t()
{
} /* size: 0 */

// <00C28E4B> ../public/modellib/animcontainer.h:236
void ChannelElementWeights_t::~ChannelElementWeights_t()
{
} /* size: 0 */

// <00C28E2F> ../public/modellib/animcontainer.h:236
inline void ChannelElementWeights_t::~ChannelElementWeights_t()
{
} /* size: 0 */

// <04A5D2BB> ../public/modellib/animcontainer.h:236
// member variables: 2
// struct size: 40
struct ChannelElementWeights_t {
	int m_nChannel; /* 0 4 */
	CUtlVector<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> > m_pattern; /* 8 32 */
};

// <00B79853> ../public/modellib/animcontainer.h:236
// member functions: 2
// member variables: 2
// struct size: 40
struct ChannelElementWeights_t {
	/* ../public/modellib/animcontainer.h:239 */
	enum FlagEnum {
		FLAG_ALLELEMENTS = 1,
		FLAG_ALLONES = 2,
	};
	int m_nChannel; /* 0 4 */
	CUtlVector<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> > m_pattern; /* 8 32 */
	void ~ChannelElementWeights_t(ChannelElementWeights_t* );
	void ChannelElementWeights_t(ChannelElementWeights_t* );
};

// <016F0720> ../public/modellib/animcontainer.h:236
// member variables: 2
// struct size: 40
struct ChannelElementWeights_t {
	/* ../public/modellib/animcontainer.h:239 */
	enum FlagEnum {
		FLAG_ALLELEMENTS = 1,
		FLAG_ALLONES = 2,
	};
	int m_nChannel; /* 0 4 */
	CUtlVector<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> > m_pattern; /* 8 32 */
};

// <00C5C3C3> ../public/modellib/animcontainer.h:249
void ChannelWeightlist_t::ChannelWeightlist_t()
{
} /* size: 0 */

// <00C5C3A7> ../public/modellib/animcontainer.h:249
inline void ChannelWeightlist_t::ChannelWeightlist_t()
{
} /* size: 0 */

// <00C34FB8> ../public/modellib/animcontainer.h:249
void ChannelWeightlist_t::~ChannelWeightlist_t()
{
} /* size: 0 */

// <00C34F9C> ../public/modellib/animcontainer.h:249
inline void ChannelWeightlist_t::~ChannelWeightlist_t()
{
} /* size: 0 */

// <04A5E99E> ../public/modellib/animcontainer.h:249
// member variables: 6
// struct size: 144
struct ChannelWeightlist_t {
	/* ../public/modellib/animcontainer.h:252 */
	struct IndexWeightPair_t {
		int m_nIndex; /* 0 4 */
		float m_flWeight; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	CUtlString m_name; /* 0 8 */
	CUtlVector<float, CUtlMemory<float, int> > m_linearBoneWeightArray; /* 8 32 */
	CUtlVector<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> > m_nonZeroBoneWeightList; /* 40 32 */
	float m_flDefaultMorphCtrlWeight; /* 72 4 */
	CUtlVector<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > m_morphCtrlWeightArray; /* 80 32 */
	CUtlVector<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> > m_channelWeightArray; /* 112 32 */
};

// <00B7AFF8> ../public/modellib/animcontainer.h:249
// member functions: 3
// member variables: 6
// struct size: 144
struct ChannelWeightlist_t {
	/* ../public/modellib/animcontainer.h:252 */
	struct IndexWeightPair_t {
		int m_nIndex; /* 0 4 */
		float m_flWeight; /* 4 4 */
		void IndexWeightPair_t(IndexWeightPair_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CUtlString m_name; /* 0 8 */
	CUtlVector<float, CUtlMemory<float, int> > m_linearBoneWeightArray; /* 8 32 */
	CUtlVector<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int> > m_nonZeroBoneWeightList; /* 40 32 */
	float m_flDefaultMorphCtrlWeight; /* 72 4 */
	CUtlVector<std::pair<LocalFlexController_t, float>, CUtlMemory<std::pair<LocalFlexController_t, float>, int> > m_morphCtrlWeightArray; /* 80 32 */
	CUtlVector<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> > m_channelWeightArray; /* 112 32 */
	void ~ChannelWeightlist_t(ChannelWeightlist_t* );
	void ChannelWeightlist_t(ChannelWeightlist_t* );
};

// <00C49AA4> ../public/modellib/animcontainer.h:252
void IndexWeightPair_t::IndexWeightPair_t()
{
} /* size: 0 */

// <00C49A88> ../public/modellib/animcontainer.h:252
inline void IndexWeightPair_t::IndexWeightPair_t()
{
} /* size: 0 */

// <00B7F695> ../public/modellib/animcontainer.h:272
// member function: 1
// member variables: 3
// struct size: 28
struct AnimBounds_t {
	/* ../public/modellib/animcontainer.h:274 */
	void AnimBounds_t(AnimBounds_t* );
	bool m_bInited; /* 0 1 */
	Vector m_vMeshMin; /* 4 12 */
	Vector m_vMeshMax; /* 16 12 */
};

// <00D18F76> ../public/modellib/animcontainer.h:274
void AnimBounds_t::AnimBounds_t()
{
} /* size: 0 */

// <00D18F5D> ../public/modellib/animcontainer.h:274
inline void AnimBounds_t::AnimBounds_t()
{
} /* size: 0 */

// <00CBBC2B> ../public/modellib/animcontainer.h:284
void CAnimTransitionGraph::~CAnimTransitionGraph()
{
} /* size: 0 */

// <00CBBC0E> ../public/modellib/animcontainer.h:284
inline void CAnimTransitionGraph::~CAnimTransitionGraph()
{
} /* size: 0 */

// <00B7F702> ../public/modellib/animcontainer.h:284
// member functions: 18
// member variables: 3
// class size: 184
class CAnimTransitionGraph {
	/* ../public/modellib/animcontainer.h:287 */
	void CAnimTransitionGraph(CAnimTransitionGraph* );
	/* ../public/modellib/animcontainer.h:289 */
	int16 FindOrAddNode(CAnimTransitionGraph* , const char* );
	/* ../public/modellib/animcontainer.h:290 */
	const char* GetNodeName(const CAnimTransitionGraph* , int16);
	/* ../public/modellib/animcontainer.h:292 */
	void AllocateGraph(CAnimTransitionGraph* );
	/* ../public/modellib/animcontainer.h:293 */
	int NodeCount(const CAnimTransitionGraph* );
	/* ../public/modellib/animcontainer.h:295 */
	int16 GetNodeTransition(const CAnimTransitionGraph* , int16, int16);
	/* ../public/modellib/animcontainer.h:296 */
	void SetTransition(CAnimTransitionGraph* , int16, int16, int16);
	/* ../public/modellib/animcontainer.h:297 */
	void CalcTransitions(CAnimTransitionGraph* );
	CUtlSymbolTable m_xNodeNameTable; /* 0 144 */
	int m_nNodeCount; /* 144 4 */
	CUtlVector<short int, CUtlMemory<short int, int> > m_xNode2DGraph; /* 152 32 */
	void ~CAnimTransitionGraph(CAnimTransitionGraph* );
	void CAnimTransitionGraph(class CAnimTransitionGraph *); /* linkage=_ZN20CAnimTransitionGraphC4Ev */
	/* <d318a2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2730 */
	int16 FindOrAddNode(class CAnimTransitionGraph *, const char  *); /* linkage=_ZN20CAnimTransitionGraph13FindOrAddNodeEPKc */
	/* <d31a31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2755 */
	const char  * GetNodeName(const class CAnimTransitionGraph  *, int16); /* linkage=_ZNK20CAnimTransitionGraph11GetNodeNameEs */
	/* <d31b4e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2765 */
	void AllocateGraph(class CAnimTransitionGraph *); /* linkage=_ZN20CAnimTransitionGraph13AllocateGraphEv */
	/* <d32049> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2782 */
	int NodeCount(const class CAnimTransitionGraph  *); /* linkage=_ZNK20CAnimTransitionGraph9NodeCountEv */
	int16 GetNodeTransition(const class CAnimTransitionGraph  *, int16, int16); /* linkage=_ZNK20CAnimTransitionGraph17GetNodeTransitionEss */
	void SetTransition(class CAnimTransitionGraph *, int16, int16, int16); /* linkage=_ZN20CAnimTransitionGraph13SetTransitionEsss */
	void CalcTransitions(class CAnimTransitionGraph *); /* linkage=_ZN20CAnimTransitionGraph15CalcTransitionsEv */
	void ~CAnimTransitionGraph(class CAnimTransitionGraph *); /* linkage=_ZN20CAnimTransitionGraphD4Ev */
};

// <00C051C8> ../public/modellib/animcontainer.h:307
// member functions: 86
// member variables: 37
// vtable entries: 12
// class size: 1,232
class CAnimContainer {
	void CAnimContainer(CAnimContainer* , const CAnimContainer& );
	int ()(void) * * _vptr.CAnimContainer; /* 0 8 */
	/* ../public/modellib/animcontainer.h:311 */
	virtual bool AppendAnimations(CAnimContainer* , const CModel* , const CAnimationGroupResource** , int);
	/* ../public/modellib/animcontainer.h:313 */
	virtual void PostInitOther(CAnimContainer* , HSequence);
	/* ../public/modellib/animcontainer.h:315 */
	virtual bool GetBounds(CAnimContainer* , int, Vector* , Vector* );
	/* ../public/modellib/animcontainer.h:318 */
	virtual int FindOrAddNode(CAnimContainer* , const char* );
	/* ../public/modellib/animcontainer.h:319 */
	virtual const char* GetNodeName(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:320 */
	virtual int GetNodeTransition(const CAnimContainer* , int, int);
	/* ../public/modellib/animcontainer.h:323 */
	virtual HAnimationGraph GetAnimationGraph(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:326 */
	virtual void SetAnimationGraph(CAnimContainer* , HAnimationGraph);
	/* ../public/modellib/animcontainer.h:330 */
	typedef struct CUtlHashDict<short int, true, false> CAnimTable;
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/modellib/animcontainer.h:335 */
	virtual CAnimTable* GetAnimTable(CAnimContainer* );
	/* ../public/modellib/animcontainer.h:331 */
	typedef struct CUtlHashDict<short int, true, false> CSequenceTable;
	/* ../public/modellib/animcontainer.h:338 */
	virtual CSequenceTable* GetSequenceTable(CAnimContainer* );
	/* ../public/modellib/animcontainer.h:332 */
	typedef struct CUtlVector<ISequence*, CUtlMemory<ISequence*, int> > CISequenceVector;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/modellib/animcontainer.h:340 */
	virtual CISequenceVector& GetISequenceVector(CAnimContainer* );
	/* ../public/modellib/animcontainer.h:341 */
	virtual const CISequenceVector& GetISequenceVector(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:483 */
	const CAnimationGroupResource* GetAnimGroupResource(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:488 */
	const CAnimationResource* GetAnimResource(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:495 */
	const CAnimDesc* GetAnimdesc(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:347 */
	const CSeqGroupInstance* pSeqGroupInstance(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:348 */
	int GetSeqGroupCount(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:349 */
	void GetSeqGroupInstanceName(const CAnimContainer* , int, CBufferString* );
	/* ../public/modellib/animcontainer.h:350 */
	void GetAnimGroupNameForAnim(const CAnimContainer* , int, CBufferString* );
	/* ../public/modellib/animcontainer.h:351 */
	const CAnimDecodeSwizzle* GetAnimDecodeSwizzle(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:352 */
	const CAnimDataChannelDesc* GetAnimResourceDataChannel(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:353 */
	int GetAnimGroupIndex(const CAnimContainer* , const CAnimationGroupResource* );
	/* ../public/modellib/animcontainer.h:354 */
	bool HasValidAnimation(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:356 */
	const CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >& GetChannelArray(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:357 */
	const CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >& GetBonePosMap(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:358 */
	const CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >& GetBoneQuatMap(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:359 */
	const CUtlVector<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >& GetElementRequestPatternArray(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:361 */
	int GetMorphChannel(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:363 */
	const IIKControlRigDescription* GetIKControlRigDescription(const CAnimContainer* );
	/* ../public/modellib/animcontainer.h:365 */
	const CIKData_t& GetIKData(const CAnimContainer* );
	CUtlVector<const CAnimationGroupResource*, CUtlMemory<const CAnimationGroupResource*, int> > m_AnimGroupArray; /* 8 32 */
	CUtlVector<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> > m_animDecodeSwizzle; /* 40 32 */
	/* ../public/modellib/animcontainer.h:384 */
	const CAnimRetarget* GetAnimRetarget(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:385 */
	const CAnimRetarget* GetAnimGroupRetarget(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:386 */
	const char* GetAnimGroupRetargetName(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:387 */
	bool EncodeAnimGroupBonename(const CAnimContainer* , CUtlString& , const char* , int);
	CUtlVector<ResourceId_t, CUtlMemory<ResourceId_t, int> > m_nAnimGroupResourceId; /* 72 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nParentIndexArray; /* 104 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nRetargetingIndexArray; /* 136 32 */
	CUtlVector<CAnimRetarget, CUtlMemory<CAnimRetarget, int> > m_animRetarget; /* 168 32 */
	CUtlVector<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> > m_anim; /* 200 32 */
	CUtlVector<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> > m_seqGroup; /* 232 32 */
	CUtlVector<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> > m_poseArray; /* 264 32 */
	CUtlHashDict<short int, true, true> m_poseTable; /* 296 48 */
	CAnimTransitionGraph m_animTransitionGraph; /* 344 184 */
	CUtlVector<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> > m_iklock; /* 528 32 */
	CIKData_t m_IKData; /* 560 128 */
	IIKControlRigDescription * m_pIKControlRigDescription; /* 688 8 */
	CUtlVector<HSequence, CUtlMemory<HSequence, int> > m_autoplaySequences; /* 696 32 */
	HAnimationGraphStrong m_hAnimationGraph; /* 728 8 */
	CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> > m_channelArray; /* 736 32 */
	CUtlHashDict<ChannelElementMap_t, true, true> m_elementNameTable; /* 768 48 */
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> > m_bonePosMap; /* 816 32 */
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> > m_boneQuatMap; /* 848 32 */
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> > m_boneScaleMap; /* 880 32 */
	CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> > m_morphControllerMap; /* 912 32 */
	CUtlHashDict<UserDataElement_t, true, false> m_userDataTable; /* 944 48 */
	CUtlVector<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> > m_userDataMap; /* 992 32 */
	int m_nUserDataSize; /* 1024 4 */
	CUtlHashDict<short int, true, false> m_weightlistTable; /* 1032 48 */
	CUtlVector<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> > m_weightlistArray; /* 1080 32 */
	BoneFlags_t m_nActuallyUsedBoneFlags; /* 1112 4 */
	CUtlVector<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> > m_elementRequestPatternArray; /* 1120 32 */
	int m_nRetargetRequestPatternIndex; /* 1152 4 */
	int m_nPosChannel; /* 1156 4 */
	int m_nRotChannel; /* 1160 4 */
	int m_nMorphChannel; /* 1164 4 */
	CUtlVector<AnimBounds_t, CUtlMemory<AnimBounds_t, int> > m_bounds; /* 1168 32 */
	/* ../public/modellib/animcontainer.h:456 */
	float GetXYMovementScaleAnim(const CAnimContainer* , int);
	/* ../public/modellib/animcontainer.h:459 */
	bool GetCachedSequenceAnimResult(CAnimContainer* , CAnimationResult& , HSequence, int);
	/* ../public/modellib/animcontainer.h:460 */
	bool GetCachedAnimationAnimResult(CAnimContainer* , CAnimationResult& , int, int);
	/* ../public/modellib/animcontainer.h:461 */
	bool SetCachedSequenceAnimResult(CAnimContainer* , HSequence, int, const CAnimationResult& );
	/* ../public/modellib/animcontainer.h:462 */
	bool SetCachedAnimationAnimResult(CAnimContainer* , int, int, const CAnimationResult& );
	/* ../public/modellib/animcontainer.h:465 */
	const CModel* GetModel(const CAnimContainer* );
	const class CModel * m_pModel; /* 1200 8 */
	CVarBitVec m_bIsPrecached; /* 1208 24 */
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2887 */
	void CAnimContainer(CAnimContainer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animresource_imp.cpp:2895 */
	virtual void ~CAnimContainer(CAnimContainer* );
	/* <4aef2fb> modellib/model.cpp:1733 */
	float GetXYMovementScaleAnim(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer22GetXYMovementScaleAnimEi */
	bool EncodeAnimGroupBonename(const class CAnimContainer  *, class CUtlString &, const char  *, int); /* linkage=_ZNK14CAnimContainer23EncodeAnimGroupBonenameER10CUtlStringPKci */
	/* <4aef1d6> modellib/model.cpp:1714 */
	const char  * GetAnimGroupRetargetName(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer24GetAnimGroupRetargetNameEi */
	/* <4aef0da> modellib/model.cpp:1709 */
	const class CAnimRetarget  * GetAnimGroupRetarget(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer20GetAnimGroupRetargetEi */
	/* <4aeef3e> modellib/model.cpp:1704 */
	const class CAnimRetarget  * GetAnimRetarget(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer15GetAnimRetargetEi */
	int GetAnimGroupIndex(const class CAnimContainer  *, const class CAnimationGroupResource  *); /* linkage=_ZNK14CAnimContainer17GetAnimGroupIndexEPK23CAnimationGroupResource */
	const class CAnimDataChannelDesc  * GetAnimResourceDataChannel(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer26GetAnimResourceDataChannelEi */
	const class CAnimDecodeSwizzle  * GetAnimDecodeSwizzle(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer20GetAnimDecodeSwizzleEi */
	const class CSeqGroupInstance  * pSeqGroupInstance(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer17pSeqGroupInstanceEi */
	const class CAnimDesc  * GetAnimdesc(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer11GetAnimdescEi */
	const class IIKControlRigDescription  * GetIKControlRigDescription(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer26GetIKControlRigDescriptionEv */
	const class CIKData_t  & GetIKData(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer9GetIKDataEv */
	void CAnimContainer(class CAnimContainer *, const class CAnimContainer  &); /* linkage=_ZN14CAnimContainerC4ERKS_ */
	virtual bool AppendAnimations(class CAnimContainer *, const class CModel  *, const class CAnimationGroupResource  * *, int); /* linkage=_ZN14CAnimContainer16AppendAnimationsEPK6CModelPPK23CAnimationGroupResourcei */
	virtual void PostInitOther(class CAnimContainer *, class HSequence); /* linkage=_ZN14CAnimContainer13PostInitOtherE9HSequence */
	virtual bool GetBounds(class CAnimContainer *, int, class Vector *, class Vector *); /* linkage=_ZN14CAnimContainer9GetBoundsEiP6VectorS1_ */
	virtual int FindOrAddNode(class CAnimContainer *, const char  *); /* linkage=_ZN14CAnimContainer13FindOrAddNodeEPKc */
	virtual const char  * GetNodeName(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer11GetNodeNameEi */
	virtual int GetNodeTransition(const class CAnimContainer  *, int, int); /* linkage=_ZNK14CAnimContainer17GetNodeTransitionEii */
	virtual HAnimationGraph GetAnimationGraph(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer17GetAnimationGraphEv */
	virtual void SetAnimationGraph(class CAnimContainer *, HAnimationGraph); /* linkage=_ZN14CAnimContainer17SetAnimationGraphE11CWeakHandleI34InfoForResourceTypeIAnimationGraphE */
	virtual CAnimTable * GetAnimTable(class CAnimContainer *); /* linkage=_ZN14CAnimContainer12GetAnimTableEv */
	virtual CSequenceTable * GetSequenceTable(class CAnimContainer *); /* linkage=_ZN14CAnimContainer16GetSequenceTableEv */
	virtual CISequenceVector & GetISequenceVector(class CAnimContainer *); /* linkage=_ZN14CAnimContainer18GetISequenceVectorEv */
	virtual const CISequenceVector  & GetISequenceVector(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer18GetISequenceVectorEv */
	const class CAnimationGroupResource  * GetAnimGroupResource(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer20GetAnimGroupResourceEi */
	const class CAnimationResource  * GetAnimResource(const class CAnimContainer  *, int); /* linkage=_ZNK14CAnimContainer15GetAnimResourceEi */
	int GetSeqGroupCount(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer16GetSeqGroupCountEv */
	void GetSeqGroupInstanceName(const class CAnimContainer  *, int, class CBufferString *); /* linkage=_ZNK14CAnimContainer23GetSeqGroupInstanceNameEiP13CBufferString */
	void GetAnimGroupNameForAnim(const class CAnimContainer  *, int, class CBufferString *); /* linkage=_ZNK14CAnimContainer23GetAnimGroupNameForAnimEiP13CBufferString */
	bool HasValidAnimation(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer17HasValidAnimationEv */
	const class CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >  & GetChannelArray(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer15GetChannelArrayEv */
	const class CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >  & GetBonePosMap(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer13GetBonePosMapEv */
	const class CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >  & GetBoneQuatMap(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer14GetBoneQuatMapEv */
	const class CUtlVector<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >  & GetElementRequestPatternArray(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer29GetElementRequestPatternArrayEv */
	int GetMorphChannel(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer15GetMorphChannelEv */
	bool GetCachedSequenceAnimResult(class CAnimContainer *, class CAnimationResult &, class HSequence, int); /* linkage=_ZN14CAnimContainer27GetCachedSequenceAnimResultER16CAnimationResult9HSequencei */
	bool GetCachedAnimationAnimResult(class CAnimContainer *, class CAnimationResult &, int, int); /* linkage=_ZN14CAnimContainer28GetCachedAnimationAnimResultER16CAnimationResultii */
	bool SetCachedSequenceAnimResult(class CAnimContainer *, class HSequence, int, const class CAnimationResult  &); /* linkage=_ZN14CAnimContainer27SetCachedSequenceAnimResultE9HSequenceiRK16CAnimationResult */
	bool SetCachedAnimationAnimResult(class CAnimContainer *, int, int, const class CAnimationResult  &); /* linkage=_ZN14CAnimContainer28SetCachedAnimationAnimResultEiiRK16CAnimationResult */
	const class CModel  * GetModel(const class CAnimContainer  *); /* linkage=_ZNK14CAnimContainer8GetModelEv */
	void CAnimContainer(class CAnimContainer *); /* linkage=_ZN14CAnimContainerC4Ev */
	virtual void ~CAnimContainer(class CAnimContainer *); /* linkage=_ZN14CAnimContainerD4Ev */
};

// <00D18F44> ../public/modellib/animcontainer.h:348
inline void CAnimContainer::GetSeqGroupCount()
{
} /* size: 0 */

// <0273A9C9> ../public/modellib/animcontainer.h:361
inline void CAnimContainer::GetMorphChannel()
{
} /* size: 0 */

// <04AE07DF> ../public/modellib/animcontainer.h:363
inline void CAnimContainer::GetIKControlRigDescription()
{
} /* size: 0 */

// <01949432> ../public/modellib/animcontainer.h:365
inline void CAnimContainer::GetIKData()
{
} /* size: 0 */

// <00D18F2B> ../public/modellib/animcontainer.h:465
inline void CAnimContainer::GetModel()
{
} /* size: 0 */

// <025DB5C3> ../public/modellib/animcontainer.h:488
// variable: 1
inline void CAnimContainer::GetAnimResource(int nAnimation)
{
	const AnimInstanceMap_t& map; // 490
} /* size: 0, variables: 1 */

// <04AE079F> ../public/modellib/animcontainer.h:495
// variables: 2
inline void CAnimContainer::GetAnimdesc(int nAnimation)
{
	const AnimInstanceMap_t& map; // 497
	const CAnimationResource* pResource; // 498
} /* size: 0, variables: 2 */

// <02739236> ../public/modellib/animcontainer.h:509
void EBoneSetup::EBoneSetup()
{
} /* size: 0 */

// <02739219> ../public/modellib/animcontainer.h:509
inline void EBoneSetup::EBoneSetup()
{
} /* size: 0 */

// <02725E22> ../public/modellib/animcontainer.h:509
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class EBoneSetup {
	void EBoneSetup(EBoneSetup* , EBoneSetup& );
	void EBoneSetup(EBoneSetup* , const EBoneSetup& );
	void EBoneSetup(EBoneSetup* );
	void ~EBoneSetup(EBoneSetup* );
	int ()(void) * * _vptr.EBoneSetup; /* 0 8 */
	/* ../public/modellib/animcontainer.h:528 */
	virtual const CModel* GetCModel(const EBoneSetup* );
	/* ../public/modellib/animcontainer.h:529 */
	virtual float GetPoseParameter(const EBoneSetup* , int);
	/* ../public/modellib/animcontainer.h:530 */
	virtual const float* GetPoseParameterArray(const EBoneSetup* );
	/* ../public/modellib/animcontainer.h:531 */
	virtual float GetRealtime(const EBoneSetup* );
	/* ../public/modellib/animcontainer.h:533 */
	virtual int AllocateResult(EBoneSetup* );
	/* ../public/modellib/animcontainer.h:534 */
	virtual void FreeResult(EBoneSetup* , int);
	void EBoneSetup(class EBoneSetup *, class EBoneSetup &); /* linkage=_ZN10EBoneSetupC4EOS_ */
	void EBoneSetup(class EBoneSetup *, const class EBoneSetup  &); /* linkage=_ZN10EBoneSetupC4ERKS_ */
	void EBoneSetup(class EBoneSetup *); /* linkage=_ZN10EBoneSetupC4Ev */
	void ~EBoneSetup(class EBoneSetup *); /* linkage=_ZN10EBoneSetupD4Ev */
	virtual const class CModel  * GetCModel(const class EBoneSetup  *); /* linkage=_ZNK10EBoneSetup9GetCModelEv */
	virtual float GetPoseParameter(const class EBoneSetup  *, int); /* linkage=_ZNK10EBoneSetup16GetPoseParameterEi */
	virtual const float  * GetPoseParameterArray(const class EBoneSetup  *); /* linkage=_ZNK10EBoneSetup21GetPoseParameterArrayEv */
	virtual float GetRealtime(const class EBoneSetup  *); /* linkage=_ZNK10EBoneSetup11GetRealtimeEv */
	virtual int AllocateResult(class EBoneSetup *); /* linkage=_ZN10EBoneSetup14AllocateResultEv */
	virtual void FreeResult(class EBoneSetup *, int); /* linkage=_ZN10EBoneSetup10FreeResultEi */
};

// <02736F52> ../public/modellib/animcontainer.h:538
inline void CAnimationBucket::operator=(const CAnimationBucket &)
{
} /* size: 0 */

// <02725FD5> ../public/modellib/animcontainer.h:538
// member functions: 52
// member variables: 3
// vtable entries: 17
// class size: 24
class CAnimationBucket {
	CAnimationBucket& operator=(CAnimationBucket* , const CAnimationBucket& );
	int ()(void) * * _vptr.CAnimationBucket; /* 0 8 */
	/* bonesetup/bone_setup.cpp:791 */
	void CAnimationBucket(CAnimationBucket* , EBoneSetup* );
	/* bonesetup/bone_setup.cpp:811 */
	void CAnimationBucket(CAnimationBucket* , const CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:816 */
	void CAnimationBucket(CAnimationBucket* , const CAnimationBucket& );
	/* bonesetup/bone_setup.cpp:821 */
	void CAnimationBucket(CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:805 */
	void Init(CAnimationBucket* , const CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:826 */
	virtual void ~CAnimationBucket(CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:832 */
	void Release(CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:847 */
	virtual void Slerp(CAnimationBucket* , const CAnimationBucket& , int, float);
	/* bonesetup/bone_setup.cpp:852 */
	virtual void Add(CAnimationBucket* , const CAnimationBucket& , int, float);
	/* bonesetup/bone_setup.cpp:857 */
	virtual void Subtract(CAnimationBucket* , const CAnimationBucket& , int, float);
	/* bonesetup/bone_setup.cpp:862 */
	virtual void Scale(CAnimationBucket* , float);
	/* bonesetup/bone_setup.cpp:867 */
	virtual void Copy(CAnimationBucket* , const CAnimationBucket& );
	/* bonesetup/bone_setup.cpp:872 */
	virtual void Blend(CAnimationBucket* , const CAnimationBucket& , int, float);
	/* bonesetup/bone_setup.cpp:877 */
	virtual void Worldspace(CAnimationBucket* , const CAnimationBucket& , int, float);
	/* bonesetup/bone_setup.cpp:882 */
	virtual void CallSequence(CAnimationBucket* , HSequence, float, float);
	/* bonesetup/bone_setup.cpp:887 */
	virtual void FetchCycle(CAnimationBucket* , int, float);
	/* bonesetup/bone_setup.cpp:894 */
	virtual void FetchFrame(CAnimationBucket* , int, float);
	/* bonesetup/bone_setup.cpp:901 */
	virtual void IKLockInPlace(CAnimationBucket* , int, float, float, bool);
	/* bonesetup/bone_setup.cpp:909 */
	virtual void IKRestoreAll(CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:914 */
	virtual void Transform(CAnimationBucket* , const CAnimationBucket& , const Vector& , const Quaternion& );
	/* bonesetup/bone_setup.cpp:919 */
	EBoneSetup* GetBoneSetup(const CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:939 */
	virtual const CModel* GetCModel(const CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:924 */
	virtual float GetPoseParameter(const CAnimationBucket* , int);
	/* bonesetup/bone_setup.cpp:929 */
	virtual const float* GetPoseParameterArray(const CAnimationBucket* );
	/* bonesetup/bone_setup.cpp:934 */
	virtual float GetRealtime(const CAnimationBucket* );
private:
	CBoneSetup * m_pBoneSetup; /* 8 8 */
	int m_nResult; /* 16 4 */
	void CAnimationBucket(class CAnimationBucket *); /* linkage=_ZN16CAnimationBucketC4Ev */
	virtual void FetchCycle(class CAnimationBucket *, int, float); /* linkage=_ZN16CAnimationBucket10FetchCycleEif */
	/* <2740216> bonesetup/bone_setup.cpp:805 */
	void Init(class CAnimationBucket *, const class CAnimationBucket  *); /* linkage=_ZN16CAnimationBucket4InitEPKS_ */
	virtual void Copy(class CAnimationBucket *, const class CAnimationBucket  &); /* linkage=_ZN16CAnimationBucket4CopyERKS_ */
	virtual void Subtract(class CAnimationBucket *, const class CAnimationBucket  &, int, float); /* linkage=_ZN16CAnimationBucket8SubtractERKS_if */
	class EBoneSetup * GetBoneSetup(const class CAnimationBucket  *); /* linkage=_ZNK16CAnimationBucket12GetBoneSetupEv */
	virtual void ~CAnimationBucket(class CAnimationBucket *); /* linkage=_ZN16CAnimationBucketD4Ev */
	virtual void Blend(class CAnimationBucket *, const class CAnimationBucket  &, int, float); /* linkage=_ZN16CAnimationBucket5BlendERKS_if */
	void CAnimationBucket(class CAnimationBucket *, const class CAnimationBucket  &); /* linkage=_ZN16CAnimationBucketC4ERKS_ */
	virtual void CallSequence(class CAnimationBucket *, class HSequence, float, float); /* linkage=_ZN16CAnimationBucket12CallSequenceE9HSequenceff */
	virtual void Slerp(class CAnimationBucket *, const class CAnimationBucket  &, int, float); /* linkage=_ZN16CAnimationBucket5SlerpERKS_if */
	class CAnimationBucket & operator=(class CAnimationBucket *, const class CAnimationBucket  &); /* linkage=_ZN16CAnimationBucketaSERKS_ */
	void CAnimationBucket(class CAnimationBucket *, class EBoneSetup *); /* linkage=_ZN16CAnimationBucketC4EP10EBoneSetup */
	void CAnimationBucket(class CAnimationBucket *, const class CAnimationBucket  *); /* linkage=_ZN16CAnimationBucketC4EPKS_ */
	/* <274008f> bonesetup/bone_setup.cpp:832 */
	void Release(class CAnimationBucket *); /* linkage=_ZN16CAnimationBucket7ReleaseEv */
	/* <2741176> bonesetup/bone_setup.cpp:852 */
	virtual void Add(class CAnimationBucket *, const class CAnimationBucket  &, int, float); /* linkage=_ZN16CAnimationBucket3AddERKS_if */
	virtual void Scale(class CAnimationBucket *, float); /* linkage=_ZN16CAnimationBucket5ScaleEf */
	virtual void Worldspace(class CAnimationBucket *, const class CAnimationBucket  &, int, float); /* linkage=_ZN16CAnimationBucket10WorldspaceERKS_if */
	/* <2740977> bonesetup/bone_setup.cpp:894 */
	virtual void FetchFrame(class CAnimationBucket *, int, float); /* linkage=_ZN16CAnimationBucket10FetchFrameEif */
	virtual void IKLockInPlace(class CAnimationBucket *, int, float, float, bool); /* linkage=_ZN16CAnimationBucket13IKLockInPlaceEiffb */
	virtual void IKRestoreAll(class CAnimationBucket *); /* linkage=_ZN16CAnimationBucket12IKRestoreAllEv */
	virtual void Transform(class CAnimationBucket *, const class CAnimationBucket  &, const class Vector  &, const class Quaternion  &); /* linkage=_ZN16CAnimationBucket9TransformERKS_RK6VectorRK10Quaternion */
	virtual const class CModel  * GetCModel(const class CAnimationBucket  *); /* linkage=_ZNK16CAnimationBucket9GetCModelEv */
	virtual float GetPoseParameter(const class CAnimationBucket  *, int); /* linkage=_ZNK16CAnimationBucket16GetPoseParameterEi */
	virtual const float  * GetPoseParameterArray(const class CAnimationBucket  *); /* linkage=_ZNK16CAnimationBucket21GetPoseParameterArrayEv */
	virtual float GetRealtime(const class CAnimationBucket  *); /* linkage=_ZNK16CAnimationBucket11GetRealtimeEv */
};

// <00C13A1D> ../public/modellib/animcontainer.h:543
void CAnimationBucket::CAnimationBucket(const CAnimationBucket& baseResult)
{
} /* size: 0 */

// <00C139C0> ../public/modellib/animcontainer.h:544
void CAnimationBucket::CAnimationBucket()
{
} /* size: 0 */

// <00C13A01> ../public/modellib/animcontainer.h:546
void CAnimationBucket::~CAnimationBucket()
{
} /* size: 0 */


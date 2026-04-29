
//
// bonesetup/bone_utils.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//	classes: 8
//	struct: 1
//

// <0272BC9F> bonesetup/bone_utils.h:18
void CInternalOperation::CInternalOperation()
{
} /* size: 0 */

// <0272BC83> bonesetup/bone_utils.h:18
inline void CInternalOperation::CInternalOperation()
{
} /* size: 0 */

// <025714EC> bonesetup/bone_utils.h:18
// member functions: 3
// member variables: 11
// class size: 64
class CInternalOperation {
	/* bonesetup/bone_utils.h:21 */
	enum CmdEnum_t {
		CMD_NOP = 0,
		CMD_SLERP = 1,
		CMD_ADD = 2,
		CMD_SUBTRACT = 3,
		CMD_SCALE = 4,
		CMD_COPY = 5,
		CMD_BLEND = 6,
		CMD_WORLDSPACE = 7,
		CMD_IKSAVE = 8,
		CMD_IKRESTORE = 9,
		CMD_FETCHCYCLE = 10,
		CMD_FETCHFRAME = 11,
		CMD_CALLSEQUENCE = 12,
		CMD_TRANSFORM = 13,
	};
	CmdEnum_t m_nCmd; /* 0 4 */
	int m_nDstResult; /* 4 4 */
	int m_nSrcResult; /* 8 4 */
	float m_flWeight; /* 12 4 */
	int m_nWeightlist; /* 16 4 */
	int m_nDepth; /* 20 4 */
	float m_flCycle; /* 24 4 */
	int m_nAnimation; /* 28 4 */
	float m_flFrame; /* 32 4 */
	Vector m_vTranslate; /* 36 12 */
	Quaternion m_qRotate; /* 48 16 */
	/* bonesetup/bone_utils.h:55 */
	void Init(CInternalOperation* , CmdEnum_t);
	void Init(class CInternalOperation *, enum CmdEnum_t); /* linkage=_ZN18CInternalOperation4InitENS_9CmdEnum_tE */
	void CInternalOperation(class CInternalOperation *); /* linkage=_ZN18CInternalOperationC4Ev */
};

// <0271E0AE> bonesetup/bone_utils.h:18
// member functions: 4
// member variables: 11
// class size: 64
class CInternalOperation {
	/* bonesetup/bone_utils.h:21 */
	enum CmdEnum_t {
		CMD_NOP = 0,
		CMD_SLERP = 1,
		CMD_ADD = 2,
		CMD_SUBTRACT = 3,
		CMD_SCALE = 4,
		CMD_COPY = 5,
		CMD_BLEND = 6,
		CMD_WORLDSPACE = 7,
		CMD_IKSAVE = 8,
		CMD_IKRESTORE = 9,
		CMD_FETCHCYCLE = 10,
		CMD_FETCHFRAME = 11,
		CMD_CALLSEQUENCE = 12,
		CMD_TRANSFORM = 13,
	};
	CmdEnum_t m_nCmd; /* 0 4 */
	int m_nDstResult; /* 4 4 */
	int m_nSrcResult; /* 8 4 */
	float m_flWeight; /* 12 4 */
	int m_nWeightlist; /* 16 4 */
	int m_nDepth; /* 20 4 */
	float m_flCycle; /* 24 4 */
	int m_nAnimation; /* 28 4 */
	float m_flFrame; /* 32 4 */
	Vector m_vTranslate; /* 36 12 */
	Quaternion m_qRotate; /* 48 16 */
	/* bonesetup/bone_utils.h:55 */
	void Init(CInternalOperation* , CmdEnum_t);
	void CInternalOperation(CInternalOperation* );
	void Init(class CInternalOperation *, enum CmdEnum_t); /* linkage=_ZN18CInternalOperation4InitENS_9CmdEnum_tE */
	void CInternalOperation(class CInternalOperation *); /* linkage=_ZN18CInternalOperationC4Ev */
};

// <0273A9A4> bonesetup/bone_utils.h:55
inline void CInternalOperation::Init(CmdEnum_t nCmd)
{
} /* size: 0 */

// <02571630> bonesetup/bone_utils.h:78
// member variables: 3
// struct size: 12
struct DecodeOperation_t {
	int m_nAnimation; /* 0 4 */
	float m_flFrame; /* 4 4 */
	int m_nProcessedElements; /* 8 4 */
};

// <0271D80B> bonesetup/bone_utils.h:90
// member functions: 90
// member variables: 14
// vtable entries: 6
// class size: 185,632
class CBoneSetup : public EBoneSetup {
public:
	/* class EBoneSetup <ancestor>; */ /* 0 8 */
	void CBoneSetup(CBoneSetup* , const CBoneSetup& );
	/* bonesetup/bone_setup.cpp:190 */
	void CBoneSetup(CBoneSetup* , const CModel* );
	/* bonesetup/bone_setup.cpp:208 */
	void ~CBoneSetup(CBoneSetup* );
	/* bonesetup/bone_setup.cpp:215 */
	void Init(CBoneSetup* , const CModel* );
	/* bonesetup/bone_setup.cpp:223 */
	void Clear(CBoneSetup* );
	/* bonesetup/bone_setup.cpp:245 */
	void StartFrame(CBoneSetup* , int, float);
	/* bonesetup/bone_setup.cpp:270 */
	void SetPoseParameters(CBoneSetup* , int, const float* );
	/* bonesetup/bone_setup.cpp:293 */
	void ConnectDebugger(CBoneSetup* , AnimationDecodeDebugDumpElement_t* , const CAnimationDecodeContext* );
	/* bonesetup/bone_setup.cpp:564 */
	bool AccumulateSequence(CBoneSetup* , HSequence, float, float);
	/* bonesetup/bone_setup.cpp:692 */
	bool BlendRawAnimation(CBoneSetup* , int, float, float);
	/* bonesetup/bone_setup.cpp:1113 */
	void AddAutoplaySequences(CBoneSetup* );
	/* bonesetup/bone_setup.cpp:426 */
	void Evaluate(CBoneSetup* , const uint32* , uint32, CThreadLocalAnimationDecodeCache* );
	/* bonesetup/bone_setup.cpp:602 */
	void EvaluateAnimGraph(CBoneSetup* , IAnimationGraphInstance* , float, const uint32* , uint32);
	/* bonesetup/bone_setup.cpp:303 */
	bool GetParentSpaceBones(CBoneSetup* , int, CTransform* , const uint32* );
	/* bonesetup/bone_setup.cpp:319 */
	bool GetWorldSpaceBones(CBoneSetup* , int, CTransform* );
	/* bonesetup/bone_setup.cpp:342 */
	bool SetParentSpaceBones(CBoneSetup* , int, CTransform* );
	/* bonesetup/bone_setup.cpp:353 */
	bool SetWorldSpaceBones(CBoneSetup* , int, CTransform* );
	/* bonesetup/bone_setup.cpp:368 */
	bool GetMorphTargets(CBoneSetup* , int, float* );
	/* bonesetup/bone_setup.cpp:387 */
	bool GetAllUserData(CBoneSetup* , int, void* );
	/* bonesetup/bone_utils.h:114 */
	bool GetUserDataElement(CBoneSetup* , int, void* );
	/* bonesetup/bone_setup.cpp:402 */
	CAnimationResult& GetAnimationResult(CBoneSetup* );
	/* bonesetup/bone_setup.cpp:412 */
	const CAnimationResult& GetAnimationResult(const CBoneSetup* );
private:
	/* bonesetup/bone_setup.cpp:25 */
	void InitializeResult(CBoneSetup* , CAnimationResult& );
	/* bonesetup/bone_setup.cpp:61 */
	void ZeroResult(CBoneSetup* , CAnimationResult& );
	/* bonesetup/bone_setup.cpp:465 */
	void CalcNeededRequestIndex(CBoneSetup* , const uint32* , uint32);
	/* bonesetup/bone_setup.cpp:664 */
	bool AddAllSequenceCmds(CBoneSetup* , CAnimationBucket& , HSequence, float, float);
	/* bonesetup/bone_setup.cpp:1008 */
	bool AddAnimationCmd(CBoneSetup* , CAnimationBucket& , int, float, float);
	/* bonesetup/bone_setup.cpp:1039 */
	void EvaluateOp(CBoneSetup* , const CInternalOperation* , CThreadLocalAnimationDecodeCache* );
	/* bonesetup/bone_setup.cpp:1130 */
	void SpewDecodeOps(const CBoneSetup* );
	/* bonesetup/bone_setup.cpp:1233 */
	void DumpDecodeOps(const CBoneSetup* );
	/* bonesetup/bone_utils.h:131 */
	void CalcLocalHierarchyAnimation(CBoneSetup* , CAnimationResult& , int, int, float, int, CThreadLocalAnimationDecodeCache* );
	/* bonesetup/bone_utils.h:132 */
	void CalcSubframeAnimation(CBoneSetup* , CAnimationResult& , const CInternalOperation* , int, CThreadLocalAnimationDecodeCache* );
	/* bonesetup/bone_utils.h:133 */
	void CalcSubframeAnimation(CBoneSetup* , CAnimationResult& , int, int, float, int, CThreadLocalAnimationDecodeCache* );
	/* bonesetup/bone_utils.h:134 */
	void CalcFrameAnimation(CBoneSetup* , CAnimationResult& , int, int, int);
	/* bonesetup/bone_utils.h:136 */
	void ScaleBones(CBoneSetup* , CAnimationResult& , HSequence, float);
	/* bonesetup/bone_utils.h:138 */
	void RetargetBiped(CBoneSetup* , CTransform* );
	/* bonesetup/bone_utils.h:157 */
	virtual const CModel* GetCModel(const CBoneSetup* );
	/* bonesetup/bone_setup.cpp:946 */
	virtual float GetPoseParameter(const CBoneSetup* , int);
	/* bonesetup/bone_setup.cpp:956 */
	virtual const float* GetPoseParameterArray(const CBoneSetup* );
	/* bonesetup/bone_setup.cpp:963 */
	virtual float GetRealtime(const CBoneSetup* );
	/* bonesetup/bone_setup.cpp:970 */
	virtual int AllocateResult(CBoneSetup* );
	/* bonesetup/bone_setup.cpp:996 */
	virtual void FreeResult(CBoneSetup* , int);
	const class CModel * m_pModel; /* 8 8 */
	int m_nRequestIndex; /* 16 4 */
	CUtlVectorFixedGrowable<float, 32> m_flPoseParameter __attribute__((__aligned__(8))); /* 24 160 */
	float m_flRealTime; /* 184 4 */
	/* bonesetup/bone_setup.cpp:729 */
	CInternalOperation* AddCommand(CBoneSetup* , CmdEnum_t, int, int, int, float);
	/* bonesetup/bone_setup.cpp:757 */
	CInternalOperation* AddCommand(CBoneSetup* , CmdEnum_t, int, int, int, float, const Vector& , const Quaternion& );
	CUtlVectorFixedGrowable<CInternalOperation, 32> m_evaluate __attribute__((__aligned__(8))); /* 192 2080 */
	CUtlVectorFixedGrowable<CAnimationResult, 32> m_animResultArray __attribute__((__aligned__(16))); /* 2272 182816 */
	/* bonesetup/bone_utils.h:178 */
	int TranslateResult(CBoneSetup* , int);
	CUtlVectorFixedGrowable<bool, 32> m_usedResultSlots __attribute__((__aligned__(8))); /* 185088 64 */
	int m_nMaxResultOffset; /* 185152 4 */
	CAnimationBucket m_baseResult; /* 185160 24 */
	int m_nCallDepth; /* 185184 4 */
	CUtlVectorFixedGrowable<DecodeOperation_t, 32> m_decodeOperations __attribute__((__aligned__(8))); /* 185192 416 */
	AnimationDecodeDebugDumpElement_t * m_pDebugDump; /* 185608 8 */
	const class CAnimationDecodeContext * m_pDecodeContext; /* 185616 8 */
	void CalcFrameAnimation(class CBoneSetup *, class CAnimationResult &, int, int, int); /* linkage=_ZN10CBoneSetup18CalcFrameAnimationER16CAnimationResultiii */
	void CalcSubframeAnimation(class CBoneSetup *, class CAnimationResult &, int, int, float, int, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN10CBoneSetup21CalcSubframeAnimationER16CAnimationResultiifiP32CThreadLocalAnimationDecodeCache */
	void CalcSubframeAnimation(class CBoneSetup *, class CAnimationResult &, const class CInternalOperation  *, int, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN10CBoneSetup21CalcSubframeAnimationER16CAnimationResultPK18CInternalOperationiP32CThreadLocalAnimationDecodeCache */
	void CalcLocalHierarchyAnimation(class CBoneSetup *, class CAnimationResult &, int, int, float, int, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN10CBoneSetup27CalcLocalHierarchyAnimationER16CAnimationResultiifiP32CThreadLocalAnimationDecodeCache */
	void CBoneSetup(class CBoneSetup *, const class CBoneSetup  &); /* linkage=_ZN10CBoneSetupC4ERKS_ */
	void CBoneSetup(class CBoneSetup *, const class CModel  *); /* linkage=_ZN10CBoneSetupC4EPK6CModel */
	void ~CBoneSetup(class CBoneSetup *); /* linkage=_ZN10CBoneSetupD4Ev */
	void Init(class CBoneSetup *, const class CModel  *); /* linkage=_ZN10CBoneSetup4InitEPK6CModel */
	void Clear(class CBoneSetup *); /* linkage=_ZN10CBoneSetup5ClearEv */
	/* <2740261> bonesetup/bone_setup.cpp:245 */
	void StartFrame(class CBoneSetup *, int, float); /* linkage=_ZN10CBoneSetup10StartFrameEif */
	void SetPoseParameters(class CBoneSetup *, int, const float  *); /* linkage=_ZN10CBoneSetup17SetPoseParametersEiPKf */
	/* <273f8f2> bonesetup/bone_setup.cpp:293 */
	void ConnectDebugger(class CBoneSetup *, class AnimationDecodeDebugDumpElement_t *, const class CAnimationDecodeContext  *); /* linkage=_ZN10CBoneSetup15ConnectDebuggerEP33AnimationDecodeDebugDumpElement_tPK23CAnimationDecodeContext */
	bool AccumulateSequence(class CBoneSetup *, class HSequence, float, float); /* linkage=_ZN10CBoneSetup18AccumulateSequenceE9HSequenceff */
	bool BlendRawAnimation(class CBoneSetup *, int, float, float); /* linkage=_ZN10CBoneSetup17BlendRawAnimationEiff */
	void AddAutoplaySequences(class CBoneSetup *); /* linkage=_ZN10CBoneSetup20AddAutoplaySequencesEv */
	/* <274154a> bonesetup/bone_setup.cpp:426 */
	void Evaluate(class CBoneSetup *, const uint32  *, uint32, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN10CBoneSetup8EvaluateEPKjjP32CThreadLocalAnimationDecodeCache */
	/* <273ffd9> bonesetup/bone_setup.cpp:602 */
	void EvaluateAnimGraph(class CBoneSetup *, class IAnimationGraphInstance *, float, const uint32  *, uint32); /* linkage=_ZN10CBoneSetup17EvaluateAnimGraphEP23IAnimationGraphInstancefPKjj */
	/* <273f92d> bonesetup/bone_setup.cpp:303 */
	bool GetParentSpaceBones(class CBoneSetup *, int, class CTransform *, const uint32  *); /* linkage=_ZN10CBoneSetup19GetParentSpaceBonesEiP10CTransformPKj */
	bool GetWorldSpaceBones(class CBoneSetup *, int, class CTransform *); /* linkage=_ZN10CBoneSetup18GetWorldSpaceBonesEiP10CTransform */
	/* <273fa98> bonesetup/bone_setup.cpp:342 */
	bool SetParentSpaceBones(class CBoneSetup *, int, class CTransform *); /* linkage=_ZN10CBoneSetup19SetParentSpaceBonesEiP10CTransform */
	/* <273fb3a> bonesetup/bone_setup.cpp:353 */
	bool SetWorldSpaceBones(class CBoneSetup *, int, class CTransform *); /* linkage=_ZN10CBoneSetup18SetWorldSpaceBonesEiP10CTransform */
	/* <273fbdc> bonesetup/bone_setup.cpp:368 */
	bool GetMorphTargets(class CBoneSetup *, int, float *); /* linkage=_ZN10CBoneSetup15GetMorphTargetsEiPf */
	/* <273fd34> bonesetup/bone_setup.cpp:387 */
	bool GetAllUserData(class CBoneSetup *, int, void *); /* linkage=_ZN10CBoneSetup14GetAllUserDataEiPv */
	bool GetUserDataElement(class CBoneSetup *, int, void *); /* linkage=_ZN10CBoneSetup18GetUserDataElementEiPv */
	/* <273fe8c> bonesetup/bone_setup.cpp:402 */
	class CAnimationResult & GetAnimationResult(class CBoneSetup *); /* linkage=_ZN10CBoneSetup18GetAnimationResultEv */
	const class CAnimationResult  & GetAnimationResult(const class CBoneSetup  *); /* linkage=_ZNK10CBoneSetup18GetAnimationResultEv */
	void InitializeResult(class CBoneSetup *, class CAnimationResult &); /* linkage=_ZN10CBoneSetup16InitializeResultER16CAnimationResult */
	void ZeroResult(class CBoneSetup *, class CAnimationResult &); /* linkage=_ZN10CBoneSetup10ZeroResultER16CAnimationResult */
	void CalcNeededRequestIndex(class CBoneSetup *, const uint32  *, uint32); /* linkage=_ZN10CBoneSetup22CalcNeededRequestIndexEPKjj */
	bool AddAllSequenceCmds(class CBoneSetup *, class CAnimationBucket &, class HSequence, float, float); /* linkage=_ZN10CBoneSetup18AddAllSequenceCmdsER16CAnimationBucket9HSequenceff */
	bool AddAnimationCmd(class CBoneSetup *, class CAnimationBucket &, int, float, float); /* linkage=_ZN10CBoneSetup15AddAnimationCmdER16CAnimationBucketiff */
	void EvaluateOp(class CBoneSetup *, const class CInternalOperation  *, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN10CBoneSetup10EvaluateOpEPK18CInternalOperationP32CThreadLocalAnimationDecodeCache */
	void SpewDecodeOps(const class CBoneSetup  *); /* linkage=_ZNK10CBoneSetup13SpewDecodeOpsEv */
	void DumpDecodeOps(const class CBoneSetup  *); /* linkage=_ZNK10CBoneSetup13DumpDecodeOpsEv */
	void ScaleBones(class CBoneSetup *, class CAnimationResult &, class HSequence, float); /* linkage=_ZN10CBoneSetup10ScaleBonesER16CAnimationResult9HSequencef */
	void RetargetBiped(class CBoneSetup *, class CTransform *); /* linkage=_ZN10CBoneSetup13RetargetBipedEP10CTransform */
	/* <273e05a> bonesetup/bone_utils.h:157 */
	virtual const class CModel  * GetCModel(const class CBoneSetup  *); /* linkage=_ZNK10CBoneSetup9GetCModelEv */
	/* <273e307> bonesetup/bone_setup.cpp:946 */
	virtual float GetPoseParameter(const class CBoneSetup  *, int); /* linkage=_ZNK10CBoneSetup16GetPoseParameterEi */
	/* <273e085> bonesetup/bone_setup.cpp:956 */
	virtual const float  * GetPoseParameterArray(const class CBoneSetup  *); /* linkage=_ZNK10CBoneSetup21GetPoseParameterArrayEv */
	/* <273e146> bonesetup/bone_setup.cpp:963 */
	virtual float GetRealtime(const class CBoneSetup  *); /* linkage=_ZNK10CBoneSetup11GetRealtimeEv */
	virtual int AllocateResult(class CBoneSetup *); /* linkage=_ZN10CBoneSetup14AllocateResultEv */
	/* <273e19c> bonesetup/bone_setup.cpp:996 */
	virtual void FreeResult(class CBoneSetup *, int); /* linkage=_ZN10CBoneSetup10FreeResultEi */
	/* <2740574> bonesetup/bone_setup.cpp:729 */
	class CInternalOperation * AddCommand(class CBoneSetup *, enum CmdEnum_t, int, int, int, float); /* linkage=_ZN10CBoneSetup10AddCommandEN18CInternalOperation9CmdEnum_tEiiif */
	class CInternalOperation * AddCommand(class CBoneSetup *, enum CmdEnum_t, int, int, int, float, const class Vector  &, const class Quaternion  &); /* linkage=_ZN10CBoneSetup10AddCommandEN18CInternalOperation9CmdEnum_tEiiifRK6VectorRK10Quaternion */
	int TranslateResult(class CBoneSetup *, int); /* linkage=_ZN10CBoneSetup15TranslateResultEi */
} __attribute__((__aligned__(16)));

// <0273E05A> bonesetup/bone_utils.h:157
void CBoneSetup::GetCModel()
{
} /* size: 9 */

// <0273A98B> bonesetup/bone_utils.h:157
inline void CBoneSetup::GetCModel()
{
} /* size: 0 */

// <02698112> bonesetup/bone_utils.h:202
void CRetargetingChain::~CRetargetingChain()
{
} /* size: 0 */

// <026980F6> bonesetup/bone_utils.h:202
inline void CRetargetingChain::~CRetargetingChain()
{
} /* size: 0 */

// <02571DF3> bonesetup/bone_utils.h:202
// member functions: 7
// member variables: 7
// class size: 152
class CRetargetingChain {
	/* bonesetup/bone_utils.h:205 */
	void CRetargetingChain(CRetargetingChain* );
	CUtlVector<int, CUtlMemory<int, int> > m_nUpdateBone; /* 0 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nBone; /* 32 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flOrientedLengthArray; /* 64 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flBoneLengthArray; /* 96 32 */
	float m_flLength; /* 128 4 */
	const class CAnimRetargetChainData * m_pChain; /* 136 8 */
	/* bonesetup/bone_utils.h:219 */
	int NumElements(const CRetargetingChain* );
	/* bonesetup/bone_utils.h:220 */
	const CAnimRetargetElementData* pElement(const CRetargetingChain* , int);
	const class CAnimRetargetData * m_pRetarget; /* 144 8 */
	void CRetargetingChain(class CRetargetingChain *); /* linkage=_ZN17CRetargetingChainC4Ev */
	int NumElements(const class CRetargetingChain  *); /* linkage=_ZNK17CRetargetingChain11NumElementsEv */
	const class CAnimRetargetElementData  * pElement(const class CRetargetingChain  *, int); /* linkage=_ZNK17CRetargetingChain8pElementEi */
	void ~CRetargetingChain(class CRetargetingChain *); /* linkage=_ZN17CRetargetingChainD4Ev */
};

// <0268EC5B> bonesetup/bone_utils.h:202
// member functions: 8
// member variables: 7
// class size: 152
class CRetargetingChain {
	/* bonesetup/bone_utils.h:205 */
	void CRetargetingChain(CRetargetingChain* );
	CUtlVector<int, CUtlMemory<int, int> > m_nUpdateBone; /* 0 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nBone; /* 32 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flOrientedLengthArray; /* 64 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flBoneLengthArray; /* 96 32 */
	float m_flLength; /* 128 4 */
	const class CAnimRetargetChainData * m_pChain; /* 136 8 */
	/* bonesetup/bone_utils.h:219 */
	int NumElements(const CRetargetingChain* );
	/* bonesetup/bone_utils.h:220 */
	const CAnimRetargetElementData* pElement(const CRetargetingChain* , int);
	const class CAnimRetargetData * m_pRetarget; /* 144 8 */
	void ~CRetargetingChain(CRetargetingChain* );
	void CRetargetingChain(class CRetargetingChain *); /* linkage=_ZN17CRetargetingChainC4Ev */
	int NumElements(const class CRetargetingChain  *); /* linkage=_ZNK17CRetargetingChain11NumElementsEv */
	const class CAnimRetargetElementData  * pElement(const class CRetargetingChain  *, int); /* linkage=_ZNK17CRetargetingChain8pElementEi */
	void ~CRetargetingChain(class CRetargetingChain *); /* linkage=_ZN17CRetargetingChainD4Ev */
};

// <026B1618> bonesetup/bone_utils.h:205
void CRetargetingChain::CRetargetingChain()
{
} /* size: 0 */

// <026B15FF> bonesetup/bone_utils.h:205
inline void CRetargetingChain::CRetargetingChain()
{
} /* size: 0 */

// <026B15E6> bonesetup/bone_utils.h:219
inline void CRetargetingChain::NumElements()
{
} /* size: 0 */

// <026B15C1> bonesetup/bone_utils.h:220
inline void CRetargetingChain::pElement(int nElement)
{
} /* size: 0 */

// <026B1546> bonesetup/bone_utils.h:225
void CRetargetingTransforms::~CRetargetingTransforms()
{
} /* size: 0 */

// <026B152A> bonesetup/bone_utils.h:225
inline void CRetargetingTransforms::~CRetargetingTransforms()
{
} /* size: 0 */

// <02573588> bonesetup/bone_utils.h:225
// member functions: 3
// member variables: 2
// class size: 64
class CRetargetingTransforms {
	/* bonesetup/bone_utils.h:228 */
	void CRetargetingTransforms(CRetargetingTransforms* );
	CUtlVector<CRetargetingChain, CUtlMemory<CRetargetingChain, int> > m_retargets; /* 0 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_replicatedBone; /* 32 32 */
	void CRetargetingTransforms(class CRetargetingTransforms *); /* linkage=_ZN22CRetargetingTransformsC4Ev */
	void ~CRetargetingTransforms(class CRetargetingTransforms *); /* linkage=_ZN22CRetargetingTransformsD4Ev */
};

// <02690482> bonesetup/bone_utils.h:225
// member functions: 4
// member variables: 2
// class size: 64
class CRetargetingTransforms {
	/* bonesetup/bone_utils.h:228 */
	void CRetargetingTransforms(CRetargetingTransforms* );
	CUtlVector<CRetargetingChain, CUtlMemory<CRetargetingChain, int> > m_retargets; /* 0 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_replicatedBone; /* 32 32 */
	void ~CRetargetingTransforms(CRetargetingTransforms* );
	void CRetargetingTransforms(class CRetargetingTransforms *); /* linkage=_ZN22CRetargetingTransformsC4Ev */
	void ~CRetargetingTransforms(class CRetargetingTransforms *); /* linkage=_ZN22CRetargetingTransformsD4Ev */
};

// <026B1576> bonesetup/bone_utils.h:228
void CRetargetingTransforms::CRetargetingTransforms()
{
} /* size: 0 */

// <026B155D> bonesetup/bone_utils.h:228
inline void CRetargetingTransforms::CRetargetingTransforms()
{
} /* size: 0 */

// <0256110B> bonesetup/bone_utils.h:257
// member functions: 64
// member variables: 8
// class size: 248
class CRetargetBiped {
	/* bonesetup/bone_utils.h:260 */
	void ~CRetargetBiped(CRetargetBiped* );
	/* bonesetup/bone_utils.h:261 */
	bool Create(const CModel* );
	/* bonesetup/bone_utils.h:263 */
	void ConvertAnimation(const CRetargetBiped* , CTransform* );
	/* bonesetup/bone_utils.h:264 */
	void ConvertAnimation(const CRetargetBiped* , CAnimationResult& );
	/* bonesetup/bone_utils.h:266 */
	void ConvertWeightlist(const CRetargetBiped* , CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> >& );
private:
	/* bonesetup/bone_utils.h:269 */
	void CRetargetBiped(CRetargetBiped* );
	/* bonesetup/bone_utils.h:270 */
	bool Setup(CRetargetBiped* , const CModel* , int);
	/* bonesetup/bone_utils.h:272 */
	void InitLengths(CRetargetBiped* , CRetargetingChain* , const CTransform* );
	/* bonesetup/bone_utils.h:273 */
	bool LinkToSkeleton(CRetargetBiped* , CRetargetingTransforms* , CBoneBitList& , const CModel* , const CAnimRetargetData* , int);
	/* bonesetup/bone_utils.h:274 */
	bool FindMatchingChains(CRetargetBiped* , CRetargetingTransforms* , const CModel* , const CAnimRetargetData* , const CAnimRetargetData* );
	/* bonesetup/bone_utils.h:275 */
	bool FindReplicatedBones(CRetargetBiped* , CRetargetingTransforms* , CBoneBitList& , const CModel* , const CAnimRetargetData* , int);
	/* bonesetup/bone_utils.h:277 */
	bool BuildUpdateList(CRetargetBiped* , CRetargetingChain* , CBoneBitList& , int);
	/* bonesetup/bone_utils.h:278 */
	void UpdateChainBones(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* );
	/* bonesetup/bone_utils.h:280 */
	void ConvertWorldToOriented(const CRetargetBiped* , matrix3x4_t* , const CRetargetingChain* , const matrix3x4_t* , int);
	/* bonesetup/bone_utils.h:281 */
	void ConvertWorldToOriented(const CRetargetBiped* , matrix3x4_t* , const CRetargetingTransforms* , const matrix3x4_t* , int);
	/* bonesetup/bone_utils.h:282 */
	void ConvertOrientedToWorld(const CRetargetBiped* , matrix3x4_t* , const CRetargetingChain* , const matrix3x4_t* , int);
	/* bonesetup/bone_utils.h:283 */
	void ConvertOrientedToWorld(const CRetargetBiped* , matrix3x4_t* , const CRetargetingTransforms* , const matrix3x4_t* , int);
	/* bonesetup/bone_utils.h:285 */
	void ConvertParentToWorld(const CRetargetBiped* , matrix3x4_t* , const CUtlVector<int, CUtlMemory<int, int> >& , const CTransform* , int);
	/* bonesetup/bone_utils.h:286 */
	void ConvertWorldToParent(const CRetargetBiped* , CTransform* , const CUtlVector<int, CUtlMemory<int, int> >& , const matrix3x4_t* , int);
	/* bonesetup/bone_utils.h:288 */
	void GetBoneDefaults(const CRetargetBiped* , const CUtlVector<int, CUtlMemory<int, int> >& , CTransform* );
	/* bonesetup/bone_utils.h:290 */
	void CopyChain(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , const matrix3x4a_t* , const CRetargetingChain* , int);
	/* bonesetup/bone_utils.h:292 */
	void ConvertBiped(const CRetargetBiped* , matrix3x4a_t* , const matrix3x4a_t* , int);
	/* bonesetup/bone_utils.h:293 */
	void ConvertReplicated(const CRetargetBiped* , matrix3x4a_t* , int);
	/* bonesetup/bone_utils.h:295 */
	void SolveSpine(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , const matrix3x4a_t* , const CRetargetingChain* , int);
	/* bonesetup/bone_utils.h:296 */
	void SolveArm(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , const matrix3x4a_t* , const CRetargetingChain* , int);
	/* bonesetup/bone_utils.h:297 */
	void SolveLeg(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , const matrix3x4a_t* , const CRetargetingChain* , int);
	/* bonesetup/bone_utils.h:298 */
	void SolveHead(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , const matrix3x4a_t* , const CRetargetingChain* , int);
	/* bonesetup/bone_utils.h:299 */
	void CleanupSpineAngles(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , int, int);
	/* bonesetup/bone_utils.h:300 */
	void SolveFinger(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , const matrix3x4a_t* , const CRetargetingChain* , int);
	/* bonesetup/bone_utils.h:301 */
	void SolveHand(const CRetargetBiped* , matrix3x4a_t* , const CRetargetingChain* , const matrix3x4a_t* , const CRetargetingChain* , int);
	/* bonesetup/bone_utils.h:306 */
	void ConvertWeightlistChain(const CRetargetBiped* , CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> >& , const CRetargetingChain* , const CRetargetingChain* );
	/* bonesetup/bone_utils.h:307 */
	void ConvertWeightlistChain(const CRetargetBiped* , CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> >& , int, int, int, float);
	const class CModel * m_pModel; /* 0 8 */
	int m_nAnimGroup; /* 8 4 */
	CRetargetingTransforms m_srcToRef; /* 16 64 */
	CRetargetingTransforms m_refToDst; /* 80 64 */
	float m_flXYMovementScale; /* 144 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_nSrcBoneArray; /* 152 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nDstBoneArray; /* 184 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nDstDefaultArray; /* 216 32 */
	void ~CRetargetBiped(class CRetargetBiped *); /* linkage=_ZN14CRetargetBipedD4Ev */
	bool Create(const class CModel  *); /* linkage=_ZN14CRetargetBiped6CreateEPK6CModel */
	void ConvertAnimation(const class CRetargetBiped  *, class CTransform *); /* linkage=_ZNK14CRetargetBiped16ConvertAnimationEP10CTransform */
	void ConvertAnimation(const class CRetargetBiped  *, class CAnimationResult &); /* linkage=_ZNK14CRetargetBiped16ConvertAnimationER16CAnimationResult */
	void ConvertWeightlist(const class CRetargetBiped  *, class CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > &); /* linkage=_ZNK14CRetargetBiped17ConvertWeightlistER10CUtlVectorIS0_If10CUtlMemoryIfiEES1_IS3_iEE */
	void CRetargetBiped(class CRetargetBiped *); /* linkage=_ZN14CRetargetBipedC4Ev */
	bool Setup(class CRetargetBiped *, const class CModel  *, int); /* linkage=_ZN14CRetargetBiped5SetupEPK6CModeli */
	void InitLengths(class CRetargetBiped *, class CRetargetingChain *, const class CTransform  *); /* linkage=_ZN14CRetargetBiped11InitLengthsEP17CRetargetingChainPK10CTransform */
	bool LinkToSkeleton(class CRetargetBiped *, class CRetargetingTransforms *, class CBoneBitList &, const class CModel  *, const class CAnimRetargetData  *, int); /* linkage=_ZN14CRetargetBiped14LinkToSkeletonEP22CRetargetingTransformsR12CBoneBitListPK6CModelPK17CAnimRetargetDatai */
	bool FindMatchingChains(class CRetargetBiped *, class CRetargetingTransforms *, const class CModel  *, const class CAnimRetargetData  *, const class CAnimRetargetData  *); /* linkage=_ZN14CRetargetBiped18FindMatchingChainsEP22CRetargetingTransformsPK6CModelPK17CAnimRetargetDataS7_ */
	bool FindReplicatedBones(class CRetargetBiped *, class CRetargetingTransforms *, class CBoneBitList &, const class CModel  *, const class CAnimRetargetData  *, int); /* linkage=_ZN14CRetargetBiped19FindReplicatedBonesEP22CRetargetingTransformsR12CBoneBitListPK6CModelPK17CAnimRetargetDatai */
	bool BuildUpdateList(class CRetargetBiped *, class CRetargetingChain *, class CBoneBitList &, int); /* linkage=_ZN14CRetargetBiped15BuildUpdateListEP17CRetargetingChainR12CBoneBitListi */
	void UpdateChainBones(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *); /* linkage=_ZNK14CRetargetBiped16UpdateChainBonesEP12matrix3x4a_tPK17CRetargetingChain */
	void ConvertWorldToOriented(const class CRetargetBiped  *, class matrix3x4_t *, const class CRetargetingChain  *, const class matrix3x4_t  *, int); /* linkage=_ZNK14CRetargetBiped22ConvertWorldToOrientedEP11matrix3x4_tPK17CRetargetingChainPKS0_i */
	/* <26b5c40> bonesetup/bone_retarget.cpp:881 */
	void ConvertWorldToOriented(const class CRetargetBiped  *, class matrix3x4_t *, const class CRetargetingTransforms  *, const class matrix3x4_t  *, int); /* linkage=_ZNK14CRetargetBiped22ConvertWorldToOrientedEP11matrix3x4_tPK22CRetargetingTransformsPKS0_i */
	void ConvertOrientedToWorld(const class CRetargetBiped  *, class matrix3x4_t *, const class CRetargetingChain  *, const class matrix3x4_t  *, int); /* linkage=_ZNK14CRetargetBiped22ConvertOrientedToWorldEP11matrix3x4_tPK17CRetargetingChainPKS0_i */
	void ConvertOrientedToWorld(const class CRetargetBiped  *, class matrix3x4_t *, const class CRetargetingTransforms  *, const class matrix3x4_t  *, int); /* linkage=_ZNK14CRetargetBiped22ConvertOrientedToWorldEP11matrix3x4_tPK22CRetargetingTransformsPKS0_i */
	void ConvertParentToWorld(const class CRetargetBiped  *, class matrix3x4_t *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CTransform  *, int); /* linkage=_ZNK14CRetargetBiped20ConvertParentToWorldEP11matrix3x4_tRK10CUtlVectorIi10CUtlMemoryIiiEEPK10CTransformi */
	void ConvertWorldToParent(const class CRetargetBiped  *, class CTransform *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class matrix3x4_t  *, int); /* linkage=_ZNK14CRetargetBiped20ConvertWorldToParentEP10CTransformRK10CUtlVectorIi10CUtlMemoryIiiEEPK11matrix3x4_ti */
	/* <26b5d49> bonesetup/bone_retarget.cpp:1035 */
	void GetBoneDefaults(const class CRetargetBiped  *, const class CUtlVector<int, CUtlMemory<int, int> >  &, class CTransform *); /* linkage=_ZNK14CRetargetBiped15GetBoneDefaultsERK10CUtlVectorIi10CUtlMemoryIiiEEP10CTransform */
	void CopyChain(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, const class matrix3x4a_t  *, const class CRetargetingChain  *, int); /* linkage=_ZNK14CRetargetBiped9CopyChainEP12matrix3x4a_tPK17CRetargetingChainPKS0_S4_i */
	void ConvertBiped(const class CRetargetBiped  *, class matrix3x4a_t *, const class matrix3x4a_t  *, int); /* linkage=_ZNK14CRetargetBiped12ConvertBipedEP12matrix3x4a_tPKS0_i */
	void ConvertReplicated(const class CRetargetBiped  *, class matrix3x4a_t *, int); /* linkage=_ZNK14CRetargetBiped17ConvertReplicatedEP12matrix3x4a_ti */
	void SolveSpine(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, const class matrix3x4a_t  *, const class CRetargetingChain  *, int); /* linkage=_ZNK14CRetargetBiped10SolveSpineEP12matrix3x4a_tPK17CRetargetingChainPKS0_S4_i */
	/* <26b5b42> bonesetup/bone_retarget.cpp:528 */
	void SolveArm(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, const class matrix3x4a_t  *, const class CRetargetingChain  *, int); /* linkage=_ZNK14CRetargetBiped8SolveArmEP12matrix3x4a_tPK17CRetargetingChainPKS0_S4_i */
	void SolveLeg(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, const class matrix3x4a_t  *, const class CRetargetingChain  *, int); /* linkage=_ZNK14CRetargetBiped8SolveLegEP12matrix3x4a_tPK17CRetargetingChainPKS0_S4_i */
	void SolveHead(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, const class matrix3x4a_t  *, const class CRetargetingChain  *, int); /* linkage=_ZNK14CRetargetBiped9SolveHeadEP12matrix3x4a_tPK17CRetargetingChainPKS0_S4_i */
	void CleanupSpineAngles(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, int, int); /* linkage=_ZNK14CRetargetBiped18CleanupSpineAnglesEP12matrix3x4a_tPK17CRetargetingChainii */
	void SolveFinger(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, const class matrix3x4a_t  *, const class CRetargetingChain  *, int); /* linkage=_ZNK14CRetargetBiped11SolveFingerEP12matrix3x4a_tPK17CRetargetingChainPKS0_S4_i */
	/* <26b5bed> bonesetup/bone_retarget.cpp:736 */
	void SolveHand(const class CRetargetBiped  *, class matrix3x4a_t *, const class CRetargetingChain  *, const class matrix3x4a_t  *, const class CRetargetingChain  *, int); /* linkage=_ZNK14CRetargetBiped9SolveHandEP12matrix3x4a_tPK17CRetargetingChainPKS0_S4_i */
	void ConvertWeightlistChain(const class CRetargetBiped  *, class CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > &, const class CRetargetingChain  *, const class CRetargetingChain  *); /* linkage=_ZNK14CRetargetBiped22ConvertWeightlistChainER10CUtlVectorIS0_If10CUtlMemoryIfiEES1_IS3_iEEPK17CRetargetingChainS9_ */
	void ConvertWeightlistChain(const class CRetargetBiped  *, class CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > &, int, int, int, float); /* linkage=_ZNK14CRetargetBiped22ConvertWeightlistChainER10CUtlVectorIS0_If10CUtlMemoryIfiEES1_IS3_iEEiiif */
};

// <026B1513> bonesetup/bone_utils.h:269
void CRetargetBiped::CRetargetBiped()
{
} /* size: 0 */

// <026B14FA> bonesetup/bone_utils.h:269
inline void CRetargetBiped::CRetargetBiped()
{
} /* size: 0 */


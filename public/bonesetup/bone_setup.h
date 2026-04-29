
//
// public/bonesetup/bone_setup.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <00BA09C1> ../public/bonesetup/bone_setup.h:27
// member functions: 44
// member variable: 1
// class size: 8
class IBoneSetup {
	/* ../public/bonesetup/bone_setup.h:30 */
	void IBoneSetup(IBoneSetup* , const CModel* );
	/* ../public/bonesetup/bone_setup.h:32 */
	void ~IBoneSetup(IBoneSetup* );
	/* ../public/bonesetup/bone_setup.h:35 */
	void StartFrame(IBoneSetup* , int, float);
	/* ../public/bonesetup/bone_setup.h:37 */
	void SetPoseParameters(IBoneSetup* , int, const float* );
	/* ../public/bonesetup/bone_setup.h:39 */
	void ConnectDebugger(IBoneSetup* , AnimationDecodeDebugDumpElement_t* , const CAnimationDecodeContext* );
	/* ../public/bonesetup/bone_setup.h:42 */
	bool AccumulateAnimationDecodeOp(IBoneSetup* , const CAnimationDecodeOp& );
	/* ../public/bonesetup/bone_setup.h:43 */
	bool AccumulateSequence(IBoneSetup* , HSequence, float, float);
	/* ../public/bonesetup/bone_setup.h:46 */
	bool BlendRawAnimation(IBoneSetup* , int, float, float);
	/* ../public/bonesetup/bone_setup.h:49 */
	void AddAutoplaySequences(IBoneSetup* );
	/* ../public/bonesetup/bone_setup.h:54 */
	void Evaluate(IBoneSetup* , const uint32* , uint32, CThreadLocalAnimationDecodeCache* );
	/* ../public/bonesetup/bone_setup.h:57 */
	void EvaluateAnimGraph(IBoneSetup* , IAnimationGraphInstance* , float, const uint32* , uint32);
	/* ../public/bonesetup/bone_setup.h:62 */
	bool GetParentSpaceBones(IBoneSetup* , int, CTransform* , const uint32* );
	/* ../public/bonesetup/bone_setup.h:63 */
	bool GetWorldSpaceBones(IBoneSetup* , int, CTransform* );
	/* ../public/bonesetup/bone_setup.h:64 */
	bool GetWorldSpaceBones(IBoneSetup* , int, matrix3x4a_t* );
	/* ../public/bonesetup/bone_setup.h:67 */
	bool SetParentSpaceBones(IBoneSetup* , int, CTransform* );
	/* ../public/bonesetup/bone_setup.h:68 */
	bool SetWorldSpaceBones(IBoneSetup* , int, CTransform* );
	/* ../public/bonesetup/bone_setup.h:71 */
	bool GetMorphTargets(IBoneSetup* , int, float* );
	/* ../public/bonesetup/bone_setup.h:74 */
	bool GetAllUserData(IBoneSetup* , int, void* );
	/* ../public/bonesetup/bone_setup.h:77 */
	bool GetUserDataElement(IBoneSetup* , int, void* );
	/* ../public/bonesetup/bone_setup.h:79 */
	const CModel* GetCModel(const IBoneSetup* );
	/* ../public/bonesetup/bone_setup.h:81 */
	CAnimationResult& GetAnimationResult(IBoneSetup* );
	/* ../public/bonesetup/bone_setup.h:82 */
	const CAnimationResult& GetAnimationResult(const IBoneSetup* );
private:
	CBoneSetup * m_pBoneSetup; /* 0 8 */
	void IBoneSetup(class IBoneSetup *, const class CModel  *); /* linkage=_ZN10IBoneSetupC4EPK6CModel */
	void ~IBoneSetup(class IBoneSetup *); /* linkage=_ZN10IBoneSetupD4Ev */
	void StartFrame(class IBoneSetup *, int, float); /* linkage=_ZN10IBoneSetup10StartFrameEif */
	void SetPoseParameters(class IBoneSetup *, int, const float  *); /* linkage=_ZN10IBoneSetup17SetPoseParametersEiPKf */
	void ConnectDebugger(class IBoneSetup *, class AnimationDecodeDebugDumpElement_t *, const class CAnimationDecodeContext  *); /* linkage=_ZN10IBoneSetup15ConnectDebuggerEP33AnimationDecodeDebugDumpElement_tPK23CAnimationDecodeContext */
	bool AccumulateAnimationDecodeOp(class IBoneSetup *, const class CAnimationDecodeOp  &); /* linkage=_ZN10IBoneSetup27AccumulateAnimationDecodeOpERK18CAnimationDecodeOp */
	bool AccumulateSequence(class IBoneSetup *, class HSequence, float, float); /* linkage=_ZN10IBoneSetup18AccumulateSequenceE9HSequenceff */
	bool BlendRawAnimation(class IBoneSetup *, int, float, float); /* linkage=_ZN10IBoneSetup17BlendRawAnimationEiff */
	void AddAutoplaySequences(class IBoneSetup *); /* linkage=_ZN10IBoneSetup20AddAutoplaySequencesEv */
	void Evaluate(class IBoneSetup *, const uint32  *, uint32, class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN10IBoneSetup8EvaluateEPKjjP32CThreadLocalAnimationDecodeCache */
	void EvaluateAnimGraph(class IBoneSetup *, class IAnimationGraphInstance *, float, const uint32  *, uint32); /* linkage=_ZN10IBoneSetup17EvaluateAnimGraphEP23IAnimationGraphInstancefPKjj */
	bool GetParentSpaceBones(class IBoneSetup *, int, class CTransform *, const uint32  *); /* linkage=_ZN10IBoneSetup19GetParentSpaceBonesEiP10CTransformPKj */
	bool GetWorldSpaceBones(class IBoneSetup *, int, class CTransform *); /* linkage=_ZN10IBoneSetup18GetWorldSpaceBonesEiP10CTransform */
	bool GetWorldSpaceBones(class IBoneSetup *, int, class matrix3x4a_t *); /* linkage=_ZN10IBoneSetup18GetWorldSpaceBonesEiP12matrix3x4a_t */
	bool SetParentSpaceBones(class IBoneSetup *, int, class CTransform *); /* linkage=_ZN10IBoneSetup19SetParentSpaceBonesEiP10CTransform */
	bool SetWorldSpaceBones(class IBoneSetup *, int, class CTransform *); /* linkage=_ZN10IBoneSetup18SetWorldSpaceBonesEiP10CTransform */
	bool GetMorphTargets(class IBoneSetup *, int, float *); /* linkage=_ZN10IBoneSetup15GetMorphTargetsEiPf */
	bool GetAllUserData(class IBoneSetup *, int, void *); /* linkage=_ZN10IBoneSetup14GetAllUserDataEiPv */
	bool GetUserDataElement(class IBoneSetup *, int, void *); /* linkage=_ZN10IBoneSetup18GetUserDataElementEiPv */
	const class CModel  * GetCModel(const class IBoneSetup  *); /* linkage=_ZNK10IBoneSetup9GetCModelEv */
	/* <273f724> bonesetup/bone_setup.cpp:136 */
	class CAnimationResult & GetAnimationResult(class IBoneSetup *); /* linkage=_ZN10IBoneSetup18GetAnimationResultEv */
	const class CAnimationResult  & GetAnimationResult(const class IBoneSetup  *); /* linkage=_ZNK10IBoneSetup18GetAnimationResultEv */
};

// <017168B6> ../public/bonesetup/bone_setup.h:30
void IBoneSetup::IBoneSetup(const CModel* pModel)
{
} /* size: 0 */

// <017167D7> ../public/bonesetup/bone_setup.h:32
void IBoneSetup::~IBoneSetup()
{
} /* size: 0 */

// <02590597> ../public/bonesetup/bone_setup.h:103
void BuildBoneChain(const CModel *, const matrix3x4a_t &, const CTransform *, int, matrix3x4a_t *, CBoneBitList &)
{
} /* size: 0 */

// <00C13D2F> ../public/bonesetup/bone_setup.h:111
bool Model_CreateRetargeting(const CModel *)
{
} /* size: 0 */

// <00C13C4D> ../public/bonesetup/bone_setup.h:112
bool Model_RetargetWeightlist(const CModel *, int, CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> > &)
{
} /* size: 0 */


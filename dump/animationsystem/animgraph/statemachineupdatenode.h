
//
// animationsystem/animgraph/statemachineupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	structs: 3
//

// <0085B806> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/statemachineupdatenode.h:23
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00835669> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/statemachineupdatenode.h:26
// member variables: 14
// struct size: 52
struct CTransitionUpdateData {
	CRelativeObjectArray<IConditionUpdater> m_conditions; /* 0 8 */
	CBlendCurve m_curve; /* 8 16 */
	int16 m_srcStateIndex; /* 24 2 */
	int16 m_destStateIndex; /* 26 2 */
	float m_blendDuration; /* 28 4 */
	float m_resetCycleValue; /* 32 4 */
	uint8 m_bReset:1; /* 36: 0 1 */
	uint8 m_resetCycleOption:2; /* 36: 1 1 */
	uint8 m_bForceFootPlant:1; /* 36: 3 1 */
	uint8 m_bDisabled:1; /* 36: 4 1 */
	uint8 m_bRandomTimeBetween:1; /* 36: 5 1 */
	float m_flRandomTimeStart; /* 40 4 */
	float m_flRandomTimeEnd; /* 44 4 */
	uint8 m_bBlendCycle:1; /* 48: 0 1 */
};

// <0083575B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/statemachineupdatenode.h:45
// member variables: 2
// struct size: 2
struct CStateTag {
	int8 m_tagIndex; /* 0 1 */
	StateTagBehavior m_tagBehavior; /* 1 1 */
};

// <00835E91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/statemachineupdatenode.h:52
// member variables: 9
// struct size: 28
struct CStateUpdateData {
	CRelativeOffset<const CAnimUpdateNodeBase> m_child; /* 0 4 */
	CRelativeArray<int> m_transitionIndices; /* 4 8 */
	CRelativeArray<CStateTag> m_tags; /* 12 8 */
	AnimStateID m_stateID; /* 20 4 */
	uint8 m_bIsStartState:1; /* 24: 0 1 */
	uint8 m_bIsEndState:1; /* 24: 1 1 */
	uint8 m_bIsPassthrough:1; /* 24: 2 1 */
	uint8 m_bExclusiveRootMotion:1; /* 24: 3 1 */
	uint8 m_bAlwaysEvaluate:1; /* 24: 4 1 */
};


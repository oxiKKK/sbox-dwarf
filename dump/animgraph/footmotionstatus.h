
//
// animgraph/footmotionstatus.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	structs: 3
//

// <01960312> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:12
inline void CFootMotionStatus::operator=(CFootMotionStatus &)
{
} /* size: 0 */

// <01857554> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:12
inline void CFootMotionStatus::operator=(const CFootMotionStatus &)
{
} /* size: 0 */

// <00EF3FB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:12
// member functions: 9
// member variables: 17
// struct size: 164
struct CFootMotionStatus {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:14 */
	void CFootMotionStatus(CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:15 */
	void CFootMotionStatus(CFootMotionStatus* , const CFootMotion& , const CAnimCycle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:18 */
	CFootCycle CalcCycleAtTime(const CFootMotionStatus* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:20 */
	bool IsStationary(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:23 */
	bool IsValid(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:26 */
	float GetRemainingCycleTime(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:28 */
	float GetElapsedCycleTime(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:30 */
	void Clear(CFootMotionStatus* );
	CMotionTransform m_remainingRootMotionMS; /* 0 16 */
	CMotionTransform m_nextRootTransformWS_Unmodified; /* 16 16 */
	CMotionTransform m_prevRootTransformWS_Unmodified; /* 32 16 */
	CFootTrajectory m_trajectory; /* 48 20 */
	CFootTrajectory m_vNextFootBaseTrajectory; /* 68 20 */
	Vector m_vStancePositionMS; /* 88 12 */
	Vector m_vMidpointPositionMS; /* 100 12 */
	Vector m_vNextStancePositionMS; /* 112 12 */
	float m_flStanceDirectionMS; /* 124 4 */
	float m_flNextStanceDirectionMS; /* 128 4 */
	Vector m_vToStrideStartPosMS; /* 132 12 */
	float m_flCyclesPerSecond; /* 144 4 */
	float m_flMaxExtent; /* 148 4 */
	CFootCycle m_footCycle; /* 152 4 */
	FootMotionStage m_eStage; /* 156 4 */
	bool m_bForcePark; /* 160 1 */
	bool m_bResetToTrajectory; /* 161 1 */
	CFootMotionStatus& operator=(CFootMotionStatus* , CFootMotionStatus& );
};

// <00FFBABB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:12
// member functions: 8
// member variables: 17
// struct size: 164
struct CFootMotionStatus {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:14 */
	void CFootMotionStatus(CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:15 */
	void CFootMotionStatus(CFootMotionStatus* , const CFootMotion& , const CAnimCycle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:18 */
	CFootCycle CalcCycleAtTime(const CFootMotionStatus* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:20 */
	bool IsStationary(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:23 */
	bool IsValid(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:26 */
	float GetRemainingCycleTime(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:28 */
	float GetElapsedCycleTime(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:30 */
	void Clear(CFootMotionStatus* );
	CMotionTransform m_remainingRootMotionMS; /* 0 16 */
	CMotionTransform m_nextRootTransformWS_Unmodified; /* 16 16 */
	CMotionTransform m_prevRootTransformWS_Unmodified; /* 32 16 */
	CFootTrajectory m_trajectory; /* 48 20 */
	CFootTrajectory m_vNextFootBaseTrajectory; /* 68 20 */
	Vector m_vStancePositionMS; /* 88 12 */
	Vector m_vMidpointPositionMS; /* 100 12 */
	Vector m_vNextStancePositionMS; /* 112 12 */
	float m_flStanceDirectionMS; /* 124 4 */
	float m_flNextStanceDirectionMS; /* 128 4 */
	Vector m_vToStrideStartPosMS; /* 132 12 */
	float m_flCyclesPerSecond; /* 144 4 */
	float m_flMaxExtent; /* 148 4 */
	CFootCycle m_footCycle; /* 152 4 */
	FootMotionStage m_eStage; /* 156 4 */
	bool m_bForcePark; /* 160 1 */
	bool m_bResetToTrajectory; /* 161 1 */
};

// <0152C183> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:12
// member functions: 10
// member variables: 17
// struct size: 164
struct CFootMotionStatus {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:14 */
	void CFootMotionStatus(CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:15 */
	void CFootMotionStatus(CFootMotionStatus* , const CFootMotion& , const CAnimCycle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:18 */
	CFootCycle CalcCycleAtTime(const CFootMotionStatus* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:20 */
	bool IsStationary(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:23 */
	bool IsValid(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:26 */
	float GetRemainingCycleTime(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:28 */
	float GetElapsedCycleTime(const CFootMotionStatus* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:30 */
	void Clear(CFootMotionStatus* );
	CMotionTransform m_remainingRootMotionMS; /* 0 16 */
	CMotionTransform m_nextRootTransformWS_Unmodified; /* 16 16 */
	CMotionTransform m_prevRootTransformWS_Unmodified; /* 32 16 */
	CFootTrajectory m_trajectory; /* 48 20 */
	CFootTrajectory m_vNextFootBaseTrajectory; /* 68 20 */
	Vector m_vStancePositionMS; /* 88 12 */
	Vector m_vMidpointPositionMS; /* 100 12 */
	Vector m_vNextStancePositionMS; /* 112 12 */
	float m_flStanceDirectionMS; /* 124 4 */
	float m_flNextStanceDirectionMS; /* 128 4 */
	Vector m_vToStrideStartPosMS; /* 132 12 */
	float m_flCyclesPerSecond; /* 144 4 */
	float m_flMaxExtent; /* 148 4 */
	CFootCycle m_footCycle; /* 152 4 */
	FootMotionStage m_eStage; /* 156 4 */
	bool m_bForcePark; /* 160 1 */
	bool m_bResetToTrajectory; /* 161 1 */
	CFootMotionStatus& operator=(CFootMotionStatus* , const CFootMotionStatus& );
	CFootMotionStatus& operator=(CFootMotionStatus* , CFootMotionStatus& );
};

// <00F3408D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:14
void CFootMotionStatus::CFootMotionStatus()
{
} /* size: 0 */

// <00F34059> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionstatus.h:15
void CFootMotionStatus::CFootMotionStatus(const CFootMotion& footMotion, const CAnimCycle& animCycle)
{
} /* size: 0 */


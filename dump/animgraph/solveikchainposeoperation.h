
//
// animgraph/solveikchainposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//	structs: 4
//

// <0191D2C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:24
void SolveIKChainPoseOpFixedSettings_t::SolveIKChainPoseOpFixedSettings_t()
{
} /* size: 0 */

// <0191D2A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:24
inline void SolveIKChainPoseOpFixedSettings_t::SolveIKChainPoseOpFixedSettings_t()
{
} /* size: 0 */

// <01227FBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:24
// member function: 1
// member variable: 1
// struct size: 8
struct SolveIKChainPoseOpFixedSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:26 */
	struct ChainToSolveData_t {
		int m_nChainIndex; /* 0 4 */
		IKSolverSettings_t m_SolverSettings; /* 4 8 */
		IKTargetSettings_t m_TargetSettings; /* 16 32 */
		SolveIKChainAnimNodeDebugSetting m_DebugSetting; /* 48 4 */
		float m_flDebugNormalizedValue; /* 52 4 */
		VectorAligned m_vDebugOffset __attribute__((__aligned__(16))); /* 64 16 */
	} __attribute__((__aligned__(16)));
	/* tag__fprintf: const_type tag not supported! */;
	CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t> m_ChainsToSolveData; /* 0 8 */
};

// <01906DC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:24
// member functions: 3
// member variable: 1
// struct size: 8
struct SolveIKChainPoseOpFixedSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:26 */
	struct ChainToSolveData_t {
		int m_nChainIndex; /* 0 4 */
		IKSolverSettings_t m_SolverSettings; /* 4 8 */
		IKTargetSettings_t m_TargetSettings; /* 16 32 */
		SolveIKChainAnimNodeDebugSetting m_DebugSetting; /* 48 4 */
		float m_flDebugNormalizedValue; /* 52 4 */
		VectorAligned m_vDebugOffset __attribute__((__aligned__(16))); /* 64 16 */
		void ChainToSolveData_t(ChainToSolveData_t* );
	} __attribute__((__aligned__(16)));
	/* tag__fprintf: const_type tag not supported! */;
	CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t> m_ChainsToSolveData; /* 0 8 */
	void SolveIKChainPoseOpFixedSettings_t(SolveIKChainPoseOpFixedSettings_t* );
};

// <0191D1AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:26
void ChainToSolveData_t::ChainToSolveData_t()
{
} /* size: 0 */

// <0191D193> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:26
inline void ChainToSolveData_t::ChainToSolveData_t()
{
} /* size: 0 */

// <0191D0C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:40
void SolveIKChainPoseOpInstanceSettings_t::SolveIKChainPoseOpInstanceSettings_t()
{
} /* size: 0 */

// <0191D0AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:40
inline void SolveIKChainPoseOpInstanceSettings_t::SolveIKChainPoseOpInstanceSettings_t()
{
} /* size: 0 */

// <01712FF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:40
// member function: 1
// member variables: 2
// struct size: 12
struct SolveIKChainPoseOpInstanceSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:42 */
	struct ChainToSolveData_t {
		CTransform m_xWsTargetIfSpecified __attribute__((__aligned__(16))); /* 0 32 */
	} __attribute__((__aligned__(16)));
	/* tag__fprintf: const_type tag not supported! */;
	CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t> m_ChainsToSolveData; /* 0 8 */
	float m_flLastSoftenTime; /* 8 4 */
};

// <0190735A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:40
// member functions: 3
// member variables: 2
// struct size: 12
struct SolveIKChainPoseOpInstanceSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:42 */
	struct ChainToSolveData_t {
		CTransform m_xWsTargetIfSpecified __attribute__((__aligned__(16))); /* 0 32 */
		void ChainToSolveData_t(ChainToSolveData_t* );
	} __attribute__((__aligned__(16)));
	/* tag__fprintf: const_type tag not supported! */;
	CRelativeArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t> m_ChainsToSolveData; /* 0 8 */
	float m_flLastSoftenTime; /* 8 4 */
	void SolveIKChainPoseOpInstanceSettings_t(SolveIKChainPoseOpInstanceSettings_t* );
};

// <017136BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:52
// member functions: 3
// class size: 1
class CSolveIKChainPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:55 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:57 */
		void OpSettings(OpSettings* , PoseHandle, CPackedHandle<SolveIKChainPoseOpFixedSettings_t>, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>);
		CPackedHandle<SolveIKChainPoseOpFixedSettings_t> m_hOpFixedSettings; /* 0 4 */
		CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> m_hOpInstanceSettings; /* 4 4 */
		PoseHandle m_hChildPose; /* 8 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:71 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, CPackedHandle<SolveIKChainPoseOpFixedSettings_t>, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:74 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <01946BD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:57
void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<SolveIKChainPoseOpFixedSettings_t> hFixedSettings, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> hInstanceSettings)
{
} /* size: 0 */

// <01946B99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainposeoperation.h:57
inline void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<SolveIKChainPoseOpFixedSettings_t> hFixedSettings, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> hInstanceSettings)
{
} /* size: 0 */


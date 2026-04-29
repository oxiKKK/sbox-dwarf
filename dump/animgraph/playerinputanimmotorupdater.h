
//
// animgraph/playerinputanimmotorupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0167797A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.h:14
void PlayerInputMotorInstanceData_t::PlayerInputMotorInstanceData_t()
{
} /* size: 0 */

// <0167795D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.h:14
inline void PlayerInputMotorInstanceData_t::PlayerInputMotorInstanceData_t()
{
} /* size: 0 */

// <01672B6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.h:14
// member functions: 2
// member variables: 4
// static member variable: 1
// struct size: 40
struct PlayerInputMotorInstanceData_t {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.h:16 */
	datamap_t* GetBaseMap(void);
	Vector m_vInputVectorWS; /* 0 12 */
	Vector m_vVelocityWS; /* 12 12 */
	Vector m_vAccelerationWS; /* 24 12 */
	bool m_bUseCustomAcceleration; /* 36 1 */
	void PlayerInputMotorInstanceData_t(PlayerInputMotorInstanceData_t* );
};

// <01675030> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.h:37
// member functions: 24
// member variables: 8
// vtable entries: 4
// class size: 48
class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase {
public:
	/* class CAnimMotorUpdaterBase <ancestor>; */ /* 0 24 */
	void CPlayerInputAnimMotorUpdater(CPlayerInputAnimMotorUpdater* , CPlayerInputAnimMotorUpdater& );
	void CPlayerInputAnimMotorUpdater(CPlayerInputAnimMotorUpdater* , const CPlayerInputAnimMotorUpdater& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:30 */
	void CPlayerInputAnimMotorUpdater(CPlayerInputAnimMotorUpdater* , CAnimGraphInitContext& , const CUtlVector<float, CUtlMemory<float, int> >& , const CUtlString& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:49 */
	virtual void Update(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , MovementData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:83 */
	virtual void FixupRootMotion(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:89 */
	virtual void Save(const CPlayerInputAnimMotorUpdater* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:96 */
	virtual void Restore(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:103 */
	void SetInputVector(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:112 */
	void SetUseCustomAcceleration(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:118 */
	void SetCustomAcceleration(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , const Vector& );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:124 */
	void UpdateWithAcceleration(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , MovementData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:220 */
	void UpdateWithoutAcceleration(const CPlayerInputAnimMotorUpdater* , CAnimGraphUpdateContext& , MovementData& );
	CRelativeArray<float> m_sampleTimes; /* 20 8 */
	CPackedHandle<PlayerInputMotorInstanceData_t> m_hInstData; /* 28 4 */
	float m_flSpringConstant; /* 32 4 */
	float m_flAnticipationDistance; /* 36 4 */
	CAnimParamHandle m_hAnticipationPosParam; /* 40 2 */
	CAnimParamHandle m_hAnticipationHeadingParam; /* 42 2 */
	bool m_bUseAcceleration; /* 44 1 */
	void CPlayerInputAnimMotorUpdater(class CPlayerInputAnimMotorUpdater *, class CPlayerInputAnimMotorUpdater &); /* linkage=_ZN28CPlayerInputAnimMotorUpdaterC4EOS_ */
	void CPlayerInputAnimMotorUpdater(class CPlayerInputAnimMotorUpdater *, const class CPlayerInputAnimMotorUpdater  &); /* linkage=_ZN28CPlayerInputAnimMotorUpdaterC4ERKS_ */
	void CPlayerInputAnimMotorUpdater(class CPlayerInputAnimMotorUpdater *, class CAnimGraphInitContext &, const class CUtlVector<float, CUtlMemory<float, int> >  &, const class CUtlString  &, bool); /* linkage=_ZN28CPlayerInputAnimMotorUpdaterC4ER21CAnimGraphInitContextRK10CUtlVectorIf10CUtlMemoryIfiEERK10CUtlStringb */
	/* <16891e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.cpp:49 */
	virtual void Update(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class MovementData &); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater6UpdateER23CAnimGraphUpdateContextR12MovementData */
	virtual void FixupRootMotion(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class CRootMotion &); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater15FixupRootMotionER23CAnimGraphUpdateContextR11CRootMotion */
	virtual void Save(const class CPlayerInputAnimMotorUpdater  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater4SaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void Restore(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater7RestoreER23CAnimGraphUpdateContextP8IRestore */
	void SetInputVector(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, const class Vector  &); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater14SetInputVectorER23CAnimGraphUpdateContextRK6Vector */
	void SetUseCustomAcceleration(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, bool); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater24SetUseCustomAccelerationER23CAnimGraphUpdateContextb */
	void SetCustomAcceleration(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, const class Vector  &); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater21SetCustomAccelerationER23CAnimGraphUpdateContextRK6Vector */
	void UpdateWithAcceleration(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class MovementData &); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater22UpdateWithAccelerationER23CAnimGraphUpdateContextR12MovementData */
	void UpdateWithoutAcceleration(const class CPlayerInputAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class MovementData &); /* linkage=_ZNK28CPlayerInputAnimMotorUpdater25UpdateWithoutAccelerationER23CAnimGraphUpdateContextR12MovementData */
};

// <01458A12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorupdater.h:40
void CPlayerInputAnimMotorUpdater::CPlayerInputAnimMotorUpdater(CAnimGraphInitContext& initContext, const CUtlVector<float, CUtlMemory<float, int> >& sampleTimes, const CUtlString& name, bool bIsDefault)
{
} /* size: 0 */



//
// animgraph/animmovementupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	structs: 2
//

// <01582219> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:15
void MovementData::MovementData()
{
} /* size: 0 */

// <015821FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:15
inline void MovementData::MovementData()
{
} /* size: 0 */

// <00DE745C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:15
// member function: 1
// member variables: 15
// static member variable: 1
// struct size: 96
struct MovementData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:17 */
	datamap_t* GetBaseMap(void);
	Vector m_goalWayPointPos; /* 0 12 */
	Vector m_vMoveDir; /* 12 12 */
	Vector m_vAcceleration; /* 24 12 */
	Vector m_vLookTarget; /* 36 12 */
	Vector m_vSlopeNormal; /* 48 12 */
	float m_flCurrentMoveSpeed; /* 60 4 */
	float m_flTargetMoveSpeed; /* 64 4 */
	float m_flManualFacingHeading; /* 68 4 */
	float m_flFacingHeading; /* 72 4 */
	float m_flGoalDistance; /* 76 4 */
	int m_nActiveMotorIndex; /* 80 4 */
	FacingMode m_eFacingMode; /* 84 4 */
	bool m_bGoalChanged; /* 88 1 */
	bool m_bOnGround; /* 89 1 */
	float m_flBoundaryRadius; /* 92 4 */
};

// <0155F524> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:15
// member functions: 2
// member variables: 15
// static member variable: 1
// struct size: 96
struct MovementData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:17 */
	datamap_t* GetBaseMap(void);
	Vector m_goalWayPointPos; /* 0 12 */
	Vector m_vMoveDir; /* 12 12 */
	Vector m_vAcceleration; /* 24 12 */
	Vector m_vLookTarget; /* 36 12 */
	Vector m_vSlopeNormal; /* 48 12 */
	float m_flCurrentMoveSpeed; /* 60 4 */
	float m_flTargetMoveSpeed; /* 64 4 */
	float m_flManualFacingHeading; /* 68 4 */
	float m_flFacingHeading; /* 72 4 */
	float m_flGoalDistance; /* 76 4 */
	int m_nActiveMotorIndex; /* 80 4 */
	FacingMode m_eFacingMode; /* 84 4 */
	bool m_bGoalChanged; /* 88 1 */
	bool m_bOnGround; /* 89 1 */
	float m_flBoundaryRadius; /* 92 4 */
	void MovementData(MovementData* );
};

// <00DE7C60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:43
// member functions: 54
// member variables: 6
// class size: 24
class CAnimMovementUpdater {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:46 */
	void CAnimMovementUpdater(CAnimMovementUpdater* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:49 */
	void Update(const CAnimMovementUpdater* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:52 */
	void FixupRootMotion(const CAnimMovementUpdater* , CAnimGraphUpdateContext& , CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:55 */
	int GetMotorCount(const CAnimMovementUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:58 */
	const CAnimMotorUpdaterBase* GetMotor(const CAnimMovementUpdater* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:61 */
	int GetDefaultMotor(const CAnimMovementUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:64 */
	int GetActiveMotor(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:65 */
	void SetActiveMotor(const CAnimMovementUpdater* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:69 */
	bool GetValue(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& , AnimValueSource, float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:73 */
	bool GetVectorValue(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& , AnimVectorSource, Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:76 */
	CAnimPath& GetPath(const CAnimMovementUpdater* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:77 */
	const CAnimPath& GetPath(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:80 */
	bool HasPath(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:82 */
	bool HasGoalChanged(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:85 */
	Vector GetCurrentWaypoint(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:88 */
	float GetManualFacingHeading(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:89 */
	void SetManualFacingHeading(const CAnimMovementUpdater* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:92 */
	FacingMode GetFacingMode(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:93 */
	void SetFacingMode(const CAnimMovementUpdater* , CAnimGraphUpdateContext& , FacingMode);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:96 */
	bool IsOnGround(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:97 */
	void SetOnGround(const CAnimMovementUpdater* , CAnimGraphUpdateContext& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:99 */
	MovementData* GetMoveData(const CAnimMovementUpdater* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:100 */
	const MovementData* GetMoveData(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:102 */
	bool ShouldCalculateSlope(const CAnimMovementUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:104 */
	void Save(const CAnimMovementUpdater* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:105 */
	void Restore(const CAnimMovementUpdater* , CAnimGraphUpdateContext& , IRestore* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:108 */
	void UpdateDistanceToGoal(const CAnimMovementUpdater* , CAnimGraphUpdateContext& );
	CRelativeObjectArray<const CAnimMotorUpdaterBase> m_motors; /* 0 8 */
	CPackedHandle<MovementData> m_hMoveData; /* 8 4 */
	CPackedHandle<CAnimPath> m_hPathData; /* 12 4 */
	int m_nDefaultMotorIndex; /* 16 4 */
	bool m_bMoveVarsDisabled; /* 20 1 */
	bool m_bShouldCalculateSlope; /* 21 1 */
	void CAnimMovementUpdater(class CAnimMovementUpdater *, class CAnimGraphInitContext &, int); /* linkage=_ZN20CAnimMovementUpdaterC4ER21CAnimGraphInitContexti */
	void Update(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK20CAnimMovementUpdater6UpdateER23CAnimGraphUpdateContext */
	void FixupRootMotion(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &, class CRootMotion &); /* linkage=_ZNK20CAnimMovementUpdater15FixupRootMotionER23CAnimGraphUpdateContextR11CRootMotion */
	int GetMotorCount(const class CAnimMovementUpdater  *); /* linkage=_ZNK20CAnimMovementUpdater13GetMotorCountEv */
	const class CAnimMotorUpdaterBase  * GetMotor(const class CAnimMovementUpdater  *, int); /* linkage=_ZNK20CAnimMovementUpdater8GetMotorEi */
	int GetDefaultMotor(const class CAnimMovementUpdater  *); /* linkage=_ZNK20CAnimMovementUpdater15GetDefaultMotorEv */
	int GetActiveMotor(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater14GetActiveMotorERK23CAnimGraphUpdateContext */
	void SetActiveMotor(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK20CAnimMovementUpdater14SetActiveMotorER23CAnimGraphUpdateContexti */
	bool GetValue(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &, enum AnimValueSource, float &); /* linkage=_ZNK20CAnimMovementUpdater8GetValueERK23CAnimGraphUpdateContext15AnimValueSourceRf */
	bool GetVectorValue(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &, enum AnimVectorSource, class Vector &); /* linkage=_ZNK20CAnimMovementUpdater14GetVectorValueERK23CAnimGraphUpdateContext16AnimVectorSourceR6Vector */
	/* <15d3a96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:468 */
	class CAnimPath & GetPath(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK20CAnimMovementUpdater7GetPathER23CAnimGraphUpdateContext */
	const class CAnimPath  & GetPath(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater7GetPathERK23CAnimGraphUpdateContext */
	/* <15d3c1f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:484 */
	bool HasPath(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater7HasPathERK23CAnimGraphUpdateContext */
	/* <15d3e0d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:492 */
	bool HasGoalChanged(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater14HasGoalChangedERK23CAnimGraphUpdateContext */
	/* <15d3f96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:500 */
	class Vector GetCurrentWaypoint(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater18GetCurrentWaypointERK23CAnimGraphUpdateContext */
	float GetManualFacingHeading(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater22GetManualFacingHeadingERK23CAnimGraphUpdateContext */
	void SetManualFacingHeading(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK20CAnimMovementUpdater22SetManualFacingHeadingER23CAnimGraphUpdateContextf */
	/* <15d452e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:532 */
	enum FacingMode GetFacingMode(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater13GetFacingModeERK23CAnimGraphUpdateContext */
	/* <15d46b7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:540 */
	void SetFacingMode(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &, enum FacingMode); /* linkage=_ZNK20CAnimMovementUpdater13SetFacingModeER23CAnimGraphUpdateContext10FacingMode */
	/* <15d4841> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:548 */
	bool IsOnGround(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater10IsOnGroundERK23CAnimGraphUpdateContext */
	void SetOnGround(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &, bool); /* linkage=_ZNK20CAnimMovementUpdater11SetOnGroundER23CAnimGraphUpdateContextb */
	/* <15d49ca> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.cpp:564 */
	class MovementData * GetMoveData(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK20CAnimMovementUpdater11GetMoveDataER23CAnimGraphUpdateContext */
	const class MovementData  * GetMoveData(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CAnimMovementUpdater11GetMoveDataERK23CAnimGraphUpdateContext */
	bool ShouldCalculateSlope(const class CAnimMovementUpdater  *); /* linkage=_ZNK20CAnimMovementUpdater20ShouldCalculateSlopeEv */
	void Save(const class CAnimMovementUpdater  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK20CAnimMovementUpdater4SaveERK23CAnimGraphUpdateContextP5ISave */
	void Restore(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK20CAnimMovementUpdater7RestoreER23CAnimGraphUpdateContextP8IRestore */
	void UpdateDistanceToGoal(const class CAnimMovementUpdater  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK20CAnimMovementUpdater20UpdateDistanceToGoalER23CAnimGraphUpdateContext */
};

// <012FF468> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementupdater.h:46
void CAnimMovementUpdater::CAnimMovementUpdater(CAnimGraphInitContext& initContext, int nMotorCount)
{
} /* size: 0 */


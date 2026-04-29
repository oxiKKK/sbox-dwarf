
//
// animgraph/dampedpathanimmotorupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <01677C4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.h:14
void DampedPathMotorInstanceData_t::DampedPathMotorInstanceData_t()
{
} /* size: 0 */

// <01677C31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.h:14
inline void DampedPathMotorInstanceData_t::DampedPathMotorInstanceData_t()
{
} /* size: 0 */

// <0166F86C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.h:14
// member functions: 2
// member variables: 4
// static member variable: 1
// struct size: 40
struct DampedPathMotorInstanceData_t {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.h:16 */
	datamap_t* GetBaseMap(void);
	Vector m_vVelocity; /* 0 12 */
	Vector m_vAcceleration; /* 12 12 */
	Vector m_vJerk; /* 24 12 */
	bool m_bStopping; /* 36 1 */
	void DampedPathMotorInstanceData_t(DampedPathMotorInstanceData_t* );
};

// <016755AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.h:27
// member functions: 16
// member variables: 8
// vtable entries: 3
// class size: 88
class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase {
public:
	/* class CPathAnimMotorUpdaterBase <ancestor>; */ /* 0 64 */
	void CDampedPathAnimMotorUpdater(CDampedPathAnimMotorUpdater* , CDampedPathAnimMotorUpdater& );
	void CDampedPathAnimMotorUpdater(CDampedPathAnimMotorUpdater* , const CDampedPathAnimMotorUpdater& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:138 */
	void CDampedPathAnimMotorUpdater(CDampedPathAnimMotorUpdater* , CAnimGraphInitContext& , const CAnimInputDamping& , bool, const CUtlString& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:147 */
	virtual void Update(const CDampedPathAnimMotorUpdater* , CAnimGraphUpdateContext& , MovementData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:168 */
	virtual void Save(const CDampedPathAnimMotorUpdater* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:175 */
	virtual void Restore(const CDampedPathAnimMotorUpdater* , CAnimGraphUpdateContext& , IRestore* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:182 */
	CTransform SimMovement(const CDampedPathAnimMotorUpdater* , const CAnimGraphUpdateContext& , MovementData& , DampedPathMotorInstanceData_t& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.cpp:420 */
	void SimSpring(const CDampedPathAnimMotorUpdater* , Vector& , Vector& , const Vector& , float);
	CPackedHandle<DampedPathMotorInstanceData_t> m_hInstData; /* 64 4 */
	float m_flAnticipationTime; /* 68 4 */
	CAnimParamHandle m_hAnticipationPosParam; /* 72 2 */
	CAnimParamHandle m_hAnticipationHeadingParam; /* 74 2 */
	float m_flSpringConstant; /* 76 4 */
	float m_flMinSpringTension; /* 80 4 */
	float m_flMaxSpringTension; /* 84 4 */
	void CDampedPathAnimMotorUpdater(class CDampedPathAnimMotorUpdater *, class CDampedPathAnimMotorUpdater &); /* linkage=_ZN27CDampedPathAnimMotorUpdaterC4EOS_ */
	void CDampedPathAnimMotorUpdater(class CDampedPathAnimMotorUpdater *, const class CDampedPathAnimMotorUpdater  &); /* linkage=_ZN27CDampedPathAnimMotorUpdaterC4ERKS_ */
	void CDampedPathAnimMotorUpdater(class CDampedPathAnimMotorUpdater *, class CAnimGraphInitContext &, const class CAnimInputDamping  &, bool, const class CUtlString  &, bool); /* linkage=_ZN27CDampedPathAnimMotorUpdaterC4ER21CAnimGraphInitContextRK17CAnimInputDampingbRK10CUtlStringb */
	virtual void Update(const class CDampedPathAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class MovementData &); /* linkage=_ZNK27CDampedPathAnimMotorUpdater6UpdateER23CAnimGraphUpdateContextR12MovementData */
	virtual void Save(const class CDampedPathAnimMotorUpdater  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK27CDampedPathAnimMotorUpdater4SaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void Restore(const class CDampedPathAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK27CDampedPathAnimMotorUpdater7RestoreER23CAnimGraphUpdateContextP8IRestore */
	class CTransform SimMovement(const class CDampedPathAnimMotorUpdater  *, const class CAnimGraphUpdateContext  &, class MovementData &, class DampedPathMotorInstanceData_t &, float); /* linkage=_ZNK27CDampedPathAnimMotorUpdater11SimMovementERK23CAnimGraphUpdateContextR12MovementDataR29DampedPathMotorInstanceData_tf */
	void SimSpring(const class CDampedPathAnimMotorUpdater  *, class Vector &, class Vector &, const class Vector  &, float); /* linkage=_ZNK27CDampedPathAnimMotorUpdater9SimSpringER6VectorS1_RKS0_f */
};

// <01458B79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/dampedpathanimmotorupdater.h:30
void CDampedPathAnimMotorUpdater::CDampedPathAnimMotorUpdater(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
} /* size: 0 */


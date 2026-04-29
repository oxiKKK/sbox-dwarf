
//
// animgraph/pathanimmotorupdaterbase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//	struct: 1
//

// <01677AAE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.h:12
void PathMotorInstanceData_t::PathMotorInstanceData_t()
{
} /* size: 0 */

// <01677A91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.h:12
inline void PathMotorInstanceData_t::PathMotorInstanceData_t()
{
} /* size: 0 */

// <0166F1A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.h:12
// member functions: 2
// member variable: 1
// static member variable: 1
// struct size: 12
struct PathMotorInstanceData_t {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.h:14 */
	datamap_t* GetBaseMap(void);
	CDampedValue m_dampedFacingValue; /* 0 12 */
	void PathMotorInstanceData_t(PathMotorInstanceData_t* );
};

// <01675308> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.h:22
// member functions: 12
// member variables: 4
// vtable entry: 1
// class size: 64
class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase {
public:
	/* class CAnimMotorUpdaterBase <ancestor>; */ /* 0 24 */
	void ~CPathAnimMotorUpdaterBase(CPathAnimMotorUpdaterBase* );
	void CPathAnimMotorUpdaterBase(CPathAnimMotorUpdaterBase* , CPathAnimMotorUpdaterBase& );
	void CPathAnimMotorUpdaterBase(CPathAnimMotorUpdaterBase* , const CPathAnimMotorUpdaterBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.cpp:12 */
	void CPathAnimMotorUpdaterBase(CPathAnimMotorUpdaterBase* , CAnimGraphInitContext& , const CAnimInputDamping& , bool, const CUtlString& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.cpp:21 */
	virtual void FixupRootMotion(const CPathAnimMotorUpdaterBase* , CAnimGraphUpdateContext& , CRootMotion& );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdaterbase.cpp:62 */
	void UpdateFacing(const CPathAnimMotorUpdaterBase* , CAnimGraphUpdateContext& , MovementData& );
private:
	CAnimInputDamping m_facingDamping; /* 24 0 */
	CPackedHandle<PathMotorInstanceData_t> m_hInstData; /* 56 4 */
	bool m_bLockToPath; /* 60 1 */
	void ~CPathAnimMotorUpdaterBase(class CPathAnimMotorUpdaterBase *); /* linkage=_ZN25CPathAnimMotorUpdaterBaseD4Ev */
	void CPathAnimMotorUpdaterBase(class CPathAnimMotorUpdaterBase *, class CPathAnimMotorUpdaterBase &); /* linkage=_ZN25CPathAnimMotorUpdaterBaseC4EOS_ */
	void CPathAnimMotorUpdaterBase(class CPathAnimMotorUpdaterBase *, const class CPathAnimMotorUpdaterBase  &); /* linkage=_ZN25CPathAnimMotorUpdaterBaseC4ERKS_ */
	void CPathAnimMotorUpdaterBase(class CPathAnimMotorUpdaterBase *, class CAnimGraphInitContext &, const class CAnimInputDamping  &, bool, const class CUtlString  &, bool); /* linkage=_ZN25CPathAnimMotorUpdaterBaseC4ER21CAnimGraphInitContextRK17CAnimInputDampingbRK10CUtlStringb */
	virtual void FixupRootMotion(const class CPathAnimMotorUpdaterBase  *, class CAnimGraphUpdateContext &, class CRootMotion &); /* linkage=_ZNK25CPathAnimMotorUpdaterBase15FixupRootMotionER23CAnimGraphUpdateContextR11CRootMotion */
	void UpdateFacing(const class CPathAnimMotorUpdaterBase  *, class CAnimGraphUpdateContext &, class MovementData &); /* linkage=_ZNK25CPathAnimMotorUpdaterBase12UpdateFacingER23CAnimGraphUpdateContextR12MovementData */
};

